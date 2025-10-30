#include <sun/util/resources/cldr/ext/CurrencyNames_my.h>

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

$MethodInfo _CurrencyNames_my_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_my::*)()>(&CurrencyNames_my::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_my_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_my",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_my_MethodInfo_
};

$Object* allocate$CurrencyNames_my($Class* clazz) {
	return $of($alloc(CurrencyNames_my));
}

void CurrencyNames_my::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_my::getContents() {
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
			$of("NAf"_s)
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
			$of("Afl"_s)
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
			$of("G"_s)
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
			$of("K"_s)
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
			$of("B/."_s)
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
			$of("TT$"_s)
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
			$of(u"\u1021\u102c\u101b\u1015\u103a\u1005\u1031\u102c\u103a\u1018\u103d\u102c\u1038\u1019\u103b\u102c\u1038 \u1015\u103c\u100a\u103a\u1011\u1031\u102c\u1004\u103a\u1005\u102f \u1012\u102b\u101f\u1019\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u1021\u102c\u1016\u1002\u1014\u103a \u1021\u102c\u1016\u1002\u102b\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u1021\u101a\u103a\u1018\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u101c\u102e\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u1021\u102c\u1019\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u1012\u101b\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u1014\u101a\u103a\u101e\u102c\u101c\u1014\u103a \u1021\u1014\u103a\u1010\u102e\u101c\u1014\u103a \u1002\u1004\u103a\u1038\u1012\u102b\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u1021\u1014\u103a\u1002\u102d\u102f\u101c\u102c \u1000\u103d\u1019\u103a\u1007\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u1021\u102c\u1002\u103b\u1004\u103a\u1010\u102e\u1038\u1014\u102c\u1038 \u1015\u102e\u1006\u102d\u102f (\u1041\u1049\u1048\u1043\u2013\u1041\u1049\u1048\u1045)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u1021\u102c\u1002\u103b\u1004\u103a\u1010\u102e\u1038\u1014\u102c\u1038 \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u1029\u1005\u1010\u103c\u1031\u1038\u101c\u103b \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u1021\u101b\u1030\u1038\u1017\u102c \u1016\u101c\u102d\u102f\u101b\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u1021\u1007\u102c\u1018\u102d\u102f\u1004\u103a\u1002\u103b\u1014\u103a \u1019\u102c\u1014\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u1018\u1031\u102c\u1037\u1005\u1014\u102e\u1038\u101a\u102c\u1038\u1014\u103e\u1004\u1037\u103a \u101f\u102c\u1007\u102e\u1002\u102d\u102f\u1018\u102e\u1038\u1014\u102c\u1038 \u1004\u103d\u1031\u101c\u1032\u1014\u102d\u102f\u1004\u103a\u101e\u1031\u102c \u1019\u1010\u103a\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u1018\u102c\u1018\u1031\u1038\u1012\u102d\u102f\u1038\u1005\u103a \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u1018\u1004\u103a\u1039\u1002\u101c\u102c\u1038\u1012\u1031\u1037\u101b\u103e\u103a \u1010\u102c\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u1018\u101a\u103a\u101c\u103a\u1002\u103b\u102e\u101a\u1019\u103a \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u1018\u1030\u101c\u103a\u1002\u1031\u1038\u101b\u102e\u1038\u101a\u102c\u1038 \u101c\u1000\u103a\u1016\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u1018\u102c\u101b\u102d\u1014\u103a\u1038 \u1012\u102e\u1014\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u1018\u1030\u101b\u103d\u1014\u103a\u1012\u102e \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u1018\u102c\u1019\u103c\u1030\u1012\u102b \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u1018\u101b\u1030\u1014\u102d\u102f\u1004\u103a\u1038 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u1018\u102d\u102f\u101c\u102e\u1038\u1017\u102e\u1038\u101a\u102c\u1038 \u1018\u102d\u102f\u101c\u102e\u1038\u1017\u102e\u101a\u102c\u1038\u1014\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u1018\u102d\u102f\u101c\u102e\u1038\u1018\u102e\u1038\u101a\u102c\u1038 \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u1018\u101b\u102c\u1007\u102e\u1038 \u101b\u102e\u1038\u101a\u1032"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u1018\u101f\u102c\u1038\u1019\u102c\u1038 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u1018\u1030\u1010\u1014\u103a \u1021\u1036\u1002\u102b\u101c\u103a\u1011\u101b\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u1017\u1019\u102c \u1000\u103b\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u1018\u1031\u102c\u1037\u1006\u103d\u102c\u1014\u102c \u1015\u102f\u101c"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u1018\u102e\u101c\u102c\u101b\u102f\u1005\u103a \u101b\u1030\u1018\u101a\u103a\u1021\u101e\u1005\u103a (\u1041\u1049\u1049\u1044\u2013\u1041\u1049\u1049\u1049)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u1018\u102e\u101c\u102c\u101b\u102f\u1005\u103a \u101b\u1030\u1018\u101a\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u1018\u102e\u101c\u102c\u101b\u102f\u1007\u103a \u101b\u1030\u1018\u101a\u103a (\u1042\u1040\u1040\u1040\u2013\u1042\u1040\u1041\u1046)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u1018\u101c\u102d\u1007\u103a \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u1000\u1014\u1031\u1012\u102b \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u1000\u103d\u1014\u103a\u1002\u102d\u102f \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u1006\u103d\u1005\u103a \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u1001\u103b\u102e\u101c\u102e \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u1010\u101b\u102f\u1010\u103a \u101a\u103d\u1019\u103a (\u101f\u1031\u102c\u1004\u103a\u1000\u1031\u102c\u1004\u103a)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u1010\u101b\u102f\u1010\u103a \u101a\u103d\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u1000\u102d\u102f\u101c\u1036\u1018\u102e\u101a\u102c \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u1000\u102d\u102f\u1037\u1005\u1010\u102c\u101b\u102e\u1000\u102c \u1000\u102d\u102f\u101c\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1004\u1036\u1001\u103c\u102c\u1038\u1004\u103d\u1031\u101c\u1032\u101c\u103e\u101a\u103a\u1014\u102d\u102f\u1004\u103a\u101e\u1031\u102c \u1000\u103b\u1030\u1038\u1018\u102c\u1038\u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u1000\u103b\u1030\u1038\u1018\u102c\u1038 \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u1000\u102d\u1010\u103a\u1015\u103a\u1017\u102c\u1012\u102e \u1021\u1000\u103a\u1005\u103a\u1001\u1030\u1012\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u1006\u102d\u102f\u1000\u103a\u1015\u101b\u1000\u103a\u1005\u103a \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u1001\u103b\u1000\u103a \u1001\u102d\u102f\u101b\u102d\u102f\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u1002\u103b\u102c\u1019\u100f\u102e \u1019\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u1002\u103b\u102e\u1018\u1030\u1010\u102e \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u1012\u102d\u1014\u103a\u1038\u1019\u1010\u103a \u1001\u101b\u102d\u102f\u100f\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u1012\u102d\u102f\u1019\u102e\u1014\u102e\u1000\u1014\u103a \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u1021\u101a\u103a\u101c\u103a\u1002\u103b\u102e\u1038\u101b\u102e\u1038\u101a\u102c\u1038 \u1012\u102e\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u1021\u102e\u1002\u103b\u1005\u103a \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u1021\u102e\u101b\u102e\u1011\u101b\u102e\u1038\u101a\u102c\u1038 \u1014\u102c\u1037\u1001\u103a\u1016\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u1005\u1015\u102d\u1014\u103a \u1015\u101a\u103a\u1005\u1031\u1038\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u1021\u102e\u101e\u102e\u101a\u102d\u102f\u1038\u1015\u102e\u1038\u101a\u102c\u1038 \u1018\u102e\u1038\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u101a\u1030\u101b\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u1016\u102e\u1002\u103b\u102e \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u1016\u1031\u102c\u1037\u1000\u101c\u1014\u103a\u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u1015\u103c\u1004\u103a\u101e\u1005\u103a \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u1017\u103c\u102d\u1010\u102d\u101e\u103b\u103e \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u1002\u103b\u1031\u102c\u103a\u1002\u103b\u102e\u101a\u102c \u101c\u102c\u1038\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u1002\u102b\u1014\u102c \u1006\u1032\u1012\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u1002\u103b\u102e\u1018\u101b\u1031\u102c\u103a\u101c\u103a\u1010\u102c \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u1002\u1019\u103a\u1018\u102e\u101a\u102c \u1012\u102b\u101c\u102c\u1005\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u1002\u102e\u1014\u102e\u101b\u102c \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u1002\u103d\u102b\u1010\u102e\u1019\u102c\u101c\u102c \u1001\u1000\u103a\u1007\u1031\u102c\u103a\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u1002\u102d\u102f\u1004\u103a\u101a\u102c\u1014\u102c \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u101f\u1031\u102c\u1004\u103a\u1000\u1031\u102c\u1004\u103a \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u101f\u103d\u1014\u103a\u1012\u1030\u1038\u101b\u1015\u103a\u1005\u103a \u101c\u1019\u103a\u1038\u1015\u102e\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u1001\u101b\u102d\u102f\u1021\u1031\u1038\u101b\u103e\u102c\u1038 \u1001\u1030\u1038\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u101f\u1031\u1010\u102e\u1002\u1030\u1038\u1021\u1031\u102c\u103a\u1012\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u101f\u1014\u103a\u1002\u1031\u101b\u102e\u101a\u1036 \u1016\u1031\u102c\u103a\u101b\u1004\u1037\u103a\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u1021\u1004\u103a\u1012\u102d\u102f\u1014\u102e\u1038\u101b\u103e\u102c\u1038 \u101b\u1030\u1015\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u1021\u1005\u1039\u1005\u101b\u1031\u1038 \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u1021\u1005\u1039\u1005\u101b\u1031\u1038 \u101b\u103e\u1032\u1000\u101c\u103a\u1021\u101e\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u1021\u102d\u1014\u1039\u1012\u102d\u101a \u101b\u1030\u1015\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u1021\u102e\u101b\u1010\u103a \u1012\u102e\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u1021\u102e\u101b\u1014\u103a \u101b\u102e\u1021\u1031\u102c\u103a\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u1021\u102d\u102f\u1000\u103a\u1005\u101c\u1014\u103a \u1001\u101b\u102d\u102f\u100f\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u1002\u103b\u1019\u1031\u1000\u102c \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u1002\u103b\u1031\u102c\u103a\u1012\u1014\u103a \u1012\u102e\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u1002\u103b\u1015\u1014\u103a \u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u1000\u1004\u103a\u100a\u102c \u101e\u103b\u103e\u102e\u101c\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u1000\u102c\u1002\u103b\u1005\u1039\u1005\u1010\u1014\u103a \u1006\u1031\u102c\u103a\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u1000\u1019\u1039\u1018\u1031\u102c\u1012\u102e\u1038\u101a\u102c\u1038 \u101b\u102e\u1038\u101a\u1032"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u1000\u102d\u102f\u1019\u102d\u102f\u101b\u102d\u102f\u1005\u103a \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a\u1000\u102d\u102f\u101b\u102e\u1038\u101a\u102c\u1038 \u101d\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a\u1000\u102d\u102f\u101b\u102e\u1038\u101a\u102c\u1038 \u101d\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u1000\u1030\u101d\u102d\u1010\u103a \u1012\u102e\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u1000\u1031\u1019\u1014\u103a \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u1000\u102c\u1007\u1000\u103a\u1005\u1010\u1014\u103a \u1011\u102d\u1014\u103a\u1002\u103b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u101c\u102c\u1021\u102d\u102f \u1000\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u101c\u1000\u103a\u1018\u1014\u103d\u1014\u103a \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u101e\u102e\u101b\u102d\u101c\u1004\u103a\u1039\u1000\u102c \u101b\u1030\u1015\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u101c\u102d\u102f\u1000\u103a\u1018\u1031\u1038\u101b\u102e\u1038\u101a\u102c\u1038 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u101c\u1005\u103a\u101e\u1030\u101a\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038\u101c\u102e\u1010\u102c\u1038\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u101c\u1010\u103a\u1017\u102e\u1038\u101a\u102c\u1038\u101c\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u101c\u1005\u103a\u1017\u103b\u102c\u1038 \u1012\u102d\u102f\u1004\u103a\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u1019\u102d\u102f\u101b\u102d\u102f\u1000\u102d\u102f \u1012\u101b\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u1019\u1031\u102c\u101c\u103a\u1012\u102d\u102f\u1017\u102c \u101c\u101a\u103a\u1021\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u1019\u102c\u101c\u102c\u1002\u102b\u1005\u102e \u1021\u101b\u102e\u101b\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u1019\u1000\u103a\u1006\u102e\u1012\u102d\u102f\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u1012\u102e\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u1019\u103c\u1014\u103a\u1019\u102c \u1000\u103b\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u1019\u103d\u1014\u103a\u1002\u102d\u102f\u1038\u101c\u102e\u1038\u101a\u102c\u1038 \u1011\u1030\u1038\u1002\u101b\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u1019\u1000\u102c\u1021\u102d\u102f \u1015\u102b\u1010\u102c\u1038\u1000\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101b\u102e\u1010\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u1021\u1030\u1002\u102e\u1038\u101a\u102c (\u1041\u1049\u1047\u1043\u2013\u1042\u1040\u1041\u1047)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101b\u102e\u1010\u1031\u1038\u1014\u102e\u1038\u101a\u1014\u103a\u1038 \u1021\u1030\u1002\u102e\u1038\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u1019\u1031\u102c\u101b\u1005\u103a\u101b\u103e \u101b\u1030\u1015\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101c\u103a\u1012\u102d\u102f\u1000\u103a \u101b\u1030\u1038\u1016\u102e\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u1019\u102c\u101c\u102c\u101d\u102e \u1001\u103d\u102b\u1038\u1001\u103b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u1019\u1000\u103a\u1000\u1006\u102e\u1000\u102d\u102f \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u1019\u101c\u1031\u1038\u101b\u103e\u102c\u1038 \u101b\u1004\u103a\u1038\u1002\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u1019\u102d\u102f\u1007\u1019\u103a\u1018\u1005\u103a \u1019\u1000\u103a\u1010\u102e\u1001\u101a\u103a\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u1014\u1019\u102e\u1038\u1018\u102e\u1038\u101a\u102c\u1038 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1002\u103b\u102e\u1038\u101b\u102e\u1038\u101a\u102c\u1038 \u1014\u102d\u102f\u1004\u103a\u1038\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u1014\u102e\u1000\u102c\u101b\u102c\u1002\u103d\u102b \u1001\u102d\u102f\u1038\u1012\u102d\u102f\u1018\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u1014\u1031\u102c\u103a\u101d\u1031 \u1001\u101b\u102d\u102f\u100f\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u1014\u102e\u1015\u1031\u102b \u101b\u1030\u1015\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u1014\u101a\u1030\u1038\u1007\u102e\u101c\u1014\u103a \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u1021\u102d\u102f\u1019\u1014\u103a\u1014\u102e \u101b\u102e\u101b\u101a\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u1015\u1014\u102c\u1038\u1019\u102c\u1038 \u1018\u101c\u103b\u1018\u102d\u102f\u1038\u1021\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u1015\u102e\u101b\u1030\u1038 \u1006\u102d\u102f\u1038\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u1015\u102b\u1015\u1030\u1021\u102c \u1014\u101a\u1030\u1038\u1002\u102e\u1014\u102e \u1001\u102e\u1038\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u1016\u102d\u101c\u1005\u103a\u1015\u102d\u102f\u1004\u103a \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u1015\u102b\u1000\u1005\u1039\u1005\u1010\u1014\u103a \u101b\u1030\u1015\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u1015\u102d\u102f\u101c\u1014\u103a \u1007\u101c\u1031\u102c\u1037\u1010\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u1015\u102b\u101b\u102c\u1002\u103d\u1031\u1038 \u1002\u103d\u102b\u1038\u1021\u103a\u1014\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u1000\u102c\u1010\u102c\u101b\u102e \u101b\u102e\u101b\u101a\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u101b\u102d\u102f\u1019\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u101c\u101a\u103a\u1021\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u1006\u102c\u1038\u1018\u102e\u1038\u101a\u102c\u1038 \u1012\u101a\u103a\u1014\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u101b\u102f\u101b\u103e \u101b\u1030\u1018\u101a\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u101b\u102f\u101b\u103e \u101b\u1030\u1018\u101a\u103a (\u1041\u1049\u1049\u1041\u2013\u1041\u1049\u1049\u1048)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u101b\u101d\u1014\u103a\u1012\u102b \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u1006\u1031\u102c\u103a\u1012\u102e\u1021\u102c\u101b\u1031\u1038\u1017\u102e\u1038\u101a\u102c\u1038 \u101b\u102e\u101a\u1031\u102c\u103a\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u1006\u1031\u102c\u103a\u101c\u1019\u103d\u1014\u103a\u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u1006\u1031\u1038\u101b\u103e\u1032 \u101b\u1030\u1015\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u1006\u1030\u1012\u1014\u103a \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u1006\u1030\u1012\u1014\u103a \u1015\u1031\u102b\u1004\u103a\u1021\u101f\u1031\u102c\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u1006\u103d\u102e\u1012\u1004\u103a \u1001\u101b\u102d\u102f\u100f\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u1005\u1004\u103a\u1039\u1000\u102c\u1015\u1030 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u101f\u101a\u103a\u101c\u101a\u103a\u1014\u102c \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u1006\u102e\u101a\u102c\u101b\u102c\u101c\u102e\u101a\u103d\u1014\u103a\u1038 \u101c\u102e\u1021\u102d\u102f\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u1006\u102d\u102f\u1019\u102c\u101c\u102e \u101e\u103b\u103e\u102e\u101c\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u1006\u1030\u101b\u102e\u1014\u1019\u103a\u1038 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a\u1006\u1030\u1012\u1014\u103a \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u1006\u1031\u102c\u1004\u103a\u1010\u1030\u1019\u1031\u1038\u1014\u103e\u1004\u1037\u103a \u1015\u101b\u1004\u103a\u1005\u102e\u1015\u102e \u1012\u102d\u102f\u1018\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u1006\u1031\u102c\u1004\u103a\u1010\u1030\u1019\u1031\u1038\u1014\u103e\u1004\u1037\u103a \u1015\u101b\u1004\u103a\u1005\u102e\u1015\u102e \u1012\u102d\u102f\u1018\u101b\u102c (\u1042\u1040\u1041\u1048)"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u1006\u102d\u102f\u1017\u102e\u101a\u1000\u103a \u101b\u1030\u1017\u101a\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u1006\u102e\u1038\u101b\u102e\u1038\u101a\u102c\u1038 \u1015\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u1006\u103d\u102c\u1007\u102e\u101c\u1014\u103a \u101c\u102e\u101c\u1014\u103a\u1038\u1002\u102e\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u1011\u102d\u102f\u1004\u103a\u1038 \u1018\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u1010\u102c\u1002\u103b\u1005\u103a\u1000\u1005\u1039\u1005\u1010\u1014\u103a \u1006\u102d\u102f\u1019\u102d\u102f\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u1010\u102c\u1037\u1001\u103a\u1019\u1004\u103a\u1014\u1005\u1039\u1005\u1010\u1014\u103a \u1019\u102c\u1014\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u1010\u1030\u1014\u102e\u1038\u101b\u103e\u102c\u1038 \u1012\u102d\u102f\u1004\u103a\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u1010\u103d\u1014\u103a\u1002\u102b \u1017\u1014\u103a\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u101b\u103e\u1031\u1038\u101f\u1031\u102c\u1004\u103a\u1038\u1010\u1030\u101b\u1000\u102e \u101c\u102d\u102f\u1004\u103a\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u1010\u1030\u101b\u1000\u102e \u101c\u102d\u102f\u1004\u103a\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u1011\u101b\u102e\u1014\u102e\u1012\u1010\u103a\u1014\u103e\u1004\u1037\u103a \u1010\u102d\u102f\u1018\u1000\u103a\u1002\u102d\u102f \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u1011\u102d\u102f\u1004\u103a\u101d\u1019\u103a \u1012\u1031\u102b\u103a\u101c\u102c\u1021\u101e\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u1010\u1014\u103a\u1007\u1014\u103a\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u101e\u103b\u103e\u102e\u101c\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u101a\u1030\u1000\u101b\u102d\u1014\u103a\u1038 \u101f\u102e\u101b\u102e\u1017\u1004\u103a\u1038\u100a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u101a\u1030\u1002\u1014\u1039\u1012\u102c \u101e\u103b\u103e\u102e\u101c\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a \u1012\u1031\u102b\u103a\u101c\u102c (\u1014\u1031\u102c\u1000\u103a\u1014\u1031\u1037)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a \u1012\u1031\u102b\u103a\u101c\u102c (\u1010\u1014\u1031\u1037\u1010\u100a\u103a\u1038)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u1025\u101b\u102f\u1002\u103d\u1031\u1038 \u1015\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u1025\u1007\u1018\u1000\u103a\u1000\u1005\u1039\u1005\u1010\u1014\u103a \u1006\u1031\u102c\u103a\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u1017\u1004\u103a\u1014\u102e\u1007\u103d\u1032\u101c\u102c\u1038 \u1018\u102d\u102f\u101c\u102e\u1017\u102c (\u1042\u1040\u1040\u1048\u2013\u1042\u1040\u1041\u1048)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u1017\u1004\u103a\u1014\u102e\u1007\u103d\u1032\u101c\u1014\u103a\u1038 \u1018\u102d\u102f\u101c\u102e\u1017\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u1017\u102e\u101a\u1000\u103a\u1014\u1019\u103a \u1012\u1031\u102b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u1017\u1014\u103d\u102c\u1038\u1010\u1030 \u1017\u102c\u1038\u1011\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u1006\u1019\u102d\u102f\u1021\u102c\u1038 \u1011\u102c\u1038\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u1000\u1004\u103a\u1019\u101b\u103d\u1014\u103a\u1038 \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u1004\u103d\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u101b\u103d\u103e\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u1025\u101b\u1031\u102c\u1015\u1004\u103d\u1031\u1000\u103c\u1031\u1038\u1005\u1036\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037\u1000\u102c\u101b\u1005\u103a\u1018\u102e\u101a\u1036 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u1021\u1011\u1030\u1038\u1011\u102f\u1010\u103a\u101a\u1030\u1001\u103d\u1004\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a \u1021\u102c\u1016\u101b\u102d\u1000 CFA \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \u1016\u101b\u1014\u1037\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u1015\u101c\u1000\u103a\u1010\u102e\u1014\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u1005\u1019\u103a\u1038\u101e\u1015\u103a \u1004\u103d\u1031\u1000\u103c\u1031\u1038 \u1000\u102f\u1012\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u1019\u101e\u102d\u101e\u102d\u102f\u1037\u1019\u101f\u102f\u1010\u103a\u1019\u101b\u103e\u102d\u101e\u1031\u102c\u1004\u103d\u1031\u1000\u103c\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u101a\u102e\u1019\u1004\u103a\u1014\u102e \u101b\u102e\u101b\u101a\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a\u1021\u102c\u1016\u101b\u102d\u1000 \u101b\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u1007\u1004\u103a\u1018\u102c\u1018\u103d\u1031 \u1001\u103d\u102b\u1038\u1001\u103b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u1007\u1004\u103a\u1018\u102c\u1018\u103d\u1031 \u1012\u1031\u102b\u103a\u101c\u102c"_s)
		})
	}));
	return data;
}

CurrencyNames_my::CurrencyNames_my() {
}

$Class* CurrencyNames_my::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_my, name, initialize, &_CurrencyNames_my_ClassInfo_, allocate$CurrencyNames_my);
	return class$;
}

$Class* CurrencyNames_my::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun