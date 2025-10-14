#include <sun/util/resources/cldr/ext/LocaleNames_lv.h>

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

$MethodInfo _LocaleNames_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_lv::*)()>(&LocaleNames_lv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lv_MethodInfo_
};

$Object* allocate$LocaleNames_lv($Class* clazz) {
	return $of($alloc(LocaleNames_lv));
}

void LocaleNames_lv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lv::getContents() {
	$var($String, metaValue_ar, u"ar\u0101bu"_s);
	$var($String, metaValue_bn, u"beng\u0101\u013cu"_s);
	$var($String, metaValue_bo, u"tibetie\u0161u"_s);
	$var($String, metaValue_el, u"grie\u0137u"_s);
	$var($String, metaValue_gu, u"gud\u017earatu"_s);
	$var($String, metaValue_he, "ivrits"_s);
	$var($String, metaValue_hy, u"arm\u0113\u0146u"_s);
	$var($String, metaValue_ja, u"jap\u0101\u0146u"_s);
	$var($String, metaValue_jv, u"javie\u0161u"_s);
	$var($String, metaValue_ka, u"gruz\u012bnu"_s);
	$var($String, metaValue_km, "khmeru"_s);
	$var($String, metaValue_kn, "kannadu"_s);
	$var($String, metaValue_ko, u"korejie\u0161u"_s);
	$var($String, metaValue_la, u"lat\u012b\u0146u"_s);
	$var($String, metaValue_lo, u"laosie\u0161u"_s);
	$var($String, metaValue_ml, "malajalu"_s);
	$var($String, metaValue_mn, u"mongo\u013cu"_s);
	$var($String, metaValue_my, u"birmie\u0161u"_s);
	$var($String, metaValue_or, "oriju"_s);
	$var($String, metaValue_pa, u"pand\u017eabu"_s);
	$var($String, metaValue_si, u"sing\u0101\u013cu"_s);
	$var($String, metaValue_su, "zundu"_s);
	$var($String, metaValue_ta, "tamilu"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "taju"_s);
	$var($String, metaValue_tl, "tagalu"_s);
	$var($String, metaValue_arc, u"aramie\u0161u"_s);
	$var($String, metaValue_ban, u"balie\u0161u"_s);
	$var($String, metaValue_cop, "koptu"_s);
	$var($String, metaValue_got, "gotu"_s);
	$var($String, metaValue_phn, u"feni\u0137ie\u0161u"_s);
	$var($String, metaValue_ssy, "saho"_s);
	$var($String, metaValue_syr, u"s\u012brie\u0161u"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u0136elnes v\u0101cu"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogamiskais raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsamu"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marvaru"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emocijz\u012bmes"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u010dakmu"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u0113\u0123iptie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rad\u017east\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temnu"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanuju"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Debesbrauk\u0161anas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetumu"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Apvienotie Ar\u0101bu Emir\u0101ti"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"fl\u0101mu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganist\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva un Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"etiopie\u0161u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angilja"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("laika josla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u0113nija"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argent\u012bna"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("ASV Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austr\u0101lija"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Olandes salas"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("mjenu"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaid\u017e\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"austrumarm\u0113\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnija un Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadosa"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"sebu\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglade\u0161a"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumiku"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Be\u013c\u0123ija"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"vidusaug\u0161v\u0101cu"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkinafaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulg\u0101rija"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahreina"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundija"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benina"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Senbartelm\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenaju"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzju"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Bruneja"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u012bvija"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"N\u012bderlandes Kar\u012bbu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Braz\u012blija"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("sogu"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Buv\u0113 sala"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Botsv\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Baltkrievija"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Beliza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"persie\u0161u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Ivrita cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kan\u0101da"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosu (K\u012blinga) salas"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazander\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo (Kin\u0161asa)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Centr\u0101l\u0101frikas Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo (Brazavila)"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160veice"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kotdivu\u0101ra"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kuka salas"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u010c\u012ble"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamer\u016bna"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u0136\u012bna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbija"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Klipertona sala"_s)
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
			$of("Kaboverde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kirasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Ziemsv\u0113tku sala"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipra"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010cehija"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ekad\u017euku"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"V\u0101cija"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"senaug\u0161v\u0101cu"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"a\u010dinu"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Djego Garsijas atols"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Devan\u0101gar\u012b cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u017eibutija"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"a\u010dolu"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondu valodas"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braila raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Mazie arm\u0113\u0146u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominik\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalu"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zunju"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigru"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u017e\u012brija"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinanu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Pusplatuma"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pehlevi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Se\u016bta un Melilja"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u010dib\u010du"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanganu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvadora"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papjamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangmu"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Igaunija"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tivu"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0112\u0123ipte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Rietumsah\u0101ra"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"d\u017eagatajs"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palavie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u010d\u016bku"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u010dinuku \u017eargons"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u010dipevaianu"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u010doktavu"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u010diroku"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Sp\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Eiropas Savien\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregora kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eirozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u0161ejenu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gud\u017earatu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Somija"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fid\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Folklenda salas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikron\u0113zija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"lokaliz\u0101cijas variants"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"F\u0113ru salas"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francija"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelavie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indijas nacion\u0101lais kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"sengrie\u0137u"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabona"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votu"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Apvienot\u0101 Karaliste"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Nig\u0113rijas pid\u017einvaloda"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Gren\u0101da"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzija"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Francijas Gvi\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"G\u0113rnsija"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Gibralt\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grenlande"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"vidusang\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gvadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ekvatori\u0101l\u0101 Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grie\u0137ija"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Dienvidd\u017eord\u017eija un Dienvidsendvi\u010du salas"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guama"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gvineja-Bisava"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlinkitu"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingo\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Gaj\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"centr\u0101lkurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("bez lingvistiska satura"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0136\u012bnas \u012bpa\u0161\u0101s p\u0101rvaldes apgabals Honkonga"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"H\u0113rda sala un Makdonalda salas"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondurasa"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Horv\u0101tija"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghemu"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0160veices v\u0101cu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"isl\u0101ma kalend\u0101rs (Umm al-kura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ung\u0101rija"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tuaregu"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kan\u0101riju salas"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u0113zija"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("senpersu"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u012arija"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapolie\u0161u"_s)
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
			$of(u"Izra\u0113la"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Menas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Eiropas rakst\u012bbu k\u0101rto\u0161anas sec\u012ba"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Indijas oke\u0101na Britu teritorija"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ir\u0101ka"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islande"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u0101lija"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matem\u0101tiskais pieraksts"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Tajie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("datoru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Beng\u0101\u013cu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"D\u017e\u0113rsija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"isl\u0101ma kalend\u0101rs"_s)
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
			$of(u"Jord\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u0101na"_s)
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
			$of("Njasas tongu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannadu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"aug\u0161v\u0101cu (\u0160veice)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fon\u0113tisk\u0101 k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budistu kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Lat\u012b\u0146amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgizst\u0101na"_s)
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
			$of("Komoru salas"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sentkitsa un Nevisa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"mantot\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Zieme\u013ckoreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Dienvidkoreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuveita"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tokpisins"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaimanu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazahst\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosa"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Lib\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sentl\u016bsija"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"sensl\u0101vu"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ku\u010dinu"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"lejasv\u0101cu"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lihten\u0161teina"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0160rilanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akadie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u0113rija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lietuva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvija"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u012bbija"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"vund\u017eo"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landu"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"t\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroka"_s)
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
			$of("Melnkalne"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Senmart\u0113na"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lambu"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskara"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"M\u0101r\u0161ala salas"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("VAI cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Zieme\u013cma\u0137edonija"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanma (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolija"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevaru"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u0136TR \u012bpa\u0161ais administrat\u012bvais re\u0123ions Makao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Zieme\u013cu Marianas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrata"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"transliter\u0101cijas sist\u0113ma UN GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u012bcija"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"dienvidaltajie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mald\u012bvija"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Mal\u0101vija"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"jap\u0101\u0146u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaizija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambika"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u012bbija"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Subsah\u0101ras \u0100frika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ebreju kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"V\u0101rdn\u012bcas k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Jaunkaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Veida-D\u017eailza romaniz\u0101cija"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nig\u0113ra"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u0113rija"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"N\u012bderlande"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norv\u0113\u0123ija"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nep\u0101la"_s)
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
			$of(u"cim\u0161i\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Jaunz\u0113lande"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u010dig\u0101nu"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Krimas tat\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"senang\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"francisk\u0101 kreolisk\u0101 valoda (Sei\u0161elu salas)"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"senperie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"isl\u0101ma pilso\u0146u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ka\u0161ubu"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ang\u013cu (Lielbrit\u0101nija)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Francijas Polin\u0113zija"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Jaungvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filip\u012bnas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakist\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polija"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondu"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Senpj\u0113ra un Mikelona"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitk\u0113rnas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puertoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palest\u012bnas teritorijas"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Portug\u0101le"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("njasu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Mazie grie\u0137u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvaja"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuku"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katara"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Skotijas ang\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niu\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Oke\u0101nijas att\u0101l\u0101s salas"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezg\u012bnu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA fon\u0113tika"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvalie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("pasaule"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0100frika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Zieme\u013camerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reinjona"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Dienvidamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"lo\u017ebans"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oke\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rum\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbija"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Krievija"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Sa\u016bda Ar\u0101bija"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ponapie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Z\u0101lamana salas"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasavaku"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Rietum\u0101frika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sei\u0161elu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Centr\u0101lamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Zviedrija"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(metaValue_arc)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Austrum\u0101frika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Zieme\u013c\u0101frika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u016bra"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sv.Hel\u0113nas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Stingrais rindi\u0146as p\u0101rtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Vidus\u0101frika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slov\u0113nija"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Dienvid\u0101frika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalb\u0101ra un Jana Majena sala"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slov\u0101kija"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sjerraleone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Sanmar\u012bno"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Seneg\u0101la"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Som\u0101lija"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"arauk\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapahu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Tamilu tradicion\u0101lie cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinama"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Dienvidsud\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Santome un Prinsipi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvadora"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Sintm\u0101rtena"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u012brija"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("jao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravaku"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"japie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Tristana da Ku\u0146jas salu teritorijas"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"amerik\u0101\u0146u m\u0113rvien\u012bbu sist\u0113ma"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amerikas zieme\u013cu da\u013ca"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"T\u0113rksas un Kaikosas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"janba\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010cada"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francijas Dienvidj\u016bru teritorija"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Taizeme"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tad\u017eikist\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Kar\u012bbu j\u016bras re\u0123ions"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Austrumtimora"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("jembu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Mekl\u0113t p\u0113c Hangul s\u0101kuma l\u012bdzska\u0146a"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenist\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisija"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turcija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinid\u0101da un Tob\u0101go"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taiv\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ast\u016brie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u0101nija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kvasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"nezin\u0101ma rakst\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arom\u016bnu"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Austrum\u0101zija"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("svahili (Kongo)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Dienvid\u0101zija"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haidu"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Centr\u0101laustrum\u0101zija"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"pi\u0146ji\u0146a k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Dienvideiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ASV Maz\u0101s Aizj\u016bras salas"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Apvienoto N\u0101ciju Organiz\u0101cija"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amerikas Savienot\u0101s Valstis"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havajie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"akad\u0113misk\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"vienk\u0101r\u0161ot\u0101s \u0137\u012bnie\u0161u valodas k\u0101rto\u0161anas sec\u012bba - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvaja"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"pr\u016b\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekist\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Centr\u0101lmarokas tamaz\u012bts"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Stroke k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ngjemb\u016bnu"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatik\u0101ns"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"senprovansie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sentvinsenta un Grenad\u012bnas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venecu\u0113la"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britu Vird\u017e\u012bnas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ASV Vird\u017e\u012bnas"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vjetnama"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogaju"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"sennorv\u0113\u0123u"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austr\u0101l\u0101zija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"rietumarm\u0113\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u0113zija"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Volisa un Futunas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"tradicion\u0101l\u0101 k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikron\u0113zijas re\u0123ions"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakotu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finan\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"sader\u012bg\u0101 k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Vallisas v\u0101cu"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamu"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"va\u0161o"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseidoakcenti"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varaju"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseidodivvirzienu"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhu"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polin\u0113zija"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosova"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"bez rakst\u012bbas"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"varlpir\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemena"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("nko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"standarta k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fangu"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fantu"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majota"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Dienvid\u0101frikas Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Br\u012bvais rindi\u0146as p\u0101rtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"d\u0113van\u0101gari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Gruz\u012bnu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"pi\u0146ji\u0146a romaniz\u0101cija"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"nezin\u0101ms re\u0123ions"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"r\u016bnu raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metrisk\u0101 sist\u0113ma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO 8601 kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongu"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"zieme\u013csotu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Telugu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Luizi\u0101nas kreolu"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozu"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ma\u010damu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Vienk\u0101r\u0161otie \u0137\u012bnie\u0161u cipari finan\u0161u dokumentiem"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligainonu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Izv\u0113rstie ar\u0101bu-indie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nueru"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakotu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Pilna platuma cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hetu"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargu"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taitu"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("maiju"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"zieme\u013cluru"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasisk\u0101 nevaru"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtu"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandavu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Romie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakutu"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Sam\u0101rijas aramie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasaku"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santalu"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"j\u016bdpersie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Ciparu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Viet\u0113jie cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(metaValue_pa)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambeju"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("lubalulva"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Pilna platuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luisenu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0146ankolu"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u0146amvezu"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lundu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u0146oru"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filip\u012bnie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmongu"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delav\u0113ru"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"lu\u0161eju"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"belud\u017eu"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("sleivu"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugaritie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhju"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basu"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamumu"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"j\u016bdar\u0101bu"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzemu"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skotu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sic\u012blie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"af\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abh\u0101zu"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avesta"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikandu"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akanu"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("gomalu"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharu"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonie\u0161u"_s)
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
			$of(u"jap\u0101\u0146u zilbju alfab\u0113ts"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"line\u0101r\u0101 A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"av\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"line\u0101r\u0101 B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("dienvidkurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimaru"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbaid\u017e\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0161k\u012bru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Radik\u0101l\u0101 k\u0101rto\u0161anas sec\u012bba p\u0113c vilkumu skaita"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("baltkrievu"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulg\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bi\u0161lam\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambaru"_s)
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
			$of("dogribu"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"breto\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosnie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneku"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Laosie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("senu"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkupu"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katal\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koiraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u010de\u010denu"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010damorru"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsik\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"kr\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010dehu"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"bazn\u012bcsl\u0101vu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u010duva\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"velsie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Etiopie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("ji"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"d\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"v\u0101cu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"standarta val\u016btas form\u0101ts"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bed\u017eu"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinku"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bembu"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"sen\u012bru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongo\u013cu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"mald\u012bvie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongke"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u0137\u012bnie\u0161u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarmu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Grie\u0137u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("evu"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafutu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Parastais rindi\u0146as p\u0101rtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"mold\u0101vu"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ang\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"tradicion\u0101l\u0101s \u0137\u012bnie\u0161u valodas k\u0101rto\u0161anas sec\u012bba - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"sp\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"igau\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ha\u0146u ar bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basku"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangils"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"samarie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u0161ilhu"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"aug\u0161sorbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ha\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0161anu"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"persie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"vienk\u0101r\u0161ot\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Ar\u0101bu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"tradicion\u0101l\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"dienvidazerbaid\u017e\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulu"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u010cadas ar\u0101bu"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("somu"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fid\u017eie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fonu"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"rietumbelud\u017eu"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kantonie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"f\u0113ru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"transliter\u0101cijas sist\u0113ma US BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"fran\u010du"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamu"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"rietumfr\u012bzu"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u012bru"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skotu g\u0113lu"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galisie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("gvaranu"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bhod\u017ep\u016bru"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"nezin\u0101ma valoda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Etiopie\u0161u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"menie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausu"_s)
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
			$of("hupu"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikolu"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("binu"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hirimotu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"horv\u0101tu"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haitie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ung\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("hereru"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"kad\u017e\u016bnu fran\u010du"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Starptautiskais fon\u0113tiskais alfab\u0113ts"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingva"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indon\u0113zie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibetie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingve"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"Si\u010dua\u0146as ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"vidusfran\u010du"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaku"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"senfran\u010du"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"austrumfr\u012bzu"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"zieme\u013cfr\u012bzu"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"it\u0101\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inu\u012btu"_s)
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
			$of("dogru"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("komu"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"dienvids\u0101mu"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Luleo s\u0101mu"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magahie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafu"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Inari s\u0101mu"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksiku"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasaru"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skolts\u0101mu"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingu"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongu"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masaju"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"kva\u0146amu"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazahu"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grenlandie\u0161u"_s)
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
			$of("kanuru"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ka\u0161mirie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"kornie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirg\u012bzu"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninku"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksemburgie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malajalu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("gandu"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburgie\u0161u"_s)
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
			$of(u"fri\u016blu"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"britu m\u0113rvien\u012bbu sist\u0113ma"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lietuvie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("lubakatanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"latvie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogdie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagasu"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"m\u0101r\u0161alie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"noklus\u0113juma unikoda k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maoru"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ma\u0137edonie\u0161u"_s)
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
			$of("marathu"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malajie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltie\u0161u"_s)
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
			$of(u"mok\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("mabu"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(metaValue_arc)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("lejassorbu"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauruie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"visp\u0101r\u012bga mekl\u0113\u0161ana"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norv\u0113\u0123u bukmols"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"zieme\u013cndebelu"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nep\u0101lie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndongu"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandaru"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holandie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"jaunnorv\u0113\u0123u"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norv\u0113\u0123u"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("dienvidndebelu"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navahu"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpaku"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u010di\u010deva"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ka\u010dinu"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabilu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("politons"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oksit\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"kad\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kambu"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mendu"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"od\u017eibvu"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Arm\u0113\u0146u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromu"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"k\u0101vi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oset\u012bnu"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"Maur\u012bcijas kreolu"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranantogo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(metaValue_pa)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("dualu"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"ser\u0113ru"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"ka\u0146embu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"p\u0101li"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"po\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"vidusholandie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"dangi kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pu\u0161tu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portug\u0101\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"vidus\u012bru"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("katabu"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"val\u016btas form\u0101ts"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"brad\u017eie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("metu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 stundu sist\u0113ma (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 stundu sist\u0113ma (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Birmie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u010dvu"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("sapoteku"_s)
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
			$of(u"etiopie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 stundu sist\u0113ma (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 stundu sist\u0113ma (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retorom\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"val\u016bta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rum\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Oriju cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u0136\u012bnie\u0161u decim\u0101lda\u013cskait\u013ci"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("krievu"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("nkosi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ki\u0146aruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blissimbolika"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kaboverdie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmaku"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukumu"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrits"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"vienot\u0101 ortogr\u0101fija"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sard\u012bnie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhu"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"zieme\u013cs\u0101mu"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabavu"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"serbu\u2013horv\u0101tu"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u0161umeru"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slov\u0101ku"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slov\u0113\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samo\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0161onu"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"som\u0101\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Ar\u0101bu-indie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alb\u0101\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbu"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svatu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"uzskaites val\u016btas form\u0101ts"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("dienvidsotu"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisona dialekts"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("zviedru"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Tradicion\u0101lie \u0137\u012bnie\u0161u cipari finan\u0161u dokumentiem"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("ibanu"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0100zija"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("burjatu"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Centr\u0101l\u0101zija"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Rietum\u0101zija"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tad\u017eiku"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugu"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koru"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkm\u0113\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("cvanu"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"diola-fonj\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Jap\u0101\u0146u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turku"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("congu"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoru"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tat\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"di\u016blu"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"tv\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"taitie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Eiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Austrumeiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Zieme\u013ceiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazu"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Rietumeiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uiguru"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"vecit\u0101\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"visp\u0101r\u0113j\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrai\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Koptu kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmiku"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenagu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeku"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"v\u0101cu ortogr\u0101fija no 1996. gada"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"lejassak\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("vendu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u0136\u012bnas Republikas kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vjetnamie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"hotanie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"koira\u010diin\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Stundu form\u0101ts (12 vai 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Tara\u0161kevi\u010da ortogr\u0101fija"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapiks"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasisk\u0101 s\u012brie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"osma\u0146u turku"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ki\u010de"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valo\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauzu"_s)
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
			$of("Lydi"_s),
			$of(u"l\u012bdie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u0161umeru-akadie\u0161u \u0137\u012b\u013craksts"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volofu"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("standarta tamazigtu (Maroka)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"m\u016bsdienu standarta ar\u0101bu"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mand\u017e\u016bru"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaju"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manip\u016bru"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Vienk\u0101r\u0161otie \u0137\u012bnie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Tradicion\u0101lie \u0137\u012bnie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("khosu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Mazie romie\u0161u cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilinu"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"va\u017e\u0101\u017eu"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"M\u016bna raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohauku"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidi\u0161s"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosu"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("jorubu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradicion\u0101l\u0101 ciparu sist\u0113ma"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"rietums\u012brie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"turku osma\u0146u"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vaju"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"d\u017euanu"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalend\u017e\u012bnu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u0137\u012bnie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Rindi\u0146as p\u0101rtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"t\u0101lru\u0146u gr\u0101matas k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotons"_s)
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
			$of(u"Jap\u0101\u0146u cipari finan\u0161u dokumentiem"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"g\u0113zu"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"austrums\u012brie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reform\u0113t\u0101 k\u0101rto\u0161anas sec\u012bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("demotiskais raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hier\u0101tiskais raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("kjembu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u0113\u0123iptie\u0161u hieroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u0137\u012bnie\u0161u vienk\u0101r\u0161ot\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komie\u0161u-permie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"senung\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkanu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"tradicion\u0101l\u0101 v\u0101cu ortogr\u0101fija"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosr\u0101jie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0137\u012bnie\u0161u tradicion\u0101l\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpellu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmeru cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloku"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"valensie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundangu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Gurmuki cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"vair\u0101kas valodas"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kadu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"m\u0113rvien\u012bbu sist\u0113ma"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kr\u012bku"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"kiribatie\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"tradicion\u0101l\u0101 ortogr\u0101fija"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"irok\u0113zu"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"kar\u012bbu"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("kajuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamilu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"kara\u010daju un balk\u0101ru"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingu\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"dar\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"kar\u0113\u013cu"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efiku"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruhu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0161ambalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafiju"_s)
		})
	}));
	return data;
}

LocaleNames_lv::LocaleNames_lv() {
}

$Class* LocaleNames_lv::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lv, name, initialize, &_LocaleNames_lv_ClassInfo_, allocate$LocaleNames_lv);
	return class$;
}

$Class* LocaleNames_lv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun