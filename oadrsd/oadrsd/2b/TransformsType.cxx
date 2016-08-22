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

#include "TransformsType.hxx"

#include "TransformType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // TransformsType
    // 

    const TransformsType::Transform_sequence& TransformsType::
    Transform () const
    {
      return this->Transform_;
    }

    TransformsType::Transform_sequence& TransformsType::
    Transform ()
    {
      return this->Transform_;
    }

    void TransformsType::
    Transform (const Transform_sequence& s)
    {
      this->Transform_ = s;
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
  namespace sig
  {
    // TransformsType
    //

    TransformsType::
    TransformsType ()
    : ::xml_schema::type (),
      Transform_ (this)
    {
    }

    TransformsType::
    TransformsType (const TransformsType& x,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      Transform_ (x.Transform_, f, this)
    {
    }

    TransformsType::
    TransformsType (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      Transform_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void TransformsType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // Transform
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "Transform",
              "http://www.w3.org/2000/09/xmldsig#",
              &::xsd::cxx::tree::factory_impl< Transform_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            ::std::auto_ptr< Transform_type > r (
              dynamic_cast< Transform_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->Transform_.push_back (r);
            continue;
          }
        }

        break;
      }
    }

    TransformsType* TransformsType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class TransformsType (*this, f, c);
    }

    TransformsType& TransformsType::
    operator= (const TransformsType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->Transform_ = x.Transform_;
      }

      return *this;
    }

    TransformsType::
    ~TransformsType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, TransformsType >
    _xsd_TransformsType_type_factory_init (
      "TransformsType",
      "http://www.w3.org/2000/09/xmldsig#");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace sig
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
  namespace sig
  {
    void
    operator<< (::xercesc::DOMElement& e, const TransformsType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // Transform
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        for (TransformsType::Transform_const_iterator
             b (i.Transform ().begin ()), n (i.Transform ().end ());
             b != n; ++b)
        {
          if (typeid (TransformsType::Transform_type) == typeid (*b))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "Transform",
                "http://www.w3.org/2000/09/xmldsig#",
                e));

            s << *b;
          }
          else
            tsm.serialize (
              "Transform",
              "http://www.w3.org/2000/09/xmldsig#",
              true, true, e, *b);
        }
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, TransformsType >
    _xsd_TransformsType_type_serializer_init (
      "TransformsType",
      "http://www.w3.org/2000/09/xmldsig#");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

