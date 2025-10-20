#include <sun/util/resources/cldr/ext/LocaleNames_cs.h>

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

$MethodInfo _LocaleNames_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_cs::*)()>(&LocaleNames_cs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_cs",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_cs_MethodInfo_
};

$Object* allocate$LocaleNames_cs($Class* clazz) {
	return $of($alloc(LocaleNames_cs));
}

void LocaleNames_cs::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_cs::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ccp, u"\u010dakma"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_nqo, u"n\u2019ko"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kol\u00edn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ogamsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirand\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symboly"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"m\u00e1rv\u00e1r\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"emilij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of(u"mentavaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emod\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"mingrel\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"egypt\u0161tina star\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"r\u00e1d\u017east\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapanuj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotong\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetum\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Spojen\u00e9 arabsk\u00e9 emir\u00e1ty"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"vl\u00e1m\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afgh\u00e1nist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua a Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Etiopsk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"gila\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\u010casov\u00e9 p\u00e1smo"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e1nie"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00e9nie"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"parthsk\u00e9 kl\u00ednov\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Americk\u00e1 Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Rakousko"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austr\u00e1lie"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"angli\u010dtina (USA)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c5landy"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u00c1zerb\u00e1jd\u017e\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna a Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"cebu\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglad\u00e9\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumy\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgie"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"hornon\u011bm\u010dina (st\u0159edov\u011bk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulharsko"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrajn"_s)
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
			$of(u"Svat\u00fd Bartolom\u011bj"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"kutenaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"erzjan\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvie"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karibsk\u00e9 Nizozemsko"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Braz\u00edlie"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamy"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"sog\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bh\u00fat\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Bouvet\u016fv ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"B\u011blorusko"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"viditeln\u00e1 \u0159e\u010d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Persk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Hebrejsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosov\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"m\u00e1zandar\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo \u2013 Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"St\u0159edoafrick\u00e1 republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kongo \u2013 Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160v\u00fdcarsko"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Pob\u0159e\u017e\u00ed slonoviny"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u010c\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbie"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Clipperton\u016fv ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostarika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kapverdy"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"V\u00e1no\u010dn\u00ed ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kypr"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"Balijsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010cesko"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("pau cin hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"vl\u00e1m\u0161tina (z\u00e1padn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"N\u011bmecko"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"hornon\u011bm\u010dina (star\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"aceh\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego Garc\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"konk\u00e1n\u0161tina (Goa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u010c\u00edslice p\u00edsma d\u00e9van\u00e1gar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u017eibutsko"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u00e1nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"akol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"g\u00f3nd\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Braillovo p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"br\u00e1hm\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Mal\u00e9 arm\u00e9nsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominik\u00e1nsk\u00e1 republika"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"g\u00f3t\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"n\u011bm\u010dina (mohansko-fransk\u00e9 dialekty)"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"mejtej majek (manipursk\u00e9)"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"zunij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigrej\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"takr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u017e\u00edrsko"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinan\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Polovi\u010dn\u00ed \u0161\u00ed\u0159ka"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"pahlav\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta a Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u010dib\u010da"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("papangau"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekv\u00e1dor"_s)
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
			$of("Estonsko"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"tiv\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Z\u00e1padn\u00ed Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u010dagataj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palau\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u010duk\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u010dinuk pid\u017ein"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u010dipevaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u010dokt\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u010derok\u00e9z\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0160pan\u011blsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Evropsk\u00e1 unie"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamit\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregori\u00e1nsk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"euroz\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u010dejen\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gud\u017ear\u00e1tsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"harappsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adygej\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"arab\u0161tina (tunisk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finsko"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fid\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Falklandsk\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikron\u00e9sie"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Varianta n\u00e1rodn\u00edho prost\u0159ed\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faersk\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"tamilsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francie"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"picard\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelau\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indick\u00fd n\u00e1rodn\u00ed kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"roma\u0148ol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"staro\u0159e\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"cachur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"vot\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Spojen\u00e9 kr\u00e1lovstv\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigerijsk\u00fd pid\u017ein"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzie"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Francouzsk\u00e1 Guyana"_s)
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
			$of("Tale"_s),
			$of("tai le"_s)
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
			$of(u"Gr\u00f3nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"angli\u010dtina (st\u0159edov\u011bk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambie"_s)
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
			$of(u"Rovn\u00edkov\u00e1 Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0158ecko"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ji\u017en\u00ed Georgie a Ji\u017en\u00ed Sandwichovy ostrovy"_s)
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
			$of("pdc"_s),
			$of(u"n\u011bm\u010dina (pensylv\u00e1nsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"tai l\u00fc nov\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"kurd\u0161tina (sor\u00e1n\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u017e\u00e1dn\u00fd jazykov\u00fd obsah"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"d\u017e\u00fcr\u010densk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"taly\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"n\u011bm\u010dina (plautdietsch)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hongkong \u2013 ZAO \u010c\u00edny"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard\u016fv ostrov a McDonaldovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Chorvatsko"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"n\u011bm\u010dina (\u0160v\u00fdcarsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Muslimsk\u00fd kalend\u00e1\u0159 (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ma\u010farsko"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"r\u00edf\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tama\u0161ek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kan\u00e1rsk\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"\u010d\u00edn\u0161tina (dialekty Minnan)"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e9sie"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"staroper\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irsko"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"nama\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"nabatejsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ostrov Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Evropsk\u00e9 \u0159azen\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britsk\u00e9 indickooce\u00e1nsk\u00e9 \u00fazem\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ir\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u00cdr\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1lie"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matematick\u00fd z\u00e1pis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Thajsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"v\u00f5ru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"way\u00fau\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Beng\u00e1lsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"fal\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Isl\u00e1msk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"beng\u00e1lsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jord\u00e1nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ain\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"mendsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ton\u017e\u0161tina (nyasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannadsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"n\u011bm\u010dina standardn\u00ed (\u0160v\u00fdcarsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetick\u00e9 \u0159azen\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"ingrij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Buddhistick\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Ke\u0148a"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latinsk\u00e1 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kyrgyzst\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambod\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komory"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Svat\u00fd Kry\u0161tof a Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"kannadsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Severn\u00ed Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Ji\u017en\u00ed Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"Pollardova fonetick\u00e1 abeceda"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kajmansk\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazachst\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cyrilice"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Svat\u00e1 Lucie"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"f\u00e9ni\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"cyrilce - staroslov\u011bnsk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich\u02bcin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"dolnon\u011bm\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lichten\u0161tejnsko"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sr\u00ed Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akkad\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"kopt\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9rie"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"jupik\u0161tina (st\u0159edoalja\u0161sk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"pahlavsk\u00e9 kni\u017en\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lucembursko"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Loty\u0161sko"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sora sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libye"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ladin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"alabam\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"lahnd\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"mah\u00e1d\u017ean\u00ed"_s)
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
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavsko"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"n\u00fc-\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u010cern\u00e1 Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Svat\u00fd Martin (Francie)"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"lamb\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleut\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"thajsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vaisk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Severn\u00ed Makedonie"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Barma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolsko"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"n\u00e9v\u00e1r\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macao \u2013 ZAO \u010c\u00edny"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"alb\u00e1n\u0161tina (Gheg)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Severn\u00ed Mariany"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u00e1nie"_s)
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
			$of("cps"_s),
			$of(u"kapiznon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("Transliterace podle UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"altaj\u0161tina (ji\u017en\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maledivy"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Japonsk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajsie"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"pahlavsk\u00e9 kl\u00ednov\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibie"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"subsaharsk\u00e1 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Hebrejsk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Slovn\u00edkov\u00e9 \u0159azen\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nov\u00e1 Kaledonie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"turoj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u00e9rie"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"pahlavsk\u00e9 \u017ealmov\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"hmongsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nizozemsko"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norsko"_s)
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
			$of("tsd"_s),
			$of(u"tsakon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"f\u00e9nick\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsim\u0161ijsk\u00e9 jazyky"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nov\u00fd Z\u00e9land"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"meroitick\u00e9 psac\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"rom\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"meroitick\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ture\u010dtina (krymsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"staroangli\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"kreol\u0161tina (seychelsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"staropersk\u00e9 kl\u00ednov\u00e9 p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Muslimsk\u00fd ob\u010dansk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ka\u0161ub\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"angli\u010dtina (Velk\u00e1 Brit\u00e1nie)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"tat\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Francouzsk\u00e1 Polyn\u00e9sie"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-Nov\u00e1 Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filip\u00edny"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"P\u00e1kist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre a Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairnovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palestinsk\u00e1 \u00fazem\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"balijsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalsko"_s)
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
			$of(u"Mal\u00e9 \u0159eck\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"tumbuk\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"hebrejsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"angli\u010dtina (Skotsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"jamajsk\u00e1 kreol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"piemon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niue\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"vn\u011bj\u0161\u00ed Oce\u00e1nie"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"extremadur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezgin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuval\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"sv\u011bt"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"ao (jazyky N\u00e1g\u00e1landu)"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Severn\u00ed Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Ji\u017en\u00ed Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("lingua franca nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"pont\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"red\u017eansk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oce\u00e1nie"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunsko"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Srbsko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusko"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"manichejsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ugaritsk\u00e9 kl\u00ednov\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"kh\u00e1r\u00f3\u0161th\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Sa\u00fadsk\u00e1 Ar\u00e1bie"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"pohnpei\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mandejsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0160alamounovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"z\u00e1padn\u00ed Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychely"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"S\u00fad\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"St\u0159edn\u00ed Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0160v\u00e9dsko"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"v\u00fdchodn\u00ed Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"aramej\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"severn\u00ed Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Svat\u00e1 Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Striktn\u00ed styl zalamov\u00e1n\u00ed \u0159\u00e1dk\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"st\u0159edn\u00ed Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovinsko"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ji\u017en\u00ed Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0160picberky a Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovensko"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"bamumsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"karol\u00ednsk\u00e9 (woleai)"_s)
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
			$of(u"Som\u00e1lsko"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapa\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Tamilsk\u00e9 tradi\u010dn\u00ed \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"araon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Ji\u017en\u00ed S\u00fad\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Svat\u00fd Tom\u00e1\u0161 a Princ\u016fv ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"arab\u0161tina (al\u017e\u00edrsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"arab\u0161tina (Nad\u017ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Svat\u00fd Martin (Nizozemsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00fdrie"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"jao\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"arawack\u00e9 jazyky"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"arab\u0161tina (egyptsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"arab\u0161tina (marock\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"jap\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"rotuman\u0161tina"_s)
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
			$of(u"Americk\u00e1 m\u011brn\u00e1 soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Severn\u00ed Amerika (oblast)"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks a Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"jangben\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010cad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francouzsk\u00e1 ji\u017en\u00ed \u00fazem\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"znakov\u00e1 \u0159e\u010d (americk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thajsko"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"T\u00e1d\u017eikist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibik"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"V\u00fdchodn\u00ed Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Vyhled\u00e1vat podle po\u010d\u00e1te\u010dn\u00ed souhl\u00e1sky p\u00edsma hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisko"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turecko"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad a Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tchaj-wan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"astur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"rus\u00edn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"rovian\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"orchonsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanie"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"nezn\u00e1m\u00e9 p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"chud\u00e1b\u00e1d\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"ligur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arumun\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"v\u00fdchodn\u00ed Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"svahil\u0161tina (Kongo)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ji\u017en\u00ed Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"haid\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"jihov\u00fdchodn\u00ed Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"\u010d\u00edn\u0161tina (dialekty Hakka)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u0158azen\u00ed podle pchin-jinu"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ji\u017en\u00ed Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"sinh\u00e1lsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Men\u0161\u00ed odlehl\u00e9 ostrovy USA"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"livon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Organizace spojen\u00fdch n\u00e1rod\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Spojen\u00e9 st\u00e1ty"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u0158azen\u00ed pro zjednodu\u0161enou \u010d\u00edn\u0161tinu \u2013 GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"pru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"tamazight (st\u0159edn\u00ed Maroko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u0158azen\u00ed podle tah\u016f"_s)
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
			$of(u"provens\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Svat\u00fd Vincenc a Grenadiny"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britsk\u00e9 Panensk\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Americk\u00e9 Panensk\u00e9 ostrovy"_s)
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
			$of(u"nogaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"nor\u0161tina historick\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasie"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u00e9sie"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis a Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Tradi\u010dn\u00ed \u0159azen\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikron\u00e9sie (region)"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakot\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finan\u010dn\u00ed z\u00e1pis \u010d\u00edsel"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"P\u0159edchoz\u00ed \u0159azen\u00ed, kompatibilita"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"n\u011bm\u010dina (walser)"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("bassa vah"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"wolajt\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"wa\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"simulovan\u00e1 diakritika"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"waraj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"simulovan\u00fd obousm\u011brn\u00fd z\u00e1pis"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"awadh\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polyn\u00e9sie"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gud\u017ear\u00e1t\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"bez z\u00e1pisu"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"sant\u00e1lsk\u00e9 (ol chiki)"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"batack\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"Blissovo p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Standardn\u00ed \u0159azen\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"lombard\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"fant\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("SignWriting"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Jihoafrick\u00e1 republika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Sundsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Voln\u00fd styl zalamov\u00e1n\u00ed \u0159\u00e1dk\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"d\u00e9van\u00e1gar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Gruz\u00ednsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"\u010cu-jin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambie"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"nezn\u00e1m\u00e1 oblast"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"runov\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Metrick\u00e1 soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Kalend\u00e1\u0159 ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mong\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"sot\u0161tina (severn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Telugsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"kreol\u0161tina (Louisiana)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"loz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("naxi geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ma\u0161ame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"hind\u0161tina (Fid\u017ei)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Finan\u010dn\u00ed \u010d\u00edslice zjednodu\u0161en\u00e9 \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hiligajnon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Roz\u0161\u00ed\u0159en\u00e9 arabsko-indick\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"nuer\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dakot\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u010c\u00edslice \u2013 pln\u00e1 \u0161\u00ed\u0159ka"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"chetit\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"darg\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"maysk\u00e9 hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"l\u00far\u0161tina (severn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"koptsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newar\u0161tina (klasick\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurt\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"khmersk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"sandaw\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u0158\u00edmsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jakut\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"latgal\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"kavkazskoalb\u00e1nsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"sasak\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"sant\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"berbersk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"judeoper\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"saur\u00e1\u0161ter\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numerick\u00fd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Nativn\u00ed \u010d\u00edslice"_s)
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
			$of(u"luba-lulua\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Pln\u00e1 \u0161\u00ed\u0159ka"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"sango\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luise\u0148o"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0148ankol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u0148amwe\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"lund\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u0148or\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"luo\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filip\u00edn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"hmong\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delawar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"mizo\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"bal\u00fa\u010d\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"slejv\u0161tina (athabask\u00fd jazyk)"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugarit\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"fin\u0161tina (tornedalsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhja"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"bavor\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judeoarab\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0161pan\u011bl\u0161tina (Evropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"skot\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicil\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abch\u00e1z\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avest\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrik\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akan\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"arabsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"japonsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arab\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"japonsk\u00e9 slabi\u010dn\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u00e1s\u00e1m\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"sassar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"line\u00e1rn\u00ed A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"line\u00e1rn\u00ed B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"kurd\u0161tina (ji\u017en\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ajmar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u00e1zerb\u00e1jd\u017e\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"chod\u017eiki"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0161kir\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u0158azen\u00ed podle radik\u00e1l\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"b\u011bloru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulhar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislam\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"Jav\u00e1nsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"beng\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibet\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"breton\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosen\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"myanmarsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of(u"seri\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Laosk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"selkup\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katal\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u010de\u010den\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010damoro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsi\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"urijsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"kr\u00edj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010de\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"staroslov\u011bn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u010duva\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"vel\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Etiopsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"d\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugal\u0161tina (Evropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"n\u011bm\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Standardn\u00ed m\u011bnov\u00fd form\u00e1t"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bed\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"dink\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"jut\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"buginsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"bemb\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"ir\u0161tina (star\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongolsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"malediv\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"batav\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"dzongk\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u010c\u00ednsk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"\u010d\u00edn\u0161tina (klasick\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraserovo"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"zarm\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"\u017eemait\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u0158eck\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ewe\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"B\u011b\u017en\u00fd styl zalamov\u00e1n\u00ed \u0159\u00e1dk\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldav\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0159e\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angli\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"badag\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"laz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u0158azen\u00ed pro tradi\u010dn\u00ed \u010d\u00edn\u0161tinu \u2013 Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0161pan\u011bl\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"eston\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baski\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"buhidsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"sama\u0159sk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ta\u0161elhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"hornolu\u017eick\u00e1 srb\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0161an\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"hanun\u00f3o"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"per\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"zjednodu\u0161en\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Z\u00e1padn\u00ed \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"tradi\u010dn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulb\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"arab\u0161tina (\u010dadsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"\u010d\u00edn\u0161tina (dialekty Xiang)"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"fin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fid\u017eij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"fon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"bal\u00fa\u010d\u0161tina (z\u00e1padn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kanton\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"faer\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("Transliterace podle BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francouz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fr\u00ed\u0161tina (z\u00e1padn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ir\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skotsk\u00e1 gael\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galicij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaran\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bh\u00f3d\u017epur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"nezn\u00e1m\u00fd jazyk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Etiopsk\u00fd kalend\u00e1\u0159 (Amete-Alem)"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gud\u017ear\u00e1t\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"man\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Som\u00e1lsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hau\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"hebrej\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hind\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"bikol\u0161tina"_s)
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
			$of(u"chorvat\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"hait\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ma\u010far\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"arm\u00e9n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"herer\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"francouz\u0161tina (cajunsk\u00e1)"_s)
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
			$of(u"indon\u00e9\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibetsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igbo\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"i\u0161tina (se\u010du\u00e1nsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"francouz\u0161tina (st\u0159edov\u011bk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"inupiak\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"francouz\u0161tina (star\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"franko-provens\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"fr\u00ed\u0161tina (v\u00fdchodn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"band\u017ear\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"fr\u00ed\u0161tina (severn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ital\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inuktitut\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"n\u011bm\u010dina (slezsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"malajl\u00e1msk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"starojihoarabsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"dogar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"selajar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"s\u00e1m\u0161tina (ji\u017en\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"jav\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shawova abeceda"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"s\u00e1m\u0161tina (lulejsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magahij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"maithili\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"s\u00e1m\u0161tina (inarijsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"gruz\u00edn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"makasar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"\u010d\u00edn\u0161tina (dialekty Wu)"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"s\u00e1m\u0161tina (skoltsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"manding\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"kon\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"gotick\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"kikuj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"kua\u0148am\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kaza\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"gr\u00f3n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"khm\u00e9r\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kannad\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"korej\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ka\u0161m\u00edr\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("kirt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lep\u010dsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"avest\u00e1nsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurd\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"korn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kyrgyz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"sonik\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latina"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"lucembur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malaj\u00e1lamsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"gand\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limbur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"tibetsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"lingal\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"furlan\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"lao\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Britsk\u00e1 m\u011brn\u00e1 soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litev\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"lubu-katan\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"loty\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogd\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malga\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"mar\u0161\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"V\u00fdchoz\u00ed \u0159azen\u00ed Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maor\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malaj\u00e1lam\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mongol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"mar\u00e1th\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malt\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"barm\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"saur\u00e1\u0161tersk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"arm\u00e9nsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u0161an\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"dolnolu\u017eick\u00e1 srb\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"aramejsk\u00e9 (imperi\u00e1ln\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"naur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Obecn\u00e9 hled\u00e1n\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"nor\u0161tina (bokm\u00e5l)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele (Zimbabwe)"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nep\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ndond\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"nizozem\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"nor\u0161tina (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"nor\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ndebele (Ji\u017en\u00ed Afrika)"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"nava\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"karakalpa\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u0148and\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ka\u010dij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabyl\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okcit\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"kamb\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"od\u017eibvej\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Arm\u00e9nsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"orom\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"kadazandusun\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"urij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"mod\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oset\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"bi\u0161nuprijskomanipur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"mauricijsk\u00e1 kreol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pa\u0148d\u017e\u00e1b\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"dual\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"serer\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"p\u00e1l\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"bachtij\u00e1r\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"pol\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"holand\u0161tina (st\u0159edov\u011bk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Saur\u00e1\u0161tersk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Korejsk\u00fd kalend\u00e1\u0159 Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pa\u0161t\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugal\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ir\u0161tina (st\u0159edov\u011bk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u0158azen\u00ed"_s)
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
			$of(u"M\u011bnov\u00fd form\u00e1t"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"brad\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"laosk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24hodinov\u00fd syst\u00e9m (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24hodinov\u00fd syst\u00e9m (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"brahuj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Myanmarsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u010du\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapot\u00e9\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"bodo\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"fr\u00ed\u0161tina (saterlandsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etiopsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12hodinov\u00fd syst\u00e9m (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12hodinov\u00fd syst\u00e9m (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"r\u00e9torom\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"kirund\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"M\u011bna"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumun\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Urijsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u010c\u00ednsk\u00e9 des\u00edtkov\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ki\u0148arwand\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"bliss syst\u00e9m"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kapverd\u0161tina"_s)
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
			$of("Dupl"_s),
			$of(u"Duploy\u00e9ho t\u011bsnopis"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrt"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sard\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindh\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"s\u00e1m\u0161tina (severn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"sang\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"srbochorvat\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinh\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sumer\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"sloven\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0161on\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"som\u00e1l\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Arabsko-indick\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alb\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"srb\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"siswat\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u00da\u010detn\u00ed m\u011bnov\u00fd form\u00e1t"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sot\u0161tina (ji\u017en\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"jav\u00e1nsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sund\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0161v\u00e9d\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"svahil\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Finan\u010dn\u00ed \u010d\u00edslice tradi\u010dn\u00ed \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"iban\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamil\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"burjat\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"St\u0159edn\u00ed Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"telug\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"z\u00e1padn\u00ed Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"t\u00e1d\u017ei\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"thaj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrinij\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugi\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmen\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"setswan\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tong\u00e1n\u0161tina"_s)
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
			$of(u"Japonsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ture\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"komor\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tatar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("djula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahit\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"v\u00fdchodn\u00ed Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"severn\u00ed Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"z\u00e1padn\u00ed Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ujgur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"etrusk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"korejsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"obecn\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrajin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"z\u00e9land\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Koptsk\u00fd kalend\u00e1\u0159"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urd\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmy\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbe\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"kh\u00e1s\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"dolnosa\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"sylhetsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"varang k\u0161iti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kalend\u00e1\u0159 \u010c\u00ednsk\u00e9 republiky"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnam\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"chot\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Hodinov\u00fd cyklus (12 vs. 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"chovar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"syr\u0161tina (klasick\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"osmansk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ki\u010d\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"ke\u010du\u00e1n\u0161tina (chimborazo)"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ga\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valon\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagauz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"syr\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u0159eck\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"\u010d\u00edn\u0161tina (dialekty Gan)"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"zazak\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"l\u00fddsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"sumero-akkadsk\u00e9 kl\u00ednov\u00e9 p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wolof\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight (standardn\u00ed marock\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"arab\u0161tina (modern\u00ed standardn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"slabi\u010dn\u00e9 p\u00edsmo kanadsk\u00fdch domorodc\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"mongolsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mand\u017eu\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"latinka - lomen\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"slez\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"anatolsk\u00e9 hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manipur\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"latinka - galsk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u010c\u00edslice zjednodu\u0161en\u00e9 \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u010c\u00edslice tradi\u010dn\u00ed \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"xho\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Mal\u00e9 \u0159\u00edmsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"blin\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"l\u00fdkijsk\u00e9"_s)
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
			$of("gbz"_s),
			$of(u"dar\u00edj\u0161tina (zoroastrijsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Moonovo p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohawk\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"syrsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorub\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradi\u010dn\u00ed \u010d\u00edslovky"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"syrsk\u00e9 - z\u00e1padn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ture\u010dtina (osmansk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"syrsk\u00e9 - estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u010duang\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"karijsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalend\u017ein"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u010d\u00edn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"staropermsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Styl zalamov\u00e1n\u00ed \u0159\u00e1dk\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulu\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u0158azen\u00ed telefonn\u00edho seznamu"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"gruz\u00ednsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"\u0161\u00e1rad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"kimbund\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japonsk\u00e9 finan\u010dn\u00ed \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u010dam"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"marij\u0161tina (z\u00e1padn\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"syrsk\u00e9 - v\u00fdchodn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"elbasansk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"staroseveroarabsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reformovan\u00e9 \u0159azen\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"tagalsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"egyptsk\u00e9 d\u00e9motick\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"egyptsk\u00e9 hieratick\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"palm\u00fdrsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"egyptsk\u00e9 hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"gruz\u00ednsk\u00e9 chutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u010d\u00edn\u0161tina (zjednodu\u0161en\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komi-permja\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"staroma\u010farsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konk\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosraj\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"ben\u00e1t\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"sundsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"vep\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Khmersk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilok\u00e1n\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"kypersk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u010c\u00edslice gurmukh\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"v\u00edce jazyk\u016f"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"M\u011brn\u00e1 soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kr\u00edk\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("hlaholice"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"kiribat\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u010derok\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"karib\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"kajug\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tamilsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"kara\u010dajevo-balkar\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingu\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("kinaraj-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"dar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karel\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"efik\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"tulu\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u010c\u00edsla"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"kuruch\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0161ambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"telugsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_cs::LocaleNames_cs() {
}

$Class* LocaleNames_cs::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_cs, name, initialize, &_LocaleNames_cs_ClassInfo_, allocate$LocaleNames_cs);
	return class$;
}

$Class* LocaleNames_cs::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun