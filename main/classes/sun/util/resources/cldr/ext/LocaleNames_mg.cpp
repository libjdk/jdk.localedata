#include <sun/util/resources/cldr/ext/LocaleNames_mg.h>

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

$MethodInfo _LocaleNames_mg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_mg::*)()>(&LocaleNames_mg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_mg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mg_MethodInfo_
};

$Object* allocate$LocaleNames_mg($Class* clazz) {
	return $of($alloc(LocaleNames_mg));
}

void LocaleNames_mg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_CH, "Soisa"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"P\u00f4rt\u00f4 Rik\u00f4"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"P\u00f4rtiogala"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portiogey"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palao"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragoay"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emir\u00e0 Arabo mitambatra"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antiga sy Barboda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
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
			$of("Amharika"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arzantina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabo"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa amerikanina"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Aotrisy"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Larenion"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Aostralia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Arob\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Romanianina"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia sy Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbady"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesy"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belzika"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rosia"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Bielorosy"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Rosianina"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Borkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Biolgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Roanda"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Biolgara"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Roande"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Borondi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermioda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia saodita"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Nosy Salomona"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brezila"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seyshela"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sodan"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhotana"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Soedy"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singaporo"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsoana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sainte-H\u00e9l\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarosy"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Saint-Marin"_s)
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
			$of("so"_s),
			$of("Somalianina"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Sorinam"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Repoblikan\u2019i Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9-et-Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(metaValue_CH)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Repoblika Ivon\u2019Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"K\u00f4ng\u00f4"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(metaValue_CH)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Soazilandy"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Nosy Kook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Shili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerona"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Sina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"K\u00f4l\u00f4mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamoila"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kosta Rik\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Nosy Turks sy Ca\u00efques"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsady"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tseky"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kiob\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Nosy Cap-Vert"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailandy"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Taioaney"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Sypra"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Repoblikan\u2019i Tseky"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelao"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Atsinanana"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Torkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tonizia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Tong\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Torkia"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tiorka"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad sy Tobag\u00f4"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemaina"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Alemanina"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Toval\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taioana"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djiboti"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmarka"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Repoblika Dominikanina"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Okraina"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Oganda"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Alzeria"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Okrainianina"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Ord\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekoatera"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Etazonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Ejypta"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Orogoay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Ozbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Grika"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Anglisy"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Firenen\u2019i Vatikana"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint-Vincent-et-les Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espaina"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Espaniola"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venezoel\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Nosy britanika virijiny"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Nosy Virijiny Etazonia"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamianina"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persa"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanoat\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandy"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Nosy Falkand"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikr\u00f4nezia"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frantsa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Frantsay"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis sy Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Angletera"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenady"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Zeorzia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guyana frantsay"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Zibraltara"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Ginea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Goadelopy"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guinea Ekoatera"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Gresy"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Goatemal\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gin\u00e9-Bisao"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haoussa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondiorasy"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroasia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongria"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"hongro\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Y\u00f4rob\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezia"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"May\u00f4ty"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonezianina"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlandy"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israely"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indy"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Faridranomasina indiana britanika"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrika Atsimo"_s)
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
			$of("Islandy"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italianina"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Sinoa, Mandarin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japoney"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Zol\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbaboe"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jama\u00efka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japana"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javaney"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kiordistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamb\u00f4dja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"K\u00f4maoro"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint-Christophe-et-Ni\u00e9v\u00e8s"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Koreanina"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Korea Avaratra"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Korea Atsimo"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"K\u00f4eity"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Nosy Kayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"La\u00f4s"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libana"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sainte-Lucie"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Listenstein"_s)
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
			$of("Litoania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lioksamboro"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Mar\u00f4ka"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f4nak\u00f4"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"M\u00f4ldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagasikara"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Nosy Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"M\u00f4ng\u00f4lia"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Nosy Mariana Atsinanana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Maoritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maorisy"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldiva"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malao\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksika"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaizia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Birmana"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambika"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nouvelle-Cal\u00e9donie"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepale"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Nosy Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nizeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nikarago\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Holandey"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u00f4rvezy"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepala"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Naor\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Nio\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nouvelle-Z\u00e9lande"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Penjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peroa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polynezia frantsay"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papouasie-Nouvelle-Guin\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipina"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f4l\u00f4na"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Poloney"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre-et-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkairn"_s)
		})
	}));
	return data;
}

LocaleNames_mg::LocaleNames_mg() {
}

$Class* LocaleNames_mg::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mg, name, initialize, &_LocaleNames_mg_ClassInfo_, allocate$LocaleNames_mg);
	return class$;
}

$Class* LocaleNames_mg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun