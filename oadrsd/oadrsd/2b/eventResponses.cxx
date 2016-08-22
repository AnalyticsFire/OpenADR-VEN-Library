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

#include "eventResponses.hxx"

#include "eventResponse.hxx"

namespace oadr2b
{
  namespace ei
  {
    // eventResponses
    // 

    const eventResponses::eventResponse_sequence& eventResponses::
    eventResponse () const
    {
      return this->eventResponse_;
    }

    eventResponses::eventResponse_sequence& eventResponses::
    eventResponse ()
    {
      return this->eventResponse_;
    }

    void eventResponses::
    eventResponse (const eventResponse_sequence& s)
    {
      this->eventResponse_ = s;
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
    // eventResponses
    //

    eventResponses::
    eventResponses ()
    : ::xml_schema::type (),
      eventResponse_ (this)
    {
    }

    eventResponses::
    eventResponses (const eventResponses& x,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      eventResponse_ (x.eventResponse_, f, this)
    {
    }

    eventResponses::
    eventResponses (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      eventResponse_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void eventResponses::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // eventResponse
        //
        if (n.name () == "eventResponse" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::auto_ptr< eventResponse_type > r (
            eventResponse_traits::create (i, f, this));

          this->eventResponse_.push_back (r);
          continue;
        }

        break;
      }
    }

    eventResponses* eventResponses::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class eventResponses (*this, f, c);
    }

    eventResponses& eventResponses::
    operator= (const eventResponses& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->eventResponse_ = x.eventResponse_;
      }

      return *this;
    }

    eventResponses::
    ~eventResponses ()
    {
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
    operator<< (::xercesc::DOMElement& e, const eventResponses& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // eventResponse
      //
      for (eventResponses::eventResponse_const_iterator
           b (i.eventResponse ().begin ()), n (i.eventResponse ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "eventResponse",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }
    }
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

