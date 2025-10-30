#include <sun/util/resources/cldr/ext/CurrencyNames_vi.h>

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

$MethodInfo _CurrencyNames_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_vi::*)()>(&CurrencyNames_vi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_vi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_vi_MethodInfo_
};

$Object* allocate$CurrencyNames_vi($Class* clazz) {
	return $of($alloc(CurrencyNames_vi));
}

void CurrencyNames_vi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_vi::getContents() {
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
			$of("XXX"_s),
			$of("XXX"_s)
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
			$of(u"\u0110\u1ed3ng Peseta c\u1ee7a Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham UAE"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0110\u1ed3ng Afghani c\u1ee7a Afghanistan (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghani Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Lek Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Guilder Antille H\u00e0 Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\u0110\u1ed3ng Kwanza c\u1ee7a Angola (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\u0110\u1ed3ng Kwanza M\u1edbi c\u1ee7a Angola (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\u0110\u1ed3ng Kwanza \u0110i\u1ec1u ch\u1ec9nh l\u1ea1i c\u1ee7a Angola (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u0110\u1ed3ng Austral c\u1ee7a Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"\u0110\u1ed3ng Peso Ley c\u1ee7a Argentina (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\u0110\u1ed3ng Peso Argentina (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0110\u1ed3ng Peso Argentina (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0110\u1ed3ng Schiling \u00c1o"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0110\u00f4 la Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Florin Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u0110\u1ed3ng Manat c\u1ee7a Azerbaijan (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manat Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u0110\u1ed3ng Dinar c\u1ee7a Bosnia-Herzegovina (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Mark Bosnia-Herzegovina c\u00f3 th\u1ec3 chuy\u1ec3n \u0111\u1ed5i"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u0110\u1ed3ng Dinar M\u1edbi c\u1ee7a Bosnia-Herzegovina (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0110\u00f4 la Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u0110\u1ed3ng Franc B\u1ec9 (c\u00f3 th\u1ec3 chuy\u1ec3n \u0111\u1ed5i)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u0110\u1ed3ng Franc B\u1ec9"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u0110\u1ed3ng Franc B\u1ec9 (t\u00e0i ch\u00ednh)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u0110\u1ed3ng Lev Xu c\u1ee7a Bun-ga-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"\u0110\u1ed3ng Lev X\u00e3 h\u1ed9i ch\u1ee7 ngh\u0129a c\u1ee7a Bun-ga-ri"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Lev Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"\u0110\u1ed3ng Lev c\u1ee7a Bun-ga-ri (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinar Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franc Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0110\u00f4 la Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0110\u00f4 la Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"\u0110\u1ed3ng Boliviano c\u1ee7a Bolivia (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u0110\u1ed3ng Peso Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u0110\u1ed3ng Mvdol Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\u0110\u1ed3ng Cruzerio M\u1edbi c\u1ee7a Braxin (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\u0110\u1ed3ng Cruzado c\u1ee7a Braxin (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u0110\u1ed3ng Cruzerio c\u1ee7a Braxin (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Braxin"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\u0110\u1ed3ng Cruzado M\u1edbi c\u1ee7a Braxin (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\u0110\u1ed3ng Cruzeiro c\u1ee7a Braxin (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"\u0110\u1ed3ng Cruzeiro c\u1ee7a Braxin (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0110\u00f4 la Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Ngultrum Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u0110\u1ed3ng Kyat Mi\u1ebfn \u0110i\u1ec7n"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u0110\u1ed3ng R\u00fap M\u1edbi c\u1ee7a Belarus (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"R\u00fap Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"R\u00fap Belarus (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0110\u00f4 la Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0110\u00f4 la Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Franc Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u0110\u1ed3ng Euro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Franc Th\u1ee5y s\u0129"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"\u0110\u1ed3ng France WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"\u0110\u1ed3ng Escudo c\u1ee7a Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u0110\u01a1n v\u1ecb K\u1ebf to\u00e1n c\u1ee7a Chile (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Nh\u00e2n d\u00e2n t\u1ec7 (h\u1ea3i ngo\u1ea1i)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Nh\u00e2n d\u00e2n t\u1ec7"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\u0110\u01a1n v\u1ecb Gi\u00e1 tr\u1ecb Th\u1ef1c c\u1ee7a Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Col\u00f3n Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u0110\u1ed3ng Dinar c\u1ee7a Serbia (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u0110\u1ed3ng Koruna Xu c\u1ee7a Czechoslovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Peso Cuba c\u00f3 th\u1ec3 chuy\u1ec3n \u0111\u1ed5i"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u0110\u1ed3ng B\u1ea3ng S\u00edp"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Koruna C\u1ed9ng h\u00f2a S\u00e9c"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0110\u1ed3ng Mark \u0110\u00f4ng \u0110\u1ee9c"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u0110\u1ed3ng Mark \u0110\u1ee9c"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franc Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Krone \u0110an M\u1ea1ch"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"\u0110\u1ed3ng Scure Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"\u0110\u01a1n v\u1ecb Gi\u00e1 tr\u1ecb Kh\u00f4ng \u0111\u1ed5i c\u1ee7a Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Crun Ext\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"B\u1ea3ng Ai C\u1eadp"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0110\u1ed3ng Peseta T\u00e2y Ban Nha (T\u00e0i kho\u1ea3n)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0110\u1ed3ng Peseta T\u00e2y Ban Nha (t\u00e0i kho\u1ea3n c\u00f3 th\u1ec3 chuy\u1ec3n \u0111\u1ed5i)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0110\u1ed3ng Peseta T\u00e2y Ban Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birr Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u0110\u1ed3ng Markka Ph\u1ea7n Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0110\u00f4 la Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"B\u1ea3ng Qu\u1ea7n \u0111\u1ea3o Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Franc Ph\u00e1p"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"B\u1ea3ng Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\u0110\u1ed3ng Kupon Larit c\u1ee7a Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Cedi Ghana (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Cedi Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"B\u1ea3ng Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Franc Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Syli Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\u0110\u1ed3ng Ekwele c\u1ee7a Guinea X\u00edch \u0110\u1ea1o"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Drachma Hy L\u1ea1p"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\u0110\u1ed3ng Guinea Escudo B\u1ed3 \u0110\u00e0o Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Peso Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0110\u00f4 la Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0110\u00f4 la H\u1ed3ng K\u00f4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u0110\u1ed3ng Dinar Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Forint Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rupiah Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Pao Ai-len"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Pao Ixraen"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Sheqel Israel m\u1edbi"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupee \u1ea4n \u0110\u1ed9"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinar Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Kr\u00f3na Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Lia \u00dd"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u0110\u00f4 la Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinar Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Y\u00ean Nh\u1eadt"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shilling Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Som Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel Campuchia"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franc Comoros"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Won Tri\u1ec1u Ti\u00ean"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"\u0110\u1ed3ng Hwan H\u00e0n Qu\u1ed1c (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"\u0110\u1ed3ng Won H\u00e0n Qu\u1ed1c (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Won H\u00e0n Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinar Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u0110\u00f4 la Qu\u1ea7n \u0111\u1ea3o Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Kip L\u00e0o"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"B\u1ea3ng Li-b\u0103ng"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupee Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0110\u00f4 la Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Ioti Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Litas L\u00edt-va"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u0110\u1ed3ng Talonas Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\u0110\u1ed3ng Franc Luxembourg c\u00f3 th\u1ec3 chuy\u1ec3n \u0111\u1ed5i"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u0110\u1ed3ng Franc Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u0110\u1ed3ng Franc Luxembourg t\u00e0i ch\u00ednh"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lats Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u0110\u1ed3ng R\u00fap Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinar Libi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dirham Ma-r\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u0110\u1ed3ng Franc Ma-r\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"\u0110\u1ed3ng Franc Monegasque"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"\u0110\u1ed3ng Cupon Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leu Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u0110\u1ed3ng Franc Magalasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Denar Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"\u0110\u1ed3ng Denar Macedonia (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u0110\u1ed3ng Franc Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kyat Myanma"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"Tugrik M\u00f4ng C\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca Ma Cao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya Mauritania (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ouguiya Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Lia x\u1ee9 Man-t\u01a1"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u0110\u1ed3ng B\u1ea3ng Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupee Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u0110\u1ed3ng Peso B\u1ea1c M\u00ea-hi-c\u00f4 (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u0110\u01a1n v\u1ecb \u0110\u1ea7u t\u01b0 M\u00ea-hi-c\u00f4"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Escudo Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u0110\u1ed3ng Metical Mozambique (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Metical Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0110\u00f4 la Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u0110\u1ed3ng C\u00f3rdoba Nicaragua (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"C\u00f3rdoba Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u0110\u1ed3ng Guilder H\u00e0 Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Krone Na Uy"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupee Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0110\u00f4 la New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Rial Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u0110\u1ed3ng Inti Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u0110\u1ed3ng Sol Peru (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Peso Philipin"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupee Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloty Ba Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\u0110\u1ed3ng Zloty Ba Lan (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u0110\u1ed3ng Escudo B\u1ed3 \u0110\u00e0o Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guarani Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Rial Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u0110\u1ed3ng \u0110\u00f4 la Rhode"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u0110\u1ed3ng Leu Rumani (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Leu Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinar Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"R\u00fap Nga"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u0110\u1ed3ng R\u00fap Nga (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Franc Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riyal \u1ea2 R\u1eadp X\u00ea-\u00fat"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0110\u00f4 la qu\u1ea7n \u0111\u1ea3o Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupee Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u0110\u1ed3ng Dinar Sudan (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"B\u1ea3ng Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u0110\u1ed3ng B\u1ea3ng Sudan (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Krona Th\u1ee5y \u0110i\u1ec3n"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0110\u00f4 la Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"B\u1ea3ng St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"T\u00f4la Xl\u00f4v\u00eania"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Cuaron Xl\u00f4v\u00e1c"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Schilling Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0110\u00f4 la Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u0110\u1ed3ng Guilder Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"B\u1ea3ng Nam Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra S\u00e3o Tom\u00e9 v\u00e0 Pr\u00edncipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobra S\u00e3o Tom\u00e9 v\u00e0 Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0110\u1ed3ng R\u00fap S\u00f4 vi\u1ebft"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Col\u00f3n El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"B\u1ea3ng Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"B\u1ea1t Th\u00e1i Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u0110\u1ed3ng R\u00fap Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u0110\u1ed3ng Manat Turkmenistan (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manat Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Pa\u02bbanga Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u0110\u1ed3ng Escudo Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Lia Th\u1ed5 Nh\u0129 K\u1ef3 (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"Lia Th\u1ed5 Nh\u0129 K\u1ef3"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0110\u00f4 la Trinidad v\u00e0 Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0110\u00f4 la \u0110\u00e0i Loan m\u1edbi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shilling Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hryvnia Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\u0110\u1ed3ng Karbovanets Ucraina"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u0110\u1ed3ng Shilling Uganda (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shilling Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0110\u00f4 la M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u0110\u00f4 la M\u1ef9 (Ng\u00e0y ti\u1ebfp theo)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u0110\u00f4 la M\u1ef9 (C\u00f9ng ng\u00e0y)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\u0110\u1ed3ng Peso Uruguay (\u0110\u01a1n v\u1ecb Theo ch\u1ec9 s\u1ed1)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u0110\u1ed3ng Peso Uruguay (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Som Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u0110\u1ed3ng bol\u00edvar c\u1ee7a Venezuela (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bol\u00edvar Venezuela (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Bol\u00edvar Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0110\u1ed3ng Vi\u1ec7t Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"\u0110\u1ed3ng Vi\u1ec7t Nam (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Franc CFA Trung Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"B\u1ea1c"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"V\u00e0ng"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u0110\u01a1n v\u1ecb T\u1ed5ng h\u1ee3p Ch\u00e2u \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u0110\u01a1n v\u1ecb Ti\u1ec1n t\u1ec7 Ch\u00e2u \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u0110\u01a1n v\u1ecb K\u1ebf to\u00e1n Ch\u00e2u \u00c2u (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u0110\u01a1n v\u1ecb K\u1ebf to\u00e1n Ch\u00e2u \u00c2u (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0110\u00f4 la \u0110\u00f4ng Carib\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Quy\u1ec1n R\u00fat v\u1ed1n \u0110\u1eb7c bi\u1ec7t"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\u0110\u01a1n v\u1ecb Ti\u1ec1n Ch\u00e2u \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u0110\u1ed3ng France Ph\u00e1p V\u00e0ng"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u0110\u1ed3ng UIC-Franc Ph\u00e1p"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Franc CFA T\u00e2y Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Paladi"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"B\u1ea1ch kim"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"Qu\u1ef9 RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"M\u00e3 Ti\u1ec1n t\u1ec7 Ki\u1ec3m tra"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Ti\u1ec1n t\u1ec7 ch\u01b0a bi\u1ebft"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u0110\u1ed3ng Dinar Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Rial Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u0110\u1ed3ng Dinar Nam T\u01b0 Xu (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u0110\u1ed3ng Dinar Nam T\u01b0 M\u1edbi (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u0110\u1ed3ng Dinar Nam T\u01b0 C\u00f3 th\u1ec3 chuy\u1ec3n \u0111\u1ed5i (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"\u0110\u1ed3ng Dinar Nam T\u01b0 T\u00e1i c\u01a1 c\u1ea5u (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"\u0110\u1ed3ng Rand Nam Phi (t\u00e0i ch\u00ednh)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand Nam Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u0110\u1ed3ng kwacha c\u1ee7a Zambia (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u0110\u1ed3ng Zaire M\u1edbi (1993\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u0110\u1ed3ng Zaire (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u0110\u1ed3ng \u0110\u00f4 la Zimbabwe (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u0110\u1ed3ng \u0110\u00f4 la Zimbabwe (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"\u0110\u1ed3ng \u0110\u00f4 la Zimbabwe (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_vi::CurrencyNames_vi() {
}

$Class* CurrencyNames_vi::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_vi, name, initialize, &_CurrencyNames_vi_ClassInfo_, allocate$CurrencyNames_vi);
	return class$;
}

$Class* CurrencyNames_vi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun