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
    reportRequestID (::std::unique_ptr< reportRequestID_type > x)
    {
      this->reportRequestID_.set (std::move (x));
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
    reportSpecifier (::std::unique_ptr< reportSpecifier_type > x)
    {
      this->reportSpecifier_.set (std::move (x));
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
                           ::std::unique_ptr< reportSpecifier_type > reportSpecifier)
    : ::xml_schema::type (),
      reportRequestID_ (reportRequestID, this),
      reportSpecifier_ (std::move (reportSpecifier), this)
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
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void oadrReportRequestType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // reportRequestID
        //
        if (n.name () == "reportRequestID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< reportRequestID_type > r (
            reportRequestID_traits::create (i, f, this));

          if (!reportRequestID_.present ())
          {
            this->reportRequestID_.set (::std::move (r));
            continue;
          }
        }

        // reportSpecifier
        //
        if (n.name () == "reportSpecifier" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< reportSpecifier_type > r (
            reportSpecifier_traits::create (i, f, this));

          if (!reportSpecifier_.present ())
          {
            this->reportSpecifier_.set (::std::move (r));
            continue;
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
    operator<< (::std::ostream& o, const oadrReportRequestType& i)
    {
      o << ::std::endl << "reportRequestID: " << i.reportRequestID ();
      o << ::std::endl << "reportSpecifier: " << i.reportSpecifier ();
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
    operator<< (::xercesc::DOMElement& e, const oadrReportRequestType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // reportRequestID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "reportRequestID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.reportRequestID ();
      }

      // reportSpecifier
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "reportSpecifier",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.reportSpecifier ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

