#include <sun/util/resources/cldr/ext/LocaleNames_ro.h>

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

$MethodInfo _LocaleNames_ro_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ro::*)()>(&LocaleNames_ro::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ro_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ro",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ro_MethodInfo_
};

$Object* allocate$LocaleNames_ro($Class* clazz) {
	return $of($alloc(LocaleNames_ro));
}

void LocaleNames_ro::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ro::getContents() {
	$var($String, metaValue_ar, u"arab\u0103"_s);
	$var($String, metaValue_bn, u"bengalez\u0103"_s);
	$var($String, metaValue_bo, u"tibetan\u0103"_s);
	$var($String, metaValue_el, u"greac\u0103"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, u"ebraic\u0103"_s);
	$var($String, metaValue_hy, u"armean\u0103"_s);
	$var($String, metaValue_ja, u"japonez\u0103"_s);
	$var($String, metaValue_jv, u"javanez\u0103"_s);
	$var($String, metaValue_ka, u"georgian\u0103"_s);
	$var($String, metaValue_km, u"khmer\u0103"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, u"coreean\u0103"_s);
	$var($String, metaValue_la, u"latin\u0103"_s);
	$var($String, metaValue_lo, u"lao\u021bian\u0103"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, u"mongol\u0103"_s);
	$var($String, metaValue_my, u"birman\u0103"_s);
	$var($String, metaValue_ta, u"tamil\u0103"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, u"thailandez\u0103"_s);
	$var($String, metaValue_ban, u"balinez\u0103"_s);
	$var($String, metaValue_cop, u"copt\u0103"_s);
	$var($String, metaValue_got, u"gotic\u0103"_s);
	$var($String, metaValue_peo, u"persan\u0103 veche"_s);
	$var($String, metaValue_phn, u"fenician\u0103"_s);
	$var($String, metaValue_syr, u"siriac\u0103"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f6lsch"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simboluri"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialect Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"egiptean\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
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
			$of("Insula Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongan"_s)
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
			$of("Emiratele Arabe Unite"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flamand\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antigua \u0219i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("calendar etiopian"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("fus orar"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoa American\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Insulele \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"armean\u0103 oriental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnia \u0219i Her\u021begovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"cebuan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"german\u0103 \u00eenalt\u0103 medie"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
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
			$of(u"Saint-Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Insulele Caraibe Olandeze"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazilia"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Insula Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendar persan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("numerale ebraice"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Insulele Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Republica Centrafrican\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Elve\u021bia"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Insulele Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Camerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Columbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Insula Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Capul Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Insula Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cipru"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Cehia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germania"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"german\u0103 \u00eenalt\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("aceh"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("cifre devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danemarca"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braille"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"numerale armene\u0219ti cu minuscule"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Republica Dominican\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Cu jum\u0103tate de l\u0103\u021bime"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Ceuta \u0219i Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Sahara Occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palauan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("jargon chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Uniunea European\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamit\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("calendar gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Zona euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("cifre gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Insulele Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronezia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"variant\u0103 local\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Insulele Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Fran\u021ba"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"calendar na\u021bional indian"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"greac\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"votic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Regatul Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pidgin nigerian"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guyana Francez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"englez\u0103 medie"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guineea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Guineea Ecuatorial\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grecia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Georgia de Sud \u0219i Insulele Sandwich de Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guineea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingonian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"kurd\u0103 central\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"far\u0103 con\u021binut lingvistic"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("R.A.S. Hong Kong, China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Insula Heard \u0219i Insulele McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Croa\u021bia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"german\u0103 (Elve\u021bia)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("calendar islamic (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Insulele Canare"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"chinez\u0103 min nan"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"napolitan\u0103"_s)
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
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Insula Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("regulile europene de sortare"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Teritoriul Britanic din Oceanul Indian"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"nota\u021bie matematic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("cifre thailandeze"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"informatic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("cifre bengaleze"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("calendar islamic"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Iordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"francez\u0103 medieval\u0103 t\u00e2rzie p\u00e2n\u0103 la 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("nyasa tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("cifre kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"german\u0103 standard (Elve\u021bia)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Tip de ordonare fonetic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendar budist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"America Latin\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"K\u00e2rg\u00e2zstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodgia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comore"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint Kitts \u0219i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"mo\u0219tenit\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Coreea de Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Coreea de Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Insulele Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazahstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"chirilic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Liban"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sf\u00e2nta Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"chirilic\u0103 slavon\u0103 bisericeasc\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich\u02bcin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("germana de jos"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akkadian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Republica Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Muntenegru"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Sf\u00e2ntul Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Insulele Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleut\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Cifre Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia de Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Birmania)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("R.A.S. Macao, China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Insulele Mariane de Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("transliterare GEGN ONU"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"altaic\u0103 meridional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldive"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("calendar japonez"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambic"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Africa Subsaharian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("calendar ebraic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Ordine de sortare a dic\u021bionarului"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Noua Caledonie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"ortografie revizuit\u0103 unificat\u0103 cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Insula Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u021a\u0103rile de Jos"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegia"_s)
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
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Noua Zeeland\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"turc\u0103 crimeean\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"englez\u0103 veche"_s)
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
			$of(u"creol\u0103 francez\u0103 seselwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("calendar islamic civil"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ca\u0219ubian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinezia Francez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Noua Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipine"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint-Pierre \u0219i Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Insulele Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Teritoriile Palestiniene"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalia"_s)
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
			$of(u"numerale grece\u0219ti cu minuscule"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"englez\u0103 standard sco\u021bian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niuean\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Oceania Periferic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("alfabet fonetic uralic"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Lume"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("America de Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("America de Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Arabia Saudit\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"pohnpeian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Insulele Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Africa Occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"America Central\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suedia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Africa Oriental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"aramaic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Africa Septentrional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sf\u00e2nta Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"stil strict de \u00eentrerupere a liniei"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Africa Central\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Africa Meridional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbard \u0219i Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Americi"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovacia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"numerale tradi\u021bionale tamile"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudanul de Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 \u0219i Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"arab\u0103 najdi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint-Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"yapez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"sistemul american de unit\u0103\u021bi de m\u0103sur\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"America Septentrional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Insulele Turks \u0219i Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Ciad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Teritoriile Australe \u0219i Antarctice Franceze"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailanda"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caraibe"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"C\u0103uta\u021bi \u00een func\u021bie de consoana ini\u021bial\u0103 hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turcia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad \u0219i Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"asturian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"scriere necunoscut\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ucraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arom\u00e2n\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Asia Oriental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("swahili (R.D. Congo)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Asia Meridional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asia de Sud-Est"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"chinez\u0103 hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("sortare pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Europa Meridional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"singalez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Insulele \u00cendep\u0103rtate ale S.U.A."_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Na\u021biunile Unite"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Statele Unite ale Americii"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hawaiian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"belarus\u0103 academic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"sortare pentru chineza simplificat\u0103 - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prusac\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight din Atlasul Central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"ordine de sortare dup\u0103 trasare"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Statul Cet\u0103\u021bii Vaticanului"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"provensal\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Saint Vincent \u0219i Grenadinele"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Insulele Virgine Britanice"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Insulele Virgine Americane"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"nordic\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"armean\u0103 occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis \u0219i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"sortare tradi\u021bional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Regiunea Micronezia"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Sistemul numeric financiar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ordine de sortare anterioar\u0103, pentru compatibilitate"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("wolaita"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-accente"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezia"_s)
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
			$of(u"nescris\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("ordine de sortare standard"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("dialect resian"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Africa de Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"stil liber de \u00eentrerupere a liniei"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("numerale georgiene"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Regiune necunoscut\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"runic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("sistemul metric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendar ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho de nord"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("cifre telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"creol\u0103 (Louisiana)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"numerale financiare chineze\u0219ti simplificate"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("cifre indo-arabe extinse"_s)
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
			$of(u"cifre cu l\u0103\u021bimea \u00eentreag\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"hitit\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("hieroglife maya"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luri de nord"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newari clasic\u0103"_s)
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
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("numerale romane"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"aramaic\u0103 samaritean\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("dialect scouse"_s)
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
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"berber\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"iudeo-persan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numeric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Cifre native"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Cu l\u0103\u021bime \u00eentreag\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("nyamwezi"_s)
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
			$of(u"filipinez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugaritic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"iudeo-arab\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"spaniol\u0103 (Europa)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicilian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abhaz\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avestan\u0103"_s)
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
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amharic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialect Stolvizza/Solbica"_s)
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
			$of(u"silabic\u0103 japonez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"linear\u0103 A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avar\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"linear\u0103 B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"kurd\u0103 de sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azer\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("dialect Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0219kir\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Ordine de sortare a liniilor ideogramelor"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"belarus\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgar\u0103"_s)
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
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"breton\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosniac\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"cifre lao\u021biene"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"catalan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"cecen\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"ortografie revizuit\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"corsican\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ceh\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"slavon\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ciuva\u0219\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"galez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("numerale etiopiene"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portughez\u0103 (Europa)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"german\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Format moned\u0103 standard"_s)
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
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irlandez\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Cifre mongole"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("calendar chinezesc"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"numerale grece\u0219ti"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"stil normal de \u00eentrerupere a liniei"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"englez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"sortare pentru chineza tradi\u021bional\u0103 - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"spaniol\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"eston\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"basc\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"sorab\u0103 de sus"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"persan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"simplificat\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("cifre occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"tradi\u021bional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"arab\u0103 ciadian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"chinez\u0103 xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finlandez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fijian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"baluchi occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"cantonez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"feroez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("transliterare BGN SUA"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frizon\u0103 occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irlandez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaelic\u0103 sco\u021bian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galician\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"limb\u0103 necunoscut\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Calendarul etiopian amete alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
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
			$of(u"croat\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haitian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"maghiar\u0103"_s)
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
			$of("frc"_s),
			$of(u"francez\u0103 cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"alfabet fonetic interna\u021bional"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonezian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("cifre tibetane"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("yi din Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"francez\u0103 medie"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"francez\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"frizon\u0103 oriental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"frizon\u0103 nordic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"italian\u0103"_s)
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
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami de sud"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("sami lule"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("sami inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"chinez\u0103 wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("sami skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"congolez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazah\u0103"_s)
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
			$of(u"ca\u0219mir\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurd\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"cornic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"k\u00e2rg\u00e2z\u0103"_s)
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
			$of(u"luxemburghez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("cifre malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburghez\u0103"_s)
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
			$of(u"friulan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"sistemul imperial de unit\u0103\u021bi de m\u0103sur\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lituanian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"leton\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malga\u0219\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshallez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ordine de sortare Unicode implicit\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"macedonean\u0103"_s)
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
			$of(u"malaez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"sorab\u0103 de jos"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"c\u0103utare cu scop general"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvegian\u0103 bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele de nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"neerlandez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norvegian\u0103 nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norvegian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele de sud"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"politonic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occitan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
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
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"numerale armene\u0219ti"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("odia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oset\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punjabi"_s)
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
			$of("%%LIPAW"_s),
			$of(u"dialect lipovaz din resian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polonez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"neerlandez\u0103 medie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendar dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pa\u0219tun\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portughez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"irlandez\u0103 medie"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("ordine de sortare"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Format moned\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("tip calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"sistem cu 24 de ore (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistem cu 24 de ore (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("cifre birmaneze"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapotec\u0103"_s)
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
			$of("Ethi"_s),
			$of(u"etiopian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistem cu 12 ore (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistem cu 12 ore (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"roman\u0219\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"moned\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rom\u00e2n\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("dialect saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("cifre oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"numerale zecimale chineze\u0219ti"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rus\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("simboluri Bilss"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sanscrit\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"ortografie unificat\u0103 cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardinian\u0103"_s)
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
			$of("sami de nord"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"s\u00e2rbo-croat\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"singhalez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sumerian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovac\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"sloven\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somalez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("cifre indo-arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"s\u00e2rb\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Format moned\u0103 contabilitate"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialect Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"suedez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"numerale financiare chineze\u0219ti tradi\u021bionale"_s)
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
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Asia Central\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Asia Occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadjic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrin\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"buginez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmen\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("numerale japoneze"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"turc\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"comorez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"t\u0103tar\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahitian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialect San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Europa Oriental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Europa Septentrional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Europa Occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"uigur\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"italic\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"comun\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ucrainean\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("calendar copt"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"ortografie resian\u0103 standardizat\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"calmuc\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbec\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"ortografie german\u0103 de la 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("saxona de jos"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("calendarul Republicii Chineze"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnamez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"khotanez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("ciclu orar (12 sau 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("ortografie taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"siriac\u0103 clasic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"quich\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valon\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"g\u0103g\u0103uz\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"chinez\u0103 gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"lidian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"cuneiform\u0103 sumero-akkadian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight standard marocan\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"arab\u0103 standard modern\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"silabic\u0103 aborigen\u0103 canadian\u0103 unificat\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"manciurian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"latin\u0103 Fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"latin\u0103 gaelic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"numerale chineze\u0219ti simplificate"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"numerale chineze\u0219ti tradi\u021bionale"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("numerale romane cu minuscule"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"francez\u0103 modern\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"idi\u0219"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"mormon\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Numere tradi\u021bionale"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"siriac\u0103 occidental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"turc\u0103 otoman\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chinez\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"stil de \u00eentrerupere a liniei"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"sortare dup\u0103 cartea de telefon"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"monotonic\u0103"_s)
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
			$of("numerale financiare japoneze"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"siriac\u0103 oriental\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Ordine de sortare reformat\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"demotic\u0103 egiptean\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hieratic\u0103 egiptean\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("hieroglife egiptene"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"georgian\u0103 bisericeasc\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chinez\u0103 simplificat\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permiak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"maghiar\u0103 veche"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ortografie german\u0103 tradi\u021bional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"chinez\u0103 tradi\u021bional\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("cifre khmere"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"valencian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"cipriot\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("alfabet latin altaic unificat"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("cifre gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("mai multe limbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"sistem de unit\u0103\u021bi de m\u0103sur\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagolitic\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbertin\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("ortografie comuna cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("cifre tamile"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karaceai-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingu\u0219\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karelian\u0103"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("numere"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("shambala"_s)
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

LocaleNames_ro::LocaleNames_ro() {
}

$Class* LocaleNames_ro::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ro, name, initialize, &_LocaleNames_ro_ClassInfo_, allocate$LocaleNames_ro);
	return class$;
}

$Class* LocaleNames_ro::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun