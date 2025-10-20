#include <sun/util/resources/cldr/ext/CurrencyNames_kok.h>

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

$MethodInfo _CurrencyNames_kok_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_kok::*)()>(&CurrencyNames_kok::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_kok_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_kok",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_kok_MethodInfo_
};

$Object* allocate$CurrencyNames_kok($Class* clazz) {
	return $of($alloc(CurrencyNames_kok));
}

void CurrencyNames_kok::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_kok::getContents() {
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
			$of(u"\u0930\u0949\u0928"_s)
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
			$of(u"\u092f\u0941\u0928\u093e\u0907\u091f\u0947\u0921 \u0905\u0930\u092c \u0907\u092e\u0940\u0930\u0945\u091f\u094d\u0938 \u0926\u093f\u0930\u0939\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0905\u092b\u0917\u093e\u0923 \u0905\u092b\u0917\u093e\u0923\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0905\u0932\u094d\u092c\u0947\u0928\u093f\u092f\u0928 \u0932\u0947\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0905\u0930\u094d\u092e\u0947\u0928\u093f\u092f\u0928 \u0921\u094d\u0930\u093e\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0928\u0945\u0926\u0930\u0932\u0901\u0921 \u0905\u0901\u091f\u093f\u0932\u093f\u092f\u0928 \u0917\u093f\u0932\u094d\u0921\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0905\u0902\u0917\u094b\u0932\u0928 \u0915\u094d\u0935\u0949\u0928\u094d\u091c"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0905\u0930\u094d\u091c\u0947\u0902\u091f\u093f\u0928\u093e \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u093e\u0908 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0905\u0930\u0941\u092c\u093e\u0928 \u092b\u094d\u0932\u094b\u0930\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0905\u091c\u093c\u0930\u092c\u0948\u091c\u093e\u0928\u0940 \u092e\u0928\u093e\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u092c\u094b\u0938\u094d\u0928\u093f\u092f\u093e-\u0939\u0947\u0930\u094d\u091c\u0947\u0917\u094b\u0935\u093f\u0928\u093e \u0930\u0941\u092a\u093e\u0902\u0924\u0930\u0940\u0924 \u092e\u093e\u0930\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u092c\u093e\u0930\u094d\u092c\u093e\u0921\u093f\u092f\u093e\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u092c\u093e\u0902\u0917\u0932\u093e\u0926\u0947\u0936\u0940 \u091f\u093e\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u092c\u0932\u094d\u0917\u0947\u0930\u093f\u092f\u0928 \u0932\u0947\u0935"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u092c\u0939\u0930\u093f\u0928\u0940 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u092c\u0941\u0930\u0941\u0902\u0921\u0940 \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u092c\u0930\u092e\u0941\u0926\u093e\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u092c\u094d\u0930\u0942\u0928\u0947\u0908 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u092c\u094b\u0932\u093f\u0935\u094d\u0939\u093f\u092f\u0928 \u092c\u094b\u0932\u093f\u0935\u093f\u092f\u093e\u0928\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u092c\u094d\u0930\u093e\u091d\u093f\u0932\u093f\u092f\u0928 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u092c\u0939\u093e\u092e\u093f\u092f\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u092d\u0941\u0924\u093e\u0928\u0940\u091c \u0928\u093e\u0917\u0932\u094d\u091f\u094d\u0930\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u092c\u094b\u0924\u094d\u0938\u0935\u093e\u0928\u093e \u092a\u0941\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u092c\u0948\u0932\u094b\u0930\u0941\u0938\u093f\u092f\u0928\u094d \u0930\u0942\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u092c\u0947\u0932\u093f\u091d \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0915\u0945\u0928\u093e\u0921\u093f\u092f\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0915\u093e\u0901\u0917\u094b\u0932\u093f\u0938\u0940 \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0938\u094d\u0935\u093f\u0938 \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u091a\u093f\u0932\u0940 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u091a\u093f\u0928\u0940 \u092f\u0941\u0906\u0928 (\u0911\u092b\u0936\u094b\u0930)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u091a\u093f\u0928\u0940 \u092f\u0941\u0906\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0915\u094b\u0932\u0902\u092c\u093f\u092f\u0928 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u0915\u094b\u0938\u094d\u0924\u093e \u0930\u093f\u0915\u093e \u0915\u0949\u0932\u0949\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u0915\u094d\u092f\u0941\u092c\u093e\u0928 \u0930\u0941\u092a\u093e\u0902\u0924\u0930\u0940\u0924 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u0915\u094d\u092f\u0941\u092c\u093e\u0928 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0915\u0947\u092a \u0935\u0930\u094d\u0926\u0947 \u090f\u0938\u094d\u0915\u0941\u0921\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u091a\u0947\u0915 \u0915\u094b\u0930\u0941\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u091c\u093f\u092c\u0942\u0924\u0940 \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0921\u0945\u0928\u093f\u0936 \u0915\u094d\u0930\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0921\u094b\u092e\u093f\u0928\u093f\u0915\u0928 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0905\u0932\u094d\u091c\u0947\u0930\u093f\u092f\u093e\u0908 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0908\u091c\u093f\u092a\u094d\u0924\u0940 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0907\u0930\u093f\u091f\u094d\u0930\u093f\u092f\u0928 \u0928\u093e\u0915\u094d\u092b\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0907\u0925\u093f\u092f\u094b\u092a\u093f\u092f\u093e\u0908 \u092c\u093f\u0930\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u092f\u0941\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u092b\u093f\u091c\u0940 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u092b\u093c\u0949\u0915\u0932\u0948\u0902\u0921 \u0906\u0907\u0932\u0948\u0902\u0921\u094d\u0938 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u092c\u094d\u0930\u093f\u091f\u093f\u0936 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u091c\u0949\u0930\u094d\u091c\u093f\u092f\u0928 \u0932\u093e\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0918\u093e\u0928\u093e\u0908 \u0938\u0947\u0921\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u091c\u093f\u092c\u094d\u0930\u093e\u0932\u094d\u091f\u0930 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u0917\u0945\u092e\u094d\u092c\u093f\u092f\u0928 \u0926\u0932\u093e\u0938\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0917\u093f\u0928\u0940\u0928 \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0917\u094d\u0935\u093e\u091f\u0947\u092e\u093e\u0932\u093e \u0915\u0941\u090f\u091f\u094d\u091d\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0917\u092f\u093e\u0928\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0939\u093e\u0901\u0917 \u0915\u093e\u0901\u0917 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0939\u094b\u0902\u0921\u0941\u0930\u093e\u0928 \u0932\u0947\u092e\u094d\u092a\u093f\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0915\u094d\u0930\u094b\u092f\u0947\u0937\u093f\u092f\u0928\u094d \u0915\u0941\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0939\u0948\u0924\u0940\u092f\u0928 \u0917\u094c\u0930\u094d\u0921\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0939\u0902\u0917\u0947\u0930\u093f\u092f\u0928 \u092b\u094b\u0930\u093f\u0902\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0907\u0902\u0921\u094b\u0928\u0947\u0936\u093f\u092f\u0928 \u0930\u0941\u092a\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0907\u0938\u094d\u0924\u094d\u0930\u093e\u092f\u0932\u0940 \u0928\u094d\u092f\u0941 \u0936\u0947\u0915\u0947\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u092d\u093e\u0930\u0924\u0940\u092f \u0930\u0941\u092a\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0907\u0930\u093e\u0915\u0940 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0908\u0930\u093e\u0928\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0906\u0908\u0938\u094d\u0932\u093e\u0928\u094d\u0921\u093f\u0915 \u0915\u094d\u0930\u094b\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u091c\u092e\u0948\u0915\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u091c\u0949\u0930\u094d\u0921\u0928\u093f\u092f\u0928 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u091c\u092a\u093e\u0928\u0940 \u092f\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0915\u0947\u0928\u092f\u093e\u0908 \u0936\u093f\u0932\u093f\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u0915\u093f\u0930\u0917\u093f\u091d\u0938\u094d\u0924\u093e\u0928 \u0938\u094b\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0915\u0902\u092c\u094b\u0921\u093f\u092f\u0928 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0915\u094b\u092e\u094b\u0930\u093f\u092f\u0928 \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0909\u0924\u094d\u0924\u0930 \u0915\u094b\u0930\u093f\u092f\u0928 \u0935\u0949\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0926\u0915\u094d\u0937\u093f\u0923 \u0915\u094b\u0930\u093f\u092f\u0928 \u0935\u0949\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0915\u0941\u0935\u0947\u0924\u0940 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u0915\u0948\u092e\u0947\u0928 \u0906\u0907\u0932\u0948\u0902\u0921\u094d\u0938 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0915\u091d\u093e\u0915\u0938\u094d\u0924\u093e\u0928\u0940 \u091f\u0947\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0932\u093e\u0913 \u0915\u093f\u092a"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0932\u093f\u092c\u093e\u0928\u0947\u0938 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0936\u094d\u0930\u0940 \u0932\u0902\u0915\u093e \u0930\u0941\u092a\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0932\u093e\u092f\u092c\u0947\u0930\u093f\u092f\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0932\u0940\u092c\u093f\u092f\u093e\u0928 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u092e\u094b\u0930\u0915\u094d\u0915\u0928 \u0926\u093f\u0930\u0939\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u092e\u094b\u0932\u094d\u0926\u094b\u0935\u093e\u0928 \u0932\u093f\u092f\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u092e\u0932\u093e\u0917\u093e\u0938\u0940 \u090f\u0930\u093f\u092f\u093e\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u092e\u0938\u0940\u0921\u094b\u0928\u093f\u092f\u0928\u094d \u0921\u093f\u0928\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u092e\u094d\u092f\u093e\u0928\u092e\u093e\u0930 \u0915\u094d\u092f\u093e\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u092e\u0902\u0917\u094b\u0932\u093f\u092f\u0928 \u0924\u0941\u0917\u0930\u093f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u092e\u0915\u093e\u0928\u0947\u0938\u0947 \u092a\u091f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u092e\u0949\u0930\u093f\u091f\u093e\u0928\u093f\u092f\u093e \u0909\u0917\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u092e\u0949\u0930\u093f\u0936\u0938 \u0930\u0941\u092a\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u092e\u093e\u0932\u0926\u093f\u0935\u0940 \u0930\u0941\u092b\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u092e\u0932\u093e\u0935\u093f\u092f\u0928 \u0915\u094d\u0935\u093e\u091a\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u0928 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u092e\u0932\u0947\u0936\u093f\u092f\u093e\u0908 \u0930\u093f\u0902\u0917\u094d\u0917\u093f\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u092e\u094b\u091d\u093e\u0902\u092c\u093f\u0915\u0928 \u092e\u0947\u091f\u093f\u0915\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0928\u093e\u092e\u0940\u092c\u093f\u092f\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0928\u093e\u092f\u091c\u0947\u0930\u093f\u092f\u0928 \u0928\u093e\u092f\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u0928\u093f\u0915\u093e\u0930\u093e\u0917\u0941\u0906\u0928 \u0915\u0949\u0930\u094d\u0921\u094b\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0928\u0949\u0930\u094d\u0935\u0947\u0917\u0928 \u0915\u094d\u0930\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0928\u0947\u092a\u093e\u0933\u0940 \u0930\u0941\u092a\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0928\u094d\u092f\u0941\u091d\u0940\u0932\u0945\u0928\u094d\u0921 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0913\u092e\u093e\u0928\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u092a\u093e\u0928\u093e\u092e\u093e\u0928\u093f\u092f\u0928 \u092c\u093e\u0932\u094d\u092c\u094b\u0906"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u092a\u0947\u0930\u093f\u0935\u093f\u092f\u0928 \u0938\u094b\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u092a\u093e\u092a\u0941\u0906 \u0928\u094d\u092f\u0941 \u0917\u093f\u0928\u0940 \u0915\u093f\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u092b\u093f\u0932\u093f\u092a\u093f\u0928\u0940 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u092a\u093e\u0915\u093f\u0938\u094d\u0924\u093e\u0928\u0940 \u0930\u0941\u092a\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u092a\u094b\u0932\u093f\u0937 \u091d\u094d\u0932\u094b\u091f\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u092a\u0930\u093e\u0917\u094d\u0935\u0947\u0928 \u0917\u094c\u0930\u093e\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0915\u0924\u093e\u0930\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0930\u094b\u092e\u093e\u0928\u093f\u092f\u0928\u094d \u0932\u093f\u092f\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0938\u0930\u094d\u092c\u093f\u092f\u0928 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0930\u0941\u0938\u0940 \u0930\u0941\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0930\u0935\u093e\u0902\u0921\u093e \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0938\u094c\u0926\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0938\u094b\u0932\u094b\u092e\u0928 \u0906\u092f\u0932\u0901\u0921\u094d\u0938 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0938\u0947\u0936\u0947\u0932\u094d\u0932\u094b\u0907\u0938 \u0930\u0941\u092a\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0938\u0941\u0926\u093e\u0928\u0940 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0938\u094d\u0935\u0940\u0926\u0940\u0937 \u0915\u094d\u0930\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0938\u093f\u0902\u0917\u093e\u092a\u0942\u0930\u0940 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0938\u0947\u0902\u091f \u0939\u0947\u0932\u093f\u0928\u093e \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0938\u093f\u090f\u0930\u093e \u0932\u093f\u092f\u0949\u0928\u0940 \u0932\u093f\u092f\u0949\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0938\u094b\u092e\u093e\u0932\u0940 \u0936\u093f\u0932\u093f\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0938\u0941\u0930\u0940\u0928\u093e\u092e\u0940 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u0926\u0915\u094d\u0937\u093f\u0923 \u0938\u0941\u0921\u093e\u0928\u0940 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0938\u093e\u0913 \u091f\u094b\u092e \u0906\u0928\u0940 \u092a\u094d\u0930\u093f\u0928\u094d\u0938\u093f\u092a \u0921\u094b\u092c\u094d\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0938\u093f\u0930\u093f\u092f\u0928 \u092a\u093e\u0935\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0938\u094d\u0935\u093e\u091c\u0940 \u0932\u093f\u0932\u093e\u0902\u0917\u0947\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0925\u093e\u0908 \u092c\u093e\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0924\u093e\u091c\u093f\u0915\u093f\u0938\u094d\u0924\u093e\u0928\u0940 \u0938\u094b\u092e\u094b\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u0924\u0941\u0930\u094d\u0915\u092e\u0947\u0928\u093f\u0938\u094d\u0924\u093e\u0928\u0940 \u092e\u0928\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u091f\u094d\u092f\u0942\u0928\u0940\u0936\u093f\u092f\u0928 \u0921\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u091f\u094b\u0902\u0917\u0928 \u092a\u093e\u0902\u0917\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0924\u0941\u0930\u094d\u0915\u093f\u0936 \u0932\u093e\u092f\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u091f\u094d\u0930\u093f\u0928\u0940\u0921\u093e\u0921 \u0906\u0928\u0940 \u091f\u094b\u092c\u0945\u0917\u094b \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0928\u094d\u092f\u0942 \u0924\u093e\u092f\u0935\u093e\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0924\u0902\u091c\u093e\u0928\u093f\u092f\u093e \u0936\u093f\u0932\u093f\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u092f\u0941\u0915\u094d\u0930\u0947\u0928\u093f\u092f\u0928\u094d \u0930\u093f\u0935\u094d\u0928\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u092f\u0941\u0917\u093e\u0902\u0921\u093e \u0936\u093f\u0932\u093f\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u092f\u0941\u090f\u0938 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0909\u0930\u0941\u0917\u094d\u0935\u0947\u0928 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0909\u091c\u093c\u094d\u092c\u0947\u0915\u093f\u0938\u094d\u0924\u093e\u0928\u0940 \u0938\u094b\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0935\u093f\u0928\u0947\u091d\u0941\u090f\u0932\u093e \u092c\u094b\u0932\u093f\u0935\u094d\u0939\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0935\u093f\u092f\u0924\u0928\u093e\u092e\u0940 \u0921\u094b\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0935\u093e\u0928\u0942\u0906\u0924\u0942 \u0935\u093e\u0924\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0938\u092e\u094b\u0906\u0908 \u091f\u093e\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u092e\u0927\u094d\u092f \u0905\u092b\u094d\u0930\u0940\u0915\u0940 \u0938\u0940\u090f\u092b\u090f \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0909\u0926\u0947\u0902\u0924 \u0915\u0945\u0930\u093f\u092c\u093f\u092f\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0905\u0938\u094d\u0924\u0902\u0924 \u0906\u092b\u094d\u0930\u093f\u0915\u0940 \u0938\u0940\u090f\u092b\u090f \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u0938\u0940\u090f\u092b\u092a\u0940 \u092b\u094d\u0930\u0901\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0905\u091c\u094d\u091e\u093e\u0924 \u091a\u0932\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u092f\u0947\u092e\u0947\u0928\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0926\u0915\u094d\u0937\u093f\u0923 \u0906\u092b\u094d\u0930\u093f\u0915\u0928 \u0930\u0901\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u091d\u093e\u0902\u092c\u093f\u092f\u0928 \u0915\u094d\u0935\u093e\u091a\u093e"_s)
		})
	}));
	return data;
}

CurrencyNames_kok::CurrencyNames_kok() {
}

$Class* CurrencyNames_kok::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_kok, name, initialize, &_CurrencyNames_kok_ClassInfo_, allocate$CurrencyNames_kok);
	return class$;
}

$Class* CurrencyNames_kok::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun