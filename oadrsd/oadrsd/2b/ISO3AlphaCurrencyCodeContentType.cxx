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

#include "ISO3AlphaCurrencyCodeContentType.hxx"

namespace ISO42173A_2010_04_07
{
  // ISO3AlphaCurrencyCodeContentType
  // 

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (value v)
  : ::xml_schema::token (_xsd_ISO3AlphaCurrencyCodeContentType_literals_[v])
  {
  }

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (const char* v)
  : ::xml_schema::token (v)
  {
  }

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (const ::std::string& v)
  : ::xml_schema::token (v)
  {
  }

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (const ::xml_schema::token& v)
  : ::xml_schema::token (v)
  {
  }

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (const ISO3AlphaCurrencyCodeContentType& v,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
  : ::xml_schema::token (v, f, c)
  {
  }

  ISO3AlphaCurrencyCodeContentType& ISO3AlphaCurrencyCodeContentType::
  operator= (value v)
  {
    static_cast< ::xml_schema::token& > (*this) = 
    ::xml_schema::token (_xsd_ISO3AlphaCurrencyCodeContentType_literals_[v]);

    return *this;
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

namespace ISO42173A_2010_04_07
{
  // ISO3AlphaCurrencyCodeContentType
  //

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
  : ::xml_schema::token (e, f, c)
  {
    _xsd_ISO3AlphaCurrencyCodeContentType_convert ();
  }

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (const ::xercesc::DOMAttr& a,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
  : ::xml_schema::token (a, f, c)
  {
    _xsd_ISO3AlphaCurrencyCodeContentType_convert ();
  }

  ISO3AlphaCurrencyCodeContentType::
  ISO3AlphaCurrencyCodeContentType (const ::std::string& s,
                                    const ::xercesc::DOMElement* e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
  : ::xml_schema::token (s, e, f, c)
  {
    _xsd_ISO3AlphaCurrencyCodeContentType_convert ();
  }

  ISO3AlphaCurrencyCodeContentType* ISO3AlphaCurrencyCodeContentType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class ISO3AlphaCurrencyCodeContentType (*this, f, c);
  }

  ISO3AlphaCurrencyCodeContentType::value ISO3AlphaCurrencyCodeContentType::
  _xsd_ISO3AlphaCurrencyCodeContentType_convert () const
  {
    ::xsd::cxx::tree::enum_comparator< char > c (_xsd_ISO3AlphaCurrencyCodeContentType_literals_);
    const value* i (::std::lower_bound (
                      _xsd_ISO3AlphaCurrencyCodeContentType_indexes_,
                      _xsd_ISO3AlphaCurrencyCodeContentType_indexes_ + 184,
                      *this,
                      c));

    if (i == _xsd_ISO3AlphaCurrencyCodeContentType_indexes_ + 184 || _xsd_ISO3AlphaCurrencyCodeContentType_literals_[*i] != *this)
    {
      throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
    }

    return *i;
  }

  const char* const ISO3AlphaCurrencyCodeContentType::
  _xsd_ISO3AlphaCurrencyCodeContentType_literals_[184] =
  {
    "AED",
    "AFN",
    "ALL",
    "AMD",
    "ANG",
    "AOA",
    "ARS",
    "AUD",
    "AWG",
    "AZN",
    "BAM",
    "BBD",
    "BDT",
    "BGN",
    "BHD",
    "BIF",
    "BMD",
    "BND",
    "BOB",
    "BOV",
    "BRL",
    "BSD",
    "BTN",
    "BWP",
    "BYR",
    "BZD",
    "CAD",
    "CDF",
    "CHE",
    "CHF",
    "CHW",
    "CLF",
    "CLP",
    "CNY",
    "COP",
    "COU",
    "CRC",
    "CUC",
    "CUP",
    "CVE",
    "CZK",
    "DJF",
    "DKK",
    "DOP",
    "DZD",
    "EEK",
    "EGP",
    "ERN",
    "ETB",
    "EUR",
    "FJD",
    "FKP",
    "GBP",
    "GEL",
    "GHS",
    "GIP",
    "GMD",
    "GNF",
    "GTQ",
    "GWP",
    "GYD",
    "HKD",
    "HNL",
    "HRK",
    "HTG",
    "HUF",
    "IDR",
    "ILS",
    "INR",
    "IQD",
    "IRR",
    "ISK",
    "JMD",
    "JOD",
    "JPY",
    "KES",
    "KGS",
    "KHR",
    "KMF",
    "KPW",
    "KRW",
    "KWD",
    "KYD",
    "KZT",
    "LAK",
    "LBP",
    "LKR",
    "LRD",
    "LSL",
    "LTL",
    "LVL",
    "LYD",
    "MAD",
    "MAD",
    "MDL",
    "MGA",
    "MKD",
    "MMK",
    "MNT",
    "MOP",
    "MRO",
    "MUR",
    "MVR",
    "MWK",
    "MXN",
    "MXV",
    "MYR",
    "MZN",
    "NAD",
    "NGN",
    "NIO",
    "NOK",
    "NPR",
    "NZD",
    "OMR",
    "PAB",
    "PEN",
    "PGK",
    "PHP",
    "PKR",
    "PLN",
    "PYG",
    "QAR",
    "RON",
    "RSD",
    "RUB",
    "RWF",
    "SAR",
    "SBD",
    "SCR",
    "SDG",
    "SEK",
    "SGD",
    "SHP",
    "SLL",
    "SOS",
    "SRD",
    "STD",
    "SVC",
    "SYP",
    "SZL",
    "THB",
    "TJS",
    "TMT",
    "TND",
    "TOP",
    "TRY",
    "TTD",
    "TWD",
    "TZS",
    "UAH",
    "UGX",
    "USD",
    "USN",
    "USS",
    "UYI",
    "UYU",
    "UZS",
    "VEF",
    "VND",
    "VUV",
    "WST",
    "XAF",
    "XAG",
    "XAU",
    "XBA",
    "XBB",
    "XBC",
    "XBD",
    "XCD",
    "XDR",
    "XFU",
    "XOF",
    "XPD",
    "XPF",
    "XPF",
    "XPF",
    "XPT",
    "XTS",
    "XXX",
    "YER",
    "ZAR",
    "ZMK",
    "ZWL"
  };

  const ISO3AlphaCurrencyCodeContentType::value ISO3AlphaCurrencyCodeContentType::
  _xsd_ISO3AlphaCurrencyCodeContentType_indexes_[184] =
  {
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::AED,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::AFN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ALL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::AMD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ANG,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::AOA,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ARS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::AUD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::AWG,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::AZN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BAM,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BBD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BDT,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BGN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BHD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BIF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BMD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BND,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BOB,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BOV,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BRL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BSD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BTN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BWP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BYR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::BZD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CAD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CDF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CHE,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CHF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CHW,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CLF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CLP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CNY,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::COP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::COU,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CRC,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CUC,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CUP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CVE,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::CZK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::DJF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::DKK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::DOP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::DZD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::EEK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::EGP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ERN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ETB,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::EUR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::FJD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::FKP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GBP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GEL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GHS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GIP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GMD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GNF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GTQ,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GWP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::GYD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::HKD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::HNL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::HRK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::HTG,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::HUF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::IDR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ILS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::INR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::IQD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::IRR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ISK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::JMD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::JOD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::JPY,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KES,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KGS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KHR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KMF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KPW,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KRW,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KWD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KYD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::KZT,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LAK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LBP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LKR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LRD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LSL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LTL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LVL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::LYD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MAD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MAD1,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MDL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MGA,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MKD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MMK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MNT,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MOP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MRO,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MUR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MVR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MWK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MXN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MXV,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MYR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::MZN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::NAD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::NGN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::NIO,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::NOK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::NPR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::NZD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::OMR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::PAB,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::PEN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::PGK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::PHP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::PKR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::PLN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::PYG,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::QAR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::RON,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::RSD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::RUB,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::RWF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SAR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SBD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SCR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SDG,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SEK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SGD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SHP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SLL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SOS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SRD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::STD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SVC,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SYP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::SZL,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::THB,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TJS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TMT,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TND,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TOP,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TRY,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TTD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TWD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::TZS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::UAH,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::UGX,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::USD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::USN,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::USS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::UYI,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::UYU,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::UZS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::VEF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::VND,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::VUV,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::WST,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XAF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XAG,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XAU,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XBA,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XBB,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XBC,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XBD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XCD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XDR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XFU,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XOF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XPD,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XPF,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XPF1,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XPF2,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XPT,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XTS,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::XXX,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::YER,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ZAR,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ZMK,
    ::ISO42173A_2010_04_07::ISO3AlphaCurrencyCodeContentType::ZWL
  };

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, ISO3AlphaCurrencyCodeContentType >
  _xsd_ISO3AlphaCurrencyCodeContentType_type_factory_init (
    "ISO3AlphaCurrencyCodeContentType",
    "urn:un:unece:uncefact:codelist:standard:5:ISO42173A:2010-04-07");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace ISO42173A_2010_04_07
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

namespace ISO42173A_2010_04_07
{
  void
  operator<< (::xercesc::DOMElement& e, const ISO3AlphaCurrencyCodeContentType& i)
  {
    e << static_cast< const ::xml_schema::token& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr& a, const ISO3AlphaCurrencyCodeContentType& i)
  {
    a << static_cast< const ::xml_schema::token& > (i);
  }

  void
  operator<< (::xml_schema::list_stream& l,
              const ISO3AlphaCurrencyCodeContentType& i)
  {
    l << static_cast< const ::xml_schema::token& > (i);
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, ISO3AlphaCurrencyCodeContentType >
  _xsd_ISO3AlphaCurrencyCodeContentType_type_serializer_init (
    "ISO3AlphaCurrencyCodeContentType",
    "urn:un:unece:uncefact:codelist:standard:5:ISO42173A:2010-04-07");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

