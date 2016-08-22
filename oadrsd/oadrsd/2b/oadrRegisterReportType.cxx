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

#include "oadrRegisterReportType.hxx"

#include "oadrReportType.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrRegisterReportType
    // 

    const oadrRegisterReportType::requestID_type& oadrRegisterReportType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    oadrRegisterReportType::requestID_type& oadrRegisterReportType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void oadrRegisterReportType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void oadrRegisterReportType::
    requestID (::std::auto_ptr< requestID_type > x)
    {
      this->requestID_.set (x);
    }

    const oadrRegisterReportType::oadrReport_sequence& oadrRegisterReportType::
    oadrReport () const
    {
      return this->oadrReport_;
    }

    oadrRegisterReportType::oadrReport_sequence& oadrRegisterReportType::
    oadrReport ()
    {
      return this->oadrReport_;
    }

    void oadrRegisterReportType::
    oadrReport (const oadrReport_sequence& s)
    {
      this->oadrReport_ = s;
    }

    const oadrRegisterReportType::venID_optional& oadrRegisterReportType::
    venID () const
    {
      return this->venID_;
    }

    oadrRegisterReportType::venID_optional& oadrRegisterReportType::
    venID ()
    {
      return this->venID_;
    }

    void oadrRegisterReportType::
    venID (const venID_type& x)
    {
      this->venID_.set (x);
    }

    void oadrRegisterReportType::
    venID (const venID_optional& x)
    {
      this->venID_ = x;
    }

    void oadrRegisterReportType::
    venID (::std::auto_ptr< venID_type > x)
    {
      this->venID_.set (x);
    }

    const oadrRegisterReportType::reportRequestID_optional& oadrRegisterReportType::
    reportRequestID () const
    {
      return this->reportRequestID_;
    }

    oadrRegisterReportType::reportRequestID_optional& oadrRegisterReportType::
    reportRequestID ()
    {
      return this->reportRequestID_;
    }

    void oadrRegisterReportType::
    reportRequestID (const reportRequestID_type& x)
    {
      this->reportRequestID_.set (x);
    }

    void oadrRegisterReportType::
    reportRequestID (const reportRequestID_optional& x)
    {
      this->reportRequestID_ = x;
    }

    void oadrRegisterReportType::
    reportRequestID (::std::auto_ptr< reportRequestID_type > x)
    {
      this->reportRequestID_.set (x);
    }

    const oadrRegisterReportType::schemaVersion_optional& oadrRegisterReportType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrRegisterReportType::schemaVersion_optional& oadrRegisterReportType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrRegisterReportType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrRegisterReportType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrRegisterReportType::
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
    // oadrRegisterReportType
    //

    oadrRegisterReportType::
    oadrRegisterReportType (const requestID_type& requestID)
    : ::xml_schema::type (),
      requestID_ (requestID, this),
      oadrReport_ (this),
      venID_ (this),
      reportRequestID_ (this),
      schemaVersion_ (this)
    {
    }

    oadrRegisterReportType::
    oadrRegisterReportType (::std::auto_ptr< requestID_type > requestID)
    : ::xml_schema::type (),
      requestID_ (requestID, this),
      oadrReport_ (this),
      venID_ (this),
      reportRequestID_ (this),
      schemaVersion_ (this)
    {
    }

    oadrRegisterReportType::
    oadrRegisterReportType (const oadrRegisterReportType& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      requestID_ (x.requestID_, f, this),
      oadrReport_ (x.oadrReport_, f, this),
      venID_ (x.venID_, f, this),
      reportRequestID_ (x.reportRequestID_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrRegisterReportType::
    oadrRegisterReportType (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      requestID_ (this),
      oadrReport_ (this),
      venID_ (this),
      reportRequestID_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
        this->parse (p, f);
      }
    }

    void oadrRegisterReportType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // requestID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "requestID",
              "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
              &::xsd::cxx::tree::factory_impl< requestID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!requestID_.present ())
            {
              ::std::auto_ptr< requestID_type > r (
                dynamic_cast< requestID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->requestID_.set (r);
              continue;
            }
          }
        }

        // oadrReport
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "oadrReport",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< oadrReport_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            ::std::auto_ptr< oadrReport_type > r (
              dynamic_cast< oadrReport_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->oadrReport_.push_back (r);
            continue;
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

        // reportRequestID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "reportRequestID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< reportRequestID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->reportRequestID_)
            {
              ::std::auto_ptr< reportRequestID_type > r (
                dynamic_cast< reportRequestID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->reportRequestID_.set (r);
              continue;
            }
          }
        }

        break;
      }

      if (!requestID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "requestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads");
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

    oadrRegisterReportType* oadrRegisterReportType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrRegisterReportType (*this, f, c);
    }

    oadrRegisterReportType& oadrRegisterReportType::
    operator= (const oadrRegisterReportType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->requestID_ = x.requestID_;
        this->oadrReport_ = x.oadrReport_;
        this->venID_ = x.venID_;
        this->reportRequestID_ = x.reportRequestID_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrRegisterReportType::
    ~oadrRegisterReportType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrRegisterReportType >
    _xsd_oadrRegisterReportType_type_factory_init (
      "oadrRegisterReportType",
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
    operator<< (::xercesc::DOMElement& e, const oadrRegisterReportType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // requestID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrRegisterReportType::requestID_type& x (i.requestID ());
        if (typeid (oadrRegisterReportType::requestID_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "requestID",
              "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "requestID",
            "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
            true, true, e, x);
      }

      // oadrReport
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        for (oadrRegisterReportType::oadrReport_const_iterator
             b (i.oadrReport ().begin ()), n (i.oadrReport ().end ());
             b != n; ++b)
        {
          if (typeid (oadrRegisterReportType::oadrReport_type) == typeid (*b))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "oadrReport",
                "http://openadr.org/oadr-2.0b/2012/07",
                e));

            s << *b;
          }
          else
            tsm.serialize (
              "oadrReport",
              "http://openadr.org/oadr-2.0b/2012/07",
              true, true, e, *b);
        }
      }

      // venID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.venID ())
        {
          const oadrRegisterReportType::venID_type& x (*i.venID ());
          if (typeid (oadrRegisterReportType::venID_type) == typeid (x))
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

      // reportRequestID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.reportRequestID ())
        {
          const oadrRegisterReportType::reportRequestID_type& x (*i.reportRequestID ());
          if (typeid (oadrRegisterReportType::reportRequestID_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "reportRequestID",
                "http://docs.oasis-open.org/ns/energyinterop/201110",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "reportRequestID",
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
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrRegisterReportType >
    _xsd_oadrRegisterReportType_type_serializer_init (
      "oadrRegisterReportType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

