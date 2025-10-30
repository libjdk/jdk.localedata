#include <sun/util/resources/cldr/ext/CurrencyNames_az.h>

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

$MethodInfo _CurrencyNames_az_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_az::*)()>(&CurrencyNames_az::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_az_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_az",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_az_MethodInfo_
};

$Object* allocate$CurrencyNames_az($Class* clazz) {
	return $of($alloc(CurrencyNames_az));
}

void CurrencyNames_az::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_az::getContents() {
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
			$of(u"\u20bc"_s)
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
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"Andora Pesetas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Birl\u0259\u015fmi\u015f \u018fr\u0259b \u018fmirlikl\u0259ri Dirh\u0259mi"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u018ffqan\u0131stan \u018ffqanisi (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u018ffqan\u0131stan \u018ffqanisi"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Albaniya Leki (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Albaniya Leki"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Erm\u0259nistan Dram\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Niderland Antilyas\u0131 Gilderi"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Anqola Kvanzas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Anqola Kvanzasi (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Anqola Yeni Kvanzas\u0131 (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Anqola Kvanzas\u0131 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Argentina avstral\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentina pesosu (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentina Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Avstriya \u015eillinqi"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Avstraliya Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruba Florini"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Az\u0259rbaycan Manat\u0131 (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Az\u0259rbaycan Manat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Bosniya-Herseqovina Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Bosniya-Herseqovina Markas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Barbados Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Banqlade\u015f Takas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Bel\u00e7ika Frank\u0131 (dey\u015firik)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Bel\u00e7ika Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Bel\u00e7ika Frank\u0131 (finans)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Bolqar\u0131stan Levas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Bolqar\u0131stan Levi"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"B\u0259hreyn Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Burundi Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Bermuda Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Bruney Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviya Bolivianosu"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Boliviya pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"Boliviya mvdol\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Braziliya kruzeyro novas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("Braziliya kruzadosu"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Braziliya kruzeyrosu (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Braziliya Real\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Braziliya kruzado novas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("Braziliya kruzeyrosu"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Baham Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Butan Nqultrumu"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Burmis Kyat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Botsvana Pulas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Belarus Yeni Rublu (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarus Rublu"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Belarus Rublu (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Beliz Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Kanada Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Konqo Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR Avro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0130sve\u00e7r\u0259 Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR Frankas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u00c7ili Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u00c7in Yuan\u0131 (of\u015for)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u00c7in Yuan\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Kolumbiya Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Kosta Rika Kolonu"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Serbiya Dinar\u0131 (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u00c7exoslavakiya Korunas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Kuba \u00c7evril\u0259n Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Kuba Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Kape Verde Eskudosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Kipr Paundu"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u00c7exiya Korunas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u015e\u0259rq Almaniya Ostmark\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Alman Markas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Cibuti Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Danimarka Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominika Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u018flc\u0259zair Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ekvador Sukresi"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Estoniya Krunu"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Misir Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Eritreya Nakfas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0130span Pesetas\u0131 (A account)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0130span Pesetas\u0131 (d\u0259y\u015firik)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0130span Pesetas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Efiopiya B\u0131rr\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Avro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Fin Markas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Fici Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Folklend Adalar\u0131 Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Frans\u0131z Markas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Britaniya Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"G\u00fcrc\u00fcstan Kupon Lariti"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"G\u00fcrc\u00fcstan Larisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Qana Sedisi (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Qana Sedisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"C\u0259b\u0259li-Tariq Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Qambiya Dalasisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Qvineya Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Qvineya Sulisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Ekvatoriya Gvineya Ekvele Quneanas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Yunan Dra\u00e7mas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Qvatemala K\u00fcetzal\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Portugal Qvineya Eskudosu"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Qvineya-Bisau Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Qayana Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Honq Konq Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Honduras Lempiras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Xorvatiya Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Xorvatiya Kunas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Haiti Qourdu"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Macar\u0131stan Forinti"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0130ndoneziya Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0130rlandiya Paundu"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0130zrail Paundu"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"\u0130srail \u015eekeli (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0130srail Yeni \u015eekeli"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Hindistan Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0130raq Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0130ran Rial\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"\u0130slandiya Kronu (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0130slandiya Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0130taliya Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Yamayka Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0130ordaniya Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yaponiya Yeni"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Keniya \u015eillinqi"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Q\u0131r\u011f\u0131z\u0131stan Somu"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Kamboca Rieli"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Komor Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u015eimali Koreya Vonu"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"C\u0259nubi Koreya Vonu"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"K\u00fcveyt Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Kayman Adalar\u0131 Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Qazax\u0131stan Tengesi"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laos Kipi"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Livan Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u015eri Lanka Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Liberiya Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesoto Lotisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litva Liti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Litva Talonas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Luksemburq Frankas\u0131 (d\u0259yi\u015fik)"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Luksemburq Frankas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Luksemburq Frankas\u0131 (finans)"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Latviya Lat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latviya Rublu"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Liviya Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"M\u0259rake\u015f Dirh\u0259mi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"M\u0259rake\u015f Frankas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldova Leyi"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Madaqaskar Ariarisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Madaqaskar Frankas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Makedoniya Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Makedoniya Dinar\u0131 (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Mali Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Myanma Kiyat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Monqoliya Tuqriki"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Makao Patakas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mavritaniya Ugiyas\u0131 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Mavritaniya Ugiyas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Maltiz Paundu"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mavriki Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Maldiv Rufiyas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Malavi Kva\u00e7as\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Meksika Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Meksika g\u00fcm\u00fc\u015f pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malayziya Ringiti"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambik Eskudosu"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mozambik Metikal\u0131 (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Mozambik Metikal\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Namibiya Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nigeriya Nairas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("Nikaraqua kordobu"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Nikaraqua Kordobas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Hollandiya Gilderi"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Norve\u00e7 Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepal Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Yeni Zelandiya Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Oman Rial\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Panama Balboas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Peru Inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peru Solu"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Peru Solu (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Papua Yeni Qvineya Kinas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Filippin Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistan Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Pol\u015fa Zlot\u0131s\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Pol\u015fa Zlot\u0131s\u0131 (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portuqal Eskudosu"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paraqvay Quaranisi"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Qatar Rial\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"Rodezian Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Rum\u0131niya Leyi (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Rum\u0131niya Leyi"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Serbiya Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rusiya Rublu"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Rusiya Rublu (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Ruanda Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"S\u0259udiyy\u0259 Riyal\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Solomon Adalar\u0131 Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Sey\u015fel Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudan Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0130sve\u00e7 Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Sinqapur Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"M\u00fcq\u0259dd\u0259s Yelena Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Sloveniya Tolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Slovak Korunas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierra Leon Leonu"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Somali \u015eillinqi"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Surinam Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"C\u0259nubi Sudan Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"San Tom v\u0259 Prinsip Dobras\u0131 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"San Tom v\u0259 Prinsip Dobras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Sovet Rublu"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("El Salvador kolonu"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Suriya Funtu"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Svazilend Lilangenini"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Tayland Bat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("Tacikistan Rublu"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Tacikistan Somonisi"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"T\u00fcrkm\u0259nistan Manat\u0131 (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"T\u00fcrkm\u0259nistan Manat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Tunis Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Tonqa Panqas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timor Eskudu"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"T\u00fcrkiy\u0259 Lir\u0259si (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"T\u00fcrkiy\u0259 Lir\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Trinidad v\u0259 Tobaqo Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Tayvan Yeni Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanzaniya \u015eillinqi"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Ukrayna Qrivnas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Ukrayna Karbovenesas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Uqanda \u015eillinqi (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Uqanda \u015eillinqi"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"AB\u015e Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"AB\u015e dollar\u0131 (yeni g\u00fcn)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"AB\u015e dollar\u0131 (h\u0259min g\u00fcn)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Uruqvay pesosu Unidades Indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruqvay Pesosu (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Uruqvay Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u00d6zb\u0259kistan Somu"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venesuela Bolivar\u0131 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Venesuela Bolivar\u0131 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Venesuela Bolivar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vyetnam Donqu"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Vyetnam Donqu (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatu Vatusu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Samoa Talas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Kamerun Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"g\u00fcm\u00fc\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"q\u0131z\u0131l"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u015e\u0259rqi Karib Dollar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Frans\u0131z G\u0131z\u0131l Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Frans\u0131z U\u0130C Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Fil Di\u015fi Sahili Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"Frans\u0131z Polineziyas\u0131 Frank\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platinum"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Nam\u0259lum Valyuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Y\u0259m\u0259n Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Y\u0259m\u0259n Rial\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Yuqoslaviya Dinar\u0131 (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Yuqoslaviya Yeni Dinar\u0131 (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Yuqoslaviya Dinar\u0131 (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"C\u0259nubi Afrika Rand\u0131 (finans)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"C\u0259nubi Afrika Rand\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambiya Kva\u00e7as\u0131 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Zambiya Kva\u00e7as\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zair Yeni Zairi (1993\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Zair Zairi (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabve Dollar\u0131 (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Zimbabve Dollar\u0131 (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Zimbabve Dollar\u0131 (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_az::CurrencyNames_az() {
}

$Class* CurrencyNames_az::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_az, name, initialize, &_CurrencyNames_az_ClassInfo_, allocate$CurrencyNames_az);
	return class$;
}

$Class* CurrencyNames_az::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun