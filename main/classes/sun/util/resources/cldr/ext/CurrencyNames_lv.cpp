#include <sun/util/resources/cldr/ext/CurrencyNames_lv.h>

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

$MethodInfo _CurrencyNames_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_lv::*)()>(&CurrencyNames_lv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lv_MethodInfo_
};

$Object* allocate$CurrencyNames_lv($Class* clazz) {
	return $of($alloc(CurrencyNames_lv));
}

void CurrencyNames_lv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lv::getContents() {
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
			$of("LVL"_s),
			$of("Ls"_s)
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
			$of("aed"_s),
			$of(u"Apvienoto Ar\u0101bu Emir\u0101tu dirh\u0113ms"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Afganist\u0101nas afg\u0101ns"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Alb\u0101nijas leks"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Arm\u0113nijas drams"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"N\u012bderlandes Anti\u013cu guldenis"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolas kvanza"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Argent\u012bnas peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Austrijas \u0161ili\u0146\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Austr\u0101lijas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Arubas guldenis"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Azerbaid\u017e\u0101nas manats (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Azerbaid\u017e\u0101nas manats"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Bosnijas un Hercogovinas konvert\u0113jam\u0101 marka"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Barbadosas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Banglade\u0161as taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Be\u013c\u0123ijas franks"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Bulg\u0101rijas leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Bahreinas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundi franks"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Bermudu dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Brunejas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Bol\u012bvijas boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Braz\u012blijas re\u0101ls"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Bahamu dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"But\u0101nas ngultrums"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botsvanas pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Baltkrievijas rubelis"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Baltkrievijas rubelis (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Belizas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Kan\u0101das dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("KDR franks"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0160veices franks"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u010c\u012bles peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u0136\u012bnas jua\u0146a (of\u0161ors)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0136\u012bnas jua\u0146s"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Kolumbijas peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"Kolumbijas re\u0101ls"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Kostarikas kolons"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Kubas konvert\u0113jamais peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Kubas peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Kaboverdes eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Kipras m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u010cehijas krona"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"V\u0101cijas marka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"D\u017eibutijas franks"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"D\u0101nijas krona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"Dominik\u0101nas peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Al\u017e\u012brijas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Igaunijas krona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0112\u0123iptes m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritrejas nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Sp\u0101nijas peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Etiopijas birs"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("eiro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Somijas marka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Fid\u017ei dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Folklenda Salu m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Francijas franks"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Lielbrit\u0101nijas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Gruzijas lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ganas sedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Gibralt\u0101ra m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambijas dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Gvinejas franks"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Grie\u0137ijas drahma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Gvatemalas ketsals"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Gaj\u0101nas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Honkongas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Hondurasas lemp\u012bra"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Horv\u0101tijas kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Haiti gurds"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Ung\u0101rijas forints"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Indon\u0113zijas r\u016bpija"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u012arijas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Izra\u0113las \u0161ekelis"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Indijas r\u016bpija"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Ir\u0101kas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Ir\u0101nas ri\u0101ls"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Islandes krona"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"It\u0101lijas lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Jamaikas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"Jord\u0101nas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Jap\u0101nas jena"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Kenijas \u0161ili\u0146\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Kirgizst\u0101nas soms"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Kambod\u017eas riels"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Komoru franks"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Zieme\u013ckorejas vona"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Dienvidkorejas vona"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Kuveitas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Kaimanu salu dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Kazahst\u0101nas tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laosas kips"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Lib\u0101nas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0160rilankas r\u016bpija"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Lib\u0113rijas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesoto loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Lietuvas lits"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Luksemburgas franks"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Latvijas lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latvijas rublis"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"L\u012bbijas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Marokas dirh\u0113ms"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldovas leja"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Madagaskaras ariari"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Ma\u0137edonijas den\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"CFA (\u0100frikas) franks"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Mjanmas kjats"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongolijas tugriks"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Makao pataka"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Maurit\u0101nijas ugija (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Maurit\u0101nijas ugija"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Maltas lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Maltas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Maur\u012bcijas r\u016bpija"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Mald\u012bvijas r\u016bfija"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Mal\u0101vijas kva\u010da"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Meksikas peso"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malaizijas ringits"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambikas eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mozambikas vecais metikals"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambikas metikals"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Nam\u012bbijas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nig\u0113rijas naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Nikaragvas kordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"N\u012bderlandes guldenis"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Norv\u0113\u0123ijas krona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Nep\u0101las r\u016bpija"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Jaunz\u0113landes dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Om\u0101nas ri\u0101ls"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panamas balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peru sols"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Papua-Jaungvinejas kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Filip\u012bnu peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Pakist\u0101nas r\u016bpija"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Polijas zlots"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Portug\u0101les eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paragvajas guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Kataras ri\u0101ls"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Rum\u0101nijas vec\u0101 leja"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Rum\u0101nijas leja"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Serbijas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Krievijas rublis"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Ruandas franks"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Sa\u016bda Ar\u0101bijas ri\u0101ls"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Z\u0101lamana Salu dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Sei\u0161elu salu r\u016bpija"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Sud\u0101nas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Zviedrijas krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Singap\u016bras dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Sv.Hel\u0113nas salas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Slov\u0113nijas tolars"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Slovakijas krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sjerraleones leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Som\u0101lijas \u0161ili\u0146\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Surinamas dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinamas guldenis"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Dienvidsud\u0101nas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Santome un Prinsipi dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Santome un Prinsipi dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("Salvadoras kolons"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"S\u012brijas m\u0101rci\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Svazilendas lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Taizemes b\u0101ts"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Tad\u017eikist\u0101nas somons"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Turkmenist\u0101nas manats (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Turkmenist\u0101nas manats"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Tunisijas din\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Tongas paanga"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Turcijas lira (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turcijas lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Trinid\u0101das un Tob\u0101go dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Taiv\u0101nas jaunais dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanz\u0101nijas \u0161ili\u0146\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ukrainas grivna"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Ugandas \u0161ili\u0146\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ASV dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Urugvajas peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Uzbekist\u0101nas sums"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venecu\u0113las boliv\u0101rs (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Venecu\u0113las boliv\u0101rs (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Venecu\u0113las boliv\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vjetnamas dongi"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatu vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoa tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Centr\u0101l\u0101frikas CFA franks"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("sudrabs"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("zelts"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Eiropas nor\u0113\u0137inu vien\u012bba EURCO"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Eiropas naudas vien\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Eiropas nor\u0113\u0137inu vien\u012bba (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Eiropas nor\u0113\u0137inu vien\u012bba (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Austrumkar\u012bbu dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Speci\u0101l\u0101s aiz\u0146\u0113muma ties\u012bbas"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Eiropas nor\u0113\u0137inu vien\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Francijas zelta franks"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Francijas UIC franks"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Rietum\u0101frikas CFA franks"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"pall\u0101dijs"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP franks"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"plat\u012bns"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Testa val\u016btas kods"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Nezin\u0101ma val\u016bta"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Jemenas ri\u0101ls"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Dienvid\u0101frikas rends"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambijas kva\u010da (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Zambijas kva\u010da"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabves dol\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Zimbabves dol\u0101rs (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_lv::CurrencyNames_lv() {
}

$Class* CurrencyNames_lv::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lv, name, initialize, &_CurrencyNames_lv_ClassInfo_, allocate$CurrencyNames_lv);
	return class$;
}

$Class* CurrencyNames_lv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun