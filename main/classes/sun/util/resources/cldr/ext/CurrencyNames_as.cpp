#include <sun/util/resources/cldr/ext/CurrencyNames_as.h>

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

$MethodInfo _CurrencyNames_as_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_as::*)()>(&CurrencyNames_as::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_as_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_as",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_as_MethodInfo_
};

$Object* allocate$CurrencyNames_as($Class* clazz) {
	return $of($alloc(CurrencyNames_as));
}

void CurrencyNames_as::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_as::getContents() {
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
			$of("FJD"_s),
			$of("FJD"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
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
			$of(u"\u09b8\u0982\u09af\u09c1\u0995\u09cd\u09a4 \u0986\u09f0\u09ac \u0986\u09ae\u09bf\u09f0\u09be\u09a4 \u09a1\u09bf\u09f0\u09b9\u09c7\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0986\u09ab\u0997\u09be\u09a8 \u0986\u09ab\u0997\u09be\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0986\u09b2\u09ac\u09c7\u09a8\u09c0\u09af\u09bc \u09b2\u09c7\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0986\u09f0\u09cd\u09ae\u09c7\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09cd\u09f0\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u09a8\u09c7\u09a1\u09be\u09f0\u09b2\u09c7\u09a3\u09cd\u09a1\u099b \u098f\u09a3\u09cd\u099f\u09bf\u09b2\u09bf\u09af\u09bc\u09c7\u09a8 \u0997\u09bf\u09b2\u09cd\u09a1\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u098f\u0982\u0997\u09cb\u09b2\u09be\u09a8 \u0995\u09cb\u09f1\u09be\u099e\u09cd\u099c\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0986\u09f0\u09cd\u099c\u09c7\u09a3\u09cd\u099f\u09be\u0987\u09a8 \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0985\u09b7\u09cd\u099f\u09cd\u09f0\u09c7\u09b2\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0986\u09f0\u09c1\u09ac\u09be\u09a8 \u09ab\u09cd\u09b2\u2019\u09f0\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0986\u099c\u09c7\u09f0\u09ac\u09be\u0987\u099c\u09be\u09a8\u09c0 \u09ae\u09be\u09a8\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u09ac\u2019\u099b\u09a8\u09bf\u09af\u09bc\u09be \u0986\u09f0\u09c1 \u09b9\u09be\u09f0\u09cd\u099c\u09c7\u0997\u2019\u09ad\u09bf\u09a8\u09be \u0995\u09a8\u09ad\u09be\u09f0\u09cd\u099f\u09bf\u09ac\u09cd\u200c\u09b2 \u09ae\u09be\u09f0\u09cd\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u09ac\u09be\u09f0\u09cd\u09ac\u09be\u09a1\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u09ac\u09be\u0982\u09b2\u09be\u09a6\u09c7\u09b6\u09c0 \u099f\u09be\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u09ac\u09c1\u09b2\u0997\u09c7\u09f0\u09c0\u09af\u09bc \u09b2\u09c7\u09ad"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u09ac\u09be\u09b9\u09f0\u09c7\u0987\u09a8\u09c0 \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u09ac\u09c1\u09f0\u09c1\u09a3\u09cd\u09a1\u09bf\u09af\u09bc\u09be\u09a8 \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u09ac\u09be\u09f0\u09cd\u09ae\u09c1\u09a1\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u09ac\u09cd\u09f0\u09c1\u09a8\u09c7\u0987 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u09ac\u09b2\u09bf\u09ad\u09bf\u09af\u09bc\u09be\u09a8 \u09ac\u09b2\u09bf\u09ad\u09bf\u09af\u09bc\u09be\u09a8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u09ac\u09cd\u09f0\u09be\u099c\u09bf\u09b2\u09bf\u09af\u09bc\u09be\u09a8 \u09f0\u09bf\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u09ac\u09be\u09b9\u09be\u09ae\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u09ad\u09c1\u099f\u09be\u09a8\u09c0 \u09a8\u0982\u0997\u09b2\u099f\u09cd\u09f0\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u09ac\u2019\u099f\u099a\u09cb\u09f1\u09be\u09a8\u09be\u09a8 \u09aa\u09c1\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u09ac\u09c7\u09b2\u09be\u09f0\u09c1\u099b\u09c0\u09af\u09bc \u09f0\u09c1\u09ac\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u09ac\u09c7\u09b2\u09bf\u099c \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0995\u09be\u09a8\u09be\u09a1\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0995\u0982\u0997\u09cb \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u099a\u09c1\u0987\u099b \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u099a\u09bf\u09b2\u09bf\u09af\u09bc\u09be\u09a8 \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u099a\u09c0\u09a8\u09be \u0987\u0989\u09f1\u09be\u09a8 (\u0985\u09ab\u09b6\u09cd\u09ac\u2019\u09f0)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u099a\u09c0\u09a8\u09be \u0987\u0989\u09f1\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0995\u09b2\u09ae\u09cd\u09ac\u09bf\u09af\u09bc\u09be\u09a8 \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u0995\u09cb\u09b7\u09cd\u099f\u09be \u09f0\u09bf\u0995\u09be\u09a8 \u0995\u09cb\u09b2\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u0995\u09bf\u0989\u09ac\u09be\u09a8 \u09f0\u09c2\u09aa\u09be\u09a8\u09cd\u09a4\u09f0\u09af\u09cb\u0997\u09cd\u09af \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u0995\u09bf\u0989\u09ac\u09be\u09a8 \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0995\u09c7\u09aa \u09ad\u09be\u09f0\u09cd\u09a6\u09c7 \u098f\u099b\u0995\u09c1\u09a1\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u099a\u09c7\u0995 \u0995\u09cb\u09f0\u09c1\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u099c\u09bf\u09ac\u09c1\u099f\u09bf \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u09a1\u09c7\u09a8\u09bf\u099a \u0995\u09cd\u09f0\u09cb\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u09a1\u2019\u09ae\u09bf\u09a8\u09bf\u0995\u09be\u09a8 \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0986\u09b2\u099c\u09c7\u09f0\u09c0\u09af\u09bc \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0987\u099c\u09bf\u09aa\u09cd\u09a4\u09f0 \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u098f\u09f0\u09bf\u099f\u09cd\u09f0\u09bf\u09af\u09bc\u09a8 \u09a8\u09be\u0995\u09cd\u200c\u09ab\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0987\u09a5\u09bf\u0985\u2019\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09ac\u09bf\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0987\u0989\u09f0\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u09ab\u09bf\u099c\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u09ab\u0995\u09b2\u09c7\u09a3\u09cd\u09a1 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c\u09f0 \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u09ac\u09cd\u09f0\u09bf\u099f\u09bf\u099b \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u099c\u09f0\u09cd\u099c\u09bf\u09af\u09bc\u09be\u09a8 \u09b2\u09be\u09f0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0998\u09be\u09a8\u09be\u09f0 \u099a\u09c7\u09a1\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u099c\u09bf\u09ac\u09cd\u09f0\u09be\u09b2\u09cd\u099f\u09f0 \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u0997\u09be\u09ae\u09cd\u09ac\u09bf\u09af\u09bc\u09be \u09a1\u09be\u09b2\u09be\u099b\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0997\u09bf\u09a8\u09bf \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0997\u09c1\u09f1\u09be\u099f\u09c7\u09ae\u09be\u09b2\u09be \u0995\u09c1\u09f1\u09c7\u09ce\u099c\u09be\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0997\u09be\u09af\u09bc\u09be\u09a8\u09bf\u099c \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u09b9\u0982 \u0995\u0982 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u09b9\u09cb\u09a8\u09cd\u09a6\u09c1\u09f0\u09be\u09a8 \u09b2\u09c7\u09ae\u09cd\u09aa\u09bf\u09f0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0995\u09cd\u09f0\u09cb\u09f1\u09c7\u099b\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09c1\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u09b9\u09be\u0987\u099f\u09bf\u09af\u09bc\u09be\u09a8 \u0997\u09cc\u09f0\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u09b9\u09be\u0982\u0997\u09c7\u09f0\u09c0\u09af\u09bc\u09be\u09a8 \u09ab\u2019\u09f0\u09bf\u09a3\u09cd\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0987\u09a3\u09cd\u09a1\u09cb\u09a8\u09c7\u099a\u09bf\u09af\u09bc\u09be\u09a8 \u09f0\u09c1\u09aa\u09bf\u09af\u09bc\u09be\u09b9"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0987\u099c\u09f0\u09be\u0987\u09b2\u09c0 \u09a8\u09bf\u0989 \u09b6\u09cd\u09ac\u09c7\u0995\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u09ad\u09be\u09f0\u09a4\u09c0\u09af\u09bc \u09f0\u09c1\u09aa\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0987\u09f0\u09be\u0995\u09c0 \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0987\u09f0\u09be\u09a8\u09c0\u09af\u09bc\u09be\u09a8 \u09f0\u09bf\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0986\u0987\u099a\u09b2\u09c7\u09a3\u09cd\u09a1\u09bf\u0995 \u0995\u09cd\u09f0\u09cb\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u099c\u09be\u09ae\u09be\u0987\u0995\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u099c\u09f0\u09cd\u09a1\u09be\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09c0 \u09af\u09bc\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0995\u09c7\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u09b6\u09cd\u09ac\u09bf\u09b2\u09bf\u0982"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u0995\u09bf\u09f0\u09cd\u0997\u09bf\u09b8\u09cd\u09a4\u09be\u09a8\u09c0 \u099b\u09cb\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0995\u09c7\u09ae\u09cd\u09ac\u2019\u09a1\u09bf\u09af\u09bc\u09be\u09a8 \u09f0\u09bf\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0995\u2019\u09ae\u09cb\u09f0\u09bf\u09af\u09bc\u09be\u09a8 \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09f0 \u0995\u09cb\u09f0\u09bf\u09af\u09bc\u09be\u09f0 \u0993\u09f1\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u0995\u09cb\u09f0\u09bf\u09af\u09bc\u09be\u09f0 \u0993\u09f1\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0995\u09c1\u09f1\u09c7\u0987\u099f\u09bf \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u0995\u09c7\u0987\u09ae\u09c7\u09a8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c\u09f0 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0995\u09be\u099c\u09be\u0996\u09b8\u09cd\u09a4\u09be\u09a8\u09c0 \u09a4\u09c7\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u09b2\u09be\u0993\u099a\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09bf\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u09b2\u09c7\u09ac\u09be\u09a8\u09c0\u099c \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u09b6\u09cd\u09f0\u09c0\u09b2\u0982\u0995\u09be\u09a8 \u09f0\u09c1\u09aa\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u09b2\u09be\u0987\u09ac\u09c7\u09f0\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u09b2\u09bf\u09ac\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u09ae\u09f0\u09cb\u0995\u09cd\u0995\u09be\u09a8 \u09a1\u09bf\u09f0\u09b9\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u09ae\u09cb\u09b2\u09a1\u09cb\u09ad\u09be\u09a8 \u09b2\u09c7\u0989"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u09ae\u09be\u09b2\u09be\u0997\u09be\u099b\u09c0 \u098f\u09f0\u09bf\u09af\u09bc\u09be\u09f0\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u09ae\u09c7\u099a\u09bf\u09a1\u09cb\u09a8\u09c0\u09af\u09bc \u09a1\u09c7\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u09a8\u09ae\u09be\u09f0 \u0995\u09bf\u09af\u09bc\u09be\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u09ae\u0999\u09cd\u0997\u09cb\u09b2\u09bf\u09af\u09bc\u09be\u09a8 \u099f\u09c1\u09f0\u09cd\u0997\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u09ae\u09c7\u0995\u09be\u09a8\u09c0\u099c \u09aa\u09be\u099f\u09be\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u09ae\u2019\u09f0\u09bf\u099f\u09c7\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u0994\u0997\u09c1\u0987\u09af\u09bc\u09be (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u09ae\u2019\u09f0\u09bf\u099f\u09c7\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u0994\u0997\u09c1\u0987\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u09ae\u09f0\u09bf\u099a\u09bf\u09af\u09bc\u09be\u09a8 \u09f0\u09c1\u09aa\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u09ae\u09be\u09b2\u09a1\u09bf\u09ad\u09bf\u09af\u09bc\u09be\u09a8 \u09f0\u09c1\u09ab\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u09ae\u09be\u09b2\u09be\u0989\u0987\u09af\u09bc\u09be\u09a8 \u0995\u09cb\u09f1\u09be\u099a\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u09ae\u09c7\u0995\u09cd\u09b8\u09bf\u0995\u09be\u09a8 \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u09ae\u09be\u09b2\u09be\u09af\u09bc\u09c7\u099a\u09bf\u09af\u09bc\u09be\u09a8 \u09f0\u09bf\u0982\u0997\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u09ae\u09cb\u099c\u09be\u09ae\u09cd\u09ac\u09bf\u0995\u09be\u09a8 \u09ae\u09c7\u099f\u09bf\u0995\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u09a8\u09be\u09ae\u09bf\u09ac\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u09a8\u09be\u0987\u099c\u09c7\u09f0\u09bf\u09af\u09bc\u09be\u09a8 \u09a8\u09be\u0987\u09f0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u09a8\u09bf\u0995\u09be\u09f0\u09be\u0997\u09c1\u09f1\u09be\u09a8 \u0995\u09cb\u09f0\u09cd\u09a1\u09cb\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u09a8\u09f0\u09f1\u09c7\u099c\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09cd\u09f0\u09cb\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u09a8\u09c7\u09aa\u09be\u09b2\u09c0 \u09f0\u09c1\u09aa\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u09a8\u09bf\u0989\u099c\u09bf\u09b2\u09c7\u09a3\u09cd\u09a1 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0993\u09ae\u09be\u09a8\u09bf \u09f0\u09bf\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u09aa\u09be\u09a8\u09be\u09ae\u09c7\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u09ac\u09be\u09b2\u09cd\u09ac\u09cb\u09f1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u09aa\u09c7\u09f0\u09c1\u09ad\u09bf\u09af\u09bc\u09be\u09a8 \u099b\u2019\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u09aa\u09be\u09aa\u09c1\u09f1\u09be \u09a8\u09bf\u0989 \u0997\u09bf\u09a8\u09bf \u0995\u09bf\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u09ab\u09bf\u09b2\u09bf\u09aa\u09bf\u09a8 \u09aa\u09c7\u0987\u099b\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u09aa\u09be\u0995\u09bf\u09b8\u09cd\u09a4\u09be\u09a8\u09c0 \u09f0\u09c1\u09aa\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u09aa\u2019\u09b2\u09bf\u099a \u099c\u09cb\u09b2\u09cd\u099f\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u09aa\u09be\u09f0\u09be\u0997\u09c1\u09af\u09bc\u09be\u09a8 \u0997\u09c1\u09f1\u09be\u09f0\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0995\u09be\u099f\u09be\u09f0\u09bf \u09f0\u09bf\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u09f0\u09cb\u09ae\u09be\u09a8\u09c0\u09af\u09bc \u09b2\u09c7\u0989"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u099a\u09be\u09f0\u09cd\u09ac\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u09f0\u09be\u099b\u09bf\u09af\u09bc\u09be\u09a8 \u09f0\u09c1\u09ac\u09cd\u200c\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u09f0\u09cb\u09f1\u09be\u09a8\u09cd\u09a6\u09be\u09a8 \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u099a\u09cc\u09a1\u09bf \u09f0\u09bf\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u099a\u09cb\u09b2\u09cb\u09ae\u09cb\u09a8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c\u09f0 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u099b\u09c7\u099a\u09c7\u09b2\u09f1\u09be \u09f0\u09c1\u09aa\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u099a\u09c1\u09a1\u09be\u09a8\u09c0 \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u099a\u09c1\u0987\u09a1\u09bf\u099b \u0995\u09cd\u09f0\u09cb\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u099b\u09bf\u0982\u0997\u09be\u09aa\u09c1\u09f0 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u099b\u09c7\u0987\u09a3\u09cd\u099f \u09b9\u09c7\u09b2\u09c7\u09a8\u09be \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u099a\u09bf\u09af\u09bc\u09c7\u09f0\u09be \u09b2\u09bf\u0985\u2019\u09a8\u09f0 \u09b2\u09bf\u0985\u2019\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u099a\u09cb\u09ae\u09be\u09b2\u09bf \u09b6\u09cd\u09ac\u09bf\u09b2\u09bf\u0982"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u099b\u09c1\u09f0\u09bf\u09a8\u09be\u09ae\u09c0 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u099a\u09c1\u09a1\u09be\u09a8\u09c0\u099c \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u099a\u09be\u0993 \u099f\u09cb\u09ae\u09c7 \u0986\u09f0\u09c1 \u09aa\u09cd\u09f0\u09bf\u09a8\u099a\u09bf\u09aa\u09c7 \u09a1\u09cb\u09ac\u09cd\u200c\u09f0\u09be (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u099a\u09be\u0993 \u099f\u09cb\u09ae\u09c7 \u0986\u09f0\u09c1 \u09aa\u09cd\u09f0\u09bf\u09a8\u099a\u09bf\u09aa\u09c7 \u09a1\u09cb\u09ac\u09cd\u200c\u09f0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u099a\u09bf\u09f0\u09bf\u09af\u09bc\u09be\u09a8 \u09aa\u09be\u0989\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u09b8\u09cd\u09ac\u09be\u099c\u09bf \u09b2\u09bf\u09b2\u09c7\u0982\u0997\u09c7\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u09a5\u09be\u0987 \u09ac\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u09a4\u09be\u099c\u09bf\u0995\u09bf\u09b8\u09cd\u09a4\u09be\u09a8\u09c0 \u099b\u09cb\u09ae\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u09a4\u09c1\u09f0\u09cd\u0995\u09ae\u09c7\u09a8\u09bf\u09b8\u09cd\u09a4\u09be\u09a8\u09c0 \u09ae\u09be\u09a8\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u099f\u09c1\u09a8\u09bf\u099a\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09bf\u09a8\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u099f\u0982\u0997\u09be\u09a8 \u09aa\u09be\u0986\u0982\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u09a4\u09c1\u09f0\u09cd\u0995\u09c0\u09f0 \u09b2\u09bf\u09f0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u099f\u09cd\u09f0\u09bf\u09a8\u09bf\u09a1\u09be\u09a1 \u0986\u09f0\u09c1 \u099f\u09cb\u09ac\u09be\u0997\u09cb \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u09a8\u09bf\u0989 \u099f\u09be\u0987\u09f1\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u099f\u09be\u09a8\u099c\u09be\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u09b6\u09cd\u09ac\u09bf\u09b2\u09bf\u0982"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0987\u0989\u0995\u09cd\u09f0\u09c7\u0987\u09a8\u09c0\u09af\u09bc \u09b9\u09c3\u09ad\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0989\u0997\u09be\u09a3\u09cd\u09a1\u09be\u09a8 \u09b6\u09cd\u09ac\u09bf\u09b2\u09bf\u0982"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0987\u0989. \u098f\u099b. \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0989\u09f0\u09c1\u0997\u09c1\u09f1\u09c7\u09af\u09bc\u09be\u09a8 \u09aa\u09c7\u099b\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0989\u099c\u09ac\u09c7\u0995\u09bf\u09b8\u09cd\u09a4\u09be\u09a8\u09c0 \u099b\u09cb\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u09ad\u09c7\u09a8\u09bf\u099c\u09c1\u09f1\u09c7\u09b2\u09be\u09a8 \u09ac\u09b2\u09bf\u09ad\u09be\u09f0 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u09ad\u09c7\u09a8\u09bf\u099c\u09c1\u09f1\u09c7\u09b2\u09be\u09a8 \u09ac\u09b2\u09bf\u09ad\u09be\u09f0 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u09ad\u09c7\u09a8\u09bf\u099c\u09c1\u09f1\u09c7\u09b2\u09be\u09a8 \u09ac\u09b2\u09bf\u09ad\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u09ad\u09bf\u09af\u09bc\u09c7\u099f\u09a8\u09be\u09ae\u09c0\u099c \u09a1\u0982"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u09ad\u09be\u09a8\u09be\u099f\u09c1\u09f0 \u09ad\u09be\u099f\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u099b\u09be\u09ae\u09cb\u09f1\u09be\u09a8 \u099f\u09be\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u0986\u09ab\u09cd\u09f0\u09bf\u0995\u09be\u09a8 CFA \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0987\u09b7\u09cd\u099f \u0995\u09c7\u09f0\u09bf\u09ac\u09bf\u09af\u09bc\u09be\u09a8 \u09a1\u09b2\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae \u0986\u09ab\u09cd\u09f0\u09bf\u0995\u09be\u09a8 CFA \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \u09ab\u09cd\u09f0\u09c7\u0982\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0985\u099c\u09cd\u099e\u09be\u09a4 \u09ae\u09c1\u09a6\u09cd\u09f0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u09af\u09bc\u09c7\u09ae\u09c7\u09a8\u09c0 \u09f0\u09bf\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u0986\u09ab\u09cd\u09f0\u09bf\u0995\u09be\u09f0 \u09f0\u09be\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u099c\u09be\u09ae\u09cd\u09ac\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09cb\u09f1\u09be\u099a\u09be"_s)
		})
	}));
	return data;
}

CurrencyNames_as::CurrencyNames_as() {
}

$Class* CurrencyNames_as::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_as, name, initialize, &_CurrencyNames_as_ClassInfo_, allocate$CurrencyNames_as);
	return class$;
}

$Class* CurrencyNames_as::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun