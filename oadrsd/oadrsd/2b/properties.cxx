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

#include "properties.hxx"

#include "dtstart.hxx"

#include "DurationPropType.hxx"

#include "tolerance.hxx"

namespace icalendar_2_0
{
  // properties
  // 

  const properties::dtstart_type& properties::
  dtstart () const
  {
    return this->dtstart_.get ();
  }

  properties::dtstart_type& properties::
  dtstart ()
  {
    return this->dtstart_.get ();
  }

  void properties::
  dtstart (const dtstart_type& x)
  {
    this->dtstart_.set (x);
  }

  void properties::
  dtstart (::std::unique_ptr< dtstart_type > x)
  {
    this->dtstart_.set (std::move (x));
  }

  const properties::duration_type& properties::
  duration () const
  {
    return this->duration_.get ();
  }

  properties::duration_type& properties::
  duration ()
  {
    return this->duration_.get ();
  }

  void properties::
  duration (const duration_type& x)
  {
    this->duration_.set (x);
  }

  void properties::
  duration (::std::unique_ptr< duration_type > x)
  {
    this->duration_.set (std::move (x));
  }

  const properties::tolerance_optional& properties::
  tolerance () const
  {
    return this->tolerance_;
  }

  properties::tolerance_optional& properties::
  tolerance ()
  {
    return this->tolerance_;
  }

  void properties::
  tolerance (const tolerance_type& x)
  {
    this->tolerance_.set (x);
  }

  void properties::
  tolerance (const tolerance_optional& x)
  {
    this->tolerance_ = x;
  }

  void properties::
  tolerance (::std::unique_ptr< tolerance_type > x)
  {
    this->tolerance_.set (std::move (x));
  }

  const properties::x_eiNotification_optional& properties::
  x_eiNotification () const
  {
    return this->x_eiNotification_;
  }

  properties::x_eiNotification_optional& properties::
  x_eiNotification ()
  {
    return this->x_eiNotification_;
  }

  void properties::
  x_eiNotification (const x_eiNotification_type& x)
  {
    this->x_eiNotification_.set (x);
  }

  void properties::
  x_eiNotification (const x_eiNotification_optional& x)
  {
    this->x_eiNotification_ = x;
  }

  void properties::
  x_eiNotification (::std::unique_ptr< x_eiNotification_type > x)
  {
    this->x_eiNotification_.set (std::move (x));
  }

  const properties::x_eiRampUp_optional& properties::
  x_eiRampUp () const
  {
    return this->x_eiRampUp_;
  }

  properties::x_eiRampUp_optional& properties::
  x_eiRampUp ()
  {
    return this->x_eiRampUp_;
  }

  void properties::
  x_eiRampUp (const x_eiRampUp_type& x)
  {
    this->x_eiRampUp_.set (x);
  }

  void properties::
  x_eiRampUp (const x_eiRampUp_optional& x)
  {
    this->x_eiRampUp_ = x;
  }

  void properties::
  x_eiRampUp (::std::unique_ptr< x_eiRampUp_type > x)
  {
    this->x_eiRampUp_.set (std::move (x));
  }

  const properties::x_eiRecovery_optional& properties::
  x_eiRecovery () const
  {
    return this->x_eiRecovery_;
  }

  properties::x_eiRecovery_optional& properties::
  x_eiRecovery ()
  {
    return this->x_eiRecovery_;
  }

  void properties::
  x_eiRecovery (const x_eiRecovery_type& x)
  {
    this->x_eiRecovery_.set (x);
  }

  void properties::
  x_eiRecovery (const x_eiRecovery_optional& x)
  {
    this->x_eiRecovery_ = x;
  }

  void properties::
  x_eiRecovery (::std::unique_ptr< x_eiRecovery_type > x)
  {
    this->x_eiRecovery_.set (std::move (x));
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

namespace icalendar_2_0
{
  // properties
  //

  properties::
  properties (const dtstart_type& dtstart,
              const duration_type& duration)
  : ::xml_schema::type (),
    dtstart_ (dtstart, this),
    duration_ (duration, this),
    tolerance_ (this),
    x_eiNotification_ (this),
    x_eiRampUp_ (this),
    x_eiRecovery_ (this)
  {
  }

  properties::
  properties (::std::unique_ptr< dtstart_type > dtstart,
              ::std::unique_ptr< duration_type > duration)
  : ::xml_schema::type (),
    dtstart_ (std::move (dtstart), this),
    duration_ (std::move (duration), this),
    tolerance_ (this),
    x_eiNotification_ (this),
    x_eiRampUp_ (this),
    x_eiRecovery_ (this)
  {
  }

  properties::
  properties (const properties& x,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    dtstart_ (x.dtstart_, f, this),
    duration_ (x.duration_, f, this),
    tolerance_ (x.tolerance_, f, this),
    x_eiNotification_ (x.x_eiNotification_, f, this),
    x_eiRampUp_ (x.x_eiRampUp_, f, this),
    x_eiRecovery_ (x.x_eiRecovery_, f, this)
  {
  }

  properties::
  properties (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    dtstart_ (this),
    duration_ (this),
    tolerance_ (this),
    x_eiNotification_ (this),
    x_eiRampUp_ (this),
    x_eiRecovery_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void properties::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // dtstart
      //
      if (n.name () == "dtstart" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0")
      {
        ::std::unique_ptr< dtstart_type > r (
          dtstart_traits::create (i, f, this));

        if (!dtstart_.present ())
        {
          this->dtstart_.set (::std::move (r));
          continue;
        }
      }

      // duration
      //
      if (n.name () == "duration" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0")
      {
        ::std::unique_ptr< duration_type > r (
          duration_traits::create (i, f, this));

        if (!duration_.present ())
        {
          this->duration_.set (::std::move (r));
          continue;
        }
      }

      // tolerance
      //
      if (n.name () == "tolerance" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0")
      {
        ::std::unique_ptr< tolerance_type > r (
          tolerance_traits::create (i, f, this));

        if (!this->tolerance_)
        {
          this->tolerance_.set (::std::move (r));
          continue;
        }
      }

      // x-eiNotification
      //
      if (n.name () == "x-eiNotification" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
      {
        ::std::unique_ptr< x_eiNotification_type > r (
          x_eiNotification_traits::create (i, f, this));

        if (!this->x_eiNotification_)
        {
          this->x_eiNotification_.set (::std::move (r));
          continue;
        }
      }

      // x-eiRampUp
      //
      if (n.name () == "x-eiRampUp" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
      {
        ::std::unique_ptr< x_eiRampUp_type > r (
          x_eiRampUp_traits::create (i, f, this));

        if (!this->x_eiRampUp_)
        {
          this->x_eiRampUp_.set (::std::move (r));
          continue;
        }
      }

      // x-eiRecovery
      //
      if (n.name () == "x-eiRecovery" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
      {
        ::std::unique_ptr< x_eiRecovery_type > r (
          x_eiRecovery_traits::create (i, f, this));

        if (!this->x_eiRecovery_)
        {
          this->x_eiRecovery_.set (::std::move (r));
          continue;
        }
      }

      break;
    }

    if (!dtstart_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "dtstart",
        "urn:ietf:params:xml:ns:icalendar-2.0");
    }

    if (!duration_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "duration",
        "urn:ietf:params:xml:ns:icalendar-2.0");
    }
  }

  properties* properties::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class properties (*this, f, c);
  }

  properties& properties::
  operator= (const properties& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->dtstart_ = x.dtstart_;
      this->duration_ = x.duration_;
      this->tolerance_ = x.tolerance_;
      this->x_eiNotification_ = x.x_eiNotification_;
      this->x_eiRampUp_ = x.x_eiRampUp_;
      this->x_eiRecovery_ = x.x_eiRecovery_;
    }

    return *this;
  }

  properties::
  ~properties ()
  {
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

namespace icalendar_2_0
{
  ::std::ostream&
  operator<< (::std::ostream& o, const properties& i)
  {
    o << ::std::endl << "dtstart: " << i.dtstart ();
    o << ::std::endl << "duration: " << i.duration ();
    if (i.tolerance ())
    {
      o << ::std::endl << "tolerance: " << *i.tolerance ();
    }

    if (i.x_eiNotification ())
    {
      o << ::std::endl << "x-eiNotification: " << *i.x_eiNotification ();
    }

    if (i.x_eiRampUp ())
    {
      o << ::std::endl << "x-eiRampUp: " << *i.x_eiRampUp ();
    }

    if (i.x_eiRecovery ())
    {
      o << ::std::endl << "x-eiRecovery: " << *i.x_eiRecovery ();
    }

    return o;
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace icalendar_2_0
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

namespace icalendar_2_0
{
  void
  operator<< (::xercesc::DOMElement& e, const properties& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // dtstart
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "dtstart",
          "urn:ietf:params:xml:ns:icalendar-2.0",
          e));

      s << i.dtstart ();
    }

    // duration
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "duration",
          "urn:ietf:params:xml:ns:icalendar-2.0",
          e));

      s << i.duration ();
    }

    // tolerance
    //
    if (i.tolerance ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "tolerance",
          "urn:ietf:params:xml:ns:icalendar-2.0",
          e));

      s << *i.tolerance ();
    }

    // x-eiNotification
    //
    if (i.x_eiNotification ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "x-eiNotification",
          "http://docs.oasis-open.org/ns/energyinterop/201110",
          e));

      s << *i.x_eiNotification ();
    }

    // x-eiRampUp
    //
    if (i.x_eiRampUp ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "x-eiRampUp",
          "http://docs.oasis-open.org/ns/energyinterop/201110",
          e));

      s << *i.x_eiRampUp ();
    }

    // x-eiRecovery
    //
    if (i.x_eiRecovery ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "x-eiRecovery",
          "http://docs.oasis-open.org/ns/energyinterop/201110",
          e));

      s << *i.x_eiRecovery ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

