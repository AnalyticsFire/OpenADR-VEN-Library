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

#include "oadrLoadControlStateTypeType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrLoadControlStateTypeType
    // 

    const oadrLoadControlStateTypeType::oadrMin_optional& oadrLoadControlStateTypeType::
    oadrMin () const
    {
      return this->oadrMin_;
    }

    oadrLoadControlStateTypeType::oadrMin_optional& oadrLoadControlStateTypeType::
    oadrMin ()
    {
      return this->oadrMin_;
    }

    void oadrLoadControlStateTypeType::
    oadrMin (const oadrMin_type& x)
    {
      this->oadrMin_.set (x);
    }

    void oadrLoadControlStateTypeType::
    oadrMin (const oadrMin_optional& x)
    {
      this->oadrMin_ = x;
    }

    const oadrLoadControlStateTypeType::oadrMax_optional& oadrLoadControlStateTypeType::
    oadrMax () const
    {
      return this->oadrMax_;
    }

    oadrLoadControlStateTypeType::oadrMax_optional& oadrLoadControlStateTypeType::
    oadrMax ()
    {
      return this->oadrMax_;
    }

    void oadrLoadControlStateTypeType::
    oadrMax (const oadrMax_type& x)
    {
      this->oadrMax_.set (x);
    }

    void oadrLoadControlStateTypeType::
    oadrMax (const oadrMax_optional& x)
    {
      this->oadrMax_ = x;
    }

    const oadrLoadControlStateTypeType::oadrCurrent_type& oadrLoadControlStateTypeType::
    oadrCurrent () const
    {
      return this->oadrCurrent_.get ();
    }

    oadrLoadControlStateTypeType::oadrCurrent_type& oadrLoadControlStateTypeType::
    oadrCurrent ()
    {
      return this->oadrCurrent_.get ();
    }

    void oadrLoadControlStateTypeType::
    oadrCurrent (const oadrCurrent_type& x)
    {
      this->oadrCurrent_.set (x);
    }

    const oadrLoadControlStateTypeType::oadrNormal_optional& oadrLoadControlStateTypeType::
    oadrNormal () const
    {
      return this->oadrNormal_;
    }

    oadrLoadControlStateTypeType::oadrNormal_optional& oadrLoadControlStateTypeType::
    oadrNormal ()
    {
      return this->oadrNormal_;
    }

    void oadrLoadControlStateTypeType::
    oadrNormal (const oadrNormal_type& x)
    {
      this->oadrNormal_.set (x);
    }

    void oadrLoadControlStateTypeType::
    oadrNormal (const oadrNormal_optional& x)
    {
      this->oadrNormal_ = x;
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
    // oadrLoadControlStateTypeType
    //

    oadrLoadControlStateTypeType::
    oadrLoadControlStateTypeType (const oadrCurrent_type& oadrCurrent)
    : ::xml_schema::type (),
      oadrMin_ (this),
      oadrMax_ (this),
      oadrCurrent_ (oadrCurrent, this),
      oadrNormal_ (this)
    {
    }

    oadrLoadControlStateTypeType::
    oadrLoadControlStateTypeType (const oadrLoadControlStateTypeType& x,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      oadrMin_ (x.oadrMin_, f, this),
      oadrMax_ (x.oadrMax_, f, this),
      oadrCurrent_ (x.oadrCurrent_, f, this),
      oadrNormal_ (x.oadrNormal_, f, this)
    {
    }

    oadrLoadControlStateTypeType::
    oadrLoadControlStateTypeType (const ::xercesc::DOMElement& e,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      oadrMin_ (this),
      oadrMax_ (this),
      oadrCurrent_ (this),
      oadrNormal_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void oadrLoadControlStateTypeType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrMin
        //
        if (n.name () == "oadrMin" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!this->oadrMin_)
          {
            this->oadrMin_.set (oadrMin_traits::create (i, f, this));
            continue;
          }
        }

        // oadrMax
        //
        if (n.name () == "oadrMax" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!this->oadrMax_)
          {
            this->oadrMax_.set (oadrMax_traits::create (i, f, this));
            continue;
          }
        }

        // oadrCurrent
        //
        if (n.name () == "oadrCurrent" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!oadrCurrent_.present ())
          {
            this->oadrCurrent_.set (oadrCurrent_traits::create (i, f, this));
            continue;
          }
        }

        // oadrNormal
        //
        if (n.name () == "oadrNormal" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!this->oadrNormal_)
          {
            this->oadrNormal_.set (oadrNormal_traits::create (i, f, this));
            continue;
          }
        }

        break;
      }

      if (!oadrCurrent_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrCurrent",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    oadrLoadControlStateTypeType* oadrLoadControlStateTypeType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrLoadControlStateTypeType (*this, f, c);
    }

    oadrLoadControlStateTypeType& oadrLoadControlStateTypeType::
    operator= (const oadrLoadControlStateTypeType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->oadrMin_ = x.oadrMin_;
        this->oadrMax_ = x.oadrMax_;
        this->oadrCurrent_ = x.oadrCurrent_;
        this->oadrNormal_ = x.oadrNormal_;
      }

      return *this;
    }

    oadrLoadControlStateTypeType::
    ~oadrLoadControlStateTypeType ()
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
    operator<< (::std::ostream& o, const oadrLoadControlStateTypeType& i)
    {
      if (i.oadrMin ())
      {
        o << ::std::endl << "oadrMin: " << *i.oadrMin ();
      }

      if (i.oadrMax ())
      {
        o << ::std::endl << "oadrMax: " << *i.oadrMax ();
      }

      o << ::std::endl << "oadrCurrent: " << i.oadrCurrent ();
      if (i.oadrNormal ())
      {
        o << ::std::endl << "oadrNormal: " << *i.oadrNormal ();
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
    operator<< (::xercesc::DOMElement& e, const oadrLoadControlStateTypeType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // oadrMin
      //
      if (i.oadrMin ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrMin",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrMin ();
      }

      // oadrMax
      //
      if (i.oadrMax ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrMax",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrMax ();
      }

      // oadrCurrent
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrCurrent",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrCurrent ();
      }

      // oadrNormal
      //
      if (i.oadrNormal ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrNormal",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrNormal ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

