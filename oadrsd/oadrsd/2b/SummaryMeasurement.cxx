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

#include "SummaryMeasurement.hxx"

#include "UnitMultiplierKind.hxx"

#include "TimeType.hxx"

#include "UnitSymbolKind.hxx"

#include "Int48.hxx"

namespace espi
{
  // SummaryMeasurement
  // 

  const SummaryMeasurement::powerOfTenMultiplier_optional& SummaryMeasurement::
  powerOfTenMultiplier () const
  {
    return this->powerOfTenMultiplier_;
  }

  SummaryMeasurement::powerOfTenMultiplier_optional& SummaryMeasurement::
  powerOfTenMultiplier ()
  {
    return this->powerOfTenMultiplier_;
  }

  void SummaryMeasurement::
  powerOfTenMultiplier (const powerOfTenMultiplier_type& x)
  {
    this->powerOfTenMultiplier_.set (x);
  }

  void SummaryMeasurement::
  powerOfTenMultiplier (const powerOfTenMultiplier_optional& x)
  {
    this->powerOfTenMultiplier_ = x;
  }

  void SummaryMeasurement::
  powerOfTenMultiplier (::std::auto_ptr< powerOfTenMultiplier_type > x)
  {
    this->powerOfTenMultiplier_.set (x);
  }

  const SummaryMeasurement::timeStamp_optional& SummaryMeasurement::
  timeStamp () const
  {
    return this->timeStamp_;
  }

  SummaryMeasurement::timeStamp_optional& SummaryMeasurement::
  timeStamp ()
  {
    return this->timeStamp_;
  }

  void SummaryMeasurement::
  timeStamp (const timeStamp_type& x)
  {
    this->timeStamp_.set (x);
  }

  void SummaryMeasurement::
  timeStamp (const timeStamp_optional& x)
  {
    this->timeStamp_ = x;
  }

  void SummaryMeasurement::
  timeStamp (::std::auto_ptr< timeStamp_type > x)
  {
    this->timeStamp_.set (x);
  }

  const SummaryMeasurement::uom_optional& SummaryMeasurement::
  uom () const
  {
    return this->uom_;
  }

  SummaryMeasurement::uom_optional& SummaryMeasurement::
  uom ()
  {
    return this->uom_;
  }

  void SummaryMeasurement::
  uom (const uom_type& x)
  {
    this->uom_.set (x);
  }

  void SummaryMeasurement::
  uom (const uom_optional& x)
  {
    this->uom_ = x;
  }

  void SummaryMeasurement::
  uom (::std::auto_ptr< uom_type > x)
  {
    this->uom_.set (x);
  }

  const SummaryMeasurement::value_optional& SummaryMeasurement::
  value () const
  {
    return this->value_;
  }

  SummaryMeasurement::value_optional& SummaryMeasurement::
  value ()
  {
    return this->value_;
  }

  void SummaryMeasurement::
  value (const value_type& x)
  {
    this->value_.set (x);
  }

  void SummaryMeasurement::
  value (const value_optional& x)
  {
    this->value_ = x;
  }

  void SummaryMeasurement::
  value (::std::auto_ptr< value_type > x)
  {
    this->value_.set (x);
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

namespace espi
{
  // SummaryMeasurement
  //

  SummaryMeasurement::
  SummaryMeasurement ()
  : ::espi::Object (),
    powerOfTenMultiplier_ (this),
    timeStamp_ (this),
    uom_ (this),
    value_ (this)
  {
  }

  SummaryMeasurement::
  SummaryMeasurement (const SummaryMeasurement& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
  : ::espi::Object (x, f, c),
    powerOfTenMultiplier_ (x.powerOfTenMultiplier_, f, this),
    timeStamp_ (x.timeStamp_, f, this),
    uom_ (x.uom_, f, this),
    value_ (x.value_, f, this)
  {
  }

  SummaryMeasurement::
  SummaryMeasurement (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
  : ::espi::Object (e, f | ::xml_schema::flags::base, c),
    powerOfTenMultiplier_ (this),
    timeStamp_ (this),
    uom_ (this),
    value_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
      this->parse (p, f);
    }
  }

  void SummaryMeasurement::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    this->::espi::Object::parse (p, f);

    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // powerOfTenMultiplier
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "powerOfTenMultiplier",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< powerOfTenMultiplier_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->powerOfTenMultiplier_)
          {
            ::std::auto_ptr< powerOfTenMultiplier_type > r (
              dynamic_cast< powerOfTenMultiplier_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->powerOfTenMultiplier_.set (r);
            continue;
          }
        }
      }

      // timeStamp
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "timeStamp",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< timeStamp_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->timeStamp_)
          {
            ::std::auto_ptr< timeStamp_type > r (
              dynamic_cast< timeStamp_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->timeStamp_.set (r);
            continue;
          }
        }
      }

      // uom
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "uom",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< uom_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->uom_)
          {
            ::std::auto_ptr< uom_type > r (
              dynamic_cast< uom_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->uom_.set (r);
            continue;
          }
        }
      }

      // value
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "value",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< value_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->value_)
          {
            ::std::auto_ptr< value_type > r (
              dynamic_cast< value_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->value_.set (r);
            continue;
          }
        }
      }

      break;
    }
  }

  SummaryMeasurement* SummaryMeasurement::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class SummaryMeasurement (*this, f, c);
  }

  SummaryMeasurement& SummaryMeasurement::
  operator= (const SummaryMeasurement& x)
  {
    if (this != &x)
    {
      static_cast< ::espi::Object& > (*this) = x;
      this->powerOfTenMultiplier_ = x.powerOfTenMultiplier_;
      this->timeStamp_ = x.timeStamp_;
      this->uom_ = x.uom_;
      this->value_ = x.value_;
    }

    return *this;
  }

  SummaryMeasurement::
  ~SummaryMeasurement ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, SummaryMeasurement >
  _xsd_SummaryMeasurement_type_factory_init (
    "SummaryMeasurement",
    "http://naesb.org/espi");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace espi
{
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

namespace espi
{
  void
  operator<< (::xercesc::DOMElement& e, const SummaryMeasurement& i)
  {
    e << static_cast< const ::espi::Object& > (i);

    // powerOfTenMultiplier
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.powerOfTenMultiplier ())
      {
        const SummaryMeasurement::powerOfTenMultiplier_type& x (*i.powerOfTenMultiplier ());
        if (typeid (SummaryMeasurement::powerOfTenMultiplier_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "powerOfTenMultiplier",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "powerOfTenMultiplier",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }

    // timeStamp
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.timeStamp ())
      {
        const SummaryMeasurement::timeStamp_type& x (*i.timeStamp ());
        if (typeid (SummaryMeasurement::timeStamp_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "timeStamp",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "timeStamp",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }

    // uom
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.uom ())
      {
        const SummaryMeasurement::uom_type& x (*i.uom ());
        if (typeid (SummaryMeasurement::uom_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "uom",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "uom",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }

    // value
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.value ())
      {
        const SummaryMeasurement::value_type& x (*i.value ());
        if (typeid (SummaryMeasurement::value_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "value",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "value",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, SummaryMeasurement >
  _xsd_SummaryMeasurement_type_serializer_init (
    "SummaryMeasurement",
    "http://naesb.org/espi");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

