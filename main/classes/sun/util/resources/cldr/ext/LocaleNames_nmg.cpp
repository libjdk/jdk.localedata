#include <sun/util/resources/cldr/ext/LocaleNames_nmg.h>

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

$MethodInfo _LocaleNames_nmg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_nmg::*)()>(&LocaleNames_nmg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_nmg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_nmg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_nmg_MethodInfo_
};

$Object* allocate$LocaleNames_nmg($Class* clazz) {
	return $of($alloc(LocaleNames_nmg));
}

void LocaleNames_nmg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nmg::getContents() {
	$var($String, metaValue_ES, u"Pa\u014b\u00e1"_s);
	$var($String, metaValue_FR, "Fala"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pu\u025brto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Pal\u025bstin"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"P\u0254rtugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Ki\u025bl b\u00f3 p\u0254\u0304rtug\u025b\u0302"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palo"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"And\u0254\u0301ra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Minlamb\u0254\u0301 Nsa\u014b\u0301nsa m\u00ed Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00edga b\u00e1 Barb\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Angu\u00edlla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Ki\u025bl akan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Ki\u025bl amaria"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argent\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Ki\u025bl b\u2019\u00e1rabe"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoa m \u0301Am\u025b\u0301rka"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00d6trish"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9uni\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u00d6strali\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u00c1r\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerba\u00efja\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Roumania"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Ki\u025bl b\u00f3 rum\u025b\u0302n"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnia na \u0190rzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbado"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"B\u025b\u014bglad\u025bsh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u025blgik"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russi"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Ki\u025bl belarussie"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Ki\u025bl russia"_s)
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
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Ki\u025bl bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Ki\u025bl rwand\u0101"_s)
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
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"B\u025brmuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brun\u025bi"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Ki\u025bl bengalia"_s)
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
			$of(u"Ma\u014b\u0301 m\u00e1 Salom\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Br\u00e9sil"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seych\u025blle"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Suda\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Buta\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Su\u025bd"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Lina"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"B\u025bliz"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Sierra Le\u0254n"_s)
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
			$of(u"Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Ki\u025bl somali\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kong\u00f3 Za\u00efre"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tom\u00e9 ba Prinship"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Sentrafr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Salvad\u0254r"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Ki\u025bl b\u00f3 suedois"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Switz\u025brland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kote d\u00b4Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Ma\u014b\u0301 m\u00e1 Kook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Tshili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Shine"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"K\u0254l\u0254\u0301mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Ki\u025bl tamul"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kosta R\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Ma\u014b\u0301 m\u00e1 Turk na Kaiko"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tshad"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ki\u025bl b\u00f3 tch\u025bk"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Ma\u014b\u0301 m\u00e1 Kapv\u025br"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Ta\u00efland"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Ki\u025bl tha\u00ef"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Sipria"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajikista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Nlamb\u0254\u0301 b\u00f3 tsch\u025bk"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelo"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tim\u0254r tsindik\u0113h"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkm\u025bnista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunisi\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"T\u0254nga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Ki\u025bl b\u00f3 turk"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad ba Tob\u00e1g\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Jaman"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"J\u00e1man"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tuval\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Ta\u00efwan"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Jib\u00fati"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e1n\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danemark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Domin\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Nlamb\u0254\u0301 Domin\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ukr\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ki\u025bl b\u2019ukr\u025b\u0304nien"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Ki\u025bl \u00fardu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuateur"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Am\u025b\u0155ka"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0190stonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u00c4gypt\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usb\u01ddkista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Ki\u025bl b\u00f3 gr\u025bk"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Ng\u025b\u0304l\u025b\u0304n"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatika\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Erytrea"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ba Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ethiopi\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"V\u01ddn\u01ddzuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Minsil\u025b\u0301 m\u00edma\u014b m\u00ed ng\u025b\u0304l\u025b\u0304n"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Minsil\u025b m\u00ed ma\u014b\u0301 m\u00b4Am\u025brka"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Ki\u025bl vi\u025btnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vi\u025btnam"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Ki\u025bl p\u025brsia"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlande"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fiji\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Ma\u014b m\u00e1 Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ba Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Nlamb\u0254\u0301 Ng\u025bl\u025bn"_s)
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
			$of(u"J\u0254rgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guyane Fala"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"G\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gilbratar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guine Ekuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u025bce"_s)
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
			$of("Guine Bisso"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Ki\u025bl m\u00e1w\u00fas\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Ki\u025bl b\u2019indien"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0186nd\u00faras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroasia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ha\u00efti"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Y\u01ddm\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u0186ngr\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ki\u025bl b\u2019\u0254\u0301ngrois"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Yor\u00fab\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"May\u0254t"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Ki\u025bl indonesie"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Ki\u025bl ikbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u00c4sr\u025bl"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Nlamb\u0254\u0301 ng\u025bl\u025bn ma y\u00ed ma\u014b ntsi\u025bh"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afr\u00edka y\u00ed s\u00ed"_s)
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
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Ki\u025bl italia"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Ki\u025bl b\u00f3 chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Ki\u025bl b\u00f3 japon\u025b\u030c"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbabw\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"J\u0254rdania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Ki\u025bl b\u00f3 javan\u025b\u030c"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"K\u025bnya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kyrgysta\u014b"_s)
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
			$of(u"K\u0254m\u0254r"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Ki\u025bl b\u00f3 m\u025br"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts na Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Ki\u025bl kor\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kor\u00e9 y\u00ed bvu\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kor\u00e9 y\u00ed s\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Kow\u025bit"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Ma\u014b\u0301 m\u00e1 kumbi"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazaksta\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Liba\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lishenstein"_s)
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
			$of(u"Lituani\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
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
			$of(u"Mar\u0254k"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"M\u0254ldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Ma\u014b\u0301 m\u00e1 Marshall"_s)
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
			$of(u"M\u0254ngolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Ma\u014b\u0301 Mari\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"M\u0254nserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Ki\u025bl Mal\u025b\u030csi\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Morisse"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivia"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u025bxik"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Ki\u025bl birmania"_s)
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
			$of("Kaledoni nwanah"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Ki\u025bl nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Ma\u014b\u0301 m\u00e1 N\u0254rf\u0254rk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Ned\u025brland"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Ki\u025bl b\u00f3llandais"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u0254rv\u025bg"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Noru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niu\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Zeland nwanah"_s)
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
			$of(u"Ki\u025bl p\u025bndjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polynesia Fala"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Guine Papuasi"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u0254l\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Ki\u025bl p\u0254l\u0254\u014be"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint Peter ba Mikel\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkairn"_s)
		})
	}));
	return data;
}

LocaleNames_nmg::LocaleNames_nmg() {
}

$Class* LocaleNames_nmg::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nmg, name, initialize, &_LocaleNames_nmg_ClassInfo_, allocate$LocaleNames_nmg);
	return class$;
}

$Class* LocaleNames_nmg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun