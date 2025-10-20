#include <sun/util/resources/cldr/ext/LocaleNames_gl.h>

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

$MethodInfo _LocaleNames_gl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_gl::*)()>(&LocaleNames_gl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_gl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_gl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_gl_MethodInfo_
};

$Object* allocate$LocaleNames_gl($Class* clazz) {
	return $of($alloc(LocaleNames_gl));
}

void LocaleNames_gl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_gl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"\u00e1rabe"_s);
	$var($String, metaValue_bn, u"bengal\u00ed"_s);
	$var($String, metaValue_bo, "tibetano"_s);
	$var($String, metaValue_el, "grego"_s);
	$var($String, metaValue_gu, "guxarati"_s);
	$var($String, metaValue_he, "hebreo"_s);
	$var($String, metaValue_hy, "armenio"_s);
	$var($String, metaValue_ja, u"xapon\u00e9s"_s);
	$var($String, metaValue_ka, "xeorxiano"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_kn, u"kannar\u00e1"_s);
	$var($String, metaValue_ko, "coreano"_s);
	$var($String, metaValue_lo, "laosiano"_s);
	$var($String, metaValue_ml, "malabar"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, "birmano"_s);
	$var($String, metaValue_or, u"odi\u00e1"_s);
	$var($String, metaValue_si, u"cingal\u00e9s"_s);
	$var($String, metaValue_ta, u"t\u00e1mil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, u"tailand\u00e9s"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f6lsch"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"s\u00edmbolos"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emojis"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("exipcio antigo"_s)
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
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Illa de Ascensi\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetun"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Os Emiratos \u00c1rabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamengo"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"calendario et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguila"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("fuso horario"_s)
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
			$of(u"A Ant\u00e1rtida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("A Arxentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Americana"_s)
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
			$of("en_US"_s),
			$of(u"ingl\u00e9s estadounidense"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Illas \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Acerbaix\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia e Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuano"_s)
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
			$of(u"B\u00e9lxica"_s)
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
			$of(u"Ben\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Illas Bermudas"_s)
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
			$of(u"Caribe Neerland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("O Brasil"_s)
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
			$of(u"But\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Illa Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belar\u00fas"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendario persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"numeraci\u00f3n hebrea"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"O Canad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Illas Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazandaran\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Rep\u00fablica Democr\u00e1tica do Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Rep\u00fablica Centroafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Rep\u00fablica do Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Su\u00edza"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Illas Cook"_s)
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
			$of("A China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Illa Clipperton"_s)
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
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Illa Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Chipre"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Chequia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Alema\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"achin\u00e9s"_s)
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
			$of("type.nu.deva"_s),
			$of(u"d\u00edxitos devanag\u00e1ricos"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarca"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"achol\u00ed"_s)
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
			$of(u"numeraci\u00f3n armenia en min\u00fascula"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Rep\u00fablica Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
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
			$of("Alxeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("ancho medio"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta e Melilla"_s)
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
			$of("EG"_s),
			$of("Exipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"O S\u00e1hara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauano"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
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
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Espa\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiop\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Uni\u00f3n Europea"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("calendario gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"d\u00edxitos guxaratis"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigueo"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fixi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Illas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("variante rexional"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Illas Feroe"_s)
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
			$of("type.ca.indian"_s),
			$of("Calendario nacional indio"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("grego antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("O Reino Unido"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pidgin nixeriano"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Xeorxia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"G\u00fciana Francesa"_s)
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
			$of("Xibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenlandia"_s)
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
			$of("GR"_s),
			$of("Grecia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Illas Xeorxia do Sur e Sandwich do Sur"_s)
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
			$of("A Guinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"G\u00fciana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdo central"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sen contido ling\u00fc\u00edstico"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alem\u00e1n austr\u00edaco"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong RAE da China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Illa Heard e Illas McDonald"_s)
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
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"alem\u00e1n su\u00edzo"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Hait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hungr\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Illas Canarias"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitano"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaki"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Illa de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("A India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territorio Brit\u00e1nico do Oc\u00e9ano \u00cdndico"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
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
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"notaci\u00f3n matem\u00e1tica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"d\u00edxitos tailandeses"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"d\u00edxitos bengal\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"calendario isl\u00e1mico"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Xamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Xordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"O Xap\u00f3n"_s)
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
			$of("type.nu.knda"_s),
			$of(u"d\u00edxitos kannar\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"alto alem\u00e1n su\u00edzo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Orde de clasificaci\u00f3n fon\u00e9tica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendario budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Am\u00e9rica Latina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirguizist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboxa"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"franc\u00e9s canadense"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea do Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"franc\u00e9s su\u00edzo"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Illas Caim\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"cir\u00edlico"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"O L\u00edbano"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa Luc\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich\u02bcin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"baixo alem\u00e1n"_s)
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
			$of("Luxemburgo"_s)
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
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marrocos"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f3naco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
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
			$of("Illas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"D\u00edxitos Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mal\u00ed"_s)
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
			$of("Macau RAE da China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Illas Marianas do Norte"_s)
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
			$of(u"transliteraci\u00f3n do UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricio"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altai meridional"_s)
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
			$of(u"calendario xapon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u00c1frica subsahariana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("calendario hebreo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Criterio de ordenaci\u00f3n do dicionario"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nova Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00edxer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Illa Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nixeria"_s)
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
			$of(u"Pa\u00edses Baixos"_s)
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
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nova Zelandia"_s)
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
			$of("seselwa (crioulo das Seychelles)"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Calendario isl\u00e1mico (civil, tabular)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ingl\u00e9s brit\u00e1nico"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"O Per\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("A Polinesia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pap\u00faa-Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Paquist\u00e1n"_s)
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
			$of("Saint Pierre et Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Illas Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Territorios Palestinos"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
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
			$of(u"numeraci\u00f3n grega en min\u00fascula"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("O Paraguai"_s)
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
			$of("niu"_s),
			$of("niueano"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Territorios afastados de Ocean\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezguio"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuval\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mundo"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u00c1frica"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Am\u00e9rica do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reuni\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Am\u00e9rica do Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Ocean\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Roman\u00eda"_s)
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
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Illas Salom\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00c1frica Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"O Sud\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Am\u00e9rica Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suecia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00c1frica Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameo"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u00c1frica Setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"estilo de quebra de li\u00f1a estrita"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u00c1frica Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Eslovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u00c1frica Meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Am\u00e9rica"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Eslovaquia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Serra Leoa"_s)
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
			$of(u"numeraci\u00f3n t\u00e1mil tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"O Sud\u00e1n do Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"San Tom\u00e9 e Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("O Salvador"_s)
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
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Trist\u00e1n da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("sistema estadounidense de unidades"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Am\u00e9rica Setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Illas Turks e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territorios Austrais Franceses"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taxiquist\u00e1n"_s)
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
			$of("TL"_s),
			$of("Timor Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Clasificar por consonante inicial hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenist\u00e1n"_s)
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
			$of(u"Turqu\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad e Tobago"_s)
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
			$of("asturiano"_s)
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
			$of(u"sistema de escritura desco\u00f1ecido"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucra\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aroman\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"suahili congol\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia Meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sueste Asi\u00e1tico"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Orde de clasificaci\u00f3n pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa Meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Illas Menores Distantes dos Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Naci\u00f3ns Unidas"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Os Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"orde de clasifcaci\u00f3n chinesa simplificada - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("O Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prusiano"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight de Marrocos central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Orde de clasificaci\u00f3n polo n\u00famero de trazos"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Cidade do Vaticano"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Vicente e As Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Illas Virxes Brit\u00e1nicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Illas Virxes Estadounidenses"_s)
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
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Orde de clasificaci\u00f3n tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Rexi\u00f3n de Micronesia"_s)
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
			$of(u"N\u00fameros financeiros"_s)
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
			$of("wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudoacentos"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray-waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudobidireccional"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesia"_s)
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
			$of("non escrito"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("walrpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("O Iemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"criterio de ordenaci\u00f3n est\u00e1ndar"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Sur\u00e1frica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"estilo de quebra de li\u00f1a flexible"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"devan\u00e1gari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"numeraci\u00f3n xeorxiana"_s)
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
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Rexi\u00f3n desco\u00f1ecida"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"sistema m\u00e9trico decimal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendario ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sesotho do norte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"d\u00edxitos de telugu"_s)
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
			$of(u"numeraci\u00f3n financeira chinesa simplificada"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"d\u00edxitos indoar\u00e1bigos ampliados"_s)
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
			$of(u"d\u00edxitos de ancho completo"_s)
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
			$of("lrc"_s),
			$of("luri setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurto"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"Calendario isl\u00e1mico (Arabia Saudita,"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"numeraci\u00f3n romana"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("iacuto"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"D\u00edxitos orixinais"_s)
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
			$of("ancho completo"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balin\u00e9s"_s)
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
			$of("es_ES"_s),
			$of(u"espa\u00f1ol de Espa\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"escoc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("siciliano"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhazo"_s)
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
			$of(u"amh\u00e1rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u00e9s"_s)
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
			$of("silabarios xaponeses"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assam\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurdo meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aimar\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("acerbaixano"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baxkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Criterio de ordenaci\u00f3n radical-trazo"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belaruso"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"b\u00falgaro"_s)
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
			$of(u"bret\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosn\u00edaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"d\u00edxitos laosianos"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"catal\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("checheno"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corso"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("checo"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslavo eclesi\u00e1stico"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvaxo"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"gal\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"numeraci\u00f3n et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dinamarqu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugu\u00e9s de Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alem\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"formato de moeda est\u00e1ndar"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"D\u00edxitos mongoles"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"espa\u00f1ol de Am\u00e9rica"_s)
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
			$of(u"calendario chin\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"numeraci\u00f3n grega"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"estilo de quebra de li\u00f1a normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ingl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Orde de clasificaci\u00f3n chinesa tradicional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"espa\u00f1ol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniano"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han con bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u00e9uscaro"_s)
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
			$of("alto sorbio"_s)
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
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"d\u00edxitos occidentais"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"fin\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fixiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("baluchi occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"canton\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fero\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"transliteraci\u00f3n do BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"franc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fris\u00f3n occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ga\u00e9lico escoc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galego"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaran\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"lingua desco\u00f1ecida"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Calendario Amete Alem et\u00edope"_s)
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
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("croata"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("crioulo haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"h\u00fangaro"_s)
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
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesio"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"d\u00edxitos tibetanos"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"yi sichuan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiano"_s)
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
			$of("sma"_s),
			$of("saami meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"xavan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madur\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("saami de Lule"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("saami de Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"siksik\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("saami skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
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
			$of("kazako"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groenland\u00e9s"_s)
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
			$of(u"caxemir\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdo"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"c\u00f3rnico"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"lat\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"d\u00edxitos malabares"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburgu\u00e9s"_s)
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
			$of("friulano"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("sistema imperial de unidades"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"let\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshal\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"criterio de ordenaci\u00f3n Unicode predeterminado"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maor\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedonio"_s)
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
			$of("malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malt\u00e9s"_s)
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
			$of("dsb"_s),
			$of("baixo sorbio"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"busca de car\u00e1cter xeral"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"noruegu\u00e9s bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"neerland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"noruegu\u00e9s nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"noruegu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("chewa"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("cabila"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitano"_s)
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
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"numeraci\u00f3n armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetio"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("cabardiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("crioulo mauriciano"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"panxab\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendario dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paxto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"criterio de ordenaci\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugu\u00e9s do Brasil"_s)
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
			$of("formato de moeda"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendario"_s)
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
			$of(u"sistema de 24 horas (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistema de 24 horas (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"d\u00edxitos birmanos"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
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
			$of(u"et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistema de 12 horas (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistema de 12 horas (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romanche"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("moeda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"roman\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"d\u00edxitos do odi\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"numeraci\u00f3n decimal chinesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruso"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ki\u00f1aruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("caboverdiano"_s)
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
			$of("en_AU"_s),
			$of(u"ingl\u00e9s australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"s\u00e1nscrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("saami setentrional"_s)
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
			$of("serbocroata"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovaco"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"d\u00edxitos indoar\u00e1bigos"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alban\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("formato de moeda contable"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"numeraci\u00f3n financeira chinesa tradicional"_s)
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
			$of("143"_s),
			$of("Asia Central"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("taxico"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigri\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugin\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"ingl\u00e9s canadense"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalo"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongano"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"numeraci\u00f3n xaponesa"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turco"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("comoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"t\u00e1rtaro"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa do Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa Setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa Occidental"_s)
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
			$of(u"com\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ucra\u00edno"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Calendario c\u00f3ptico"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urd\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("calmuco"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeko"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"baixo sax\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("calendario Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("ciclo horario (12 ou 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
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
			$of(u"val\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"sir\u00edaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"w\u00f3lof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight marroqu\u00ed est\u00e1ndar"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u00e1rabe est\u00e1ndar moderno"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Silabario aborixe canadiano unificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latino"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"numeraci\u00f3n chinesa simplificada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"numeraci\u00f3n chinesa tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"numeraci\u00f3n romana en min\u00fasculas"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
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
			$of("yi"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Numeros tradicionais"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"espa\u00f1ol de M\u00e9xico"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chin\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"estilo de quebra de li\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zul\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"orde de clasificaci\u00f3n da gu\u00eda telef\u00f3nica"_s)
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
			$of(u"numeraci\u00f3n financeira xaponesa"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ge\u2019ez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Criterio de ordenaci\u00f3n reformado"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chin\u00e9s simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi permio"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"chin\u00e9s tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"d\u00edxitos khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"d\u00edxitos do gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("varias linguas"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistema internacional de unidades"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribatiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"d\u00edxitos do t\u00e1mil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"carachaio-b\u00e1lcara"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("inguxo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("carelio"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"n\u00fameros"_s)
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

LocaleNames_gl::LocaleNames_gl() {
}

$Class* LocaleNames_gl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_gl, name, initialize, &_LocaleNames_gl_ClassInfo_, allocate$LocaleNames_gl);
	return class$;
}

$Class* LocaleNames_gl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun