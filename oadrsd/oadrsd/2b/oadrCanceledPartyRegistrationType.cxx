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

#include "oadrCanceledPartyRegistrationType.hxx"

#include "EiResponseType.hxx"

#include "UidType.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCanceledPartyRegistrationType
    // 

    const oadrCanceledPartyRegistrationType::eiResponse_type& oadrCanceledPartyRegistrationType::
    eiResponse () const
    {
      return this->eiResponse_.get ();
    }

    oadrCanceledPartyRegistrationType::eiResponse_type& oadrCanceledPartyRegistrationType::
    eiResponse ()
    {
      return this->eiResponse_.get ();
    }

    void oadrCanceledPartyRegistrationType::
    eiResponse (const eiResponse_type& x)
    {
      this->eiResponse_.set (x);
    }

    void oadrCanceledPartyRegistrationType::
    eiResponse (::std::auto_ptr< eiResponse_type > x)
    {
      this->eiResponse_.set (x);
    }

    const oadrCanceledPartyRegistrationType::registrationID_optional& oadrCanceledPartyRegistrationType::
    registrationID () const
    {
      return this->registrationID_;
    }

    oadrCanceledPartyRegistrationType::registrationID_optional& oadrCanceledPartyRegistrationType::
    registrationID ()
    {
      return this->registrationID_;
    }

    void oadrCanceledPartyRegistrationType::
    registrationID (const registrationID_type& x)
    {
      this->registrationID_.set (x);
    }

    void oadrCanceledPartyRegistrationType::
    registrationID (const registrationID_optional& x)
    {
      this->registrationID_ = x;
    }

    void oadrCanceledPartyRegistrationType::
    registrationID (::std::auto_ptr< registrationID_type > x)
    {
      this->registrationID_.set (x);
    }

    const oadrCanceledPartyRegistrationType::venID_optional& oadrCanceledPartyRegistrationType::
    venID () const
    {
      return this->venID_;
    }

    oadrCanceledPartyRegistrationType::venID_optional& oadrCanceledPartyRegistrationType::
    venID ()
    {
      return this->venID_;
    }

    void oadrCanceledPartyRegistrationType::
    venID (const venID_type& x)
    {
      this->venID_.set (x);
    }

    void oadrCanceledPartyRegistrationType::
    venID (const venID_optional& x)
    {
      this->venID_ = x;
    }

    void oadrCanceledPartyRegistrationType::
    venID (::std::auto_ptr< venID_type > x)
    {
      this->venID_.set (x);
    }

    const oadrCanceledPartyRegistrationType::schemaVersion_optional& oadrCanceledPartyRegistrationType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrCanceledPartyRegistrationType::schemaVersion_optional& oadrCanceledPartyRegistrationType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrCanceledPartyRegistrationType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrCanceledPartyRegistrationType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrCanceledPartyRegistrationType::
    schemaVersion (::std::auto_ptr< schemaVersion_type > x)
    {
      this->schemaVersion_.set (x);
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
    // oadrCanceledPartyRegistrationType
    //

    oadrCanceledPartyRegistrationType::
    oadrCanceledPartyRegistrationType (const eiResponse_type& eiResponse)
    : ::xml_schema::type (),
      eiResponse_ (eiResponse, this),
      registrationID_ (this),
      venID_ (this),
      schemaVersion_ (this)
    {
    }

    oadrCanceledPartyRegistrationType::
    oadrCanceledPartyRegistrationType (::std::auto_ptr< eiResponse_type > eiResponse)
    : ::xml_schema::type (),
      eiResponse_ (eiResponse, this),
      registrationID_ (this),
      venID_ (this),
      schemaVersion_ (this)
    {
    }

    oadrCanceledPartyRegistrationType::
    oadrCanceledPartyRegistrationType (const oadrCanceledPartyRegistrationType& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      eiResponse_ (x.eiResponse_, f, this),
      registrationID_ (x.registrationID_, f, this),
      venID_ (x.venID_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrCanceledPartyRegistrationType::
    oadrCanceledPartyRegistrationType (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      eiResponse_ (this),
      registrationID_ (this),
      venID_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
        this->parse (p, f);
      }
    }

    void oadrCanceledPartyRegistrationType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // eiResponse
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "eiResponse",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< eiResponse_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!eiResponse_.present ())
            {
              ::std::auto_ptr< eiResponse_type > r (
                dynamic_cast< eiResponse_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->eiResponse_.set (r);
              continue;
            }
          }
        }

        // registrationID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "registrationID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< registrationID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->registrationID_)
            {
              ::std::auto_ptr< registrationID_type > r (
                dynamic_cast< registrationID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->registrationID_.set (r);
              continue;
            }
          }
        }

        // venID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "venID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< venID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->venID_)
            {
              ::std::auto_ptr< venID_type > r (
                dynamic_cast< venID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->venID_.set (r);
              continue;
            }
          }
        }

        break;
      }

      if (!eiResponse_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "eiResponse",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "schemaVersion" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          this->schemaVersion_.set (schemaVersion_traits::create (i, f, this));
          continue;
        }
      }
    }

    oadrCanceledPartyRegistrationType* oadrCanceledPartyRegistrationType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrCanceledPartyRegistrationType (*this, f, c);
    }

    oadrCanceledPartyRegistrationType& oadrCanceledPartyRegistrationType::
    operator= (const oadrCanceledPartyRegistrationType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->eiResponse_ = x.eiResponse_;
        this->registrationID_ = x.registrationID_;
        this->venID_ = x.venID_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrCanceledPartyRegistrationType::
    ~oadrCanceledPartyRegistrationType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrCanceledPartyRegistrationType >
    _xsd_oadrCanceledPartyRegistrationType_type_factory_init (
      "oadrCanceledPartyRegistrationType",
      "http://openadr.org/oadr-2.0b/2012/07");
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
    operator<< (::xercesc::DOMElement& e, const oadrCanceledPartyRegistrationType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // eiResponse
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrCanceledPartyRegistrationType::eiResponse_type& x (i.eiResponse ());
        if (typeid (oadrCanceledPartyRegistrationType::eiResponse_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "eiResponse",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "eiResponse",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }

      // registrationID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.registrationID ())
        {
          const oadrCanceledPartyRegistrationType::registrationID_type& x (*i.registrationID ());
          if (typeid (oadrCanceledPartyRegistrationType::registrationID_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "registrationID",
                "http://docs.oasis-open.org/ns/energyinterop/201110",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "registrationID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              true, true, e, x);
        }
      }

      // venID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.venID ())
        {
          const oadrCanceledPartyRegistrationType::venID_type& x (*i.venID ());
          if (typeid (oadrCanceledPartyRegistrationType::venID_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "venID",
                "http://docs.oasis-open.org/ns/energyinterop/201110",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "venID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              true, true, e, x);
        }
      }

      // schemaVersion
      //
      if (i.schemaVersion ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "schemaVersion",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        a << *i.schemaVersion ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrCanceledPartyRegistrationType >
    _xsd_oadrCanceledPartyRegistrationType_type_serializer_init (
      "oadrCanceledPartyRegistrationType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

