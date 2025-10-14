#include <sun/util/resources/cldr/ext/LocaleNames_az.h>

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

$MethodInfo _LocaleNames_az_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_az::*)()>(&LocaleNames_az::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_az_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_az",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_az_MethodInfo_
};

$Object* allocate$LocaleNames_az($Class* clazz) {
	return $of($alloc(LocaleNames_az));
}

void LocaleNames_az::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_az::getContents() {
	$var($String, metaValue_ae, "avestan"_s);
	$var($String, metaValue_ar, u"\u0259r\u0259b"_s);
	$var($String, metaValue_bn, "benqal"_s);
	$var($String, metaValue_bo, "tibet"_s);
	$var($String, metaValue_el, "yunan"_s);
	$var($String, metaValue_gu, "qucarat"_s);
	$var($String, metaValue_hy, u"erm\u0259ni"_s);
	$var($String, metaValue_ja, "yapon"_s);
	$var($String, metaValue_ka, u"g\u00fcrc\u00fc"_s);
	$var($String, metaValue_km, "kxmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, "koreya"_s);
	$var($String, metaValue_la, u"lat\u0131n"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, "monqol"_s);
	$var($String, metaValue_su, "sundan"_s);
	$var($String, metaValue_ta, "tamil"_s);
	$var($String, metaValue_te, "teluqu"_s);
	$var($String, metaValue_th, "tay"_s);
	$var($String, metaValue_tl, "taqaloq"_s);
	$var($String, metaValue_ban, "bali"_s);
	$var($String, metaValue_sam, "samaritan"_s);
	$var($String, metaValue_uga, "uqarit"_s);
	$var($String, metaValue_type_hc_h23, u"24 Saatl\u0131q Sistem (0\u201323)"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f6ln"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"o\u011fam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirand"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simvollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("maruari"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("taqbanva"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u00c7akma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"q\u0259dim misir"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("racastani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("faqs-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("timne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Askenson adas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonqan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Birl\u0259\u015fmi\u015f \u018fr\u0259b \u018fmirlikl\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamand"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u018ffqan\u0131stan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antiqua v\u0259 Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Efiop T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angilya"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Erm\u0259nistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengvar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Anqola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("prti"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Amerika Samoas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Avstriya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Avstraliya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Amerika ingilisc\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Aland adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Az\u0259rbaycan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosniya v\u0259 Herseqovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("sebuan"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banqlade\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kum\u0131k"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bel\u00e7ika"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"orta y\u00fcks\u0259k alman"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bolqar\u0131stan"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"B\u0259hreyn"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of("Sent-Bartelemi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Bermud adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenay"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Bruney"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliviya"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karib Niderland\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Braziliya"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Baham adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soqa"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Buve adas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Beliz"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"dan\u0131\u015fma s\u0259sl\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u0130ran T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u0130vrit R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokos (Kilinq) adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazandaran"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Konqo - Kin\u015fasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"M\u0259rk\u0259zi Afrika Respublikas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Konqo - Brazzavil"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0130sve\u00e7r\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kotd\u2019ivuar"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Kuk adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u00c7ili"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kti"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u00c7in"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Klipperton adas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kabo-Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Milad adas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipr"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u00c7exiya"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekacuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Almaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"q\u0259dim alman"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("akin"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u00e7iqa"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Dieqo Qarsiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Devanaqari R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Cibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimarka"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("akoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("qondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("brayl"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Ki\u00e7ik Erm\u0259ni R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikan Respublikas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("qorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("qotika"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meytey mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tiqre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u018flc\u0259zair"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("panqasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"p\u0259hl\u0259vi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Seuta v\u0259 Melilya"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u00e7ib\u00e7a"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanqa"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papyamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adanqme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Misir"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Q\u0259rbi Saxara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u00e7a\u011fatay"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palayan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u00e7ukiz"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u00e7inuk l\u0259h\u00e7\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u00e7ipevyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u00e7oktau"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u00e7eroki"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreya"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0130spaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Efiopiya"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Avropa Birliyi"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Qreqorian T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Avrozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u00e7eyen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Qucarat R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("hindistan"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ad\u0131gey"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fici"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Folklend adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Farer adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Fransa"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelay"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("qrebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Hindi t\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"q\u0259dim yunan"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Qabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votik"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Birl\u0259\u015fmi\u015f Krall\u0131q"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("niger kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Qrenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"G\u00fcrc\u00fcstan"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Fransa Qvianas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernsi"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Qana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tay le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"C\u0259b\u0259ll\u00fctariq"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Qrenlandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("orta ingilis"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Qambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Qvineya"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Qvadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatorial Qvineya"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Yunan\u0131stan"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"C\u0259nubi Corciya v\u0259 C\u0259nubi Sendvi\u00e7 adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Qvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Quam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Qvineya-Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlinqit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klinqon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"t\u0259z\u0259 tay lu"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Qayana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"M\u0259rk\u0259zi k\u00fcrdc\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"dil m\u0259zmunu yoxdur"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Avstriya almancas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Honq Konq X\u00fcsusi \u0130nzibati Rayonu \u00c7in"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("vay"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Herd v\u0259 Makdonald adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Xorvatiya"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aqhem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0130sve\u00e7r\u0259 almancas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Macar\u0131stan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tama\u015fek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanar adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("Min Nan"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0130ndoneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"q\u0259dim fars"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0130rlandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("neapolitan"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0130srail"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Men adas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hindistan"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britaniyan\u0131n Hind Okean\u0131 \u018frazisi"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0130raq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0130ran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0130slandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0130taliya"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("riyazi notasiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Tay R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Benqal R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Cersi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u0130slam T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Yamayka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0130ordaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Yaponiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("aynu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("qusi"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("nyasa tonqa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannada R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayax li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0130sve\u00e7r\u0259 y\u00fcks\u0259k almancas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Buddist T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Keniya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Lat\u0131n Amerikas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Q\u0131r\u011f\u0131z\u0131stan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboca"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Komor adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Sent-Kits v\u0259 Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanada frans\u0131zcas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u015eimali Koreya"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"C\u0259nubi Koreya"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("polard fonetik"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0130sve\u00e7r\u0259 frans\u0131zcas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"K\u00fcveyt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kayman adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Qazax\u0131stan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kiril"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Livan"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sent-Lusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("foyenik"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"q\u0259dimi kilsa kirili"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"qvi\u00e7in"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"a\u015fa\u011f\u0131 alman"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lixten\u015fteyn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u015eri-Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("akkad"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kopt"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("kitab paxlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"L\u00fcksemburq"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latviya"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Liviya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("sefard"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunyo"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"q\u0259rbi p\u0259ncab"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"M\u0259rake\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Monteneqro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sent Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madaqaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Mar\u015fal adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u015eimali Makedoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Monqolustan"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Makao X\u0130R \u00c7in"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u015eimali Marian adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mavritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Monserat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mavriki"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"c\u0259nubi altay"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Maldiv adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Yapon T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malayziya"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("fli"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Saharadan c\u0259nub"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Y\u0259hudi T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Yeni Kaledoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolk adas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("flp"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaraqua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahav monq"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Niderland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norve\u00e7"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("foenik"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"sim\u015fyan"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Yeni Zelandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("roman"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroytik"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"kr\u0131m t\u00fcrkc\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"q\u0259dim ingilis"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Sey\u015fel kreol frans\u0131zcas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"q\u0259dimi fars"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Ivrit t\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ka\u015fubyan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Britaniya ingilisc\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Fransa Polineziyas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Yeni Qvineya"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pol\u015fa"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"M\u00fcq\u0259dd\u0259s Pyer v\u0259 Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitkern adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"F\u0259l\u0259stin \u018frazil\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portuqaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Ki\u00e7ik Yunan R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraqvay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("ibrani"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Q\u0259t\u0259r"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niyuan"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Uzaq Okeaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"l\u0259zgi"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tavt"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"D\u00fcnya"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u015eimali Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reyunyon"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"C\u0259nubi Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"lo\u011fban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"rec\u0259ng"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Okeaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rum\u0131niya"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"mani\u00e7ayen"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"xaro\u015fti"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"S\u0259udiyy\u0259 \u018fr\u0259bistan\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponpey"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Solomon adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasavaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Q\u0259rbi Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sey\u015fel adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"M\u0259rk\u0259zi Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0130sve\u00e7"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u015e\u0259rqi Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramik"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u015eimali Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Sinqapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"M\u00fcq\u0259dd\u0259s Yelena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"S\u0259rt s\u0259tird\u0259n s\u0259tr\u0259 ke\u00e7irm\u0259 \u00fcslubu"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"M\u0259rk\u0259zi Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sloveniya"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"C\u0259nubi Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbard v\u0259 Yan-Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Syerra-Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San-Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Seneqal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"mapu\u00e7e"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u018fn\u0259n\u0259vi Tamil R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"C\u0259nubi Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"San-Tome v\u0259 Prinsipi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint-Marten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Suriya"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Esvatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("yapiz"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Kunya"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"AB\u015e \u00d6l\u00e7\u00fc Sistemi"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u015eimal Amerikas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"T\u00f6rks v\u0259 Kaykos adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yanqben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u00c7ad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Fransan\u0131n C\u0259nub \u018frazil\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Toqo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tacikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karib"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u015e\u0259rqi Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u00fcrkm\u0259nistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunis"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonqa"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u00fcrkiy\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad v\u0259 Tobaqo"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tayvan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orxon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kvasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"tan\u0131nmayan yaz\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrayna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aroman"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u015e\u0259rqi Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinyan"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Konqo suahilic\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"C\u0259nubi Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("hayda"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"C\u0259nub-\u015e\u0259rqi Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uqanda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Pinyin t\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"C\u0259nubi Avropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhal"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"AB\u015e-a ba\u011fl\u0131 ki\u00e7ik adac\u0131qlar"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Birl\u0259\u015fmi\u015f Mill\u0259tl\u0259r T\u0259\u015fkilat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amerika Birl\u0259\u015fmi\u015f \u015etatlar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havay"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruqvay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("pruss"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u00d6zb\u0259kistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"M\u0259rk\u0259zi Atlas tamazic\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"q\u0259dim provansal"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sent-Vinsent v\u0259 Qrenadinl\u0259r"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venesuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britaniyan\u0131n Virgin adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"AB\u015e Virgin adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vyetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("noqay"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rua"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"q\u0259dim nors"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Avstralaziya"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melaneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Uollis v\u0259 Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikroneziya Regionu"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("nqomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("valles"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"va\u015fo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Psevdo-Aksent"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varay"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Psevdo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polineziya"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"yaz\u0131s\u0131z"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ol \u00e7iki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("valpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("blissymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Y\u0259m\u0259n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Standart S\u0131ralama"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"i\u015far\u0259t yaz\u0131s\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayot"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"C\u0259nub Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"S\u0259rb\u0259st s\u0259tird\u0259n s\u0259tr\u0259 ke\u00e7irm\u0259 \u00fcslubu"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanaqari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"G\u00fcrc\u00fc R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("iraqana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Nam\u0259lum Region"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metrik Sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("monqo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u015fimal soto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Teluqu R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ma\u00e7am"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Sad\u0259l\u0259\u015fmi\u015f \u00c7in Maliyy\u0259 R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiliqaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Geni\u015fl\u0259nmi\u015f \u018fr\u0259b-Hind R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Tam Geni\u015f R\u0259q\u0259ml\u0259r"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hittit"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("darqva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("maya hiyeroqlifi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u015fimali luri"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("koptik"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Rum R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("saxa"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(metaValue_sam)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santal"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinaq"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("ivrit-fars"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("nqambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("qurmuxi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sanqu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luyseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankol"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("nyamvezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filippin"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("monq"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaver"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("baluc"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavey"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ivrit-\u0259r\u0259b"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Kastiliya ispancas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("siciliya"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abxaz"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhar"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("araqon"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"hecal\u0131 yapon \u0259lifbas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assam"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"c\u0259nubi k\u00fcrd"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"az\u0259rbaycan"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u015fq\u0131rd"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bolqar"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("doqrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniya"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Lao R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of("nko"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u00e7e\u00e7en"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u00e7amoro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsika"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u00e7ex"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("slavyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u00e7uva\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("uels"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Efiop R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danimarka"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Portuqaliya portuqalcas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("alman"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Standart Valyuta Format\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("buqin"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"q\u0259dim irland"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("maldiv"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Lat\u0131n Amerikas\u0131 ispancas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzonqxa"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u00c7in T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Yunan R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Normal s\u0259tird\u0259n s\u0259tr\u0259 ke\u00e7irm\u0259 \u00fcslubu"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldav"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("ingilis"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("ispan"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("eston"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("bask"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"hanq\u0131l"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(metaValue_sam)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ta\u00e7elit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"yuxar\u0131 sorb"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u015fan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunu"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("fars"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"sad\u0259l\u0259\u015fmi\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Q\u0259rb R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0259n\u0259n\u0259vi"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"c\u0259nubi az\u0259rbaycan"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("syan"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("fin"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fici"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"q\u0259rbi b\u0259luc"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kanton"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("farer"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"frans\u0131z"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"q\u0259rbi friz"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irland"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u015eotlandiya keltc\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("qalisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("quarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bxo\u00e7puri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"nam\u0259lum dil"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manks"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("ivrit"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hind"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("xorvat"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haiti kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("macar"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlinqua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indoneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibet R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlinqve"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("iqbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"si\u00e7uan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"orta frans\u0131z"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"q\u0259dim frans\u0131z"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u015fimali fris"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("island"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italyan"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("doqri"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"c\u0259nubi sami"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("yava"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u015favyan"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("maduriz"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lule sami"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("maqahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maitili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("inari sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"siksik\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("vu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skolt sami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"m\u0259ndinqo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("konqo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("qotik"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masay"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("qazax"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"k\u0259\u015fmir"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("sirt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lep\u00e7\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"k\u00fcrd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("korn"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"q\u0131r\u011f\u0131z"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"l\u00fcksemburq"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malayalam R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("qanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("ronqoronqo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburq"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("linqala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friul"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u0130mperial \u00d6l\u00e7\u00fc Sistemi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litva"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanqa"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"lat\u0131\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("soqdiyen"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malaqas"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"mar\u015fal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Standart Unicode S\u0131ralama"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedon"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("malta"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birman"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("saurastra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u015fa"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"a\u015fa\u011f\u0131 sorb"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("armi"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u00dcmumi M\u0259qs\u0259dli Axtar\u0131\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"bokmal norve\u00e7"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u015fimali ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonqa"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("holland"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"n\u00fcnorsk norve\u00e7"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norve\u00e7"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"c\u0259nubi ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navayo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("qaraqalpaq"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanca"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ka\u00e7in"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabile"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("oksitan"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("ju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ocibva"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Erm\u0259ni R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kavi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("odiya"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetin"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabarda-\u00e7\u0259rk\u0259z"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisien"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tonqo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"p\u0259ncab"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polyak"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("orta holland"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Dangi T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pu\u015ftu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portuqal"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("orta irland"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"S\u0131ralama"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Braziliya portuqalcas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tiyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("maxuva-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Valyuta Format\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"T\u0259qvim"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(metaValue_type_hc_h23)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(metaValue_type_hc_h23)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Myanma R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u00e7ua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapotek"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makond"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("efiop"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 Saatl\u0131q Sistem (0\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 Saatl\u0131q Sistem (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"roman\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Valyuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rum\u0131n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Oriya R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Onluq \u00c7in R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rus"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarvanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blisimbols"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdian"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Avstraliya ingilisc\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardin"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u015fimali sami"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minanqkaban"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sanqo"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serb-xorvat"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeryan"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u015fona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u018fr\u0259b-Hind R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("alban"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serb"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"U\u00e7ot Valyuta Format\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("cava"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"isve\u00e7"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u018fn\u0259n\u0259vi \u00c7in Maliyy\u0259 R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buryat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"M\u0259rk\u0259zi Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Q\u0259rbi Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tacik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tiqrin"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugin"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Kanada ingilisc\u0259si"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"t\u00fcrkm\u0259n"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("svana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonqa"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("diola"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Yapon R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"t\u00fcrk"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("sonqa"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komor"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("kakm"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("taxiti"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Avropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u015e\u0259rqi Avropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u015eimali Avropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaqa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Q\u0259rbi Avropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"uy\u011fur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"q\u0259dimi italyal\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u00fcmumi yaz\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrayna"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalm\u0131k"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaqa"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u00f6zb\u0259k"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("xazi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"a\u015fa\u011f\u0131 sakson"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"siloti n\u0259qri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Minquo T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vyetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("xotan"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"koyra \u00e7iini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Saat Sikli (12 / 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ki\u00e7e"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("qa"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("valun"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("qaqauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("suriya"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("qan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("ludian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumer-akadyan kuneyform"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("tamazi"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"m\u00fcasir standart \u0259r\u0259b"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"birl\u0259\u015fmi\u015f kanada yerli yaz\u0131s\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("qayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"man\u00e7u"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"fraktur lat\u0131n\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("qabaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manip\u00fcri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"gael lat\u0131n\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Sad\u0259l\u0259\u015fmi\u015f \u00c7in R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u018fn\u0259n\u0259vi \u00c7in R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Ki\u00e7ik Rum R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lusian"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("mun"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohavk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"idi\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("siryak"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Meksika ispancas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("osman"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"estrangela s\u00fcryanice"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u00e7juan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("kariyan"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalencin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u00e7in"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"q\u0259dimi permik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"S\u0259tird\u0259n s\u0259tr\u0259 ke\u00e7irm\u0259 \u00fcslubu"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Yapon Maliyy\u0259 R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u00e7am"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("qez"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("misir demotik"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("misir hiyeratik"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("misir hiyeroqlif"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"g\u00fcrc\u00fc xutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"sad\u0259l\u0259\u015fmi\u015f \u00e7in"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"q\u0259dimi macar"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosreyan"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0259n\u0259n\u0259vi \u00e7in"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Kxmer R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("kipr"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundanq"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Qurmuxi R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u00e7oxsayl\u0131 dill\u0259r"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("keddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u00d6l\u00e7\u00fc Sistemi"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("krik"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("qlaqolitik"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("qilbert"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u00e7iroki"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karib"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tamil R\u0259q\u0259ml\u0259ri"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"qara\u00e7ay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"inqu\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karel"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"R\u0259q\u0259ml\u0259r"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurux"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u015fambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_az::LocaleNames_az() {
}

$Class* LocaleNames_az::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_az, name, initialize, &_LocaleNames_az_ClassInfo_, allocate$LocaleNames_az);
	return class$;
}

$Class* LocaleNames_az::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun