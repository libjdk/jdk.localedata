#include <sun/util/resources/cldr/ext/LocaleNames_vai_Latn.h>

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

$MethodInfo _LocaleNames_vai_Latn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_vai_Latn::*)()>(&LocaleNames_vai_Latn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_vai_Latn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_vai_Latn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_vai_Latn_MethodInfo_
};

$Object* allocate$LocaleNames_vai_Latn($Class* clazz) {
	return $of($alloc(LocaleNames_vai_Latn));
}

void LocaleNames_vai_Latn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_vai_Latn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"Jam\u00e1\u0129"_s);
	$var($String, metaValue_ES, u"Pany\u025b\u0129"_s);
	$var($String, metaValue_FR, u"F\u025b\u014bsi"_s);
	$var($String, metaValue_GR, u"H\u025bl\u025b\u014b"_s);
	$var($String, metaValue_PT, u"Potok\u00edi"_s);
	$var($String, metaValue_RW, "Rawunda"_s);
	$var($String, metaValue_SA, "Lahabu"_s);
	$var($String, metaValue_US, "Poo"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Piyuto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palesitininya Tele Jii K\u0254iy\u025b l\u00e1 h\u0129 Gaza"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(metaValue_PT)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(metaValue_PT)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palo"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Parag\u0254e"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kataha"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"A\u014bd\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Yunait\u025b Arabhi \u0190mire"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afig\u00e1ndesita\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"A\u014bt\u00edgwa \u0181ahabhuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"A\u014bg\u00edla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Aka\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Abhaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Am\u00e9niya"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amih\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"A\u014bg\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_SA)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Aj\u025b\u014bt\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Poo Sambowa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0186\u0301situwa"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reny\u0254\u0254\u0303"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0186situw\u00e9eliya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Arubha"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azabhaija\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romininya"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rom\u00edniy\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bh\u0254siniya"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Bhabhedo"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bhangilad\u025b\u0300shi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bh\u025bgiy\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u0254shiya"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Bhelarusa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"R\u0254shiy\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Bhokina F\u00e1so"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bh\u0254geriya"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bh\u0254ger\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bhar\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Bhurundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Bh\u025bni"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Bh\u025bmuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Bhurun\u025b\u0129"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Bh\u025b\u014bg\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bholiviya"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(metaValue_SA)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Sulaima\u00e3na Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Bhurazeli"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sesh\u025b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bah\u00e1masi"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bhuta\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suwid\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"S\u00edingapoo"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bhosuwana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Si\u014b H\u025blina"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Suloveninya"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Bh\u025blarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Bheliz"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Sulovakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Gbeya Bahaw\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Sa\u014b Marindo"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Sinigaha"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Som\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"K\u00e1n\u00e1da"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinambe"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Avorekoo"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sawo Tombe \u0253\u025b a Gbawoe"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u00c1f\u00edr\u00edka Luma\u00e3 T\u025b Boloe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0190l\u025b S\u00e1v\u00e1d\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"S\u00faw\u00edd\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"K\u00f3ngo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Suweza Luma\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"K\u00f3div\u00f3wa"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00edya\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Suwazi Luma\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"K\u00f3ki Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Ch\u00e9li"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kameru\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Ch\u00e1\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"K\u0254l\u0254mbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Tam\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"K\u00f3s\u00edta R\u00edko"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Tukisi \u0253\u025b\u0300 Kaik\u00f3osi Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ch\u00e1di"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ch\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kiyubha"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Kepi V\u025bdi Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tai Luma\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"T\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Sa\u025bpur\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajikisita\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ch\u025bki Boloe"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelo"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tele \u0181\u0254\u0301 Tim\u0254\u0254\u0303"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Tukim\u025bnisita\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"T\u0254nga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u0254\u0301\u0254\u0301ki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"T\u0254\u0301ki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Turindeda \u0253\u025b\u0301 Tobhego"_s)
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
			$of(u"Tuv\u00e1lu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taiwa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibhuti"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Ta\u014bzaninya"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimaha"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dom\u00edin\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dom\u00edin\u00edka \u0181oloe"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Yukur\u00e9\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Yuganda"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Agiriya"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Yukureniy\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0186du"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(metaValue_US)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0190\u0301k\u00faw\u00e9d\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0190sit\u00f3ninya"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"M\u00eds\u00e9la"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Yuweg\u0254we"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Yubh\u025bkisita\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(metaValue_US)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatika\u014b \u0181oloe"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0190ritera"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Si\u014b Vi\u014bsi"_s)
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
			$of(u"\u00cdtiy\u00f3piya"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"V\u025bn\u025bzuwela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Jeng\u00e9esi Bh\u025b\u025b L\u0254 Musu Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Poo Bh\u025b\u025b l\u0254 Musu Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Viyam\u00ed\u0129"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Viyanami"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"P\u025b\u025bsiy\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanuw\u00e1tu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Fi\u014bl\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"F\u00edji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"F\u00e1h\u00e1ki Luma Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikonisiya"_s)
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
			$of(u"Wal\u00edsi"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabh\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Yunait\u025b K\u00ed\u014bd\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samowa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Gurin\u00e9da"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"J\u0254\u0254jiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"F\u025b\u014bsi Giwana"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Jibhurata"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Jamba Kuwa Luma\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guwadelupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"D\u00fa\u00fany\u00e1 T\u025b Giini"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Guwat\u025bmala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guwami"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gini Bhisawo"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hawusa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"H\u00edi\u014bdi"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"H\u0254ndura"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Koresiya"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"H\u00e1iti"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yem\u025bni"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"H\u0254\u0301ngare"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"H\u0254\u014bg\u00e9r\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Y\u00f3r\u00f3bha"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u00cdndonisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mavote"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u00cdndonisiy\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u00c1re Luma\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u00cdgbo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Bhan\u00edsil\u00e1ila"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdndiya"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Jeng\u00e9esi Gbawoe \u00cdndiya K\u0254iy\u025b L\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afirika K\u0254i Le\u014b\u014b\u025b L\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ira\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u00c1isi Luma\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u00cdtali"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"It\u00e1liy\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Chani\u0129"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Japan\u00ed\u0129"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Z\u00falu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabhuwe"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"J\u0254\u0254da\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Javan\u00ed\u0129"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"K\u00e9nya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kigisita\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Ka\u014bbhodiya"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribhati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorosi"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Kim\u025b\u025b\u0303 t\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Si\u014b Kisi \u0253\u025b\u0301 Nevisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Kor\u00edy\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Koriya K\u0254i Ka\u014bnd\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Koriya K\u0254i Le\u014b\u014b\u025b L\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Keema\u014b Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazasita\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Lawosi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Lebhan\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Si\u014b Lusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Suri La\u014bka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laibhiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Lis\u00f3to"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituweninya"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lusimb\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lativiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Lebhiya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"M\u0254roko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u0254nako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"M\u0254lidova"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagasita"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Masha Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Miyamaha"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"M\u0254ngoliya"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"K\u0254i Ka\u014bnd\u0254 Mariyana Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Matiniki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"M\u0254retaninya"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"M\u0254serati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Mal\u00e9ee"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malita"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"M\u0254resh\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malidavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u025bs\u00edko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Bh\u025bm\u00edsi"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Kalidoninya N\u00e1ma\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Na\u0129ja"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nipali"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"N\u0254f\u0254 Ti\u014b\u014b\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Na\u0129jiriya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaraguwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Nid\u0254l\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"D\u0254chi"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u0254\u0254we"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepa"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Noru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niwe"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Zil\u025b\u014b N\u00e1ma\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Oma\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Pu\u014bjabhi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"P\u025bru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"F\u025b\u014bsi Polin\u00edsiya"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papuwa Gini N\u00e1ma\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"F\u00e9lepi\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakisita\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f3l\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"P\u0254\u0301l\u00e9si"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Si\u014b Piiy\u025b \u0253\u025b\u0301 Mikel\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitik\u025b\u014b"_s)
		})
	}));
	return data;
}

LocaleNames_vai_Latn::LocaleNames_vai_Latn() {
}

$Class* LocaleNames_vai_Latn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_vai_Latn, name, initialize, &_LocaleNames_vai_Latn_ClassInfo_, allocate$LocaleNames_vai_Latn);
	return class$;
}

$Class* LocaleNames_vai_Latn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun