#include <sun/util/resources/cldr/ext/LocaleNames_ku.h>

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

$MethodInfo _LocaleNames_ku_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ku::*)()>(&LocaleNames_ku::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ku_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ku",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ku_MethodInfo_
};

$Object* allocate$LocaleNames_ku($Class* clazz) {
	return $of($alloc(LocaleNames_ku));
}

void LocaleNames_ku::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ku::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"ereb\u00ee"_s);
	$var($String, metaValue_bn, u"bengal\u00ee"_s);
	$var($String, metaValue_bo, u"t\u00eebet\u00ee"_s);
	$var($String, metaValue_el, u"yewnan\u00ee"_s);
	$var($String, metaValue_hy, u"ermen\u00ee"_s);
	$var($String, metaValue_ka, u"gurc\u00ee"_s);
	$var($String, metaValue_km, u"xim\u00ear\u00ee"_s);
	$var($String, metaValue_mn, u"mongol\u00ee"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"r\u00eepwar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("sembol"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"f\u00eel\u00eep\u00eenoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"bal\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"skot\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sic\u00eel\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapanuy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abxaz\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotong\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tet\u00fbm\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Em\u00eertiy\u00ean Ereb\u00ee y\u00ean Yekb\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flam\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Efxanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afr\u00eekans\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00eegua \u00fb Berb\u00fbda"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Ermenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antarkt\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arjent\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoaya Amer\u00eekan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asam\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awistirya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awistralya"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Ar\u00fbba"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aymaray\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaycan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azer\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosniya \u00fb Herzegov\u00eena"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u015fk\u00eer\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"sebwanoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglade\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bel\u00e7\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"belarus\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Burk\u00eena Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaristan"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Behreyn"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Burund\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"b\u00eeslamay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"B\u00ean\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint-Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Berm\u00fbda"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambaray\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"erzay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Br\u00fbney"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00eevya"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Braz\u00eel"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"breton\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosn\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"B\u00fbtan"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belar\u00fbs"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bel\u00eeze"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"salnameya \u00eeran\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazenderan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo - K\u00een\u015fasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u00e7e\u00e7en\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Komara Afr\u00eekaya Navend"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Sw\u00eesre"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u00e7amoroy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Perav\u00ea Diranf\u00eel"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Girav\u00ean Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u015e\u00eele"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamer\u00fbn"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u00c7\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombiya"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"kors\u00eekay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kosta R\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u00e7ek\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"K\u00fbba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u00e7uva\u015f\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"K\u00eepros"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"weyls\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u00c7ekya"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danmark\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Almanya"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"elman\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"a\u00e7eh\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"C\u00eeb\u00fbt\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dan\u00eemarka"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dom\u00een\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Komara Dom\u00een\u00eek"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"bembay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"gorontaloy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"diveh\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Cezayir"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"conxay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"salnameya \u00e7\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"kapampangan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"papyamentoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonya"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ewey\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Misir"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahraya Rojava"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palaw\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u00e7\u00fbk\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u00eengil\u00eez\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"mar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"esperantoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u00e7erok\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Er\u00eetrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanya"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"span\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiyopya"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"eston\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Yek\u00eetiya Ewropay\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"bask\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"salnameya gregor\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u00e7eyen\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"sorbiya jor\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ad\u00eegey\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"faris\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulah\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"F\u00eenlenda"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"f\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"F\u00eej\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"f\u00eej\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Girav\u00ean Malv\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"M\u00eekronezya"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kanton\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Girav\u00ean Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fer\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Fransa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"frens\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fr\u00ees\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u00eer\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Keyaniya Yekb\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gael\u00eeka skot\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gurcistan"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guyanaya Frans\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"C\u00eebraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gr\u00eenlenda"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"gal\u00ees\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"G\u00eene"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guwaran\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bojp\u00fbr\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"G\u00eeneya Rojbend\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Yewnanistan"_s)
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
			$of("gu"_s),
			$of(u"gujarat\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"manks\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"G\u00eene-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"kl\u00eengon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hawsay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"soran\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u00eebran\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hind\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hond\u00fbras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatya"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"xirwat\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"elman\u00ee\u015f\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ha\u00eet\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ha\u00eet\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Macaristan"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"mecar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"hereroy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Girav\u00ean Qenariy\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u00cendonezya"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonez\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u00cerlenda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"napol\u00eetan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u00eegboy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"zazak\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u00cesra\u00eal"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Girava Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hindistan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u00eedoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u00ceran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u00ceslenda"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u00eezlend\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u00cetalya"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u00eetal\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u00eenu\u00eet\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"salnameya ko\u00e7\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jama\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Urdun"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japon"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"aynuy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"maduray\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"samiya \u00eenar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"blakfot\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Amer\u00eekaya Lat\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Qirgizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboca"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Kir\u00eebat\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"qazax\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"kalal\u00ees\u00fbt\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komor"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint Kitts \u00fb Nev\u00ees"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kannaday\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"korey\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kor\u00eaya Bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kor\u00eaya Ba\u015f\u00fbr"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ke\u015fm\u00eer\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurd\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"kom\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweyt"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"korn\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"tokpisin\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Girav\u00ean Kayman\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgiz\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Qazaxistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"kir\u00eel\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libnan"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksemb\u00fbrg\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"luganday\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"l\u00eemb\u00fbrg\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sr\u00ee Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"lingalay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"friyol\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laws\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"L\u00eeberya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"L\u00eetvanya"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"l\u00eetwan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"L\u00fbksemb\u00fbrg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonya"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"latviyay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00eebya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"lad\u00eenoy\u00ee"_s)
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
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malagas\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Girav\u00ean Mar\u015fal"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"mar\u015fal\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"al\u00eaw\u00eet\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maor\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Makedonya"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mal\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malayalam\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Birmanya)"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolya"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Girav\u00ean Bakur\u00ea Marianan"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mor\u00eetanya"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"marat\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malez\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u00eetius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mald\u00eev"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malaw\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Meks\u00eek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"salnameya japon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezya"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"burmay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mozamb\u00eek"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u015fay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"sorbiya j\u00ear\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00eebya"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nawr\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norwec\u00ee (bokm\u00e5l)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"salnameya \u00eebran\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Kaledonyaya N\u00fb"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00eejer"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepal\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Girava Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"N\u00eejerya"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"tarokoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"N\u00eekaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holenda"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holend\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norwec\u00ee (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norw\u00eac"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Na\u00fbr\u00fb"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ni\u00fbe"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navajoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"N\u00fb Zelenda"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kab\u00eel\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oks\u00eetan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"oromoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"oriyay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oset\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"siranan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"puncab\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"diwalay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Per\u00fb"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Pol\u00eenezyaya Frans\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua G\u00eeneya N\u00fb"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Fil\u00eep\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonya"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint-Pierre \u00fb Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Girav\u00ean Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Porto R\u00eeko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Xak\u00ean filist\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pe\u015ft\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Port\u00fbgal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugal\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"tumbukay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qeter"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("salname"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"n\u00eew\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezg\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u00e7way\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuval\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"C\u00eehan"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Afr\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Amer\u00eekaya Bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Amer\u00eekaya Ba\u015f\u00fbr"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"lojban\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Okyan\u00fbsya"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"romanc\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"diw\u00eez"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"roman\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbistan"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u00fbsya"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rus\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"k\u00eenyariwanday\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kapverd\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"m\u00eekmak\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Erebistana Siy\u00fbd\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sanskr\u00eet\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Girav\u00ean Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sey\u015fel"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sard\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"S\u00fbdan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindh\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Amer\u00eekaya Nav\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Sw\u00ead"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("samiya bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"m\u00eenangkabaw\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Afr\u00eekaya Bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u00fbr"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenya"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"k\u00eengal\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amer\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakya"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovak\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"sloven\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Mar\u00eeno"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u015fonay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalya"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somal\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"elban\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"S\u00fbr\u00eenam"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"sirb\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"S\u00fbdana Ba\u015f\u00fbr"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"swaz\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tome \u00fb Pr\u00eens\u00eepe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sotoyiya ba\u015f\u00fbr"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"sw\u00ead\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"swah\u00eel\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00fbr\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Swaz\u00eelenda"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tam\u00eel\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Girav\u00ean Turk \u00fb Ka\u00eekos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u00c7ad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"tel\u00fbg\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tacik\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Taylenda"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"tay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigr\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bug\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tac\u00eekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Kar\u00eeb"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"tirkmen\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"T\u00eemora-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Tirkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"T\u00fbnis"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"tswanay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tong\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tirkiye"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"tirk\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"tsongay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"komor\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Tr\u00een\u00eedad \u00fb Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"teter\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"T\u00fbval\u00fb"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taywan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ast\u00fbr\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tah\u00eet\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanya"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"niv\u00eesa nenas"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Ewropa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u00dbkrayna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aroman\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Ewropaya Rojhilat"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Ewropaya Rojava"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u00dbganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"oygur\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("hevpar"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrayn\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Netewey\u00ean Yekb\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urd\u00fby\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Dewlet\u00ean Yekb\u00fby\u00ee y\u00ean Amer\u00eekay\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"haway\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u00dbr\u00fbguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"pr\u00fbsyay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u00dbzb\u00eakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ozbek\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"temaz\u00eext\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vat\u00eekan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Saint Vincent \u00fb Girav\u00ean Grenad\u00een"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"salnameya Komara \u00c7\u00een\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"viyetnam\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Viyetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fbk\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Van\u00fbat\u00fb"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"walon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"siryan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Awistralasya"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezya"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis \u00fb Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Her\u00eama M\u00eekronezya"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakotay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wolof\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("erebiya standard"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"waray\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Pol\u00eenezya"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"lat\u00een\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"xosay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ne niv\u00eesand\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohawk\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"yid\u00ee\u015f\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"yorubay\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afr\u00eekaya Ba\u015f\u00fbr"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"devanagar\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zuluy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Z\u00eembabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("salnameya ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotoyiya bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkan\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"h\u00eel\u00eegaynon\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luriya bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u00eelokanoy\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurt\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"k\u00eer\u00eebat\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"hejmar\u00ean rom\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u00eeng\u00fb\u015f\u00ee"_s)
		})
	}));
	return data;
}

LocaleNames_ku::LocaleNames_ku() {
}

$Class* LocaleNames_ku::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ku, name, initialize, &_LocaleNames_ku_ClassInfo_, allocate$LocaleNames_ku);
	return class$;
}

$Class* LocaleNames_ku::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun