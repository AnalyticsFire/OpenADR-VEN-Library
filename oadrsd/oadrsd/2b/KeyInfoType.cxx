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

#include "KeyInfoType.hxx"

#include "KeyValueType.hxx"

#include "RetrievalMethodType.hxx"

#include "X509DataType.hxx"

#include "PGPDataType.hxx"

#include "SPKIDataType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // KeyInfoType
    // 

    const KeyInfoType::KeyName_sequence& KeyInfoType::
    KeyName () const
    {
      return this->KeyName_;
    }

    KeyInfoType::KeyName_sequence& KeyInfoType::
    KeyName ()
    {
      return this->KeyName_;
    }

    void KeyInfoType::
    KeyName (const KeyName_sequence& s)
    {
      this->KeyName_ = s;
    }

    const KeyInfoType::KeyValue_sequence& KeyInfoType::
    KeyValue () const
    {
      return this->KeyValue_;
    }

    KeyInfoType::KeyValue_sequence& KeyInfoType::
    KeyValue ()
    {
      return this->KeyValue_;
    }

    void KeyInfoType::
    KeyValue (const KeyValue_sequence& s)
    {
      this->KeyValue_ = s;
    }

    const KeyInfoType::RetrievalMethod_sequence& KeyInfoType::
    RetrievalMethod () const
    {
      return this->RetrievalMethod_;
    }

    KeyInfoType::RetrievalMethod_sequence& KeyInfoType::
    RetrievalMethod ()
    {
      return this->RetrievalMethod_;
    }

    void KeyInfoType::
    RetrievalMethod (const RetrievalMethod_sequence& s)
    {
      this->RetrievalMethod_ = s;
    }

    const KeyInfoType::X509Data_sequence& KeyInfoType::
    X509Data () const
    {
      return this->X509Data_;
    }

    KeyInfoType::X509Data_sequence& KeyInfoType::
    X509Data ()
    {
      return this->X509Data_;
    }

    void KeyInfoType::
    X509Data (const X509Data_sequence& s)
    {
      this->X509Data_ = s;
    }

    const KeyInfoType::PGPData_sequence& KeyInfoType::
    PGPData () const
    {
      return this->PGPData_;
    }

    KeyInfoType::PGPData_sequence& KeyInfoType::
    PGPData ()
    {
      return this->PGPData_;
    }

    void KeyInfoType::
    PGPData (const PGPData_sequence& s)
    {
      this->PGPData_ = s;
    }

    const KeyInfoType::SPKIData_sequence& KeyInfoType::
    SPKIData () const
    {
      return this->SPKIData_;
    }

    KeyInfoType::SPKIData_sequence& KeyInfoType::
    SPKIData ()
    {
      return this->SPKIData_;
    }

    void KeyInfoType::
    SPKIData (const SPKIData_sequence& s)
    {
      this->SPKIData_ = s;
    }

    const KeyInfoType::MgmtData_sequence& KeyInfoType::
    MgmtData () const
    {
      return this->MgmtData_;
    }

    KeyInfoType::MgmtData_sequence& KeyInfoType::
    MgmtData ()
    {
      return this->MgmtData_;
    }

    void KeyInfoType::
    MgmtData (const MgmtData_sequence& s)
    {
      this->MgmtData_ = s;
    }

    const KeyInfoType::Id_optional& KeyInfoType::
    Id () const
    {
      return this->Id_;
    }

    KeyInfoType::Id_optional& KeyInfoType::
    Id ()
    {
      return this->Id_;
    }

    void KeyInfoType::
    Id (const Id_type& x)
    {
      this->Id_.set (x);
    }

    void KeyInfoType::
    Id (const Id_optional& x)
    {
      this->Id_ = x;
    }

    void KeyInfoType::
    Id (::std::unique_ptr< Id_type > x)
    {
      this->Id_.set (std::move (x));
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
    // KeyInfoType
    //

    KeyInfoType::
    KeyInfoType ()
    : ::xml_schema::type (),
      KeyName_ (this),
      KeyValue_ (this),
      RetrievalMethod_ (this),
      X509Data_ (this),
      PGPData_ (this),
      SPKIData_ (this),
      MgmtData_ (this),
      Id_ (this)
    {
    }

    KeyInfoType::
    KeyInfoType (const KeyInfoType& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      KeyName_ (x.KeyName_, f, this),
      KeyValue_ (x.KeyValue_, f, this),
      RetrievalMethod_ (x.RetrievalMethod_, f, this),
      X509Data_ (x.X509Data_, f, this),
      PGPData_ (x.PGPData_, f, this),
      SPKIData_ (x.SPKIData_, f, this),
      MgmtData_ (x.MgmtData_, f, this),
      Id_ (x.Id_, f, this)
    {
    }

    KeyInfoType::
    KeyInfoType (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      KeyName_ (this),
      KeyValue_ (this),
      RetrievalMethod_ (this),
      X509Data_ (this),
      PGPData_ (this),
      SPKIData_ (this),
      MgmtData_ (this),
      Id_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void KeyInfoType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // KeyName
        //
        if (n.name () == "KeyName" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< KeyName_type > r (
            KeyName_traits::create (i, f, this));

          this->KeyName_.push_back (::std::move (r));
          continue;
        }

        // KeyValue
        //
        if (n.name () == "KeyValue" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< KeyValue_type > r (
            KeyValue_traits::create (i, f, this));

          this->KeyValue_.push_back (::std::move (r));
          continue;
        }

        // RetrievalMethod
        //
        if (n.name () == "RetrievalMethod" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< RetrievalMethod_type > r (
            RetrievalMethod_traits::create (i, f, this));

          this->RetrievalMethod_.push_back (::std::move (r));
          continue;
        }

        // X509Data
        //
        if (n.name () == "X509Data" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< X509Data_type > r (
            X509Data_traits::create (i, f, this));

          this->X509Data_.push_back (::std::move (r));
          continue;
        }

        // PGPData
        //
        if (n.name () == "PGPData" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< PGPData_type > r (
            PGPData_traits::create (i, f, this));

          this->PGPData_.push_back (::std::move (r));
          continue;
        }

        // SPKIData
        //
        if (n.name () == "SPKIData" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< SPKIData_type > r (
            SPKIData_traits::create (i, f, this));

          this->SPKIData_.push_back (::std::move (r));
          continue;
        }

        // MgmtData
        //
        if (n.name () == "MgmtData" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< MgmtData_type > r (
            MgmtData_traits::create (i, f, this));

          this->MgmtData_.push_back (::std::move (r));
          continue;
        }

        break;
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "Id" && n.namespace_ ().empty ())
        {
          this->Id_.set (Id_traits::create (i, f, this));
          continue;
        }
      }
    }

    KeyInfoType* KeyInfoType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class KeyInfoType (*this, f, c);
    }

    KeyInfoType& KeyInfoType::
    operator= (const KeyInfoType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->KeyName_ = x.KeyName_;
        this->KeyValue_ = x.KeyValue_;
        this->RetrievalMethod_ = x.RetrievalMethod_;
        this->X509Data_ = x.X509Data_;
        this->PGPData_ = x.PGPData_;
        this->SPKIData_ = x.SPKIData_;
        this->MgmtData_ = x.MgmtData_;
        this->Id_ = x.Id_;
      }

      return *this;
    }

    KeyInfoType::
    ~KeyInfoType ()
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
  namespace sig
  {
    ::std::ostream&
    operator<< (::std::ostream& o, const KeyInfoType& i)
    {
      for (KeyInfoType::KeyName_const_iterator
           b (i.KeyName ().begin ()), e (i.KeyName ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "KeyName: " << *b;
      }

      for (KeyInfoType::KeyValue_const_iterator
           b (i.KeyValue ().begin ()), e (i.KeyValue ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "KeyValue: " << *b;
      }

      for (KeyInfoType::RetrievalMethod_const_iterator
           b (i.RetrievalMethod ().begin ()), e (i.RetrievalMethod ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "RetrievalMethod: " << *b;
      }

      for (KeyInfoType::X509Data_const_iterator
           b (i.X509Data ().begin ()), e (i.X509Data ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "X509Data: " << *b;
      }

      for (KeyInfoType::PGPData_const_iterator
           b (i.PGPData ().begin ()), e (i.PGPData ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "PGPData: " << *b;
      }

      for (KeyInfoType::SPKIData_const_iterator
           b (i.SPKIData ().begin ()), e (i.SPKIData ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "SPKIData: " << *b;
      }

      for (KeyInfoType::MgmtData_const_iterator
           b (i.MgmtData ().begin ()), e (i.MgmtData ().end ());
           b != e; ++b)
      {
        o << ::std::endl << "MgmtData: " << *b;
      }

      if (i.Id ())
      {
        o << ::std::endl << "Id: " << *i.Id ();
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
    operator<< (::xercesc::DOMElement& e, const KeyInfoType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // KeyName
      //
      for (KeyInfoType::KeyName_const_iterator
           b (i.KeyName ().begin ()), n (i.KeyName ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "KeyName",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // KeyValue
      //
      for (KeyInfoType::KeyValue_const_iterator
           b (i.KeyValue ().begin ()), n (i.KeyValue ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "KeyValue",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // RetrievalMethod
      //
      for (KeyInfoType::RetrievalMethod_const_iterator
           b (i.RetrievalMethod ().begin ()), n (i.RetrievalMethod ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "RetrievalMethod",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // X509Data
      //
      for (KeyInfoType::X509Data_const_iterator
           b (i.X509Data ().begin ()), n (i.X509Data ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "X509Data",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // PGPData
      //
      for (KeyInfoType::PGPData_const_iterator
           b (i.PGPData ().begin ()), n (i.PGPData ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "PGPData",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // SPKIData
      //
      for (KeyInfoType::SPKIData_const_iterator
           b (i.SPKIData ().begin ()), n (i.SPKIData ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "SPKIData",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // MgmtData
      //
      for (KeyInfoType::MgmtData_const_iterator
           b (i.MgmtData ().begin ()), n (i.MgmtData ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "MgmtData",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // Id
      //
      if (i.Id ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Id",
            e));

        a << *i.Id ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

