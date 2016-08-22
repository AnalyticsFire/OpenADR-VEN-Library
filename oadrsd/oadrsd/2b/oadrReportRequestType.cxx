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

#include "oadrReportRequestType.hxx"

#include "ReportSpecifierType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrReportRequestType
    // 

    const oadrReportRequestType::reportRequestID_type& oadrReportRequestType::
    reportRequestID () const
    {
      return this->reportRequestID_.get ();
    }

    oadrReportRequestType::reportRequestID_type& oadrReportRequestType::
    reportRequestID ()
    {
      return this->reportRequestID_.get ();
    }

    void oadrReportRequestType::
    reportRequestID (const reportRequestID_type& x)
    {
      this->reportRequestID_.set (x);
    }

    void oadrReportRequestType::
    reportRequestID (::std::auto_ptr< reportRequestID_type > x)
    {
      this->reportRequestID_.set (x);
    }

    const oadrReportRequestType::reportSpecifier_type& oadrReportRequestType::
    reportSpecifier () const
    {
      return this->reportSpecifier_.get ();
    }

    oadrReportRequestType::reportSpecifier_type& oadrReportRequestType::
    reportSpecifier ()
    {
      return this->reportSpecifier_.get ();
    }

    void oadrReportRequestType::
    reportSpecifier (const reportSpecifier_type& x)
    {
      this->reportSpecifier_.set (x);
    }

    void oadrReportRequestType::
    reportSpecifier (::std::auto_ptr< reportSpecifier_type > x)
    {
      this->reportSpecifier_.set (x);
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
    // oadrReportRequestType
    //

    oadrReportRequestType::
    oadrReportRequestType (const reportRequestID_type& reportRequestID,
                           const reportSpecifier_type& reportSpecifier)
    : ::xml_schema::type (),
      reportRequestID_ (reportRequestID, this),
      reportSpecifier_ (reportSpecifier, this)
    {
    }

    oadrReportRequestType::
    oadrReportRequestType (const reportRequestID_type& reportRequestID,
                           ::std::auto_ptr< reportSpecifier_type > reportSpecifier)
    : ::xml_schema::type (),
      reportRequestID_ (reportRequestID, this),
      reportSpecifier_ (reportSpecifier, this)
    {
    }

    oadrReportRequestType::
    oadrReportRequestType (::std::auto_ptr< reportRequestID_type > reportRequestID,
                           ::std::auto_ptr< reportSpecifier_type > reportSpecifier)
    : ::xml_schema::type (),
      reportRequestID_ (reportRequestID, this),
      reportSpecifier_ (reportSpecifier, this)
    {
    }

    oadrReportRequestType::
    oadrReportRequestType (const oadrReportRequestType& x,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      reportRequestID_ (x.reportRequestID_, f, this),
      reportSpecifier_ (x.reportSpecifier_, f, this)
    {
    }

    oadrReportRequestType::
    oadrReportRequestType (const ::xercesc::DOMElement& e,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      reportRequestID_ (this),
      reportSpecifier_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void oadrReportRequestType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

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
            if (!reportRequestID_.present ())
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

        // reportSpecifier
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "reportSpecifier",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< reportSpecifier_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!reportSpecifier_.present ())
            {
              ::std::auto_ptr< reportSpecifier_type > r (
                dynamic_cast< reportSpecifier_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->reportSpecifier_.set (r);
              continue;
            }
          }
        }

        break;
      }

      if (!reportRequestID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "reportRequestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!reportSpecifier_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "reportSpecifier",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }
    }

    oadrReportRequestType* oadrReportRequestType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrReportRequestType (*this, f, c);
    }

    oadrReportRequestType& oadrReportRequestType::
    operator= (const oadrReportRequestType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->reportRequestID_ = x.reportRequestID_;
        this->reportSpecifier_ = x.reportSpecifier_;
      }

      return *this;
    }

    oadrReportRequestType::
    ~oadrReportRequestType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrReportRequestType >
    _xsd_oadrReportRequestType_type_factory_init (
      "oadrReportRequestType",
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
    operator<< (::xercesc::DOMElement& e, const oadrReportRequestType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // reportRequestID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrReportRequestType::reportRequestID_type& x (i.reportRequestID ());
        if (typeid (oadrReportRequestType::reportRequestID_type) == typeid (x))
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

      // reportSpecifier
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrReportRequestType::reportSpecifier_type& x (i.reportSpecifier ());
        if (typeid (oadrReportRequestType::reportSpecifier_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "reportSpecifier",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "reportSpecifier",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrReportRequestType >
    _xsd_oadrReportRequestType_type_serializer_init (
      "oadrReportRequestType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

