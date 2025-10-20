#include <sun/util/resources/cldr/ext/CurrencyNames_kk.h>

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

$MethodInfo _CurrencyNames_kk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_kk::*)()>(&CurrencyNames_kk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_kk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_kk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_kk_MethodInfo_
};

$Object* allocate$CurrencyNames_kk($Class* clazz) {
	return $of($alloc(CurrencyNames_kk));
}

void CurrencyNames_kk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_kk::getContents() {
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
			$of(u"\u20b8"_s)
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
			$of(u"\u20bd"_s)
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
			$of(u"\u0411\u0456\u0440\u0456\u043a\u043a\u0435\u043d \u0410\u0440\u0430\u0431 \u04d8\u043c\u0456\u0440\u043b\u0456\u043a\u0442\u0435\u0440\u0456\u043d\u0456\u04a3 \u0434\u0438\u0440\u0445\u0430\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0410\u0443\u0493\u0430\u043d\u0441\u0442\u0430\u043d \u0430\u0444\u0433\u0430\u043d\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0410\u043b\u0431\u0430\u043d\u0438\u044f \u043b\u0435\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0410\u0440\u043c\u0435\u043d\u0438\u044f \u0434\u0440\u0430\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u041d\u0438\u0434\u0435\u0440\u043b\u0430\u043d\u0434 \u0430\u043d\u0442\u0438\u043b\u044c \u0433\u0443\u043b\u044c\u0434\u0435\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0410\u043d\u0433\u043e\u043b\u0430 \u043a\u0432\u0430\u043d\u0437\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0410\u0440\u0433\u0435\u043d\u0442\u0438\u043d\u0430 \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0410\u0440\u0443\u0431\u0430 \u0444\u043b\u043e\u0440\u0438\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u04d8\u0437\u0456\u0440\u0431\u0430\u0439\u0436\u0430\u043d \u043c\u0430\u043d\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0411\u043e\u0441\u043d\u0438\u044f \u0436\u04d9\u043d\u0435 \u0413\u0435\u0440\u0446\u0435\u0433\u043e\u0432\u0438\u043d\u0430 \u0430\u0439\u044b\u0440\u0431\u0430\u0441\u0442\u0430\u043b\u043c\u0430\u043b\u044b \u043c\u0430\u0440\u043a\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0411\u0430\u0440\u0431\u0430\u0434\u043e\u0441 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0411\u0430\u043d\u0433\u043b\u0430\u0434\u0435\u0448 \u0442\u0430\u043a\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0411\u043e\u043b\u0433\u0430\u0440\u0438\u044f \u043b\u0435\u0432\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u0411\u0430\u0445\u0440\u0435\u0439\u043d \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0411\u0443\u0440\u0443\u043d\u0434\u0438 \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0411\u0435\u0440\u043c\u0443\u0434 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0411\u0440\u0443\u043d\u0435\u0439 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0411\u043e\u043b\u0438\u0432\u0438\u044f \u0431\u043e\u043b\u0438\u0432\u0438\u0430\u043d\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b\u0438\u044f \u0440\u0435\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0411\u0430\u0433\u0430\u043c \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0411\u0443\u0442\u0430\u043d \u043d\u0433\u0443\u043b\u0442\u0440\u0443\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u0411\u043e\u0442\u0441\u0432\u0430\u043d\u0430 \u043f\u0443\u043b\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0411\u0435\u043b\u0430\u0440\u0443\u0441\u044c \u0440\u0443\u0431\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0411\u0435\u043b\u0430\u0440\u0443\u0441\u044c \u0440\u0443\u0431\u043b\u0456 (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0411\u0435\u043b\u0438\u0437 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0434\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u041a\u043e\u043d\u0433\u043e \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0428\u0432\u0435\u0439\u0446\u0430\u0440\u0438\u044f \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0427\u0438\u043b\u0438 \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u049a\u044b\u0442\u0430\u0439 \u044e\u0430\u043d\u0456 (\u043e\u0444\u0448\u043e\u0440)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u049a\u044b\u0442\u0430\u0439 \u044e\u0430\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u041a\u043e\u043b\u0443\u043c\u0431\u0438\u044f \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u041a\u043e\u0441\u0442\u0430-\u0420\u0438\u043a\u0430 \u043a\u043e\u043b\u043e\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u041a\u0443\u0431\u0430 \u0430\u0439\u044b\u0440\u0431\u0430\u0441\u0442\u0430\u043b\u043c\u0430\u043b\u044b \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u041a\u0443\u0431\u0430 \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u041a\u0430\u0431\u043e-\u0412\u0435\u0440\u0434\u0435 \u044d\u0441\u043a\u0443\u0434\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u0427\u0435\u0445\u0438\u044f \u043a\u0440\u043e\u043d\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u0414\u0436\u0438\u0431\u0443\u0442\u0438 \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0414\u0430\u0442 \u043a\u0440\u043e\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430\u043d \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0410\u043b\u0436\u0438\u0440 \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u041c\u044b\u0441\u044b\u0440 \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u042d\u0440\u0438\u0442\u0440\u0435\u044f \u043d\u0430\u043a\u0444\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u042d\u0444\u0438\u043e\u043f\u0438\u044f \u0431\u044b\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0415\u0443\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0424\u0438\u0434\u0436\u0438 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u0424\u043e\u043b\u043a\u043b\u0435\u043d\u0434 \u0430\u0440\u0430\u043b\u0434\u0430\u0440\u044b\u043d\u044b\u04a3 \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u043d\u0434\u044b\u049b \u0444\u0443\u043d\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u0413\u0440\u0443\u0437\u0438\u044f \u043b\u0430\u0440\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0413\u0430\u043d\u0430 \u0441\u0435\u0434\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u0413\u0438\u0431\u0440\u0430\u043b\u0442\u0430\u0440 \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u0413\u0430\u043c\u0431\u0438\u044f \u0434\u0430\u043b\u0430\u0441\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0413\u0432\u0438\u043d\u0435\u044f \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0413\u0432\u0430\u0442\u0435\u043c\u0430\u043b\u0430 \u043a\u0435\u0442\u0441\u0430\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0413\u0430\u0439\u0430\u043d\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0413\u043e\u043d\u043a\u043e\u043d\u0433 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0413\u043e\u043d\u0434\u0443\u0440\u0430\u0441 \u043b\u0435\u043c\u043f\u0438\u0440\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0425\u043e\u0440\u0432\u0430\u0442\u0438\u044f \u043a\u0443\u043d\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0413\u0430\u0438\u0442\u0438 \u0433\u0443\u0440\u0434\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0412\u0435\u043d\u0433\u0440\u0438\u044f \u0444\u043e\u0440\u0438\u043d\u0442\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0418\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u044f \u0440\u0443\u043f\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0418\u0437\u0440\u0430\u0438\u043b\u044c \u0436\u0430\u04a3\u0430 \u0448\u0435\u043a\u0435\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u04ae\u043d\u0434\u0456\u0441\u0442\u0430\u043d \u0440\u0443\u043f\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0418\u0440\u0430\u043a \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0418\u0440\u0430\u043d \u0440\u0438\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043d\u0434\u0438\u044f \u043a\u0440\u043e\u043d\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u042f\u043c\u0430\u0439\u043a\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0418\u043e\u0440\u0434\u0430\u043d\u0438\u044f \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u0416\u0430\u043f\u043e\u043d\u0438\u044f \u0438\u0435\u043d\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u041a\u0435\u043d\u0438\u044f \u0448\u0438\u043b\u043b\u0438\u043d\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u049a\u044b\u0440\u0493\u044b\u0437\u0441\u0442\u0430\u043d \u0441\u043e\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u041a\u0430\u043c\u0431\u043e\u0434\u0436\u0430 \u0440\u0438\u0435\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u041a\u043e\u043c\u043e\u0440 \u0430\u0440\u0430\u043b\u0434\u0430\u0440\u044b \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0421\u043e\u043b\u0442\u04af\u0441\u0442\u0456\u043a \u041a\u043e\u0440\u0435\u044f \u0432\u043e\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u041e\u04a3\u0442\u04af\u0441\u0442\u0456\u043a \u041a\u043e\u0440\u0435\u044f \u0432\u043e\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u041a\u0443\u0432\u0435\u0439\u0442 \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u041a\u0430\u0439\u043c\u0430\u043d \u0430\u0440\u0430\u043b\u0434\u0430\u0440\u044b \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u049a\u0430\u0437\u0430\u049b\u0441\u0442\u0430\u043d \u0442\u0435\u04a3\u0433\u0435\u0441\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u041b\u0430\u043e\u0441 \u043a\u0438\u043f\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u041b\u0438\u0432\u0430\u043d \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0428\u0440\u0438-\u041b\u0430\u043d\u043a\u0430 \u0440\u0443\u043f\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u041b\u0438\u0431\u0435\u0440\u0438\u044f \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u041b\u0438\u0442\u0432\u0430 \u043b\u0438\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u041b\u0430\u0442\u0432\u0438\u044f \u043b\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u041b\u0438\u0432\u0438\u044f \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u041c\u0430\u0440\u043e\u043a\u043a\u043e \u0434\u0438\u0440\u0445\u0430\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u041c\u043e\u043b\u0434\u043e\u0432\u0430 \u043b\u0435\u0439\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0433\u0430\u0441\u0438 \u0430\u0440\u0438\u0430\u0440\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0438\u044f \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u041c\u044c\u044f\u043d\u043c\u0430 \u043a\u044c\u044f\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u041c\u043e\u04a3\u0493\u043e\u043b\u0438\u044f \u0442\u0443\u0433\u0440\u0438\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u041c\u0430\u043a\u0430\u043e \u043f\u0430\u0442\u0430\u043a\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u0442\u0430\u043d\u0438\u044f \u0443\u0433\u0438\u044f\u0441\u044b (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u0442\u0430\u043d\u0438\u044f \u0443\u0433\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u043a\u0438\u0439 \u0440\u0443\u043f\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u041c\u0430\u043b\u044c\u0434\u0438\u0432 \u0440\u0443\u0444\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0432\u0438 \u043a\u0432\u0430\u0447\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u041c\u0435\u043a\u0441\u0438\u043a\u0430 \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0439\u0437\u0438\u044f \u0440\u0438\u043d\u0433\u0433\u0438\u0442\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u041c\u043e\u0437\u0430\u043c\u0431\u0438\u043a \u043c\u0435\u0442\u0438\u043a\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u041d\u0430\u043c\u0438\u0431\u0438\u044f \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u041d\u0438\u0433\u0435\u0440\u0438\u044f \u043d\u0430\u0439\u0440\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u041d\u0438\u043a\u0430\u0440\u0430\u0433\u0443\u0430 \u043a\u043e\u0440\u0434\u043e\u0431\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u041d\u043e\u0440\u0432\u0435\u0433\u0438\u044f \u043a\u0440\u043e\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u041d\u0435\u043f\u0430\u043b \u0440\u0443\u043f\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0416\u0430\u04a3\u0430 \u0417\u0435\u043b\u0430\u043d\u0434\u0438\u044f \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u041e\u043c\u0430\u043d \u0440\u0438\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u041f\u0430\u043d\u0430\u043c\u0430 \u0431\u0430\u043b\u044c\u0431\u043e\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u041f\u0435\u0440\u0443 \u0441\u043e\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u041f\u0430\u043f\u0443\u0430 - \u0416\u0430\u04a3\u0430 \u0413\u0432\u0438\u043d\u0435\u044f \u043a\u0438\u043d\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u0424\u0438\u043b\u0438\u043f\u043f\u0438\u043d \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u041f\u04d9\u043a\u0456\u0441\u0442\u0430\u043d \u0440\u0443\u043f\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u041f\u043e\u043b\u044c\u0448\u0430 \u0437\u043b\u043e\u0442\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u041f\u0430\u0440\u0430\u0433\u0432\u0430\u0439 \u0433\u0443\u0430\u0440\u0430\u043d\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u041a\u0430\u0442\u0430\u0440 \u0440\u0438\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0420\u0443\u043c\u044b\u043d\u0438\u044f \u043b\u0435\u0439\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0421\u0435\u0440\u0431\u0438\u044f \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0420\u0435\u0441\u0435\u0439 \u0440\u0443\u0431\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0420\u0443\u0430\u043d\u0434\u0430 \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0421\u0430\u0443\u0434 \u0410\u0440\u0430\u0431\u0438\u044f\u0441\u044b\u043d\u044b\u04a3 \u0440\u0438\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0421\u043e\u043b\u043e\u043c\u043e\u043d \u0430\u0440\u0430\u043b\u0434\u0430\u0440\u044b \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0421\u0435\u0439\u0448\u0435\u043b\u044c \u0440\u0443\u043f\u0438\u044f\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0421\u0443\u0434\u0430\u043d \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0428\u0432\u0435\u0446\u0438\u044f \u043a\u0440\u043e\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0421\u0438\u043d\u0433\u0430\u043f\u0443\u0440 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u04d8\u0443\u043b\u0438\u0435 \u0415\u043b\u0435\u043d\u0430 \u0430\u0440\u0430\u043b\u044b \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0421\u044c\u0435\u0440\u0440\u0430-\u041b\u0435\u043e\u043d\u0435 \u043b\u0435\u043e\u043d\u0435\u0441\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0421\u043e\u043c\u0430\u043b\u0438 \u0448\u0438\u043b\u043b\u0438\u043d\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0421\u0443\u0440\u0438\u043d\u0430\u043c \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u041e\u04a3\u0442\u04af\u0441\u0442\u0456\u043a \u0421\u0443\u0434\u0430\u043d \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u0421\u0430\u043d\u0442-\u0422\u043e\u043c\u0435 \u043c\u0435\u043d \u041f\u0440\u0438\u043d\u0441\u0438\u043f\u0438 \u0434\u043e\u0431\u0440\u0430\u0441\u044b (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0421\u0430\u043d\u0442-\u0422\u043e\u043c\u0435 \u043c\u0435\u043d \u041f\u0440\u0438\u043d\u0441\u0438\u043f\u0438 \u0434\u043e\u0431\u0440\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0421\u0438\u0440\u0438\u044f \u0444\u0443\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0421\u0432\u0430\u0437\u0438\u043b\u0435\u043d\u0434 \u043b\u0438\u043b\u0430\u043d\u0433\u0435\u043d\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0422\u0430\u0439 \u0431\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0422\u04d9\u0436\u0456\u043a\u0441\u0442\u0430\u043d \u0441\u043e\u043c\u043e\u043d\u0438\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u0422\u04af\u0440\u0456\u043a\u043c\u0435\u043d\u0441\u0442\u0430\u043d \u043c\u0430\u043d\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u0422\u0443\u043d\u0438\u0441 \u0434\u0438\u043d\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u0422\u043e\u043d\u0433\u0430 \u043f\u0430\u0430\u043d\u0433\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0422\u04af\u0440\u0456\u043a \u043b\u0438\u0440\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0422\u0440\u0438\u043d\u0438\u0434\u0430\u0434 \u0436\u04d9\u043d\u0435 \u0422\u043e\u0431\u0430\u0433\u043e \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0416\u0430\u04a3\u0430 \u0422\u0430\u0439\u0432\u0430\u043d \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0422\u0430\u043d\u0437\u0430\u043d\u0438\u044f \u0448\u0438\u043b\u043b\u0438\u043d\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0438\u043d\u0430 \u0433\u0440\u0438\u0432\u043d\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0423\u0433\u0430\u043d\u0434\u0430 \u0448\u0438\u043b\u043b\u0438\u043d\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0410\u049a\u0428 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0439 \u043f\u0435\u0441\u043e\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u04e8\u0437\u0431\u0435\u043a\u0441\u0442\u0430\u043d \u0441\u043e\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0441\u0443\u044d\u043b\u0430 \u0431\u043e\u043b\u0438\u0432\u0430\u0440\u044b (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0441\u0443\u044d\u043b\u0430 \u0431\u043e\u043b\u0438\u0432\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0412\u044c\u0435\u0442\u043d\u0430\u043c \u0434\u043e\u043d\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0412\u0430\u043d\u0443\u0430\u0442\u0443 \u0432\u0430\u0442\u0443\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0421\u0430\u043c\u043e\u0430 \u0442\u0430\u043b\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u041a\u0424\u0410 \u0412\u0415\u0410\u0421 \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0428\u044b\u0493\u044b\u0441 \u041a\u0430\u0440\u0438\u0431 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u041a\u0424\u0410 \u0412\u0421\u0415\u0410\u041e \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u041a\u0424\u041f \u0444\u0440\u0430\u043d\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0411\u0435\u043b\u0433\u0456\u0441\u0456\u0437 \u0432\u0430\u043b\u044e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u0419\u0435\u043c\u0435\u043d \u0440\u0438\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u041e\u04a3\u0442\u04af\u0441\u0442\u0456\u043a \u0410\u0444\u0440\u0438\u043a\u0430 \u0440\u044d\u043d\u0434\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u0417\u0430\u043c\u0431\u0438\u044f \u043a\u0432\u0430\u0447\u0430\u0441\u044b"_s)
		})
	}));
	return data;
}

CurrencyNames_kk::CurrencyNames_kk() {
}

$Class* CurrencyNames_kk::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_kk, name, initialize, &_CurrencyNames_kk_ClassInfo_, allocate$CurrencyNames_kk);
	return class$;
}

$Class* CurrencyNames_kk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun