#include <sun/util/resources/cldr/ext/LocaleNames_pt.h>

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

$MethodInfo _LocaleNames_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_pt::*)()>(&LocaleNames_pt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_pt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_pt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_pt_MethodInfo_
};

$Object* allocate$LocaleNames_pt($Class* clazz) {
	return $of($alloc(LocaleNames_pt));
}

void LocaleNames_pt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pt::getContents() {
	$var($String, metaValue_ae, u"av\u00e9stico"_s);
	$var($String, metaValue_ar, u"\u00e1rabe"_s);
	$var($String, metaValue_bn, "bengali"_s);
	$var($String, metaValue_bo, "tibetano"_s);
	$var($String, metaValue_el, "grego"_s);
	$var($String, metaValue_gu, "guzerate"_s);
	$var($String, metaValue_he, "hebraico"_s);
	$var($String, metaValue_hy, u"arm\u00eanio"_s);
	$var($String, metaValue_ja, u"japon\u00eas"_s);
	$var($String, metaValue_jv, u"javan\u00eas"_s);
	$var($String, metaValue_ka, "georgiano"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_ko, "coreano"_s);
	$var($String, metaValue_la, "latim"_s);
	$var($String, metaValue_ml, "malaiala"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, u"birman\u00eas"_s);
	$var($String, metaValue_or, u"ori\u00e1"_s);
	$var($String, metaValue_si, u"cingal\u00eas"_s);
	$var($String, metaValue_su, u"sundan\u00eas"_s);
	$var($String, metaValue_ta, u"t\u00e2mil"_s);
	$var($String, metaValue_te, u"t\u00e9lugo"_s);
	$var($String, metaValue_th, u"tailand\u00eas"_s);
	$var($String, metaValue_tl, "tagalo"_s);
	$var($String, metaValue_ban, u"balin\u00eas"_s);
	$var($String, metaValue_bax, "bamum"_s);
	$var($String, metaValue_bug, u"bugin\u00eas"_s);
	$var($String, metaValue_got, u"g\u00f3tico"_s);
	$var($String, metaValue_nqo, u"n\u2019ko"_s);
	$var($String, metaValue_phn, u"fen\u00edcio"_s);
	$var($String, metaValue_ssy, "saho"_s);
	$var($String, metaValue_syr, u"sir\u00edaco"_s);
	$var($String, metaValue_uga, u"ugar\u00edtico"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f6lsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"og\u00e2mico"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("zsym"_s)
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
			$of("Tagb"_s),
			$of("tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialeto gniva/njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"eg\u00edpcio arcaico"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajastani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa"_s)
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
			$of(u"Ilha de Ascens\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"t\u00e9tum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirados \u00c1rabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamengo"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afeganist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00edgua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Calend\u00e1rio Et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguila"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Fuso hor\u00e1rio"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00eania"_s)
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
			$of(u"Ant\u00e1rtida"_s)
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
			$of("Samoa Americana"_s)
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
			$of("AX"_s),
			$of("Ilhas Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaij\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"arm\u00eanio oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u00f3snia e Herzegovina"_s)
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
			$of(u"B\u00e9lgica"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"alto alem\u00e3o m\u00e9dio"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burquina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulg\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Barein"_s)
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
			$of(u"S\u00e3o Bartolomeu"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudas"_s)
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
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Pa\u00edses Baixos Caribenhos"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("lusoga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Ilha Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Bielorr\u00fassia"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("visible speech"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Calend\u00e1rio Persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Algarismos hebraicos"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Ilhas Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazandarani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Rep\u00fablica Centro-Africana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Rep\u00fablica do Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Su\u00ed\u00e7a"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Costa do Marfim"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Ilhas Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kthi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Camar\u00f5es"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Col\u00f4mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Ilha de Clipperton"_s)
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
			$of("Ilha Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Chipre"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tch\u00e9quia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemanha"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"alem\u00e3o arcaico alto"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ach\u00e9m"_s)
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
			$of(u"Algarismos devan\u00e1gari"_s)
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
			$of("Brah"_s),
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Algarismos arm\u00eanios min\u00fasculos"_s)
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
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zunhi"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigr\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Arg\u00e9lia"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasin\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Meia largura"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"p\u00e1lavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta e Melilla"_s)
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
			$of("Equador"_s)
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
			$of(u"Est\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egito"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Saara Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauano"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"jarg\u00e3o Chinook"_s)
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
			$of("cheroqui"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espanha"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Eti\u00f3pia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Uni\u00e3o Europeia"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamite"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Calend\u00e1rio Gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("zona do euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheiene"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Algarismos guzerate"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indo"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigue"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finl\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micron\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Variante de localidade"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Ilhas Faro\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Fran\u00e7a"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("toquelauano"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Calend\u00e1rio Nacional Indiano"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("grego arcaico"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"v\u00f3tico"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Reino Unido"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pidgin nigeriano"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Ge\u00f3rgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guiana Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tai Le"_s)
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
			$of(u"Groenl\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"ingl\u00eas m\u00e9dio"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"G\u00e2mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Guin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Guin\u00e9 Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u00e9cia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ilhas Ge\u00f3rgia do Sul e Sandwich do Sul"_s)
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
			$of(u"Guin\u00e9-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlinguite"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("novo tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("curdo central"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sem conte\u00fado lingu\u00edstico"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong, RAE da China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ilhas Heard e McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Cro\u00e1cia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"alem\u00e3o (Su\u00ed\u00e7a)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Calend\u00e1rio Isl\u00e2mico (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungria"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamaxeque"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Ilhas Can\u00e1rias"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("min nan"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("persa arcaico"_s)
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
			$of("%%NDYUKA"_s),
			$of("dialeto ndyuka"_s)
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
			$of("Ilha de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdndia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Regras europeias de ordena\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territ\u00f3rio Brit\u00e2nico do Oceano \u00cdndico"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraque"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Isl\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"nota\u00e7\u00e3o matem\u00e1tica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Algarismos tailandeses"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("computador"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Algarismos bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Calend\u00e1rio Isl\u00e2mico"_s)
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
			$of(u"Jord\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"franc\u00eas antigo de 1606"_s)
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
			$of(u"tongan\u00eas de Nyasa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Algarismos canareses"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"alto alem\u00e3o (Su\u00ed\u00e7a)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Ordem de classifica\u00e7\u00e3o fon\u00e9tica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Calend\u00e1rio Budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Qu\u00eania"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Am\u00e9rica Latina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Quirguist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Quiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"S\u00e3o Crist\u00f3v\u00e3o e N\u00e9vis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("herdado"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Coreia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Coreia do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"fon\u00e9tico pollard"_s)
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
			$of("Ilhas Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Cazaquist\u00e3o"_s)
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
			$of(u"L\u00edbano"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa L\u00facia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"cir\u00edlico eslavo eclesi\u00e1stico"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich\u02bcin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"baixo alem\u00e3o"_s)
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
			$of("acadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("copta"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("pahlavi antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litu\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Let\u00f4nia"_s)
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
			$of("Marrocos"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f4naco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mold\u00e1via"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"S\u00e3o Martinho"_s)
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
			$of("Ilhas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ale\u00fate"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"D\u00edgitos vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maced\u00f4nia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mianmar (Birm\u00e2nia)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f3lia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau, RAE da China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ilhas Marianas do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u00e2nia"_s)
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
			$of(u"Translitera\u00e7\u00e3o UN GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u00edcio"_s)
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
			$of("Malaui"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u00e9xico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Calend\u00e1rio Japon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Mal\u00e1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mo\u00e7ambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("phli"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u00c1frica Subsaariana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Calend\u00e1rio Hebraico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Ordem do dicion\u00e1rio"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caled\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"romaniza\u00e7\u00e3o Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("ortografia revisada e unificada"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00edger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ilha Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("phlp"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nicar\u00e1gua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong"_s)
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
			$of("tsimshiano"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nova Zel\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"mero\u00edtico cursivo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"Conven\u00e7\u00e3o Ortogr\u00e1fica Luso-Brasileira de 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"mero\u00edtico"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("turco da Crimeia"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ingl\u00eas arcaico"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"crioulo franc\u00eas seichelense"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("persa antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Calend\u00e1rio Civil Isl\u00e2mico"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kashubian"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polin\u00e9sia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-Nova Guin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Paquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pol\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"S\u00e3o Pedro e Miquel\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Ilhas Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Territ\u00f3rios palestinos"_s)
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
			$of(u"Algarismos gregos min\u00fasculos"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
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
			$of("Catar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"ingl\u00eas padr\u00e3o escoc\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueano"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oceania Remota"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgui"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"fon\u00e9tica do Alfabeto Fon\u00e9tico Ur\u00e1lico"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvaluano"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tavt"_s)
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
			$of(u"Reuni\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Am\u00e9rica do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00eania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"S\u00e9rvia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u00fassia"_s)
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
			$of("maniqueano"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Ar\u00e1bia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpeiano"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandaico"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Ilhas Salom\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00c1frica Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seicheles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Am\u00e9rica Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Su\u00e9cia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00c1frica Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramaico"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u00c1frica do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Quebra de linha com estilo estrito"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u00c1frica Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslov\u00eania"_s)
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
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Am\u00e9ricas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Eslov\u00e1quia"_s)
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
			$of(u"Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Algarismos t\u00e2mil tradicionais"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sud\u00e3o do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 e Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u00e1rabe n\u00e9gede"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Essuat\u00edni"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arauaqui"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("yapese"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Trist\u00e3o da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Sistema de medi\u00e7\u00e3o americano"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Am\u00e9rica Setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ilhas Turcas e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chade"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territ\u00f3rios Franceses do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tail\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadjiquist\u00e3o"_s)
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
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Pesquisar por consonante inicial hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turcomenist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tun\u00edsia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turquia"_s)
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
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturiano"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("escrita desconhecida"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucr\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromeno"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u00c1sia Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuviniano"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"sua\u00edli do Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u00c1sia Meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sudeste Asi\u00e1tico"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"hac\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Ordem Pin-yin"_s)
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
			$of("Ilhas Menores Distantes dos EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Na\u00e7\u00f5es Unidas"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havaiano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"acad\u00eamico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Ordem do Chin\u00eas Simplificado - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prussiano"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbequist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight do Atlas Central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Ordem dos Tra\u00e7os"_s)
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
			$of("pro"_s),
			$of(u"proven\u00e7al arcaico"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"S\u00e3o Vicente e Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Ilhas Virgens Brit\u00e2nicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ilhas Virgens Americanas"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vietn\u00e3"_s)
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
			$of(u"n\u00f3rdico arcaico"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austral\u00e1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"arm\u00eanio ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Ordem Tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Regi\u00e3o da Micron\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("nguemba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lacota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Numerais financeiros"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"romaniza\u00e7\u00e3o hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("Ordem anterior, para compatibilidade"_s)
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
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudossotaques"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudobidirecional"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polin\u00e9sia"_s)
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
			$of(u"\u00e1grafo"_s)
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
			$of("Batk"_s),
			$of("bataque"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"s\u00edmbolos bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"I\u00eamen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Ordem padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fangue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("resiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("signwriting"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u00c1frica do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Quebra de linha com estilo solto"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"devan\u00e1gari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Algarismos georgianos"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Z\u00e2mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"romaniza\u00e7\u00e3o Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimb\u00e1bue"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Regi\u00e3o desconhecida"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"r\u00fanico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Sistema m\u00e9trico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Calend\u00e1rio ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("soto setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Algarismos telugos"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("crioulo da Louisiana"_s)
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
			$of("Algarismos financeiros chineses simplificados"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Algarismos indo-ar\u00e1bicos estendidos"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dacota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Algarismos em extens\u00e3o total"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hitita"_s)
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
			$of(u"hier\u00f3glifos maias"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luri setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"c\u00f3ptico"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newari cl\u00e1ssico"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurte"_s)
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
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Algarismos romanos"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("aramaico samaritano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("scouse"_s)
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
			$of("tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judaico-persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Num\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"D\u00edgitos nativos"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuqui"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("biscainho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Largura inteira"_s)
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
			$of("filipino"_s)
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
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"bal\u00fachi"_s)
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
			$of("bax"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of(u"Formul\u00e1rio Ortogr\u00e1fico de 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judaico-ar\u00e1bico"_s)
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
			$of("siciliano"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abc\u00e1zio"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afric\u00e2ner"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"ghomala\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"am\u00e1rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialeto stolvizza/solbica"_s)
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
			$of(u"silab\u00e1rios japoneses"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assam\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"av\u00e1rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("curdo meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aimar\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaijano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("dialeto oseacco/osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Ordem por Radical-Tra\u00e7os"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielorrusso"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"b\u00falgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislam\u00e1"_s)
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
			$of(u"bret\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"b\u00f3snio"_s)
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
			$of("Algarismos laosianos"_s)
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
			$of("selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"catal\u00e3o"_s)
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
			$of("%%REVISED"_s),
			$of("ortografia revisada"_s)
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
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tcheco"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslavo eclesi\u00e1stico"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("tchuvache"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"gal\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Algarismos etiopianos"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dinamarqu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alem\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Formato de moeda padr\u00e3o"_s)
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
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irland\u00eas arcaico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Algarismos mong\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Calend\u00e1rio Chin\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("lisu"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Algarismos gregos"_s)
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
			$of("Quebra de linha com estilo normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"mold\u00e1vio"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ingl\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Ordem do Chin\u00eas Tradicional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanhol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniano"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basco"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritano"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"alto sor\u00e1bio"_s)
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
			$of("Hano"_s),
			$of("hanunoo"_s)
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
			$of("Algarismos ocidentais"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of("azeri sul"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u00e1rabe chadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fijiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fom"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"bal\u00fachi ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"canton\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fero\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"Translitera\u00e7\u00e3o BGN EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"franc\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fr\u00edsio ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ga\u00e9lico escoc\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galego"_s)
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
			$of("idioma desconhecido"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Calend\u00e1rio Amete Alem da Eti\u00f3pia"_s)
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
			$of(u"hau\u00e7\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"h\u00edndi"_s)
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
			$of("croata"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiano"_s)
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
			$of("frc"_s),
			$of(u"franc\u00eas cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"fon\u00e9tica do Alfabeto Fon\u00e9tico Internacional"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"interl\u00edngua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indon\u00e9sio"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Algarismos tibetanos"_s)
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
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"franc\u00eas m\u00e9dio"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of(u"Acordo Ortogr\u00e1fico da L\u00edngua Portuguesa de 1990"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaque"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"franc\u00eas arcaico"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"fris\u00e3o oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"fr\u00edsio setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u00eas"_s)
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
			$of("%%HOGNORSK"_s),
			$of("alto noruego"_s)
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
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shaviano"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madur\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("sami de Lule"_s)
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
			$of(u"lap\u00e3o de Inari"_s)
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
			$of("wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("sami de Skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandinga"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"congol\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("quicuio"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("massai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("cuanhama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("cazaque"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groenland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("canarim"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"can\u00fari"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("caxemira"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("curdo"_s)
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
			$of("quirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"soninqu\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Algarismos malaialos"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburgu\u00eas"_s)
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
			$of("laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Sistema de medi\u00e7\u00e3o imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-catanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"let\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshal\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Ordem padr\u00e3o do Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maced\u00f4nio"_s)
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
			$of("marati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malt\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("mocsa"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"baixo sor\u00e1bio"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("armi"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Pesquisa de uso geral"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"bokm\u00e5l noruegu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele do norte"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepal\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("dongo"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"nynorsk noruegu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"noruegu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele do sul"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("kara-kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nianja"_s)
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
			$of(u"polit\u00f4nico"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occit\u00e2nico"_s)
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
			$of(u"Algarismos arm\u00eanios"_s)
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
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osseto"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"surinam\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serere"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("dialeto lipovaz de Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"p\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"holand\u00eas m\u00e9dio"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Calend\u00e1rio Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"irland\u00eas m\u00e9dio"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Ordena\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("macua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Formato de moeda"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Calend\u00e1rio"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Sistema de 24 horas (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Sistema de 24 horas (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Algarismos mianmarenses"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"qu\u00edchua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteco"_s)
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
			$of("maconde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"eti\u00f3pico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Sistema de 12 horas (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Sistema de 12 horas (0\u201311)"_s)
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
			$of("Moeda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Algarismos ori\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Algarismos decimais chineses"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russo"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("quiniaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"s\u00edmbolos blis"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("crioulo cabo-verdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("miquemaque"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"s\u00e2nscrito"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("ortografia unificada"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami setentrional"_s)
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
			$of("servo-croata"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sum\u00e9rio"_s)
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
			$of("xona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Algarismos indo-ar\u00e1bicos"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alban\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"s\u00e9rvio"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"su\u00e1zi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Formato de moeda para contabilidade"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("soto do sul"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialeto natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"sua\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Algarismos financeiros chineses tradicionais"_s)
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
			$of(u"\u00c1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriato"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u00c1sia Central"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u00c1sia Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjique"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigr\u00ednia"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcomeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongan\u00eas"_s)
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
			$of("Algarismos japoneses"_s)
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
			$of("Cakm"_s),
			$of("cakm"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"t\u00e1rtaro"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"di\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("taitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialeto san giorgio/bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa Oriental"_s)
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
			$of("Europa Ocidental"_s)
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
			$of("Ital"_s),
			$of(u"it\u00e1lico antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("comum"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Calend\u00e1rio Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("ortografia resiana padronizada"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeque"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"ortografia alem\u00e3 de 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"baixo sax\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("syloti nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Calend\u00e1rio da Rep\u00fablica da China"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"khotan\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Ciclo de hor\u00e1rio (12 vs. 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("ortografia taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuque"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"sir\u00edaco cl\u00e1ssico"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmania"_s)
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
			$of(u"val\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
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
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"l\u00eddio"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"sum\u00e9rio-acadiano cuneiforme"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("uolofe"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazirte marroqino padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u00e1rabe moderno"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"escrita sil\u00e1bica unificada dos abor\u00edgenes canadenses"_s)
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
			$of("manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latim fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaia"_s)
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
			$of(u"latim ga\u00e9lico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Algarismos chineses simplificados"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Algarismos chineses tradicionais"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Algarismos romanos min\u00fasculos"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("dialeto pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"l\u00edcio"_s)
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
			$of("moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("moicano"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"franc\u00eas da idade moderna"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"i\u00eddiche"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"iorub\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Numerais tradicionais"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"sir\u00edaco ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turco otomano"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"sir\u00edaco estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("cariano"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chin\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"p\u00e9rmico antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Estilo de quebra de linha"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Ordem de Lista Telef\u00f4nica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"monot\u00f4nico"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("quimbundo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Algarismos financeiros japoneses"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"sir\u00edaco oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Ordem reformulada"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"dem\u00f3tico eg\u00edpcio"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hier\u00e1tico eg\u00edpcio"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"hier\u00f3glifos eg\u00edpcios"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("khutsuri georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chin\u00eas simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"h\u00fangaro antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("concani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ortografia alem\u00e3 tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraean"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"chin\u00eas tradicional"_s)
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
			$of("Algarismos khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valenciano"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("cipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("alfabeto latino turco unificado"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Algarismos gurmuqui"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"m\u00faltiplos idiomas"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Sistema de medi\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagol\u00edtico"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbert\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("ortografia comum"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("caribe"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Algarismos t\u00e2mil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("inguche"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"car\u00e9lio"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efique"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"N\u00fameros"_s)
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

LocaleNames_pt::LocaleNames_pt() {
}

$Class* LocaleNames_pt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pt, name, initialize, &_LocaleNames_pt_ClassInfo_, allocate$LocaleNames_pt);
	return class$;
}

$Class* LocaleNames_pt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun