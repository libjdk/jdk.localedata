#include <sun/util/resources/cldr/ext/LocaleNames_lt.h>

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

$MethodInfo _LocaleNames_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_lt::*)()>(&LocaleNames_lt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lt_MethodInfo_
};

$Object* allocate$LocaleNames_lt($Class* clazz) {
	return $of($alloc(LocaleNames_lt));
}

void LocaleNames_lt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TK, "Tokelau"_s);
	$var($String, metaValue_TV, "Tuvalu"_s);
	$var($String, metaValue_WS, "Samoa"_s);
	$var($String, metaValue_ar, u"arab\u0173"_s);
	$var($String, metaValue_bn, u"bengal\u0173"_s);
	$var($String, metaValue_bo, u"tibetie\u010di\u0173"_s);
	$var($String, metaValue_el, u"graik\u0173"_s);
	$var($String, metaValue_gu, u"gud\u017earat\u0173"_s);
	$var($String, metaValue_he, u"hebraj\u0173"_s);
	$var($String, metaValue_hy, u"arm\u0117n\u0173"_s);
	$var($String, metaValue_ja, u"japon\u0173"_s);
	$var($String, metaValue_jv, u"javie\u010di\u0173"_s);
	$var($String, metaValue_ka, u"gruzin\u0173"_s);
	$var($String, metaValue_km, u"khmer\u0173"_s);
	$var($String, metaValue_kn, u"kanad\u0173"_s);
	$var($String, metaValue_ko, u"kor\u0117jie\u010di\u0173"_s);
	$var($String, metaValue_la, u"lotyn\u0173"_s);
	$var($String, metaValue_lo, u"laosie\u010di\u0173"_s);
	$var($String, metaValue_ml, u"malajali\u0173"_s);
	$var($String, metaValue_mn, u"mongol\u0173"_s);
	$var($String, metaValue_my, u"birmie\u010di\u0173"_s);
	$var($String, metaValue_si, u"sinhal\u0173"_s);
	$var($String, metaValue_su, u"sund\u0173"_s);
	$var($String, metaValue_ta, u"tamil\u0173"_s);
	$var($String, metaValue_te, u"telug\u0173"_s);
	$var($String, metaValue_th, u"taj\u0173"_s);
	$var($String, metaValue_tl, u"tagalog\u0173"_s);
	$var($String, metaValue_bug, u"buginez\u0173"_s);
	$var($String, metaValue_chr, u"\u010deroki\u0173"_s);
	$var($String, metaValue_cop, u"kopt\u0173"_s);
	$var($String, metaValue_got, u"got\u0173"_s);
	$var($String, metaValue_nqo, "enko"_s);
	$var($String, metaValue_syr, u"sir\u0173"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kologn\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandez\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"simboli\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"atsam\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marvari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("Tai Tham Tham skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"ital\u0173 kalbos Emilijos tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("mentavai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanva"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("jaustukai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Gniva / Njiva tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"megrel\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u010cakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"senov\u0117s egiptie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"Rad\u017eastano"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("pagsa pa"_s)
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
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Dangun \u017dengimo sala"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Jungtiniai Arab\u0173 Emyratai"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flamand\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva ir Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Etiopijos kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angilija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Laiko juosta"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u0117nija"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengvar"_s)
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
			$of(u"ra\u0161ytiniai part\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikos Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australija"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Jungtini\u0173 Valstij\u0173 angl\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Aland\u0173 Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"mjen\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaid\u017eanas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Ryt\u0173 arm\u0117nai"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnija ir Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadosas"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"sebuan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglade\u0161as"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgija"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Vidurio Auk\u0161tosios Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Fasas"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarija"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahreinas"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundis"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Beninas"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of("Sen Bartelemi"_s)
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
			$of(u"erzyj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brun\u0117jus"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivija"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karib\u0173 Nyderlandai"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazilija"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamos"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"sog\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butanas"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Buv\u0117 Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Baltarusija"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belizas"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("matoma kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"pers\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"hebraj\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokos\u0173 (Kilingo) Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazenderani\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongas-Kin\u0161asa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Centrin\u0117s Afrikos Respublika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongas-Brazavilis"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160veicarija"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Dramblio Kaulo Krantas"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kuko Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u010cil\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamer\u016bnas"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kinija"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbija"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Klipertono sala"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u017daliasis Ky\u0161ulys"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kiurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Kal\u0117d\u0173 Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipras"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("bali skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010cekija"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"vakar\u0173 flamand\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Vokietija"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"senoji Auk\u0161tosios Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"a\u010dinez\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u010dig\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garsija"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"Goa konkani\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u017eibutis"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danija"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"akoli\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("brailio"_s)
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
			$of(u"arm\u0117n\u0173 skaitmenys ma\u017eosiomis raid\u0117mis"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikos Respublika"_s)
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
			$of("vmf"_s),
			$of(u"pagrindin\u0117 frankon\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei majek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u017eyras"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"vidutinio plo\u010dio"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"vidurin\u0117 pers\u0173 kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Seuta ir Melila"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u010dib\u010d\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"pampang\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvadoras"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"adangm\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estija"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egiptas"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Vakar\u0173 Sachara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u010dagat\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palaulie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u010dukes\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u010dinuk \u017eargonas"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"mari\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u010dipv\u0117j\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u010doktau"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Eritr\u0117ja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Ispanija"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europos S\u0105junga"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamit\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Grigaliaus kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("euro zona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u010dajen\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gud\u017earat\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adyg\u0117j\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"Tuniso arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Suomija"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fid\u017eis"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Folklando Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Lokal\u0117s variantas"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Farer\u0173 Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Pranc\u016bzija"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"Kpel\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"pikard\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"nacionalinis ind\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"ital\u0173 kalbos Romanijos tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"senov\u0117s graik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabonas"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"tsakur\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votik"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Jungtin\u0117 Karalyst\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Nigerijos pid\u017ein\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzija"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Pranc\u016bzijos Gviana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernsis"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tai le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltaras"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grenlandija"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Vidurio Anglijos"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Gvin\u0117ja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gvadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Pusiaujo Gvin\u0117ja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Graikija"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Piet\u0173 D\u017eord\u017eija ir Piet\u0173 Sandvi\u010do salos"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guamas"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"Pensilvanijos vokie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Bisau Gvin\u0117ja"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"tlingit\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingon\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("naujasis Tailando lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gajana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"sorani\u0173 kurd\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"n\u0117ra kalbinio turinio"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"taly\u0161\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"vokie\u010di\u0173 kalbos \u017eemai\u010di\u0173 tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Austrijos vokie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Ypatingasis Administracinis Kinijos Regionas Honkongas"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Herdo ir Makdonaldo Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hond\u016bras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatija"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"aghem\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0160veicarijos vokie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Islamo kalendorius (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haitis"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Vengrija"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"rif\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tama\u0161ek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanar\u0173 salos"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"kin\u0173 kalbos piet\u0173 min\u0173 tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezija"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"senoji pers\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Kayah Li skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Airija"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapolie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("Sora Sompeng skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izraelis"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"Nabat\u0117j\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Meno Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"r\u016b\u0161iavimo tvarka daugiakalb\u0117s Europos dokument\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Indijos Vandenyno Brit\u0173 Sritis"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irakas"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iranas"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islandija"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italija"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("matematiniai simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"taj\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of("veru"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"vaj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Kompiuteris"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"bengal\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"vokie\u010di\u0173 kalbos Pfalco tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"D\u017eersis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamo kalendorius"_s)
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
			$of("Jordanija"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"1606 -\u0173j\u0173 met\u0173 pranc\u016bz\u0173 kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ain\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusi"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"niasa tong\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"kanad\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kajah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0160veicarijos auk\u0161tutin\u0117 vokie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetin\u0117 rikiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"ingr\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budist\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Lotyn\u0173 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizija"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambod\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribatis"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorai"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sent Kitsas ir Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"paveld\u0117tas"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanados pranc\u016bz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0160iaur\u0117s Kor\u0117ja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Piet\u0173 Kor\u0117ja"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"polard fonetin\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0160veicarijos pranc\u016bz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuveitas"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"Papua pid\u017ein\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kaiman\u0173 Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachstanas"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosas"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanas"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sent Lusija"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"finikie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"senoji ba\u017enytin\u0117 slav\u0173 kirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gvi\u010dino"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u017demutin\u0117s Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lichten\u0161teinas"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0160ri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akadian\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberija"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"centrin\u0117s Aliaskos jupik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotas"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("buk pahvali"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lietuva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Liuksemburgas"_s)
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
			$of("Sora"_s),
			$of("Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libija"_s)
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
			$of("akz"_s),
			$of(u"alabamie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"Mahad\u017eani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("hana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokas"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monakas"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"N\u00fcshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Juodkalnija"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sen Martenas"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskaras"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Mar\u0161alo Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleut\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u0160iaur\u0117s Makedonija"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Malis"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mianmaras (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolija"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Ypatingasis Administracinis Kinijos Regionas Makao"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"alban\u0173 kalbos geg\u0173 tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Marianos \u0160iaurin\u0117s Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritanija"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montseratas"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricijus"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"piet\u0173 Altajaus"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldyvai"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavis"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"japon\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaizija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambikas"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"ra\u0161ytiniai pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"U\u017esachario Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"hebraj\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u017eodyno r\u016b\u0161iavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Naujoji Kaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Suvienodinta i\u0161taisyta ra\u0161yba"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nigeris"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolko sala"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("pselter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahav hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nyderlandai"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegija"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepalas"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"tsakon\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niuj\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"foenik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsim\u0161ian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Naujoji Zelandija"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"Merojit\u0173 rankra\u0161tinis"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"rom\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitik"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Krymo turk\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"senoji angl\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omanas"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"angik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Sei\u0161eli\u0173 kreol\u0173 ir pranc\u016bz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"senieji pers\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Islamo kalendorius (lentelinis, pilietin\u0117 era)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ka\u0161ub\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Did\u017eiosios Britanijos angl\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"musulmon\u0173 tat\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Pranc\u016bzijos Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua Naujoji Gvin\u0117ja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinai"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Lenkija"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sen Pjeras ir Mikelonas"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkerno salos"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rikas"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinos teritorija"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Balie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalija"_s)
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
			$of(u"graik\u0173 skaitmenys ma\u017eosiomis raid\u0117mis"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvajus"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"tumbuk\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kataras"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Normin\u0117 \u0161koti\u0161ka angl\u0173 kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"Jamaikos kreol\u0173 angl\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"ital\u0173 kalbos Pjemonto tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niujie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Nuo\u0161ali Okeanija"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"ispan\u0173 kalbos Ekstremad\u016bros tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezgin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Takri skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai vet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("pasaulis"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0160iaur\u0117s Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunjonas"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Piet\u0173 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"naujoji frank\u0173 kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("loiban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("Ponto"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Okeanija"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunija"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbija"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusija"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("Naujieji Tai Lue skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"mani\u010d\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritik"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"karo\u0161ti"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudo Arabija"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"Ponap\u0117s"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mand\u0117j\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Saliamono Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"tasavak\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Vakar\u0173 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sei\u0161eliai"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudanas"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Centrin\u0117 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0160vedija"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Ryt\u0173 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"aramaik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u0160iaur\u0117s Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u016bras"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0160v. Elenos Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"grie\u017etas teksto lau\u017eymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Vidurio Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slov\u0117nija"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Pietin\u0117 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbardas ir Janas Majenas"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakija"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("Woleai"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Siera Leon\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marinas"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegalas"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalis"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"mapudungun\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapah\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"tradicin\u0117s tamil\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinamas"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"araon\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Piet\u0173 Sudanas"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"San Tom\u0117 ir Prinsip\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"Al\u017eyro arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvadoras"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Martenas"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirija"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("jao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svazilandas"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"aravak\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"Egipto arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"Maroko arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"japez\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"rotuman\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristano da Kunjos"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"amerikieti\u0161ka mat\u0173 sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0160iaurin\u0117 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Terkso ir Kaikoso Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"jangben\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010cadas"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Pranc\u016bzijos Piet\u0173 sritys"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"Amerikos \u017eenkl\u0173 kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togas"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandas"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tad\u017eikija"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibai"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Ryt\u0173 Timoras"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"jemb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkm\u0117nistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisas"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidadas ir Tobagas"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taivanas"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"asturian\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"rusin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("Rovianos"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"kvasi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ne\u017einomi ra\u0161menys"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"lig\u016br\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromani\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Ryt\u0173 Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Kongo suahili\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Piet\u0173 Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haido"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Pietry\u010di\u0173 Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"kin\u0173 kalbos hak\u0173 tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"supaprastinta kini\u0161k\u0173 hieroglif\u0173 r\u016b\u0161iavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Piet\u0173 Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Jungtini\u0173 Valstij\u0173 Ma\u017eosios Tolimosios Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"lyvi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Jungtin\u0117s Tautos"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Jungtin\u0117s Valstijos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havajie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Akademinis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"supaprastinta kini\u0161ka r\u016b\u0161iavimo tvarka - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvajus"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"pr\u016bs\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Centrinio Maroko tamazit\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u012eprasta kini\u0161ko po\u017eymio r\u016b\u0161iavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ngiemb\u016bn\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikano Miesto Valstyb\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"senov\u0117s provansal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0160ventasis Vincentas ir Grenadinai"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venesuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Did\u017eiosios Britanijos Mergeli\u0173 Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Jungtini\u0173 Valstij\u0173 Mergeli\u0173 Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnamas"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"nog\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rua"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"senoji nors\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australazija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Vakar\u0173 arm\u0117nai"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezija"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Volisas ir Fut\u016bna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u012fprasta r\u016b\u0161iavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronezijos regionas"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ngomb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakot\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finansiniai skai\u010diai"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ankstesn\u0117 r\u016b\u0161iavimo tvarka, skirta suderinamumui"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"valser\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Meetei Mayek skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"Va\u0161o"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudo A"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varai"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudo B"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("Brahmi skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"nepara\u0161yta"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ol \u010diki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("valrpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\u201eBliss\u201c simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemenas"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standartinis rikiavimas"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"lombard\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"fang\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u017eenkl\u0173 ra\u0161tas"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majotas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("cham skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Piet\u0173 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Sudanie\u010di\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"laisvas teksto lau\u017eymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"gruzin\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Zhuyin rikiavimo tvarka"_s)
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
			$of(u"Kin\u0173 hieroglif\u0173 vertimo sistema Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbabv\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ne\u017einoma sritis"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"run\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metrin\u0117 sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO 8601 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mong\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u0161iaur\u0117s Soto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"telug\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Luizianos kreol\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"lozi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ma\u010dam\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Fid\u017eio hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"supaprastintos kin\u0173 k. finans. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hiligainon\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"i\u0161pl\u0117stiniai arab\u0173-ind\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"nuer\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dakot\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"viso plo\u010dio skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"hitit\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"tait\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"mal\u0173 hieroglifai"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u0161iaur\u0117s luri"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasikin\u0117 nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurt\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Islamo kalendorius (Saudo Arabija)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"sandavi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"rom\u0117ni\u0161ki skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jakut\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"\u0160arad\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"latgali\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samar\u0117j\u0173 arami\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("Kaukazo Albanijos"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"samb\u016br\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"santali\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinag"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"jud\u0117j\u0173 pers\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"saura\u0161tr\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Skaitinis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Vietiniai skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ngambaj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"viso plo\u010dio"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"sang\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"niankol\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("niamvezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lundos"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"nior\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipinie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delavero"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"balu\u010di"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugarit\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"suomi\u0173 kalbos Tornedalio tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luja"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"bavar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"bas\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"bamun\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"jud\u0117j\u0173 arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Europos ispan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0161kot\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicilie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abchaz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avest\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrikan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"\u010cakm\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"ghomal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragones\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Stolvizza / Solbica tarm\u0117"_s)
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
			$of("katakana / hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asam\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"sasares\u0173 sardin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linijiniai A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avarik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linijiniai B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"piet\u0173 kurd\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aimar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbaid\u017eanie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Oseacco / Osojane tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0161kir\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u0160aknies \u017eenkl\u0173 ir br\u016bk\u0161ni\u0173 r\u016b\u0161iavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"baltarusi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"javie\u010di\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambar\u0173"_s)
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
			$of(u"dogrib\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"breton\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosni\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"senec\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"laosie\u010di\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"sen\u0173"_s)
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
			$of(u"katalon\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("kojraboro seni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u010de\u010d\u0117n\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010damor\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"I\u0161taisyta ra\u0161yba"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsikie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"orij\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kry"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010dek\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ba\u017enytin\u0117 slav\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("njengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u010diuva\u0161\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"val\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Etiopijos skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("ji"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Europos portugal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"vokie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standartinis valiutos formatas"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"b\u0117j\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"dink\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"dan\u0173 kalbos jut\u0173 tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"bemb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"senoji airi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"mongol\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"diveh\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Lotyn\u0173 Amerikos ispan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("betavi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"botij\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ben\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"kin\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"klasikin\u0117 kin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"zarm\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"\u017eemai\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"graik\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"evi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"bafut\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u012fprastas teksto lau\u017eymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldav\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angl\u0173"_s)
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
			$of(u"\u012fprasta kini\u0161ka r\u016b\u0161iavimo tvarka - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ispan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"est\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"hanb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"bask\u0173"_s)
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
			$of(u"samarie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"tachelhit\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"auk\u0161tutini\u0173 sorb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0161an"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanuno"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"pers\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("supaprastinti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"lotyni\u0161ki skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradiciniai"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulah\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"chadian arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"kin\u0173 kalbos hunano tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"suomi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fid\u017ei\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"vakar\u0173 belud\u017ei\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kin\u0173 kalbos Kantono tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"farer\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"pranc\u016bz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"sidam\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"vakar\u0173 fryz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"airi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0161kot\u0173 (g\u0117l\u0173)"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galis\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"gvarani\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bau\u010dpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ne\u017einoma kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Etiopijos \u201eAmete Alem\u201c kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"Islamo kalendorius (lentelinis, astronomin\u0117 era)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"menie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Osman\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"haus\u0173"_s)
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
			$of(u"bikol\u0173"_s)
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
			$of(u"kroat\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Hai\u010dio"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"vengr\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"herer\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"kad\u017eun\u0173 pranc\u016bz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Tarptautin\u0117s ab\u0117c\u0117l\u0117s fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"tarpin\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonezie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"tibetie\u010di\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interkalba"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"si\u010duan ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Vidurio Pranc\u016bzijos"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"inupiak\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"senoji pranc\u016bz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("arpitano"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"ryt\u0173 fryz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"band\u017ear\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u0161iaurini\u0173 fryz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ital\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inukitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"silezie\u010di\u0173 \u017eemai\u010di\u0173"_s)
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
			$of(u"senoji piet\u0173 Arabijos"_s)
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
			$of("sly"_s),
			$of(u"selajar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("Lepcha skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"kom\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"piet\u0173 sami\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u0161avi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurez\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Liuleo sami\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"maf\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Inario sami\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"siksik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makasaro"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"kin\u0173 kalbos vu tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"Skolto sami\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"manding\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"kikuj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masaj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuaniama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazach\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalalisut"_s)
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
			$of(u"kanuri\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ka\u0161myr\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("kirt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lep\u010da"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestano"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurd\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"korn\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgiz\u0173"_s)
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
			$of(u"liuksemburgie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"malajali\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburgie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ngal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"friuli\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"angli\u0161ka mat\u0173 sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Tai Tham Hora skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lietuvi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"latvi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malagas\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"Mar\u0161alo Sal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("numatytasis unikodo rikiavimas"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maori\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedon\u0173"_s)
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
			$of(u"marat\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malajie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"saura\u0161tra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u0161a"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"mab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u017eemutini\u0173 sorb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"imperin\u0117 aramaik\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"naur\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"bendroji paie\u0161ka"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norveg\u0173 bukmolas"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u0161iaur\u0117s ndebel\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ndong\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"mandar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"oland\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"naujoji norveg\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norveg\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"piet\u0173 ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navaj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"karakalpak\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"nianj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ka\u010din\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kebail\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Polytonic"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"o\u010ditar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("ju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"kemb\u0173"_s)
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
			$of(u"mer\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"arm\u0117n\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"orom\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"kavi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("centrinio Dusuno"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"odij\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osetin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"bi\u0161nuprijos"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"morisij\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pend\u017eab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"dual\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"serer\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Resian tarmei priklausanti Lipovaz tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"kanemb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"lenk\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Vidurio Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Saura\u0161tr\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pu\u0161t\u016bn\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Vidurio Airijos"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("rikiavimas"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Brazilijos portugal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua-maeto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("valiutos formatas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N\u2019Ko skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"braj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 valand\u0173 sistema (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 valand\u0173 sistema (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"brahuj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"mianmarie\u010di\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u010duj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapotek\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lana"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"makond\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"Saterlendo fryz\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etiop\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 valand\u0173 sistema (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 valand\u0173 sistema (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoroman\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valiuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumun\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"orij\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"kin\u0173 de\u0161imtainiai skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rus\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"ak\u016bs\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"kinjaruand\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"BLISS simboli\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u017daliojo Ky\u0161ulio kreol\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"mikmak\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Australijos angl\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duploj\u0117 stenografija"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskritas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Suvienodinta ra\u0161yba"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardinie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sind\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u0161iaur\u0117s sami\u0173"_s)
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
			$of(u"serb\u0173-kroat\u0173"_s)
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
			$of(u"\u0161umer\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovak\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slov\u0117n\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Granta"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0161on\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somalie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"arab\u0173-ind\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alban\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"serb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"svat\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("apskaitos valiutos formatas"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"piet\u0173 Soto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Natisone tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0161ved\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"suahili\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"tradicin\u0117s kin\u0173 k. finans. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ibibij\u0173"_s)
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
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"buriat\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Centrin\u0117 Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Vakar\u0173 Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tad\u017eik\u0173"_s)
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
			$of(u"tigraj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Kanados angl\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkm\u0117n\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"tsvan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"d\u017eiola-foni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"japon\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"turk\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"tsong\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"Komor\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u010dakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"totori\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"dyul\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"taitie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"San Giorgio / Bila tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Ryt\u0173 Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u0160iaur\u0117s Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"dazag\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Vakar\u0173 Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"uig\u016br\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"senasis ital\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("bendri"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrainie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zeland\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"kopt\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urd\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Sunorminta Resian ra\u0161yba"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmuk\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbek\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 -\u0173j\u0173 met\u0173 vokie\u010di\u0173 ra\u0161yba"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u017demutin\u0117s Saksonijos (Nyderlandai)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("syloti nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"vend\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kinijos Respublikos kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnamie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotanez\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"kojra \u010dini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"valand\u0173 ciklas (12 ir 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskievica tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapiuko"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"khovar\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasikin\u0117 sir\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"osman\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ki\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"\u010cimboraso auk\u0161tum\u0173 ke\u010duj\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valon\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gaga\u016bz\u0173"_s)
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
			$of(u"kin\u0173 kalbos dziangsi tarm\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u0160umero Akado dantira\u0161tis"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"volof\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standartin\u0117 Maroko tamazigt\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0161iuolaikin\u0117 standartin\u0117 arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"suvienodinti Kanados aborigen\u0173 silabiniai"_s)
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
			$of(u"man\u010du"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"fraktur lotyn\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"silezie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("Anatolijaus hieroglifai"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manipuri\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"g\u0117l\u0173 lotyn\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"supaprastintos kin\u0173 k. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"tradicin\u0117s kin\u0173 k. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"kos\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"rom\u0117ni\u0161ki skaitmenys ma\u017eosiomis raid\u0117mis"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lician"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"medumb\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"zoroastr\u0173 dari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"m\u016bn"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohok"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Ankstyvasis Pranc\u016bzijos modernizmas"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
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
			$of("Dsrt"_s),
			$of("deseretas"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorub\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradiciniai skai\u010diai"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Meksikos ispan\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"vakar\u0173 sir\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"osman\u0173 turk\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"estrangelo sirie\u010di\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("chuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"kari\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalenjin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"kin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"senieji perm\u0117s"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"teksto lau\u017eymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zul\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"telefon\u0173 knygos r\u016b\u0161iavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Vienodas"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"\u0160arados"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japon\u0173 finans. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u010dam"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("gyz"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"vakar\u0173 mari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"ryt\u0173 sir\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Myanmar Shan skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasano"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"Senasis \u0161iaur\u0117s arab\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Ol Chiki skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"reformuota r\u016b\u0161iavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egipto liaudies"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Egipto \u017eyni\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmiros"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egipto hieroglifai"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"gruzin\u0173 kutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"supaprastintoji kin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komi\u0173-permi\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"senasis vengr\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkani\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\u012eprasta vokie\u010di\u0173 ra\u0161yba"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosrean\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"venet\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Limbu skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"tradicin\u0117 kin\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"veps\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"kpeli\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"khmer\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilok\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Valencie\u010diai"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("kipro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Suvienodinta turk\u0173 kalbos lotyni\u0161ka ab\u0117c\u0117l\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"mundang\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmuki skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("kelios kalbos"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kado"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"mat\u0173 sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kryk\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolitik"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"\u012eprasta ra\u0161yba"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"karib\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"kaij\u016bg\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"tamil\u0173 skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"kara\u010diaj\u0173 balkarijos"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingu\u0161\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("kinaray-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karel\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"tul\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"skai\u010diai"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruk"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0161ambal\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"baf\u0173"_s)
		})
	}));
	return data;
}

LocaleNames_lt::LocaleNames_lt() {
}

$Class* LocaleNames_lt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lt, name, initialize, &_LocaleNames_lt_ClassInfo_, allocate$LocaleNames_lt);
	return class$;
}

$Class* LocaleNames_lt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun