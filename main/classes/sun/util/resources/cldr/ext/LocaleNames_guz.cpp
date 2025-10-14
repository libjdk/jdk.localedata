#include <sun/util/resources/cldr/ext/LocaleNames_guz.h>

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

$MethodInfo _LocaleNames_guz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_guz::*)()>(&LocaleNames_guz::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_guz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_guz",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_guz_MethodInfo_
};

$Object* allocate$LocaleNames_guz($Class* clazz) {
	return $of($alloc(LocaleNames_guz));
}

void LocaleNames_guz::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_guz::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Falme za Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afuganistani"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua na Barbuda"_s)
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
			$of("AR"_s),
			$of("Ajentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa ya Marekani"_s)
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
			$of("AZ"_s),
			$of("Azabajani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia na Hezegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Babadosi"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Ubelgiji"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Bukinafaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benini"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
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
			$of("BR"_s),
			$of("Brazili"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butani"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Jamhuri ya Kidemokrasia ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Jamhuri ya Afrika ya Kati"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Kodivaa"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Visiwa vya Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameruni"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
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
			$of("Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kuprosi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Jamhuri ya Cheki"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Ujerumani"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmaki"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Jamhuri ya Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwado"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Hispania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Ufini"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Visiwa vya Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Ufaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gaboni"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Jojia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Gwiyana ya Ufaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Jibralta"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grinlandi"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadelupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ginekweta"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Ugiriki"_s)
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
			$of("Ginebisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondurasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Korasia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ayalandi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israeli"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Eneo la Uingereza katika Bahari Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Uajemi"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Aislandi"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Yordani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirigizistani"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Santakitzi na Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Korea Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Korea Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Visiwa vya Kayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakistani"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanoni"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Santalusia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lishenteni"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sirilanka"_s)
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
			$of("Litwania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lasembagi"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lativia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Moroko"_s)
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
			$of("MG"_s),
			$of("Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Visiwa vya Marshal"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myama"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Visiwa vya Mariana vya Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martiniki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrati"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Modivu"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malesia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nyukaledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nijeri"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Kisiwa cha Norfok"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Uholanzi"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwe"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepali"_s)
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
			$of("NZ"_s),
			$of("Nyuzilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omani"_s)
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
			$of("Polinesia ya Ufaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistani"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polandi"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Santapieri na Mikeloni"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkairni"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Pwetoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Ukingo wa Magharibi na Ukanda wa Gaza wa Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Ureno"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragwai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katari"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Riyunioni"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Urusi"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Visiwa vya Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Uswidi"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapoo"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siera Leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Samarino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegali"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Elsavado"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Uswazi"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Visiwa vya Turki na Kaiko"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chadi"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistani"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timori ya Mashariki"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turukimenistani"_s)
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
			$of("Uturuki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad na Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwani"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraini"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugwai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzibekistani"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikani"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Santavisenti na Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Visiwa vya Virgin vya Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Visiwa vya Virgin vya Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Walis na Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemeni"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrika Kusini"_s)
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
			$of("ak"_s),
			$of("Kiakan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Kiamhari"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Kibelarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Kibulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Kibangla"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Kichecki"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Kijerumani"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Kigiriki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Kingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Kihispania"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Kiajemi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Kifaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Kihausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Kihindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Kihungari"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Kiindonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Kiigbo"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Kiitaliano"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Kijava"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kikambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Kikorea"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Kimalesia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Kiburma"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Kinepali"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Kiholanzi"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Kipunjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Kipolandi"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Kireno"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Kiromania"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Kirusi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Kisomali"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Kiswidi"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Kitamil"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Kitailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Kituruki"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Kiukrania"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Kiurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Kivietinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Kiyoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Kichina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Kizulu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Ekegusii"_s)
		})
	}));
	return data;
}

LocaleNames_guz::LocaleNames_guz() {
}

$Class* LocaleNames_guz::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_guz, name, initialize, &_LocaleNames_guz_ClassInfo_, allocate$LocaleNames_guz);
	return class$;
}

$Class* LocaleNames_guz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun