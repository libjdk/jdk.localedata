#include <sun/util/resources/cldr/ext/CurrencyNames_ko.h>

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

$MethodInfo _CurrencyNames_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ko::*)()>(&CurrencyNames_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ko",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ko_MethodInfo_
};

$Object* allocate$CurrencyNames_ko($Class* clazz) {
	return $of($alloc(CurrencyNames_ko));
}

void CurrencyNames_ko::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ko::getContents() {
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
			$of("adp"_s),
			$of(u"\uc548\ub3c4\ub77c \ud398\uc138\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\uc544\ub78d\uc5d0\ubbf8\ub9ac\ud2b8 \ub514\ub974\ud568"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\uc544\ud504\uac00\ub2c8 (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\uc544\ud504\uac00\ub2c8\uc2a4\ud0c4 \uc544\ud504\uac00\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\uc54c\ubc14\ub2c8\uc544 \ub808\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\uc544\ub974\uba54\ub2c8\uc544 \ub4dc\ub78c"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\ub124\ub35c\ub780\ub4dc\ub839 \uc548\ud2f8\ub808\uc2a4 \uae38\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\uc559\uace8\ub77c \ucf74\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\uc559\uace8\ub77c \ucf74\uc790 (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\uc559\uace8\ub77c \uc2e0\ucf74\uc790 (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\uc559\uace8\ub77c \uc7ac\uc870\uc815 \ucf74\uc790 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\uc544\ub974\ud5e8\ud2f0\ub098 \uc624\uc2a4\ud2b8\ub784"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"\uc544\ub974\ud5e8\ud2f0\ub098 \ud398\uc18c \ub808\uc774 (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\uc544\ub974\ud5e8\ud2f0\ub098 \ud398\uc18c (18810\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\uc544\ub974\ud5e8\ud2f0\ub098 \ud398\uc18c (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\uc544\ub974\ud5e8\ud2f0\ub098 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\ud638\uc8fc \uc2e4\ub9c1"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\ud638\uc8fc \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\uc544\ub8e8\ubc14 \ud50c\ub85c\ub9b0"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\uc544\uc81c\ub974\ubc14\uc774\uc820 \ub9c8\ub098\ud2b8(1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\uc544\uc81c\ub974\ubc14\uc774\uc794 \ub9c8\ub098\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\ubcf4\uc2a4\ub2c8\uc544-\ud5e4\ub974\uccb4\uace0\ube44\ub098 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\ubcf4\uc2a4\ub2c8\uc544-\ud5e4\ub974\uccb4\uace0\ube44\ub098 \ud0dc\ud658 \ub9c8\ub974\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\ubcf4\uc2a4\ub2c8\uc544-\ud5e4\ub974\uccb4\uace0\ube44\ub098 \uc2e0\ub514\ub098\ub974 (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\ubc14\ubca0\uc774\ub3c4\uc2a4 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\ubc29\uae00\ub77c\ub370\uc2dc \ud0c0\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\ubca8\uae30\uc5d0 \ud504\ub791 (\ud0dc\ud658)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\ubca8\uae30\uc5d0 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\ubca8\uae30\uc5d0 \ud504\ub791 (\uae08\uc735)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\ubd88\uac00\ub9ac\uc544 \ub3d9\uc804 \ub81b"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"\ubd88\uac00\ub9ac\uc544 \uc0ac\ud68c\uc8fc\uc758\uc790 \ub81b"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\ubd88\uac00\ub9ac\uc544 \ub808\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"\ubd88\uac00\ub9ac\uc544 \ub81b (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\ubc14\ub808\uc778 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\ubd80\ub8ec\ub514 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\ubc84\ubba4\ub2e4 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\ubd80\ub8e8\ub098\uc774 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\ubcfc\ub9ac\ube44\uc544\ub178"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"\ubcfc\ub9ac\ube44\uc544 \ubcfc\ub9ac\ube44\uc544\ub178 (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\ubcfc\ub9ac\ube44\uc544\ub178 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\ubcfc\ub9ac\ube44\uc544\ub178 Mvdol(\uae30\uae08)"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\ubcfc\ub9ac\ube44\uc544\ub178 \ud06c\ub8e8\uc81c\uc774\ub8e8 \ub178\ubcf4 (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\ube0c\ub77c\uc9c8 \ud06c\ub8e8\uc790\ub450"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\ube0c\ub77c\uc9c8 \ud06c\ub8e8\uc81c\uc774\ub8e8 (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\ube0c\ub77c\uc9c8 \ub808\uc54c"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\ube0c\ub77c\uc9c8 \ud06c\ub8e8\uc790\ub450 \ub178\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\ube0c\ub77c\uc9c8 \ud06c\ub8e8\uc81c\uc774\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"\ube0c\ub77c\uc9c8 \ud06c\ub8e8\uc81c\uc774\ub8e8 (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\ubc14\ud558\ub9c8 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\ubd80\ud0c4 \ub20c\ud22c\ub214"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\ubc84\ub9c8 \ucc28\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\ubcf4\uce20\uc640\ub098 \ud3f4\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\ubca8\ub77c\ub8e8\uc2a4 \uc2e0\uad8c \ub8e8\ube14 (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\ubca8\ub77c\ub8e8\uc2a4 \ub8e8\ube14"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\ubca8\ub77c\ub8e8\uc2a4 \ub8e8\ube14 (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\ubca8\ub9ac\uc988 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\uce90\ub098\ub2e4 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\ucf69\uace0 \ud504\ub791 \ucf69\uace8\ub77c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\uc720\ub85c (WIR)"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\uc2a4\uc704\uc2a4 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"\ud504\ub791 (WIR)"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"\uce60\ub808 \uc5d0\uc2a4\ucfe0\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\uce60\ub808 (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\uce60\ub808 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\uc911\uad6d \uc704\uc548\ud654(\uc5ed\uc678)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\uc911\uad6d \uc704\uc548\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\ucf5c\ub86c\ube44\uc544 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\ucf5c\ub86c\ube44\uc544 \uc2e4\uac00 \ub2e8\uc704"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\ucf54\uc2a4\ud0c0\ub9ac\uce74 \ucf5c\ub860"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\uace0 \uc138\ub974\ube44\uc544 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\uccb4\ucf54\uc2ac\ub85c\ubc14\ud0a4\uc544 \ub3d9\uc804 \ucf54\ub8e8\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\ucfe0\ubc14 \ud0dc\ud658 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\ucfe0\ubc14 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\uce74\ubcf4\ubca0\ub974\ub370 \uc5d0\uc2a4\ucfe0\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\uc2f8\uc774\ud504\ub7ec\uc2a4 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\uccb4\ucf54 \uacf5\ud654\uad6d \ucf54\ub8e8\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\ub3d9\ub3c5 \uc624\uc2a4\ud2b8\ub9c8\ub974\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\ub3c5\uc77c \ub9c8\ub974\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\uc9c0\ubd80\ud2f0 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\ub374\ub9c8\ud06c \ud06c\ub85c\ub124"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\ub3c4\ubbf8\ub2c8\uce74 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\uc54c\uc81c\ub9ac \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"\uc5d0\ucfe0\uc544\ub3c4\ub974 \uc218\ud06c\ub808"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"\uc5d0\ucf70\ub3c4\ub974 (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\uc5d0\uc2a4\ud1a0\ub2c8\uc544 \ud06c\ub8ec"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\uc774\uc9d1\ud2b8 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\uc5d0\ub9ac\ud2b8\ub9ac\uc544 \ub098\ud06c\ud30c"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\uc2a4\ud398\uc778 \ud398\uc138\ud0c0(\uc608\uae08)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\uc2a4\ud398\uc778 \ud398\uc138\ud0c0(\ubcc0\ud658 \uc608\uae08)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\uc2a4\ud398\uc778 \ud398\uc138\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\uc5d0\ud2f0\uc624\ud53c\uc544 \ube44\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\uc720\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\ud540\ub780\ub4dc \ub9c8\ub974\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\ud53c\uc9c0 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\ud3ec\ud074\ub79c\ub4dc\uc81c\ub3c4 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\ud504\ub791\uc2a4 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\uc601\uad6d \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\uadf8\ub8e8\uc9c0\uc57c \uc9c0\ud3d0 \ub77c\ub9ac\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\uc870\uc9c0\uc544 \ub77c\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\uac00\ub098 \uc2dc\ub514 (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\uac00\ub098 \uc2dc\ub514"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\uc9c0\ube0c\ub864\ud130 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\uac10\ube44\uc544 \ub2ec\ub77c\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\uae30\ub2c8 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\uae30\ub2c8 \uc2dc\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\uc801\ub3c4 \uae30\ub2c8 \uc5d0\ucfe8 (Ekwele)"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\uadf8\ub9ac\uc2a4 \ub4dc\ub77c\ud06c\ub9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\uacfc\ud14c\ub9d0\ub77c \ucf00\ud2b8\uc0b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\ud3ec\ub974\ud22c\uac08\ub839 \uae30\ub2c8 \uc5d0\uc2a4\ucfe0\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\uae30\ub124\ube44\uc3d8 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\uac00\uc774\uc544\ub098 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\ud64d\ucf69 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\uc628\ub450\ub77c\uc2a4 \ub818\ud53c\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\ud06c\ub85c\uc544\ud2f0\uc544 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\ud06c\ub85c\uc544\ud2f0\uc544 \ucfe0\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\ud558\uc774\ud2f0 \uad6c\ub974\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\ud5dd\uac00\ub9ac \ud3ec\ub9b0\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\uc778\ub3c4\ub124\uc2dc\uc544 \ub8e8\ud53c\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\uc544\uc77c\ub79c\ub4dc \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\uc774\uc2a4\ub77c\uc5d8 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\uc774\uc2a4\ub77c\uc5d8 \uc2e0\uad8c \uc138\ucf08"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\uc778\ub3c4 \ub8e8\ud53c"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\uc774\ub77c\ud06c \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\uc774\ub780 \ub9ac\uc584"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\uc544\uc774\uc2ac\ub780\ub4dc \ud06c\ub85c\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\uc774\ud0c8\ub9ac\uc544 \ub9ac\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\uc790\uba54\uc774\uce74 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\uc694\ub974\ub2e8 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\uc77c\ubcf8 \uc5d4\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\ucf00\ub0d0 \uc2e4\ub9c1"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\ud0a4\ub974\uae30\uc2a4\uc2a4\ud0c4 \uc19c"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\uce84\ubcf4\ub514\uc544 \ub9ac\uc584"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\ucf54\ubaa8\ub974 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\uc870\uc120 \ubbfc\uc8fc\uc8fc\uc758 \uc778\ubbfc \uacf5\ud654\uad6d \uc6d0"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"\ub300\ud55c\ubbfc\uad6d \ud658 (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\ub300\ud55c\ubbfc\uad6d \uc6d0"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\ucfe0\uc6e8\uc774\ud2b8 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\ucf00\uc774\ub9e8 \uc81c\ub3c4 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\uce74\uc790\ud750\uc2a4\ud0c4 \ud150\uac8c"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\ub77c\uc624\uc2a4 \ud0a4\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\ub808\ubc14\ub17c \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\uc2a4\ub9ac\ub791\uce74 \ub8e8\ud53c"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\ub77c\uc774\ubca0\ub9ac\uc544 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\ub808\uc18c\ud1a0 \ub85c\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\ub9ac\ud22c\uc544\ub2c8\uc544 \ub9ac\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\ub8e9\uc148\ubd80\ub974\ud06c \ud0c0\ub85c\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\ub8e9\uc148\ubd80\ub974\ud06c \ubcc0\ud658 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\ub8e9\uc148\ubd80\ub974\ud06c \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\ub8e9\uc148\ubd80\ub974\ud06c \uc7ac\uc815 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\ub77c\ud2b8\ube44\uc544 \ub77c\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\ub77c\ud2b8\ube44\uc544 \ub8e8\ube14"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\ub9ac\ube44\uc544 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\ubaa8\ub85c\ucf54 \ub514\ub818"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\ubaa8\ub85c\ucf54 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"\ubaa8\ub098\ucf54 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"\ubab0\ub3c4\ubc14 \ucfe0\ud3f0"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\ubab0\ub3c4\ubc14 \ub808\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\ub9c8\ub2e4\uac00\uc2a4\uce74\ub974 \uc544\ub9ac\uc544\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\ub9c8\ub2e4\uac00\uc2a4\uce74\ub974 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\ub9c8\ucf00\ub3c4\ub2c8\uc544 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\ub9d0\ub9ac \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\ubbf8\uc580\ub9c8 \ud0a4\uc58f"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\ubabd\uace8 \ud22c\uadf8\ub9ad"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\ub9c8\uce74\uc624 \ud30c\ud0c0\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\ubaa8\ub9ac\ud0c0\ub2c8 \uc6b0\uae30\uc57c (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\ubaa8\ub9ac\ud0c0\ub2c8 \uc6b0\uae30\uc57c"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\ubab0\ud0c0 \ub9ac\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\ubab0\ud0c0 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\ubaa8\ub9ac\uc154\uc2a4 \ub8e8\ud53c"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\ubab0\ub514\ube0c \uc81c\ub3c4 \ub8e8\ud53c\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\ub9d0\ub77c\uc704 \ucf70\uccd0"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\uba55\uc2dc\ucf54 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\uba55\uc2dc\ucf54 \uc2e4\ubc84 \ud398\uc18c (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\uba55\uc2dc\ucf54 (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\ub9d0\ub808\uc774\uc2dc\uc544 \ub9c1\uae43"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\ubaa8\uc7a0\ube44\ud06c \uc5d0\uc2a4\ucfe0\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\uace0 \ubaa8\uc7a0\ube44\ud06c \uba54\ud2f0\uce7c"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\ubaa8\uc7a0\ube44\ud06c \uba54\ud2f0\uce7c"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\ub098\ubbf8\ube44\uc544 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\ub2c8\uc81c\ub974 \ub098\uc774\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\ub2c8\uce74\ub77c\uacfc \ucf54\ub974\ub3c4\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\ub2c8\uce74\ub77c\uacfc \ucf54\ub974\ub3c4\ubc14 \uc624\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\ub124\ub378\ub780\ub4dc \uae38\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\ub178\ub974\uc6e8\uc774 \ud06c\ub85c\ub124"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\ub124\ud314 \ub8e8\ud53c"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\ub274\uc9c8\ub79c\ub4dc \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\uc624\ub9cc \ub9ac\uc584"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\ud30c\ub098\ub9c8 \ubc1c\ubcf4\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\ud398\ub8e8 \uc778\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\ud398\ub8e8 \uc194"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\ud398\ub8e8 \uc194 (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\ud30c\ud478\uc544\ub274\uae30\ub2c8 \ud0a4\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\ud544\ub9ac\ud540 \ud398\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\ud30c\ud0a4\uc2a4\ud0c4 \ub8e8\ud53c"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\ud3f4\ub780\ub4dc \uc990\ub85c\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\ud3f4\ub780\ub4dc \uc990\ub85c\ud2f0 (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\ud3ec\ub974\ud22c\uac08 \uc5d0\uc2a4\ucfe0\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\ud30c\ub77c\uacfc\uc774 \uacfc\ub77c\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\uce74\ud0c0\ub974 \ub9ac\uc584"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\ub85c\ub514\uc9c0\uc544 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\ub8e8\ub9c8\ub2c8\uc544 \ub808\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\ub8e8\ub9c8\ub2c8\uc544 \ub808\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\uc138\ub974\ube44\uc544 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\ub7ec\uc2dc\uc544 \ub8e8\ube14"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\ub7ec\uc2dc\uc544 \ub8e8\ube14 (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\ub974\uc644\ub2e4 \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\uc0ac\uc6b0\ub514\uc544\ub77c\ube44\uc544 \ub9ac\uc584"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\uc194\ub85c\ubaac \uc81c\ub3c4 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\uc138\uc774\uc178 \ub8e8\ud53c"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\uc218\ub2e8 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\uc218\ub2e8 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\uace0 \uc218\ub2e8 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\uc2a4\uc6e8\ub374 \ud06c\ub85c\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\uc2f1\uac00\ud3f4 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\uc138\uc778\ud2b8\ud5ec\ub808\ub098 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\uc2ac\ub85c\ubca0\ub2c8\uc544 \ud1a8\ub77c\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\uc2ac\ub85c\ubc14\ud0a4\uc544 \ucf54\ub8e8\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\uc2dc\uc5d0\ub77c\ub9ac\uc628 \ub9ac\uc628"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\uc18c\ub9d0\ub9ac\uc544 \uc2e4\ub9c1"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\uc218\ub9ac\ub0a8 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\uc218\ub9ac\ub0a8 \uae38\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\ub0a8\uc218\ub2e8 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\uc0c1\ud22c\uba54 \ud504\ub9b0\uc2dc\ud398 \ub3c4\ube0c\ub77c (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\uc0c1\ud22c\uba54 \ud504\ub9b0\uc2dc\ud398 \ub3c4\ube0c\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\uc18c\ub828 \ub8e8\ube14"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\uc5d8\uc0b4\ubc14\ub3c4\ub974 \ucf5c\ub860"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\uc2dc\ub9ac\uc544 \ud30c\uc6b4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\uc2a4\uc640\uc9c8\ub780\ub4dc \ub9b4\ub791\uac8c\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\ud0dc\uad6d \ubc14\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\ud0c0\uc9c0\ud0a4\uc2a4\ud0c4 \ub8e8\ube14"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\ud0c0\uc9c0\ud0a4\uc2a4\ud0c4 \uc18c\ubaa8\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \ub9c8\ub098\ud2b8 (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \ub9c8\ub098\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\ud280\ub2c8\uc9c0 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\ud1b5\uac00 \ud30c\uc559\uac00"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\ud2f0\ubaa8\ub974 \uc5d0\uc2a4\ucfe0\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\ud130\ud0a4 \ub9ac\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\uc2e0 \ud130\ud0a4 \ub9ac\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\ud2b8\ub9ac\ub2c8\ub2e4\ub4dc \ud1a0\ubc14\uace0 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\uc2e0 \ud0c0\uc774\uc644 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\ud0c4\uc790\ub2c8\uc544 \uc2e4\ub9c1"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\uc6b0\ud06c\ub77c\uc774\ub098 \uadf8\ub9ac\ube0c\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\uc6b0\ud06c\ub77c\uc774\ub098 \uce74\ubcf4\ubc14\ub124\uce20"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\uc6b0\uac04\ub2e4 \uc2e4\ub9c1 (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\uc6b0\uac04\ub2e4 \uc2e4\ub9c1"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\ubbf8\uad6d \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\ubbf8\uad6d \ub2ec\ub7ec(\ub2e4\uc74c\ub0a0)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\ubbf8\uad6d \ub2ec\ub7ec(\ub2f9\uc77c)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\uc6b0\ub8e8\uacfc\uc774 \ud398\uc18c (UI)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\uc6b0\ub8e8\uacfc\uc774 \ud398\uc18c (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\uc6b0\ub8e8\uacfc\uc774 \ud398\uc18c \uc6b0\ub8e8\uacfc\uc694"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4 \uc228"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\ubca0\ub124\uc8fc\uc5d8\ub77c \ubcfc\ub9ac\ubc14\ub974 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\ubca0\ub124\uc218\uc5d8\ub77c \ubcfc\ub9ac\ubc14\ub974 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\ubca0\ub124\uc218\uc5d8\ub77c \ubcfc\ub9ac\ubc14\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\ubca0\ud2b8\ub0a8 \ub3d9"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"\ubca0\ud2b8\ub0a8 \ub3d9 (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\ubc14\ub204\uc544\ud22c \ubc14\ud22c"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\uc11c \uc0ac\ubaa8\uc544 \ud0c8\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\uc911\uc559\uc544\ud504\ub9ac\uce74 CFA \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\uc740\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\uae08"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\uc720\ub974\ucf54 (\uc720\ub7fd \ud68c\uacc4 \ub2e8\uc704)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\uc720\ub7fd \ud1b5\ud654 \ub3d9\ub9f9"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\uc720\ub7fd \uacc4\uc0b0 \ub2e8\uc704 (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\uc720\ub7fd \uacc4\uc0b0 \ub2e8\uc704 (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\ub3d9\uce74\ub9ac\ube0c \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\ud2b9\ubcc4\uc778\ucd9c\uad8c"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\uc720\ub7fd \ud658\uc728 \ub2e8\uc704"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\ud504\ub791\uc2a4 \ud504\ub791 (Gold)"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\ud504\ub791\uc2a4 \ud504\ub791 (UIC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\uc11c\uc544\ud504\ub9ac\uce74 CFA \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\ud314\ub77c\ub4d0"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \ud504\ub791"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\ubc31\uae08"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET \uae30\uae08"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\ud14c\uc2a4\ud2b8 \ud1b5\ud654 \ucf54\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ud1b5\ud654 \ub2e8\uc704"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\uc608\uba58 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\uc608\uba58 \ub9ac\uc54c"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\uc720\uace0\uc2ac\ub77c\ube44\uc544 \ub3d9\uc804 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\uc720\uace0\uc2ac\ub77c\ube44\uc544 \ub178\ube44 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\uc720\uace0\uc2ac\ub77c\ube44\uc544 \uc804\ud658 \ub514\ub098\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"\ub0a8\uc544\ud504\ub9ac\uce74 \ub79c\ub4dc (\uae08\uc735)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\ub0a8\uc544\ud504\ub9ac\uce74 \ub79c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\uc7d8\ube44\uc544 \ucf70\uccd0 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\uc7a0\ube44\uc544 \ucf70\uccd0"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\uc790\uc774\ub974 \uc2e0\uad8c \uc790\uc774\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\uc790\uc774\ub974 \uc790\uc774\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\uc9d0\ubc14\ube0c\uc6e8 \ub2ec\ub7ec"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\uc9d0\ubc14\ube0c\uc6e8 \ub2ec\ub7ec (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"\uc9d0\ubc14\ube0c\uc6e8 \ub2ec\ub7ec (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ko::CurrencyNames_ko() {
}

$Class* CurrencyNames_ko::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ko, name, initialize, &_CurrencyNames_ko_ClassInfo_, allocate$CurrencyNames_ko);
	return class$;
}

$Class* CurrencyNames_ko::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun