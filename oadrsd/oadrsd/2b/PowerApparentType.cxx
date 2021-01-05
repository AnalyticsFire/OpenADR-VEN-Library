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

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "PowerApparentType.hxx"

namespace power
{
  // PowerApparentType
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

namespace power
{
  // PowerApparentType
  //

  PowerApparentType::
  PowerApparentType (const itemDescription_type& itemDescription,
                     const itemUnits_type& itemUnits,
                     const siScaleCode_type& siScaleCode,
                     const powerAttributes_type& powerAttributes)
  : ::power::PowerItemType (itemDescription,
                            itemUnits,
                            siScaleCode,
                            powerAttributes)
  {
  }

  /* PowerApparentType::
  PowerApparentType (const itemDescription_type& itemDescription,
                     const itemUnits_type& itemUnits,
                     const siScaleCode_type& siScaleCode,
                     ::std::unique_ptr< powerAttributes_type > powerAttributes)
  : ::power::PowerItemType (itemDescription,
                            itemUnits,
                            siScaleCode,
                            std::move (powerAttributes))
  {
  } */

  PowerApparentType::
  PowerApparentType (const PowerApparentType& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
  : ::power::PowerItemType (x, f, c)
  {
  }

  PowerApparentType::
  PowerApparentType (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
  : ::power::PowerItemType (e, f, c)
  {
  }

  PowerApparentType* PowerApparentType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class PowerApparentType (*this, f, c);
  }

  PowerApparentType::
  ~PowerApparentType ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, PowerApparentType >
  _xsd_PowerApparentType_type_factory_init (
    "PowerApparentType",
    "http://docs.oasis-open.org/ns/emix/2011/06/power");
}

#include <ostream>

#include <xsd/cxx/tree/std-ostream-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::std_ostream_plate< 0, char >
  std_ostream_plate_init;
}

namespace power
{
  ::std::ostream&
  operator<< (::std::ostream& o, const PowerApparentType& i)
  {
    o << static_cast< const ::power::PowerItemType& > (i);

    return o;
  }

  static
  const ::xsd::cxx::tree::std_ostream_initializer< 0, char, PowerApparentType >
  _xsd_PowerApparentType_std_ostream_init;
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace power
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

namespace power
{
  void
  operator<< (::xercesc::DOMElement& e, const PowerApparentType& i)
  {
    e << static_cast< const ::power::PowerItemType& > (i);
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, PowerApparentType >
  _xsd_PowerApparentType_type_serializer_init (
    "PowerApparentType",
    "http://docs.oasis-open.org/ns/emix/2011/06/power");
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

