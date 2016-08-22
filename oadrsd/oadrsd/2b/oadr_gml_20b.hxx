// Copyright (c) 2005-2011 Code Synthesis Tools CC
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

#ifndef OADR_GML_20B_HXX
#define OADR_GML_20B_HXX

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 3999913L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

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

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< type > simple_type;
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
    using ::xsd::cxx::xml::dom::auto_ptr;

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
namespace oadr2b
{
  namespace gml
  {
  }
}


#include <memory>    // ::std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "doubleList.hxx"

#include "FeatureCollection.hxx"

#include "location.hxx"

#include "Polygon.hxx"

#include "exterior.hxx"

#include "LinearRing.hxx"

namespace oadr2b
{
  namespace gml
  {
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace oadr2b
{
  namespace gml
  {
    // Parse a URI or a local file.
    //

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (const ::std::string& uri,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (const ::std::string& uri,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (const ::std::string& uri,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse std::istream.
    //

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::std::istream& is,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::std::istream& is,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::std::istream& is,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::std::istream& is,
                        const ::std::string& id,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::std::istream& is,
                        const ::std::string& id,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::std::istream& is,
                        const ::std::string& id,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse xercesc::InputSource.
    //

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::xercesc::InputSource& is,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::xercesc::InputSource& is,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::xercesc::InputSource& is,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse xercesc::DOMDocument.
    //

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (const ::xercesc::DOMDocument& d,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::FeatureCollection >
    FeatureCollection_ (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse a URI or a local file.
    //

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (const ::std::string& uri,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (const ::std::string& uri,
             ::xml_schema::error_handler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (const ::std::string& uri,
             ::xercesc::DOMErrorHandler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse std::istream.
    //

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::std::istream& is,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::std::istream& is,
             ::xml_schema::error_handler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::std::istream& is,
             ::xercesc::DOMErrorHandler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::std::istream& is,
             const ::std::string& id,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::std::istream& is,
             const ::std::string& id,
             ::xml_schema::error_handler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::std::istream& is,
             const ::std::string& id,
             ::xercesc::DOMErrorHandler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse xercesc::InputSource.
    //

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::xercesc::InputSource& is,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::xercesc::InputSource& is,
             ::xml_schema::error_handler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::xercesc::InputSource& is,
             ::xercesc::DOMErrorHandler& eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse xercesc::DOMDocument.
    //

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (const ::xercesc::DOMDocument& d,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::oadr2b::gml::doubleList >
    posList (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties& p = ::xml_schema::properties ());
  }
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace oadr2b
{
  namespace gml
  {
    // Serialize to std::ostream.
    //

    void
    FeatureCollection_ (::std::ostream& os,
                        const ::oadr2b::gml::FeatureCollection& x, 
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

    void
    FeatureCollection_ (::std::ostream& os,
                        const ::oadr2b::gml::FeatureCollection& x, 
                        ::xml_schema::error_handler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

    void
    FeatureCollection_ (::std::ostream& os,
                        const ::oadr2b::gml::FeatureCollection& x, 
                        ::xercesc::DOMErrorHandler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

    // Serialize to xercesc::XMLFormatTarget.
    //

    void
    FeatureCollection_ (::xercesc::XMLFormatTarget& ft,
                        const ::oadr2b::gml::FeatureCollection& x, 
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

    void
    FeatureCollection_ (::xercesc::XMLFormatTarget& ft,
                        const ::oadr2b::gml::FeatureCollection& x, 
                        ::xml_schema::error_handler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

    void
    FeatureCollection_ (::xercesc::XMLFormatTarget& ft,
                        const ::oadr2b::gml::FeatureCollection& x, 
                        ::xercesc::DOMErrorHandler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

    // Serialize to an existing xercesc::DOMDocument.
    //

    void
    FeatureCollection_ (::xercesc::DOMDocument& d,
                        const ::oadr2b::gml::FeatureCollection& x,
                        ::xml_schema::flags f = 0);

    // Serialize to a new xercesc::DOMDocument.
    //

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
    FeatureCollection_ (const ::oadr2b::gml::FeatureCollection& x, 
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        ::xml_schema::flags f = 0);

    // Serialize to std::ostream.
    //

    void
    posList (::std::ostream& os,
             const ::oadr2b::gml::doubleList& x, 
             const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
             const ::std::string& e = "UTF-8",
             ::xml_schema::flags f = 0);

    void
    posList (::std::ostream& os,
             const ::oadr2b::gml::doubleList& x, 
             ::xml_schema::error_handler& eh,
             const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
             const ::std::string& e = "UTF-8",
             ::xml_schema::flags f = 0);

    void
    posList (::std::ostream& os,
             const ::oadr2b::gml::doubleList& x, 
             ::xercesc::DOMErrorHandler& eh,
             const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
             const ::std::string& e = "UTF-8",
             ::xml_schema::flags f = 0);

    // Serialize to xercesc::XMLFormatTarget.
    //

    void
    posList (::xercesc::XMLFormatTarget& ft,
             const ::oadr2b::gml::doubleList& x, 
             const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
             const ::std::string& e = "UTF-8",
             ::xml_schema::flags f = 0);

    void
    posList (::xercesc::XMLFormatTarget& ft,
             const ::oadr2b::gml::doubleList& x, 
             ::xml_schema::error_handler& eh,
             const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
             const ::std::string& e = "UTF-8",
             ::xml_schema::flags f = 0);

    void
    posList (::xercesc::XMLFormatTarget& ft,
             const ::oadr2b::gml::doubleList& x, 
             ::xercesc::DOMErrorHandler& eh,
             const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
             const ::std::string& e = "UTF-8",
             ::xml_schema::flags f = 0);

    // Serialize to an existing xercesc::DOMDocument.
    //

    void
    posList (::xercesc::DOMDocument& d,
             const ::oadr2b::gml::doubleList& x,
             ::xml_schema::flags f = 0);

    // Serialize to a new xercesc::DOMDocument.
    //

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
    posList (const ::oadr2b::gml::doubleList& x, 
             const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
             ::xml_schema::flags f = 0);
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

#endif // OADR_GML_20B_HXX
