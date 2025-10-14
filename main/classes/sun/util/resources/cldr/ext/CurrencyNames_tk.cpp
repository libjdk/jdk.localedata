#include <sun/util/resources/cldr/ext/CurrencyNames_tk.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _CurrencyNames_tk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_tk::*)()>(&CurrencyNames_tk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_tk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_tk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tk_MethodInfo_
};

$Object* allocate$CurrencyNames_tk($Class* clazz) {
	return $of($alloc(CurrencyNames_tk));
}

void CurrencyNames_tk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tk::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AED"_s),
			$of("AED"_s)
		}),
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of("AFN"_s)
		}),
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("AMD"_s),
			$of("AMD"_s)
		}),
		$$new($ObjectArray, {
			$of("ANG"_s),
			$of("ANG"_s)
		}),
		$$new($ObjectArray, {
			$of("AOA"_s),
			$of("AOA"_s)
		}),
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
		}),
		$$new($ObjectArray, {
			$of("AWG"_s),
			$of("AWG"_s)
		}),
		$$new($ObjectArray, {
			$of("AZN"_s),
			$of("AZN"_s)
		}),
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of("BAM"_s)
		}),
		$$new($ObjectArray, {
			$of("BBD"_s),
			$of("BBD"_s)
		}),
		$$new($ObjectArray, {
			$of("BDT"_s),
			$of("BDT"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("BHD"_s),
			$of("BHD"_s)
		}),
		$$new($ObjectArray, {
			$of("BIF"_s),
			$of("BIF"_s)
		}),
		$$new($ObjectArray, {
			$of("BMD"_s),
			$of("BMD"_s)
		}),
		$$new($ObjectArray, {
			$of("BND"_s),
			$of("BND"_s)
		}),
		$$new($ObjectArray, {
			$of("BOB"_s),
			$of("BOB"_s)
		}),
		$$new($ObjectArray, {
			$of("BSD"_s),
			$of("BSD"_s)
		}),
		$$new($ObjectArray, {
			$of("BTN"_s),
			$of("BTN"_s)
		}),
		$$new($ObjectArray, {
			$of("BWP"_s),
			$of("BWP"_s)
		}),
		$$new($ObjectArray, {
			$of("BYN"_s),
			$of("BYN"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZD"_s)
		}),
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("CDF"_s)
		}),
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("CNH"_s),
			$of("CNH"_s)
		}),
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("COP"_s)
		}),
		$$new($ObjectArray, {
			$of("CRC"_s),
			$of("CRC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUC"_s),
			$of("CUC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUP"_s),
			$of("CUP"_s)
		}),
		$$new($ObjectArray, {
			$of("CVE"_s),
			$of("CVE"_s)
		}),
		$$new($ObjectArray, {
			$of("CZK"_s),
			$of("CZK"_s)
		}),
		$$new($ObjectArray, {
			$of("DJF"_s),
			$of("DJF"_s)
		}),
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("DKK"_s)
		}),
		$$new($ObjectArray, {
			$of("DOP"_s),
			$of("DOP"_s)
		}),
		$$new($ObjectArray, {
			$of("DZD"_s),
			$of("DZD"_s)
		}),
		$$new($ObjectArray, {
			$of("EGP"_s),
			$of("EGP"_s)
		}),
		$$new($ObjectArray, {
			$of("ERN"_s),
			$of("ERN"_s)
		}),
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("ETB"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of("EUR"_s)
		}),
		$$new($ObjectArray, {
			$of("FJD"_s),
			$of("FJD"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of("GBP"_s)
		}),
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of("GEL"_s)
		}),
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of("GHS"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of("GIP"_s)
		}),
		$$new($ObjectArray, {
			$of("GMD"_s),
			$of("GMD"_s)
		}),
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		}),
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("GTQ"_s)
		}),
		$$new($ObjectArray, {
			$of("GYD"_s),
			$of("GYD"_s)
		}),
		$$new($ObjectArray, {
			$of("HNL"_s),
			$of("HNL"_s)
		}),
		$$new($ObjectArray, {
			$of("HRK"_s),
			$of("HRK"_s)
		}),
		$$new($ObjectArray, {
			$of("HTG"_s),
			$of("HTG"_s)
		}),
		$$new($ObjectArray, {
			$of("HUF"_s),
			$of("HUF"_s)
		}),
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("IDR"_s)
		}),
		$$new($ObjectArray, {
			$of("IQD"_s),
			$of("IQD"_s)
		}),
		$$new($ObjectArray, {
			$of("IRR"_s),
			$of("IRR"_s)
		}),
		$$new($ObjectArray, {
			$of("ISK"_s),
			$of("ISK"_s)
		}),
		$$new($ObjectArray, {
			$of("JMD"_s),
			$of("JMD"_s)
		}),
		$$new($ObjectArray, {
			$of("JOD"_s),
			$of("JOD"_s)
		}),
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("KES"_s)
		}),
		$$new($ObjectArray, {
			$of("KGS"_s),
			$of("KGS"_s)
		}),
		$$new($ObjectArray, {
			$of("KHR"_s),
			$of("KHR"_s)
		}),
		$$new($ObjectArray, {
			$of("KMF"_s),
			$of("KMF"_s)
		}),
		$$new($ObjectArray, {
			$of("KPW"_s),
			$of("KPW"_s)
		}),
		$$new($ObjectArray, {
			$of("KWD"_s),
			$of("KWD"_s)
		}),
		$$new($ObjectArray, {
			$of("KYD"_s),
			$of("KYD"_s)
		}),
		$$new($ObjectArray, {
			$of("KZT"_s),
			$of("KZT"_s)
		}),
		$$new($ObjectArray, {
			$of("LAK"_s),
			$of("LAK"_s)
		}),
		$$new($ObjectArray, {
			$of("LBP"_s),
			$of("LBP"_s)
		}),
		$$new($ObjectArray, {
			$of("LKR"_s),
			$of("LKR"_s)
		}),
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("LRD"_s)
		}),
		$$new($ObjectArray, {
			$of("LYD"_s),
			$of("LYD"_s)
		}),
		$$new($ObjectArray, {
			$of("MAD"_s),
			$of("MAD"_s)
		}),
		$$new($ObjectArray, {
			$of("MDL"_s),
			$of("MDL"_s)
		}),
		$$new($ObjectArray, {
			$of("MGA"_s),
			$of("MGA"_s)
		}),
		$$new($ObjectArray, {
			$of("MKD"_s),
			$of("MKD"_s)
		}),
		$$new($ObjectArray, {
			$of("MMK"_s),
			$of("MMK"_s)
		}),
		$$new($ObjectArray, {
			$of("MNT"_s),
			$of("MNT"_s)
		}),
		$$new($ObjectArray, {
			$of("MOP"_s),
			$of("MOP"_s)
		}),
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRO"_s)
		}),
		$$new($ObjectArray, {
			$of("MRU"_s),
			$of("MRU"_s)
		}),
		$$new($ObjectArray, {
			$of("MUR"_s),
			$of("MUR"_s)
		}),
		$$new($ObjectArray, {
			$of("MVR"_s),
			$of("MVR"_s)
		}),
		$$new($ObjectArray, {
			$of("MWK"_s),
			$of("MWK"_s)
		}),
		$$new($ObjectArray, {
			$of("MYR"_s),
			$of("MYR"_s)
		}),
		$$new($ObjectArray, {
			$of("MZN"_s),
			$of("MZN"_s)
		}),
		$$new($ObjectArray, {
			$of("NAD"_s),
			$of("NAD"_s)
		}),
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of("NGN"_s)
		}),
		$$new($ObjectArray, {
			$of("NIO"_s),
			$of("NIO"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("NOK"_s)
		}),
		$$new($ObjectArray, {
			$of("NPR"_s),
			$of("NPR"_s)
		}),
		$$new($ObjectArray, {
			$of("OMR"_s),
			$of("OMR"_s)
		}),
		$$new($ObjectArray, {
			$of("PAB"_s),
			$of("PAB"_s)
		}),
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		}),
		$$new($ObjectArray, {
			$of("PGK"_s),
			$of("PGK"_s)
		}),
		$$new($ObjectArray, {
			$of("PHP"_s),
			$of("PHP"_s)
		}),
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("PKR"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("PYG"_s),
			$of("PYG"_s)
		}),
		$$new($ObjectArray, {
			$of("QAR"_s),
			$of("QAR"_s)
		}),
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of("RSD"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("RWF"_s),
			$of("RWF"_s)
		}),
		$$new($ObjectArray, {
			$of("SAR"_s),
			$of("SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("SBD"_s),
			$of("SBD"_s)
		}),
		$$new($ObjectArray, {
			$of("SCR"_s),
			$of("SCR"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of("SDG"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("SEK"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("SGD"_s)
		}),
		$$new($ObjectArray, {
			$of("SHP"_s),
			$of("SHP"_s)
		}),
		$$new($ObjectArray, {
			$of("SLL"_s),
			$of("SLL"_s)
		}),
		$$new($ObjectArray, {
			$of("SOS"_s),
			$of("SOS"_s)
		}),
		$$new($ObjectArray, {
			$of("SRD"_s),
			$of("SRD"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of("SSP"_s)
		}),
		$$new($ObjectArray, {
			$of("STN"_s),
			$of("STN"_s)
		}),
		$$new($ObjectArray, {
			$of("SYP"_s),
			$of("SYP"_s)
		}),
		$$new($ObjectArray, {
			$of("SZL"_s),
			$of("SZL"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of("THB"_s)
		}),
		$$new($ObjectArray, {
			$of("TJS"_s),
			$of("TJS"_s)
		}),
		$$new($ObjectArray, {
			$of("TMT"_s),
			$of("TMT"_s)
		}),
		$$new($ObjectArray, {
			$of("TND"_s),
			$of("TND"_s)
		}),
		$$new($ObjectArray, {
			$of("TOP"_s),
			$of("TOP"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TRY"_s)
		}),
		$$new($ObjectArray, {
			$of("TTD"_s),
			$of("TTD"_s)
		}),
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TZS"_s)
		}),
		$$new($ObjectArray, {
			$of("UAH"_s),
			$of("UAH"_s)
		}),
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("UGX"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("UYU"_s)
		}),
		$$new($ObjectArray, {
			$of("UZS"_s),
			$of("UZS"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("VES"_s),
			$of("VES"_s)
		}),
		$$new($ObjectArray, {
			$of("VUV"_s),
			$of("VUV"_s)
		}),
		$$new($ObjectArray, {
			$of("WST"_s),
			$of("WST"_s)
		}),
		$$new($ObjectArray, {
			$of("YER"_s),
			$of("YER"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("ZAR"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("BAE dirhemi"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Owgan afganisi"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Alban leki"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Ermeni dramy"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Niderland antil guldeni"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angola kwanzasy"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentin pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Awstrali\u00fda dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruba florini"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Azerba\u00fdjan manady"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Konwertirlen\u00fd\u00e4n Bosni\u00fda we Gersegowina markasy"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbados dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Banglade\u015f takasy"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bolgar lewi"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Bahre\u00fdn dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundi franky"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermuda dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Brune\u00fd dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Boliwi\u00fda boliwianosy"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brazil realy"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bagama dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Butan ngultrumy"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswana pulasy"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarus rubly"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Belorus rubly (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Beliz dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kanada dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Kongo franky"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u015ewe\u00fdsar franky"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u00c7ili pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Hyta\u00fd \u00fduany (of\u015for)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Hyta\u00fd \u00fduany"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Kolumbi\u00fda pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Kosta-Rika kolony"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Konwertirlen\u00fd\u00e4n kuba pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Kuba pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Kabo-Werde eskudosy"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u00c7eh kronasy"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Jibuti franky"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Dani\u00fda kronasy"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominikan pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Al\u017eir dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"M\u00fcs\u00fcr funty"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Eritre\u00fda nakfasy"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Efiopi\u00fda byry"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u00ddewro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fiji dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Folklend adalaryny\u0148 funty"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Britan funt sterlingi"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Gruzin larisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Gano sedisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Gibraltar funty"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Gambi\u00fda dalasisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Gwine\u00fd franky"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Gwatemala ketsaly"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Ga\u00fdana dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Gonkong dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Gonduras lempirasy"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Horwat kunasy"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gaiti gurdy"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Wenger forinti"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Indonezi\u00fda rupi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"T\u00e4ze Ysra\u00fdyl \u015fekeli"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Hindi rupi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Yrak dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"E\u00fdran rialy"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Islandi\u00fda kronasy"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u00ddama\u00fdka dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Iordan dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u00ddapon \u00fdeni"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Keni\u00fda \u015fillingi"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Gyrgyz somy"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Kamboja ri\u00fdeli"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Komor adalaryny\u0148 franky"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Demirgazyk Kore\u00fd wony"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"G\u00fcnorta Kore\u00fd wony"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Kuwe\u00fdt dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Ka\u00fdman adalaryny\u0148 dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Gazak te\u0148\u0148esi"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laos kipi"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Liwan funty"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u015eri-Lanka rupi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Liberi\u00fda dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Liwi\u00fda dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Marokko dirhamy"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Moldaw le\u00fdi"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Malagasi\u00fd ariarisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Makedon dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"M\u00fdanma k\u00fdaty"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongol tugrigi"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Makao patakasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mawritan ugi\u00fdasy (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Mawritan ugi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Mawriki\u00fd rupi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Maldiw rufi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Malawi kwa\u00e7asy"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Meksikan pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Mala\u00fdzi\u00fda ringgiti"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambik metikaly"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Namibi\u00fda dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nigeri\u00fda na\u00fdrasy"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Nikaragua kordobasy"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Norwegi\u00fda kronasy"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Nepal rupi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"T\u00e4ze Zelandi\u00fda dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Oman rialy"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panama balboasy"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peru soly"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Papua - T\u00e4ze Gwine\u00fda kinasy"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Filippin pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"P\u00e4kistan rupi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Pol\u00fdak zlotysy"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Paragwa\u00fd guaranisi"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Katar rialy"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Rumyn le\u00fdi"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Serb dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rus rubly"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Ruanda franky"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saud rialy"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Solomon adalaryny\u0148 dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Se\u00fd\u015fel rupi\u00fdasy"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudan funty"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u015ewed kronasy"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singapur dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Keramatly \u00ddelena adasyny\u0148 funty"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"S\u00fderra-Leone leony"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Somali \u015fillingi"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinam dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"G\u00fcnorta Sudan funty"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"San-Tome we Prinsipi dobrasy (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("San-Tome we Prinsipi dobrasy"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Siri\u00fda funty"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Swazi lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Ta\u00fdland baty"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"T\u00e4jik somonisi"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"T\u00fcrkmen manady"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunis dinary"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Tonga paangasy"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"T\u00fcrk lirasy"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trininad we Tobago dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"T\u00e4ze Ta\u00fdwan dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanzani\u00fda \u015fillingi"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ukrain griwnasy"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Uganda \u015fillingi"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"AB\u015e dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Urugwa\u00fd pesosy"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u00d6zbek somy"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Wenesuela boliwary (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Wenesuela boliwary"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"W\u00fdetnam dongy"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Wanuatu watusy"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoa talasy"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("KFA BEAC franky"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"G\u00fcndogar karib dollary"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("KFA BCEAO franky"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"Fransuz \u00fduwa\u015f umman franky"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"N\u00e4belli pul birligi"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u00ddemen rialy"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"G\u00fcnorta Afrika rendi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Zambi\u00fda kwa\u00e7asy"_s)
		})
	}));
	return data;
}

CurrencyNames_tk::CurrencyNames_tk() {
}

$Class* CurrencyNames_tk::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tk, name, initialize, &_CurrencyNames_tk_ClassInfo_, allocate$CurrencyNames_tk);
	return class$;
}

$Class* CurrencyNames_tk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun