#include <sun/util/resources/cldr/ext/CurrencyNames_am.h>

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

$MethodInfo _CurrencyNames_am_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_am::*)()>(&CurrencyNames_am::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_am_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_am",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_am_MethodInfo_
};

$Object* allocate$CurrencyNames_am($Class* clazz) {
	return $of($alloc(CurrencyNames_am));
}

void CurrencyNames_am::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_am::getContents() {
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
			$of("AU$"_s)
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
			$of(u"\u12e8\u127b\u12ed\u1293 \u12e9\u12cb\u1295"_s)
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
			$of(u"\u1265\u122d"_s)
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
			$of("ZMK"_s),
			$of("ZMK"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u12e8\u1270\u1263\u1260\u1229\u1275 \u12e8\u12a0\u1228\u1265 \u12a4\u121d\u122c\u1275\u1235 \u12f5\u122d\u1200\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u12e8\u12a0\u134d\u130b\u1295 \u12a0\u134d\u130b\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u12e8\u12a0\u120d\u1263\u1295\u12eb \u120c\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u12e8\u12a0\u122d\u1218\u1295 \u12f5\u122b\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u1294\u12d8\u122d\u120b\u1295\u12f5\u1235 \u12a0\u1295\u1272\u120a\u12a0\u1295 \u130a\u120d\u12f0\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u12e8\u12a0\u1295\u130e\u120b \u12a9\u12cb\u1295\u12db"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u12e8\u12a0\u122d\u1300\u1295\u1272\u1293 \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u12a0\u1229\u1263\u1295 \u134d\u120e\u122a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u12e8\u12a0\u12db\u122d\u1263\u1303\u1295 \u121b\u1293\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u12e8\u1266\u1235\u1292\u12eb \u1204\u122d\u12de\u130e\u126a\u1293 \u12e8\u121a\u1218\u1290\u12d8\u122d \u121b\u122d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u12e8\u1263\u122d\u1264\u12f6\u1235 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u12e8\u1263\u1295\u130d\u120b\u12f2\u123d \u1273\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u12e8\u1261\u120d\u130b\u122a\u12eb \u120c\u126d"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u12e8\u1263\u12bd\u122c\u1295 \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u12e8\u1265\u1229\u1295\u12f2 \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u12e8\u1264\u122d\u1219\u12f3 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u12e8\u1265\u1229\u1294 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u12e8\u1266\u120a\u126a\u12eb \u1266\u120a\u126a\u12eb\u1296"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u12e8\u1265\u122b\u12da\u120d \u122a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u12e8\u1263\u1203\u121b\u1235 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u1265\u1201\u1273\u1292\u12dd \u1295\u1309\u120d\u1275\u1228\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u12e8\u1266\u1275\u1235\u12cb\u1293 \u1351\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u12e8\u1264\u120b\u1229\u1235\u12eb \u1229\u1265\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u12e8\u1264\u120b\u1229\u1235\u12eb \u1229\u1265\u120d (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u12e8\u1264\u120a\u12dd \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u12e8\u12ab\u1293\u12f3 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u12e8\u12ae\u1295\u1310 \u134d\u122b\u1295\u12ad \u12ae\u1295\u1310\u120c\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u12e8\u1235\u12ca\u1235 \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u12e8\u127a\u120a \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u12e8\u127b\u12ed\u1293 \u12e9\u12cb\u1295 (\u12e8\u12cd\u132d \u121d\u1295\u12db\u122a)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u12e8\u127b\u12ed\u1293 \u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u12e8\u12ae\u120e\u121d\u1262\u12eb \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u12e8\u12ae\u1235\u1273\u122a\u12ab \u12ae\u120e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u12e8\u12a9\u1263 \u12e8\u121a\u1218\u1290\u12d8\u122d \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u12e8\u12a9\u1263 \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u12e8\u12ac\u1355 \u126b\u122d\u12f2 \u12a4\u1235\u12a9\u12f6"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u127c\u12ad \u122a\u1350\u1265\u120a\u12ad \u12ae\u1229\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u12e8\u1305\u1261\u1272 \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u12e8\u12f4\u1295\u121b\u122d\u12ad \u12ad\u122e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u12e8\u12f6\u121a\u1292\u12ad \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u12e8\u12a0\u120d\u1304\u122a\u12eb \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u12e8\u130d\u1265\u133d \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u12e8\u12a4\u122d\u1275\u122b \u1293\u1245\u134b"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u12e8\u12a2\u1275\u12ee\u1335\u12eb \u1265\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u12e9\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u12e8\u134a\u1302 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u12e8\u134e\u12ad\u120b\u1295\u12f5 \u12f0\u1234\u1276\u127d \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u12e8\u12a5\u1295\u130d\u120a\u12dd \u1353\u12cd\u1295\u12f5 \u1235\u1270\u122d\u120a\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u12e8\u1306\u122d\u1305\u12eb \u120b\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u12e8\u130b\u1293 \u1234\u12f2"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u12e8\u130b\u1293 \u1232\u12f2"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u1302\u1265\u122b\u120d\u1270\u122d \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u12e8\u130b\u121d\u1262\u12eb \u12f3\u120b\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u12e8\u130a\u1292 \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u1313\u1272\u121b\u120b\u1295 \u12a9\u1272\u12db\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u12e8\u1309\u12e8\u1293 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u12e8\u1206\u1295\u130d\u12ae\u1295\u130d \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u12e8\u1203\u1295\u12f1\u122b \u120c\u121d\u1353\u12a0\u12ed\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u12e8\u12ad\u122e\u123d\u12eb \u12a9\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u12e8\u1203\u12eb\u1272 \u1313\u122d\u12f4"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u12e8\u1203\u1295\u130b\u122a\u12eb\u1295 \u134e\u122a\u1295\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u12e8\u12a2\u1295\u12f6\u1294\u12e5\u12eb \u1229\u1352\u1203"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u12e8\u12a5\u1235\u122b\u12a4\u120d \u12a0\u12f2\u1235 \u123d\u1245\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u12e8\u1215\u1295\u12f5 \u1229\u1352"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u12e8\u12a2\u122b\u1245 \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u12e8\u12a2\u122b\u1295 \u122a\u12a0\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u12e8\u12a0\u12ed\u1235\u120b\u1295\u12f5 \u12ad\u122e\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u12e8\u1303\u121b\u12ed\u12ab \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u12e8\u1306\u122d\u12f3\u1295 \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u12e8\u1303\u1353\u1295 \u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u12e8\u12ac\u1292\u12eb \u123a\u120a\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u12e8\u12aa\u122d\u130a\u1235\u1273\u1295 \u1236\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u12e8\u12ab\u121d\u1266\u12f2\u12eb \u122c\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u12e8\u12ae\u121e\u122e \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u12e8\u1230\u121c\u1295 \u12ae\u122a\u12eb \u12ce\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u12e8\u12f0\u1261\u1265 \u12ae\u122a\u12eb \u12ce\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u12e8\u12a9\u12cc\u1275 \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u12e8\u12ab\u12ed\u121b\u1295 \u12f0\u1234\u1276\u127d \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u12e8\u12ab\u12db\u12aa\u1235\u1273\u1295 \u1270\u1295\u130c"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u12e8\u120b\u12a6\u1272 \u12aa\u1355"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u12e8\u120a\u1263\u1296\u1235 \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u12e8\u1232\u122a\u120b\u1295\u12ab \u1229\u1352"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u12e8\u120b\u12ed\u1264\u122a\u12eb \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u12e8\u120c\u1236\u1276 \u120e\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u120a\u1271\u12cc\u1295\u12eb\u1295 \u120a\u1273\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u12e8\u120b\u1272\u126b \u120b\u1275\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u12e8\u120a\u1262\u12eb \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u12e8\u121e\u122e\u12ae \u12f2\u122d\u1200\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u121e\u120d\u12f6\u126b\u1295 \u120a\u12a1"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u12e8\u121b\u12f0\u130b\u1235\u12ab\u122d \u121b\u120b\u130b\u1235\u12ed \u12a0\u122a\u12eb\u122d\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u12e8\u121c\u1246\u12f5\u1295\u12eb \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u12e8\u121b\u12eb\u1293\u121b\u122d \u12ad\u12eb\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u12e8\u121e\u1295\u130e\u120a\u12eb\u1295 \u1271\u130d\u122a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u12e8\u121b\u12ab\u1294\u12dd \u1353\u1273\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u12e8\u121e\u122a\u1274\u1292\u12eb \u12a6\u12cd\u1309\u12eb (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u12e8\u121e\u122a\u1274\u1292\u12eb \u12a6\u12cd\u1309\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u12e8\u121e\u122a\u1238\u1235 \u1229\u1352"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u12e8\u121b\u120d\u12f2\u126b \u1229\u134a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u12e8\u121b\u120b\u12ca \u12a9\u12cb\u127b"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u12e8\u121c\u12ad\u1232\u12ae \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u12e8\u121b\u120c\u12e5\u12eb \u122a\u1295\u130a\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u12e8\u121e\u12db\u121d\u1262\u12ad \u121c\u1272\u12ab\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u12e8\u1293\u121a\u1262\u12eb \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u12e8\u1293\u12ed\u1304\u122a\u12eb \u1293\u12ed\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u12e8\u1292\u12ab\u122b\u1313 \u12ae\u122d\u12f6\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u12e8\u1296\u122d\u12cc\u12ed \u12ad\u122e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u12e8\u1294\u1353\u120d \u1229\u1352"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u12e8\u1292\u12cd\u12da\u120b\u1295\u12f5 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u12e8\u12a6\u121b\u1295 \u122a\u12a0\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u1353\u1293\u121b\u1292\u12a0\u1295 \u1263\u120d\u1266\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u12e8\u1354\u1229\u126a\u12eb \u1236\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u12e8\u1353\u1355\u12cb \u1292\u12cd \u130a\u1292 \u12aa\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u12e8\u134a\u120a\u1352\u1295\u1235 \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u12e8\u1353\u12aa\u1235\u1273\u1295 \u1229\u1352"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u12e8\u1356\u120b\u1295\u12f5 \u12dd\u120e\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u12e8\u1353\u122b\u1313\u12ed \u1309\u12a0\u122b\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u12e8\u12b3\u1273\u122d \u122a\u12a0\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u12e8\u122e\u121b\u1292\u12eb \u1208\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u12e8\u1230\u122d\u1262\u12eb \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u12e8\u1229\u1235\u12eb \u1229\u1265\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u12e8\u1229\u12cb\u1295\u12f3 \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u12e8\u1233\u12cd\u12f2 \u122a\u12eb\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u12e8\u1230\u1208\u121e\u1295 \u12f0\u1234\u1276\u127d \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u12e8\u1232\u123c\u120d \u1229\u1352"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u12e8\u1231\u12f3\u1295 \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u12e8\u1231\u12f3\u1295 \u1353\u12cd\u1295\u12f5 (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u12e8\u1235\u12ca\u12f5\u1295 \u12ad\u122e\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u12e8\u1232\u1295\u130b\u1356\u122d \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u12e8\u1234\u12ed\u1295\u1275 \u1214\u120c\u1293 \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u12e8\u1234\u122b\u120a\u12ce\u1295 \u120a\u12ce\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u12e8\u1236\u121b\u120c \u123a\u120a\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u12e8\u1230\u122d\u1293\u121c\u12dd \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u12e8\u12f0\u1261\u1265 \u1231\u12f3\u1295 \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u12e8\u1233\u12a6 \u1276\u121c \u12a5\u1293 \u1355\u122a\u1295\u1232\u1354 \u12f6\u1265\u122b (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u12e8\u1233\u12a6 \u1276\u121c \u12a5\u1293 \u1355\u122a\u1295\u1232\u1354 \u12f6\u1265\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u12e8\u1232\u122a\u12eb \u1353\u12cd\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u12e8\u1235\u12cb\u12da\u120b\u1295\u12f5 \u120a\u120b\u1295\u1308\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u12e8\u1273\u12ed\u120b\u1295\u12f5 \u1263\u1205\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u12e8\u1273\u1302\u12ad\u1235\u1273\u1295 \u1236\u121e\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u1271\u122d\u12ad\u121c\u1292\u1235\u1273\u1292 \u121b\u1293\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u12e8\u1271\u1292\u12da\u12eb \u12f2\u1293\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u1276\u1295\u130b\u1295 \u1353\u2019\u12a0\u1295\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u12e8\u1271\u122d\u12ad \u120a\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u12e8\u1275\u122a\u1295\u12f3\u12f5 \u12a5\u1293 \u1276\u1264\u130e\u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u12e8\u12a0\u12f2\u1237 \u1273\u12ed\u12cb\u1295 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u12e8\u1273\u1295\u12db\u1292\u12eb \u123a\u120a\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u12e8\u12e9\u12ad\u122c\u1295 \u1200\u122a\u12ed\u126d\u1292\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u12e8\u12e9\u130b\u1295\u12f3 \u123a\u120a\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab\u1295 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u12e8\u12a1\u122b\u1313\u12ed \u1354\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u12e8\u12a1\u12dd\u1354\u12aa\u1235\u1273\u1295 \u1236\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u12e8\u126c\u1295\u12dd\u12cc\u120b \u1266\u120a\u126b\u122d (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u12e8\u126c\u1295\u12dd\u12cc\u120b-\u1266\u120a\u126b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u12e8\u126d\u12e8\u1275\u1293\u121d \u12f6\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u12e8\u126b\u1295\u12cb\u1295\u1271 \u126b\u1271"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u1233\u121e\u12a0\u1295 \u1273\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u12e8\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u134d\u122a\u12ab \u1234\u134b \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u12e8\u121d\u12d5\u122b\u1265 \u12ab\u122a\u1265\u12eb\u1295 \u12f6\u120b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u12e8\u121d\u12d5\u122b\u1265 \u12a0\u134d\u122a\u12ab \u1234\u134b \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u1232 \u12a4\u134d \u1352 \u134d\u122b\u1295\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u12eb\u120d\u1273\u12c8\u1240 \u1308\u1295\u12d8\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u12e8\u12e8\u1218\u1295 \u122a\u12a0\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u12e8\u12f0\u1261\u1265 \u12a0\u134d\u122a\u12ab \u122b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u12e8\u12db\u121d\u1262\u12eb \u12ad\u12cb\u127b (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u12e8\u12db\u121d\u1262\u12eb \u12ad\u12cb\u127b"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u12e8\u12da\u121d\u1267\u1261\u12cc \u12f6\u120b\u122d"_s)
		})
	}));
	return data;
}

CurrencyNames_am::CurrencyNames_am() {
}

$Class* CurrencyNames_am::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_am, name, initialize, &_CurrencyNames_am_ClassInfo_, allocate$CurrencyNames_am);
	return class$;
}

$Class* CurrencyNames_am::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun