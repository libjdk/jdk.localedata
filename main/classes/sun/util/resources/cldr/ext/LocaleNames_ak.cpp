#include <sun/util/resources/cldr/ext/LocaleNames_ak.h>

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

$MethodInfo _LocaleNames_ak_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ak::*)()>(&LocaleNames_ak::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ak",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ak_MethodInfo_
};

$Object* allocate$LocaleNames_ak($Class* clazz) {
	return $of($alloc(LocaleNames_ak));
}

void LocaleNames_ak::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ak::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, "Gyaaman"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pu\u025bto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestaen West Bank ne Gaza"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"P\u0254tugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"P\u0254\u0254tugal kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kata"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua ne Baabuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguila"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albenia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Aamenia"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amarik"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Agy\u025bntina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabik"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Am\u025brika Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0186stria"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reyuni\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0186strelia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azebaegyan"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Romenia kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnia ne H\u025bzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Baabados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglad\u025bhye"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u025blgyium"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u0254hyea"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarus kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Rahyia kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"B\u0254kina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"B\u0254lgeria"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"B\u0254lgeria kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Rewanda kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Baren"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"B\u025bnin"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"B\u025bmuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunae"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomon Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seyhy\u025bl"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"B\u0254tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovinia"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"B\u025blarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Beliz"_s)
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
			$of("so"_s),
			$of("Somalia kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo (Zair)"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 and Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Afrika Finimfin Man"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0190l Salvad\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Sweden kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Swetzaland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"La C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Kook Nsup\u0254w"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Kyili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kam\u025brun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kyaena"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"K\u0254sta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks ne Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Kyad"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ky\u025bk kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Kepv\u025bdfo Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Taeland"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Taeland kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Saepr\u0254s"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ky\u025bk Kurok\u025bse"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tim\u0254 Boka"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u025bkm\u025bnistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunihyia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u025b\u025bki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"T\u025b\u025bki kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad ne Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
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
			$of("DJ"_s),
			$of("Gyibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u025bnmak"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"D\u0254meneka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"D\u0254meneka Kurok\u025bse"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukren"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0186lgyeria"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukren kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ikuwad\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Am\u025brika"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0190stonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Nisrim"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Yurugwae"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzb\u025bkistan"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Greek kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Bor\u0254fo"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican Man"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0190ritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ne Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spain"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spain kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ithiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britainfo Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Am\u025brika Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vi\u025btnam kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vi\u025btnam"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"P\u025b\u025bhyia kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Figyi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"F\u0254lkman Aeland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Maekronehyia"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Fr\u025bnkyeman"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Fr\u025bnkye"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ne Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ahendiman Nkabom"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Gy\u0254gyea"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Fr\u025bnkye Gayana"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gaana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gyebralta"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenman"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guwadelup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Gini Ikuweta"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greekman"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gini Bisaw"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gayana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"H\u0254nduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Krowehyia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Heiti"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Y\u025bmen"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hangari"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hangri kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Ind\u0254nehyia"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"May\u0254te"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonihyia kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Aereland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britenfo H\u0254n Man W\u0254 India Po No Mu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrika Anaafo"_s)
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
			$of("Aesland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itali"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italy kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Kyaena kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Gyapan kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zembabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Gyameka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Gy\u0254dan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Gyapan"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Gyabanis kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"K\u025bnya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"K\u025b\u025bgestan"_s)
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
			$of(u"K\u0254m\u0254r\u0254s"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kambodia kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint Kitts ne N\u025bves"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Korea kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Etifi Koria"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Anaafo Koria"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwete"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kemanfo Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"L\u025bban\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lektenstaen"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laeberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"L\u025bsutu"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituwenia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Laksemb\u025bg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
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
			$of(u"M\u0254nako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"M\u0254ldova"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaska"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Miyanma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"M\u0254ngolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Northern Mariana Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Matinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"M\u0254retenia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Mantserat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malay kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u0254lta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"M\u0254rehye\u0254s"_s)
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
			$of(u"M\u025bksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malehyia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"B\u025b\u025bmis kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledonia Foforo"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nigy\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"N\u025bpal kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"N\u0254folk Aeland"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Naegyeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nekaraguwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"N\u025bd\u025bland"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"D\u025b\u025bkye"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u0254\u0254we"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"N\u025bp\u0254l"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Naworu"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niyu"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Ziland Foforo"_s)
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
			$of("Pungyabi kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Fr\u025bnkye P\u0254lenehyia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Guinea Foforo"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"P\u0254land kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre ne Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		})
	}));
	return data;
}

LocaleNames_ak::LocaleNames_ak() {
}

$Class* LocaleNames_ak::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ak, name, initialize, &_LocaleNames_ak_ClassInfo_, allocate$LocaleNames_ak);
	return class$;
}

$Class* LocaleNames_ak::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun