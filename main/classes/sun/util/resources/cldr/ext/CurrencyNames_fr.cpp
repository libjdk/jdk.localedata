#include <sun/util/resources/cldr/ext/CurrencyNames_fr.h>

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

$MethodInfo _CurrencyNames_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fr::*)()>(&CurrencyNames_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_MethodInfo_
};

$Object* allocate$CurrencyNames_fr($Class* clazz) {
	return $of($alloc(CurrencyNames_fr));
}

void CurrencyNames_fr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr::getContents() {
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
			$of("$AR"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("$AU"_s)
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
			$of("BEF"_s),
			$of("FB"_s)
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
			$of("$BM"_s)
		}),
		$$new($ObjectArray, {
			$of("BND"_s),
			$of("$BN"_s)
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
			$of("BYR"_s),
			$of("BYR"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("$BZ"_s)
		}),
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("$CA"_s)
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
			$of("$CL"_s)
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
			$of("$CO"_s)
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
			$of("CYP"_s),
			$of(u"\u00a3CY"_s)
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
			$of("$FJ"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of(u"\u00a3FK"_s)
		}),
		$$new($ObjectArray, {
			$of("FRF"_s),
			$of("F"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"\u00a3GB"_s)
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
			$of(u"\u00a3GI"_s)
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
			$of("IEP"_s),
			$of(u"\u00a3IE"_s)
		}),
		$$new($ObjectArray, {
			$of("ILP"_s),
			$of(u"\u00a3IL"_s)
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
			$of("ITL"_s),
			$of(u"\u20a4IT"_s)
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
			$of(u"\u00a3LB"_s)
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
			$of("MRU"_s),
			$of("MRU"_s)
		}),
		$$new($ObjectArray, {
			$of("MTP"_s),
			$of(u"\u00a3MT"_s)
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
			$of("$MX"_s)
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
			$of("$NA"_s)
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
			$of("$NZ"_s)
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
			$of("RHD"_s),
			$of("$RH"_s)
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
			$of("$SB"_s)
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
			$of("$SG"_s)
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
			$of("$SR"_s)
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
			$of("$TT"_s)
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
			$of("$US"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("$UY"_s)
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
			$of("$WS"_s)
		}),
		$$new($ObjectArray, {
			$of("XCD"_s),
			$of("XCD"_s)
		}),
		$$new($ObjectArray, {
			$of("XPF"_s),
			$of("FCFP"_s)
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
			$of("peseta andorrane"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dirham des \u00c9mirats arabes unis"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afghani (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghani afghan"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"lek albanais (1947\u20131961)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("lek albanais"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"dram arm\u00e9nien"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("florin antillais"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolais"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"kwanza angolais (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"nouveau kwanza angolais (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"kwanza angolais r\u00e9ajust\u00e9 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("austral argentin"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"peso argentin (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentin"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("schilling autrichien"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dollar australien"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("florin arubais"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat az\u00e9ri (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"manat az\u00e9ri"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("dinar bosniaque"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("mark convertible bosniaque"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dollar barbadien"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bangladeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("franc belge (convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franc belge"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("franc belge (financier)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lev bulgare (1962\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("lev bulgare"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahre\u00efni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franc burundais"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dollar bermudien"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"dollar brun\u00e9ien"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano bolivien"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("peso bolivien"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("mvdol bolivien"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"nouveau cruzeiro br\u00e9silien (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"cruzado br\u00e9silien (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruzeiro br\u00e9silien (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"r\u00e9al br\u00e9silien"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("nouveau cruzado"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("cruzeiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"dollar baham\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("ngultrum bouthanais"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("kyat birman"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula botswanais"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"nouveau rouble bi\u00e9lorusse (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"rouble bi\u00e9lorusse"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rouble bi\u00e9lorusse (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"dollar b\u00e9liz\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dollar canadien"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("franc congolais"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("euro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franc suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("franc WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"unit\u00e9 d\u2019investissement chilienne"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chilien"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"yuan chinois (zone extrac\u00f4ti\u00e8re)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan renminbi chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombien"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"unit\u00e9 de valeur r\u00e9elle colombienne"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"col\u00f3n costaricain"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"dinar serbo-mont\u00e9n\u00e9grin"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"couronne forte tch\u00e9coslovaque"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cubain convertible"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubain"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo capverdien"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("livre chypriote"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"couronne tch\u00e8que"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("mark est-allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("mark allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franc djiboutien"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("couronne danoise"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominicain"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"dinar alg\u00e9rien"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"sucre \u00e9quatorien"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"unit\u00e9 de valeur constante \u00e9quatoriale (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("couronne estonienne"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"livre \u00e9gyptienne"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"nafka \u00e9rythr\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("peseta espagnole (compte A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("peseta espagnole (compte convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("peseta espagnole"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"birr \u00e9thiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("mark finlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("dollar fidjien"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"livre des \u00eeles Malouines"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"franc fran\u00e7ais"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("livre sterling"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"coupon de lari g\u00e9orgien"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"lari g\u00e9orgien"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"c\u00e9di"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"c\u00e9di ghan\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("livre de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambien"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"franc guin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"syli guin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"ekw\u00e9l\u00e9 \u00e9quatoguin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("drachme grecque"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"quetzal guat\u00e9malt\u00e8que"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"escudo de Guin\u00e9e portugaise"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"peso bissau-guin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("dollar du Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("dollar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira hondurien"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinar croate"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croate"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"gourde ha\u00eftienne"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("forint hongrois"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"roupie indon\u00e9sienne"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("livre irlandaise"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"livre isra\u00e9lienne"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"nouveau shekel isra\u00e9lien"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("roupie indienne"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar irakien"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("riyal iranien"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("couronne islandaise"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("lire italienne"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"dollar jama\u00efcain"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar jordanien"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"shilling k\u00e9nyan"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som kirghize"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel cambodgien"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franc comorien"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"won nord-cor\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"won sud-cor\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"dinar kowe\u00eftien"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"dollar des \u00eeles Ca\u00efmans"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip loatien"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("livre libanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("roupie srilankaise"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"dollar lib\u00e9rien"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti lesothan"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litas lituanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("talonas lituanien"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("franc convertible luxembourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("franc luxembourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("franc financier luxembourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lats letton"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("rouble letton"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libyen"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marocain"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("franc marocain"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldave"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franc malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"denar mac\u00e9donien"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("franc malien"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat myanmarais"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca macanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya mauritanien (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya mauritanien"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("lire maltaise"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("livre maltaise"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("roupie mauricienne"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rufiyaa maldivien"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawite"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexicain"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso d\u2019argent mexicain (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"unit\u00e9 de conversion mexicaine (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malais"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("escudo mozambicain"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"m\u00e9tical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical mozambicain"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dollar namibien"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"naira nig\u00e9rian"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"c\u00f3rdoba oro nicaraguayen"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"florin n\u00e9erlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"couronne norv\u00e9gienne"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"roupie n\u00e9palaise"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"dollar n\u00e9o-z\u00e9landais"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("riyal omanais"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balboa panam\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"inti p\u00e9ruvien"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"sol p\u00e9ruvien"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol p\u00e9ruvien (1863\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina papouan-n\u00e9o-guin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso philippin"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("roupie pakistanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloty polonais"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"zloty (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("escudo portugais"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"guaran\u00ed paraguayen"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("riyal qatari"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"dollar rhod\u00e9sien"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("ancien leu roumain"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu roumain"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rouble russe"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"rouble russe (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("franc rwandais"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("riyal saoudien"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"dollar des \u00eeles Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("roupie des Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("dinar soudanais"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("livre soudanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"livre soudanaise (1956\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"couronne su\u00e9doise"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("dollar de Singapour"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"livre de Sainte-H\u00e9l\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"tolar slov\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("couronne slovaque"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"leone sierra-l\u00e9onais"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("shilling somalien"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dollar surinamais"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("florin surinamais"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("livre sud-soudanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra santom\u00e9en (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra santom\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"rouble sovi\u00e9tique"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"col\u00f3n salvadorien"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("livre syrienne"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tha\u00eflandais"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("rouble tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turkm\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"nouveau manat turkm\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunisien"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa\u2019anga tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo timorais"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"livre turque (1844\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("livre turque"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"dollar de Trinit\u00e9-et-Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nouveau dollar ta\u00efwanais"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("shilling tanzanien"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("hryvnia ukrainienne"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("karbovanetz"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"shilling ougandais (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("shilling ougandais"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dollar des \u00c9tats-Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("dollar des Etats-Unis (jour suivant)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"dollar des Etats-Unis (jour m\u00eame)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"peso uruguayen (unit\u00e9s index\u00e9es)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"peso uruguayen (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguayen"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("sum ouzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"bolivar v\u00e9n\u00e9zu\u00e9lien (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolivar v\u00e9n\u00e9zu\u00e9lien (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolivar v\u00e9n\u00e9zu\u00e9lien"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"d\u00f4ng vietnamien"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu vanuatuan"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franc CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("argent"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("or"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"unit\u00e9 europ\u00e9enne compos\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"unit\u00e9 mon\u00e9taire europ\u00e9enne"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"unit\u00e9 de compte europ\u00e9enne (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"unit\u00e9 de compte europ\u00e9enne (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"dollar des Cara\u00efbes orientales"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"droit de tirage sp\u00e9cial"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"unit\u00e9 de compte europ\u00e9enne (ECU)"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("franc or"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("franc UIC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franc CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platine"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("type de fonds RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("(devise de test)"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("devise inconnue ou non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"dinar du Y\u00e9men"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"riyal y\u00e9m\u00e9nite"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("nouveau dinar yougoslave"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("dinar yougoslave Noviy"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("dinar yougoslave convertible"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("rand sud-africain (financier)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sud-africain"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha zambien (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambien"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"nouveau za\u00efre za\u00efrien"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"za\u00efre za\u00efrois"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dollar zimbabw\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"dollar zimbabw\u00e9en (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"dollar zimbabw\u00e9en (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_fr::CurrencyNames_fr() {
}

$Class* CurrencyNames_fr::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr, name, initialize, &_CurrencyNames_fr_ClassInfo_, allocate$CurrencyNames_fr);
	return class$;
}

$Class* CurrencyNames_fr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun