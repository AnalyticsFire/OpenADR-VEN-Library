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

#include <xsd/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "HexBinary16.hxx"

namespace espi
{
  // HexBinary16
  // 
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace espi
{
  // HexBinary16
  //

  HexBinary16::
  HexBinary16 ()
  : ::xml_schema::hex_binary ()
  {
  }

  HexBinary16::
  HexBinary16 (const ::xml_schema::hex_binary& _xsd_hex_binary_base)
  : ::xml_schema::hex_binary (_xsd_hex_binary_base)
  {
  }

  HexBinary16::
  HexBinary16 (const HexBinary16& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
  : ::xml_schema::hex_binary (x, f, c)
  {
  }

  HexBinary16::
  HexBinary16 (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
  : ::xml_schema::hex_binary (e, f, c)
  {
  }

  HexBinary16::
  HexBinary16 (const ::xercesc::DOMAttr& a,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
  : ::xml_schema::hex_binary (a, f, c)
  {
  }

  HexBinary16::
  HexBinary16 (const ::std::string& s,
               const ::xercesc::DOMElement* e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
  : ::xml_schema::hex_binary (s, e, f, c)
  {
  }

  HexBinary16* HexBinary16::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class HexBinary16 (*this, f, c);
  }

  HexBinary16::
  ~HexBinary16 ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, HexBinary16 >
  _xsd_HexBinary16_type_factory_init (
    "HexBinary16",
    "http://naesb.org/espi");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace espi
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace espi
{
  void
  operator<< (::xercesc::DOMElement& e, const HexBinary16& i)
  {
    e << static_cast< const ::xml_schema::hex_binary& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr& a, const HexBinary16& i)
  {
    a << static_cast< const ::xml_schema::hex_binary& > (i);
  }

  void
  operator<< (::xml_schema::list_stream& l,
              const HexBinary16& i)
  {
    l << static_cast< const ::xml_schema::hex_binary& > (i);
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, HexBinary16 >
  _xsd_HexBinary16_type_serializer_init (
    "HexBinary16",
    "http://naesb.org/espi");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

