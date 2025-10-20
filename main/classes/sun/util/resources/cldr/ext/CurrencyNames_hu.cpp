#include <sun/util/resources/cldr/ext/CurrencyNames_hu.h>

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

$MethodInfo _CurrencyNames_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_hu::*)()>(&CurrencyNames_hu::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_hu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_hu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_hu_MethodInfo_
};

$Object* allocate$CurrencyNames_hu($Class* clazz) {
	return $of($alloc(CurrencyNames_hu));
}

void CurrencyNames_hu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_hu::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("BRL"_s),
			$of("BRL"_s)
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
			$of("BYR"_s),
			$of("BYR"_s)
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
			$of("Ft"_s)
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
			$of(u"\u00a5"_s)
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
			$of("LTL"_s),
			$of("LTL"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("LVL"_s)
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
			$of("STD"_s),
			$of("STD"_s)
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
			$of("VEF"_s),
			$of("VEF"_s)
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
			$of("XCD"_s),
			$of("XCD"_s)
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
			$of("ZMK"_s),
			$of("ZMK"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Andorrai peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("EAE-dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afg\u00e1n afghani (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afg\u00e1n afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"alb\u00e1n lek (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"alb\u00e1n lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u00f6rm\u00e9ny dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"holland antill\u00e1ki forint"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolai kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolai kwanza (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Angolai \u00faj kwanza (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angolai kwanza reajustado (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Argent\u00edn austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argent\u00edn peso (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentin peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Osztr\u00e1k schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ausztr\u00e1l doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("arubai florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"azerbajdzs\u00e1ni manat (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"azerbajdzs\u00e1ni manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Bosznia-hercegovinai d\u00edn\u00e1r (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"bosznia-hercegovinai konvertibilis m\u00e1rka"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"bosznia-hercegovinai \u00faj d\u00edn\u00e1r (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"barbadosi doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("bangladesi taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belga frank (konvertibilis)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belga frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Belga frank (p\u00e9nz\u00fcgyi)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Bolg\u00e1r kem\u00e9ny leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"bolg\u00e1r szocialista leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"bolg\u00e1r \u00faj leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"bolg\u00e1r leva (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"bahreini din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"bermudai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"brunei doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"bol\u00edviai boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"Bol\u00edviai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"Bol\u00edviai mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Brazi cruzeiro novo (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Brazi cruzado (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brazil cruzeiro (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brazil real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Brazil cruzado novo (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Brazil cruzeiro (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"bahamai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"bhut\u00e1ni ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Burmai kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswanai pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Feh\u00e9rorosz \u00faj rubel (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("belarusz rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"feh\u00e9rorosz rubel (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"belize-i doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"kanadai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"kong\u00f3i frank"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"sv\u00e1jci frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR frank"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Chilei unidades de fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilei peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"k\u00ednai j\u00fcan (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"k\u00ednai j\u00fcan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kolumbiai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Unidad de Valor Real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Costa Rica-i colon"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"szerb din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Csehszlov\u00e1k kem\u00e9ny korona"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("kubai konvertibilis peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Z\u00f6ld-foki escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Ciprusi font"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("cseh korona"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Kelet-N\u00e9met m\u00e1rka"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"N\u00e9met m\u00e1rka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("dzsibuti frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"d\u00e1n korona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominikai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"alg\u00e9riai d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ecuadori sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Ecuadori Unidad de Valor Constante (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u00c9szt korona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyiptomi font"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritreai nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"spanyol peseta (A\u2013kont\u00f3)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"spanyol peseta (konvertibilis kont\u00f3)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Spanyol peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"eti\u00f3piai birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"eur\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finn markka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"fidzsi doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("falkland-szigeteki font"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Francia frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("angol font"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"Gr\u00faz kupon larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"gr\u00faz lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Gh\u00e1nai cedi (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"gh\u00e1nai cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"gibralt\u00e1ri font"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambiai dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("guineai frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guineai syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Egyenl\u00edt\u0151i-guineai ekwele guineana"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"G\u00f6r\u00f6g drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalai quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Portug\u00e1l guinea escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissaui peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"guyanai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"hongkongi doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("hodurasi lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Horv\u00e1t d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"horv\u00e1t kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haiti gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("magyar forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"indon\u00e9z r\u00fapia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u00cdr font"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Izraeli font"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"izraeli \u00faj s\u00e9kel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"indiai r\u00fapia"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"iraki d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ir\u00e1ni rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("izlandi korona"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Olasz l\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"jamaicai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"jord\u00e1niai d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"jap\u00e1n jen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("kenyai shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"kirgiziszt\u00e1ni szom"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("kambodzsai riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("comorei frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u00e9szak-koreai won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"d\u00e9l-koreai won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"kuvaiti d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"kajm\u00e1n-szigeteki doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"kazahszt\u00e1ni tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laoszi kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libanoni font"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Sr\u00ed Lanka-i r\u00fapia"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"lib\u00e9riai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesothoi loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"litv\u00e1niai litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Litv\u00e1niai talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("luxemburgi konvertibilis frank"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Luxemburgi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"luxemburgi p\u00e9nz\u00fcgyi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lett lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Lett rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"l\u00edbiai d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"marokk\u00f3i dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Marokk\u00f3i frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"mold\u00e1v kupon"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"moldov\u00e1n lei"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"madagaszk\u00e1ri ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Madagaszk\u00e1ri frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"macedon d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"maced\u00f3n d\u00e9n\u00e1r (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Mali frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("mianmari kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"mong\u00f3liai tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"maka\u00f3i pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"maurit\u00e1niai ouguiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"maurit\u00e1niai ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"M\u00e1ltai l\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"M\u00e1ltai font"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"mauritiusi r\u00fapia"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"mald\u00edv-szigeteki rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawi kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"mexik\u00f3i peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Mexik\u00f3i ez\u00fcst peso (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"Mexik\u00f3i Unidad de Inversion (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malajziai ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambik escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mozambik metical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mozambiki metik\u00e1lis"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"nam\u00edbiai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"nig\u00e9riai naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("Nikaraguai cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nicaraguai c\u00f3rdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Holland forint"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"norv\u00e9g korona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"nep\u00e1li r\u00fapia"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u00faj-z\u00e9landi doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"om\u00e1ni rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamai balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("perui inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("perui sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"perui sol (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"p\u00e1pua \u00faj-guineai kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"f\u00fcl\u00f6p-szigeteki peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"pakiszt\u00e1ni r\u00fapia"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("lengyel zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Lengyel zloty (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Portug\u00e1l escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguayi guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("katari rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"rhod\u00e9ziai doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"rom\u00e1n lej (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rom\u00e1n lej"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"szerb d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("orosz rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"orosz rubel (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("ruandai frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"sza\u00fadi riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"salamon-szigeteki doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"seychelle-szigeteki r\u00fapia"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Szud\u00e1ni d\u00edn\u00e1r (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"szud\u00e1ni font"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Szud\u00e1ni font (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"sv\u00e9d korona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"szingap\u00fari doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Szent Ilona-i font"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Szlov\u00e9n tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Szlov\u00e1k korona"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierra Leone-i leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"szom\u00e1li shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"suriname-i doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Suriname-i gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"d\u00e9l-szud\u00e1ni font"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"S\u00e3o Tom\u00e9 \u00e9s Pr\u00edncipe-i dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"S\u00e3o Tom\u00e9 \u00e9s Pr\u00edncipe-i dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Szovjet rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Salvadori col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"sz\u00edriai font"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"szv\u00e1zi lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("thai baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"T\u00e1dzsikiszt\u00e1ni rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"t\u00e1dzsikiszt\u00e1ni somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"t\u00fcrkmeniszt\u00e1ni manat (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"t\u00fcrkmeniszt\u00e1ni manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"tun\u00e9ziai d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("tongai paanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timori escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"t\u00f6r\u00f6k l\u00edra (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"t\u00f6r\u00f6k l\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Trinidad \u00e9s Tobago-i doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"tajvani \u00faj doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"tanz\u00e1niai shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"ukr\u00e1n hrivnya"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Ukr\u00e1n karbovanec"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Ugandai shilling (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("ugandai shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"USA-doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"USA doll\u00e1r (k\u00f6vetkez\u0151 napi)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"USA doll\u00e1r (aznapi)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Uruguayi peso en unidades indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruguay-i peso (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguay-i peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u00fczbegiszt\u00e1ni szum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venezuelai bolivar (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelai bolivar (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("venezuelai bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"vietn\u00e1mi dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"vietn\u00e1mi dong (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatui vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("nyugat-szamoai tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA frank BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"Ez\u00fcst"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Arany"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Eur\u00f3pai kompozit egys\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Eur\u00f3pai monet\u00e1ris egys\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Eur\u00f3pai kont\u00f3 egys\u00e9g (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Eur\u00f3pai kont\u00f3 egys\u00e9g (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"kelet-karibi doll\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Special Drawing Rights"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"eur\u00f3pai p\u00e9nznemegys\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Francia arany frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Francia UIC-frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA frank BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"pall\u00e1dium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"csendes-\u00f3ce\u00e1ni valutak\u00f6z\u00f6ss\u00e9gi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET t\u0151ke"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Tesztel\u00e9si p\u00e9nznemk\u00f3d"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ismeretlen p\u00e9nznem"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Jemeni d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemeni rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Jugoszl\u00e1v kem\u00e9ny d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Jugoszl\u00e1v \u00faj d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Jugoszl\u00e1v konvertibilis d\u00edn\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"jugoszl\u00e1v reform\u00e1lt din\u00e1r (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"D\u00e9l-afrikai rand (p\u00e9nz\u00fcgyi)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"d\u00e9l-afrikai rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambiai kwacha (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("zambiai kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zairei \u00faj zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("Zairei zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabwei doll\u00e1r (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Zimbabwei doll\u00e1r (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Zimbabwei doll\u00e1r (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_hu::CurrencyNames_hu() {
}

$Class* CurrencyNames_hu::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_hu, name, initialize, &_CurrencyNames_hu_ClassInfo_, allocate$CurrencyNames_hu);
	return class$;
}

$Class* CurrencyNames_hu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun