/*
 * VENManagerTest.cpp
 *
 *  Created on: May 20, 2021
 *      Author: Michal Kowalczyk
 */

#include <gmock/gmock.h>

#include <oadr/manager/VENManager.h>

#include <oadrtest/helper/HttpDelegate.h>
#include <oadrtest/helper/LoadFile.h>
#include <oadrtest/helper/MockEventService.h>
#include <oadrtest/helper/MockOADRExceptionService.h>

#include "reportmanager/BlankReportService.h"

using testing::_;
using testing::AtLeast;
using testing::HasSubstr;
using testing::Return;
using testing::ReturnRef;

namespace
{
	// This class has a G prefix since there already exists MockHttp class which doesn't use GoogleMock
	// Consider porting the code using the latter mock to switch to use the former.
	class GMockHttp : public IHttp
	{
	public:
		MOCK_METHOD(bool, post, (std::string, std::string));

		MOCK_METHOD(void, setParameters, (std::string, std::string, std::string, bool, std::string, long));

		MOCK_METHOD(std::string&, getRequestBody, ());
		MOCK_METHOD(std::string&, getResponseBody, ());

		MOCK_METHOD(std::string&, getResponseCode, ());
		MOCK_METHOD(std::string&, getResponseMessage, ());

		MOCK_METHOD(time_t, getResponseTime, ());
		MOCK_METHOD(std::string&, getServerDate, ());
	};

	std::unique_ptr<IVENManager> createVENManager(IHttp &http,
	                                              IEventService &eventService,
	                                              IReportService &reportService,
	                                              IOADRExceptionService &exceptionService)
	{
		VENManagerConfig config;

		// set the time window size to 1 second after unsuccessful registration and an exception thrown
		config.registerRetryInterval = std::chrono::seconds(1);
		config.exceptionRetryInterval = std::chrono::seconds(1);

		config.services.eventService = &eventService;
		config.services.reportService = &reportService;
		config.services.exceptionService = &exceptionService;
		config.services.oadrMessage = &OadrMessageBlank::oadrMessageBlank;

		return std::unique_ptr<IVENManager>(VENManager::init(config, std::unique_ptr<IHttp>(new HttpDelegate(http))));
	}
}

/**
 * Testing the VENManager class is challenging due to its interface:
 * - run() blocks the current thread to exchange messages between the VEN and VTN,
 * - stop() lets gracefully finish the run() method.
 * The stop() method switches the internal state of the VENManager so when run() method finishes its latest task,
 * it will not start another one.
 *
 * Since the methods don't return any value, we cannot use a typical Arrange-Act-Assert test pattern. Instead,
 * we check how the VENManager interacts with other classes. We use dependency injection technique to use
 * mocked classes instead of classes with the actual implementation. All that that we test are calls that we expect
 * to be done on the mock objects.
 *
 * A test must call the run() and stop() methods on different threads.
 *
 * If the method stop() is called too early, the VENManager may not reach the desired place
 * in the path of execution and in the result the test will fail since some expecations won't be saturated.
 * If the method stop() is called too late, the VENManager may make some additional calls that weren't expecting
 * according to the test scenario and in the result the test will fail too.
 *
 * What makes the task even harder is a non-deterministic behavior of a thread scheduler. We have no way to inject
 * additional synchronization mechanisms into the VENManager that will let us control when exactly the stop()
 * is executed. Because of that, our tests must rely on the internal synchronization mechanisms of the VENManager.
 *
 * The VENManager uses condition_variable, which will wait some time before the next task is being proceeded.
 * There are 2 places where the time intervals are defined:
 * - the VENManagerConfig through the fields registerRetryInterval and exceptionRetryInterval.
 * - the oadrCreatedPartyRegistration response in the field oadrRequestedOadrPollFreq.
 *
 * In our tests we set those intervals to values greater than 0 seconds so that we can use them as time windows
 * for triggering the stop() method.
 *
 * The time windows occur after:
 * - a registration attempt was not successful (including the first poll),
 * - a second and each consecutive poll (assuming successful registration),
 * - an exception occurred.
 */
class VENManagerTest : public testing::Test
{
public:
	VENManagerTest()
	: createPartyRegistrationResponse(LoadFile::loadTestInputFile("created_party_registration.xml"))
	, requestReregistration(LoadFile::loadTestInputFile("request_reregistration.xml"))
	, responseOK(LoadFile::loadTestInputFile("response.xml"))
	, responseCode("200")
	, emptyString()
	, http()
	, eventService()
	, reportService()
	, exceptionService()
	, venManager(createVENManager(http, eventService, reportService, exceptionService))
	, stopVENManager([&]()
			{
				std::thread t([&]() { venManager->stop(); });
				t.detach();
				return true;
			})
	{
		// If IHttp::post() is called but none of expected calls is satisfied, let the VENManager to stop.
		ON_CALL(http, post(_, _)).WillByDefault(stopVENManager);

		// TODO: consider removing IHttp::getResponseMessage since nobody is using that
		EXPECT_CALL(http, getResponseMessage()).WillRepeatedly(ReturnRef(emptyString));

		EXPECT_CALL(http, getResponseCode()).WillRepeatedly(ReturnRef(responseCode));
	}

protected:
	std::string createPartyRegistrationResponse;
	std::string requestReregistration;
	std::string responseOK;
	std::string responseCode;
	std::string emptyString;

	testing::StrictMock<GMockHttp> http;
	testing::StrictMock<MockEventService> eventService;
	BlankReportService reportService;
	testing::StrictMock<MockOADRExceptionService> exceptionService;

	std::unique_ptr<IVENManager> venManager;
	std::function<bool()> stopVENManager;
};

// The happy path.
// As the time window to call the stop() method use the interval between consecutive polls defined in
// the created_party_registration.xml message (the field oadrRequestedOadrPollFreq).
TEST_F(VENManagerTest, venGetsRegistrated_vtnRespondsToFirstPollWithEmptyResponse_requestEvents)
{
	testing::InSequence expectCallsInSequence;

	// Send oadrCreatePartyRegistration and receive oadrCreatedPartyRegistration
	EXPECT_CALL(http, post(_, HasSubstr("oadrCreatePartyRegistration"))).WillOnce(Return(true));
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(createPartyRegistrationResponse));

	// Send oadrRegisterReport and receive any message (it is ignored anyway)
	EXPECT_CALL(http, post(_, HasSubstr("oadrRegisterReport"))).WillOnce(Return(true));
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(responseOK));

	// Send oadrPoll and receive oadrResponse OK
	EXPECT_CALL(http, post(_, HasSubstr("oadrPoll"))).WillOnce(Return(true));
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(responseOK));

	// Send oadrRequestEvent and receive oadrRequestReregistration
	EXPECT_CALL(http, post(_, HasSubstr("oadrRequestEvent"))).WillOnce(Return(true));
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(responseOK));

	// When the message is send, stop VENManager from another thread
	EXPECT_CALL(http, post(_, HasSubstr("oadrPoll"))).WillOnce(stopVENManager);
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(responseOK));

	venManager->run();
}

// Edge case when during registration the VTN requests reregistration.
// As the time window to call the stop() method use the interval between registration attempts defined in
// the VENManagerConfig object (the field registerRetryInterval).
TEST_F(VENManagerTest, venGetsRegistrated_vtnRespondsToFirstPollWithReregister_getIntoUnregisteredState)
{
	testing::InSequence expectCallsInSequence;

	// Send oadrCreatePartyRegistration and receive oadrCreatedPartyRegistration
	EXPECT_CALL(http, post(_, HasSubstr("oadrCreatePartyRegistration"))).WillOnce(Return(true));
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(createPartyRegistrationResponse));

	// Send oadrRegisterReport and receive any message (it is ignored anyway)
	EXPECT_CALL(http, post(_, HasSubstr("oadrRegisterReport"))).WillOnce(Return(true));
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(responseOK));

	// Send oadrPoll and receive oadrRequestReregistration
	// When the message is send, stop VENManager from another thread
	EXPECT_CALL(http, post(_, HasSubstr("oadrPoll"))).WillOnce(stopVENManager);
	EXPECT_CALL(http, getResponseBody()).Times(AtLeast(1)).WillRepeatedly(ReturnRef(requestReregistration));

	venManager->run();
}
