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

#include "oadrServiceSpecificInfo.hxx"

#include "oadrService.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrServiceSpecificInfo
    // 

    const oadrServiceSpecificInfo::oadrService_sequence& oadrServiceSpecificInfo::
    oadrService () const
    {
      return this->oadrService_;
    }

    oadrServiceSpecificInfo::oadrService_sequence& oadrServiceSpecificInfo::
    oadrService ()
    {
      return this->oadrService_;
    }

    void oadrServiceSpecificInfo::
    oadrService (const oadrService_sequence& s)
    {
      this->oadrService_ = s;
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
  namespace oadr
  {
    // oadrServiceSpecificInfo
    //

    oadrServiceSpecificInfo::
    oadrServiceSpecificInfo ()
    : ::xml_schema::type (),
      oadrService_ (this)
    {
    }

    oadrServiceSpecificInfo::
    oadrServiceSpecificInfo (const oadrServiceSpecificInfo& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      oadrService_ (x.oadrService_, f, this)
    {
    }

    oadrServiceSpecificInfo::
    oadrServiceSpecificInfo (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      oadrService_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void oadrServiceSpecificInfo::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrService
        //
        if (n.name () == "oadrService" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrService_type > r (
            oadrService_traits::create (i, f, this));

          this->oadrService_.push_back (::std::move (r));
          continue;
        }

        break;
      }
    }

    oadrServiceSpecificInfo* oadrServiceSpecificInfo::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrServiceSpecificInfo (*this, f, c);
    }

    oadrServiceSpecificInfo& oadrServiceSpecificInfo::
    operator= (const oadrServiceSpecificInfo& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->oadrService_ = x.oadrService_;
      }

      return *this;
    }

    oadrServiceSpecificInfo::
    ~oadrServiceSpecificInfo ()
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
  namespace oadr
  {
    ::std::ostream&
    operator<< (::std::ostream& o, const oadrServiceSpecificInfo& i)
    {
      for (oadrServiceSpecificInfo::oadrService_const_iterator
           b (i.oadrService ().begin ()), e (i.oadrService ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "oadrService: " << *b;
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
  namespace oadr
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
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement& e, const oadrServiceSpecificInfo& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // oadrService
      //
      for (oadrServiceSpecificInfo::oadrService_const_iterator
           b (i.oadrService ().begin ()), n (i.oadrService ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrService",
            "http://openadr.org/oadr-2.0b/2012/07",
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

