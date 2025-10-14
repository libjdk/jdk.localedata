#include <sun/util/resources/cldr/ext/CurrencyNames_fa.h>

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

$MethodInfo _CurrencyNames_fa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fa::*)()>(&CurrencyNames_fa::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fa",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fa_MethodInfo_
};

$Object* allocate$CurrencyNames_fa($Class* clazz) {
	return $of($alloc(CurrencyNames_fa));
}

void CurrencyNames_fa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fa::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AED"_s),
			$of("AED"_s)
		}),
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of(u"\u060b"_s)
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
			$of("BYR"_s),
			$of("BYR"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZD"_s)
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
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("CNH"_s),
			$of("CNH"_s)
		}),
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"\u00a5CN"_s)
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
			$of("HKD"_s),
			$of("$HK"_s)
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
			$of(u"\u0631\u06cc\u0627\u0644"_s)
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
			$of("$MX"_s)
		}),
		$$new($ObjectArray, {
			$of("MXP"_s),
			$of("MXP"_s)
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
			$of(u"\u0e3f"_s)
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
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("USN"_s),
			$of("USN"_s)
		}),
		$$new($ObjectArray, {
			$of("USS"_s),
			$of("USS"_s)
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
			$of("XCD"_s),
			$of("$EC"_s)
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
			$of(u"\u067e\u0632\u062a\u0627\u06cc \u0622\u0646\u062f\u0648\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u062f\u0631\u0647\u0645 \u0627\u0645\u0627\u0631\u0627\u062a \u0645\u062a\u062d\u062f\u0647\u0654 \u0639\u0631\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0627\u0641\u063a\u0627\u0646\u06cc \u0627\u0641\u063a\u0627\u0646\u0633\u062a\u0627\u0646 (\u06f1\u06f9\u06f2\u06f7 \u062a\u0627 \u06f2\u06f0\u06f0\u06f2)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0627\u0641\u063a\u0627\u0646\u06cc \u0627\u0641\u063a\u0627\u0646\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"\u0644\u06a9 \u0622\u0644\u0628\u0627\u0646\u06cc (\u06f1\u06f9\u06f4\u06f6 \u062a\u0627 \u06f1\u06f9\u06f6\u06f5)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0644\u06a9 \u0622\u0644\u0628\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u062f\u0631\u0627\u0645 \u0627\u0631\u0645\u0646\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u06af\u06cc\u0644\u062f\u0631 \u0622\u0646\u062a\u06cc\u0644 \u0647\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u06a9\u0648\u0627\u0646\u0632\u0627\u06cc \u0622\u0646\u06af\u0648\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0622\u0631\u0698\u0627\u0646\u062a\u06cc\u0646 (\u06f1\u06f8\u06f8\u06f1 \u062a\u0627 \u06f1\u06f9\u06f7\u06f0)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0622\u0631\u0698\u0627\u0646\u062a\u06cc\u0646 (\u06f1\u06f9\u06f8\u06f3 \u062a\u0627 \u06f1\u06f9\u06f8\u06f5)\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0622\u0631\u0698\u0627\u0646\u062a\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0634\u06cc\u0644\u06cc\u0646\u06af \u0627\u062a\u0631\u06cc\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0627\u0633\u062a\u0631\u0627\u0644\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0641\u0644\u0648\u0631\u06cc\u0646 \u0622\u0631\u0648\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u0645\u0646\u0627\u062a \u062c\u0645\u0647\u0648\u0631\u06cc \u0622\u0630\u0631\u0628\u0627\u06cc\u062c\u0627\u0646 (\u06f1\u06f9\u06f9\u06f3 \u062a\u0627 \u06f2\u06f0\u06f0\u06f6)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0645\u0646\u0627\u062a \u062c\u0645\u0647\u0648\u0631\u06cc \u0622\u0630\u0631\u0628\u0627\u06cc\u062c\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0628\u0648\u0633\u0646\u06cc \u0648 \u0647\u0631\u0632\u06af\u0648\u06cc\u0646 (\u06f1\u06f9\u06f9\u06f2 \u062a\u0627 \u06f1\u06f9\u06f9\u06f4)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0645\u0627\u0631\u06a9 \u062a\u0628\u062f\u06cc\u0644\u200c\u067e\u0630\u06cc\u0631 \u0628\u0648\u0633\u0646\u06cc \u0648 \u0647\u0631\u0632\u06af\u0648\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0628\u0627\u0631\u0628\u0627\u062f\u0648\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u062a\u0627\u06a9\u0627\u06cc \u0628\u0646\u06af\u0644\u0627\u062f\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0628\u0644\u0698\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0628\u0644\u0698\u06cc\u06a9 (\u0645\u0627\u0644\u06cc)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0644\u0641 \u0628\u0644\u063a\u0627\u0631\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0628\u062d\u0631\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0628\u0648\u0631\u0648\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0628\u0631\u0645\u0648\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0628\u0631\u0648\u0646\u0626\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0628\u0648\u0644\u06cc\u0648\u06cc\u0627\u0646\u0648\u06cc \u0628\u0648\u0644\u06cc\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0628\u0648\u0644\u06cc\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0631\u0626\u0627\u0644 \u0628\u0631\u0632\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0628\u0627\u0647\u0627\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0627\u0646\u06af\u0648\u0644\u062a\u0631\u0648\u0645 \u0628\u0648\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u067e\u0648\u0644\u0627\u06cc \u0628\u0648\u062a\u0633\u0648\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u062c\u062f\u06cc\u062f \u0628\u06cc\u0644\u0648\u0631\u0648\u0633\u06cc (\u06f1\u06f9\u06f9\u06f4 \u062a\u0627 \u06f1\u06f9\u06f9\u06f9)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0628\u0644\u0627\u0631\u0648\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0628\u0644\u0627\u0631\u0648\u0633\u06cc (\u06f2\u06f0\u06f1\u06f6\u2013\u06f2\u06f0\u06f0\u06f0)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0628\u0644\u06cc\u0632"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u06a9\u0627\u0646\u0627\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u06a9\u0646\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0633\u0648\u0626\u06cc\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0634\u06cc\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u06cc\u0648\u0622\u0646 \u0686\u06cc\u0646 (\u0628\u0631\u0648\u0646\u200c\u0645\u0631\u0632\u06cc)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u06cc\u0648\u0622\u0646 \u0686\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u06a9\u0644\u0645\u0628\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u06a9\u0648\u0644\u0648\u0646 \u06a9\u0627\u0633\u062a\u0627\u0631\u06cc\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0635\u0631\u0628\u0633\u062a\u0627\u0646 (\u06f2\u06f0\u06f0\u06f2 \u062a\u0627 \u06f2\u06f0\u06f0\u06f6)"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u062a\u0628\u062f\u06cc\u0644\u200c\u067e\u0630\u06cc\u0631 \u06a9\u0648\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u06a9\u0648\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0627\u0633\u06a9\u0648\u062f\u0648\u06cc \u06a9\u06cc\u067e\u200c\u0648\u0631\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0642\u0628\u0631\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u06a9\u0648\u0631\u0648\u0646\u0627\u06cc \u062c\u0645\u0647\u0648\u0631\u06cc \u0686\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0645\u0627\u0631\u06a9 \u0622\u0644\u0645\u0627\u0646 \u0634\u0631\u0642\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u0645\u0627\u0631\u06a9 \u0622\u0644\u0645\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u062c\u06cc\u0628\u0648\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u06a9\u0631\u0648\u0646 \u062f\u0627\u0646\u0645\u0627\u0631\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u062c\u0645\u0647\u0648\u0631\u06cc \u062f\u0648\u0645\u06cc\u0646\u06cc\u06a9\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0627\u0644\u062c\u0632\u0627\u06cc\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u06a9\u0631\u0648\u0646 \u0627\u0633\u062a\u0648\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0645\u0635\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0646\u0627\u06a9\u0641\u0627\u06cc \u0627\u0631\u06cc\u062a\u0631\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u067e\u0632\u062a\u0627\u06cc \u0627\u0633\u067e\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0628\u06cc\u0631 \u0627\u062a\u06cc\u0648\u067e\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u06cc\u0648\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0641\u06cc\u062c\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u062c\u0632\u0627\u06cc\u0631 \u0641\u0627\u0644\u06a9\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0641\u0631\u0627\u0646\u0633\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0628\u0631\u06cc\u062a\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u0644\u0627\u0631\u06cc \u06af\u0631\u062c\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0633\u062f\u06cc \u063a\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u067e\u0648\u0646\u062f \u062c\u0628\u0644\u200c\u0627\u0644\u0637\u0627\u0631\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u062f\u0627\u0644\u0627\u0633\u06cc \u06af\u0627\u0645\u0628\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u06af\u06cc\u0646\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u062f\u0631\u0627\u062e\u0645\u0627\u06cc \u06cc\u0648\u0646\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u06a9\u062a\u0632\u0627\u0644 \u06af\u0648\u0627\u062a\u0645\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u06af\u06cc\u0646\u0647\u0654 \u0628\u06cc\u0633\u0627\u0626\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u06af\u0648\u06cc\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0647\u0646\u06af\u200c\u06a9\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0644\u0645\u067e\u06cc\u0631\u0627\u06cc \u0647\u0646\u062f\u0648\u0631\u0627\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u06a9\u0631\u0648\u0627\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u06a9\u0648\u0646\u0627\u06cc \u06a9\u0631\u0648\u0627\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u06af\u0648\u0631\u062f \u0647\u0627\u0626\u06cc\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0641\u0648\u0631\u06cc\u0646\u062a \u0645\u062c\u0627\u0631\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0627\u0646\u062f\u0648\u0646\u0632\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0627\u06cc\u0631\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0627\u0633\u0631\u0627\u0626\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"\u0634\u0642\u0644 \u0627\u0633\u0631\u0627\u0626\u06cc\u0644 (\u06f1\u06f9\u06f8\u06f0 \u062a\u0627 \u06f1\u06f9\u06f8\u06f5)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0634\u0642\u0644 \u062c\u062f\u06cc\u062f \u0627\u0633\u0631\u0627\u0626\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0647\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0639\u0631\u0627\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0631\u06cc\u0627\u0644 \u0627\u06cc\u0631\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"\u06a9\u0631\u0648\u0646\u0627\u06cc \u0627\u06cc\u0633\u0644\u0646\u062f (\u06f1\u06f9\u06f1\u06f8 \u062a\u0627 \u06f1\u06f9\u06f8\u06f1)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u06a9\u0631\u0648\u0646\u0627\u06cc \u0627\u06cc\u0633\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0644\u06cc\u0631\u0647\u0654 \u0627\u06cc\u062a\u0627\u0644\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u062c\u0627\u0645\u0627\u0626\u06cc\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0627\u0631\u062f\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u06cc\u0646 \u0698\u0627\u067e\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0634\u06cc\u0644\u06cc\u0646\u06af \u06a9\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u0633\u0648\u0645 \u0642\u0631\u0642\u06cc\u0632\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0631\u06cc\u200c\u06cc\u0644 \u06a9\u0627\u0645\u0628\u0648\u062c"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u06a9\u0648\u0645\u0648\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0648\u0648\u0646 \u06a9\u0631\u0647\u0654 \u0634\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"\u0648\u0648\u0646 \u06a9\u0631\u0647\u0654 \u062c\u0646\u0648\u0628\u06cc (\u06f1\u06f9\u06f4\u06f5 \u062a\u0627 \u06f1\u06f9\u06f5\u06f3)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0648\u0648\u0646 \u06a9\u0631\u0647\u0654 \u062c\u0646\u0648\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u06a9\u0648\u06cc\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u062c\u0632\u0627\u06cc\u0631 \u06a9\u0650\u06cc\u0645\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u062a\u0646\u06af\u0647\u0654 \u0642\u0632\u0627\u0642\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u06a9\u06cc\u067e \u0644\u0627\u0626\u0648\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0644\u06cc\u0631\u0647\u0654 \u0644\u0628\u0646\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0633\u0631\u06cc\u200c\u0644\u0627\u0646\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0644\u06cc\u0628\u0631\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u0644\u0648\u062a\u06cc \u0644\u0633\u0648\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u0644\u06cc\u062a\u0627\u0633 \u0644\u06cc\u062a\u0648\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u062a\u0627\u0644\u0648\u0646\u0627\u0633 \u0644\u06cc\u062a\u0648\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0644\u0648\u06a9\u0632\u0627\u0645\u0628\u0648\u0631\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0645\u0627\u0644\u06cc \u0644\u0648\u06af\u0632\u0627\u0645\u0628\u0648\u0631\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u0644\u0627\u062a\u0633 \u0644\u062a\u0648\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0644\u062a\u0648\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0644\u06cc\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u062f\u0631\u0647\u0645 \u0645\u0631\u0627\u06a9\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0645\u0631\u0627\u06a9\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0645\u0648\u0646\u0627\u06a9\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u0644\u0626\u0648\u06cc \u0645\u0648\u0644\u062f\u0627\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0622\u0631\u06cc\u0627\u0631\u06cc \u0645\u0627\u0644\u0627\u06af\u0627\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0645\u0627\u062f\u0627\u06af\u0627\u0633\u06a9\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0645\u0642\u062f\u0648\u0646\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0645\u0642\u062f\u0648\u0646\u06cc\u0647 (\u06f1\u06f9\u06f9\u06f2 \u062a\u0627 \u06f1\u06f9\u06f9\u06f3)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u06a9\u06cc\u0627\u062a \u0645\u06cc\u0627\u0646\u0645\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u062a\u0648\u06af\u0631\u06cc\u06a9 \u0645\u063a\u0648\u0644\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u067e\u0627\u062a\u0627\u06a9\u0627\u06cc \u0645\u0627\u06a9\u0627\u0626\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u0627\u0648\u06af\u0648\u0626\u06cc\u0627\u06cc \u0645\u0648\u0631\u06cc\u062a\u0627\u0646\u06cc (\u06f1\u06f9\u06f7\u06f3 \u062a\u0627 \u06f2\u06f0\u06f1\u06f7)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u0627\u0648\u06af\u0648\u0626\u06cc\u0627\u06cc \u0645\u0648\u0631\u06cc\u062a\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u0644\u06cc\u0631\u0647\u0654 \u0645\u0627\u0644\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0645\u0627\u0644\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0645\u0648\u0631\u06cc\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0645\u0627\u0644\u062f\u06cc\u0648 (\u06f1\u06f9\u06f4\u06f7 \u062a\u0627 \u06f1\u06f9\u06f8\u06f1)"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0645\u0627\u0644\u062f\u06cc\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u06a9\u0648\u0627\u0686\u0627\u06cc \u0645\u0627\u0644\u0627\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0645\u06a9\u0632\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0646\u0642\u0631\u0647\u0654 \u0645\u06a9\u0632\u06cc\u06a9 (\u06f1\u06f8\u06f6\u06f1 \u062a\u0627 \u06f1\u06f9\u06f9\u06f2)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u0631\u06cc\u0646\u06af\u06cc\u062a \u0645\u0627\u0644\u0632\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u0627\u0633\u06a9\u0648\u062f\u0648\u06cc \u0645\u0648\u0632\u0627\u0645\u0628\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0645\u062a\u06cc\u06a9\u0627\u0644 \u0645\u0648\u0632\u0627\u0645\u0628\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0646\u0627\u0645\u06cc\u0628\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0646\u0627\u06cc\u0631\u0627\u06cc \u0646\u06cc\u062c\u0631\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u06a9\u0648\u0631\u062f\u0648\u0628\u0627\u06cc \u0646\u06cc\u06a9\u0627\u0631\u0627\u06af\u0648\u0626\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u06af\u06cc\u0644\u062f\u0631 \u0647\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u06a9\u0631\u0648\u0646 \u0646\u0631\u0648\u0698"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0646\u067e\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0632\u0644\u0627\u0646\u062f \u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0631\u06cc\u0627\u0644 \u0639\u0645\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u0628\u0627\u0644\u0628\u0648\u0627\u06cc \u067e\u0627\u0646\u0627\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u0627\u06cc\u0646\u062a\u06cc \u067e\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u0633\u0648\u0644 \u067e\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u0633\u0648\u0644 \u067e\u0631\u0648 (\u06f1\u06f8\u06f6\u06f3 \u062a\u0627 \u06f1\u06f9\u06f6\u06f5)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u06a9\u06cc\u0646\u0627\u06cc \u067e\u0627\u067e\u0648\u0627 \u06af\u06cc\u0646\u0647\u0654 \u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0641\u06cc\u0644\u06cc\u067e\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u067e\u0627\u06a9\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u0632\u0648\u0627\u062a\u06cc \u0644\u0647\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u0627\u0633\u06a9\u0648\u062f\u0648\u06cc \u067e\u0631\u062a\u063a\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u06af\u0648\u0627\u0631\u0627\u0646\u06cc \u067e\u0627\u0631\u0627\u06af\u0648\u0626\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0631\u06cc\u0627\u0644 \u0642\u0637\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0631\u0648\u062f\u0632\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0644\u0626\u0648\u06cc \u0631\u0648\u0645\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0635\u0631\u0628\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0631\u0648\u0633\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0631\u0648\u0633\u06cc\u0647 (\u06f1\u06f9\u06f9\u06f1 \u062a\u0627 \u06f1\u06f9\u06f9\u06f8)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0631\u0648\u0627\u0646\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0631\u06cc\u0627\u0644 \u0633\u0639\u0648\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u062c\u0632\u0627\u06cc\u0631 \u0633\u0644\u06cc\u0645\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0631\u0648\u067e\u06cc\u0647\u0654 \u0633\u06cc\u0634\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u0633\u0648\u062f\u0627\u0646 (\u06f1\u06f9\u06f9\u06f2 \u062a\u0627 \u06f2\u06f0\u06f0\u06f7)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0633\u0648\u062f\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u06a9\u0631\u0648\u0646 \u0633\u0648\u0626\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0633\u0646\u06af\u0627\u067e\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0633\u0646\u062a \u0647\u0644\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0644\u0626\u0648\u0646 \u0633\u06cc\u0631\u0627\u0644\u0626\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0634\u06cc\u0644\u06cc\u0646\u06af \u0633\u0648\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0633\u0648\u0631\u06cc\u0646\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u06af\u06cc\u0644\u062f\u0631 \u0633\u0648\u0631\u06cc\u0646\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0633\u0648\u062f\u0627\u0646 \u062c\u0646\u0648\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u062f\u0648\u0628\u0631\u0627\u06cc \u0633\u0627\u0626\u0648\u062a\u0648\u0645\u0647 \u0648 \u067e\u0631\u0646\u0633\u06cc\u067e (\u06f1\u06f9\u06f7\u06f7 \u062a\u0627 \u06f2\u06f0\u06f1\u06f7)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u062f\u0648\u0628\u0631\u0627\u06cc \u0633\u0627\u0626\u0648\u062a\u0648\u0645\u0647 \u0648 \u067e\u0631\u0646\u0633\u06cc\u067e"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0634\u0648\u0631\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0644\u06cc\u0631\u0647\u0654 \u0633\u0648\u0631\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0644\u06cc\u0644\u0627\u0646\u06af\u0646\u06cc \u0633\u0648\u0627\u0632\u06cc\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0628\u0627\u062a \u062a\u0627\u06cc\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u062a\u0627\u062c\u06cc\u06a9\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0633\u0627\u0645\u0627\u0646\u06cc \u062a\u0627\u062c\u06cc\u06a9\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u0645\u0646\u0627\u062a \u062a\u0631\u06a9\u0645\u0646\u0633\u062a\u0627\u0646 (\u06f1\u06f9\u06f9\u06f3 \u062a\u0627 \u06f2\u06f0\u06f0\u06f9)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u0645\u0646\u0627\u062a \u062a\u0631\u06a9\u0645\u0646\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u062a\u0648\u0646\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u067e\u0627\u0622\u0646\u06af\u0627\u06cc \u062a\u0648\u0646\u06af\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u0627\u0633\u06a9\u0648\u062f\u0648\u06cc \u062a\u06cc\u0645\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u0644\u06cc\u0631\u0647\u0654 \u062a\u0631\u06a9\u06cc\u0647 (\u06f1\u06f9\u06f2\u06f2 \u062a\u0627 \u06f2\u06f0\u06f0\u06f5)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0644\u06cc\u0631\u0647\u0654 \u062a\u0631\u06a9\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u062a\u0631\u06cc\u0646\u06cc\u062f\u0627\u062f \u0648 \u062a\u0648\u0628\u0627\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u062c\u062f\u06cc\u062f \u062a\u0627\u06cc\u0648\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0634\u06cc\u0644\u06cc\u0646\u06af \u062a\u0627\u0646\u0632\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0647\u0631\u06cc\u0648\u0646\u06cc\u0627\u06cc \u0627\u0648\u06a9\u0631\u0627\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u0634\u06cc\u0644\u06cc\u0646\u06af \u0627\u0648\u06af\u0627\u0646\u062f\u0627 (\u06f1\u06f9\u06f6\u06f6 \u062a\u0627 \u06f1\u06f9\u06f8\u06f7)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0634\u06cc\u0644\u06cc\u0646\u06af \u0627\u0648\u06af\u0627\u0646\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0627\u0645\u0631\u06cc\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0627\u0645\u0631\u06cc\u06a9\u0627 (\u0631\u0648\u0632 \u0628\u0639\u062f)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0627\u0645\u0631\u06cc\u06a9\u0627 (\u0647\u0645\u0627\u0646 \u0631\u0648\u0632)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0627\u0648\u0631\u0648\u06af\u0648\u0626\u0647 (\u06f1\u06f9\u06f7\u06f5 \u062a\u0627 \u06f1\u06f9\u06f9\u06f3)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0627\u0648\u0631\u0648\u06af\u0648\u0626\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0633\u0648\u0645 \u0627\u0632\u0628\u06a9\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u0628\u0648\u0644\u06cc\u0648\u0627\u0631 \u0648\u0646\u0632\u0648\u0626\u0644\u0627 (\u06f1\u06f8\u06f7\u06f1 \u062a\u0627 \u06f2\u06f0\u06f0\u06f8)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0628\u0648\u0644\u06cc\u0648\u0627\u0631 \u0648\u0646\u0632\u0648\u0626\u0644\u0627 (\u06f2\u06f0\u06f0\u06f8 \u062a\u0627 \u06f2\u06f0\u06f1\u06f8)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0628\u0648\u0644\u06cc\u0648\u0627\u0631 \u0648\u0646\u0632\u0648\u0626\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u062f\u0627\u0646\u06af \u0648\u06cc\u062a\u0646\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0648\u0627\u062a\u0648\u06cc \u0648\u0627\u0646\u0648\u0648\u0627\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u062a\u0627\u0644\u0627\u06cc \u0633\u0627\u0645\u0648\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 CFA \u0645\u0631\u06a9\u0632 \u0627\u0641\u0631\u06cc\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u0646\u0642\u0631\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u0637\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0634\u0631\u0642 \u06a9\u0627\u0631\u0627\u0626\u06cc\u0628"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0637\u0644\u0627\u06cc \u0641\u0631\u0627\u0646\u0633\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 CFA \u063a\u0631\u0628 \u0627\u0641\u0631\u06cc\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u067e\u0627\u0644\u0627\u062f\u06cc\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0627\u0642\u06cc\u0627\u0646\u0648\u0633\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u067e\u0644\u0627\u062a\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u0627\u0631\u0632 \u0622\u0632\u0645\u0627\u06cc\u0634\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0627\u0631\u0632 \u0646\u0627\u0645\u0634\u062e\u0635"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u062f\u06cc\u0646\u0627\u0631 \u06cc\u0645\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u0631\u06cc\u0627\u0644 \u06cc\u0645\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0631\u0627\u0646\u062f \u0627\u0641\u0631\u06cc\u0642\u0627\u06cc \u062c\u0646\u0648\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u06a9\u0648\u0627\u0686\u0627\u06cc \u0632\u0627\u0645\u0628\u06cc\u0627 (\u06f1\u06f9\u06f6\u06f8 \u062a\u0627 \u06f2\u06f0\u06f1\u06f2)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u06a9\u0648\u0627\u0686\u0627\u06cc \u0632\u0627\u0645\u0628\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0632\u06cc\u0645\u0628\u0627\u0628\u0648\u0647 (\u06f1\u06f9\u06f8\u06f0 \u062a\u0627 \u06f2\u06f0\u06f0\u06f8)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0632\u06cc\u0645\u0628\u0627\u0628\u0648\u0647 (\u06f2\u06f0\u06f0\u06f9)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"\u062f\u0644\u0627\u0631 \u0632\u06cc\u0645\u0628\u0627\u0628\u0648\u0647 (\u06f2\u06f0\u06f0\u06f8)"_s)
		})
	}));
	return data;
}

CurrencyNames_fa::CurrencyNames_fa() {
}

$Class* CurrencyNames_fa::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fa, name, initialize, &_CurrencyNames_fa_ClassInfo_, allocate$CurrencyNames_fa);
	return class$;
}

$Class* CurrencyNames_fa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun