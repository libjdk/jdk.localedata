#include <sun/util/resources/cldr/ext/LocaleNames_qu.h>

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

$MethodInfo _LocaleNames_qu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_qu::*)()>(&LocaleNames_qu::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_qu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_qu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_qu_MethodInfo_
};

$Object* allocate$LocaleNames_qu($Class* clazz) {
	return $of($alloc(LocaleNames_qu));
}

void LocaleNames_qu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_qu::getContents() {
	$var($String, metaValue_MM, "Myanmar"_s);
	$var($String, metaValue_ar, "Arabe Simi"_s);
	$var($String, metaValue_bn, "Bangla Simi"_s);
	$var($String, metaValue_bo, "Tibetano Simi"_s);
	$var($String, metaValue_el, "Griego Simi"_s);
	$var($String, metaValue_gu, "Gujarati Simi"_s);
	$var($String, metaValue_he, "Hebreo Simi"_s);
	$var($String, metaValue_hy, "Armenio Simi"_s);
	$var($String, metaValue_ja, "Japones Simi"_s);
	$var($String, metaValue_kn, "Kannada Simi"_s);
	$var($String, metaValue_ko, "Coreano Simi"_s);
	$var($String, metaValue_lo, "Lao Simi"_s);
	$var($String, metaValue_ml, "Malayalam Simi"_s);
	$var($String, metaValue_mn, "Mongol Simi"_s);
	$var($String, metaValue_or, "Odia Simi"_s);
	$var($String, metaValue_si, "Cingales Simi"_s);
	$var($String, metaValue_ta, "Tamil Simi"_s);
	$var($String, metaValue_th, "Tailandes Simi"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"K\u00f6lsch Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Unanchakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipino Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong Daw Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Chakma Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Islas Ascensi\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emiratos \u00c1rabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Flamenco Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua y Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Etiope Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguila"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan Simi"_s)
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
			$of("am"_s),
			$of("Amarico Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
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
			$of(u"Ant\u00e1rtida"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Japones silabico sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Americana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Asames Simi"_s)
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
			$of(u"Islas \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaiy\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaiyano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia y Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baskir Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u00e9lgica"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Bielorruso Simi"_s)
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
			$of("bg"_s),
			$of("Bulgaro Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bar\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Ben\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"San Bartolom\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brun\u00e9i"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Bonaire"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Breton Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Isla Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_MM)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Lao Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belar\u00fas"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Persa Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Hebreo Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalan Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Islas Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Mazandaran\u00ed Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo (RDC)"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Checheno Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Rep\u00fablica Centroafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suiza"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Islas Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Camer\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corso Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Isla Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Checo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Eslavo Eclesi\u00e1stico Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Curazao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Isla Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Chipre"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Gales Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Chequia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Etiope Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemania"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Aleman Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Kiga Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego Garc\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Estandar nisqa qullqi imayna kaynin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Devanagari Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Yibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarca"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braile"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Armenio Uchuy Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Rep\u00fablica Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Espa\u00f1ol Simi (Latino Am\u00e9rica)"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Argelia"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Butan\u00e9s Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Chino Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta y Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamento Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Griego Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"Ew\u00e9 Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Siqi paway Normal kaynin"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Ingles Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cheroqui Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Espa\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Espa\u00f1ol Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiop\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han with Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Union Europea"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Euskera Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregoriano Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozona"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tashelhit Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Gujarati Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Alto Sorbio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persa Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Occidental Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fines Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiyi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Islas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Canton\u00e9s Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Islas Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Feroes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francia"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Frances Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Frison Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Irlandes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Reino Unido"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Pidgin Nigeriano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Gaelico Escoces Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guayana Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernesey"_s)
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
			$of("GL"_s),
			$of("Groenlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Gallego Simi"_s)
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
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guinea Ecuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Mana Riqsisqa Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grecia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Georgia del Sur e Islas Sandwich del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
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
			$of("gv"_s),
			$of(u"Man\u00e9s Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guinea-Bis\u00e1u"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Chawpi Kurdo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Manaraq simi yachana"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong RAE China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Islas Heard y McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croacia"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Croata Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Alsaciano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Hait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitiano Criollo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hungr\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hungaro Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Islas Canarias"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Tibetano Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Yi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isla de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territorio Brit\u00e1nico del Oc\u00e9ano \u00cdndico"_s)
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
			$of("Islandia"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Islandes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italiano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Matimatica Willay"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Thai Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Bangla Sananpakuna"_s)
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
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Islamico Intiwatana"_s)
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
			$of("Jordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Qulla Sami Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Javan\u00e9s Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"Guz\u00ed Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannada Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Sami Lule Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Sami Inari Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Georgiano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Budista Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Sami Skolt Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("AmericaLatina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirguist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboya"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masai Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kazajo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Groenlandes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoras"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Khmer Simi"_s)
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
			$of(u"San Crist\u00f3bal y Nieves"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Cachemir Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"C\u00f3rnico Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Islas Caim\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirghiz Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazajist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cirilico"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Lat\u00edn Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"L\u00edbano"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxemburgues Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Santa Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malayalam Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Luganda Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Bajo Alem\u00e1n Simi"_s)
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
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Metrico Ingles Kamay"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lituano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonia"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Leton Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Vunjo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Langi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marruecos"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f3naco"_s)
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
			$of("MF"_s),
			$of(u"San Mart\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malgache Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Islas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u00d1awpaqchasqa Unicode Nisqa \u00d1iqinchana"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Macedonio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(metaValue_MM)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao RAE China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Islas Marianas del Norte"_s)
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
			$of("mr"_s),
			$of("Marathi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malayo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricio"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u00e9xico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Japones Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malasia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Birmano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Bajo Sorbio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Llapanpaq maskana"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Africa Sub-Sahariana"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Noruego Bokm\u00e5l Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Hebreo Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nueva Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Ndebele septentrional Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00edger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Isla Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Pa\u00edses Bajos"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Neerlandes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Noruego Nynorsk Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Noruego Simi"_s)
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
			$of("Rombo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nueva Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Cabilio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Occitano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Armenio Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Osetio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Mauriciano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punyabi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Per\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinesia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pap\u00faa Nueva Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonia"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polaco Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"San Pedro y Miquel\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Islas Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestina Kamachikuq"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugues Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u00d1iqinchana"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palaos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Griego Uchuy Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Imayna Qullqi kaynin"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta\u02bc Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 hora kaynin (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 hora kaynin (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Myanmar Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Ocean\u00eda Perif\u00e9rica"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Runasimi"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Bodo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Makonde Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Pacha"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Etiope"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Norte America"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reuni\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 hora kaynin (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Sud America"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 hora kaynin (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romanche Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("qullqi"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumania"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Rumano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Odia Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Chunkachasqa Chino Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Ruso Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Caboverdiano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Arabia Saud\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanscrito Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Islas Salom\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Africa Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("America Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suecia"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Chincha Sami Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Africa Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Africa del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Siqi paway Chiqa kaynin"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Africa Media"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Eslovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Sud Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard y Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("America"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Eslovaquia"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Eslovaco Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leona"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Esloveno Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Mapuche Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Arabe Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanes Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Kikin Tamil Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbio Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sud\u00e1n del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Yupana Qullqi imayna kaynin"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Santo Tom\u00e9 y Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Soto Meridional Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Sundan\u00e9s Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Sueco Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Suajili Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Kikin Qullqi Chino Yupaypakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Suazilandia"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Trist\u00e1n de Acu\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Metrico Americano Kamay"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("America del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Islas Turcas y Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia Central"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telugu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territorios Australes Franceses"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tayiko Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandia"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Tigri\u00f1a Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tayikist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribe"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turcomano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"T\u00fanez"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Setsuana Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Japones Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Turqu\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turco Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad y Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tartaro Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taiw\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturiano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio Ngumba Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Mana yachasqa Qillqa"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ucrania"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Suajili Simi (Congo (RDC))"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Sureste de Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uigur Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Common Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ucraniano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Islas menores alejadas de los EE.UU."_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Naciones Unidas"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Prusiano Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Uzbeko Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamazight Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Santa Sede (Ciudad del Vaticano)"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Vicente y las Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Minguo Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Islas V\u00edrgenes Brit\u00e1nicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"EE.UU. Islas V\u00edrgenes"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamita Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Ciclo de Horas (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volap\u00fck Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K\u02bciche\u02bc Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Siriaco Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis y Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Regi\u00f3n Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Lakota Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"Bereber Marroqu\u00ed Est\u00e1ndar Simi"_s)
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
			$of("XA"_s),
			$of("Seudo-Acentos"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Seudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Uchuyachusqa Chino Yupaypakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Kikin Chino Yupaypakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Isixhosa Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Roman Uchuy Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Mana qillqasqa"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Estandar nisqa \u00d1iqinchana"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yiddish Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Sud\u00e1frica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Siqi paway chinkachiy kaynin"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chino Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Gregoriano Yupaykuna"_s)
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
			$of("Bopo"_s),
			$of("Bopomofo Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Siqi paway kaynin"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Isizulu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabue"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Mana yachasqa Suyu"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metrico Kamay"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 Intiwatana"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Sesotho Sa Leboa Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Telegu Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Japones Qullqi Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Chino Simplificado Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Uchuyachisqa Qullqi Chino Yupaypakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Arabe Mirachisqa Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Llapan kinray Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Luri septentrional Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Chino Tradicional Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmer Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Gurmukhi Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Idiomas M\u00b4\u00faltiples Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Tupuy Kamay"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Romano Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamil Sananpakuna"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Dari Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Yupaykuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Tegulu Simi"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafia Simi"_s)
		})
	}));
	return data;
}

LocaleNames_qu::LocaleNames_qu() {
}

$Class* LocaleNames_qu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_qu, name, initialize, &_LocaleNames_qu_ClassInfo_, allocate$LocaleNames_qu);
	return class$;
}

$Class* LocaleNames_qu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun