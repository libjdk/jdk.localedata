#include <sun/util/resources/cldr/ext/LocaleNames_hu.h>

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

$MethodInfo _LocaleNames_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_hu::*)()>(&LocaleNames_hu::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_hu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_hu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_hu_MethodInfo_
};

$Object* allocate$LocaleNames_hu($Class* clazz) {
	return $of($alloc(LocaleNames_hu));
}

void LocaleNames_hu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_hu::getContents() {
	$var($String, metaValue_JP, u"Jap\u00e1n"_s);
	$var($String, metaValue_zbl, u"Bliss jelk\u00e9prendszer"_s);
	$var($String, metaValue_Hant, u"Hagyom\u00e1nyos"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f6lsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirand\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"Szimb\u00f3lum"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atszam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"m\u00e1rv\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Gniva/Njiva t\u00e1jsz\u00f3l\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("csakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u00f3egyiptomi"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"radzsaszt\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"tesz\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"teren\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongai"_s)
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
			$of(u"Egyes\u00fclt Arab Em\u00edrs\u00e9gek"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamand"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganiszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antigua \u00e9s Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Eti\u00f3p napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Id\u0151z\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u00d6rm\u00e9nyorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktisz"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argent\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Feliratos parthian"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikai Szamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Ausztria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ausztr\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("amerikai angol"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c5land-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajdzs\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Keleti \u00f6rm\u00e9ny"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosznia-Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("szebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Banglades"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kum\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"k\u00f6z\u00e9p fels\u0151 n\u00e9met"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of(u"\u00d3szogd"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulg\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrein"_s)
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
			$of(u"erzj\u00e1ny"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Holland Karib-t\u00e9rs\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Braz\u00edlia"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("szoga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bhut\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarusz"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"L\u00e1that\u00f3 besz\u00e9d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Perzsa napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"H\u00e9ber sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"K\u00f3kusz (Keeling)-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"m\u00e1zander\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kong\u00f3 \u2013 Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"K\u00f6z\u00e9p-afrikai K\u00f6zt\u00e1rsas\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kong\u00f3 \u2013 Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Sv\u00e1jc"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Elef\u00e1ntcsontpart"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"K\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Z\u00f6ld-foki K\u00f6zt\u00e1rsas\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Kar\u00e1csony-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Ciprus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Csehorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekadzsuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of("Szogd"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"N\u00e9metorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u00f3fels\u0151 n\u00e9met"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"achin\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"D\u00e9van\u00e1gari sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Dzsibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("akoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Vak\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"Br\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u00d6rm\u00e9ny kisbet\u0171s sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikai K\u00f6zt\u00e1rsas\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"g\u00f3t"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigr\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alg\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangaszinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"F\u00e9l sz\u00e9less\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Ceuta \u00e9s Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("csibcsa"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampangan"_s)
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
			$of(u"\u00c9sztorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egyiptom"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Nyugat-Szahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"csagat\u00e1j"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palaui"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"csuk\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("csinuk zsargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"csipev\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"csokt\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cseroki"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Spanyolorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Eti\u00f3pia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Eur\u00f3pai Uni\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gergely-napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Eur\u00f3z\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("csejen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gudzsar\u00e1ti sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finnorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidzsi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falkland-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikron\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"F\u00f6ldrajzi helyvari\u00e1ns"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Fer\u00f6er szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Franciaorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelaui"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"greb\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indiai nemzeti napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u00f3g\u00f6r\u00f6g"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"votj\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Egyes\u00fclt Kir\u00e1lys\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nig\u00e9riai pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Gr\u00fazia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Francia Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Gh\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Gibralt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gr\u00f6nland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"k\u00f6z\u00e9p angol"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Egyenl\u00edt\u0151i-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"G\u00f6r\u00f6gorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"D\u00e9li-Georgia \u00e9s D\u00e9li-Sandwich-szigetek"_s)
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
			$of("Bissau-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u00daj tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"k\u00f6z\u00e9p-\u00e1zsiai kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"nincs nyelv\u00e9szeti tartalom"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"osztr\u00e1k n\u00e9met"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong KKT"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard-sziget \u00e9s McDonald-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Horv\u00e1torsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("agem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"sv\u00e1jci n\u00e9met"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Iszl\u00e1m Umm al-Qura napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Magyarorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamasek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kan\u00e1ri-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"min nan k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u00f3perzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u00cdrorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"n\u00e1polyi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Ndyuka dialektus"_s)
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
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Man-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Eur\u00f3pai rendez\u00e9si szab\u00e1lyok"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Brit Indiai-\u00f3ce\u00e1ni Ter\u00fclet"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Izland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Olaszorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Matematikai jelrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Thai sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Sz\u00e1m\u00edt\u00f3g\u00e9p"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Beng\u00e1li sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Iszl\u00e1m napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Beng\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jord\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"K\u00e9s\u0151i k\u00f6z\u00e9p francia 1606-ig"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("guszii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("nyugati nyasza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannada sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kajah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Sziddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"sv\u00e1jci feln\u00e9met"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetikus rendez\u00e9si sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Buddhista napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgiziszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comore-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint Kitts \u00e9s Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Sz\u00e1rmaztatott"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("kanadai francia"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u00c9szak-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"D\u00e9l-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard fonetikus"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"sv\u00e1jci francia"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kajm\u00e1n-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazahszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cirill"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosz"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"f\u0151niciai"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u00d3egyh\u00e1zi szl\u00e1v cirill"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("gvicsin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("Luna1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"als\u00f3n\u00e9met"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sr\u00ed Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akk\u00e1d"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kopt"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"K\u00f6nyv pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litv\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Lettorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00edbia"_s)
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
			$of("%%LAUKIKA"_s),
			$of("Laukika"_s)
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
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marokk\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Montenegr\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madagaszk\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vai sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u00c9szak-Maced\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mianmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f3lia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Maka\u00f3 KKT"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u00c9szaki Mariana-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u00e1lta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"d\u00e9l-altaji"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mald\u00edv-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mexik\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Jap\u00e1n napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajzia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Felriatos pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Szubszaharai Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"H\u00e9ber napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Sz\u00f3t\u00e1ri rendez\u00e9si sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u00daj-Kaled\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Wade-Giles \u00e1t\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Egyes\u00edtett \u00e1tdolgozott helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"tarok\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Psalter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Hollandia"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norv\u00e9gia"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nep\u00e1l"_s)
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
			$of(u"F\u0151niciai"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"csimsi\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u00daj-Z\u00e9land"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("roma"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitikus"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"kr\u00edmi tat\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u00f3angol"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of("Petr1708"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("szeszelva kreol francia"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"\u00d3perzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Iszl\u00e1m civil napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kasub"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("brit angol"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Francia Polin\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"P\u00e1pua \u00daj-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"F\u00fcl\u00f6p-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakiszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Lengyelorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint-Pierre \u00e9s Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palesztin Auton\u00f3mia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Balin\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Portug\u00e1lia"_s)
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
			$of(u"G\u00f6r\u00f6g kisbet\u0171s sz\u00e1mok"_s)
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
			$of(u"H\u00e9ber"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Sk\u00f3t szabv\u00e1nyos angol"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niuei"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"K\u00fcls\u0151-\u00d3ce\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Vil\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u00c9szak-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"D\u00e9l-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Redzsang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u00d3ce\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("Sursilv"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Szerbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Oroszorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manicheus"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugari"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Sza\u00fad-Ar\u00e1bia"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandai"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salamon-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"szav\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Nyugat-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelle-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Szud\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"K\u00f6z\u00e9p-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Sv\u00e9dorsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Kelet-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"ar\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u00c9szak-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Szingap\u00far"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Szent Ilona"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Sz\u0171k st\u00edlus\u00fa sort\u00f6r\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"K\u00f6z\u00e9p-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Szlov\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Afrika d\u00e9li r\u00e9sze"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbard \u00e9s Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Szlov\u00e1kia"_s)
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
			$of(u"Szeneg\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Szom\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapucse"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Hagyom\u00e1nyos tamil sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"D\u00e9l-Szud\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 \u00e9s Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("nedzsdi arab"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sz\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ja\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Szv\u00e1zif\u00f6ld"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("japi"_s)
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
			$of(u"Amerikai m\u00e9rt\u00e9kegys\u00e9grendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amerika \u00e9szaki r\u00e9sze"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- \u00e9s Caicos-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("jangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Cs\u00e1d"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francia D\u00e9li Ter\u00fcletek"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Thaif\u00f6ld"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"T\u00e1dzsikiszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Karib-t\u00e9rs\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Kelet-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("jemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Keres\u00e9s hangul kezd\u0151 m\u00e1ssalhangz\u00f3 szerint"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u00fcrkmeniszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tun\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u00f6r\u00f6korsz\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad \u00e9s Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajvan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"aszt\u00far"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("ngumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Ismeretlen \u00edr\u00e1srendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arom\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Kelet-\u00c1zsia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvai"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"kong\u00f3i szuah\u00e9li"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"D\u00e9l-\u00c1zsia"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"D\u00e9lkelet-\u00c1zsia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"hakka k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"D\u00e9l-Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Szingal\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Az USA lakatlan k\u00fclbirtokai"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Egyes\u00fclt Nemzetek Szervezete"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Egyes\u00fclt \u00c1llamok"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"Akad\u00e9miai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Egyszer\u0171s\u00edtett k\u00ednai sorrend - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("porosz"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u00dczbegiszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"k\u00f6z\u00e9p-atlaszi tamazigt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Von\u00e1ssorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatik\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u00f3prov\u00e1nszi"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Saint Vincent \u00e9s a Grenadine-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Brit Virgin-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikai Virgin-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vietn\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogaj"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwo"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u00f3skandin\u00e1v"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Ausztr\u00e1l\u00e1zsia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Nyugati \u00f6rm\u00e9ny"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis \u00e9s Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikron\u00e9ziai r\u00e9gi\u00f3"_s)
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
			$of(u"P\u00e9nz\u00fcgyi sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"Hepburn romaniz\u00e1ci\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"El\u0151z\u0151 rendez\u00e9si sorrend a kompatibilit\u00e1s \u00e9rdek\u00e9ben"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Szamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"vas\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Pszeudo-nyelvj\u00e1r\u00e1sok"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"vara\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Pszeudo-k\u00e9tir\u00e1ny\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"aw\u00e1di"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polin\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Koszov\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Gudzsar\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u00cdratlan nyelvek k\u00f3dja"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u2019k\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Norm\u00e1l rendez\u00e9si sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Rezij\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("Sutsilv"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Jel\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"D\u00e9l-afrikai K\u00f6zt\u00e1rsas\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"T\u00e1g st\u00edlus\u00fa sort\u00f6r\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Devanag\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Gr\u00faz sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"pinjin \u00e1t\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Ismeretlen k\u00f6rzet"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runikus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"M\u00e9terrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u00e9szaki szeszot\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Telugu sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("louisianai kreol"_s)
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
			$of(u"Egyszer\u0171s\u00edtett k\u00ednai p\u00e9nz\u00fcgyi sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("ilokano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Kib\u0151v\u00edtett arab-indiai sz\u00e1mjegyek"_s)
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
			$of(u"Teljes sz\u00e9less\u00e9g\u0171 sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Maja hieroglif\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u00e9szaki luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Emodzsi rendez\u00e9si sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("Kopt"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("klasszikus newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("szandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"R\u00f3mai sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("szaha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"szamarit\u00e1nus ar\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("szamburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"szant\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Berber"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"zsid\u00f3-perzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Sz\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Nat\u00edv sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Aluku dialektus"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("Biszkajan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Teljes sz\u00e9less\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("szangu"_s)
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
			$of(u"nyamv\u00e9zi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"nyor\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipp\u00edn\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delav\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("balucsi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("szlevi"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balin\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugariti"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("lujia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basza"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"zsid\u00f3-arab"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"eur\u00f3pai spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"sk\u00f3t"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"szic\u00edliai"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abh\u00e1z"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("Nasztalik"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"aveszt\u00e1n"_s)
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
			$of("gomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhara"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Stolvizza/Solbica t\u00e1jsz\u00f3l\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arab"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Katakana vagy hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assz\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"Line\u00e1ris A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"Line\u00e1ris B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"d\u00e9l-kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajdzs\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Oseacco/Osojane t\u00e1jsz\u00f3l\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"bask\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Sz\u00f3t\u0151von\u00e1s rendez\u00e9si sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belarusz"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bolg\u00e1r"_s)
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
			$of("bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibeti"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosny\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("szeneka"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Burmai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Lao sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("szena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"N\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"sz\u00f6lkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katal\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("kojra-szenni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("csecsen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"csamor\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\u00c1tdolgozott helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korzikai"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"kr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("cseh"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"egyh\u00e1zi szl\u00e1v"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("csuvas"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Eti\u00f3p sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Ji"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"d\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"eur\u00f3pai portug\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"n\u00e9met"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Norm\u00e1l p\u00e9nznemform\u00e1tum"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("bedzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"Bugin\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u00f3\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongol sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("latin-amerikai spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"K\u00ednai napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"G\u00f6r\u00f6g sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Norm\u00e1l st\u00edlus\u00fa sort\u00f6r\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldvai"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"g\u00f6r\u00f6g"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("angol"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"eszperant\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Hagyom\u00e1nyos k\u00ednai sorrend - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u00e9szt"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Han bopomof\u00f3val"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baszk"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"Szamarit\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"fels\u0151-szorb"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("Ulster"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("san"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Egyszer\u0171s\u00edtett"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Nyugati sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"cs\u00e1di arab"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"xiang k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finn"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidzsi"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("nyugati beludzs"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantoni"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fer\u00f6eri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francia"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"szidam\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"nyugati fr\u00edz"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"sk\u00f3ciai kelta"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallego"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bodzspuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("ismeretlen nyelv"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Eti\u00f3p amete alem napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gudzsar\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("man-szigeti"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausza"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"h\u00e9ber"_s)
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
			$of(u"horv\u00e1t"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haiti kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("magyar"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u00f6rm\u00e9ny"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("cajun francia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingva"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indon\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibeti sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igb\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"szecsu\u00e1n ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"k\u00f6z\u00e9p francia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("Rumgr"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u00f3francia"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"id\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"keleti fr\u00edz"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u00e9szaki fr\u00edz"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("izlandi"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("olasz"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("Hongorszk"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"jap\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Malaj\u00e1lam"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Szarati"_s)
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
			$of(u"d\u00e9li sz\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"j\u00e1vai"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Shaw \u00e1b\u00e9c\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("Bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurai"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"lulei sz\u00e1mi"_s)
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
			$of(u"inari sz\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"gr\u00faz"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makaszar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"wu k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"kolta sz\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"manding\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"G\u00f3t"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuju"_s)
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
			$of("kazah"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"gr\u00f6nlandi"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreai"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kasm\u00edri"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"Aveszt\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("korni"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("szoninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburgi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malaj\u00e1lam sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgi"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibeti"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friuli"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Angolsz\u00e1sz m\u00e9rt\u00e9kegys\u00e9grendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litv\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lett"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgas"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshalli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Alap\u00e9rtelmezett Unicode rendez\u00e9si sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maced\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malaj\u00e1lam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"mar\u00e1thi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"mal\u00e1j"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"m\u00e1ltai"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmai"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Szaurastra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u00d6rm\u00e9ny"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"moks\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"als\u00f3-szorb"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Birodalmi ar\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("naurui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u00c1ltal\u00e1nos c\u00e9l\u00fa keres\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norv\u00e9g (bokm\u00e5l)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u00e9szaki ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nep\u00e1li"_s)
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
			$of("holland"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norv\u00e9g (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norv\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"d\u00e9li ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navah\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("kara-kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyandzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kacsin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabije"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politonikus"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okszit\u00e1n"_s)
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
			$of("ojibva"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u00d6rm\u00e9ny sz\u00e1mok"_s)
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
			$of(u"osz\u00e9t"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC romaniz\u00e1ci\u00f3, 1997-es kiad\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardi"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("mauritiusi kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"szranai tong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pandzs\u00e1bi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("szerer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Rezij\u00e1n lipovaz t\u00e1jsz\u00f3l\u00e1s"_s)
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
			$of("lengyel"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"k\u00f6z\u00e9p holland"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Dangi napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("Vallader"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pastu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portug\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"k\u00f6z\u00e9p \u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Rendez\u00e9si sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"braz\u00edliai portug\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"makua-met\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"P\u00e9nznemform\u00e1tum"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("Jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("Surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 \u00f3r\u00e1s rendszer (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 \u00f3r\u00e1s rendszer (0\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"szah\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Mianmari sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("kecsua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapot\u00e9k"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of("Vaidika"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Eti\u00f3p"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("Jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 \u00f3r\u00e1s rendszer (0\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 \u00f3r\u00e1s rendszer (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"r\u00e9torom\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"P\u00e9nznem"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rom\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Orija sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"K\u00ednai tizedes sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("orosz"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("koszi"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarvanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("szukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ausztr\u00e1l angol"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("szanszkrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Egyes\u00edtett helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"szard\u00edniai"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("szuszu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("szindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u00e9szaki sz\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"szang\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"szerbhorv\u00e1t"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"szingal\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sum\u00e9r"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"szlov\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"szlov\u00e9n"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("szamoai"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("sona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"szom\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Arab-indiai sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alb\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("szerb"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("sziszuati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"K\u00f6nyvel\u00e9si p\u00e9nznemform\u00e1tum"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"d\u00e9li szeszot\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"J\u00e1vai"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"szundan\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone dialektus"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"sv\u00e9d"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"szuah\u00e9li"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Hagyom\u00e1nyos k\u00ednai p\u00e9nz\u00fcgyi sz\u00e1mok"_s)
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
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u00c1zsia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"burj\u00e1t"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"K\u00f6z\u00e9p-\u00c1zsia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Nyugat-\u00c1zsia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadzsik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugin\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("kanadai angol"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"t\u00fcrkm\u00e9n"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"szecsu\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongai"_s)
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
			$of(u"Jap\u00e1n sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"t\u00f6r\u00f6k"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("conga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("comorei"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("Csakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tat\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("diula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"San Giorgo/Bila t\u00e1jsz\u00f3l\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Kelet-Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u00c9szak-Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Nyugat-Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgur"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"R\u00e9gi olasz"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Koreai"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Meghat\u00e1rozatlan"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukr\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Kopt napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Szabv\u00e1nyos\u00edtott rezij\u00e1n helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalm\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u00fczb\u00e9g"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kaszi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996-os n\u00e9met helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"als\u00f3sz\u00e1sz"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"Sylheti nag\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"K\u00ednai k\u00f6zt\u00e1rsas\u00e1gi napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietn\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotan\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"kojra-cs\u00edni"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u00d3raform\u00e1tum (12 \u2013 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskijevica helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasszikus sz\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"Oszm\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("kicse"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"sz\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"G\u00f6r\u00f6g"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"gan k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"L\u00eddiai"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u00c9k\u00edr\u00e1sos sum\u00e9ro-akk\u00e1d"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"marokk\u00f3i tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"modern szabv\u00e1nyos arab"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Egyes\u00edtett kanadai \u0151slakos jelek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("Fonxsamp"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("mandzsu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Fraktur latin"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Gael latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Egyszer\u0171s\u00edtett k\u00ednai sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Hagyom\u00e1nyos k\u00ednai sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"R\u00f3mai kisbet\u0171s sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka dialektus"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"L\u00edciai"_s)
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
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"kak\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Korai modern francia"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jiddis"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("moszi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"Sz\u00edriai"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Hagyom\u00e1nyos sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"spanyol (mexik\u00f3i)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Nyugat-sz\u00edriai"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ottom\u00e1n t\u00f6r\u00f6k"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Estrangelo sz\u00edriai"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zsuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Kari"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalendzsin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u00d3permikus"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Sort\u00f6r\u00e9s st\u00edlusa"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Telefonk\u00f6nyv sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monoton"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Gr\u00faz"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Jap\u00e1n p\u00e9nz\u00fcgyi sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"Cs\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Kelet-sz\u00edriai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u00c1talak\u00edtott rendez\u00e9si elv"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egyiptomi demotikus"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Egyiptomi hieratikus"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("Itihasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Egyiptomi hieroglif\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Gr\u00faz kucsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"egyszer\u0171s\u00edtett k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komi-permj\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u00d3magyar"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Hagyom\u00e1nyos n\u00e9met helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrei"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"hagyom\u00e1nyos k\u00ednai"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"Szundan\u00e9z"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Khmer sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilok\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valencia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Ciprusi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Egyes\u00edtett t\u00fcrkic latin \u00e1b\u00e9c\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Gurmuki sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"t\u00f6bbsz\u00f6r\u00f6s nyelvek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("Puter"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"M\u00e9rt\u00e9kegys\u00e9grendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kr\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitikus"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("ikiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Meghat\u00e1rozatlan helyes\u00edr\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("Cseroki"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("kajuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tamil sz\u00e1mjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karacs\u00e1j-balk\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingus"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelai"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Sz\u00e1mok"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("sambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_hu::LocaleNames_hu() {
}

$Class* LocaleNames_hu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hu, name, initialize, &_LocaleNames_hu_ClassInfo_, allocate$LocaleNames_hu);
	return class$;
}

$Class* LocaleNames_hu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun