#include <sun/util/resources/cldr/ext/LocaleNames_mua.h>

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

$MethodInfo _LocaleNames_mua_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_mua::*)()>(&LocaleNames_mua::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_mua_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mua",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mua_MethodInfo_
};

$Object* allocate$LocaleNames_mua($Class* clazz) {
	return $of($alloc(LocaleNames_mua));
}

void LocaleNames_mua::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mua::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_BY, "belarussiya"_s);
	$var($String, metaValue_RO, "Romaniya"_s);
	$var($String, metaValue_RU, "Russiya"_s);
	$var($String, metaValue_SO, "Somaliya"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"S\u01ddr Palestiniya"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"S\u01ddr Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Zah s\u01ddr Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"S\u01ddr Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragwai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"S\u01ddr Arabiya ma taini"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"afghanista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("antiguan ne Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("anguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"aka\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("albaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("armeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharik"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("argentiniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabiya"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("samoa Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("austriya"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"S\u01ddr Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("australiya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"azerbaija\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("bosniya ne Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("barbadiya"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("bangladeshiya"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("belgika"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("bulgariya"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Zah s\u01ddr Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"bahrai\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"beni\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("bermudiya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("bruniya"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalia"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("boliviya"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"S\u01ddr Arabiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"S\u01ddr Salomon ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("brazilya"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Saichel"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Suda\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"buta\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"S\u01ddr Sued"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"S\u01ddr Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sloveniya"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("beliziya"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Sierra Leon\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"S\u01ddr Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"S\u01ddr Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"S\u01ddr Kongo ma dii ne zair"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome ne Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("centrafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"S\u01ddr Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Swedia"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"S\u01ddr Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("ser Ivoiriya"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"S\u01ddr Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"kook ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("syili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"kameru\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"syi\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("kolombiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamul"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turkiya ne kaicos ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("syad"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("syekya"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"kap ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"S\u01ddr Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailand"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Syipriya"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajikista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"S\u01ddr Syek"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"S\u01ddr Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timoriya"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"S\u01ddr Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkiya"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turk"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinite ne Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"germa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"S\u01ddr Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taiwa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Da\u014bmark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominik"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"S\u01ddr Dominik ma lii"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ukrai\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("algeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainia"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekwat\u01ddr"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"S\u01ddr Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugwai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grek"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"zah Anglofo\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatica\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"S\u01ddr Eritre"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"S\u01ddr Vince\u014b ne Grenadi\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Espa\u014biya"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Espaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"S\u01ddr Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ser Anglofon ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"S\u01ddr amerika ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamiya"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"S\u01ddr Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persia"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"S\u01ddr Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"S\u01ddr Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"S\u01ddr Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"S\u01ddr malouniya ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Franss\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"zah s\u01ddr Franss\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ne Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabo\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"S\u01ddr Anglofo\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"S\u01ddr Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Grenad\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"S\u01ddr Guyana ma Franss\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"S\u01ddr Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"S\u01ddr Groenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"S\u01ddr Gwadeloup\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"S\u01ddr Guine"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"S\u01ddr Grek"_s)
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
			$of("Guine ma Bissao"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haussa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"S\u01ddr Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("kroatiya"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"S\u01ddr Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yeme\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungriya"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hungariya"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayot"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"S\u01ddr Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"S\u01ddr Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"S\u01ddr Ind\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"anglofo\u014b ma Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afrika nek\u01dds\u01dd\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ira\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"S\u01ddr Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italiya"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"zah Syi\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"zah s\u01ddr Japo\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"S\u01ddr Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgizsta\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("kambodiya"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"S\u01ddr Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("komora"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kmer"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"S\u01ddr Kristof ne Niev\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"S\u01ddr Kore fah s\u01dd\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"S\u01ddr Kore nek\u01dds\u01dd\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"S\u01ddr Kowait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"kayman ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazaksta\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"S\u01ddr Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Liba\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"S\u01ddr Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Licht\u01ddnstei\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"S\u01ddr Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"S\u01ddr Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"S\u01ddr Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libiya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marok"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldoviya"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"S\u01ddr Marshall ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"S\u01ddr Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"S\u01ddr Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongoliya"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"S\u01ddr Maria ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"S\u01ddr Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malasiya"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"S\u01ddr Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"S\u01ddr Mauric\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Maldiv\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"S\u01ddr Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysiya"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birmania"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambika"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledoniya mafuu"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"S\u01ddr Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolk ma la\u014bne"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"MUNDA\u014a"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"S\u01ddr ma kas\u01dd\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"zah s\u01ddr ma kas\u01dd\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norveg\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"S\u01ddr Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"S\u01ddr Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niwe"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Zeland mafuu"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Oma\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"S\u01ddr Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"P\u01ddnjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"S\u01ddr Polynesiya ma Franss\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuasiya Guine mafuu"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filipi\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Polog\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Poloniya"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"S\u01ddr P\u01ddtar ne Mik\u01ddlon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkairn"_s)
		})
	}));
	return data;
}

LocaleNames_mua::LocaleNames_mua() {
}

$Class* LocaleNames_mua::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mua, name, initialize, &_LocaleNames_mua_ClassInfo_, allocate$LocaleNames_mua);
	return class$;
}

$Class* LocaleNames_mua::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun