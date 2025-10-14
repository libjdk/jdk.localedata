#include <sun/util/resources/cldr/ext/LocaleNames_ewo.h>

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

$MethodInfo _LocaleNames_ewo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ewo::*)()>(&LocaleNames_ewo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ewo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ewo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ewo_MethodInfo_
};

$Object* allocate$LocaleNames_ewo($Class* clazz) {
	return $of($alloc(LocaleNames_ewo));
}

void LocaleNames_ewo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ewo::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"And\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Bemir\u00e1 y\u00e1 Ar\u00e1b\u0259 un\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Af\u0259ganis\u0259t\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00edgwa ai Bar\u0259b\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ang\u00edy\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Al\u0259b\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Ar\u0259m\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Angol\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Ar\u0259hen\u0259t\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"B\u0259sam\u00f3a y\u00e1 Am\u0259\u0301r\u0259ka"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Os\u0259t\u0259l\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Os\u0259t\u0259lal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Ar\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Az\u025br\u0259baidz\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bos\u0259n\u00ed ai \u025br\u0259zegov\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Bar\u0259b\u00e1d"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangalad\u025b\u0301s"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u025bl\u0259h\u00edg"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Bul\u0259kin\u00e1 Fas\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bul\u0259gar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bah\u0259r\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Burund\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"B\u0259n\u00ed\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"B\u025br\u0259m\u00fad"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Bulun\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"B\u0259laz\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bah\u00e1mas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Botswan\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"B\u0259lar\u00fas"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"B\u0259l\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"kanad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u01f9nam Kong\u00f3 Demok\u0259lat\u00edg"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u01f9nam Z\u01ce\u014b Afirik\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Su\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"K\u00f3d Div\u0254\u0301r"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Minl\u00e1n M\u00ed k\u00fag"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Tsil\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kam\u0259r\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Ts\u00e1ina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kol\u0254mb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kosta R\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kub\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Minl\u00e1n M\u00ed K\u00e1b V\u025br"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Sip\u0259l\u00fas"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u01f8nam Ts\u025b\u0301g"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Ndz\u00e1man"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dzibut\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dan\u0259m\u00e1r\u0259g"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"D\u00f3m\u0259nika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"R\u00e9publique dominicaine"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u0259y\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekwat\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Eseton\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Eh\u00edb\u0259t\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Elit\u0259l\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Kp\u0259ny\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiop\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Fin\u0259l\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidz\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Minl\u00e1n Mi F\u00f3l\u0259k\u0259lan"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikoron\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Ful\u025bns\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u00f3\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u01f8nam Eng\u0259lis"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"G\u0259l\u0259n\u00e1d\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Hor\u0259\u0301yia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guy\u00e1n y\u00e1 Ful\u025bns\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Gan\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Yil\u0259balat\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Goel\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gamb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Gin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guad\u0259l\u00fab"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Gin\u00e9 Ekwat\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"G\u0259l\u025b\u0301s"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Guatemal\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Gu\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gin\u00e9 Bisa\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Guy\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Ondur\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"K\u0259low\u00e1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ongir\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u025bndon\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ir\u0259l\u00e1nd\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Is\u0259ra\u025b\u0301l"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u025b\u0301nd\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u01f9nam \u025bng\u0259l\u00eds y\u00e1 M\u00e1\u014b m\u0259\u0301 \u025b\u0301nd\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ir\u00e1g"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Is\u0259l\u00e1nd\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1li\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Hama\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Hor\u0259dan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Hap\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Keni\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirigis\u0259t\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"kambod\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Kiribat\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Kom\u0254\u0301r"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u01f8f\u00faf\u00fab-Kilis\u0259t\u00f3v-ai-Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kor\u00e9 y\u00e1 N\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kor\u00e9 y\u00e1 S\u00fad"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Kow\u025b\u0301d"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Minl\u00e1n M\u00ed Kalim\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazak\u0259t\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"La\u00f3s"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Lib\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u01f8f\u00faf\u00fab-L\u00fasia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"L\u00eds\u0259\u0301s\u0259\u0301t\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"S\u0259ri La\u014bk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"L\u0259sot\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lituan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Luk\u0259zamb\u00fad"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"L\u0259ton\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Lib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Mar\u0254\u0301g"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u0254nak\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mol\u0259dav\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madagas\u0259k\u00e1r\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Minl\u00e1n M\u00ed Mares\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mian\u0259m\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"M\u0254ng\u0254\u0301lia"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Minl\u00e1n Mi Mari\u00e1n y\u00e1 N\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Mar\u0259tin\u00edg"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Moritan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"M\u0254\u0301ntser\u00e1d"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u00e1l\u0259t\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Mor\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mal\u0259d\u00edv\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malaw\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u025bk\u0259s\u00edg"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Mal\u025b\u0301zia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mozamb\u00edg"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u01f8kp\u00e1m\u025bn Kaled\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nih\u025b\u0301r"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Minl\u00e1n N\u0254r\u0259f\u0254\u0301l\u0259k\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nih\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nikar\u00e1gua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"P\u025b\u00edb\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u0254r\u0259v\u025b\u0301s"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nep\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Naur\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u01f8kp\u00e1m\u025bn Zel\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Per\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polines\u00ed y\u00e1 Ful\u025bns\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papwazi y\u00e1 \u01f8kp\u00e1m\u025b\u0301n Gin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filip\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakis\u0259t\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"f\u00f3lis"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u01f8f\u00faf\u00fab-P\u00ed\u025br-ai-Mik\u0259l\u0254\u0301\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"P\u00edt\u0259\u0301k\u025b\u0301r\u025bn\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pw\u025br\u0259to R\u00edko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u01f8nam Pal\u025bs\u0259t\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"f\u0254r\u0259tug\u025b\u0301s"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Paragu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Kat\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reuni\u0254\u0301\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Ruman\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u00fasian"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ruwand\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Arab\u00ed Saud\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Minl\u00e1n M\u00ed Solom\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"S\u025bs\u025b\u0301l"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suw\u025b\u0301d"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u00far"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u01f8f\u00faf\u00fab-\u0190l\u025b\u0301na"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"S\u0259lov\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"S\u0259lovak\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Sier\u00e1-le\u00f3n\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u01f8f\u00faf\u00fab Mar\u00edno"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Seneg\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Surin\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sa\u00f3 Tom\u00e9 ai P\u0259lin\u0259s\u00edpe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Sal\u0259vad\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sir\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Swazil\u00e1nd\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Minl\u00e1n M\u00ed t\u00far\u0259\u0301g-ai-Ka\u00edg"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ts\u00e1d"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Tog\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tail\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadzikis\u0259t\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Tokel\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tim\u00f4r"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Tur\u0259k\u0259m\u0259nis\u0259t\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunis\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"T\u0254ng\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Tur\u0259k\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"T\u0259linit\u00e9-ai-Tob\u00e1go"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tuval\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taiw\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Ta\u014b\u0259zan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Uk\u0259r\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ugand\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u01f8nam Am\u025br\u0259k\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Urugu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzubekis\u0259t\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u01f8nam Vatik\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u01f8f\u00faf\u00fab-V\u025bng\u0259s\u00e1\u014b-ai-B\u0259 G\u0259l\u0259nad\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venezu\u00e9la"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0144nam Minl\u00e1n \u025b\u0301ng\u0259l\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Minl\u00e1n Mi Am\u025br\u0259k\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vi\u025bd\u0259n\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanu\u00e1tu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wal\u00eds-ai-Fut\u00fana"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Samo\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yem\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"May\u0254\u0301d"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afir\u00edka y\u00e1 S\u00fad"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Zamb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbabw\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 ak\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 am\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 ar\u00e1bia"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 belar\u00fasian"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 bul\u0259g\u00e1rian"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 b\u025bngal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 ts\u025b\u0301g"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 ndz\u00e1man"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 g\u0259l\u025b\u0301g"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 \u00e9ng\u0259l\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 kp\u0259ny\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 f\u025b\u0301r\u0259sian"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 ful\u025bns\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 a\u00fas\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 hind\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 ung\u00e1r\u00edan"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 \u025bndon\u00e9sian"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 ib\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 et\u00e1li\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 hap\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 havan\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 k\u0259m\u025b\u0301r"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 kor\u00e9an"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 mal\u025b\u0301sian"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 bir\u0259m\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 nef\u00e1lian"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 n\u025br\u0259l\u00e1nd\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 fun\u0259h\u00e1bia"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 f\u00f3lis"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 f\u0254tug\u025b\u0301s"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0144k\u0254\u0301b\u0254 rom\u00e1n\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 r\u00fasian"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 ruwand\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 suw\u025b\u0301d"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 tam\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 t\u00e1ilan"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 t\u00far\u0259ki"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 ukel\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 urud\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 hi\u025bd\u0259n\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 yor\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u01f8k\u0254\u0301b\u0254 tsain\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u01f9k\u0254\u0301b\u0254 zul\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		})
	}));
	return data;
}

LocaleNames_ewo::LocaleNames_ewo() {
}

$Class* LocaleNames_ewo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ewo, name, initialize, &_LocaleNames_ewo_ClassInfo_, allocate$LocaleNames_ewo);
	return class$;
}

$Class* LocaleNames_ewo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun