#include <sun/util/resources/cldr/ext/LocaleNames_ca.h>

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

$MethodInfo _LocaleNames_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ca::*)()>(&LocaleNames_ca::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ca",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ca_MethodInfo_
};

$Object* allocate$LocaleNames_ca($Class* clazz) {
	return $of($alloc(LocaleNames_ca));
}

void LocaleNames_ca::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ca::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, u"av\u00e8stic"_s);
	$var($String, metaValue_ar, u"\u00e0rab"_s);
	$var($String, metaValue_bn, u"bengal\u00ed"_s);
	$var($String, metaValue_bo, u"tibet\u00e0"_s);
	$var($String, metaValue_el, "grec"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, "hebreu"_s);
	$var($String, metaValue_hy, "armeni"_s);
	$var($String, metaValue_ja, u"japon\u00e8s"_s);
	$var($String, metaValue_jv, u"javan\u00e8s"_s);
	$var($String, metaValue_ka, u"georgi\u00e0"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, u"core\u00e0"_s);
	$var($String, metaValue_la, u"llat\u00ed"_s);
	$var($String, metaValue_ml, u"malai\u00e0lam"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, u"birm\u00e0"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_si, u"singal\u00e8s"_s);
	$var($String, metaValue_ta, u"t\u00e0mil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_ban, u"balin\u00e8s"_s);
	$var($String, metaValue_bax, "bamum"_s);
	$var($String, metaValue_ccp, "chakma"_s);
	$var($String, metaValue_chr, "cherokee"_s);
	$var($String, metaValue_cop, "copte"_s);
	$var($String, metaValue_got, u"g\u00f2tic"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_men, "mende"_s);
	$var($String, metaValue_mni, u"manipur\u00ed"_s);
	$var($String, metaValue_nqo, u"n\u2019Ko"_s);
	$var($String, metaValue_osa, "osage"_s);
	$var($String, metaValue_pal, "pahlavi"_s);
	$var($String, metaValue_peo, "persa antic"_s);
	$var($String, metaValue_phn, "fenici"_s);
	$var($String, metaValue_sat, "santali"_s);
	$var($String, metaValue_ssy, "saho"_s);
	$var($String, metaValue_syr, u"sir\u00edac"_s);
	$var($String, metaValue_uga, u"ugar\u00edtic"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($String, metaValue_zbl, u"s\u00edmbols Bliss"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f6lsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirand\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"s\u00edmbols"_s)
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
			$of("type.nu.lanatham"_s),
			$of(u"d\u00edgits tai tham tham"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"emili\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialecte de Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"mingreli\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("egipci antic"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phagspa"_s)
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
			$of("ter"_s),
			$of("terena"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Illa de l\u2019Ascensi\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotong\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"t\u00e8tum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirats \u00c0rabs Units"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamenc"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"calendari et\u00edop"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"zona hor\u00e0ria"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e0nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00e8nia"_s)
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
			$of(u"Ant\u00e0rtida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"parthi\u00e0 inscripcional"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Nord-americana"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00c0ustria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austr\u00e0lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"angl\u00e8s americ\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Illes \u00c5land"_s)
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
			$of("armeni oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u00f2snia i Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"cebu\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"k\u00famik"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u00e8lgica"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"alt alemany mitj\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulg\u00e0ria"_s)
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
			$of("Bermudes"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"mordovi\u00e0 erza"_s)
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
			$of(u"Carib Neerland\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahames"_s)
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
			$of("Bouvet"_s)
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
			$of("Visp"_s),
			$of("llenguatge visible"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendari persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("nombres hebreus"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canad\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Illes Cocos"_s)
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
			$of(u"Rep\u00fablica Centreafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Su\u00efssa"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Illes Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Xile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Camerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Col\u00f2mbia"_s)
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
			$of("Cap Verd"_s)
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
			$of("Xipre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"d\u00edgits balinesos"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tx\u00e8quia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("flamenc occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemanya"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("alt alemany antic"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("atjeh"_s)
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
			$of("gom"_s),
			$of("concani de Goa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"d\u00edgits devanagaris"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
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
			$of(u"nombres armenis en min\u00fascula"_s)
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
			$of(metaValue_mni)
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
			$of("Takr"_s),
			$of("takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alg\u00e8ria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("amplada mitjana"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta i Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("txibtxa"_s)
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
			$of("papiament"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Est\u00f2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"S\u00e0hara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("txagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palau\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("pidgin chinook"_s)
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
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Eti\u00f2pia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Uni\u00f3 Europea"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamita"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"calendari gregori\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("zona euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("xeiene"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"d\u00edgits gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"escriptura de la vall de l\u2019Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adigu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finl\u00e0ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Illes Malvines"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micron\u00e8sia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("variant local"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Illes F\u00e8roe"_s)
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
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("picard"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelau\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"calendari hind\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"romany\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("grec antic"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("tsakhur"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"v\u00f2tic"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Regne Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"pidgin de Nig\u00e8ria"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Ge\u00f2rgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guaiana Francesa"_s)
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
			$of(u"Groenl\u00e0ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"angl\u00e8s mitj\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"G\u00e0mbia"_s)
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
			$of("Guinea Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u00e8cia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Illes Ge\u00f2rgia del Sud i Sandwich del Sud"_s)
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
			$of(u"alemany pennsilvani\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingoni\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("nou tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurd central"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sense contingut ling\u00fc\u00edstic"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"j\u00fcrchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("talix"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alemany austr\u00edac"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong (RAE Xina)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Illa Heard i Illes McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondures"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Cro\u00e0cia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"alemany su\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"calendari isl\u00e0mic (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Hait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongria"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("amazic"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Illes Can\u00e0ries"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"xin\u00e8s min del sud"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e8sia"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"d\u00edgits kayah"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"napolit\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("dialecte ndyuka"_s)
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
			$of("Tang"_s),
			$of("tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("nabateu"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Illa de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdndia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"normes europees d\u2019ordenaci\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territori Brit\u00e0nic de l\u2019Oce\u00e0 \u00cdndic"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Isl\u00e0ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e0lia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"notaci\u00f3 matem\u00e0tica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"d\u00edgits tai"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"way\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("ordinador"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"d\u00edgits bengalins"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"alemany palat\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"calendari isl\u00e0mic"_s)
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
			$of(u"Jord\u00e0nia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"franc\u00e8s mitj\u00e0 tard\u00e0 fins el 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"gus\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"d\u00edgits kannada"_s)
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
			$of(u"alemany est\u00e0ndard su\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Ordenaci\u00f3 fon\u00e8tica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendari budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Am\u00e8rica Llatina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirguizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodja"_s)
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
			$of("Saint Christopher i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("heretat"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"franc\u00e8s canadenc"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("pollard miao"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"franc\u00e8s su\u00eds"_s)
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
			$of("Illes Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"cir\u00edl\u00b7lic"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"L\u00edban"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"cir\u00edl\u00b7lic de l\u2019antic eslau eclesi\u00e0stic"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich\u2019in"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("luna 1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("baix alemany"_s)
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
			$of("accadi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e8ria"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litu\u00e0nia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Let\u00f2nia"_s)
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
			$of(u"L\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"judeocastell\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of("alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("laukika"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("panjabi occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("mahajani"_s)
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
			$of("Marroc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f2naco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mold\u00e0via"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"n\u00fc shu"_s)
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
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Illes Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleuta"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"tailand\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"d\u00edgits vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maced\u00f2nia del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Myanmar (Birm\u00e0nia)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f2lia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau (RAE Xina)"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"alban\u00e8s geg"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Illes Mariannes del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u00e0nia"_s)
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
			$of(u"sistema de transliteraci\u00f3 UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maurici"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altaic meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u00e8xic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"calendari japon\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Mal\u00e0isia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mo\u00e7ambic"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("pahlavi inscripcional"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u00c0frica subsahariana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("calendari hebreu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"ordenaci\u00f3 de diccionari"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caled\u00f2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"romanitzaci\u00f3 Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("ortografia revisada unificada"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00edger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u00e8ria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("psalter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Pa\u00efsos Baixos"_s)
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
			$of(u"tsimshi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"cursiva mero\u00edtica"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"roman\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"mero\u00edtic"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"t\u00e0tar de Crimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"angl\u00e8s antic"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"ortografia russa 1708\u20131917"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"franc\u00e8s crioll de les Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"calendari civil isl\u00e0mic"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("caixubi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"angl\u00e8s brit\u00e0nic"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Per\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("tat meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polin\u00e8sia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pol\u00f2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre-et-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Illes Pitcairn"_s)
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
			$of("Territoris palestins"_s)
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
			$of(u"nombres grecs en min\u00fascula"_s)
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
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"angl\u00e8s est\u00e0ndard d\u2019Esc\u00f2cia"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"crioll angl\u00e8s de Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"piemont\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niue\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Territoris allunyats d\u2019Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("extremeny"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lesgui\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"sistema fon\u00e8tic UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvalu\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"M\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u00c0frica"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Am\u00e8rica del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Illa de la Reuni\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Am\u00e8rica del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"p\u00f2ntic"_s)
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
			$of("%%SURSILV"_s),
			$of(u"sobreselv\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"S\u00e8rbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mro"_s)
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
			$of("type.nu.talu"_s),
			$of(u"d\u00edgits tai lue nous"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("maniqueu"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharosthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Ar\u00e0bia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ponape\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandaic"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Illes Salom\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00c0frica occidental"_s)
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
			$of(u"Am\u00e8rica Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Su\u00e8cia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00c0frica oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameu"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u00c0frica septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"salt de l\u00ednia estricte"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u00c0frica central"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslov\u00e8nia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u00c0frica meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard i Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Am\u00e8rica"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Eslov\u00e0quia"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("woleai"_s)
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
			$of(u"Som\u00e0lia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungu"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("nombres tamils tradicionals"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudan del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 i Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u00e0rab najdi"_s)
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
			$of("eSwatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arauac"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"\u00e0rab egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"yape\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("pare"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"sistema d\u2019unitats dels EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Am\u00e8rica septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Illes Turks i Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Txad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territoris Australs Francesos"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("llengua de signes americana"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tail\u00e0ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("cerca per consonant inicial del hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
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
			$of("Trinitat i Tobago"_s)
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
			$of(u"asturi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e0nia"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("bissio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("escriptura desconeguda"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("devangari"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucra\u00efna"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"l\u00edgur"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aroman\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u00c0sia oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvini\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suahili del Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u00c0sia meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u00c0sia sud-oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"xin\u00e8s hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("ordre pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Illes Perif\u00e8riques Menors dels EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Nacions Unides"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estats Units"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hawai\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"acad\u00e8mica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ordre del xin\u00e8s simplificat - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prussi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("amazic del Marroc central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"ordre dels tra\u00e7os"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ciutat del Vatic\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"proven\u00e7al antic"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent i les Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Vene\u00e7uela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Illes Verges Brit\u00e0niques"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Illes Verges Nord-americanes"_s)
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
			$of("rwo"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"n\u00f2rdic antic"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austral\u00e0sia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("armeni occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u00e8sia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("ordre tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Regi\u00f3 de la Micron\u00e8sia"_s)
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
			$of("nov"_s),
			$of("novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Numerals financers"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"romanitzaci\u00f3 Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ordenaci\u00f3 anterior, per a compatibilitat"_s)
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
			$of("Bass"_s),
			$of("bassa vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"d\u00edgits meitei mayek"_s)
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
			$of("pseudoaccents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudobidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polin\u00e8sia"_s)
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
			$of("sense escriptura"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(metaValue_sat)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Iemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ordenaci\u00f3 est\u00e0ndard"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("llombard"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"resi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"sotaselv\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("escriptura de signes"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"d\u00edgits txams"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Rep\u00fablica de Sud-\u00e0frica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"d\u00edgits sudanesos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"salt de l\u00ednia flexible"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("nombres georgians"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Z\u00e0mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"romanitzaci\u00f3 Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimb\u00e0bue"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"regi\u00f3 desconeguda"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"r\u00fanic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"sistema m\u00e8tric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendari ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"d\u00edgits telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"crioll franc\u00e8s de Louisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("hindi de Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("nombres financers xinesos simplificats"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"h\u00edligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"xifres indoar\u00e0bigues ampliades"_s)
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
			$of(u"d\u00edgits d\u2019amplada completa"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hitita"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"dargu\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"jerogl\u00edfics maies"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luri septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newari cl\u00e0ssic"_s)
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
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("nombres romans"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("iacut"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"arameu samarit\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"alban\u00e8s cauc\u00e0sic"_s)
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
			$of(metaValue_sat)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judeopersa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Num\u00e8ric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"D\u00edgits natius"_s)
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
			$of("%%ALUKU"_s),
			$of("dialecte aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"basc bisca\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("amplada completa"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luisenyo"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("nyamwesi"_s)
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
			$of(u"filip\u00ed"_s)
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
			$of("balutxi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavi"_s)
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
			$of("bar"_s),
			$of(u"bavar\u00e8s"_s)
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
			$of("jrb"_s),
			$of(u"judeo\u00e0rab"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("espanyol europeu"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzema"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"escoc\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicili\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u00e0far"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhaz"_s)
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
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u00e0kan"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amh\u00e0ric"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialecte de Stolvizza/Solbica"_s)
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
			$of(u"sil\u00b7labaris japonesos"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assam\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"sasser\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("lineal A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u00e0var"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("lineal B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurd meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbaidjan\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khoja"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"dialecte d\u2019Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baixkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"ordenaci\u00f3 per quantitat de tra\u00e7os radicals"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"belar\u00fas"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"b\u00falgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"d\u00edgits javanesos"_s)
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
			$of(u"bret\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosni\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("bhaiksuki"_s)
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
			$of(u"d\u00edgits lao"_s)
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
			$of(u"catal\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("songhai oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"txetx\u00e8"_s)
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
			$of("cors"_s)
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
			$of("txec"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslau eclesi\u00e0stic"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("txuvaix"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"gal\u00b7l\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"nombres eti\u00f2pics"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dan\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugu\u00e8s de Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("alemany"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"format de moneda est\u00e0ndard"_s)
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
			$of(u"bugin\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irland\u00e8s antic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"d\u00edgits mongols"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"espanyol hispanoameric\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"calendari xin\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"xin\u00e8s cl\u00e0ssic"_s)
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
			$of("nombres grecs"_s)
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
			$of(u"salt de l\u00ednia normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angl\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("laz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"ordre del xin\u00e8s tradicional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estoni\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han amb bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basc"_s)
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
			$of(u"samarit\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("taixelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"alt s\u00f2rab"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("ulster"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("xan"_s)
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
			$of("simplificat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"d\u00edgits ar\u00e0bics"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("ful"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u00e0rab txadi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"xin\u00e8s xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"fin\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fiji\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("balutxi occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"canton\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fero\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"sistema de transliteraci\u00f3 BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"franc\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fris\u00f3 occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irland\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ga\u00e8lic escoc\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallec"_s)
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
			$of("idioma desconegut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"calendari et\u00edop amete-alem"_s)
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
			$of("haussa"_s)
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
			$of("bicol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("edo"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("croat"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"crioll d\u2019Hait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"hongar\u00e8s"_s)
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
			$of(u"franc\u00e8s cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"alfabet fon\u00e8tic internacional"_s)
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
			$of("indonesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"d\u00edgits tibetans"_s)
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
			$of("yi sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"franc\u00e8s mitj\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("interomanx"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"franc\u00e8s antic"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"fris\u00f3 oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"fris\u00f3 septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"itali\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"h\u00f8gnorsk"_s)
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
			$of("Sarb"_s),
			$of(u"sud-ar\u00e0bic antic"_s)
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
			$of("type.nu.lepc"_s),
			$of(u"d\u00edgits lepcha"_s)
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
			$of(u"shavi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madur\u00e8s"_s)
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
			$of(u"sami d\u2019Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("blackfoot"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makassar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"xin\u00e8s wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("sami skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandinga"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuiu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("massai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groenland\u00e8s"_s)
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
			$of("caixmiri"_s)
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
			$of("kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"c\u00f2rnic"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgu\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgu\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"d\u00edgits malai\u00e0lam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongo-rongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburgu\u00e8s"_s)
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
			$of(u"fri\u00fcl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laosi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"sistema imperial d\u2019unitats"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"d\u00edgits tai tham hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litu\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"let\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogdi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaix"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshall\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ordenaci\u00f3 Unicode predeterminada"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedoni"_s)
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
			$of("malai"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malt\u00e8s"_s)
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
			$of(u"mordovi\u00e0 moksa"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"baix s\u00f2rab"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("arameu imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauru\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"cerca de prop\u00f2sit general"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"noruec bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepal\u00e8s"_s)
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
			$of(u"neerland\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("noruec nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("noruec"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
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
			$of("katxin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("cabilenc"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"polit\u00f2nic"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occit\u00e0"_s)
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
			$of(metaValue_men)
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
			$of("nombres armenis"_s)
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
			$of("Modi"_s),
			$of("modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osseta"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"romanitzaci\u00f3 ALA/LC, edici\u00f3 de 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabard\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"maurici\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("douala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"dialecte Lipovaz del resi\u00e0"_s)
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
			$of(u"polon\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"neerland\u00e8s mitj\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"d\u00edgits saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendari dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"baix engiadin\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paixtu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugu\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ga\u00e8lic irland\u00e8s mitj\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ordenaci\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugu\u00e8s del Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-metto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("format de moneda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"d\u00edgits n\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendari"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"sistema de 24 hores (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistema de 24 hores (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"d\u00edgits de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"qu\u00edtxua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteca"_s)
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
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"v\u00e8dic"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"eti\u00f2pic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("jyupting"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistema de 12 hores (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistema de 12 hores (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retorom\u00e0nic"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("moneda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"roman\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"d\u00edgits oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("nombres decimals xinesos"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rus"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ruand\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"crioll capverdi\u00e0"_s)
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
			$of(u"angl\u00e8s australi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"taquigrafia Duploy\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"s\u00e0nscrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("ortografia unificada"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sard"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"sus\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami septentrional"_s)
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
			$of("serbocroat"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeri"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovac"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"eslov\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samo\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"xifres indoar\u00e0bigues"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alban\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbi"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("format de moneda comptable"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sondan\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialecte de Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("suec"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("nombres financers xinesos tradicionals"_s)
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
			$of(u"\u00c0sia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u00c0sia central"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u00c0sia occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugui"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"angl\u00e8s canadenc"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcman"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagal"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongal\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("diola"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("nombres japonesos"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turc"_s)
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
			$of(u"comori\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"t\u00e0tar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("jula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahiti\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialecte de San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa occidental"_s)
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
			$of("cursiva antiga"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of(u"kaing\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"com\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ucra\u00efn\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zeland\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("calendari copte"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urd\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("ortografia resiana estandarditzada"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("calmuc"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("ortografia alemanya de 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"baix sax\u00f3"_s)
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
			$of("Wara"_s),
			$of("varang kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"calendari de la Rep\u00fablica de Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"khotan\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("sistema horari (12 h o 24 h)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("ortografia taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"sir\u00edac cl\u00e0ssic"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"k\u2019iche\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("newar"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"val\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gaga\u00fas"_s)
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
			$of(u"xin\u00e8s gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidi"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"cune\u00efforme sumeri-accadi"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"w\u00f2lof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"amazic est\u00e0ndard marroqu\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u00e0rab est\u00e0ndard modern"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"s\u00edl\u00b7labes dels abor\u00edgens canadencs unificats"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("sistema X-SAMPA"_s)
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
			$of(u"manx\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"llat\u00ed fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"silesi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"jerogl\u00edfic anatoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(metaValue_mni)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"llat\u00ed ga\u00e8lic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("nombres xinesos simplificats"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("nombres xinesos tradicionals"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"nombres romans en min\u00fascula"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("dialecte pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lici"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
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
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"franc\u00e8s modern primerenc"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u00eddix"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("moore"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Numerals tradicionals"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"espanyol de M\u00e8xic"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"sir\u00edac occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"turc otom\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"sir\u00edac estrangelo"_s)
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
			$of(u"cari\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"xin\u00e8s"_s)
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
			$of(u"antic p\u00e8rmic"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"estil de salt de l\u00ednia"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ordre de la guia telef\u00f2nica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"monot\u00f2nic"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("shrada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("nombres financers japonesos"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("gueez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("mari occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"sir\u00edac oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"d\u00edgits shan de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"antic nord-ar\u00e0bic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"d\u00edgits ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ordenaci\u00f3 reformada"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"tag\u00e0log"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"dem\u00f2tic egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hier\u00e0tic egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("itihasa"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"palmir\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"jerogl\u00edfic egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"georgi\u00e0 hucuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"xin\u00e8s simplificat"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permiac"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"hongar\u00e8s antic"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("concani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("ortografia alemanya tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosrae\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"v\u00e8net"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"d\u00edgits limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"xin\u00e8s tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"sundan\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("vepse"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"d\u00edgits khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhut"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"valenci\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("xipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"alfabet llat\u00ed turc unificat"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"d\u00edgits gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"lleng\u00fces v\u00e0ries"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"alt engiadin\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistema de mesures"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagol\u00edtic"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbert\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("ortografia comuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
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
			$of(u"d\u00edgits tamils"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karatxai-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ing\u00faix"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"careli\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("xifres"_s)
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

LocaleNames_ca::LocaleNames_ca() {
}

$Class* LocaleNames_ca::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ca, name, initialize, &_LocaleNames_ca_ClassInfo_, allocate$LocaleNames_ca);
	return class$;
}

$Class* LocaleNames_ca::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun