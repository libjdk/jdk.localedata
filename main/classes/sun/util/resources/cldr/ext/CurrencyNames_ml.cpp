#include <sun/util/resources/cldr/ext/CurrencyNames_ml.h>

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

$MethodInfo _CurrencyNames_ml_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ml::*)()>(&CurrencyNames_ml::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ml_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ml",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ml_MethodInfo_
};

$Object* allocate$CurrencyNames_ml($Class* clazz) {
	return $of($alloc(CurrencyNames_ml));
}

void CurrencyNames_ml::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ml::getContents() {
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
			$of("USD"_s),
			$of("$"_s)
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
			$of(u"\u0d05\u0d7b\u0d21\u0d4b\u0d31\u0d7b \u0d2a\u0d46\u0d38\u0d46\u0d2f\u0d4d\u0d31\u0d4d\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0d2f\u0d41\u0d23\u0d48\u0d31\u0d4d\u0d31\u0d21\u0d4d \u0d05\u0d31\u0d2c\u0d4d \u0d0e\u0d2e\u0d3f\u0d31\u0d47\u0d31\u0d4d\u0d31\u0d4d\u0d38\u0d4d \u0d26\u0d3f\u0d7c\u0d39\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0d05\u0d2b\u0d4d\u0d18\u0d3e\u0d28\u0d3f (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0d05\u0d2b\u0d4d\u200c\u0d17\u0d3e\u0d7b \u0d05\u0d2b\u0d4d\u200c\u200c\u0d17\u0d3e\u0d28\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0d05\u0d7d\u0d2c\u0d47\u0d28\u0d3f\u0d2f\u0d7b \u0d32\u0d46\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0d05\u0d7c\u0d2e\u0d47\u0d28\u0d3f\u0d2f\u0d7b \u0d21\u0d4d\u0d30\u0d3e\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0d28\u0d46\u0d24\u0d7c\u0d32\u0d3e\u0d7b\u0d21\u0d4d\u200c\u0d38\u0d4d \u0d06\u0d28\u0d4d\u0d31\u0d3f\u0d32\u0d7b \u0d17\u0d3f\u0d7d\u0d21\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0d05\u0d02\u0d17\u0d4b\u0d33\u0d7b \u200d\u0d15\u0d4d\u0d35\u0d3e\u0d7b\u0d38"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\u0d05\u0d02\u0d17\u0d4b\u0d33\u0d7b \u200d\u0d15\u0d4d\u0d35\u0d3e\u0d7b\u0d38 (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\u0d05\u0d02\u0d17\u0d4b\u0d33\u0d7b \u200d\u0d28\u0d4d\u0d2f\u0d42 \u0d15\u0d4d\u0d35\u0d3e\u0d7b\u0d38 (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\u0d05\u0d02\u0d17\u0d4b\u0d33\u0d7b \u200d\u0d15\u0d4d\u0d35\u0d3e\u0d7b\u0d38 \u0d31\u0d3f\u0d2f\u0d3e\u0d1c\u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d3e\u0d21\u0d4b (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u0d05\u0d7c\u0d1c\u0d7b\u0d31\u0d40\u0d7b \u0d13\u0d38\u0d4d\u0d1f\u0d4d\u0d30\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0d05\u0d7c\u0d1c\u0d7b\u0d31\u0d40\u0d7b \u0d2a\u0d46\u0d2f\u0d4d\u0d38\u0d4b (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0d05\u0d7c\u0d1c\u0d7b\u0d31\u0d40\u0d7b \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0d13\u0d38\u0d4d\u0d1f\u0d4d\u0d30\u0d47\u0d32\u0d3f\u0d2f\u0d7b \u0d37\u0d3f\u0d32\u0d4d\u0d32\u0d3f\u0d02\u0d17\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0d13\u0d38\u0d4d\u0d1f\u0d4d\u0d30\u0d47\u0d32\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0d05\u0d31\u0d42\u0d2c\u0d7b \u0d2b\u0d4d\u0d32\u0d4b\u0d31\u0d3f\u0d7b"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u0d05\u0d38\u0d7c\u0d2c\u0d2f\u0d4d\u0d1c\u0d3e\u0d28\u0d3f\u0d2f\u0d7b \u0d2e\u0d28\u0d24\u0d4d (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0d05\u0d38\u0d7c\u0d2c\u0d48\u0d1c\u0d3e\u0d28\u0d3f \u0d2e\u0d28\u0d24\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u0d2c\u0d4b\u0d38\u0d4d\u0d28\u0d3f\u0d2f-\u0d39\u0d46\u0d7c\u0d38\u0d17\u0d4b\u0d35\u0d3f\u0d28 \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0d2c\u0d4b\u0d38\u0d4d\u200c\u0d28\u0d3f\u0d2f-\u0d39\u0d46\u0d7c\u0d38\u0d17\u0d4b\u0d35\u0d3f\u0d28 \u0d15\u0d7a\u0d35\u0d47\u0d7c\u0d1f\u0d4d\u0d1f\u0d2c\u0d3f\u0d7e \u0d2e\u0d3e\u0d7c\u0d15\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0d2c\u0d3e\u0d7c\u0d2c\u0d47\u0d21\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0d2c\u0d02\u0d17\u0d4d\u0d32\u0d3e\u0d26\u0d47\u0d36\u0d3f \u0d1f\u0d3e\u0d15\u0d4d\u0d15"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u0d2c\u0d46\u0d7d\u0d1c\u0d3f\u0d2f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d (\u0d15\u0d48\u0d2e\u0d3e\u0d31\u0d4d\u0d31\u0d02 \u0d1a\u0d46\u0d2f\u0d4d\u0d2f\u0d3e\u0d35\u0d41\u0d28\u0d4d\u0d28\u0d24\u0d4d)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u0d2c\u0d46\u0d7d\u0d1c\u0d3f\u0d2f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u0d2c\u0d7d\u0d1c\u0d3f\u0d2f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u0d2c\u0d7e\u0d17\u0d47\u0d31\u0d3f\u0d2f\u0d7b \u0d39\u0d3e\u0d7c\u0d21\u0d4d \u0d32\u0d46\u0d35\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0d2c\u0d7e\u0d17\u0d47\u0d31\u0d3f\u0d2f\u0d7b \u0d32\u0d46\u0d35\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u0d2c\u0d39\u0d4d\u0d31\u0d48\u0d28\u0d3f \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0d2c\u0d31\u0d41\u0d23\u0d4d\u0d1f\u0d3f\u0d2f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0d2c\u0d46\u0d7c\u0d2e\u0d41\u0d21\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d42\u0d23\u0d48 \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0d2c\u0d4a\u0d33\u0d40\u0d35\u0d3f\u0d2f\u0d7b \u0d2c\u0d4a\u0d33\u0d3f\u0d35\u0d3f\u0d2f\u0d3e\u0d28\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u0d2c\u0d4a\u0d33\u0d40\u0d35\u0d3f\u0d2f\u0d7b \u0d2a\u0d46\u0d2f\u0d4d\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u0d2c\u0d4a\u0d33\u0d40\u0d35\u0d3f\u0d2f\u0d7b \u0d0e\u0d02\u0d35\u0d3f\u0d21\u0d4b\u0d7e"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d38\u0d40\u0d32\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d30\u0d41\u0d38\u0d46\u0d2f\u0d4d\u0d31\u0d4b \u0d28\u0d4b\u0d35\u0d4b (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d38\u0d40\u0d32\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d30\u0d41\u0d38\u0d3e\u0d21\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d38\u0d40\u0d32\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d30\u0d41\u0d38\u0d46\u0d2f\u0d4d\u0d31\u0d4b (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d38\u0d40\u0d32\u0d3f\u0d2f\u0d7b \u0d31\u0d3f\u0d2f\u0d3e\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d38\u0d40\u0d32\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d30\u0d41\u0d38\u0d3e\u0d21\u0d4b \u0d28\u0d4b\u0d35\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d38\u0d40\u0d32\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d30\u0d41\u0d38\u0d46\u0d2f\u0d4d\u0d31\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0d2c\u0d39\u0d3e\u0d2e\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0d2d\u0d42\u0d1f\u0d4d\u0d1f\u0d3e\u0d28\u0d40\u0d38\u0d4d \u0d17\u0d7e\u0d1f\u0d4d\u0d30\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u0d2c\u0d7c\u0d2e\u0d40\u0d38\u0d4d \u0d1a\u0d3e\u0d31\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u0d2c\u0d4b\u0d1f\u0d4d\u200c\u0d38\u0d4d\u0d35\u0d3e\u0d28\u0d7b \u0d2a\u0d4d\u0d2f\u0d41\u0d32"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u0d2c\u0d46\u0d32\u0d3e\u0d31\u0d37\u0d4d\u0d2f\u0d7b \u0d28\u0d4d\u0d2f\u0d42 \u0d31\u0d42\u0d2c\u0d3f\u0d7e (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0d2c\u0d46\u0d32\u0d3e\u0d31\u0d41\u0d37\u0d4d\u0d2f\u0d7b \u0d31\u0d42\u0d2c\u0d3f\u0d7e"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0d2c\u0d46\u0d32\u0d3e\u0d31\u0d41\u0d37\u0d4d\u0d2f\u0d7b \u0d31\u0d42\u0d2c\u0d3f\u0d7e (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0d2c\u0d46\u0d32\u0d40\u0d38\u0d4d \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0d15\u0d28\u0d47\u0d21\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0d15\u0d4b\u0d19\u0d4d\u0d15\u0d33\u0d40\u0d38\u0d4d \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"WIR \u0d2f\u0d42\u0d31\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0d38\u0d4d\u0d35\u0d3f\u0d38\u0d4d \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u0d1a\u0d3f\u0d32\u0d3f\u0d2f\u0d7b \u0d2f\u0d42\u0d23\u0d3f\u0d21\u0d3e\u0d21\u0d4d\u0d38\u0d4d \u0d21\u0d3f \u0d2b\u0d4b\u0d2e\u0d46\u0d7b\u0d31\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0d1a\u0d3f\u0d32\u0d3f\u0d2f\u0d7b \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u0d1a\u0d48\u0d28\u0d40\u0d38\u0d4d \u0d2f\u0d41\u0d35\u0d3e\u0d7b (\u0d13\u0d2b\u0d4d\u200c\u0d37\u0d4b\u0d7c)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0d1a\u0d48\u0d28\u0d40\u0d38\u0d4d \u0d2f\u0d41\u0d35\u0d3e\u0d7b"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0d15\u0d4a\u0d33\u0d02\u0d2c\u0d3f\u0d2f\u0d7b \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\u0d2f\u0d42\u0d23\u0d3f\u0d21\u0d3e\u0d21\u0d4d \u0d21\u0d3f \u0d35\u0d3e\u0d32\u0d7c \u0d31\u0d3f\u0d2f\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u0d15\u0d4b\u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d3e \u0d31\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d15\u0d4b\u0d33\u0d7b"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u0d2a\u0d4d\u0d30\u0d3e\u0d1a\u0d40\u0d28 \u0d38\u0d46\u0d7c\u0d2c\u0d3f\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u0d1a\u0d46\u0d15\u0d4d\u0d15\u0d4b\u0d38\u0d4d\u0d32\u0d4a\u0d35\u0d3e\u0d15\u0d4d\u0d15\u0d4d \u0d39\u0d3e\u0d7c\u0d21\u0d4d \u0d15\u0d4a\u0d30\u0d42\u0d28"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u0d15\u0d4d\u0d2f\u0d42\u0d2c\u0d7b \u0d15\u0d7a\u0d35\u0d47\u0d7c\u0d1f\u0d4d\u0d1f\u0d2c\u0d3f\u0d7e \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u0d15\u0d4d\u0d2f\u0d42\u0d2c\u0d7b \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0d15\u0d47\u0d2a\u0d4d \u0d35\u0d46\u0d7c\u0d26\u0d3f\u0d2f\u0d7b \u0d0e\u0d38\u0d4d\u200c\u0d15\u0d4d\u0d2f\u0d41\u0d21\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u0d38\u0d48\u0d2a\u0d4d\u0d30\u0d38\u0d4d \u0d2a\u0d4c\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u0d1a\u0d46\u0d15\u0d4d\u0d15\u0d4d \u0d31\u0d3f\u0d2a\u0d4d\u0d2a\u0d2c\u0d4d\u0d32\u0d3f\u0d15\u0d4d \u0d15\u0d4a\u0d30\u0d41\u0d23"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0d15\u0d3f\u0d34\u0d15\u0d4d\u0d15\u0d7b \u0d1c\u0d7c\u0d2e\u0d7b \u0d13\u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d4d\u0d2e\u0d3e\u0d7c\u0d15\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u0d1c\u0d7c\u0d2e\u0d7b \u0d2e\u0d3e\u0d7c\u0d15\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u0d26\u0d3f\u0d1c\u0d3f\u0d2c\u0d57\u0d1f\u0d4d\u0d1f\u0d3f\u0d2f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0d21\u0d3e\u0d28\u0d3f\u0d37\u0d4d \u0d15\u0d4d\u0d30\u0d4b\u0d23\u0d46"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0d21\u0d4a\u0d2e\u0d3f\u0d28\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0d05\u0d7e\u0d1c\u0d40\u0d30\u0d3f\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"\u0d07\u0d15\u0d4d\u0d35\u0d21\u0d4b\u0d7c \u0d38\u0d42\u0d15\u0d4d\u0d30\u0d47"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"\u0d07\u0d15\u0d4d\u0d35\u0d21\u0d4b\u0d7c \u0d2f\u0d42\u0d23\u0d3f\u0d21\u0d3e\u0d21\u0d4d \u0d35\u0d3e\u0d32\u0d7c \u0d15\u0d4b\u0d7a\u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d7b\u0d31\u0d46 (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u0d0e\u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d4c\u0d28\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d30\u0d42\u0d7a"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0d08\u0d1c\u0d3f\u0d2a\u0d4d\u200c\u0d37\u0d4d\u0d2f\u0d7b \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0d0e\u0d31\u0d3f\u0d24\u0d4d\u0d30\u0d3f\u0d2f\u0d7b \u0d28\u0d15\u0d4d\u0d2b"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0d38\u0d4d\u0d2a\u0d3e\u0d28\u0d3f\u0d37\u0d4d \u0d2a\u0d38\u0d46\u0d2f\u0d4d\u0d31\u0d4d\u0d31 (A \u0d05\u0d15\u0d4d\u0d15\u0d4c\u0d23\u0d4d\u0d1f\u0d4d)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0d38\u0d4d\u0d2a\u0d3e\u0d28\u0d3f\u0d37\u0d4d \u0d2a\u0d38\u0d46\u0d2f\u0d4d\u0d31\u0d4d\u0d31 (\u0d15\u0d48\u0d2e\u0d3e\u0d31\u0d4d\u0d31\u0d02 \u0d1a\u0d46\u0d2f\u0d4d\u0d2f\u0d3e\u0d35\u0d41\u0d28\u0d4d\u0d28 \u0d05\u0d15\u0d4d\u0d15\u0d4c\u0d23\u0d4d\u0d1f\u0d4d)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0d38\u0d4d\u0d2a\u0d3e\u0d28\u0d3f\u0d37\u0d4d \u0d2a\u0d38\u0d46\u0d2f\u0d4d\u0d31\u0d4d\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0d0e\u0d24\u0d4d\u0d2f\u0d4b\u0d2a\u0d4d\u0d2f\u0d7b \u0d2c\u0d3f\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0d2f\u0d42\u0d31\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u0d2b\u0d3f\u0d28\u0d4d\u0d28\u0d3f\u0d37\u0d4d \u0d2e\u0d3e\u0d7c\u0d15\u0d4d\u0d15"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0d2b\u0d3f\u0d1c\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u0d2b\u0d3e\u0d15\u0d4d\u0d15\u0d4d\u200c\u0d32\u0d3e\u0d28\u0d4d\u0d31\u0d4d \u0d26\u0d4d\u0d35\u0d40\u0d2a\u0d41\u0d15\u0d33\u0d41\u0d1f\u0d46 \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0d2c\u0d4d\u0d30\u0d3f\u0d1f\u0d4d\u0d1f\u0d40\u0d37\u0d4d \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\u0d1c\u0d4b\u0d7c\u200d\u0d1c\u0d4d\u0d1c\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d2f\u0d42\u0d2a\u0d4b\u0d7a \u0d32\u0d3e\u0d30\u0d3f\u0d31\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u0d1c\u0d4b\u0d7c\u0d1c\u0d4d\u0d1c\u0d3f\u0d2f\u0d7b \u0d32\u0d3e\u0d31\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u0d18\u0d3e\u0d28 \u0d15\u0d46\u0d21\u0d3f (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0d18\u0d3e\u0d28\u0d2f\u0d7b \u0d15\u0d46\u0d21\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u0d1c\u0d3f\u0d2c\u0d4d\u0d30\u0d3e\u0d7e\u0d1f\u0d4d\u0d1f\u0d7c \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u0d17\u0d3e\u0d02\u0d2c\u0d3f\u0d2f\u0d7b \u0d26\u0d32\u0d3e\u0d38\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0d17\u0d3f\u0d28\u0d3f\u0d2f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\u0d17\u0d3f\u0d28\u0d3f\u0d2f \u0d38\u0d48\u0d32\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\u0d07\u0d15\u0d4d\u0d35\u0d3f\u0d31\u0d4d\u0d31\u0d4b\u0d31\u0d3f\u0d2f\u0d7d \u0d17\u0d3f\u0d28\u0d3f\u0d2f \u0d0e\u0d15\u0d4d\u0d35\u0d40\u0d32\u0d46 \u0d17\u0d3f\u0d28\u0d3f\u0d2f\u0d3e\u0d28"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u0d17\u0d4d\u0d30\u0d40\u0d15\u0d4d\u0d15\u0d4d \u0d21\u0d4d\u0d30\u0d3e\u0d15\u0d4d\u0d15\u0d4d\u0d2e"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0d17\u0d4d\u0d35\u0d3e\u0d1f\u0d4d\u0d1f\u0d3f\u0d2e\u0d3e\u0d32\u0d7b \u0d15\u0d4d\u0d35\u0d46\u0d31\u0d4d\u0d31\u0d4d\u200c\u0d38\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\u0d2a\u0d4b\u0d7c\u0d1a\u0d4d\u0d1a\u0d41\u0d17\u0d40\u0d38\u0d4d \u0d17\u0d3f\u0d28\u0d3f \u0d0e\u0d38\u0d4d\u0d15\u0d4d\u0d2f\u0d42\u0d21\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u0d17\u0d3f\u0d28\u0d3f\u0d2f-\u0d2c\u0d3f\u0d38\u0d3e\u0d35\u0d41 \u0d2a\u0d46\u0d2f\u0d4d\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0d17\u0d2f\u0d3e\u0d28\u0d40\u0d38\u0d4d \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0d39\u0d4b\u0d19\u0d4d\u0d15\u0d4b\u0d19\u0d4d\u0d19\u0d4d \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0d39\u0d4b\u0d23\u0d4d\u0d1f\u0d41\u0d31\u0d7b \u0d32\u0d46\u0d02\u0d2a\u0d3f\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u0d15\u0d4d\u0d30\u0d4a\u0d2f\u0d47\u0d37\u0d4d\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0d15\u0d4d\u0d30\u0d4a\u0d2f\u0d47\u0d37\u0d7b \u0d15\u0d4d\u0d2f\u0d41\u0d28"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0d39\u0d46\u0d2f\u0d4d\u200c\u0d24\u0d3f\u0d2f\u0d7b \u0d17\u0d42\u0d7c\u0d21\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0d39\u0d02\u0d17\u0d47\u0d31\u0d3f\u0d2f\u0d7b \u0d2b\u0d4b\u0d31\u0d3f\u0d28\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0d07\u0d28\u0d4d\u0d24\u0d4b\u0d28\u0d47\u0d37\u0d4d\u0d2f\u0d7b \u0d31\u0d41\u0d2a\u0d3f\u0d2f"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0d10\u0d31\u0d3f\u0d37\u0d4d \u0d2a\u0d4c\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0d07\u0d38\u0d4d\u0d30\u0d2f\u0d47\u0d32\u0d3f \u0d2a\u0d4c\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0d07\u0d38\u0d4d\u0d30\u0d3e\u0d2f\u0d47\u0d32\u0d3f \u0d28\u0d4d\u0d2f\u0d42 \u0d37\u0d46\u0d15\u0d4d\u0d15\u0d46\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0d07\u0d28\u0d4d\u0d24\u0d4d\u0d2f\u0d7b \u0d30\u0d42\u0d2a"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0d07\u0d31\u0d3e\u0d16\u0d3f \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0d07\u0d31\u0d3e\u0d28\u0d3f\u0d2f\u0d7b \u0d31\u0d3f\u0d2f\u0d3e\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0d10\u0d38\u0d4d\u200c\u0d32\u0d3e\u0d7b\u0d21\u0d3f\u0d15\u0d4d \u0d15\u0d4d\u0d30\u0d4b\u0d23"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0d07\u0d31\u0d4d\u0d31\u0d3e\u0d32\u0d3f\u0d2f\u0d7b \u0d32\u0d3f\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u0d1c\u0d2e\u0d48\u0d15\u0d4d\u0d15\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0d1c\u0d4b\u0d7c\u0d26\u0d4d\u0d26\u0d3e\u0d28\u0d3f\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u0d1c\u0d3e\u0d2a\u0d4d\u0d2a\u0d28\u0d40\u0d38\u0d4d \u0d2f\u0d46\u0d7b"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0d15\u0d46\u0d28\u0d3f\u0d2f\u0d7b \u0d37\u0d3f\u0d32\u0d4d\u0d32\u0d3f\u0d02\u0d17\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u0d15\u0d3f\u0d7c\u0d17\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d28\u0d3f \u0d38\u0d4b\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0d15\u0d02\u0d2c\u0d4b\u0d21\u0d3f\u0d2f\u0d7b \u0d31\u0d40\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0d15\u0d4a\u0d2e\u0d4b\u0d31\u0d3f\u0d2f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0d09\u0d24\u0d4d\u0d24\u0d30 \u0d15\u0d4a\u0d31\u0d3f\u0d2f\u0d7b \u0d35\u0d4b\u0d7a"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0d26\u0d15\u0d4d\u0d37\u0d3f\u0d23 \u0d15\u0d4a\u0d31\u0d3f\u0d2f\u0d7b \u0d35\u0d4b\u0d7a"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0d15\u0d41\u0d35\u0d48\u0d31\u0d4d\u0d31\u0d3f \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u0d15\u0d47\u0d2e\u0d3e\u0d7b \u0d10\u0d32\u0d7b\u0d21\u0d4d\u200c\u0d38\u0d4d \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0d15\u0d38\u0d3e\u0d15\u0d4d\u0d15\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d28\u0d3f \u0d1f\u0d46\u0d02\u0d17\u0d46"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0d32\u0d3e\u0d35\u0d4b\u0d37\u0d3f\u0d2f\u0d7b \u0d15\u0d3f\u0d2a\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0d32\u0d46\u0d2c\u0d28\u0d40\u0d38\u0d4d \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0d36\u0d4d\u0d30\u0d40\u0d32\u0d19\u0d4d\u0d15\u0d7b \u0d31\u0d41\u0d2a\u0d4d\u0d2a\u0d40"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0d32\u0d48\u0d2c\u0d40\u0d30\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u0d32\u0d46\u0d38\u0d4b\u0d24\u0d4b \u0d32\u0d4b\u0d24\u0d4d\u0d24\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u0d32\u0d3f\u0d24\u0d4d\u0d35\u0d3e\u0d28\u0d3f\u0d2f\u0d7b \u0d32\u0d3f\u0d31\u0d4d\u0d31\u0d3e\u0d38\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u0d32\u0d3f\u0d24\u0d4d\u0d35\u0d3e\u0d28\u0d3f\u0d2f\u0d7b \u0d24\u0d32\u0d4b\u0d28\u0d3e\u0d38\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\u0d32\u0d15\u0d4d\u0d38\u0d02\u0d2c\u0d7c\u0d17\u0d4d \u0d15\u0d7a\u0d35\u0d47\u0d7c\u0d1f\u0d4d\u0d1f\u0d3f\u0d2c\u0d3f\u0d7e \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u0d32\u0d15\u0d4d\u0d38\u0d02\u0d2c\u0d7c\u0d17\u0d4d \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u0d32\u0d15\u0d4d\u0d38\u0d02\u0d2c\u0d7c\u0d17\u0d4d \u0d2b\u0d3f\u0d28\u0d3e\u0d7b\u0d37\u0d4d\u0d2f\u0d7d \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u0d32\u0d3e\u0d31\u0d4d\u0d31\u0d4d\u0d35\u0d3f\u0d2f\u0d7b \u0d32\u0d3e\u0d31\u0d4d\u0d31\u0d4d\u0d38\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u0d32\u0d3e\u0d31\u0d4d\u0d31\u0d4d\u0d35\u0d3f\u0d2f\u0d7b \u0d31\u0d42\u0d2c\u0d3f\u0d7e"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0d32\u0d3f\u0d2c\u0d3f\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0d2e\u0d4a\u0d31\u0d4b\u0d15\u0d4d\u0d15\u0d7b \u0d26\u0d3f\u0d7c\u0d39\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u0d2e\u0d4a\u0d31\u0d4b\u0d15\u0d4d\u0d15\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u0d2e\u0d4a\u0d7e\u0d21\u0d4b\u0d35\u0d7b \u0d32\u0d3f\u0d2f\u0d41"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0d2e\u0d21\u0d17\u0d3e\u0d38\u0d3f \u0d0f\u0d30\u0d3f\u0d2f\u0d31\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u0d2e\u0d21\u0d17\u0d3e\u0d38\u0d4d\u0d15\u0d7c \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u0d2e\u0d3e\u0d38\u0d3f\u0d21\u0d4b\u0d23\u0d3f\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u0d2e\u0d3e\u0d32\u0d3f \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u0d2e\u0d4d\u0d2f\u0d3e\u0d7b\u0d2e\u0d3e\u0d7c \u0d15\u0d4d\u0d2f\u0d3e\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u0d2e\u0d02\u0d17\u0d4b\u0d33\u0d3f\u0d2f\u0d7b \u0d24\u0d41\u0d17\u0d4d\u0d30\u0d3f\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u0d2e\u0d15\u0d3e\u0d28\u0d40\u0d38\u0d4d \u0d2a\u0d24\u0d3e\u0d15\u0d4d\u0d15"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u0d2e\u0d57\u0d31\u0d3f\u0d31\u0d4d\u0d31\u0d47\u0d28\u0d3f\u0d2f\u0d7b \u0d14\u0d17\u0d3f\u0d2f (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u0d2e\u0d57\u0d31\u0d3f\u0d31\u0d4d\u0d31\u0d47\u0d28\u0d3f\u0d2f\u0d7b \u0d14\u0d17\u0d3f\u0d2f"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u0d2e\u0d7d\u0d24\u0d4d\u0d24\u0d40\u0d38\u0d4d \u0d32\u0d3f\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u0d2e\u0d7d\u0d24\u0d4d\u0d24\u0d40\u0d38\u0d4d \u0d2a\u0d4c\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u0d2e\u0d57\u0d31\u0d40\u0d37\u0d4d\u0d2f\u0d7b \u0d31\u0d41\u0d2a\u0d4d\u0d2a\u0d40"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u0d2e\u0d3e\u0d7d\u0d26\u0d40\u0d35\u0d3f\u0d2f\u0d7b \u0d31\u0d41\u0d2b\u0d3f\u0d2f"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u0d2e\u0d32\u0d3e\u0d35\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d35\u0d1a\u0d4d\u0d1a\u0d3e"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u0d2e\u0d46\u0d15\u0d4d\u0d38\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u0d2e\u0d46\u0d15\u0d4d\u0d38\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d38\u0d3f\u0d7d\u0d35\u0d7c \u0d2a\u0d46\u0d2f\u0d4d\u0d38\u0d4b (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u0d2e\u0d46\u0d15\u0d4d\u0d38\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d2f\u0d42\u0d23\u0d3f\u0d21\u0d3e\u0d21\u0d4d \u0d21\u0d3f \u0d07\u0d7b\u0d35\u0d46\u0d7c\u0d37\u0d7b (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u0d2e\u0d32\u0d47\u0d37\u0d4d\u0d2f\u0d7b \u0d31\u0d3f\u0d02\u0d17\u0d3f\u0d31\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u0d2e\u0d4a\u0d38\u0d3e\u0d28\u0d4d\u0d2a\u0d3f\u0d15\u0d4d\u0d15\u0d4d \u0d0e\u0d38\u0d4d\u0d15\u0d4d\u0d2f\u0d41\u0d21\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u0d13\u0d7e\u0d21\u0d4d \u0d2e\u0d4a\u0d38\u0d3e\u0d28\u0d4d\u0d2a\u0d3f\u0d15\u0d4d\u0d15\u0d4d \u0d2e\u0d46\u0d31\u0d4d\u0d31\u0d3f\u0d15\u0d4d\u0d15\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0d2e\u0d4a\u0d38\u0d3e\u0d02\u0d2c\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d2e\u0d46\u0d31\u0d4d\u0d31\u0d3f\u0d15\u0d4d\u0d15\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0d28\u0d2e\u0d40\u0d2c\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0d28\u0d48\u0d1c\u0d40\u0d30\u0d3f\u0d2f\u0d7b \u0d28\u0d48\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u0d28\u0d3f\u0d15\u0d30\u0d3e\u0d17\u0d4d\u0d35\u0d7b \u0d15\u0d4a\u0d7c\u0d21\u0d4b\u0d2c"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u0d28\u0d3f\u0d15\u0d4d\u0d15\u0d30\u0d3e\u0d17\u0d4d\u0d35\u0d7b \u0d15\u0d4b\u0d7c\u0d21\u0d4b\u0d2c"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u0d28\u0d46\u0d24\u0d7c\u0d32\u0d7b\u0d21\u0d4d\u0d38\u0d4d \u0d17\u0d3f\u0d7d\u0d21\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0d28\u0d4b\u0d7c\u0d35\u0d40\u0d1c\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d30\u0d4b\u0d23\u0d46"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0d28\u0d47\u0d2a\u0d4d\u0d2a\u0d3e\u0d33\u0d40\u0d38\u0d4d \u0d31\u0d41\u0d2a\u0d4d\u0d2a\u0d40"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0d28\u0d4d\u0d2f\u0d42\u0d38\u0d3f\u0d32\u0d3e\u0d28\u0d4d\u0d31\u0d4d \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0d12\u0d2e\u0d3e\u0d28\u0d3f \u0d31\u0d3f\u0d2f\u0d3e\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u0d2a\u0d28\u0d3e\u0d2e\u0d28\u0d3f\u0d2f\u0d7b \u0d2c\u0d3e\u0d7d\u0d2c\u0d4b\u0d35"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u0d2a\u0d46\u0d31\u0d42\u0d35\u0d3f\u0d2f\u0d7b \u0d07\u0d7b\u0d31\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u0d2a\u0d46\u0d31\u0d41\u0d35\u0d3f\u0d2f\u0d7b \u0d38\u0d4b\u0d7e"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u0d2a\u0d46\u0d31\u0d42\u0d35\u0d3f\u0d2f\u0d7b \u0d38\u0d4b\u0d7e (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u0d2a\u0d3e\u0d2a\u0d4d\u0d2a\u0d41\u0d35 \u0d28\u0d4d\u0d2f\u0d42 \u0d17\u0d3f\u0d28\u0d3f\u0d2f\u0d7b \u0d15\u0d3f\u0d28"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u0d2b\u0d3f\u0d32\u0d3f\u0d2a\u0d4d\u0d2a\u0d40\u0d28\u0d3f \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u0d2a\u0d3e\u0d15\u0d4d\u0d15\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d28\u0d3f \u0d31\u0d41\u0d2a\u0d4d\u0d2a\u0d40"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u0d2a\u0d4b\u0d33\u0d3f\u0d37\u0d4d \u0d38\u0d4d\u0d32\u0d4b\u0d1f\u0d4d\u0d1f\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\u0d2a\u0d4b\u0d33\u0d3f\u0d37\u0d4d \u0d38\u0d4d\u0d32\u0d4b\u0d1f\u0d4d\u0d1f\u0d3f (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u0d2a\u0d4b\u0d7c\u0d1a\u0d4d\u0d1a\u0d41\u0d17\u0d40\u0d38\u0d4d \u0d0e\u0d38\u0d4d\u0d15\u0d4d\u0d2f\u0d41\u0d21\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u0d2a\u0d30\u0d3e\u0d17\u0d4d\u0d35\u0d47\u0d2f\u0d7b \u0d17\u0d4d\u0d35\u0d30\u0d28\u0d40"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0d16\u0d24\u0d4d\u0d24\u0d7c \u0d31\u0d3f\u0d2f\u0d3e\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u0d31\u0d4a\u0d21\u0d47\u0d37\u0d4d\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u0d2a\u0d4d\u0d30\u0d3e\u0d1a\u0d40\u0d28 \u0d31\u0d4a\u0d2e\u0d47\u0d28\u0d3f\u0d2f\u0d7b \u0d32\u0d3f\u0d2f\u0d41"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0d31\u0d4a\u0d2e\u0d3e\u0d28\u0d3f\u0d2f\u0d7b \u0d32\u0d46\u0d2f\u0d41"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0d38\u0d46\u0d7c\u0d2c\u0d3f\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0d31\u0d37\u0d4d\u0d2f\u0d7b \u0d31\u0d42\u0d2c\u0d3f\u0d7e"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u0d31\u0d37\u0d4d\u0d2f\u0d7b \u0d31\u0d42\u0d2c\u0d3f\u0d7e (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0d31\u0d41\u0d35\u0d3e\u0d23\u0d4d\u0d1f\u0d7b \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0d38\u0d57\u0d26\u0d3f \u0d31\u0d3f\u0d2f\u0d3e\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0d38\u0d4b\u0d33\u0d2e\u0d7b \u0d26\u0d4d\u0d35\u0d40\u0d2a\u0d41\u0d15\u0d33\u0d41\u0d1f\u0d46 \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0d38\u0d40\u0d37\u0d46\u0d32\u0d4b\u0d2f\u0d3f\u0d38\u0d4d \u0d31\u0d41\u0d2a\u0d4d\u0d2a\u0d40"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u0d2a\u0d4d\u0d30\u0d3e\u0d1a\u0d40\u0d28 \u0d38\u0d41\u0d21\u0d3e\u0d28\u0d40\u0d38\u0d4d \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0d38\u0d41\u0d21\u0d3e\u0d28\u0d40\u0d38\u0d4d \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u0d2a\u0d4d\u0d30\u0d3e\u0d1a\u0d40\u0d28 \u0d38\u0d41\u0d21\u0d3e\u0d28\u0d40\u0d38\u0d4d \u0d2a\u0d4c\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0d38\u0d4d\u0d35\u0d40\u0d21\u0d3f\u0d37\u0d4d \u0d15\u0d4d\u0d30\u0d4b\u0d23"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0d38\u0d3f\u0d02\u0d17\u0d2a\u0d4d\u0d2a\u0d42\u0d7c \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0d38\u0d46\u0d28\u0d4d\u0d31\u0d4d \u0d39\u0d46\u0d32\u0d40\u0d28 \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u0d38\u0d4d\u0d32\u0d4a\u0d35\u0d47\u0d28\u0d3f\u0d2f \u0d31\u0d4d\u0d31\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u0d38\u0d4d\u0d32\u0d4b\u0d35\u0d3e\u0d15\u0d4d \u0d15\u0d4a\u0d30\u0d42\u0d28"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0d38\u0d3f\u0d2f\u0d46\u0d31 \u0d32\u0d3f\u0d2f\u0d4b\u0d23\u0d3f\u0d2f\u0d7b \u0d32\u0d3f\u0d2f\u0d4b\u0d7a"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0d38\u0d4b\u0d2e\u0d3e\u0d32\u0d3f \u0d37\u0d3f\u0d32\u0d4d\u0d32\u0d3f\u0d02\u0d17\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0d38\u0d41\u0d30\u0d3f\u0d28\u0d46\u0d2f\u0d3f\u0d2e\u0d3f\u0d38\u0d4d \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u0d38\u0d42\u0d30\u0d3f\u0d28\u0d3e\u0d02 \u0d17\u0d3f\u0d7d\u0d21\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u0d26\u0d15\u0d4d\u0d37\u0d3f\u0d23 \u0d38\u0d41\u0d21\u0d3e\u0d28\u0d40\u0d38\u0d4d \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u0d38\u0d3e\u0d35\u0d4b \u0d1f\u0d4b\u0d2e\u0d3f \u0d06\u0d7b\u0d21\u0d4d \u0d2a\u0d4d\u0d30\u0d3f\u0d7b\u0d38\u0d3f\u0d2a\u0d46 \u0d21\u0d4b\u0d2c\u0d4d\u0d30 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0d38\u0d3e\u0d35\u0d4b \u0d1f\u0d4b\u0d2e\u0d3f \u0d06\u0d7b\u0d21\u0d4d \u0d2a\u0d4d\u0d30\u0d3f\u0d7b\u0d38\u0d3f\u0d2a\u0d46 \u0d21\u0d4b\u0d2c\u0d4d\u0d30"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0d38\u0d4b\u0d35\u0d3f\u0d2f\u0d31\u0d4d\u0d31\u0d4d \u0d31\u0d42\u0d2c\u0d3f\u0d7e"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u0d0e\u0d7d \u0d38\u0d3e\u0d7d\u0d35\u0d21\u0d4b\u0d7c \u0d15\u0d4b\u0d33\u0d7b"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0d38\u0d3f\u0d31\u0d3f\u0d2f\u0d7b \u0d2a\u0d57\u0d23\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0d38\u0d4d\u0d35\u0d3e\u0d38\u0d3f \u0d32\u0d3f\u0d32\u0d3e\u0d02\u0d17\u0d28\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0d24\u0d3e\u0d2f\u0d4d \u0d2c\u0d1f\u0d4d\u0d1f\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u0d24\u0d3e\u0d1c\u0d3f\u0d15\u0d4d\u0d15\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d7b \u0d31\u0d42\u0d2c\u0d3f\u0d7e"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0d24\u0d3e\u0d1c\u0d3f\u0d15\u0d4d\u0d15\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d28\u0d3f \u0d38\u0d4b\u0d02\u0d28\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u0d24\u0d41\u0d7c\u0d15\u0d4d\u0d2e\u0d46\u0d28\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d7b \u0d2e\u0d28\u0d24\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u0d24\u0d41\u0d7c\u0d15\u0d4d\u0d15\u0d4d\u200c\u0d2e\u0d46\u0d28\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d28\u0d3f \u0d2e\u0d28\u0d24\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u0d1f\u0d41\u0d23\u0d40\u0d37\u0d4d\u0d2f\u0d7b \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u0d1f\u0d4b\u0d02\u0d17\u0d7b \u0d2a\u0d3e\u0d02\u0d17"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u0d24\u0d3f\u0d2e\u0d4b\u0d7c \u0d0e\u0d38\u0d4d\u0d15\u0d4d\u0d2f\u0d42\u0d21\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u0d2a\u0d4d\u0d30\u0d3e\u0d1a\u0d40\u0d28 \u0d24\u0d41\u0d7c\u0d15\u0d4d\u0d15\u0d3f\u0d37\u0d4d \u0d32\u0d3f\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0d1f\u0d7c\u0d15\u0d4d\u0d15\u0d3f\u0d37\u0d4d \u0d32\u0d3f\u0d31"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0d1f\u0d4d\u0d30\u0d3f\u0d28\u0d3f\u0d21\u0d3e\u0d21\u0d4d \u0d05\u0d28\u0d4d\u0d31\u0d4d \u0d1f\u0d41\u0d2c\u0d3e\u0d17\u0d4b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0d28\u0d4d\u0d2f\u0d42 \u0d24\u0d3e\u0d2f\u0d4d\u200c\u0d35\u0d3e\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0d1f\u0d3e\u0d7b\u0d38\u0d3e\u0d28\u0d3f\u0d2f\u0d7b \u0d37\u0d3f\u0d32\u0d4d\u0d32\u0d3f\u0d02\u0d17\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0d09\u0d15\u0d4d\u0d30\u0d47\u0d28\u0d3f\u0d2f\u0d7b \u0d39\u0d4d\u0d30\u0d3f\u0d35\u0d4d\u200c\u0d28\u0d3f\u0d2f"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\u0d2f\u0d41\u0d15\u0d4d\u0d30\u0d47\u0d28\u0d3f\u0d2f\u0d7b \u0d15\u0d3e\u0d7c\u0d2c\u0d4b\u0d35\u0d3e\u0d28\u0d46\u0d38\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u0d09\u0d17\u0d3e\u0d23\u0d4d\u0d1f\u0d7b \u0d37\u0d3f\u0d32\u0d4d\u0d32\u0d3f\u0d02\u0d17\u0d4d (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0d09\u0d17\u0d3e\u0d23\u0d4d\u0d1f\u0d7b \u0d37\u0d3f\u0d32\u0d4d\u0d32\u0d3f\u0d02\u0d17\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0d2f\u0d41.\u0d0e\u0d38\u0d4d. \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u0d2f\u0d41\u0d0e\u0d38\u0d4d \u0d21\u0d4b\u0d33\u0d7c (\u0d05\u0d1f\u0d41\u0d24\u0d4d\u0d24 \u0d26\u0d3f\u0d35\u0d38\u0d02)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u0d2f\u0d41\u0d0e\u0d38\u0d4d \u0d21\u0d4b\u0d33\u0d7c (\u0d05\u0d24\u0d47 \u0d26\u0d3f\u0d35\u0d38\u0d02)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\u0d09\u0d31\u0d41\u0d17\u0d4d\u0d35\u0d47 \u0d2a\u0d46\u0d2f\u0d4d\u0d38\u0d4b \u0d0e\u0d7b \u0d2f\u0d42\u0d23\u0d3f\u0d21\u0d3e\u0d21\u0d4d\u0d38\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u0d09\u0d31\u0d41\u0d17\u0d4d\u0d35\u0d47 \u0d2a\u0d46\u0d2f\u0d4d\u0d38\u0d4b (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0d09\u0d31\u0d41\u0d17\u0d4d\u0d35\u0d47\u0d2f\u0d7b \u0d2a\u0d46\u0d38\u0d4b"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0d09\u0d38\u0d4d\u200c\u0d2c\u0d46\u0d15\u0d4d\u0d15\u0d3f\u0d38\u0d4d\u0d25\u0d3e\u0d28\u0d3f \u0d38\u0d4b\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u0d35\u0d46\u0d28\u0d38\u0d4d\u0d35\u0d47\u0d32\u0d7b \u0d2c\u0d4b\u0d32\u0d3f\u0d35\u0d7c (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0d35\u0d46\u0d28\u0d3f\u0d38\u0d4d\u0d35\u0d47\u0d32\u0d7b \u0d2c\u0d4a\u0d33\u0d40\u0d35\u0d7c (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0d35\u0d46\u0d28\u0d3f\u0d38\u0d4d\u0d35\u0d47\u0d32\u0d7b \u0d2c\u0d4a\u0d33\u0d40\u0d35\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0d35\u0d3f\u0d2f\u0d31\u0d4d\u0d31\u0d4d\u0d28\u0d3e\u0d2e\u0d40\u0d38\u0d4d \u0d21\u0d4b\u0d19\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0d35\u0d28\u0d4d\u0d35\u0d3e\u0d24\u0d41 \u0d35\u0d3e\u0d24\u0d41"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0d38\u0d2e\u0d4b\u0d35\u0d7b \u0d24\u0d3e\u0d32"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0d2e\u0d26\u0d4d\u0d27\u0d4d\u0d2f \u0d06\u0d2b\u0d4d\u0d30\u0d3f\u0d15\u0d4d\u0d15\u0d7b [CFA] \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u0d35\u0d46\u0d33\u0d4d\u0d33\u0d3f"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u0d38\u0d4d\u0d35\u0d7c\u0d23\u0d4d\u0d23\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u0d2f\u0d42\u0d31\u0d4b\u0d2a\u0d4d\u0d2f\u0d7b \u0d15\u0d4b\u0d28\u0d4d\u0d2a\u0d38\u0d3f\u0d31\u0d4d\u0d31\u0d4d \u0d2f\u0d42\u0d23\u0d3f\u0d31\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u0d2f\u0d42\u0d31\u0d4b\u0d2a\u0d4d\u0d2f\u0d7b \u0d2e\u0d4b\u0d23\u0d3f\u0d31\u0d4d\u0d31\u0d31\u0d3f \u0d2f\u0d42\u0d23\u0d3f\u0d31\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u0d2f\u0d42\u0d31\u0d4b\u0d2a\u0d4d\u0d2f\u0d7b \u0d2f\u0d42\u0d23\u0d3f\u0d31\u0d4d\u0d31\u0d4d \u0d13\u0d2b\u0d4d \u0d05\u0d15\u0d4d\u0d15\u0d4c\u0d23\u0d4d\u0d1f\u0d4d (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u0d2f\u0d42\u0d31\u0d4b\u0d2a\u0d4d\u0d2f\u0d7b \u0d2f\u0d42\u0d23\u0d3f\u0d31\u0d4d\u0d31\u0d4d \u0d13\u0d2b\u0d4d \u0d05\u0d15\u0d4d\u0d15\u0d4c\u0d23\u0d4d\u0d1f\u0d4d (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0d15\u0d3f\u0d34\u0d15\u0d4d\u0d15\u0d7b \u0d15\u0d30\u0d40\u0d2c\u0d3f\u0d2f\u0d7b \u0d21\u0d4b\u0d33\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u0d38\u0d4d\u0d2a\u0d46\u0d37\u0d4d\u0d2f\u0d7d \u0d21\u0d4d\u0d30\u0d4b\u0d2f\u0d3f\u0d02\u0d17\u0d4d \u0d31\u0d48\u0d31\u0d4d\u0d31\u0d4d\u0d38\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\u0d2f\u0d42\u0d31\u0d4b\u0d2a\u0d4d\u0d2f\u0d7b \u0d28\u0d3e\u0d23\u0d2f \u0d2f\u0d42\u0d23\u0d3f\u0d31\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u0d2b\u0d4d\u0d30\u0d46\u0d1e\u0d4d\u0d1a\u0d4d \u0d17\u0d4b\u0d7e\u0d21\u0d4d \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u0d2b\u0d4d\u0d30\u0d46\u0d1e\u0d4d\u0d1a\u0d4d UIC-\u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0d2a\u0d36\u0d4d\u0d1a\u0d3f\u0d2e \u0d06\u0d2b\u0d4d\u0d30\u0d3f\u0d15\u0d4d\u0d15\u0d7b [CFA] \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u0d2a\u0d32\u0d3e\u0d21\u0d3f\u0d2f\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \u0d2b\u0d4d\u0d30\u0d3e\u0d19\u0d4d\u0d15\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u0d2a\u0d4d\u0d32\u0d3e\u0d31\u0d4d\u0d31\u0d3f\u0d28\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET \u0d2b\u0d23\u0d4d\u0d1f\u0d4d\u0d38\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u0d1f\u0d46\u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d3f\u0d02\u0d17\u0d3f\u0d28\u0d41\u0d33\u0d4d\u0d33 \u0d15\u0d31\u0d7b\u0d38\u0d3f \u0d15\u0d4b\u0d21\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0d05\u0d1c\u0d4d\u0d1e\u0d3e\u0d24 \u0d28\u0d3e\u0d23\u0d2f\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u0d2f\u0d2e\u0d28\u0d3f \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u0d2f\u0d46\u0d2e\u0d28\u0d3f \u0d31\u0d3f\u0d2f\u0d3e\u0d7d"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u0d2f\u0d42\u0d17\u0d4b\u0d38\u0d4d\u0d32\u0d47\u0d35\u0d3f\u0d2f\u0d7b \u0d39\u0d3e\u0d7c\u0d21\u0d4d \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u0d2f\u0d42\u0d17\u0d4b\u0d38\u0d4d\u0d32\u0d47\u0d35\u0d3f\u0d2f\u0d7b \u0d28\u0d4b\u0d35\u0d3f \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u0d2f\u0d42\u0d17\u0d4b\u0d38\u0d4d\u0d32\u0d47\u0d35\u0d3f\u0d2f\u0d7b \u0d15\u0d7a\u0d35\u0d47\u0d7c\u0d1f\u0d4d\u0d1f\u0d3f\u0d2c\u0d3f\u0d7e \u0d26\u0d3f\u0d28\u0d3e\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"\u0d26\u0d15\u0d4d\u0d37\u0d3f\u0d23\u0d3e\u0d2b\u0d4d\u0d30\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d31\u0d3e\u0d7b\u0d21\u0d4d (\u0d2b\u0d3f\u0d28\u0d3e\u0d7b\u0d37\u0d4d\u0d2f\u0d7d)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0d26\u0d15\u0d4d\u0d37\u0d3f\u0d23\u0d3e\u0d2b\u0d4d\u0d30\u0d3f\u0d15\u0d4d\u0d15\u0d7b \u0d31\u0d3e\u0d7b\u0d21\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u0d38\u0d3e\u0d02\u0d2c\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d35\u0d3e\u0d1a (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u0d38\u0d3e\u0d02\u0d2c\u0d3f\u0d2f\u0d7b \u0d15\u0d4d\u0d35\u0d3e\u0d1a\u0d4d\u0d1a"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u0d38\u0d48\u0d31\u0d3f\u0d2f\u0d7b \u0d28\u0d4d\u0d2f\u0d42 \u0d38\u0d48\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u0d38\u0d48\u0d31\u0d3f\u0d2f\u0d7b \u0d38\u0d48\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u0d38\u0d3f\u0d02\u0d2c\u0d3e\u0d2c\u0d4d\u200c\u0d35\u0d46 \u0d21\u0d4b\u0d33\u0d7c"_s)
		})
	}));
	return data;
}

CurrencyNames_ml::CurrencyNames_ml() {
}

$Class* CurrencyNames_ml::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ml, name, initialize, &_CurrencyNames_ml_ClassInfo_, allocate$CurrencyNames_ml);
	return class$;
}

$Class* CurrencyNames_ml::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun