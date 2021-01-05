// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef READING_TYPE_HXX
#define READING_TYPE_HXX

#ifndef XSD_CXX11
#define XSD_CXX11
#endif

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

#include <xsd/cxx/xml/dom/serialization-header.hxx>
#include <xsd/cxx/tree/serialization.hxx>
#include <xsd/cxx/tree/serialization/byte.hxx>
#include <xsd/cxx/tree/serialization/unsigned-byte.hxx>
#include <xsd/cxx/tree/serialization/short.hxx>
#include <xsd/cxx/tree/serialization/unsigned-short.hxx>
#include <xsd/cxx/tree/serialization/int.hxx>
#include <xsd/cxx/tree/serialization/unsigned-int.hxx>
#include <xsd/cxx/tree/serialization/long.hxx>
#include <xsd/cxx/tree/serialization/unsigned-long.hxx>
#include <xsd/cxx/tree/serialization/boolean.hxx>
#include <xsd/cxx/tree/serialization/float.hxx>
#include <xsd/cxx/tree/serialization/double.hxx>
#include <xsd/cxx/tree/serialization/decimal.hxx>

#include <xsd/cxx/tree/std-ostream-operators.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< char, type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  typedef ::xsd::cxx::tree::content_order content_order;
  // Namespace information and list stream. Used in
  // serialization functions.
  //
  typedef ::xsd::cxx::xml::dom::namespace_info< char > namespace_info;
  typedef ::xsd::cxx::xml::dom::namespace_infomap< char > namespace_infomap;
  typedef ::xsd::cxx::tree::list_stream< char > list_stream;
  typedef ::xsd::cxx::tree::as_double< double_ > as_double;
  typedef ::xsd::cxx::tree::as_decimal< decimal > as_decimal;
  typedef ::xsd::cxx::tree::facet facet;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;
  typedef ::xsd::cxx::tree::no_type_info< char > no_type_info;
  typedef ::xsd::cxx::tree::not_derived< char > not_derived;
  typedef ::xsd::cxx::tree::serialization< char > serialization;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::unique_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace espi
{
  class ReadingType;
}


#include <memory>    // ::std::unique_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search
#include <utility>   // std::move

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "IdentifiedObject.hxx"

namespace espi
{
  class AccumulationKind;
}

namespace espi
{
  class CommodityKind;
}

namespace espi
{
  class Int16;
}

namespace espi
{
  class Currency;
}

namespace espi
{
  class DataQualifierKind;
}

namespace espi
{
  class QualityOfReading;
}

namespace espi
{
  class FlowDirectionKind;
}

namespace espi
{
  class UInt32;
}

namespace espi
{
  class MeasurementKind;
}

namespace espi
{
  class PhaseCodeKind;
}

namespace espi
{
  class UnitMultiplierKind;
}

namespace espi
{
  class TimePeriodOfInterest;
}

namespace espi
{
  class UnitSymbolKind;
}

namespace espi
{
  class ReadingInterharmonic;
}

namespace espi
{
  class TimeAttributeKind;
}

namespace espi
{
  class RationalNumber;
}

namespace espi
{
  class ReadingType: public ::espi::IdentifiedObject
  {
    public:
    // accumulationBehaviour
    //
    typedef ::espi::AccumulationKind accumulationBehaviour_type;
    typedef ::xsd::cxx::tree::optional< accumulationBehaviour_type > accumulationBehaviour_optional;
    typedef ::xsd::cxx::tree::traits< accumulationBehaviour_type, char > accumulationBehaviour_traits;

    const accumulationBehaviour_optional&
    accumulationBehaviour () const;

    accumulationBehaviour_optional&
    accumulationBehaviour ();

    void
    accumulationBehaviour (const accumulationBehaviour_type& x);

    void
    accumulationBehaviour (const accumulationBehaviour_optional& x);

    void
    accumulationBehaviour (::std::unique_ptr< accumulationBehaviour_type > p);

    // commodity
    //
    typedef ::espi::CommodityKind commodity_type;
    typedef ::xsd::cxx::tree::optional< commodity_type > commodity_optional;
    typedef ::xsd::cxx::tree::traits< commodity_type, char > commodity_traits;

    const commodity_optional&
    commodity () const;

    commodity_optional&
    commodity ();

    void
    commodity (const commodity_type& x);

    void
    commodity (const commodity_optional& x);

    void
    commodity (::std::unique_ptr< commodity_type > p);

    // consumptionTier
    //
    typedef ::espi::Int16 consumptionTier_type;
    typedef ::xsd::cxx::tree::optional< consumptionTier_type > consumptionTier_optional;
    typedef ::xsd::cxx::tree::traits< consumptionTier_type, char > consumptionTier_traits;

    const consumptionTier_optional&
    consumptionTier () const;

    consumptionTier_optional&
    consumptionTier ();

    void
    consumptionTier (const consumptionTier_type& x);

    void
    consumptionTier (const consumptionTier_optional& x);

    void
    consumptionTier (::std::unique_ptr< consumptionTier_type > p);

    // currency
    //
    typedef ::espi::Currency currency_type;
    typedef ::xsd::cxx::tree::optional< currency_type > currency_optional;
    typedef ::xsd::cxx::tree::traits< currency_type, char > currency_traits;

    const currency_optional&
    currency () const;

    currency_optional&
    currency ();

    void
    currency (const currency_type& x);

    void
    currency (const currency_optional& x);

    void
    currency (::std::unique_ptr< currency_type > p);

    // dataQualifier
    //
    typedef ::espi::DataQualifierKind dataQualifier_type;
    typedef ::xsd::cxx::tree::optional< dataQualifier_type > dataQualifier_optional;
    typedef ::xsd::cxx::tree::traits< dataQualifier_type, char > dataQualifier_traits;

    const dataQualifier_optional&
    dataQualifier () const;

    dataQualifier_optional&
    dataQualifier ();

    void
    dataQualifier (const dataQualifier_type& x);

    void
    dataQualifier (const dataQualifier_optional& x);

    void
    dataQualifier (::std::unique_ptr< dataQualifier_type > p);

    // defaultQuality
    //
    typedef ::espi::QualityOfReading defaultQuality_type;
    typedef ::xsd::cxx::tree::optional< defaultQuality_type > defaultQuality_optional;
    typedef ::xsd::cxx::tree::traits< defaultQuality_type, char > defaultQuality_traits;

    const defaultQuality_optional&
    defaultQuality () const;

    defaultQuality_optional&
    defaultQuality ();

    void
    defaultQuality (const defaultQuality_type& x);

    void
    defaultQuality (const defaultQuality_optional& x);

    void
    defaultQuality (::std::unique_ptr< defaultQuality_type > p);

    // flowDirection
    //
    typedef ::espi::FlowDirectionKind flowDirection_type;
    typedef ::xsd::cxx::tree::optional< flowDirection_type > flowDirection_optional;
    typedef ::xsd::cxx::tree::traits< flowDirection_type, char > flowDirection_traits;

    const flowDirection_optional&
    flowDirection () const;

    flowDirection_optional&
    flowDirection ();

    void
    flowDirection (const flowDirection_type& x);

    void
    flowDirection (const flowDirection_optional& x);

    void
    flowDirection (::std::unique_ptr< flowDirection_type > p);

    // intervalLength
    //
    typedef ::espi::UInt32 intervalLength_type;
    typedef ::xsd::cxx::tree::optional< intervalLength_type > intervalLength_optional;
    typedef ::xsd::cxx::tree::traits< intervalLength_type, char > intervalLength_traits;

    const intervalLength_optional&
    intervalLength () const;

    intervalLength_optional&
    intervalLength ();

    void
    intervalLength (const intervalLength_type& x);

    void
    intervalLength (const intervalLength_optional& x);

    void
    intervalLength (::std::unique_ptr< intervalLength_type > p);

    // kind
    //
    typedef ::espi::MeasurementKind kind_type;
    typedef ::xsd::cxx::tree::optional< kind_type > kind_optional;
    typedef ::xsd::cxx::tree::traits< kind_type, char > kind_traits;

    const kind_optional&
    kind () const;

    kind_optional&
    kind ();

    void
    kind (const kind_type& x);

    void
    kind (const kind_optional& x);

    void
    kind (::std::unique_ptr< kind_type > p);

    // phase
    //
    typedef ::espi::PhaseCodeKind phase_type;
    typedef ::xsd::cxx::tree::optional< phase_type > phase_optional;
    typedef ::xsd::cxx::tree::traits< phase_type, char > phase_traits;

    const phase_optional&
    phase () const;

    phase_optional&
    phase ();

    void
    phase (const phase_type& x);

    void
    phase (const phase_optional& x);

    void
    phase (::std::unique_ptr< phase_type > p);

    // powerOfTenMultiplier
    //
    typedef ::espi::UnitMultiplierKind powerOfTenMultiplier_type;
    typedef ::xsd::cxx::tree::optional< powerOfTenMultiplier_type > powerOfTenMultiplier_optional;
    typedef ::xsd::cxx::tree::traits< powerOfTenMultiplier_type, char > powerOfTenMultiplier_traits;

    const powerOfTenMultiplier_optional&
    powerOfTenMultiplier () const;

    powerOfTenMultiplier_optional&
    powerOfTenMultiplier ();

    void
    powerOfTenMultiplier (const powerOfTenMultiplier_type& x);

    void
    powerOfTenMultiplier (const powerOfTenMultiplier_optional& x);

    void
    powerOfTenMultiplier (::std::unique_ptr< powerOfTenMultiplier_type > p);

    // timeAttribute
    //
    typedef ::espi::TimePeriodOfInterest timeAttribute_type;
    typedef ::xsd::cxx::tree::optional< timeAttribute_type > timeAttribute_optional;
    typedef ::xsd::cxx::tree::traits< timeAttribute_type, char > timeAttribute_traits;

    const timeAttribute_optional&
    timeAttribute () const;

    timeAttribute_optional&
    timeAttribute ();

    void
    timeAttribute (const timeAttribute_type& x);

    void
    timeAttribute (const timeAttribute_optional& x);

    void
    timeAttribute (::std::unique_ptr< timeAttribute_type > p);

    // tou
    //
    typedef ::espi::Int16 tou_type;
    typedef ::xsd::cxx::tree::optional< tou_type > tou_optional;
    typedef ::xsd::cxx::tree::traits< tou_type, char > tou_traits;

    const tou_optional&
    tou () const;

    tou_optional&
    tou ();

    void
    tou (const tou_type& x);

    void
    tou (const tou_optional& x);

    void
    tou (::std::unique_ptr< tou_type > p);

    // uom
    //
    typedef ::espi::UnitSymbolKind uom_type;
    typedef ::xsd::cxx::tree::optional< uom_type > uom_optional;
    typedef ::xsd::cxx::tree::traits< uom_type, char > uom_traits;

    const uom_optional&
    uom () const;

    uom_optional&
    uom ();

    void
    uom (const uom_type& x);

    void
    uom (const uom_optional& x);

    void
    uom (::std::unique_ptr< uom_type > p);

    // cpp
    //
    typedef ::espi::Int16 cpp_type;
    typedef ::xsd::cxx::tree::optional< cpp_type > cpp_optional;
    typedef ::xsd::cxx::tree::traits< cpp_type, char > cpp_traits;

    const cpp_optional&
    cpp () const;

    cpp_optional&
    cpp ();

    void
    cpp (const cpp_type& x);

    void
    cpp (const cpp_optional& x);

    void
    cpp (::std::unique_ptr< cpp_type > p);

    // interharmonic
    //
    typedef ::espi::ReadingInterharmonic interharmonic_type;
    typedef ::xsd::cxx::tree::optional< interharmonic_type > interharmonic_optional;
    typedef ::xsd::cxx::tree::traits< interharmonic_type, char > interharmonic_traits;

    const interharmonic_optional&
    interharmonic () const;

    interharmonic_optional&
    interharmonic ();

    void
    interharmonic (const interharmonic_type& x);

    void
    interharmonic (const interharmonic_optional& x);

    void
    interharmonic (::std::unique_ptr< interharmonic_type > p);

    // measuringPeriod
    //
    typedef ::espi::TimeAttributeKind measuringPeriod_type;
    typedef ::xsd::cxx::tree::optional< measuringPeriod_type > measuringPeriod_optional;
    typedef ::xsd::cxx::tree::traits< measuringPeriod_type, char > measuringPeriod_traits;

    const measuringPeriod_optional&
    measuringPeriod () const;

    measuringPeriod_optional&
    measuringPeriod ();

    void
    measuringPeriod (const measuringPeriod_type& x);

    void
    measuringPeriod (const measuringPeriod_optional& x);

    void
    measuringPeriod (::std::unique_ptr< measuringPeriod_type > p);

    // argument
    //
    typedef ::espi::RationalNumber argument_type;
    typedef ::xsd::cxx::tree::optional< argument_type > argument_optional;
    typedef ::xsd::cxx::tree::traits< argument_type, char > argument_traits;

    const argument_optional&
    argument () const;

    argument_optional&
    argument ();

    void
    argument (const argument_type& x);

    void
    argument (const argument_optional& x);

    void
    argument (::std::unique_ptr< argument_type > p);

    // Constructors.
    //
    ReadingType ();

    ReadingType (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    ReadingType (const ReadingType& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    virtual ReadingType*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    ReadingType&
    operator= (const ReadingType& x);

    virtual 
    ~ReadingType ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    accumulationBehaviour_optional accumulationBehaviour_;
    commodity_optional commodity_;
    consumptionTier_optional consumptionTier_;
    currency_optional currency_;
    dataQualifier_optional dataQualifier_;
    defaultQuality_optional defaultQuality_;
    flowDirection_optional flowDirection_;
    intervalLength_optional intervalLength_;
    kind_optional kind_;
    phase_optional phase_;
    powerOfTenMultiplier_optional powerOfTenMultiplier_;
    timeAttribute_optional timeAttribute_;
    tou_optional tou_;
    uom_optional uom_;
    cpp_optional cpp_;
    interharmonic_optional interharmonic_;
    measuringPeriod_optional measuringPeriod_;
    argument_optional argument_;
  };
}

#include <iosfwd>

namespace espi
{
  ::std::ostream&
  operator<< (::std::ostream&, const ReadingType&);
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace espi
{
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace espi
{
  void
  operator<< (::xercesc::DOMElement&, const ReadingType&);
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // READING_TYPE_HXX
