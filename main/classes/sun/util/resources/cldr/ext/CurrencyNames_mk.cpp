#include <sun/util/resources/cldr/ext/CurrencyNames_mk.h>

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

$MethodInfo _CurrencyNames_mk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mk::*)()>(&CurrencyNames_mk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mk_MethodInfo_
};

$Object* allocate$CurrencyNames_mk($Class* clazz) {
	return $of($alloc(CurrencyNames_mk));
}

void CurrencyNames_mk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mk::getContents() {
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
			$of(u"\u0434\u0435\u043d."_s)
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
			$of(u"\u0410\u043d\u0434\u043e\u0440\u0441\u043a\u0430 \u041f\u0435\u0437\u0435\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0414\u0438\u0440\u0445\u0430\u043c \u043d\u0430 \u041e\u0431\u0435\u0434\u0438\u043d\u0435\u0442\u0438 \u0410\u0440\u0430\u043f\u0441\u043a\u0438 \u0415\u043c\u0438\u0440\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0410\u0432\u0433\u0430\u043d\u0438 (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0410\u0432\u0433\u0430\u043d\u0438\u0441\u0442\u0430\u043d\u0441\u043a\u0438 \u0430\u0432\u0433\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0410\u043b\u0431\u0430\u043d\u0441\u043a\u0438 \u043b\u0435\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0415\u0440\u043c\u0435\u043d\u0441\u043a\u0438 \u0434\u0440\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0425\u043e\u043b\u0430\u043d\u0434\u0441\u043a\u0438 \u0430\u043d\u0442\u0438\u043b\u0441\u043a\u0438 \u0433\u0438\u043b\u0434\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0410\u043d\u0433\u043e\u043b\u0441\u043a\u0430 \u043a\u0432\u0430\u043d\u0437\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\u0410\u043d\u0433\u043e\u043b\u0441\u043a\u0430 \u041a\u0432\u0430\u043d\u0437\u0430 (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\u0410\u043d\u0433\u043e\u043b\u0441\u043a\u0430 \u043d\u043e\u0432\u0430 \u041a\u0432\u0430\u043d\u0437\u0430 (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0410\u0440\u0433\u0435\u043d\u0442\u0438\u043d\u0441\u043a\u0438 \u041f\u0435\u0437\u043e\u0441 (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0410\u0440\u0433\u0435\u043d\u0442\u0438\u043d\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u0441\u043a\u0438 \u0428\u0438\u043b\u0438\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0410\u0440\u0443\u0431\u0438\u0441\u043a\u0438 \u0444\u043b\u043e\u0440\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0410\u0437\u0435\u0440\u0431\u0435\u0458\u045f\u0430\u043d\u0441\u043a\u0438 \u043c\u0430\u043d\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u0411\u043e\u0441\u0430\u043d\u0441\u043a\u043e-\u0425\u0435\u0440\u0446\u0435\u0433\u043e\u0432\u0441\u043a\u0438 \u0414\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0411\u043e\u0441\u0430\u043d\u0441\u043a\u043e-\u0445\u0435\u0440\u0446\u0435\u0433\u043e\u0432\u0441\u043a\u0430 \u043a\u043e\u043d\u0432\u0435\u0440\u0442\u0438\u0431\u0438\u043b\u043d\u0430 \u043c\u0430\u0440\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0411\u0430\u0440\u0431\u0430\u0434\u043e\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0411\u0430\u043d\u0433\u043b\u0430\u0434\u0435\u0448\u043a\u0430 \u0442\u0430\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u0411\u0435\u043b\u0433\u0438\u0441\u043a\u0438 \u0424\u0440\u0430\u043d\u043a (\u043a\u043e\u043d\u0432\u0435\u0440\u0442\u0438\u0431\u0438\u043b\u0435\u043d)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u0411\u0435\u043b\u0433\u0438\u0441\u043a\u0438 \u0424\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u0411\u0435\u043b\u0433\u0438\u0441\u043a\u0438 \u0424\u0440\u0430\u043d\u043a (\u0444\u0438\u043d\u0430\u043d\u0441\u0438\u0441\u043a\u0438)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u0411\u0443\u0433\u0430\u0440\u0441\u043a\u0438 \u0446\u0432\u0440\u0441\u0442 \u043b\u0435\u0432"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0411\u0443\u0433\u0430\u0440\u0441\u043a\u0438 \u043b\u0435\u0432"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u0411\u0430\u0445\u0440\u0435\u0438\u043d\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0411\u0443\u0440\u0443\u043d\u0434\u0438\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0411\u0435\u0440\u043c\u0443\u0434\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0411\u0440\u0443\u043d\u0435\u0458\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0411\u043e\u043b\u0438\u0432\u0438\u0441\u043a\u0438 \u0431\u043e\u043b\u0438\u0432\u0438\u0430\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b\u0441\u043a\u0438 \u0440\u0435\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0411\u0430\u0445\u0430\u043c\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0411\u0443\u0442\u0430\u043d\u0441\u043a\u0438 \u043d\u0433\u0443\u043b\u0442\u0440\u0443\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u0411\u043e\u0446\u0432\u0430\u043d\u0441\u043a\u0430 \u043f\u0443\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u0411\u0435\u043b\u043e\u0440\u0443\u0441\u043a\u0430 \u043d\u043e\u0432\u0430 \u0440\u0443\u0431\u0459\u0430 (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0411\u0435\u043b\u043e\u0440\u0443\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0411\u0435\u043b\u043e\u0440\u0443\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430 (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0411\u0435\u043b\u0438\u0437\u0438\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0434\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u041a\u043e\u043d\u0433\u043e\u043b\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0428\u0432\u0430\u0458\u0446\u0430\u0440\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0427\u0438\u043b\u0435\u0430\u043d\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u041a\u0438\u043d\u0435\u0441\u043a\u0438 \u0458\u0443\u0430\u043d (\u043e\u0444\u0448\u043e\u0440)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u041a\u0438\u043d\u0435\u0441\u043a\u0438 \u0458\u0443\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u041a\u043e\u043b\u0443\u043c\u0431\u0438\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u041a\u043e\u0441\u0442\u0430\u0440\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u043a\u043e\u043b\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u0427\u0435\u0445\u043e\u0441\u043b\u043e\u0432\u0430\u0447\u043a\u0430 \u0446\u0432\u0440\u0441\u0442\u0430 \u043a\u043e\u0440\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u041a\u0443\u0431\u0430\u043d\u0441\u043a\u0438 \u043a\u043e\u043d\u0432\u0435\u0440\u0442\u0438\u0431\u0438\u043b\u0435\u043d \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u041a\u0443\u0431\u0430\u043d\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0417\u0435\u043b\u0435\u043d\u043e\u2019\u0440\u0442\u0441\u043a\u0438 \u0435\u0441\u043a\u0443\u0434\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u041a\u0438\u043f\u0430\u0440\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u0427\u0435\u0448\u043a\u0430 \u043a\u0440\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u0413\u0435\u0440\u043c\u0430\u043d\u0441\u043a\u0430 \u041c\u0430\u0440\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u040f\u0438\u0431\u0443\u0442\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0414\u0430\u043d\u0441\u043a\u0430 \u043a\u0440\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0410\u043b\u0436\u0438\u0440\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0415\u0433\u0438\u043f\u0435\u0442\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0415\u0440\u0438\u0442\u0440\u0435\u0458\u0441\u043a\u0430 \u043d\u0430\u043a\u0444\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0428\u043f\u0430\u043d\u0441\u043a\u0430 \u041f\u0435\u0437\u0435\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0415\u0442\u0438\u043e\u043f\u0438\u0441\u043a\u0438 \u0431\u0438\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0415\u0432\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u0424\u0438\u043d\u0441\u043a\u0430 \u043c\u0430\u0440\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0424\u0438\u045f\u0438\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u0424\u043e\u043b\u043a\u043b\u0430\u043d\u0434\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u0413\u0440\u0443\u0437\u0438\u0441\u043a\u0438 \u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u0413\u0430\u043d\u0430\u0458\u0441\u043a\u0438 \u0421\u0435\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0413\u0430\u043d\u0441\u043a\u0438 \u0441\u0435\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u0413\u0438\u0431\u0440\u0430\u043b\u0442\u0430\u0440\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u0413\u0430\u043c\u0431\u0438\u0441\u043a\u0438 \u0434\u0430\u043b\u0430\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0413\u0432\u0438\u043d\u0435\u0458\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u0413\u0440\u0447\u043a\u0430 \u0434\u0440\u0430\u0445\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0413\u0432\u0430\u0442\u0435\u043c\u0430\u043b\u0441\u043a\u0438 \u043a\u0432\u0435\u0442\u0446\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u0413\u0432\u0438\u043d\u0435\u0458\u0441\u043a\u0438 \u0411\u0438\u0441\u0430\u0443 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0413\u0432\u0430\u0458\u0430\u043d\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0425\u043e\u043d\u0433\u043a\u043e\u043d\u0448\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0425\u043e\u043d\u0434\u0443\u0440\u0441\u043a\u0430 \u043b\u0435\u043c\u043f\u0438\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u0425\u0440\u0432\u0430\u0442\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0425\u0440\u0432\u0430\u0442\u0441\u043a\u0430 \u043a\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0425\u0430\u0438\u0442\u0441\u043a\u0438 \u0433\u0443\u0440\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0423\u043d\u0433\u0430\u0440\u0441\u043a\u0430 \u0444\u043e\u0440\u0438\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0418\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u0441\u043a\u0430 \u0440\u0443\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0418\u0440\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0418\u0437\u0440\u0435\u043b\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0418\u0437\u0440\u0430\u0435\u043b\u0441\u043a\u0438 \u043d\u043e\u0432 \u0448\u0435\u043a\u0435\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0418\u043d\u0434\u0438\u0441\u043a\u0430 \u0440\u0443\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0418\u0440\u0430\u0447\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0418\u0440\u0430\u043d\u0441\u043a\u0438 \u0440\u0438\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043d\u0434\u0441\u043a\u0430 \u043a\u0440\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0418\u0442\u0430\u043b\u0438\u0458\u0430\u043d\u0441\u043a\u0430 \u043b\u0438\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u0408\u0430\u043c\u0430\u0458\u043a\u0430\u043d\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0408\u043e\u0440\u0434\u0430\u043d\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u0408\u0430\u043f\u043e\u043d\u0441\u043a\u0438 \u0458\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u041a\u0435\u043d\u0438\u0441\u043a\u0438 \u0448\u0438\u043b\u0438\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u041a\u0438\u0440\u0433\u0438\u0441\u0442\u0430\u043d\u0441\u043a\u0438 \u0441\u043e\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u041a\u0430\u043c\u0431\u043e\u045f\u0438\u0441\u043a\u0438 \u0440\u0435\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u041a\u043e\u043c\u043e\u0440\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0421\u0435\u0432\u0435\u0440\u043d\u043e \u043a\u043e\u0440\u0435\u0458\u0441\u043a\u0438 \u0432\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0408\u0443\u0436\u043d\u043e \u043a\u043e\u0440\u0435\u0458\u0441\u043a\u0438 \u0432\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u041a\u0443\u0432\u0430\u0458\u0442\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u041a\u0430\u0458\u043c\u0430\u043d\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u041a\u0430\u0437\u0430\u0445\u0441\u0442\u0430\u043d\u0441\u043a\u0430 \u0442\u0435\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u041b\u0430\u043e\u0441\u043a\u0438 \u043a\u0438\u043f"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u041b\u0438\u0431\u0430\u043d\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0428\u0440\u0438\u043b\u0430\u043d\u043a\u0430\u043d\u0441\u043a\u0430 \u0440\u0443\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u041b\u0438\u0431\u0435\u0440\u0438\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u041b\u0435\u0441\u043e\u0442\u0441\u043a\u043e \u043b\u043e\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u041b\u0438\u0442\u0432\u0430\u043d\u0438\u0441\u043a\u0430 \u043b\u0438\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u041b\u0438\u0442\u0432\u0430\u043d\u0438\u0441\u043a\u0438 \u043b\u0438\u0442\u0430\u0437"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u041b\u0443\u043a\u0441\u0435\u043c\u0431\u0443\u0440\u0448\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u041b\u0430\u0442\u0432\u0438\u0458\u0441\u043a\u0438 \u043b\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u041b\u0430\u0442\u0432\u0438\u0458\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u041b\u0438\u0431\u0438\u0458\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u041c\u0430\u0440\u043e\u043a\u0430\u043d\u0441\u043a\u0438 \u0434\u0438\u0440\u0445\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u041c\u0430\u0440\u043e\u043a\u0430\u043d\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u041c\u043e\u043b\u0434\u0430\u0432\u0441\u043a\u0438 \u043b\u0435\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0433\u0430\u0441\u0438\u0441\u043a\u0438 \u0430\u0440\u0438\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0441\u043a\u0438 \u0434\u0435\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u041c\u0430\u043b\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u041c\u0458\u0430\u043d\u043c\u0430\u0440\u0441\u043a\u0438 \u043a\u0438\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u041c\u043e\u043d\u0433\u043e\u043b\u0438\u0441\u043a\u0438 \u0442\u0443\u0433\u0440\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u041c\u0430\u043a\u0430\u043e \u043f\u0430\u0442\u0430\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0443\u0433\u0438\u0458\u0430 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0443\u0433\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u041c\u0430\u043b\u0442\u0435\u0448\u043a\u0430 \u043b\u0438\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u041c\u0430\u043b\u0442\u0435\u0448\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0440\u0443\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u041c\u0430\u043b\u0434\u0438\u0432\u0441\u043a\u0430 \u0440\u0443\u0444\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0432\u0438\u0441\u043a\u0430 \u043a\u0432\u0430\u0447\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u041c\u0435\u043a\u0441\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u041c\u0435\u043a\u0441\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u0441\u0440\u0435\u0431\u0440\u0435\u043d \u043f\u0435\u0437\u043e\u0441 (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u041c\u0430\u043b\u0435\u0437\u0438\u0441\u043a\u0438 \u0440\u0438\u043d\u0433\u0438\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u041c\u043e\u0437\u0430\u043c\u0431\u0438\u0441\u043a\u043e \u0435\u0441\u043a\u0443\u0434\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u0421\u0442\u0430\u0440 \u043c\u043e\u0437\u0430\u043c\u0431\u0438\u0441\u043a\u0438 \u043c\u0435\u0442\u0438\u043a\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u041c\u043e\u0437\u0430\u043c\u0431\u0438\u0441\u043a\u0438 \u043c\u0435\u0442\u0438\u043a\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u041d\u0430\u043c\u0438\u0431\u0438\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u041d\u0438\u0433\u0435\u0440\u0438\u0441\u043a\u0430 \u043d\u0430\u0438\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u041d\u0438\u043a\u0430\u0440\u0430\u0433\u0432\u0430\u043d\u0441\u043a\u0430 \u043a\u043e\u0440\u0434\u043e\u0431\u0430 (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u041d\u0438\u043a\u0430\u0440\u0430\u0433\u0432\u0430\u043d\u0441\u043a\u0430 \u043a\u043e\u0440\u0434\u043e\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u0425\u043e\u043b\u0430\u043d\u0434\u0441\u043a\u0438 \u0433\u0438\u043b\u0434\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u041d\u043e\u0440\u0432\u0435\u0448\u043a\u0430 \u043a\u0440\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u041d\u0435\u043f\u0430\u043b\u0441\u043a\u0430 \u0440\u0443\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u041d\u043e\u0432\u043e\u0437\u0435\u043b\u0430\u043d\u0434\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u041e\u043c\u0430\u043d\u0441\u043a\u0438 \u0440\u0438\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u041f\u0430\u043d\u0430\u043c\u0441\u043a\u0430 \u0431\u0430\u043b\u0431\u043e\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u041f\u0435\u0440\u0443\u0430\u043d\u0441\u043a\u0438 \u0441\u043e\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u041f\u0435\u0440\u0443\u0430\u043d\u0441\u043a\u0438 \u0441\u043e\u043b (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u041f\u0430\u043f\u0443\u0430 \u043d\u043e\u0432\u043e\u0433\u0432\u0438\u043d\u0435\u0458\u0441\u043a\u0430 \u043a\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u0424\u0438\u043b\u0438\u043f\u0438\u043d\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u041f\u0430\u043a\u0438\u0441\u0442\u0430\u043d\u0441\u043a\u0430 \u0440\u0443\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u041f\u043e\u043b\u0441\u043a\u0430 \u0437\u043b\u043e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\u041f\u043e\u043b\u0441\u043a\u0430 \u0437\u043b\u043e\u0442\u0430 (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u041f\u043e\u0440\u0442\u0443\u0433\u0430\u043b\u0441\u043a\u043e \u0435\u0441\u043a\u0443\u0434\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u041f\u0430\u0440\u0430\u0433\u0432\u0430\u0458\u0441\u043a\u0430 \u0433\u0443\u0430\u0440\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u041a\u0430\u0442\u0430\u0440\u0441\u043a\u0438 \u0440\u0438\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u0420\u043e\u043c\u0430\u043d\u0441\u043a\u0430 \u043b\u0435\u0438 (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0420\u043e\u043c\u0430\u043d\u0441\u043a\u0438 \u043b\u0435\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0421\u0440\u043f\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0420\u0443\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u0420\u0443\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430 (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0420\u0443\u0430\u043d\u0434\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0421\u0430\u0443\u0434\u0438\u0441\u043a\u0438 \u0440\u0438\u0458\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0421\u043e\u043b\u043e\u043c\u043e\u043d\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0421\u0435\u0458\u0448\u0435\u043b\u0441\u043a\u0430 \u0440\u0443\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u0421\u0442\u0430\u0440 \u0441\u0443\u0434\u0430\u043d\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0421\u0443\u0434\u0430\u043d\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u0421\u0442\u0430\u0440\u0430 \u0441\u0443\u0434\u0430\u043d\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0428\u0432\u0435\u0434\u0441\u043a\u0430 \u043a\u0440\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0421\u0438\u043d\u0433\u0430\u043f\u0443\u0440\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0424\u0443\u043d\u0442\u0430 \u043d\u0430 \u0421\u0432\u0435\u0442\u0430 \u0415\u043b\u0435\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0435\u043d\u0435\u0447\u043a\u0438 \u0442\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0430\u0447\u043a\u0430 \u043a\u0440\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0421\u0438\u0435\u0440\u0430\u043b\u0435\u043e\u043d\u0441\u043a\u043e \u043b\u0435\u043e\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0421\u043e\u043c\u0430\u043b\u0438\u0458\u0441\u043a\u0438 \u0448\u0438\u043b\u0438\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0421\u0443\u0440\u0438\u043d\u0430\u043c\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u0421\u0443\u0440\u0438\u043d\u0430\u043c\u0441\u043a\u0438 \u0433\u0438\u043b\u0434\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u0408\u0443\u0436\u043d\u043e\u0441\u0443\u0434\u0430\u043d\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u0414\u043e\u0431\u0440\u0430 \u043d\u0430 \u0421\u0430\u0443\u043d \u0422\u043e\u043c\u0435 \u0438 \u041f\u0440\u0438\u043d\u0441\u0438\u043f (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0414\u043e\u0431\u0440\u0430 \u043d\u0430 \u0421\u0430\u043e \u0422\u043e\u043c\u0435 \u0438 \u041f\u0440\u0438\u043d\u0441\u0438\u043f\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0421\u043e\u0432\u0435\u0442\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u0421\u0430\u043b\u0432\u0430\u0434\u043e\u0440\u0441\u043a\u0438 \u043a\u043e\u043b\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0421\u0438\u0440\u0438\u0458\u0441\u043a\u0430 \u0444\u0443\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0421\u0432\u0430\u0437\u0438\u043b\u0435\u043d\u0434\u0441\u043a\u0438 \u043b\u0438\u043b\u0430\u043d\u0433\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0422\u0430\u0438 \u0431\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u0422\u0430\u045f\u0438\u043a\u0438\u0441\u0442\u0430\u043d\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0422\u0430\u045f\u0438\u043a\u0438\u0441\u0442\u0430\u043d\u0441\u043a\u0438 \u0441\u043e\u043c\u043e\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u0422\u0443\u0440\u043a\u043c\u0435\u043d\u0438\u0441\u0442\u0430\u043d\u0441\u043a\u0438 \u043c\u0430\u043d\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u0422\u0443\u0440\u043a\u043c\u0435\u043d\u0438\u0441\u0442. \u043c\u0430\u043d\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u0422\u0443\u043d\u0438\u0437\u0438\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u0422\u043e\u043d\u0433\u0430\u043d\u0441\u043a\u0430 \u043f\u0430\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u0422\u0438\u043c\u043e\u0440\u0441\u043a\u0438 \u0435\u0441\u043a\u0443\u0434\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u0422\u0443\u0440\u0441\u043a\u0430 \u043b\u0438\u0440\u0430 (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0422\u0443\u0440\u0441\u043a\u0430 \u043b\u0438\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0414\u043e\u043b\u0430\u0440 \u043d\u0430 \u0422\u0440\u0438\u043d\u0438\u0434\u0430\u0434 \u0438 \u0422\u043e\u0431\u0430\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0422\u0430\u0458\u0432\u0430\u043d\u0441\u043a\u0438 \u043d\u043e\u0432 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0422\u0430\u043d\u0437\u0430\u043d\u0438\u0441\u043a\u0438 \u0448\u0438\u043b\u0438\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0438\u043d\u0441\u043a\u0430 \u0445\u0440\u0438\u0432\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u0423\u0433\u0430\u043d\u0434\u0438\u0441\u043a\u0438 \u0448\u0438\u043b\u0438\u043d\u0433 (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0423\u0433\u0430\u043d\u0434\u0438\u0441\u043a\u0438 \u0448\u0438\u043b\u0438\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0410\u043c\u0435\u0440\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u0421\u0410\u0414 \u0434\u043e\u043b\u0430\u0440 (Next day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u0421\u0410\u0414 \u0434\u043e\u043b\u0430\u0440 (Same day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0458\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441 (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0458\u0441\u043a\u0438 \u043f\u0435\u0437\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0423\u0437\u0431\u0435\u043a\u0438\u0441\u0442\u0430\u043d\u0441\u043a\u0438 \u0441\u043e\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0446\u0443\u0435\u043b\u0441\u043a\u0438 \u0431\u043e\u043b\u0438\u0432\u0430\u0440 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0446\u0443\u0435\u043b\u0441\u043a\u0438 \u0431\u043e\u043b\u0438\u0432\u0430\u0440 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0446\u0443\u0435\u043b\u0441\u043a\u0438 \u0431\u043e\u043b\u0438\u0432\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0412\u0438\u0435\u0442\u043d\u0430\u043c\u0441\u043a\u0438 \u0434\u043e\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0412\u0430\u043d\u0430\u0442\u0441\u043a\u0438 \u0432\u0430\u0442\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0421\u0430\u043c\u043e\u0430\u043d\u0441\u043a\u0430 \u0442\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0426\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u043e\u0430\u0444\u0440\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0418\u0441\u0442\u043e\u0447\u043d\u043e\u043a\u0430\u0440\u0438\u043f\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0417\u0430\u043f\u0430\u0434\u043d\u043e\u0430\u0444\u0440\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u0426\u0424\u041f \u0444\u0440\u0430\u043d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u041d\u0435\u043f\u043e\u0437\u043d\u0430\u0442\u0430 \u0432\u0430\u043b\u0443\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u0408\u0435\u043c\u0435\u043d\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u0408\u0435\u043c\u0435\u043d\u0441\u043a\u0438 \u0440\u0438\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u0408\u0443\u0433\u043e\u0441\u043b\u043e\u0432\u0435\u043d\u0441\u043a\u0438 \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u0408\u0443\u0433\u043e\u0441\u043b\u043e\u0432\u0435\u043d\u0441\u043a\u0438 \u043a\u043e\u043d\u0432\u0435\u0440\u0442\u0438\u0431\u0438\u043b\u0435\u043d \u0434\u0438\u043d\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"\u0408\u0443\u0436\u043d\u043e \u0430\u0444\u0440\u0438\u0447\u043a\u0438 \u0440\u0430\u043d\u0434(\u0444\u0438\u043d\u0430\u043d\u0441\u0438\u0441\u043a\u0438)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0408\u0443\u0436\u043d\u043e\u0430\u0444\u0440\u0438\u043a\u0430\u043d\u0441\u043a\u0438 \u0440\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u0417\u0430\u043c\u0431\u0438\u0458\u0441\u043a\u0430 \u043a\u0432\u0430\u0447\u0430 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u0417\u0430\u043c\u0431\u0438\u0458\u0441\u043a\u0430 \u043a\u0432\u0430\u0447\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u0417\u0430\u0438\u0440\u0441\u043a\u043e \u043d\u043e\u0432\u043e\u0437\u0430\u0438\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u0417\u0430\u0438\u0440\u0441\u043a\u043e \u0437\u0430\u0438\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u0417\u0438\u043c\u0431\u0430\u0431\u0432\u0438\u0441\u043a\u0438 \u0434\u043e\u043b\u0430\u0440"_s)
		})
	}));
	return data;
}

CurrencyNames_mk::CurrencyNames_mk() {
}

$Class* CurrencyNames_mk::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mk, name, initialize, &_CurrencyNames_mk_ClassInfo_, allocate$CurrencyNames_mk);
	return class$;
}

$Class* CurrencyNames_mk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun