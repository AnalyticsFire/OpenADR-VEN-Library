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

#include "ArrayofResponses.hxx"

#include "EiResponseType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // ArrayofResponses
    // 

    const ArrayofResponses::response_sequence& ArrayofResponses::
    response () const
    {
      return this->response_;
    }

    ArrayofResponses::response_sequence& ArrayofResponses::
    response ()
    {
      return this->response_;
    }

    void ArrayofResponses::
    response (const response_sequence& s)
    {
      this->response_ = s;
    }
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
    // ArrayofResponses
    //

    ArrayofResponses::
    ArrayofResponses ()
    : ::xml_schema::type (),
      response_ (this)
    {
    }

    ArrayofResponses::
    ArrayofResponses (const ArrayofResponses& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      response_ (x.response_, f, this)
    {
    }

    ArrayofResponses::
    ArrayofResponses (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      response_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void ArrayofResponses::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // response
        //
        if (n.name () == "response" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< response_type > r (
            response_traits::create (i, f, this));

          this->response_.push_back (::std::move (r));
          continue;
        }

        break;
      }
    }

    ArrayofResponses* ArrayofResponses::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ArrayofResponses (*this, f, c);
    }

    ArrayofResponses& ArrayofResponses::
    operator= (const ArrayofResponses& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->response_ = x.response_;
      }

      return *this;
    }

    ArrayofResponses::
    ~ArrayofResponses ()
    {
    }
  }
}

#include <ostream>

#include <xsd/cxx/tree/std-ostream-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::std_ostream_plate< 0, char >
  std_ostream_plate_init;
}

namespace oadr2b
{
  namespace ei
  {
    ::std::ostream&
    operator<< (::std::ostream& o, const ArrayofResponses& i)
    {
      for (ArrayofResponses::response_const_iterator
           b (i.response ().begin ()), e (i.response ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "response: " << *b;
      }

      return o;
    }
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
    operator<< (::xercesc::DOMElement& e, const ArrayofResponses& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // response
      //
      for (ArrayofResponses::response_const_iterator
           b (i.response ().begin ()), n (i.response ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "response",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

