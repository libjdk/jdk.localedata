#include <sun/util/resources/cldr/ext/LocaleNames_bs.h>

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

$MethodInfo _LocaleNames_bs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_bs::*)()>(&LocaleNames_bs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_bs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bs",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bs_MethodInfo_
};

$Object* allocate$LocaleNames_bs($Class* clazz) {
	return $of($alloc(LocaleNames_bs));
}

void LocaleNames_bs::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bs::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_tl, "tagalog"_s);
	$var($String, metaValue_chr, u"\u010deroki"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("kelnski"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirande\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marvari"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanva pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emoji sli\u010dice"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Gnjiva/Njiva dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u010dakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("staroegipatski"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajastani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa pismo"_s)
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
			$of("Ostrvo Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongan"_s)
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
			$of("Ujedinjeni Arapski Emirati"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamanski"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angvila"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Vremenska zona"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenija"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengvar pismo"_s)
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
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("pisani partian"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Ameri\u010dka Samoa"_s)
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
			$of("AX"_s),
			$of("Olandska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("mjene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbejd\u017ean"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Isto\u010dni jermenski"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna i Hercegovina"_s)
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
			$of(u"Banglade\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumik"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgija"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"srednjovjekovni gornjonjema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bugarska"_s)
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
			$of("Sveti Bartolomej"_s)
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
			$of("erzija"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivija"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karipska Holandija"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahami"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Ostrvo Buve"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bocvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bjelorusija"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("vidljivi govor"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("perzijski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebrejski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokosova (Keelingova) ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderanski"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Demokratska Republika Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Centralnoafri\u010dka Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160vicarska"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Obala Slonova\u010de"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kukova ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u010cile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"kai\u0107ansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbija"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Ostrvo Clipperton"_s)
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
			$of("Zelenortska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Bo\u017ei\u0107no ostrvo"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipar"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010ce\u0161ka"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Njema\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"staronjema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"a\u010dinski"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u010diga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Dijego Garsija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("brojevi pisma devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u017eibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danska"_s)
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
			$of("brajevo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("bramansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("mali armenski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanska Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("gotski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei majek pismo"_s)
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
			$of("takri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u017eir"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Uski"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Seuta i Melilja"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u010dib\u010da"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangmejski"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonija"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipat"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Zapadna Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u010dagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauanski"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u010dukeski"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u010dinukski \u017eargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u010dipvijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u010doktav"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0160panija"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Evropska unija"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamitski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregorijanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u010dejenski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"brojevi pisma gud\u017earati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"indu\u0161ko ismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigejski"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finska"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fid\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Folklandska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Varijanta zemlje/jezika"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Farska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francuska"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("kpelle pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indijski nacionalni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"starogr\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votski"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ujedinjeno Kraljevstvo"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigerijski pid\u017ein"_s)
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
			$of("Francuska Gvajana"_s)
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
			$of("tai le pismo"_s)
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
			$of("Grenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("srednjovjekovni engleski"_s)
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
			$of("Gvadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatorijalna Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ju\u017ena D\u017eord\u017eija i Ju\u017ena Sendvi\u010d ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gvineja-Bisao"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("novo tai lue pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gvajana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("centralnokurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"bez lingvisti\u010dkog sadr\u017eaja"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("jurchen pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong (SAR Kina)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("vai pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ostrvo Heard i arhipelag McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Hrvatska"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"njema\u010dki (\u0160vicarska)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ma\u0111arska"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tama\u0161ek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanarska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezija"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("staroperzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irska"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitanski"_s)
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
			$of("tangut pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("nabatejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ostrvo Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indija"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britanska Teritorija u Indijskom Okeanu"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italija"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matemati\u010dka notacija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("tajlandski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Kompjuter"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengalski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Francuski iz kasnog srednjeg veka do 1606."_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("mende pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusi"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("njasa tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("brojevi pisma kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kajah li pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"visoki njema\u010dki (\u0160vicarska)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budisti\u010dki kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinska Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
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
			$of("Komori"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sveti Kits i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("pismo kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("nasledno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Sjeverna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Ju\u017ena Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("polard fonetsko pismo"_s)
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
			$of("Kajmanska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazahstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u0107irilica"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Liban"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sveta Lucija"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"feni\u010danski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Staroslovenska crkvena \u0107irilica"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gvi\u010din"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"donjonjema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lihten\u0161tajn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0160ri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("akadijski"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("koptski"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("pahlavi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litvanija"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvija"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("pismo katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sora sompeng pismo"_s)
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
			$of("lah"_s),
			$of("landa"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("pismo tana"_s)
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
			$of("Moldavija"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of("nushu pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Crna Gora"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sveti Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Mar\u0161alova ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutski"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tajlandsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Sjeverna Makedonija"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanmar"_s)
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
			$of("Makao (SAR Kina)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Sjeverna Marijanska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritanija"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Monserat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UN GEGN transliteracija"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricijus"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ju\u017eni altai"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("japanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("pisani pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Subsaharska Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("hebrejski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nova Kaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Vejd-\u017dajl romanizacija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("Ujedinjena revidirana ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ostrvo Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
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
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holandija"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norve\u0161ka"_s)
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
			$of("Phnx"_s),
			$of(u"feni\u010dansko pismo"_s)
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
			$of("Novi Zeland"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("meroitski kurziv"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitik pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krimski turski"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("staroengleski"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("seselva kreolski francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("staropersijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Islamski civilni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ka\u0161ubijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Francuska Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nova Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poljska"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sveti Petar i Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkernska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinska Teritorija"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("balijsko pismo"_s)
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
			$of(u"mali gr\u010dki brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u0160kotski standardni engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niue"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Vanjska Okeanija"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgijski"_s)
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
			$of("tai viet pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Svijet"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Sjeverna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Ju\u017ena Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang pismo"_s)
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
			$of("Srbija"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mro pismo"_s)
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
			$of("%%METELKO"_s),
			$of(u"Metel\u010dica"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manihejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"karo\u0161ti pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudijska Arabija"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponpejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandeansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomonska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasavak"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Zapadna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sej\u0161eli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Srednja Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0160vedska"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Isto\u010dna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Sjeverna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sveta Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Strogi stil prijeloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Srednja Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenija"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Ju\u017ena Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard i Jan Majen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slova\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("bamum pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("woleai pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sijera Leone"_s)
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
			$of("Somalija"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"mapu\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("tradicionalni tamilski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Ju\u017eni Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome i Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Marten"_s)
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
			$of("Esvatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"jape\u0161ki"_s)
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
			$of(u"ameri\u010dki mjerni sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Sjeverni dio Amerike"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ostrva Turks i Kaikos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("jangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010cad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francuske Ju\u017ene Teritorije"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajland"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tad\u017eikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibi"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Isto\u010dni Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("jemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Pretra\u017eivanje po po\u010detnom suglasniku hangula"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Buntling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunis"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of("Moderni volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turska"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad i Tobago"_s)
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
			$of("asturijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkhon pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kvasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("nepoznato pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("khudawadi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("arumunski"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Isto\u010dna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinijski"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Ju\u017ena Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Jugoisto\u010dna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinjin sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Ju\u017ena Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("pismo sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Ameri\u010dka Vanjska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Ujedinjene Nacije"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Sjedinjene Dr\u017eave"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havajski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Akademski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Pojednostavljeno kinesko sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("pruski"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("centralnoatlaski tamazigt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Sortiranje po broju crta"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiembon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("staroprovansalski"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sveti Vinsent i Grenadin"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venecuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britanska Djevi\u010danska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Ameri\u010dka Djevi\u010danska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vijetnam"_s)
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
			$of("rua"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("staronordijski"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australazija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Zapadno-jermenski"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezija"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Ostrva Valis i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Tradicionalno sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronezijska regija"_s)
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
			$of("wae"_s),
			$of("valser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("bassa vah pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"va\u0161o"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo naglasci"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varej"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo bidi"_s)
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
			$of("%%KSCOR"_s),
			$of("Standardna ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"pismo gud\u017earati"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("nepisani jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ol \u010diki pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("varlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"blisimboli\u010dno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("nko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standardno sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Rezijan"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("znakovno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majote"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Ju\u017enoafri\u010dka Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Slobodni stil prijeloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("pismo devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("gruzijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("pismo hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("Pinjinska romanizacija"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Nepoznata oblast"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metri\u010dki sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("kalendar ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sjeverni soto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("brojevi pisma telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("naxi geba pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("makame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("pojednostavljeni kineski finansijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligajnon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"pro\u0161ireni arapsko-indijski brojevi"_s)
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
			$of(u"\u0161iroki brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hitite"_s)
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
			$of("majanski hijeroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("sjeverni luri"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"kopti\u010dko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasi\u010dni nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("kmersko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("rimski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakutski"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("samaritanski aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Skauz"_s)
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
			$of("tifinag pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judeo-perzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numeri\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambaj"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("pismo gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Aluku dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u0160iroki"_s)
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
			$of("njankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("njamvezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("njoro"_s)
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
			$of("delaver"_s)
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
			$of("balinezijski"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugaritski"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhija"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamunski"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("judeo-arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0161kotski"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sicilijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afarski"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abhaski"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avestanski"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikans"_s)
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
			$of("amharski"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arapsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Stolvica/Solbica dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("katakana ili hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asamski"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linearno A pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avarski"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linearno B pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"ju\u017eni kurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbejd\u017eanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khojki pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Oseako/Osojane dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0161kirski"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bjeloruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bugarski"_s)
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
			$of("bengalski"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetanski"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretonski"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosanski"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneka"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("mijanmarsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laoski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"n\u2019ko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalonski"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("kojraboro seni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u010de\u010denski"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010damoro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Revidirana ortigrafija"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korzikanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("pismo orija"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010de\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("staroslavenski"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u010duva\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"vel\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("ji pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danski"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"njema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standardni format valute"_s)
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
			$of("buginsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("staroirski"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"d\u017eonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("kineski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("fraser pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"gr\u010dki brojevi"_s)
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
			$of("Normalni stil prijeloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavski"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"gr\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Tradicionalno kinesko sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0161panski"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("pismo hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhidsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("pismo hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tahelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"gornjolu\u017ei\u010dkosrpski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("pismo han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0161an"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanuno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("pojednostavljeno"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("arapski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicionalno"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u010dadski arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finski"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fid\u017eijski"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"zapadni belu\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonski"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("farski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN transliteracija"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("zapadni frizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irski"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0161kotski galski"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicijski"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("gvarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("nepoznati jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Etiopski kalendar \"Amete Alem\""_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gud\u017earati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manks"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebrejski"_s)
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
			$of("hrvatski"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"hai\u0107anski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ma\u0111arski"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenski"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
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
			$of("pismo jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonezijski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetanski brojevi"_s)
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
			$of(u"si\u010duan ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("srednjovjekovni francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("starofrancuski"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"isto\u010dnofrizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("sjeverni frizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandski"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malajalamsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"staro ju\u017enoarapsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati pismo"_s)
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
			$of(u"ju\u017eni sami"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u0161avian pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madure\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lule sami"_s)
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
			$of("maitili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("inari sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("gruzijski"_s)
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
			$of("sms"_s),
			$of("skolt sami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("gotika"_s)
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
			$of("kuanjama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kaza\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalalisutski"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kmerski"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("korejski"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ka\u0161mirski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirt pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lep\u010da pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornski"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgi\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latinski"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksembur\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malajalamski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limbur\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friulijski"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laoski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("britanski mjerni sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litvanski"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latvijski"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malga\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"mar\u0161alski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("standardno Unicode sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maorski"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedonski"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malajski"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malte\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"saura\u0161tra pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armensko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u0161a"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"donjolu\u017ei\u010dkosrpski"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("imperijsko aramejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"op\u0107enito pretra\u017eivanje"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norve\u0161ki (Bokmal)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("sjeverni ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalski"_s)
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
			$of("holandski"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norve\u0161ki (Nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norve\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ju\u017eni ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("kara-kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("njanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ka\u010din"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabile"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politonik"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("oksitanski"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("kaju"_s)
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
			$of("%%EMODENG"_s),
			$of("Rani moderni engleski"_s)
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
			$of("armenski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kavi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("odija"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetski"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardijski"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("mauricijski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("srananski tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pand\u017eapski"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("Lipovac dijalekt rezijanski"_s)
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
			$of("poljski"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("srednjovjekovni holandski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pa\u0161tu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("srednjovjekovni irski"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tjap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makuva-meto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Format valute"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laosko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of("24-satni format (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of("24-satni format (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("mijanmarski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u010dua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapote\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of("12-satni format (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of("12-satni format (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("retoromanski"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumunski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("orijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("kineski decimalni brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoski"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinjaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blis simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("zelenortski"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Ujedinjena ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardinijski"_s)
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
			$of("sjeverni sami"_s)
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
			$of("srpskohrvatski"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinhale\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumerski"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slova\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovenski"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0161ona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arapsko-indijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("srpski"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"ra\u010dunovodstveni format valute"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ju\u017eni soto"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("javansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natison dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0161vedski"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("tradicionalni kineski finansijski brojevi"_s)
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
			$of("tamilski"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Srednja Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Zapadna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tad\u017ei\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tajlandski"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugi\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmenski"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonganski"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-foni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turski"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komorski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u010dakmansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarski"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("diula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahi\u0107anski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"San \u0110or\u0111ijo/Bila dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Isto\u010dna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Sjeverna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Zapadna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgurski"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("staro italsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"zajedni\u010dko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrajinski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Koptski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Standardizovana rezijanska ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmik"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbe\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Nema\u010dka ortografija 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("donjosaksonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("siloti nagri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("varang kshiti pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("kalendar Republike Kine"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vijetnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("kotanizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"kojra \u010dini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Format vremena (12 ili 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Taraskijevica ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasi\u010dni sirijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanja pismo"_s)
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
			$of("valun"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagau\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("sirijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"gr\u010dko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumersko-akadsko kuneiform pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("standardni marokanski tamazigt"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("moderni standardni arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Ujedinjeni kanadski aborid\u017einski silabici"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"man\u010du"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latinica (fraktur varijanta)"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("anatolijski hijeroglifi"_s)
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
			$of("latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("galska latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("pojednostavljeni kineski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("tradicionalni kineski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("hosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("mali rimski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lisijsko pismo"_s)
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
			$of(u"mese\u010devo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohavk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Rani moderni francuski"_s)
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
			$of("sirijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("dezeret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("jorubanski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Tradicionalni brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("zapadnosirijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("osmanski turski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("sirijsko estrangelo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("karijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("afaka pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("pismo bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("staro permiksko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Stil prijeloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Sortiranje kao telefonski imenik"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonik"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("gruzijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("sharada pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanski finansijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u010damsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("staroetiopski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"pismo isto\u010dne Sirije"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("staro sjevernoarapsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("egipatsko narodno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("egipatsko hijeratsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("palmyrene pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egipatski hijeroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("gruzijsko khutsuri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("kineski (pojednostavljeni)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"Staroma\u0111arsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Tradicionalna nema\u010dka ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrejski"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("kineski (tradicionalni)"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("kmerski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhuta pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valencijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("kiparsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Ujedinjeni turski latini\u010dni alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("brojevi pisma gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"vi\u0161e jezika"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kado"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Mjerni sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kri\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagoljica"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Uobi\u010dajena ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karipski"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("kajuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"kara\u010daj-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingu\u0161etski"_s)
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
			$of("karelijski"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"kuru\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0161ambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("pismo telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_bs::LocaleNames_bs() {
}

$Class* LocaleNames_bs::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bs, name, initialize, &_LocaleNames_bs_ClassInfo_, allocate$LocaleNames_bs);
	return class$;
}

$Class* LocaleNames_bs::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun