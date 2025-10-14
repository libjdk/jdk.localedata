#include <sun/util/resources/cldr/ext/CurrencyNames_lo.h>

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

$MethodInfo _CurrencyNames_lo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_lo::*)()>(&CurrencyNames_lo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_lo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lo_MethodInfo_
};

$Object* allocate$CurrencyNames_lo($Class* clazz) {
	return $of($alloc(CurrencyNames_lo));
}

void CurrencyNames_lo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lo::getContents() {
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
			$of("BYR"_s),
			$of("BYR"_s)
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
			$of(u"\u20ad"_s)
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
			$of("adp"_s),
			$of(u"\u0ec0\u0e9b\u0ec0\u0e8a\u0e95\u0eb2 \u0ead\u0eb1\u0e99\u0ec2\u0e94\u0ea5\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0eaa\u0eb0\u200b\u0eab\u0eb0\u200b\u0ea5\u0eb1\u0e94\u200b\u0ead\u0eb2\u200b\u0ea3\u0eb1\u0e9a\u200b\u0ead\u0eb2\u200b\u0ea1\u0eb4\u200b\u0ec0\u0ea3\u0e94 \u0ec0\u0e94\u0eb5\u200b\u0ec1\u0eae\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0ead\u0eb1\u0e9a\u0e81\u0eb2\u0e99\u0eb4 \u0ead\u0eb1\u0e9a\u0e81\u0eb2\u0e99\u0eb4\u0eaa\u0eb0\u0e96\u0eb2\u0e99 (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0ead\u0eb1\u0e9f\u200b\u0e81\u0eb1\u0e99 \u0ead\u0eb1\u0e9f\u200b\u0e81\u0eb2\u200b\u0e99\u0eb4"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0ead\u0eb1\u0ea5\u200b\u0e9a\u0eb2\u200b\u0e99\u0ebd\u0e99 \u0ec0\u0ea5\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0ead\u0eb2\u200b\u0ec0\u0ea1\u200b\u0e99\u0ebd\u0e99 \u0ec1\u0e94\u0ea3\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0ec0\u0e99\u200b\u0ec0\u0e97\u0eb5\u200b\u0ec1\u0ea5\u0e99 \u0ec1\u0ead\u0e99\u200b\u0e95\u0eb4\u200b\u0ea5\u0ebd\u0e99 \u0e81\u0eb4\u0ea7\u200b\u0ec0\u0e94\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0ec1\u0ead\u0e87\u200b\u0ec2\u0e81\u200b\u0ea5\u0eb1\u0e99 \u0e84\u0ea7\u0e99\u200b\u0e8a\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\u0e81\u0ea7\u0eb2\u0e99\u0e8a\u0eb2 \u0ec1\u0ead\u0e87\u0ec2\u0e81\u0ea5\u0eb2 (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\u0e81\u0ea7\u0eb2\u0e99\u0e8a\u0eb2 \u0ec1\u0ead\u0e87\u0ec2\u0e81\u0ea5\u0eb2 \u0ec3\u0edd\u0ec8 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\u0e81\u0ea7\u0eb2\u0e99\u0e8a\u0eb2\u0e81\u0e97\u0eb5\u0ec8\u0ec1\u0e81\u0ec9\u0ec4\u0e82\u0ec3\u0edd\u0ec8 \u0ec1\u0ead\u0e87\u0e81\u0eb9\u0ea5\u0eb2 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u0ead\u0ead\u0eaa\u0e95\u0ea3\u0eb2\u0e99 \u0ead\u0eb2\u0e81\u0e8a\u0eb1\u0e87\u0e95\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"\u0ec0\u0e9b\u0ec2\u0e8a\u0ec0\u0ea5 \u0ead\u0eb2\u0e81\u0e8a\u0eb1\u0e87\u0e95\u0eb4\u0e99 (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\u0ec0\u0e9b\u0ec2\u0e8a \u0ead\u0eb2\u0e81\u0e8a\u0eb1\u0e87\u0e95\u0eb4\u0e99 (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0ec0\u0e9b\u0ec2\u0e8a \u0ead\u0eb2\u0e81\u0e8a\u0eb1\u0e87\u0e95\u0eb4\u0e99 (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0ead\u0eb2\u200b\u0ec0\u0e88\u0e99\u200b\u0e97\u0eb4\u200b\u0e99\u0eb2 \u0ec0\u0e9b\u200b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0e8a\u0eb4\u0ea5\u0ea5\u0eb4\u0e87 \u0ead\u0ebb\u0e94\u0eaa\u0eb0\u0e95\u0eb2\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0ead\u0ead\u0eaa\u200b\u0ec0\u0e95\u0ea3\u200b\u0ea5\u0ebd\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0ead\u0eb0\u0ea3\u0eb9\u0ec1\u0e9a\u0e99 \u0e9f\u0ea5\u0ecd\u0ea3\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u0ea1\u0eb2\u0e99\u0eb1\u0e94 \u0ead\u0eb2\u0ec1\u0e8a\u0e81\u0e9a\u0eb2\u0e8d\u0e8a\u0eb2\u0e99 (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0ead\u0eb2\u200b\u0ec0\u0e8a\u0eb5\u200b\u0ec4\u0e9a\u200b\u0e88\u0eb2\u200b\u0e99\u0eb4 \u0ea1\u0eb2\u200b\u0e99\u0eb1\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0e9a\u0ead\u0eaa\u0ec0\u0e99\u0e8d \u0ec0\u0eae\u0eb5\u0ec0\u0e8a\u0ec2\u0e9a\u0ea7\u0eb2\u0ec0\u0e99\u0e8d (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0e9a\u0ead\u200b\u0eaa\u200b\u0ec0\u0e99\u0e8d-\u0ec0\u0eae\u0eb5\u200b\u0ec0\u0e8a\u200b\u0ec2\u0e81\u0ea7\u0eb4\u200b\u0e99\u0eb2 \u0e84\u0ead\u0e99\u200b\u0ec0\u0ea7\u0eb5\u0e94\u200b\u0e95\u0eb4\u200b\u0ec2\u0e9a \u0ea1\u0eb2\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2\u0ec3\u0edd\u0ec8 \u0e9a\u0ead\u0eaa\u0ec0\u0e99\u0e8d \u0ec0\u0eae\u0eb5\u0ec0\u0e8a\u0ec2\u0e9a\u0ea7\u0eb5\u0e99\u0eb2(1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0ec2\u0e94\u0ea5\u0ec8\u0eb2 \u0e9a\u0eb2\u0e9a\u0eb2\u0e94\u0ebd\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0e9a\u0eb1\u0e87\u200b\u0e84\u0ea5\u0eb2\u200b\u0ec0\u0e97\u0e94 \u0e95\u0eb2\u200b\u0e81\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0e9a\u0eb9\u0e99\u0e81\u0eb2\u0ea5\u0eb5 (\u0e9b\u0ec8\u0ebd\u0e99\u0ec1\u0e9b\u0e87\u0ec4\u0e94\u0ec9)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0e9a\u0eb9\u0e99\u0e81\u0eb2\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0e9a\u0eb9\u0e99\u0e81\u0eb2\u0ea5\u0eb5 (\u0e81\u0eb2\u0e99\u0ec0\u0e87\u0eb4\u0e99)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u0eae\u0eb2\u0e94\u0ec0\u0ea5\u0e9a \u0e9a\u0eb9\u0e99\u0e81\u0eb2\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"\u0ec0\u0ea5\u0e9a \u0eaa\u0eb1\u0e87\u0e84\u0ebb\u0ea1\u0e9a\u0eb9\u0e99\u0e81\u0eb2\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0e9a\u0eb1\u0e87\u200b\u0e81\u0eb2\u200b\u0ea3\u0ebd\u0e99 \u0ec0\u0ea5\u0e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"\u0ec0\u0ea5\u0e9a \u0e9a\u0eb9\u0e99\u0e81\u0eb2\u0ea5\u0eb5 (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u0e9a\u0eb2\u200b\u0ec4\u0ea3\u200b\u0e99\u0eb4 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0e9a\u0eb8\u200b\u0ea3\u0eb1\u0e99\u200b\u0e94\u0ebd\u0e99 \u0e9f\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2\u200b\u0ec0\u0e9a\u0eb5\u200b\u0ea1\u0eb4\u0ea7\u200b\u0e94\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0e9a\u0ea3\u0eb9\u200b\u0ec4\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0ec2\u0e9a\u200b\u0ea5\u0eb4\u200b\u0ea7\u0ebd\u0e99 \u0ec2\u0e9a\u200b\u0ea5\u0eb4\u200b\u0ec0\u0ea7\u0e8d\u200b\u0ec2\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"\u0ec2\u0ea5\u0ea5\u0eb4\u0ec0\u0ea7\u0e8d\u0ec2\u0e99 \u0ec2\u0ea5\u0ea5\u0eb4\u0ec0\u0ea7\u0e8d (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u0ec0\u0e9b\u0ec2\u0e8a\u0ec2\u0ea5\u0ea5\u0eb4\u0ec0\u0ea7\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u0ea1\u0eb0\u0e94\u0ead\u0e99 \u0ec2\u0ea5\u0ea5\u0eb4\u0ec0\u0ea7\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\u0e81\u0ea3\u0eb9\u0ec0\u0e8a\u0ec2\u0e94\u0e9a\u0eb2\u0e8a\u0eb4 \u0ec3\u0edd\u0ec8 (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\u0e81\u0ea3\u0eb9\u0e8a\u0eb2\u0ec2\u0e94\u0e9a\u0eb2\u0e8a\u0eb4\u0ea7 (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u0e81\u0ea3\u0eb9\u0ec0\u0e8a\u0ec2\u0ea3 \u0e9a\u0eb2\u0e8a\u0eb4 \u0e81\u0ea3\u0eb9\u0ec2\u0e8a \u0e9a\u0eb2\u0e8a\u0eb4\u0ea7 (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0e9a\u0ea3\u0eb2\u200b\u0e8a\u0eb4\u200b\u0ea5\u0ebd\u0e99 \u0ea3\u0ebd\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\u0e81\u0ea3\u0eb9\u0e8a\u0eb2\u0ec2\u0e94 \u0e9a\u0eb2\u0e8a\u0eb4\u0ea7 \u0ec3\u0edd\u0ec8 (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\u0e81\u0ea3\u0eb9\u0ec0\u0e8a\u0ec2\u0ea3 \u0e9a\u0eb2\u0e8a\u0eb4\u0ea7 (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"\u0e81\u0ea3\u0eb9\u0ec0\u0e8a\u0ec2\u0ea3 \u0e9a\u0eb2\u0e8a\u0eb4\u0ea7 (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0ec2\u0e94\u0ea5\u0ec8\u0eb2 \u0e9a\u0eb2\u0eae\u0eb2\u0ea1\u0ebd\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0e9e\u0eb9\u200b\u0e96\u0eb2\u0e99 \u0e87\u0eb8\u0e99\u0e94\u0ea3\u0eb1\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u0e88\u0eb2\u0e94 \u0e9e\u0eb0\u0ea1\u0ec9\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u0e9a\u0ead\u0e94\u200b\u0eaa\u0eb0\u200b\u0ea7\u0eb2\u200b\u0e99\u0eb2\u0e99 \u0e9e\u0eb9\u200b\u0ea5\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u0ea3\u0eb9\u0ec2\u0e9a \u0ec0\u0e9a\u0ea3\u0eb2\u0ea3\u0eb8\u0eaa \u0ec3\u0edd\u0ec8(1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0ec0\u0e9a\u200b\u0ea5\u0eb2\u200b\u0ea3\u0eb8\u200b\u0eaa\u200b\u0e8a\u0ebd\u0e99 \u0ea3\u0eb9\u200b\u0ec0\u0e9a\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0ec0\u0e9a\u200b\u0ea5\u0eb2\u200b\u0ea3\u0eb8\u200b\u0eaa\u200b\u0e8a\u0ebd\u0e99 \u0ea3\u0eb9\u200b\u0ec0\u0e9a\u0eb4\u0e99 (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2\u200b\u0ec0\u0e9a\u200b\u0ea5\u0eb5\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0ec2\u0e94\u0ea5\u0ec8\u0eb2\u0ec1\u0e84\u0e99\u0eb2\u0e94\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0e84\u0ead\u0e87\u200b\u0ec2\u0e81\u200b\u0ea5\u0eb5\u0eaa \u0e9f\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u0ec0\u0ead\u0eb5\u0ec2\u0ea3 WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0eaa\u0eb0\u200b\u0ea7\u0eb4\u200b\u0eaa \u0e9f\u200b\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"\u0ec0\u0ead\u0eaa\u0e81\u0eb9\u0ec2\u0e94 \u0e8a\u0eb4\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0e9a\u0eb1\u0e99\u0e8a\u0eb5 (UF) \u0e8a\u0eb4\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0e8a\u0eb4\u200b\u0ea5\u0ebd\u0e99 \u0ec0\u0e9b\u200b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u0ea2\u0ea7\u0e99\u0e88\u0eb5\u0e99 (\u0e99\u0ead\u0e81\u0e9b\u0eb0\u0ec0\u0e97\u0e94)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0e88\u0eb5\u0e99 \u0ea2\u0ea7\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0ec2\u0e84\u200b\u0ea5\u0ebb\u0ea1\u200b\u0e9a\u0ebd\u0e99 \u0ec0\u0e9b\u200b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0e84\u0ec8\u0eb2\u0e88\u0eb4\u0e87 \u0ec2\u0e84\u0ea5\u0eb1\u0ea1\u0ec0\u0e9a\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u0ec2\u0e84\u0eaa\u0e95\u0eb2 \u0ea3\u0eb4\u0e81\u0eb1\u0e99 \u0ec2\u0e84\u0ea5\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0ec0\u0e8a\u0eb5\u0ec0\u0e9a\u0e8d (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u0eae\u0eb2\u0e94\u0ec2\u0e81\u0ea3\u0eb9\u0e99\u0eb2 \u0ec0\u0e8a\u0eb1\u0e81\u0ec2\u0e81\u0eaa\u0eb0\u0ec2\u0ea5\u0ea7\u0eb1\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u0e84\u0eb4\u0ea7\u0ec1\u0e9a\u0e99 \u0e84\u0ead\u0e99\u0ec0\u0ea7\u0eb5\u0e94\u0e95\u0eb4\u0ec2\u0e9a \u0ec0\u0e9b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u0e84\u0eb4\u0ea7\u0ec1\u0e9a\u0e99 \u0ec0\u0e9b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0ec0\u0e84\u0e9a \u0ec0\u0ea7\u0eb5\u0e94\u200b\u0e94\u0eb5\u0e99 \u0ec0\u0ead\u200b\u0eaa\u200b\u0e84\u0eb9\u200b\u0ec2\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u0e9b\u0ead\u0e99 \u0ec4\u0e8a\u0e9b\u0ea3\u0eb1\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u0ec0\u0e8a\u0e81 \u0ec2\u0e84\u200b\u0ea3\u0eb9\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0ea1\u0eb2\u0e81 \u0ec0\u0ea2\u0e8d\u0ea5\u0eb0\u0ea1\u0eb1\u0e99 \u0e95\u0eb2\u0ec0\u0ea7\u0eb1\u0e99\u0ead\u0ead\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u0ea1\u0eb2\u0e81 \u0ec0\u0ea2\u0e8d\u0ea5\u0eb0\u0ea1\u0eb1\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u200b\u0e94\u0eb4\u200b\u0e9a\u0eb9\u200b\u0e88\u0ebd\u0e99 \u0e9f\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0ec1\u0e94\u0e99\u200b\u0e99\u0eb4\u200b\u0e8a \u0ec2\u0e84\u0ea3\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0ec2\u0e94\u200b\u0ea1\u0eb4\u200b\u0e99\u0eb4\u200b\u0e81\u0eb1\u0e99 \u0ec0\u0e9b\u200b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0ead\u0eb1\u0ea5\u200b\u0ec0\u0e88\u0eb5\u200b\u0ea3\u0ebd\u0e99 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"\u0e8a\u0eb9\u0ec0\u0e81 \u0ec0\u0ead\u0e81\u0eb2\u0ea7\u0eb2\u0e94\u0ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0e84\u0ec8\u0eb2\u0e84\u0ebb\u0e87\u0e97\u0eb5\u0ec8\u0e82\u0ead\u0e87\u0ec0\u0ead\u0e81\u0eb2\u0ea7\u0eb2\u0e94\u0ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u0e84\u0ea3\u0eb9\u0e99\u0ec0\u0ead\u0eaa \u0ec2\u0e95\u0ec0\u0e99\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0ead\u0eb5\u200b\u0ea2\u0eb4\u0e9a\u200b\u0e97\u0ebd\u0e99 \u0e9e\u0eb2\u0ea7\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0ead\u0eb4\u200b\u0ea3\u0eb4\u200b\u0e97\u0ea3\u0ebd\u0e99 \u0ec1\u0e99\u0e81\u200b\u0e9f\u200b\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0ec0\u0e9b\u0ec0\u0e8a\u0e95\u0eb2\u0eaa\u0eb0\u0ec0\u0e9b\u0eb1\u0e99 (\u0e9a\u0eb1\u0e99\u0e8a\u0eb5)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0ec0\u0e9b\u0ec0\u0e8a\u0e95\u0eb2\u0eaa\u0eb0\u0ec0\u0e9b\u0e99 (\u0e9b\u0ec8\u0ebd\u0e99\u0ec1\u0e9b\u0e87\u0ec4\u0e94\u0ec9)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0ec0\u0e9b\u0ec0\u0e8a\u0e95\u0eb2 \u0eaa\u0eb0\u0ec0\u0e9b\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0ec0\u0ead\u200b\u0e97\u0eb4\u200b\u0ec2\u0ead\u200b\u0e9b\u0ebd\u0e99 \u0ec0\u0e9a\u0eb5\u200b\u0ea3\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0ea2\u0eb9\u200b\u0ec2\u0ea3"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u0ea1\u0eb2\u0e81\u0e81\u0eb2 \u0e9f\u0eb4\u0e99\u0ec1\u0ea5\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0e9f\u0eb4\u200b\u0e88\u0ebd\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u0e9f\u0ead\u200b\u0ea5\u0ecc\u0e81\u200b\u0ec1\u0ea5\u0e99 \u0ec4\u0ead\u200b\u0ec1\u0ea5\u0e99\u200b\u0eaa\u0ecc \u0e9e\u0eb2\u0ea7\u200b\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0e9d\u0ea3\u0eb1\u0ec8\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0ead\u0eb1\u0e87\u0e81\u0eb4\u0e94 \u0e9b\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\u0e81\u0eb9\u0e9b\u0ead\u0e99 \u0ea5\u0eb2\u0ea3\u0eb4\u0e97 \u0e88\u0ecd\u0ec0\u0e88\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u0e88\u0ecd\u200b\u0e88\u0ebd\u0e99 \u0ea5\u0eb2\u200b\u0ea3\u0eb4"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u0ec0\u0e8a\u0e94\u0eb5 \u0e81\u0eb2\u0e99\u0eb2 (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0e81\u0eb2\u200b\u0e99\u0eb2\u200b\u0ead\u0ebd\u0e99 \u0ec0\u0e8a\u200b\u0e94\u0eb4"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u0e81\u0eb4\u0e9a\u200b\u0ea3\u0eb2\u200b\u0e97\u0eb2 \u0e9e\u0eb2\u200b\u0ea7\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u200b\u0ec1\u0e81\u0ea1\u200b\u0e9a\u0ebd\u0e99 \u0e94\u0eb2\u200b\u0ea5\u0eb2\u200b\u0e8a\u0eb4"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0e81\u0eb4\u200b\u0e99\u0ebd\u0e99 \u0e9f\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\u0ec4\u0e8a\u0ea5\u0eb4 \u0e81\u0eb5\u0e99\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\u0ec0\u0ead\u0eb1\u0e81\u0ec0\u0ea7\u0ec0\u0ea5 \u0ead\u0eb5\u0e84\u0ea7\u0eb2\u0e95\u0eb4\u0ea3\u0ebd\u0ea7 \u0e81\u0eb4\u0e99\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u0e94\u0eb2\u0e81\u0e8a\u0eb0\u0ea1\u0eb2 \u0ec0\u0e81\u0ea3\u0eb1\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0e81\u0ebb\u0ea7\u0ec0\u0e95\u0ea1\u0eb2\u0ea5\u0eb2\u0e99 \u0ec0\u0e84\u0eb1\u0e94\u0e8a\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\u0ec0\u0ead\u0eaa\u0e81\u0eb9\u0ec2\u0e94 \u0e81\u0eb5\u0e99\u0eb5\u0ec2\u0e9b\u0e95\u0eb9\u0ec0\u0e81\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u0ec0\u0e9b\u0ec2\u0e8a\u0e81\u0eb4\u0e99\u0eb5-\u0e9a\u0eb4\u0eaa\u0ec0\u0e8a\u0ebb\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0e81\u0eb2\u0e8d\u200b\u0ea2\u0eb2\u200b\u0e99\u0eb5\u200b\u0eaa \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0eae\u0ead\u0e87\u200b\u0e81\u0ebb\u0e87 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0eae\u0ead\u0e99\u0e94\u0eb9\u0ec1\u0ea3\u0e99 \u0ec0\u0ea5\u0ea1\u0e9e\u0eb4\u0ea3\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0ec2\u0e84\u0ea3\u0ec0\u0ead\u0ec0\u0e8a\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0ec2\u0e84\u0ea3\u200b\u0ec0\u0ead\u200b\u0e97\u0ebd\u0e99 \u0e84\u0eb9\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0ec4\u0eae\u200b\u0e95\u0ebd\u0e99 \u0e81\u0ebb\u0ea7\u200b\u0ec0\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0eae\u0eb1\u0e87\u200b\u0e81\u0eb2\u200b\u0ea3\u0ebd\u0e99 \u0e9f\u0ecd\u200b\u0ea3\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0ead\u0eb4\u0e99\u200b\u0ec2\u0e94\u200b\u0ec0\u0e99\u200b\u0e8a\u0ebd\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0e9b\u0ead\u0e99 \u0ec4\u0ead\u0ea3\u0eb4\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0e9b\u0ead\u0e99 \u0ead\u0eb5\u0eaa\u0eb0\u0ea5\u0eb2\u0ec0\u0ead\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0ead\u0eb4\u0eaa\u200b\u0ea3\u0eb2\u200b\u0ec0\u0ead\u0ea7\u200b\u0ea5\u0eb4 \u0e99\u0eb4\u0ea7 \u0ec0\u0e8a\u200b\u0ec0\u0e81\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0ead\u0eb4\u0e99\u200b\u0ec0\u0e94\u0e8d \u0ea3\u0eb9\u200b\u0e9b\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0ead\u0eb4\u200b\u0ea3\u0eb1\u0e81\u200b\u0e81\u0eb4 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0ead\u0eb4\u200b\u0ea3\u0eb2\u200b\u0e99\u0eb4 \u0ea3\u0ebd\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0ec4\u0ead\u200b\u0eaa\u0ecc\u200b\u0ec1\u0ea5\u0e99\u200b\u0e94\u0eb4\u0e81 \u0ec2\u0e84\u0ea3\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0ea5\u0eb4\u0ea3\u0eb2 \u0ead\u0eb5\u0e95\u0eb2\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u200b\u0e88\u0eb2\u200b\u0ec4\u0ea1\u200b\u0e81\u0eb1\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0e88\u0ecd\u200b\u0ec1\u0e94\u200b\u0e99\u0ebd\u0e99 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u0e8d\u0eb5\u0ec8\u200b\u0e9b\u0eb8\u0ec8\u0e99 \u0ec0\u0ea2\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0ec0\u0e84\u0e99\u200b\u0ea2\u0eb1\u0e99 \u0e8a\u0eb4\u0ea7\u200b\u0ea5\u0eb4\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u0e84\u200b\u0ea3\u0eb5\u200b\u0e81\u0eb4\u0eaa\u200b\u200b\u0e96\u0eb2\u200b\u0e99\u0eb4 \u0ec2\u0e8a\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0e81\u0eb3\u200b\u0e9b\u0eb9\u200b\u0ec0\u0e88\u0e8d \u0ea3\u0ebd\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0ec2\u0e84\u200b\u0ec2\u0ea1\u200b\u0ea3\u0ebd\u0e99 \u0e9f\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0ec0\u0e81\u0ebb\u0eb2\u200b\u0eab\u0ea5\u0eb5\u200b\u0ec0\u0edc\u0eb7\u0ead \u0ea7\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"\u0eae\u0eb2\u0ea7\u0eb2\u0e99 \u0ec0\u0e81\u0ebb\u0eb2\u0eab\u0ebc\u0eb5\u0ec0\u0e99\u0eb7\u0ec9"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"\u0ea7\u0ead\u0e99 \u0ec0\u0e81\u0ebb\u0eb2\u0eab\u0ebc\u0eb5\u0ec3\u0e95\u0ec9 (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0ec0\u0e81\u0ebb\u0eb2\u200b\u0eab\u0ea5\u0eb5\u0ec3\u0e95\u0ec9 \u0ea7\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0e84\u0eb9\u200b\u0ec0\u0ea7\u200b\u0e95\u0eb4 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u0ec0\u0e84\u200b\u0ec1\u0ea1\u0e99 \u0ec4\u0ead\u200b\u0ec1\u0ea5\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0e84\u0eb2\u200b\u0e8a\u0eb1\u0e81\u200b\u0eaa\u0eb0\u200b\u0e96\u0eb2\u200b\u0e99\u0eb4 \u0ec0\u0e95\u0eb1\u0e87\u200b\u0ec0\u0e88"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0ea5\u0eb2\u0ea7 \u0e81\u0eb5\u0e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0ec0\u0ea5\u200b\u0e9a\u0eb2\u200b\u0e99\u0eb5\u200b\u0eaa \u0e9e\u0eb2\u0ea7\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0eaa\u0eb5\u200b\u0ea5\u0eb1\u0e87\u200b\u0e81\u0eb2 \u0ea3\u0eb9\u200b\u0e9b\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0ea5\u0eb4\u200b\u0ec0\u0e9a\u0eb5\u200b\u0ea3\u0ebd\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u0ec2\u0ea5\u0e95\u0eb4 \u0ec0\u0ea5\u0ec2\u0e8a\u0ec2\u0e95"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u0ea5\u0eb4\u200b\u0e97\u0ebb\u0ea7\u200b\u0e99\u0ebd\u0e99 \u0ea5\u0eb4\u200b\u0e97\u0eb1\u200b\u0eaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u0e97\u0eb2\u0ec2\u0ea5\u0e99\u0eb1\u0eaa \u0ea5\u0eb4\u0e97\u0ebb\u0ea7\u0ec0\u0e99\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ea5\u0eb8\u0e81\u0e8a\u0eb3\u0e9a\u0ea7\u0e81 \u0e97\u0eb5\u0ec8\u0e9b\u0ec8\u0ebd\u0e99\u0ec1\u0e9b\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ea5\u0eb8\u0e81\u0e8a\u0eb3\u0e9a\u0ea7\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ea5\u0eb8\u0e81\u0e8a\u0eb3\u0e9a\u0ea7\u0e81 \u0e81\u0eb2\u0e99\u0ec0\u0e87\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u0ea5\u0eb1\u0e94\u200b\u0ea7\u0ebd\u0e99 \u0ea5\u0eb1\u0e94\u200b\u0eaa\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u0ea3\u0eb9\u0ec2\u0e9a \u0ea5\u0eb2\u0ea7\u0ebd\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0ea5\u0eb4\u0e9a\u200b\u0e9a\u0ebd\u0e99 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0ea1\u0ecd\u200b\u0ea3\u0eb1\u0ead\u0e81\u200b\u0ec1\u0e84\u0e99\u200b \u0ec0\u0e94\u0eb5\u200b\u0ec1\u0eae\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ec2\u0ea1\u0ea3\u0ead\u0e81\u0ec2\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ec2\u0ea1\u0e94\u0eb2\u0ec2\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"\u0e9a\u0eb1\u0e94\u0e9b\u0eb1\u0e99\u0eaa\u0ec8\u0ea7\u0e99 \u0ea1\u0ead\u0e87\u0ec2\u0e94\u0ea7\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u0ea1\u0ead\u0e99\u200b\u0ec2\u0e94\u200b\u0ec1\u0ea7\u0e99 \u0ec0\u0ea5\u200b\u0ead\u0eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0ea1\u0eb2\u200b\u0ea5\u0eb2\u200b\u0e81\u0eb2\u200b\u0e8a\u0eb5 \u0ead\u0eb2\u200b\u0ec0\u0ea3\u0e8d\u200b\u0ea3\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ea1\u0eb2\u0e94\u0eb2\u0e81\u0eb1\u0e94\u0eaa\u0eb0\u0e81\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u0ec1\u0ea1\u0eb1\u0e81\u200b\u0ec0\u0e8a\u200b\u0ec2\u0e94\u200b\u0e99\u0ebd\u0e99 \u0ec0\u0e94\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0ea1\u0eb2\u0e8a\u0eb5\u0ec2\u0e94\u0ec0\u0e99\u0e8d (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ea1\u0eb2\u0ea5\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u0ea1\u0ebd\u0e99\u200b\u0ea1\u0eb2 \u0e88\u0eca\u0eb2\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u0ea1\u0ead\u0e87\u200b\u0ec2\u0e81\u200b\u0ea5\u0ebd\u0e99 \u0e95\u0eb9\u0e81\u0ea3\u0eb4\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u0ea1\u0eb2\u200b\u0ec0\u0e81\u0ebb\u0ec9\u0eb2 \u0e9b\u0eb2\u200b\u200b\u0e95\u0eb2\u200b\u0e81\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u0ea1\u0ebb\u0ea7\u200b\u0ea3\u0eb4\u200b\u0e97\u0eb2\u200b\u0e99\u0ebd\u0e99 \u0ead\u0eb9\u200b\u0e81\u0eb4\u0ea7\u200b\u0ea2\u0eb2 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u0ea1\u0ebb\u0ea7\u200b\u0ea3\u0eb4\u200b\u0e97\u0eb2\u200b\u0e99\u0ebd\u0e99 \u0ead\u0eb9\u200b\u0e81\u0eb4\u0ea7\u200b\u0ea2\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u0ea5\u0eb4\u0ea3\u0eb2 \u0ea1\u0ead\u0e99\u0e95\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u0e9b\u0ead\u0e99 \u0ea1\u0ead\u0e99\u0e95\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u0ec0\u0ea1\u0ebb\u0eb2\u200b\u0ea3\u0eb4\u200b\u0e97\u0ebd\u0e99 \u0ea3\u0eb9\u200b\u0e9b\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u0ea1\u0eb1\u200b\u0ea5\u200b\u0e94\u0eb4\u200b\u0ea7\u0ebd\u0e99 \u0ea3\u0eb9\u200b\u0e9f\u0eb4\u200b\u0ea2\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u0ea1\u0eb2\u200b\u0ea5\u0eb2\u200b\u0ea7\u0ebd\u0e99 \u0e84\u0ea7\u0eb2\u200b\u0e8a\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u0ec0\u0ea1\u0eb1\u0e81\u0e8a\u0eb4\u0e81\u0eb1\u0e99 \u0ec0\u0e9b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0ec0\u0e87\u0eb4\u0e99 \u0ec0\u0e9b\u0ec2\u0e8a \u0ec1\u0ea1\u0eb1\u0e81\u0e8a\u0eb4\u0ec2\u0e81(1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0e81\u0eb2\u0e99\u0ea5\u0ebb\u0e87\u0e97\u0eb6\u0e99 \u0ec1\u0ea1\u0eb1\u0e81\u0e8a\u0eb4\u0ec2\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u0ea1\u0eb2\u200b\u0ec0\u0ea5\u200b\u0ec0\u0e8a\u0e8d \u0ea3\u0eb4\u0e87\u200b\u0e81\u0eb4\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u0ec0\u0ead\u0eaa\u0e81\u0eb9\u0ec2\u0e94 \u0ec2\u0ea1\u0e8a\u0eb3\u0e9a\u0eb4\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u0ec0\u0ea1\u0e95\u0eb4\u0e84\u0ecd \u0ec2\u0ea1\u0e8a\u0eb3\u0e9a\u0eb4\u0e81 (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0ec2\u0ea1\u200b\u0ec1\u0e8a\u0ea1\u200b\u0e9a\u0eb4\u200b\u0e81\u0eb1\u0e99 \u0ec0\u0ea1\u200b\u0e97\u0eb4\u200b\u0e84\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0e99\u0eb2\u200b\u0ea1\u0eb4\u200b\u0e9a\u0ebd\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0ec4\u0e99\u200b\u0ea3\u0eb2 \u200b\u0ec4\u0e99\u0ec0\u0e88\u0eb5\u200b\u0ea3\u0ebd\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u0e84\u0ecd\u0ec2\u0e94\u0e9a\u0eb2 \u0e99\u0eb4\u0e81\u0eb2\u0ea3\u0eb2\u0e81\u0ebb\u0ea7 (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u0e99\u0eb4\u0e81\u0eb2\u0ea3\u0eb2\u0e81\u0ea7\u0e99 \u0ec2\u0e84\u0ec2\u0e94\u0e9a\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u0e81\u0eb4\u0ea5\u0ec0\u0e94\u0eb5 \u0ec0\u0e99\u0ec0\u0e97\u0eb5\u0ec1\u0ea5\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0e99\u0ecd\u200b\u0ec0\u0ea7\u200b\u0e88\u0ebd\u0e99 \u200b\u0ec2\u0e84\u0ea3\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0ec0\u0e99\u200b\u0e9b\u0eb2\u0e99 \u0ea3\u0eb9\u200b\u0e9b\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0e99\u0eb4\u0ea7\u200b\u0e8a\u0eb5\u200b\u0ec1\u0ea5\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0ec2\u0ead\u200b\u0ea1\u0eb2\u200b\u0e99\u0eb4 \u0ea3\u0ebd\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u0e9e\u0eb2\u0e99\u0eb2\u0ea1\u0eb2\u0e99\u0ebd\u0e99 \u0e9a\u0ead\u0e99\u0e9a\u0ebb\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u0ead\u0eb4\u0e99\u0e95\u0eb4 \u0ec0\u0e9b\u0ea3\u0eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u0ec0\u0e9b\u200b\u0ea3\u0eb9\u200b\u0ea7\u0ebd\u0e99 \u0ec2\u0e8a\u200b\u0ea5\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u0ec2\u0e8a\u0e99 \u0ec0\u0e9b\u0ea3\u0eb9 (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u0e9b\u0eb2\u200b\u0e9b\u0ebb\u0ea7 \u0e99\u0eb4\u0ea7 \u0e81\u0eb4\u200b\u0e99\u0ebd\u0e99 \u0e81\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u0e9f\u0eb4\u200b\u0ea5\u0eb4\u0e9a\u200b\u0e9b\u0eb4\u0e99 \u0ec0\u0e9b\u200b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u0e9b\u0eb2\u200b\u0e81\u0eb4\u200b\u0eaa\u0e96\u0eb2\u0e99 \u0ea3\u0eb9\u200b\u0e9b\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u0ec2\u0e9b\u200b\u0ea5\u0eb4\u200b\u0e8a \u0e8a\u0eb0\u200b\u0ea5\u0ecd\u200b\u0e95\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\u0e8a\u0eb0\u0ea5\u0ead\u0eaa\u0e95\u0eb5 \u0ec2\u0e9b\u0ec1\u0ea5\u0e99 (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u0ec0\u0ead\u0eaa\u0e81\u0eb9\u0ec2\u0e94 \u0ec2\u0e9b\u0e95\u0eb9\u0ec0\u0e81\u0eaa"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u0e81\u0ea7\u0eb2\u0ea3\u0eb2\u0e99\u0eb5 \u0e9b\u0eb2\u0ea3\u0eb2\u0e81\u0ea7\u0eb2\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0e84\u0eb2\u200b\u0e95\u0eb2\u200b\u0ea3\u0eb4 \u0ea3\u0ebd\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u0e94\u0ead\u0e99\u0ea5\u0eb2 \u0ec2\u0ea3\u0e94\u0eb5\u0ec0\u0e8a\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u0ea5\u0eb4\u0ea7 \u0ec2\u0ea3\u0ea1\u0eb2\u0ec0\u0e99\u0e8d\u0ec0\u0e81\u0ebb\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0ec2\u0ea3\u200b\u0ea1\u0eb2\u200b\u0e99\u0ebd\u0e99 \u0ec0\u0ea5\u200b\u0ead\u0eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0ec0\u0e8a\u0eb5\u200b\u0e9a\u0ebd\u0e99 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0ea3\u0eb1\u0eaa\u200b\u0e8a\u0ebd\u0e99 \u0ea3\u0eb9\u200b\u0ec0\u0e9a\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u0ea3\u0eb9\u0ec2\u0e9a \u0ea3\u0eb1\u0e94\u0ec0\u0e8a\u0e8d (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0ea3\u0eb0\u200b\u0ea7\u0eb1\u0e99\u200b\u0e94\u0eb1\u0e99 \u0e9f\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0e8a\u0eb2\u200b\u0ead\u0eb9\u200b\u0e94\u0eb4 \u0ea3\u0eb4\u200b\u0ea2\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0ec2\u0e8a\u200b\u0ec2\u0ea5\u0ea1\u0ead\u0e99 \u0ec4\u0ead\u200b\u0ec1\u0ea5\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0ec0\u0e8a\u200b\u0ec0\u0e8a\u0ea7\u200b\u0ea5\u0ead\u0e8d\u200b\u0eaa\u0ecc \u0ea3\u0eb9\u200b\u0e9b\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0e8a\u0eb9\u0e94\u0eb2\u0e99\u0ec0\u0e81\u0ebb\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0e8a\u0eb9\u200b\u0e94\u0eb2\u0e99\u200b\u0e99\u0eb5\u200b\u0eaa \u0e9e\u0eb2\u0ea7\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u0e9b\u0ead\u0e99 \u0e8a\u0eb9\u0e94\u0eb2\u0e99\u0ec0\u0e81\u0ebb\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0eaa\u0eb0\u200b\u0ea7\u0eb5\u200b\u0e94\u0eb4\u200b\u0e8a \u0ec2\u0e84\u0ea3\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0eaa\u0eb4\u0e87\u200b\u0e81\u0eb0\u200b\u0ec2\u0e9b \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0ec0\u0e8a\u0e99 \u0ec0\u0eae\u200b\u0ec0\u0ea5\u200b\u0e99\u0eb2 \u0e9e\u0eb2\u0ea7\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u0ec2\u0e95\u0ea5\u0eb2 \u0eaa\u0eb0\u0ec2\u0ea5\u0ea7\u0eb4\u0ec0\u0e99\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u0e84\u0eb9\u0ec2\u0ea3\u0e99\u0eb2 \u0eaa\u0eb0\u0ec2\u0ea5\u0ea7\u0eb1\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0ec0\u0e8a\u0e8d\u200b\u0e99\u0eb2 \u200b\u0ec0\u0ea5\u0ec2\u0ead\u200b\u0e99\u0ebd\u0e99 \u0ec0\u0ea5\u200b\u0ec2\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0ec2\u0e8a\u200b\u0ea1\u0eb2\u200b\u0ea5\u0eb4 \u0e8a\u0eb4\u0ea7\u200b\u0ea5\u0eb4\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0e8a\u0eb9\u200b\u0ea3\u0eb4\u200b\u0e99\u0eb2\u200b\u0ea1\u0eb5\u200b\u0eaa \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u0e81\u0eb4\u0ea5\u0ec0\u0e94\u0eb5 \u0e8a\u0eb9\u0ea3\u0eb4\u0e99\u0eb2\u0ec0\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u0ec0\u0e8a\u0ebb\u0eb2\u200b\u0e97\u0ecc \u0e8a\u0eb9\u200b\u0e94\u0eb2\u0e99\u200b\u0e99\u0eb5\u200b\u0eaa \u0e9e\u0eb2\u0ea7\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u0ec0\u0e8a\u0ebb\u0eb2 \u0ec2\u0e97\u200b\u0ec0\u0ea1 \u0ec1\u0ead\u0e99 \u0e9e\u200b\u0ea3\u0eb4\u0e99\u200b\u0e8a\u0eb4\u200b\u0e9b\u0eb5 \u0ec2\u0e94\u0e9a\u0ea3\u0eb2 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0ec0\u0e8a\u0ebb\u0eb2 \u0ec2\u0e97\u200b\u0ec0\u0ea1 \u0ec1\u0ead\u0e99 \u0e9e\u200b\u0ea3\u0eb4\u0e99\u200b\u0e8a\u0eb4\u200b\u0e9b\u0eb5 \u0ec2\u0e94\u0e9a\u0ea3\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0ea3\u0eb9\u0ec2\u0e9a \u0ec2\u0e8a\u0ea7\u0ebd\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u0ec2\u0e81\u0ea5\u0ead\u0e87 \u0ec0\u0ead\u0e81\u0eb2\u0ea7\u0eb2\u0e94\u0ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0e8a\u0eb5\u200b\u0ea3\u0ebd\u0e99 \u0e9e\u0eb2\u0ea7\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0eaa\u0eb0\u200b\u0ea7\u0eb2\u200b\u0e8a\u0eb4 \u0ea5\u0eb4\u200b\u0ea5\u0eb1\u0e99\u200b\u0e81\u0eb4\u200b\u0e99\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0ec4\u0e97 \u0e9a\u0eb2\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u0ea3\u0eb9\u0ec2\u0e9a \u0e95\u0eb1\u0e88\u0eb5\u0e81\u0eb4\u0eaa\u0e96\u0eb2\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0e97\u0eb2\u200b\u0e88\u0eb4\u200b\u0e81\u0eb4\u200b\u200b\u0e96\u0eb2\u200b\u0e99\u0eb4 \u0ec2\u0e8a\u200b\u0ec2\u0ea1\u200b\u0e99\u0eb4"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u0ea1\u0eb2\u0e99\u0eb1\u0e94 \u0e95\u0ea7\u0e81\u0ec0\u0ea1\u0e99\u0eb4\u0eaa\u0e96\u0eb2\u0e99 (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u0ec0\u0e95\u0eb5\u0e81\u200b\u0ec0\u0ea1\u200b\u0e99\u0eb4\u200b\u0eaa\u200b\u0e96\u0eb2\u200b\u0e99\u0eb4 \u0ea1\u0eb2\u200b\u0e99\u0eb1\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u0e95\u0eb9\u200b\u0e99\u0eb4\u200b\u0e8a\u0ebd\u0e99 \u0e94\u0eb4\u200b\u0e99\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u0e95\u0ead\u0e87\u200b\u0e81\u0eb1\u0e99 \u0e9b\u0eb2\u200b\u0ead\u0eb1\u0e87\u200b\u0e81\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u0ec0\u0ead\u0eaa\u0e81\u0eb9\u0ec2\u0e94 \u0e95\u0eb5\u0ea1\u0ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u0ea5\u0eb5\u0e95\u0eb2 \u0e95\u0eb9\u0ea3\u0eb2\u0e81\u0eb5\u0ec0\u0e81\u0ebb\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0ec0\u0e95\u0eb5\u200b\u0e81\u0eb4\u200b\u0e8a \u0ea5\u0eb4\u200b\u0ea3\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0e97\u200b\u0ea3\u0eb4\u200b\u0e99\u0eb4\u200b\u0ec1\u0e94\u0e94 & \u0ec2\u0e97\u200b\u0e9a\u0eb2\u200b\u0ec2\u0e81 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0e99\u0eb4\u0ea7 \u0ec4\u0e95\u0ec9\u200b\u0eab\u0ea7\u0eb1\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0e97\u0eb2\u0e99\u200b\u0e8a\u0eb2\u200b\u0e99\u0ebd\u0e99 \u0e8a\u0eb4\u0ea7\u200b\u0ea5\u0eb4\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0ea2\u0eb9\u200b\u0ec0\u0e84\u0ea3\u200b\u0e99\u0ebd\u0e99 \u0eae\u0eb0\u200b\u0ea3\u0eb5\u0e9a\u200b\u0ec0\u0e99\u0e8d"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\u0e84\u0eb2\u0ec2\u0e9a\u0ea7\u0eb2\u0ec0\u0e99\u0e94 \u0ead\u0eb9\u0ec1\u0e81\u0ea3\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u0e8a\u0eb4\u0e99\u0ea5\u0eb4\u0e87 \u0ead\u0eb9\u0e81\u0eb1\u0e99\u0e94\u0eb2 (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0ead\u0eb9\u200b\u0e81\u0eb1\u0e99\u200b\u0e94\u0eb1\u0e99 \u0e8a\u0eb4\u0ea7\u200b\u0ea5\u0eb4\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u200b\u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2\u200b\u0eaa\u0eb0\u200b\u0eab\u0eb0\u200b\u0ea5\u0eb1\u0e94\u0eaf"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u0e94\u0ead\u0e99\u0ea5\u0eb2\u0eaa\u0eb0\u0eab\u0eb0\u0ea5\u0eb1\u0e94 (\u0ea1\u0eb7\u0ec9\u0e96\u0eb1\u0e94\u0ec4\u0e9b)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u0e94\u0ead\u0e99\u0ea5\u0eb2\u0eaa\u0eb0\u0eab\u0eb0\u0ea5\u0eb1\u0e94 (\u0ea1\u0eb7\u0ec9\u0e94\u0ebd\u0ea7\u0e81\u0eb1\u0e99)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\u0ec0\u0e9b\u0ec2\u0e8a\u0ead\u0eb9\u0ea3\u0eb8\u0e81\u0ea7\u0e8d (\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0ead\u0eb4\u0e99\u0ec0\u0e94\u0eb1\u0e81)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u0ec0\u0e9b\u0ec2\u0e8a \u0ead\u0eb9\u0ea3\u0eb8\u0e81\u0ea7\u0e8d (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0ead\u0eb9\u200b\u0ea3\u0eb8\u200b\u0e81\u0ebb\u0ea7\u200b\u0ea2\u0eb2\u0e99 \u0ec0\u0e9b\u200b\u0ec2\u0e8a"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0ead\u0eb8\u0eaa\u0ec0\u0e9a\u0e81\u0eb4\u0eaa\u0e96\u0eb2\u0e99\u0eb4 \u0ec2\u0e8a\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u0ec2\u0e9a\u0ea5\u0eb5\u0ea7\u0eb2 \u0ec0\u0ea7\u0ec0\u0e99\u0e8a\u0eb9\u0ec0\u0ead\u0ea5\u0eb2 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0ec0\u0ea7\u200b\u0ec0\u0e99\u200b\u0e8a\u0eb9\u200b\u0ec0\u0ead\u200b\u0ea5\u0eb1\u0e99 \u0ec2\u0e9a\u200b\u0ea5\u0eb4\u200b\u0ea7\u0eb2 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0ec0\u0ea7\u200b\u0ec0\u0e99\u200b\u0e8a\u0eb9\u200b\u0ec0\u0ead\u200b\u0ea5\u0eb1\u0e99 \u0ec2\u0e9a\u200b\u0ea5\u0eb4\u200b\u0ea7\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0eab\u0ea7\u0ebd\u0e94\u200b\u0e99\u0eb2\u0ea1 \u0e94\u0ebb\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"\u0e94\u0ebb\u0e87 \u0eab\u0ea7\u0ebd\u0e94\u0e99\u0eb2\u0ea1 (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u200b\u0ea7\u0eb2\u200b\u0e99\u0ebb\u0ea7\u200b\u0e95\u0eb9 \u0ea7\u0eb2\u200b\u0e95\u0eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0e8a\u0eb2\u200b\u0ec2\u0ea1\u0e99 \u0e97\u0eb2\u200b\u0ea5\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0eaa\u0eb2\u0e97\u0eb2\u0ea5\u0eb0\u0e99\u0eb0\u0ea5\u0eb1\u0e94\u0ead\u0eb2\u0e9f\u0ea3\u0eb4\u0e81\u0eb2\u0e81\u0eb2\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u0ec0\u0e87\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u0e84\u0eb3"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0e84\u0ead\u0ea1\u0ec2\u0e9b\u0e8a\u0eb4\u0e94 \u0ec0\u0ead\u0eb5\u0ea3\u0ebb\u0e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0ec2\u0ea1\u0e99\u0eb5\u0ec1\u0e97\u0ea3\u0eb5 \u0ec0\u0ead\u0eb5\u0ea3\u0ebb\u0e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0e9a\u0eb1\u0e99\u0e8a\u0eb5\u0ec0\u0ead\u0eb5\u0ea3\u0ebb\u0e9a (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0e9a\u0eb1\u0e99\u0e8a\u0eb5\u0ec0\u0ead\u0eb5\u0ea3\u0ebb\u0e9a (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0ead\u0eb5\u200b\u0eaa \u0e84\u0eb2\u200b\u0ea3\u0eb4\u200b\u0e9a\u0ebd\u0e99 \u0ec2\u0e94\u200b\u0ea5\u0ec8\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u0eaa\u0eb4\u0e94\u0e97\u0eb4\u0e96\u0ead\u0e99\u0ec0\u0e87\u0eb4\u0e99\u0e9e\u0eb4\u0ec0\u0eaa\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\u0eab\u0ebb\u0ea7\u0edc\u0ec8\u0ea7\u0e8d\u0eaa\u0eb0\u0e81\u0eb8\u0e99\u0ec0\u0e87\u0eb4\u0e99 \u0ec0\u0ead\u0eb5\u0ea3\u0ebb\u0e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0e84\u0eb3\u0e9d\u0ea3\u0eb1\u0ec8\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u0e9f\u0ea3\u0eb1\u0e87 \u0ea2\u0eb9\u0ec4\u0ead\u0e8a\u0eb5 \u0e9d\u0ea3\u0eb1\u0ec8\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0e9f\u0eb1\u0e87\u0ec0\u0e8a\u0e9f\u0eb2\u0e99 \u0ead\u0eb2\u0e9f\u0ea3\u0eb4\u0e81\u0eb2\u0e95\u0eb2\u0ec0\u0ea7\u0eb1\u0e99\u0e95\u0ebb\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u0ec1\u0e9e\u0ec0\u0ea5\u0e94\u0ebd\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u0e8a\u0eb5\u200b\u0ec0\u0ead\u0eb1\u0e9a\u200b\u0e9e\u0eb5 \u0e9f\u0ea3\u0eb1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u0ec1\u0e9e\u0ea5\u0eb1\u0e94\u0e95\u0eb4\u0e99\u0eb3"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"\u0e81\u0ead\u0e87\u0e97\u0eb6\u0e99\u0ec4\u0ea3\u0ec0\u0e99\u0eb1\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u0ea5\u0eb0\u0eab\u0eb1\u0e94\u0e97\u0ebb\u0e94\u0eaa\u0ead\u0e9a\u0eaa\u0eb0\u0e81\u0eb8\u0e99\u0ec0\u0e87\u0eb4\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0eaa\u0eb0\u0e81\u0eb8\u0e99\u0ec0\u0e87\u0eb4\u0e99\u0e97\u0eb5\u0ec8\u0e9a\u0ecd\u0ec8\u0eae\u0eb9\u0ec9\u0e88\u0eb1\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0ec0\u0ea2\u0ec0\u0ea1\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u0ec0\u0ea2\u200b\u0ec0\u0ea1\u200b\u0e99\u0eb4 \u0ea3\u0ebd\u0ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u0eae\u0eb2\u0e94\u0e94\u0eb5\u0e99\u0eb2 \u0ea2\u0eb9\u0ec2\u0e81\u0eaa\u0eb0\u0ea5\u0eb2\u0ea7\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2\u0ec3\u0edd\u0ec8 \u0ea2\u0eb9\u0ec2\u0e81\u0eaa\u0eb0\u0ea5\u0eb2\u0ea7\u0eb5 (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0e97\u0eb5\u0ec8\u0e9b\u0ec8\u0ebd\u0e99\u0eaa\u0eb0\u0e9e\u0eb2\u0e9a \u0ea2\u0eb9\u0ec2\u0e81\u0eaa\u0eb0\u0ea5\u0eb2\u0ea7\u0eb5 (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"\u0e94\u0eb5\u0e99\u0eb2 \u0e9b\u0eb0\u0e95\u0eb4\u0eae\u0eb9\u0e9a \u0ea2\u0eb9\u0ec2\u0e81\u0eaa\u0eb0\u0ea5\u0eb2\u0ea7\u0eb5 (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"\u0ec1\u0ea3\u0e99 \u0ead\u0eb2\u0e9f\u0ea3\u0eb4\u0e81\u0eb2\u0ec3\u0e95\u0ec9 (\u0e81\u0eb2\u0e99\u0ec0\u0e87\u0eb4\u0e99)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0ec0\u0e8a\u0ebb\u0eb2\u0e97\u0ecc \u0ead\u0eb2\u200b\u0e9f\u0ea3\u0eb4\u200b\u0e81\u0eb1\u0e99 \u0ec1\u0ea3\u0e99\u0e94\u0ecc"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u0e84\u0ea7\u0eb2\u0e8a\u0eb2 \u0e8a\u0eb1\u0ea1\u0ec0\u0e9a\u0e8d (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u0ec1\u0e8a\u0ea1\u200b\u0e9a\u0ebd\u0e99 \u0e84\u0ea7\u0eb2\u200b\u0e8a\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u0ec1\u0e8a \u0e84\u0ead\u0e87\u0ec2\u0e81\u0ec3\u0edd\u0ec8"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u0ec1\u0e8a\u0e84\u0ead\u0e87\u0ec2\u0e81"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u0e94\u0ead\u0e99\u0ea5\u0eb2 \u0e8a\u0eb4\u0ea1\u0e9a\u0eb1\u0e9a\u0ec0\u0ea7 (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u0e94\u0ead\u0e99\u0ea5\u0eb2 \u0e8a\u0eb4\u0ea1\u0e9a\u0eb1\u0e9a\u0ec0\u0ea7 (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"\u0e94\u0ead\u0e99\u0ea5\u0eb2 \u0e8a\u0eb4\u0ea1\u0e9a\u0eb1\u0e9a\u0ec0\u0ea7 (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_lo::CurrencyNames_lo() {
}

$Class* CurrencyNames_lo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lo, name, initialize, &_CurrencyNames_lo_ClassInfo_, allocate$CurrencyNames_lo);
	return class$;
}

$Class* CurrencyNames_lo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun