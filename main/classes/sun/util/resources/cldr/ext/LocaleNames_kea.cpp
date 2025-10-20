#include <sun/util/resources/cldr/ext/LocaleNames_kea.h>

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

$MethodInfo _LocaleNames_kea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_kea::*)()>(&LocaleNames_kea::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_kea_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_kea",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_kea_MethodInfo_
};

$Object* allocate$LocaleNames_kea($Class* clazz) {
	return $of($alloc(LocaleNames_kea));
}

void LocaleNames_kea::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kea::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, "bengali"_s);
	$var($String, metaValue_bo, "tibetanu"_s);
	$var($String, metaValue_el, "gregu"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, "ebraiku"_s);
	$var($String, metaValue_hy, u"arm\u00e9niu"_s);
	$var($String, metaValue_ja, "japones"_s);
	$var($String, metaValue_ka, "jorjianu"_s);
	$var($String, metaValue_km, "kmer"_s);
	$var($String, metaValue_kn, "kanares"_s);
	$var($String, metaValue_ko, "korianu"_s);
	$var($String, metaValue_lo, "lausianu"_s);
	$var($String, metaValue_ml, "malaialam"_s);
	$var($String, metaValue_my, "birmanes"_s);
	$var($String, metaValue_si, "singales"_s);
	$var($String, metaValue_ta, "tamil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "tailandes"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("kolonhanu"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"s\u00edmbulus"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipinu"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("balines"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("xakma"_s)
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
			$of("es_ES"_s),
			$of("spanhol europeu"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abk\u00e1ziu"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ilha di Asenson"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emiradus \u00c1rabi Unidu"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamengu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afeganist\u00e3u"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaner"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Kalend\u00e1riu eti\u00f3piku"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angila"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"am\u00e1riku"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ar\u00e1biku"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Ant\u00e1rtika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arjentina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u00e1rabi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"silab\u00e1riu japunes"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Merkanu"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asames"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00c1ustria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austr\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("ingles merkanu"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ilhas \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaijanu"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u00f3snia i Erzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baxkir"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadus"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("sebuanu"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladexi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u00e9ljika"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielorusu"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Fasu"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulg\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"b\u00falgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Barain"_s)
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
			$of("San Bartolomeu"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudas"_s)
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
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karaibas Olandezas"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bret\u00e3u"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Baamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniu"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Ilha Buv\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belizi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Kalend\u00e1riu persa"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kanad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katal\u00e3u"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Ilhas Kokus (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koiraboro seni"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongu - Kinxasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("txetxenu"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Republika Sentru-Afrikanu"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongu - Brazavili"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suisa"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Kosta di Marfin"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Ilhas Kuk"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Xili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamarons"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kol\u00f3mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"k\u00f3rsiku"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Ilha Kliperton"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("txeku"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"slavu kl\u00e9riku"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kabu Verdi"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("txuvaxi"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurasau"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Ilha di Natal"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Xipri"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("gales"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tx\u00e9kia"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("dinamarkes"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("purtuges europeu"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alimanha"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("alemon"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("xiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diegu Garsia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Formatu di mueda padron"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarka"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braille"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Rep\u00fablika Dominikana"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("spanhol latinu-merkanu"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Arj\u00e9lia"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzonka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Kalend\u00e1riu xines"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Seuta i Melilha"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuador"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"St\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Stilu padron di kebra di linha"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Ejitu"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sara Osidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"rumenu mold\u00e1viku"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("ingles"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("sperantu"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("xeroki"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Iritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanha"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spanhol"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Eti\u00f3pia"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("stonianu"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Union Europeia"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basku"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Kalend\u00e1riu Gregorianu"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozona"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"s\u00f3rbiu altu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("simplifikadu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Nunbru osidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finl\u00e1ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finlandes"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidji"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fijianu"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikron\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantunes"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Ilhas Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("faroes"_s)
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
			$of("fr"_s),
			$of("franses"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fr\u00edziu osidental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Kalend\u00e1riu nasional indianu"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandes"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Reinu Unidu"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Ji\u00f3rjia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Giana Franseza"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernzi"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Jibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gronel\u00e1ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galegu"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"G\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalupi"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Gine Ekuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"l\u00edngua diskonxedu"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Kalend\u00e1riu et\u00edopi ameti alem"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ilhas Je\u00f3rjia di Sul i Sanduixi di Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatimala"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"Kalend\u00e1riu isl\u00e1miku (astron\u00f3miku)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manks"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gine-Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Giana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("auza"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdu sentral"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sen kontiudu lingu\u00edstiku"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("indi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alemon austr\u00edaku"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong, Rejion Administrativu Spesial di Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ilhas Heard i McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Onduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kro\u00e1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroata"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("alemon suisu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Kalend\u00e1riu isl\u00e1miku (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("aitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungria"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u00fangaru"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kan\u00e1rias"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indon\u00e9ziu"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("ibo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("nuosu"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ilha di Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Ilhas Brit\u00e1nikas di \u00cdndiku"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e3u"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Isl\u00e1ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandes"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italianu"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"notason matim\u00e1tiku"_s)
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
			$of("JE"_s),
			$of("Jersi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Kalend\u00e1riu isl\u00e1miku"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jord\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japon"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanes"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("alemon altu suisu"_s)
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
			$of("type.ca.buddhist"_s),
			$of(u"Kalend\u00e1riu budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"K\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Merka Latinu"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuiu"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazak"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("groenlandes"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Kamoris"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("San Kristovan i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("franses kanadianu"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Koreia di Norti"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Koreia di Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kaxmira"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("franses suisu"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kueiti"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"k\u00f3rniku"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Ilhas Kaimon"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiz"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"sir\u00edliku"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laus"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"L\u00edbanu"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburges"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa L\u00fasia"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("alemon baxu"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lixenstain"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friulanu"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Sistema di midida brit\u00e1niku"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lezotu"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litu\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituanu"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgu"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Let\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"let\u00e3u"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("taana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokus"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f3naku"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mold\u00e1via"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegru"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("San Martinhu (Fransa)"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaxi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Ilhas Marxal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u00d3rdi padron di Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Masid\u00f3nia di Norti"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"mased\u00f3niu"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mianmar (Birm\u00e1nia)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f3lia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makau, Rejion Administrativu Spesial di Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ilhas Marianas di Norti"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marati"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Monserat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"mal\u00e1iu"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltes"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u00edsia"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malaui"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u00e9xiku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Kalend\u00e1riu japones"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Mal\u00e1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Musambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"s\u00f3rbiu baxu"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Piskiza di uzu jeral"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u00c1frika Subisariana"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norueges bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Kalend\u00e1riu ebraiku"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Kalid\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nijer"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepales"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ilhas Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nij\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nikar\u00e1gua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Olanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("olandes"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norueges nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noruega"_s)
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
			$of("rof"_s),
			$of("rombu"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nova Zil\u00e1ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabila"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"od\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"os\u00e9tiku"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("pandjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Kalend\u00e1riu isl\u00e1miku (sivil)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ingles brit\u00e1niku"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polin\u00e9zia Franseza"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Nova Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pul\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("pulaku"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("San Piere i Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Ilhas Pitkairn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Kalend\u00e1riu dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portu Riku"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Tirit\u00f3riu palistinianu"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paxto"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Purtugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("purtuges"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Ordenason"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("purtuges brazileru"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Formatu di mueda"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kalend\u00e1riu"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Sistema di 24 ora (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Sistema di 24 ora (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Ilhas di Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("kexua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mundu"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"eti\u00f3piku"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u00c1frika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Merka di Norti"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Runion"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Sistema di 12 ora (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Merka di Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Sistema di 12 ora (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romanxi"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Mueda"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rum\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumenu"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"S\u00e9rvia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u00fasia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rusu"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kiniaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("ingles australianu"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Ar\u00e1bia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"s\u00e1nskritu"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Ilhas Salum\u00e3u"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00c1frika Osidental"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seixelis"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudon"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Merka Sentral"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Su\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00c1frika Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Norti di \u00c1frika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Ilena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Stilu r\u00edjidu di kebra di linha"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u00c1frika Sentral"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slov\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Sul di \u00c1frika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard i Jan Maien"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Merkas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slov\u00e1kia"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovaku"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sera Lioa"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slov\u00e9niu"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marinu"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Sum\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("araukanu"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanes"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinami"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"s\u00e9rviu"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudon di Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Formatu di mueda kontabil\u00edstiku"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"San Tume i Pr\u00ednsipi"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanes"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueku"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"sua\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("San Martinhu (Olanda)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Kunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Sistema di midida merkanu"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Norti di Merka"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ilhas Turkas i Kaikus"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u00c1zia Sentral"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Txadi"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u00c1zia Osidental"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Terras Franses di Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togu"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjiki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tail\u00e1ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("ingles kanadianu"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karaibas"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmenu"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Lesti"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkumenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tun\u00edzia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonganes"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkia"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turku"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad i Tobagu"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiuan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturianu"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kuazio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("skrita diskonxedu"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ukr\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u00c1zia Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa di Norti"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"sua\u00edli kongoles"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Sul di \u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa Osidental"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sudesti Azi\u00e1tiku"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("komun"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa di Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukranianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ilhas Minoris Distantis de Stadus Unidus"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Nasons Unidas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Kalend\u00e1riu kopta"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Stadus Unidos di Merka"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("avaianu"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prusianu"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeki"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamaziti di Atlas Sentral"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanu"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Bisenti i Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Vinizuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kalend\u00e1riu di Rep\u00fablika di Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Ilhas Virjens Brit\u00e1nikas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ilhas Virjens Merkanas"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koira txiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Siklu or\u00e1riu (12 o 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("kitxe"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austral\u00e1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Ualis i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Rejion di Mikron\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u00f1omba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("uolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("tamazait marokinu padron"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u00e1rabi mudernu"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-sotakis"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-bidiresional"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polin\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinu"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("koza"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kozovu"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"n\u00e3u skritu"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"I\u00e9men"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u00d3rdi padron"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("spanhol mexikanu"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Maiote"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u00c1frika di Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Stilu fleks\u00edvel di kebra di linha"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("xines"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("iragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Z\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Stilu di kebra di linha"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimb\u00e1bui"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Rejion Diskonxedu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Sistema m\u00e9triku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Kalend\u00e1riu ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("matxame"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("xines simplifikadu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permiak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("xines tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Sistema di midida"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Nunbru"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuki"_s)
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

LocaleNames_kea::LocaleNames_kea() {
}

$Class* LocaleNames_kea::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_kea, name, initialize, &_LocaleNames_kea_ClassInfo_, allocate$LocaleNames_kea);
	return class$;
}

$Class* LocaleNames_kea::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun