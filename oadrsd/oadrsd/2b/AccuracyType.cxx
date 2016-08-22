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

#include "AccuracyType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // AccuracyType
    // 
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace oadr2b
{
  namespace ei
  {
    // AccuracyType
    //

    AccuracyType::
    AccuracyType (const ::xml_schema::float_& _xsd_float__base)
    : ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type > (_xsd_float__base)
    {
    }

    AccuracyType::
    AccuracyType (const AccuracyType& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type > (x, f, c)
    {
    }

    AccuracyType::
    AccuracyType (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type > (e, f, c)
    {
    }

    AccuracyType::
    AccuracyType (const ::xercesc::DOMAttr& a,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type > (a, f, c)
    {
    }

    AccuracyType::
    AccuracyType (const ::std::string& s,
                  const ::xercesc::DOMElement* e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type > (s, e, f, c)
    {
    }

    AccuracyType* AccuracyType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class AccuracyType (*this, f, c);
    }

    AccuracyType::
    ~AccuracyType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, AccuracyType >
    _xsd_AccuracyType_type_factory_init (
      "AccuracyType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace ei
  {
  }
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

namespace oadr2b
{
  namespace ei
  {
    void
    operator<< (::xercesc::DOMElement& e, const AccuracyType& i)
    {
      e << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type >& > (i);
    }

    void
    operator<< (::xercesc::DOMAttr& a, const AccuracyType& i)
    {
      a << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type >& > (i);
    }

    void
    operator<< (::xml_schema::list_stream& l,
                const AccuracyType& i)
    {
      l << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::float_, char, ::xml_schema::simple_type >& > (i);
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, AccuracyType >
    _xsd_AccuracyType_type_serializer_init (
      "AccuracyType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

