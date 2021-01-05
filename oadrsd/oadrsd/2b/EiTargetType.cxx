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

#include "EiTargetType.hxx"

#include "AggregatedPnodeType.hxx"

#include "EndDeviceAssetType.hxx"

#include "MeterAssetType.hxx"

#include "PnodeType.hxx"

#include "ServiceAreaType.hxx"

#include "ServiceDeliveryPointType.hxx"

#include "ServiceLocationType.hxx"

#include "TransportInterfaceType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // EiTargetType
    // 

    const EiTargetType::aggregatedPnode_sequence& EiTargetType::
    aggregatedPnode () const
    {
      return this->aggregatedPnode_;
    }

    EiTargetType::aggregatedPnode_sequence& EiTargetType::
    aggregatedPnode ()
    {
      return this->aggregatedPnode_;
    }

    void EiTargetType::
    aggregatedPnode (const aggregatedPnode_sequence& s)
    {
      this->aggregatedPnode_ = s;
    }

    const EiTargetType::endDeviceAsset_sequence& EiTargetType::
    endDeviceAsset () const
    {
      return this->endDeviceAsset_;
    }

    EiTargetType::endDeviceAsset_sequence& EiTargetType::
    endDeviceAsset ()
    {
      return this->endDeviceAsset_;
    }

    void EiTargetType::
    endDeviceAsset (const endDeviceAsset_sequence& s)
    {
      this->endDeviceAsset_ = s;
    }

    const EiTargetType::meterAsset_sequence& EiTargetType::
    meterAsset () const
    {
      return this->meterAsset_;
    }

    EiTargetType::meterAsset_sequence& EiTargetType::
    meterAsset ()
    {
      return this->meterAsset_;
    }

    void EiTargetType::
    meterAsset (const meterAsset_sequence& s)
    {
      this->meterAsset_ = s;
    }

    const EiTargetType::pnode_sequence& EiTargetType::
    pnode () const
    {
      return this->pnode_;
    }

    EiTargetType::pnode_sequence& EiTargetType::
    pnode ()
    {
      return this->pnode_;
    }

    void EiTargetType::
    pnode (const pnode_sequence& s)
    {
      this->pnode_ = s;
    }

    const EiTargetType::serviceArea_sequence& EiTargetType::
    serviceArea () const
    {
      return this->serviceArea_;
    }

    EiTargetType::serviceArea_sequence& EiTargetType::
    serviceArea ()
    {
      return this->serviceArea_;
    }

    void EiTargetType::
    serviceArea (const serviceArea_sequence& s)
    {
      this->serviceArea_ = s;
    }

    const EiTargetType::serviceDeliveryPoint_sequence& EiTargetType::
    serviceDeliveryPoint () const
    {
      return this->serviceDeliveryPoint_;
    }

    EiTargetType::serviceDeliveryPoint_sequence& EiTargetType::
    serviceDeliveryPoint ()
    {
      return this->serviceDeliveryPoint_;
    }

    void EiTargetType::
    serviceDeliveryPoint (const serviceDeliveryPoint_sequence& s)
    {
      this->serviceDeliveryPoint_ = s;
    }

    const EiTargetType::serviceLocation_sequence& EiTargetType::
    serviceLocation () const
    {
      return this->serviceLocation_;
    }

    EiTargetType::serviceLocation_sequence& EiTargetType::
    serviceLocation ()
    {
      return this->serviceLocation_;
    }

    void EiTargetType::
    serviceLocation (const serviceLocation_sequence& s)
    {
      this->serviceLocation_ = s;
    }

    const EiTargetType::transportInterface_sequence& EiTargetType::
    transportInterface () const
    {
      return this->transportInterface_;
    }

    EiTargetType::transportInterface_sequence& EiTargetType::
    transportInterface ()
    {
      return this->transportInterface_;
    }

    void EiTargetType::
    transportInterface (const transportInterface_sequence& s)
    {
      this->transportInterface_ = s;
    }

    const EiTargetType::groupID_sequence& EiTargetType::
    groupID () const
    {
      return this->groupID_;
    }

    EiTargetType::groupID_sequence& EiTargetType::
    groupID ()
    {
      return this->groupID_;
    }

    void EiTargetType::
    groupID (const groupID_sequence& s)
    {
      this->groupID_ = s;
    }

    const EiTargetType::groupName_sequence& EiTargetType::
    groupName () const
    {
      return this->groupName_;
    }

    EiTargetType::groupName_sequence& EiTargetType::
    groupName ()
    {
      return this->groupName_;
    }

    void EiTargetType::
    groupName (const groupName_sequence& s)
    {
      this->groupName_ = s;
    }

    const EiTargetType::resourceID_sequence& EiTargetType::
    resourceID () const
    {
      return this->resourceID_;
    }

    EiTargetType::resourceID_sequence& EiTargetType::
    resourceID ()
    {
      return this->resourceID_;
    }

    void EiTargetType::
    resourceID (const resourceID_sequence& s)
    {
      this->resourceID_ = s;
    }

    const EiTargetType::venID_sequence& EiTargetType::
    venID () const
    {
      return this->venID_;
    }

    EiTargetType::venID_sequence& EiTargetType::
    venID ()
    {
      return this->venID_;
    }

    void EiTargetType::
    venID (const venID_sequence& s)
    {
      this->venID_ = s;
    }

    const EiTargetType::partyID_sequence& EiTargetType::
    partyID () const
    {
      return this->partyID_;
    }

    EiTargetType::partyID_sequence& EiTargetType::
    partyID ()
    {
      return this->partyID_;
    }

    void EiTargetType::
    partyID (const partyID_sequence& s)
    {
      this->partyID_ = s;
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
  namespace ei
  {
    // EiTargetType
    //

    EiTargetType::
    EiTargetType ()
    : ::xml_schema::type (),
      aggregatedPnode_ (this),
      endDeviceAsset_ (this),
      meterAsset_ (this),
      pnode_ (this),
      serviceArea_ (this),
      serviceDeliveryPoint_ (this),
      serviceLocation_ (this),
      transportInterface_ (this),
      groupID_ (this),
      groupName_ (this),
      resourceID_ (this),
      venID_ (this),
      partyID_ (this)
    {
    }

    EiTargetType::
    EiTargetType (const EiTargetType& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      aggregatedPnode_ (x.aggregatedPnode_, f, this),
      endDeviceAsset_ (x.endDeviceAsset_, f, this),
      meterAsset_ (x.meterAsset_, f, this),
      pnode_ (x.pnode_, f, this),
      serviceArea_ (x.serviceArea_, f, this),
      serviceDeliveryPoint_ (x.serviceDeliveryPoint_, f, this),
      serviceLocation_ (x.serviceLocation_, f, this),
      transportInterface_ (x.transportInterface_, f, this),
      groupID_ (x.groupID_, f, this),
      groupName_ (x.groupName_, f, this),
      resourceID_ (x.resourceID_, f, this),
      venID_ (x.venID_, f, this),
      partyID_ (x.partyID_, f, this)
    {
    }

    EiTargetType::
    EiTargetType (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      aggregatedPnode_ (this),
      endDeviceAsset_ (this),
      meterAsset_ (this),
      pnode_ (this),
      serviceArea_ (this),
      serviceDeliveryPoint_ (this),
      serviceLocation_ (this),
      transportInterface_ (this),
      groupID_ (this),
      groupName_ (this),
      resourceID_ (this),
      venID_ (this),
      partyID_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void EiTargetType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // aggregatedPnode
        //
        if (n.name () == "aggregatedPnode" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
        {
          ::std::unique_ptr< aggregatedPnode_type > r (
            aggregatedPnode_traits::create (i, f, this));

          this->aggregatedPnode_.push_back (::std::move (r));
          continue;
        }

        // endDeviceAsset
        //
        if (n.name () == "endDeviceAsset" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
        {
          ::std::unique_ptr< endDeviceAsset_type > r (
            endDeviceAsset_traits::create (i, f, this));

          this->endDeviceAsset_.push_back (::std::move (r));
          continue;
        }

        // meterAsset
        //
        if (n.name () == "meterAsset" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
        {
          ::std::unique_ptr< meterAsset_type > r (
            meterAsset_traits::create (i, f, this));

          this->meterAsset_.push_back (::std::move (r));
          continue;
        }

        // pnode
        //
        if (n.name () == "pnode" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
        {
          ::std::unique_ptr< pnode_type > r (
            pnode_traits::create (i, f, this));

          this->pnode_.push_back (::std::move (r));
          continue;
        }

        // serviceArea
        //
        if (n.name () == "serviceArea" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06")
        {
          ::std::unique_ptr< serviceArea_type > r (
            serviceArea_traits::create (i, f, this));

          this->serviceArea_.push_back (::std::move (r));
          continue;
        }

        // serviceDeliveryPoint
        //
        if (n.name () == "serviceDeliveryPoint" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
        {
          ::std::unique_ptr< serviceDeliveryPoint_type > r (
            serviceDeliveryPoint_traits::create (i, f, this));

          this->serviceDeliveryPoint_.push_back (::std::move (r));
          continue;
        }

        // serviceLocation
        //
        if (n.name () == "serviceLocation" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
        {
          ::std::unique_ptr< serviceLocation_type > r (
            serviceLocation_traits::create (i, f, this));

          this->serviceLocation_.push_back (::std::move (r));
          continue;
        }

        // transportInterface
        //
        if (n.name () == "transportInterface" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
        {
          ::std::unique_ptr< transportInterface_type > r (
            transportInterface_traits::create (i, f, this));

          this->transportInterface_.push_back (::std::move (r));
          continue;
        }

        // groupID
        //
        if (n.name () == "groupID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< groupID_type > r (
            groupID_traits::create (i, f, this));

          this->groupID_.push_back (::std::move (r));
          continue;
        }

        // groupName
        //
        if (n.name () == "groupName" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< groupName_type > r (
            groupName_traits::create (i, f, this));

          this->groupName_.push_back (::std::move (r));
          continue;
        }

        // resourceID
        //
        if (n.name () == "resourceID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< resourceID_type > r (
            resourceID_traits::create (i, f, this));

          this->resourceID_.push_back (::std::move (r));
          continue;
        }

        // venID
        //
        if (n.name () == "venID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< venID_type > r (
            venID_traits::create (i, f, this));

          this->venID_.push_back (::std::move (r));
          continue;
        }

        // partyID
        //
        if (n.name () == "partyID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< partyID_type > r (
            partyID_traits::create (i, f, this));

          this->partyID_.push_back (::std::move (r));
          continue;
        }

        break;
      }
    }

    EiTargetType* EiTargetType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class EiTargetType (*this, f, c);
    }

    EiTargetType& EiTargetType::
    operator= (const EiTargetType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->aggregatedPnode_ = x.aggregatedPnode_;
        this->endDeviceAsset_ = x.endDeviceAsset_;
        this->meterAsset_ = x.meterAsset_;
        this->pnode_ = x.pnode_;
        this->serviceArea_ = x.serviceArea_;
        this->serviceDeliveryPoint_ = x.serviceDeliveryPoint_;
        this->serviceLocation_ = x.serviceLocation_;
        this->transportInterface_ = x.transportInterface_;
        this->groupID_ = x.groupID_;
        this->groupName_ = x.groupName_;
        this->resourceID_ = x.resourceID_;
        this->venID_ = x.venID_;
        this->partyID_ = x.partyID_;
      }

      return *this;
    }

    EiTargetType::
    ~EiTargetType ()
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
  namespace ei
  {
    ::std::ostream&
    operator<< (::std::ostream& o, const EiTargetType& i)
    {
      for (EiTargetType::aggregatedPnode_const_iterator
           b (i.aggregatedPnode ().begin ()), e (i.aggregatedPnode ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "aggregatedPnode: " << *b;
      }

      for (EiTargetType::endDeviceAsset_const_iterator
           b (i.endDeviceAsset ().begin ()), e (i.endDeviceAsset ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "endDeviceAsset: " << *b;
      }

      for (EiTargetType::meterAsset_const_iterator
           b (i.meterAsset ().begin ()), e (i.meterAsset ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "meterAsset: " << *b;
      }

      for (EiTargetType::pnode_const_iterator
           b (i.pnode ().begin ()), e (i.pnode ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "pnode: " << *b;
      }

      for (EiTargetType::serviceArea_const_iterator
           b (i.serviceArea ().begin ()), e (i.serviceArea ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "serviceArea: " << *b;
      }

      for (EiTargetType::serviceDeliveryPoint_const_iterator
           b (i.serviceDeliveryPoint ().begin ()), e (i.serviceDeliveryPoint ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "serviceDeliveryPoint: " << *b;
      }

      for (EiTargetType::serviceLocation_const_iterator
           b (i.serviceLocation ().begin ()), e (i.serviceLocation ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "serviceLocation: " << *b;
      }

      for (EiTargetType::transportInterface_const_iterator
           b (i.transportInterface ().begin ()), e (i.transportInterface ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "transportInterface: " << *b;
      }

      for (EiTargetType::groupID_const_iterator
           b (i.groupID ().begin ()), e (i.groupID ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "groupID: " << *b;
      }

      for (EiTargetType::groupName_const_iterator
           b (i.groupName ().begin ()), e (i.groupName ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "groupName: " << *b;
      }

      for (EiTargetType::resourceID_const_iterator
           b (i.resourceID ().begin ()), e (i.resourceID ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "resourceID: " << *b;
      }

      for (EiTargetType::venID_const_iterator
           b (i.venID ().begin ()), e (i.venID ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "venID: " << *b;
      }

      for (EiTargetType::partyID_const_iterator
           b (i.partyID ().begin ()), e (i.partyID ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "partyID: " << *b;
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
  namespace ei
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
  namespace ei
  {
    void
    operator<< (::xercesc::DOMElement& e, const EiTargetType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // aggregatedPnode
      //
      for (EiTargetType::aggregatedPnode_const_iterator
           b (i.aggregatedPnode ().begin ()), n (i.aggregatedPnode ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "aggregatedPnode",
            "http://docs.oasis-open.org/ns/emix/2011/06/power",
            e));

        s << *b;
      }

      // endDeviceAsset
      //
      for (EiTargetType::endDeviceAsset_const_iterator
           b (i.endDeviceAsset ().begin ()), n (i.endDeviceAsset ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "endDeviceAsset",
            "http://docs.oasis-open.org/ns/emix/2011/06/power",
            e));

        s << *b;
      }

      // meterAsset
      //
      for (EiTargetType::meterAsset_const_iterator
           b (i.meterAsset ().begin ()), n (i.meterAsset ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "meterAsset",
            "http://docs.oasis-open.org/ns/emix/2011/06/power",
            e));

        s << *b;
      }

      // pnode
      //
      for (EiTargetType::pnode_const_iterator
           b (i.pnode ().begin ()), n (i.pnode ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "pnode",
            "http://docs.oasis-open.org/ns/emix/2011/06/power",
            e));

        s << *b;
      }

      // serviceArea
      //
      for (EiTargetType::serviceArea_const_iterator
           b (i.serviceArea ().begin ()), n (i.serviceArea ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "serviceArea",
            "http://docs.oasis-open.org/ns/emix/2011/06",
            e));

        s << *b;
      }

      // serviceDeliveryPoint
      //
      for (EiTargetType::serviceDeliveryPoint_const_iterator
           b (i.serviceDeliveryPoint ().begin ()), n (i.serviceDeliveryPoint ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "serviceDeliveryPoint",
            "http://docs.oasis-open.org/ns/emix/2011/06/power",
            e));

        s << *b;
      }

      // serviceLocation
      //
      for (EiTargetType::serviceLocation_const_iterator
           b (i.serviceLocation ().begin ()), n (i.serviceLocation ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "serviceLocation",
            "http://docs.oasis-open.org/ns/emix/2011/06/power",
            e));

        s << *b;
      }

      // transportInterface
      //
      for (EiTargetType::transportInterface_const_iterator
           b (i.transportInterface ().begin ()), n (i.transportInterface ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "transportInterface",
            "http://docs.oasis-open.org/ns/emix/2011/06/power",
            e));

        s << *b;
      }

      // groupID
      //
      for (EiTargetType::groupID_const_iterator
           b (i.groupID ().begin ()), n (i.groupID ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "groupID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }

      // groupName
      //
      for (EiTargetType::groupName_const_iterator
           b (i.groupName ().begin ()), n (i.groupName ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "groupName",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }

      // resourceID
      //
      for (EiTargetType::resourceID_const_iterator
           b (i.resourceID ().begin ()), n (i.resourceID ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "resourceID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }

      // venID
      //
      for (EiTargetType::venID_const_iterator
           b (i.venID ().begin ()), n (i.venID ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "venID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }

      // partyID
      //
      for (EiTargetType::partyID_const_iterator
           b (i.partyID ().begin ()), n (i.partyID ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "partyID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
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

