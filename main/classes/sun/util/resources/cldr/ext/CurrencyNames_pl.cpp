#include <sun/util/resources/cldr/ext/CurrencyNames_pl.h>

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

$MethodInfo _CurrencyNames_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_pl::*)()>(&CurrencyNames_pl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_pl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pl_MethodInfo_
};

$Object* allocate$CurrencyNames_pl($Class* clazz) {
	return $of($alloc(CurrencyNames_pl));
}

void CurrencyNames_pl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pl::getContents() {
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
			$of("AUD"_s),
			$of("AUD"_s)
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
			$of("CAD"_s),
			$of("CAD"_s)
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
			$of("CNY"_s),
			$of("CNY"_s)
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
			$of("HKD"_s),
			$of("HKD"_s)
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
			$of("ILS"_s),
			$of("ILS"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of("INR"_s)
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
			$of("JPY"_s),
			$of("JPY"_s)
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
			$of("KRW"_s),
			$of("KRW"_s)
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
			$of("MXN"_s),
			$of("MXN"_s)
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
			$of("NZD"_s),
			$of("NZD"_s)
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
			$of("PES"_s),
			$of("PES"_s)
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
			$of(u"z\u0142"_s)
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
			$of("TWD"_s),
			$of("TWD"_s)
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
			$of("USD"_s),
			$of("USD"_s)
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
			$of("VES"_s),
			$of("VES"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of("VND"_s)
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
			$of("adp"_s),
			$of("peseta andorska"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham ZEA"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgani (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afgani afga\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"lek alba\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"dram arme\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("gulden antylski"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolska"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"kwanza angola\u0144ska (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"nowa kwanza angola\u0144ska (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"kwanza angola\u0144ska Reajustado (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"austral argenty\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"peso argenty\u0144skie (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"peso argenty\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("szyling austriacki"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dolar australijski"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"florin aruba\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat azerbejd\u017ca\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azerski"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"dinar Bo\u015bni i Hercegowiny"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"marka zamienna Bo\u015bni i Hercegowiny"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dolar barbadoski"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bengalska"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("frank belgijski (zamienny)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("frank belgijski"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("frank belgijski (finansowy)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lew bu\u0142garski wymienny"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"lew bu\u0142garski socjalistyczny"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"lew bu\u0142garski"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"lew bu\u0142garski (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahra\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("frank burundyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dolar bermudzki"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("dolar brunejski"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano boliwijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("peso boliwijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("mvdol boliwijski"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"cruzeiro novo brazylijskie (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("cruzado brazylijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruzeiro brazylijskie (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brazylijski"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("nowe cruzado brazylijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("cruzeiro brazylijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("dolar bahamski"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ngultrum bhuta\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"kyat birma\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"pula botswa\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"rubel bia\u0142oruski (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"rubel bia\u0142oruski"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rubel bia\u0142oruski (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"dolar belize\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dolar kanadyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("frank kongijski"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("frank szwajcarski"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chilijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"juan chi\u0144ski (rynek zewn\u0119trzny)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"juan chi\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso kolumbijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"colon kostaryka\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("stary dinar serbski"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"korona czechos\u0142owacka"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"peso kuba\u0144skie wymienialne"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"peso kuba\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"escudo zielonoprzyl\u0105dkowe"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("funt cypryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("korona czeska"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("wschodnia marka wschodnioniemiecka"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("marka niemiecka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"frank d\u017cibutyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"korona du\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"peso dominika\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar algierski"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("sucre ekwadorski"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"korona esto\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("funt egipski"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa erytrejska"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"peseta hiszpa\u0144ska (Konto A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"peseta hiszpa\u0144ska (konto wymienne)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"peseta hiszpa\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr etiopski"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"marka fi\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"dolar fid\u017cyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("funt falklandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("frank francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("funt szterling"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"kupon gruzi\u0144ski larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"lari gruzi\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cedi gha\u0144skie (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"cedi gha\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("funt gibraltarski"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("frank gwinejski"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("syli gwinejskie"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"ekwele gwinejskie Gwinei R\u00f3wnikowej"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("drachma grecka"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal gwatemalski"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("escudo Gwinea Portugalska"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("peso Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"dolar guja\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"dolar hongko\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira honduraska"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinar chorwacki"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna chorwacka"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"gourde haita\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"forint w\u0119gierski"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupia indonezyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("funt irlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("funt izraelski"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("nowy szekel izraelski"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia indyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar iracki"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"rial ira\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("korona islandzka"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"lir w\u0142oski"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("dolar jamajski"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"dinar jorda\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"jen japo\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("szyling kenijski"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som kirgiski"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"riel kambod\u017ca\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("frank komoryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"won p\u00f3\u0142nocnokorea\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"won po\u0142udniowokorea\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("dinar kuwejcki"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"dolar kajma\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazachskie"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"kip laota\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"funt liba\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia lankijska"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dolar liberyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("lit litewski"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("talon litewski"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("frank luksemburski"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u0142at \u0142otewski"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"rubel \u0142otewski"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libijski"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dirham maroka\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"frank maroka\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"lej mo\u0142dawski"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgaski"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("frank malgaski"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"denar macedo\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("frank malijski"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"kiat birma\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca Makau"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya maureta\u0144ska (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ugija maureta\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"lira malta\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"funt malta\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia maurytyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rupia malediwska"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawijska"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"peso meksyka\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso srebrne meksyka\u0144skie (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("escudo mozambickie"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("metical Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical mozambicki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dolar namibijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigeryjska"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"cordoba nikaragua\u0144ska (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"cordoba nikaragua\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("gulden holenderski"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("korona norweska"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalska"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("dolar nowozelandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"rial oma\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("balboa panamski"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"inti peruwia\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"sol peruwia\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol peruwia\u0144ski (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina papua\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"peso filipi\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"rupia pakista\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"z\u0142oty polski"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"z\u0142oty polski (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("escudo portugalskie"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("guarani paragwajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial katarski"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("dolar rodezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"lej rumu\u0144ski (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"lej rumu\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbski"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rubel rosyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"rubel rosyjski (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("frank ruandyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saudyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("dolar Wysp Salomona"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia seszelska"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"dinar suda\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"funt suda\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"funt suda\u0144ski (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("korona szwedzka"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("dolar singapurski"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"funt \u015awi\u0119tej Heleny"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"tolar s\u0142owe\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"korona s\u0142owacka"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"leone sierraleo\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("szyling somalijski"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dolar surinamski"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("gulden surinamski"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"funt po\u0142udniowosuda\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra Wysp \u015awi\u0119tego Tomasza i Ksi\u0105\u017c\u0119cej (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra Wysp \u015awi\u0119tego Tomasza i Ksi\u0105\u017c\u0119cej"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("rubel radziecki"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("colon salwadorski"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("funt syryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni Suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("baht tajski"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"rubel tad\u017cycki"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"somoni tad\u017cyckie"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turkme\u0144ski (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"manat turkme\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa\u2019anga tongijska"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo timorskie"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"lira turecka (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turecka"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("dolar trynidadzki"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nowy dolar tajwa\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"szyling tanza\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"hrywna ukrai\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"karbowaniec ukrai\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"szyling ugandyjski (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("szyling ugandyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dolar ameryka\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"peso urugwajskie (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso urugwajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som uzbecki"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"boliwar wenezuelski (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"boliwar wenezuelski (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("boliwar wenezuelski"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong wietnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu wanuackie"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"tala samoa\u0144skie"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("frank CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("srebro"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"z\u0142oto"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("europejska jednostka rozrachunkowa (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("europejska jednostka rozrachunkowa (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("dolar wschodniokaraibski"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"specjalne prawa ci\u0105gnienia"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("ECU"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"frank z\u0142oty francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("UIC-frank francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("frank CFA"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("pallad"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("frank CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platyna"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("testowy kod waluty"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("nieznana waluta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"dinar jeme\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"rial jeme\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"nowy dinar jugos\u0142awia\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"dinar jugos\u0142awia\u0144ski wymienny"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"rand po\u0142udniowoafryka\u0144ski (finansowy)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"rand po\u0142udniowoafryka\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha zambijska (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambijska"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("nowy zair zairski"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("zair zairski"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dolar Zimbabwe (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("dolar Zimbabwe (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("dolar Zimbabwe (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_pl::CurrencyNames_pl() {
}

$Class* CurrencyNames_pl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pl, name, initialize, &_CurrencyNames_pl_ClassInfo_, allocate$CurrencyNames_pl);
	return class$;
}

$Class* CurrencyNames_pl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun