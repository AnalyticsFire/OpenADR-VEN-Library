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

#include "CurveType.hxx"

#include "CryptoBinary.hxx"

namespace oadr2b
{
  namespace dsig11
  {
    // CurveType
    // 

    const CurveType::A_type& CurveType::
    A () const
    {
      return this->A_.get ();
    }

    CurveType::A_type& CurveType::
    A ()
    {
      return this->A_.get ();
    }

    void CurveType::
    A (const A_type& x)
    {
      this->A_.set (x);
    }

    void CurveType::
    A (::std::auto_ptr< A_type > x)
    {
      this->A_.set (x);
    }

    const CurveType::B_type& CurveType::
    B () const
    {
      return this->B_.get ();
    }

    CurveType::B_type& CurveType::
    B ()
    {
      return this->B_.get ();
    }

    void CurveType::
    B (const B_type& x)
    {
      this->B_.set (x);
    }

    void CurveType::
    B (::std::auto_ptr< B_type > x)
    {
      this->B_.set (x);
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
  namespace dsig11
  {
    // CurveType
    //

    CurveType::
    CurveType (const A_type& A,
               const B_type& B)
    : ::xml_schema::type (),
      A_ (A, this),
      B_ (B, this)
    {
    }

    CurveType::
    CurveType (::std::auto_ptr< A_type > A,
               ::std::auto_ptr< B_type > B)
    : ::xml_schema::type (),
      A_ (A, this),
      B_ (B, this)
    {
    }

    CurveType::
    CurveType (const CurveType& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      A_ (x.A_, f, this),
      B_ (x.B_, f, this)
    {
    }

    CurveType::
    CurveType (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      A_ (this),
      B_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void CurveType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // A
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "A",
              "http://www.w3.org/2009/xmldsig11#",
              &::xsd::cxx::tree::factory_impl< A_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!A_.present ())
            {
              ::std::auto_ptr< A_type > r (
                dynamic_cast< A_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->A_.set (r);
              continue;
            }
          }
        }

        // B
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "B",
              "http://www.w3.org/2009/xmldsig11#",
              &::xsd::cxx::tree::factory_impl< B_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!B_.present ())
            {
              ::std::auto_ptr< B_type > r (
                dynamic_cast< B_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->B_.set (r);
              continue;
            }
          }
        }

        break;
      }

      if (!A_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "A",
          "http://www.w3.org/2009/xmldsig11#");
      }

      if (!B_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "B",
          "http://www.w3.org/2009/xmldsig11#");
      }
    }

    CurveType* CurveType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class CurveType (*this, f, c);
    }

    CurveType& CurveType::
    operator= (const CurveType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->A_ = x.A_;
        this->B_ = x.B_;
      }

      return *this;
    }

    CurveType::
    ~CurveType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, CurveType >
    _xsd_CurveType_type_factory_init (
      "CurveType",
      "http://www.w3.org/2009/xmldsig11#");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace dsig11
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
  namespace dsig11
  {
    void
    operator<< (::xercesc::DOMElement& e, const CurveType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // A
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const CurveType::A_type& x (i.A ());
        if (typeid (CurveType::A_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "A",
              "http://www.w3.org/2009/xmldsig11#",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "A",
            "http://www.w3.org/2009/xmldsig11#",
            false, true, e, x);
      }

      // B
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const CurveType::B_type& x (i.B ());
        if (typeid (CurveType::B_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "B",
              "http://www.w3.org/2009/xmldsig11#",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "B",
            "http://www.w3.org/2009/xmldsig11#",
            false, true, e, x);
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, CurveType >
    _xsd_CurveType_type_serializer_init (
      "CurveType",
      "http://www.w3.org/2009/xmldsig11#");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

