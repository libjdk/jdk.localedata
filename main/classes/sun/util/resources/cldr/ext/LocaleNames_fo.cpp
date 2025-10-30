#include <sun/util/resources/cldr/ext/LocaleNames_fo.h>

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

$MethodInfo _LocaleNames_fo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_fo::*)()>(&LocaleNames_fo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_fo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fo_MethodInfo_
};

$Object* allocate$LocaleNames_fo($Class* clazz) {
	return $of($alloc(LocaleNames_fo));
}

void LocaleNames_fo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, "bangla"_s);
	$var($String, metaValue_bo, "tibetskt"_s);
	$var($String, metaValue_el, "grikskt"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, "hebraiskt"_s);
	$var($String, metaValue_hy, "armenskt"_s);
	$var($String, metaValue_ja, "japanskt"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, "koreanskt"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_or, "odia"_s);
	$var($String, metaValue_ta, "tamilskt"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "tailendskt"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f8lnskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("tekin"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("khakma"_s)
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
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Sameindu Emirr\u00edkini"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamskt"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua & Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopiskur kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
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
			$of("Antarktis"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikanska Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Eysturr\u00edki"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Avstralia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c1land"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Aserbadjan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia-Hersegovina"_s)
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
			$of("Bangladesj"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
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
			$of(u"St. Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
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
			$of(u"Ni\u00f0urlonds Karibia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamaoyggjar"_s)
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
			$of("Bouvetoyggj"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Hv\u00edtarussland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("persiskur kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"hebraisk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokosoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo, Dem. L\u00fd\u00f0veldi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Mi\u00f0afrikal\u00fd\u00f0veldi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Sveis"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"F\u00edlabeinsstrondin"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cooksoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Kili"_s)
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
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton"_s)
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
			$of(u"Gr\u00f8nh\u00f8vdaoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"J\u00f3laoyggjin"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"K\u00fdpros"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Kekkia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"T\u00fdskland"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("achinese"_s)
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
			$of(u"devanagarik t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmark"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("blindaskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"armensk t\u00f8l (sm\u00e1ir b\u00f3kstavir)"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikal\u00fd\u00f0veldi\u00f0"_s)
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
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta & Melilla"_s)
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
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estland"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egyptaland"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Vestursahara"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukese"_s)
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
			$of("Spania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Evropasamveldi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregorianskur kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Evrasona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gujaratik t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandsoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronesiasamveldi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"F\u00f8royar"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frakland"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"St\u00f3rabretland"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("nigeriskt pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Franska Gujana"_s)
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
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gr\u00f8nland"_s)
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
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatorguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grikkaland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Su\u00f0urgeorgia og Su\u00f0ursandwichoyggjar"_s)
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
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonskt"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gujana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"mi\u00f0kurdiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"einki m\u00e1lsligt innihald"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard og McDonaldoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"t\u00fdskt (Sveis)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungarn"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanariuoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("min nan kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u00cdrland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitanskt"_s)
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
			$of("IL"_s),
			$of(u"\u00cdsrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"r\u00f6\u00f0ina fyrir fj\u00f6ltyngi evr\u00f3pskum skj\u00f6lum"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"St\u00f3ra Bretlands Indiahavoyggjar"_s)
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
			$of(u"\u00cdsland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"st\u00f8ddfr\u00f8\u00f0ilig teknskipan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"tailendsk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"bangla t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamiskur kalendari"_s)
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
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
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
			$of(u"kannada t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"h\u00f8gt t\u00fdskt (Sveis)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddistiskur kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenja"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Lat\u00ednamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgisia"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoroyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts & Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Nor\u00f0urkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Su\u00f0urkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Caymanoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kyrilliskt"_s)
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
			$of("St. Lusia"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich\u2019in"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"l\u00e1gt t\u00fdskt"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liktinstein"_s)
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
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litava"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemborg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
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
			$of("Marokko"_s)
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
			$of("MF"_s),
			$of("St-Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshalloyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Nor\u00f0ur Maked\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
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
			$of("Makao SAR Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Nor\u00f0aru Mariuoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"M\u00f3ritania"_s)
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
			$of("MU"_s),
			$of(u"M\u00f3ritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"su\u00f0ur altai"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivoyggjar"_s)
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
			$of("japanskur kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrika sunnanfyri Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("hebraiskur kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"N\u00fdkaled\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolksoyggj"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Ni\u00f0urlond"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noreg"_s)
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
			$of(u"N\u00fds\u00e6land"_s)
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
			$of("seselwa creole franskt"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Franska Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua N\u00fdguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipsoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f3lland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre & Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairnoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palestinskt land\u00f8ki"_s)
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
			$of(u"grikskt t\u00f8l (sm\u00e1ir b\u00f3kstavir)"_s)
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
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("fjarskoti Osiania"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("heimur"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Nor\u00f0uramerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Su\u00f0uramerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Osiania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumenia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudiarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Vesturafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seyskelloyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Mi\u00f0amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Sv\u00f8r\u00edki"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Eysturafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Nor\u00f0urafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapor"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"strangur reglubrot st\u00edlur"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Mi\u00f0afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("sunnari partur av Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leona"_s)
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
			$of(u"vanlig tamilsk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Su\u00f0ursudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome & Prinsipi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00fdria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Esvatini"_s)
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
			$of(u"m\u00e1tingareind (USA)"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amerika nor\u00f0anfyri Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- og Caicosoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Kjad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Fronsku sunnaru landa\u00f8ki"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadsjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibia"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Eysturtimor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunesia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkaland"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taivan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturianskt"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u00f3kend skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Eysturasia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("kongo svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Su\u00f0urasia"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u00datsynningsasia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("hakka kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Su\u00f0urevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Sambandsr\u00edki Amerikas fjarskotnu oyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Sameindu Tj\u00f3\u00f0ir"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Sambandsr\u00edki Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiianskt"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prusslanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"mi\u00f0atlasfj\u00f8ll tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikanb\u00fdur"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vinsent & Grenadinoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venesuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"St\u00f3ra Bretlands Jomfr\u00faoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Sambandsr\u00edki Amerikas Jomfr\u00faoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vjetnam"_s)
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
			$of("Avstralasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis- og Futunaoyggjar"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronesi \u00f8ki"_s)
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
			$of(u"\u00f3ekta t\u00f3nalag"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u00f3ekta\u00f0ur BIDI tekstur"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
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
			$of(u"\u00f3skriva"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u02bcko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"vanlig ra\u00f0skipan"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Su\u00f0urafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"leysur reglubrot st\u00edlur"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"gregoriansk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u00f3kent \u00f8ki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("metralag"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"nor\u00f0ur sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"telugu t\u00f8l"_s)
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
			$of(u"einkul kinesisk f\u00edggjarlig t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"v\u00ed\u00f0ka\u00f0 arabisk t\u00f8l"_s)
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
			$of(u"t\u00f8l \u00ed fullari longd"_s)
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
			$of(u"nor\u00f0ur luri"_s)
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
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"r\u00f3mart\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakha"_s)
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
			$of("filipiniskt"_s)
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
			$of("balinesiskt"_s)
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
			$of("sco"_s),
			$of("skotskt"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sisilanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhasiskt"_s)
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
			$of("amhariskt"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragoniskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("japanskir stavir"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avariskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"su\u00f0ur kurdiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("aserbajdsjanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("hvitarussiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgarskt"_s)
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
			$of("bretonskt"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("myanmarskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"lao t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalani"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("tjetjenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsikanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("kekkiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"kirkju sl\u00e1viskt"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walisiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"etiopisk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danskt"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("portugiskiskt (Evropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"t\u00fdskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("vanlig gjaldoyra format"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
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
			$of("kinesiskur kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("sarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"grikskt t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"vanligur reglubrot st\u00edlur"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldaviskt"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("enskt"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskiskt"_s)
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
			$of("ovara sorbian"_s)
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
			$of("persiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("einkult"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"vesturlendsk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("vanligt"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finskt"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fijim\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("vestur balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"f\u00f8royskt"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("franskt"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"vestur fr\u00edsiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u00edrskt"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skotskt g\u00e6liskt"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galisiskt"_s)
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
			$of(u"\u00f3kent m\u00e1l"_s)
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
			$of("kroatiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiskt creole"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungarskt"_s)
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
			$of("indonesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"tibetsk t\u00f8l"_s)
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
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u00edslendskt"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italskt"_s)
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
			$of(u"su\u00f0ur s\u00e1miskt"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("maduresiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"lule s\u00e1miskt"_s)
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
			$of("inari sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiskt"_s)
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
			$of("wu kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skolt s\u00e1miskt"_s)
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
			$of("kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
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
			$of("kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("corniskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kyrgyz"_s)
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
			$of("luksemborgskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"malayalam t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgiskt"_s)
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
			$of("friuliskt"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laoskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"m\u00e1tingareind (UK)"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litaviskt"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lettiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagassiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"forsett Unicode ra\u00f0skipan"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maked\u00f3nskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaiiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmesiskt"_s)
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
			$of(u"l\u00e1gt sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("vanlig leiting"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norskt b\u00f3km\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"nor\u00f0ur ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"h\u00e1lendskt"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"n\u00fdnorskt"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norskt"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"su\u00f0ur ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanja"_s)
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
			$of(u"polyton\u00edsk"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitanskt"_s)
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
			$of(u"armensk t\u00f8l"_s)
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
			$of("ossetiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardinskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"p\u00f3lskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugiskiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ra\u00f0skipan"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("portugiskiskt (Brasilia)"_s)
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
			$of("gjaldoyra format"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 t\u00edmar klokkuskipan (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 t\u00edmar klokkuskipan (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"myanmarsk t\u00f8l"_s)
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
			$of("etiopiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 t\u00edmar klokkuskipan (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 t\u00edmar klokkuskipan (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("retoromanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("gjaldoyra"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"odia t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"kinesisk desimal t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("bakossi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"gr\u00f8nh\u00f8vdaoyggjarskt"_s)
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
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"nor\u00f0ur s\u00e1miskt"_s)
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
			$of("serbokroatiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("singalesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"s\u00e1moiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somaliskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"arabisk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swatiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"gjaldoyras roknskaparf\u00f8rsla format"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("svenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"vanlig kinesisk f\u00edggjarlig t\u00f8l"_s)
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
			$of(u"Mi\u00f0asia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Vesturasia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("buginesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonganskt"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"japanskt t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turkiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoriskt"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Eysturevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Nor\u00f0urevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Vesturevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("vanlig"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("usbekiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"l\u00e1gt saksiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("minguo kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vjetnamesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"klokkuskipan (12 \u00edm\u00f3ti 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapykk"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"k\u02bciche\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("vanligt marokanskt tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"n\u00fat\u00ed\u00f0ar vanligt arabiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolsk"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manupuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"lat\u00ednskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"einkul kinesisk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"vanlig kinesisk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"r\u00f3mart\u00f8l (sm\u00e1ir b\u00f3kstavir)"_s)
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
			$of("jiddiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
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
			$of("kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"reglubrot st\u00edlur"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("sulu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"monoton\u00edsk"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("georgianskt"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japanskt f\u00edggjarlig t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("einkult kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("vanligt kinesiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"khmer t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"gurmukhik t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"ymisk m\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"m\u00e1tingareind"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribatiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"tamilsk t\u00f8l"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("inguish"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelskt"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"t\u00f8l"_s)
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

LocaleNames_fo::LocaleNames_fo() {
}

$Class* LocaleNames_fo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fo, name, initialize, &_LocaleNames_fo_ClassInfo_, allocate$LocaleNames_fo);
	return class$;
}

$Class* LocaleNames_fo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun