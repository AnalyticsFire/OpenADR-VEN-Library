/*
 * GlobalTimeStandard.cpp
 *
 *  Created on: Dec 14, 2015
 *      Author: dupes
 */

#include "GlobalTimeStandard.h"

time_t GlobalTimeStandard::now()
{
	return time(NULL);
}
