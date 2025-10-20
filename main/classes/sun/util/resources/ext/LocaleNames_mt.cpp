#include <sun/util/resources/ext/LocaleNames_mt.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_mt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_mt::*)()>(&LocaleNames_mt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_mt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_mt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_mt_MethodInfo_
};

$Object* allocate$LocaleNames_mt($Class* clazz) {
	return $of($alloc(LocaleNames_mt));
}

void LocaleNames_mt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_mt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirati G\u0127arab Maqg\u0127uda"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angwilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenja"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"Antilles Olandi\u017ci"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antartika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Ar\u0121entina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Amerikana"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awstrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awstralja"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"A\u017cerbaj\u0121an"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bo\u017cnija \u0126er\u017cegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladexx"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bel\u0121ju"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarija"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Ba\u0127rajn"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivja"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Bra\u017cil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Ba\u0127amas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bjelorussja"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Beli\u017ce"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos (Keeling) Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Democratic Republic of the Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Repubblika Afrikana \u010aentrali"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Svizzera"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kosta ta\u2019 l-Avorju"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u010aili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u010aina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbja"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of("Serbja u Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u010aipru"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Repubblika \u010aeka"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0120ermanja"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u0120ibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimarka"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republikka Domenikana"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u0121erija"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonja"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"E\u0121ittu"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanja"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etijopja"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fi\u0121i"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesja"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"G\u017cejjer Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Franza"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ingilterra"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0120or\u0121ja"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Gujana Fran\u010bi\u017ca"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grinlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambja"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadelupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ginea Ekwatorjali"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gre\u010bja"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("South Georgia and the South Sandwich Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gwam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Ginea-Bissaw"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gujana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0126ong Kong S.A.R., \u010aina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard Island and McDonald Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0126onduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroazja"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0126aiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungerija"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indone\u017cja"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"I\u017crael"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indja"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italja"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u0120amajka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0120ordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u0120appun"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenja"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts and Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Koreja ta\u2019 Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Koreja t\u2019Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwajt"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Ka\u017cakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanu"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa Lu\u010bija"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberja"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litwanja"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lussemburgu"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvja"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libja"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokk"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Maldova"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"G\u017cejjer ta\u2019 Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Ma\u010bedonja"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolja"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao S.A.R., China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"G\u017cejjer Marjana ta\u2019 Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mawritanja"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mawrizju"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Messiku"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malasja"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mo\u017cambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibja"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Ni\u0121er"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Ni\u0121erja"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Olanda"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norve\u0121ja"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinesja Fran\u010bi\u017ca"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papwa-Ginea \u0120dida"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippini"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonja"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre and Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinian Territory"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugall"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumanija"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russja"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"G\u0127arabja Sawdita"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u017bvezja"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapor"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenja"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard and Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakkja"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalja"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome and Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirja"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Swa\u017ciland"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks and Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010aad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territorji Fran\u010bi\u017ci ta\u2019 Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Ta\u0121ikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelaw"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor tal-Lvant"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tune\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad u Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tan\u017canija"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Stati Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"U\u017cbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent and the Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezwela"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vjetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanwatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis and Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afrika t\u2019Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u017bambja"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u017bimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Abka\u017cjan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikans"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Am\u0127ariku"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"G\u0127arbi"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarik"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"A\u017cerbaj\u0121ani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baxkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarussu"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"Bi\u0127ari"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetjan"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Brenton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnijan"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u010ae\u010ben"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010aamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsiku"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Krij"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010aek"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Slaviku tal-Knisja"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u010auvax"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welx"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Dani\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u0120ermani\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"Dive\u0127i"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"D\u017congka"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Grieg"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Ingli\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanjol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonjan"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Bask"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Fula\u0127"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Finlandi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Fi\u0121i"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Fawri\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Fran\u010bi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Fri\u017cjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Irlandi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Galliku Sko\u010b\u010bi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Gallegjan"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Gwarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Gu\u0121arati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manks"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u0126awsa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Ebrajk"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0126indi"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u0126iri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroat"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ungeri\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armenjan"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u0126erero"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indone\u017cjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupjak"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"Indone\u017cjan"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"I\u017clandi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Taljan"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inukitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("Ebrajk"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u0120appuni\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("Jiddix"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u0120avani\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0120or\u0121jan"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Ka\u017cak"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Korejan"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kaxmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Kurdi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Korniku"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kirgi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Let\u017cburgi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingaljan"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litwanjan"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latvjan (Lettix)"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malaga\u017ci"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marxall"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Ma\u010bedonjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongoljan"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("Moldavjan"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malajan"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Malti"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Burmi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nawuru"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Bokmahal Norve\u0121i\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"Ndebele, ta\u2019 Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepali\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Olandi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Ninorsk Norve\u0121i\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Norve\u0121i\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Ndebele, t\u2019Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"Nava\u0127o"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u010ai\u010bewa; Njan\u0121a"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Provenzal (wara 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"O\u0121ibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo (Afan)"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Orija"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossettiku"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Pun\u0121abi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pollakk"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paxtun"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portugi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Ke\u010bwa"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Reto-Romanz"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Rumen"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russu"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinjarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinjan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Sami ta\u2019 Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Sin\u0127ali\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slovakk"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samojan"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Xona"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Albani\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serb"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Soto, t\u2019Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Sundani\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Svedi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Swa\u0127ili"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Ta\u0121ik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Tajlandi\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Zwana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Tongan (G\u017cejjer ta\u2019 Tonga)"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tork"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Ta\u0127itjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Wigur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukranjan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"U\u017cbek"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vjetnami\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("Volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u0126o\u017ca"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddix"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u017bwang"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u010aini\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u017bulu"_s)
		})
	});
}

LocaleNames_mt::LocaleNames_mt() {
}

$Class* LocaleNames_mt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mt, name, initialize, &_LocaleNames_mt_ClassInfo_, allocate$LocaleNames_mt);
	return class$;
}

$Class* LocaleNames_mt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun