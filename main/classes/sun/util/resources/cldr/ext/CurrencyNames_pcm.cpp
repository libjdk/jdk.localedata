#include <sun/util/resources/cldr/ext/CurrencyNames_pcm.h>

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

$MethodInfo _CurrencyNames_pcm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_pcm::*)()>(&CurrencyNames_pcm::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_pcm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pcm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pcm_MethodInfo_
};

$Object* allocate$CurrencyNames_pcm($Class* clazz) {
	return $of($alloc(CurrencyNames_pcm));
}

void CurrencyNames_pcm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pcm::getContents() {
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
			$of("CAD"_s),
			$of("KA$"_s)
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
			$of(u"\u20a6"_s)
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
			$of(u"Yuna\u00edt\u1eb9\u0301d \u00c1r\u00e1b \u1eb8\u0301m\u00edr\u00e9ts D\u00edrham"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Afg\u00e1n Afg\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Alb\u00e9ni\u00e1 L\u1eb9k"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Arm\u1eb9\u0301ni\u00e1 Dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"N\u1eb9\u0301dal\u00e1nds Ant\u00edli\u00e1n G\u00edlda"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Ang\u00f3l\u00e1 Kw\u00e1nza"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Aj\u1eb9nt\u00edna P\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u1eccstr\u00e9li\u00e1 D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Ar\u00faba Fl\u1ecd\u0301rin"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Az\u1eb9rbaij\u00e1n M\u00e1nat"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"B\u1ecd\u0301sni\u00e1 an H\u1eb9z\u1eb9gov\u00edna Mak W\u00e9 P\u1eb9\u0301sin F\u00edt Chenj"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Barb\u00e9d\u1ecds D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Banglad\u1eb9\u0301sh T\u00e1ka"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"B\u1ecdlg\u00e9ri\u00e1 L\u1eb9v"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Bar\u00e9in D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Bur\u00fand\u00ed Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"B\u1eb9mi\u00fada D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Brun\u1eb9\u00ed D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Bol\u00edvi\u00e1 Bolivi\u00e1no"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Braz\u00edl R\u1eb9al"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Bah\u00e1mas D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"But\u00e1n Ng\u00faltrum"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Botsw\u00e1n\u00e1 P\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"B\u1eb9lar\u00fas R\u00fabul"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"B\u1eb9liz D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"K\u00e1n\u00e1d\u00e1 D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"K\u00f3ng\u00f3 Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Sw\u00eds Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Ch\u00edl\u00ed P\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Cha\u00edn\u00e1 Yuan (ples-d\u1eb9m a\u00fasa\u00edd cha\u00edna)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Cha\u00edn\u00e1 Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Kol\u00f3mbi\u00e1 P\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"K\u00f3sta R\u00edka K\u00f3l\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Ki\u00fab\u00e1 P\u1eb9\u0301so W\u00e9 P\u1eb9\u0301sin F\u00edt Chenj"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Ki\u00fab\u00e1 P\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"K\u00e9p V\u1eb9\u0301d \u1eb8sk\u00fado"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Ch\u1eb9\u0301k K\u00f3r\u00fana"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Jib\u00fat\u00ed Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"D\u1eb9\u0301nm\u00e1k Kr\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"D\u1ecdm\u00edn\u00edkan P\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Alj\u00edria D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u00cdj\u00edpt Paund"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u1eb8ritr\u1eb9\u00e1 N\u00e1kfa"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u1eb8ti\u00f3pi\u00e1 Berr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Y\u00faro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"F\u00edj\u00ed D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"F\u1ecdlkland A\u00edlands Paund"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Br\u00edt\u00edsh P\u00e1und"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"J\u1ecd\u0301ji\u00e1 L\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Gan\u00e1 S\u00eddi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Jibr\u1ecd\u0301lta P\u00e1und"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"G\u00e1mbi\u00e1 Dal\u00e1si"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"G\u00edn\u00ed Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Gu\u00e1t\u1eb9m\u00e1la Kwu\u1eb9\u0301tzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Giy\u00e1na D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"H\u1ecdng K\u1ecd\u0301ng D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"H\u1ecdnd\u00far\u00e1n L\u1eb9mp\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Kro\u00e9shia K\u00fana"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Ha\u00edti Gourd"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"H\u1ecdng\u00e9ri\u00e1 F\u1ecd\u0301rint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Indon\u00edshi\u00e1 Rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u00cdzr\u1eb9\u0301l Ni\u00fa Sh\u1eb9\u0301k\u1eb9l"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u00cdndi\u00e1 R\u00fapi"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Ir\u00e1k D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Ir\u00e1n Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"A\u00edsl\u00e1nd Kr\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Jama\u00edka D\u1ecdla"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"J\u1ecd\u0301d\u00e1n D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Jap\u00e1n Y\u1eb9n"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"K\u1eb9\u0301ny\u00e1 Sh\u00edlin"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"K\u1eb9j\u00edstan Som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Kamb\u00f3di\u00e1 Ri\u1eb9l"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"K\u1ecd\u0301m\u1ecd\u0301ros Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"N\u1ecd\u0301t Kori\u00e1 W\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Sa\u00fat Kori\u00e1 W\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Kuw\u00e9t D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"K\u00e9man A\u00edlands D\u1ecdla"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Kazakstan T\u1eb9\u0301nj"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"La\u00f3s Kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"L\u1eb9\u0301b\u00e1n\u1ecd\u0301n Paund"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Sri L\u00e1nk\u00e1 R\u00fapi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Laib\u1eb9\u0301ri\u00e1 D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"L\u00edbia D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Mor\u1ecdko D\u00edrham"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"M\u1ecdld\u00f3va Lu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Malag\u00e1s\u00ed Ari\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Mas\u1eb9d\u00f3nia D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Mi\u00e1nm\u00e1 Kiat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"M\u1ecdng\u00f3li\u00e1 T\u00fagrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Mak\u00e1o P\u00e1t\u00e1ka"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"M\u1ecdrit\u00e9ni\u00e1 Ugu\u00edya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"M\u1ecdr\u00edsh\u1ecd\u0301s R\u00fapi"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"M\u1ecd\u0301ld\u00edvs R\u00faf\u00edya"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Mal\u00e1wi \u0301Kw\u00e1cha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"M\u1eb9\u0301ks\u00edko P\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Mal\u00e9shi\u00e1 R\u00edngit"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Moz\u00e1mb\u00edk M\u00e9t\u00edkal"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Nam\u00edbi\u00e1 D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Naij\u00edri\u00e1 Na\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Nikar\u00e1gwua Kord\u00f3ba"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"N\u1ecd\u0301w\u00e9 Kr\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"N\u1eb9\u0301p\u00e1l R\u00fapi"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Ni\u00fa Z\u00edl\u00e1nd D\u1ecd\u0301las"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Om\u00e1n Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"P\u00e1n\u00e1ma Balb\u00f3a"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"P\u1eb9r\u00favi\u00e1n Sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"P\u00e1pu\u00e1 Ni\u00fa G\u00edni K\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"F\u00edl\u00edp\u00edns P\u00edso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Pak\u00edst\u00e1n R\u00fapi"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"P\u00f3l\u00e1nd Z\u00edl\u1ecd\u0301ti"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"P\u00e1ragwu\u00e1 Guar\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Kata R\u00edal"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Rom\u00e9ni\u00e1 Lu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"S\u1eb9rbia D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"R\u1ecd\u0301shi\u00e1 R\u00fabul"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Ruw\u00e1nd\u00e1 Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Sa\u00fad\u00ed Ar\u00e9bi\u00e1 Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"S\u00f3l\u00f3m\u1ecd\u0301n A\u00edlands D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"S\u1eb9\u0301ch\u1eb9\u0301ls R\u00fapi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudan Paund"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Sw\u00edd\u1eb9\u0301n Kr\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Singap\u1ecd\u0301 D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Sent H\u1eb9l\u1eb9\u0301n\u00e1 Paund"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Si\u1eb9\u0301ra L\u00edoni\u00e1 Li\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"S\u1ecdm\u00e1li\u00e1 Sh\u00edlin"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"S\u00far\u00edn\u00e1m D\u1ecdla"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Sa\u00fat Sud\u00e1n Paund"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Sao T\u00f3m\u1eb9 & Pr\u00edns\u00edp\u1eb9 D\u00f3bra"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"S\u00edri\u00e1 Paund"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Sw\u00e1z\u00ed Lil\u00e1nj\u1eb9\u0301ni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Ta\u00edl\u00e1nd Baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Taj\u00edkstan S\u00f3m\u00f3ni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"T\u1ecdkm\u1eb9\u0301n\u00edst\u00e1n M\u00e1nat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Tun\u00edshia D\u00ednar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"T\u00f3nga P\u00e1nga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"T\u1ecd\u0301k\u00ed L\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Tr\u00edn\u00eddad & Tob\u00e1go D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Ni\u00fa Taiw\u00e1n D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanz\u00e1ni\u00e1 Sh\u00edlin"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Yukr\u1eb9\u00edn R\u00edvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Yug\u00e1nd\u00e1 Sh\u00edlin"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"US D\u1ecd\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Yurugwa\u00ed P\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Uzb\u1eb9\u0301kistan Som"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"V\u1eb9n\u1eb9zu\u1eb9l\u00e1 Bol\u00edvar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"Vi\u1eb9\u0301tn\u00e1m D\u1ecdng"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"Vanu\u00e1t\u00fa V\u00e1tu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Sam\u00f3a T\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"S\u1eb9\u0301ntr\u00e1l \u00c1fr\u00edk\u00e1 Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u00cdst Kar\u00edbi\u00e1n D\u1ecdla"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"W\u1eb9\u0301st Afr\u00edk\u00e1 S\u1eb9\u0301fa Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"Fr\u1eb9\u0301nch Polin\u00edshi\u00e1 Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"M\u1ecdn\u00ed W\u00e9 P\u00edpol N\u1ecd No"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Y\u1eb9\u0301m\u1eb9\u0301n Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Sa\u00fat \u00c1fr\u00edk\u00e1 Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Z\u00e1mbi\u00e1 Kw\u00e1cha"_s)
		})
	}));
	return data;
}

CurrencyNames_pcm::CurrencyNames_pcm() {
}

$Class* CurrencyNames_pcm::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pcm, name, initialize, &_CurrencyNames_pcm_ClassInfo_, allocate$CurrencyNames_pcm);
	return class$;
}

$Class* CurrencyNames_pcm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun