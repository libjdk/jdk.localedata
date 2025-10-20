#include <sun/util/resources/cldr/ext/LocaleNames_lkt.h>

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

$MethodInfo _LocaleNames_lkt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_lkt::*)()>(&LocaleNames_lkt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_lkt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lkt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lkt_MethodInfo_
};

$Object* allocate$LocaleNames_lkt($Class* clazz) {
	return $of($alloc(LocaleNames_lkt));
}

void LocaleNames_lkt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lkt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Mak\u021f\u00e1sitomni"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"H\u00e1sapa Mak\u021f\u00e1wita"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Kh\u00e9ya W\u00edta"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Haz\u00edla Mak\u021f\u00e1wita"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Wa\u0161\u00ed\u010du Mak\u021f\u00e1wita"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"U\u014b\u010d\u00edyapi Mak\u021f\u00f3\u010dhe"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"P\u021fe\u010dh\u00f3ka\u014bha\u014bska Mak\u021f\u00f3\u010dhe"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Iy\u00e1\u0161i\u010da Mak\u021f\u00f3\u010dhe"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Spay\u00f3la\u021f\u010de Mak\u021f\u00f3\u010dhe"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Kis\u00fa\u014bla Mak\u021f\u00f3\u010dhe"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Spay\u00f3la Mak\u021f\u00f3\u010dhe"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"M\u00edlaha\u014bska T\u021fam\u00e1k\u021fo\u010dhe"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Abkhaz Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"Avestan Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Afrikaans Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amharic Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Arab Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Assamese Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"Avaric Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Azerbaijani Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"Bashkir Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Belarus Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bulgar Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Bengali Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tibetan Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Bosnia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Catalan Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Chechen Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"Ma\u0161t\u00ed\u014b\u010da Oy\u00e1te Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Czech Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"Chuvash Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Wales Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Dane Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Iy\u00e1\u0161i\u010da Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Greece Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Wa\u0161\u00ed\u010duiyapi"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Esperanto Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Spay\u00f3la Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Estonia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Basque Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Persian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Finnish Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Fiji Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Faroese Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Wa\u0161\u00ed\u010du Ik\u010d\u00e9ka Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Irish Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Galician Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Guarani Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Gujarati Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Hausa Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Hebrew Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Hindi Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Croatian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Haiti Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Hungary Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Armenia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indonesia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Igbo Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Iceland Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Italia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Kis\u00fa\u014bla Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Java Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Georia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Kazakh Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Khmer Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"Kannada Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Korea Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Kashmir Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Kurd Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kirghiz Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Latin Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Luxembourg Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"Lao Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Lithuania Iy\u00e1pilt"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Latvia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malagasy Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Maori Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Macedonia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"Malayalam Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Marathi Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Malay Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Maltese Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Burmese Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepal Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Dutch Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u0160in\u00e1glegle\u01e7a Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u021ea\u021f\u00e1t\u021fu\u014bwa\u014b Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"Oriya Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Punjabi Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Polish Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Pashto Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portuguese Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Quechua Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Romansh Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Romanian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Russia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Sanskrit Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"Sindhi Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Sinhala Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Slovak Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Slovenian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Somali Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Albanian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Serbia Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Sundanese Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Swedish Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Swahili Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Tamil Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"Telugu Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Tajik Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Thai Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Tigrinya Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Turkmen Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Tongan Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Turkish Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Tatar Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Uyghur Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ukrain Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Urdu Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Uzbek Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vietnamese Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Wolof Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Xhosa Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Yoruba Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"P\u021fe\u010dh\u00f3ka\u014b H\u00e1\u014bska Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Zulu Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"Adyghe Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"It\u00f3\u01e7ata Altai Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Ma\u021fp\u00edya T\u021f\u00f3 Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"Baluchi Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"Bamun Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"Beja Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"Buriat Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"Mari Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Cherokee Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u0160ah\u00edyela Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Coptic Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Crimean Turkish Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"Dak\u021f\u00f3tiyapi"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"Dargwa Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"Dogri Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Filipino Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"Gbaya Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawaiian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"Ingush Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"Kara-Kalpak Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"Kabardian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"Lahnda Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Lak\u021f\u00f3l\u02bciyapi"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"Mizo Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Namipuri Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"Comonian Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Tukt\u00e9 iy\u00e1pi t\u021fa\u014b\u00ed\u014b \u0161ni"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"Zaza Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0160agl\u00e1\u0161a Wa\u0161\u00ed\u010duiyapi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"M\u00edlaha\u014bska Wa\u0161\u00ed\u010duiyapi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Spay\u00f3la\u021f\u010da Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Flemish Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Wiy\u00f3\u021fpeyata Spay\u00f3la Iy\u00e1pi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"P\u021fe\u010dh\u00f3ka\u014b H\u00e1\u014bska Iy\u00e1pi Ik\u010d\u00e9ka"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"P\u021fe\u010dh\u00f3ka\u014b H\u00e1\u014bska Iy\u00e1pi \u021e\u010de"_s)
		})
	}));
	return data;
}

LocaleNames_lkt::LocaleNames_lkt() {
}

$Class* LocaleNames_lkt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lkt, name, initialize, &_LocaleNames_lkt_ClassInfo_, allocate$LocaleNames_lkt);
	return class$;
}

$Class* LocaleNames_lkt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun