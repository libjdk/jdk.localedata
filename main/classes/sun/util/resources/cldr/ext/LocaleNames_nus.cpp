#include <sun/util/resources/cldr/ext/LocaleNames_nus.h>

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

$MethodInfo _LocaleNames_nus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_nus::*)()>(&LocaleNames_nus::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_nus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_nus",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_nus_MethodInfo_
};

$Object* allocate$LocaleNames_nus($Class* clazz) {
	return $of($alloc(LocaleNames_nus));
}

void LocaleNames_nus::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nus::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Abganithtan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antiguaa k\u025bn\u025b Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"A\u014bgu\u025bla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"A\u025brm\u00e4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"A\u014bgola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"A\u025brgentin"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerika thamow"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Atht\u025bria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ath\u0254ra\u0331lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Adhe\u0331rbe\u0331ja\u0331n"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bothnia k\u025bn\u025b \u0263\u00e4rgobinia"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"B\u00e4rbadoth"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bengeladiec"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Be\u0331lgim"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Burkin\u025b pa\u0331thu"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulga\u0331a\u0331ria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Ba\u0331reen"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Be\u0331ni\u0331n"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Be\u0331rmudaa"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Burun\u025by"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bulibia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"B\u00e4raadhiil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"B\u00e4mu\u0254th"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Buta\u0331n"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bothiwaana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Be\u0331l\u025bruth"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Bilidha"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"K\u00e4n\u025bda"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"C\u025bntr\u0254l aprika repu\u0254blic"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"K\u0254\u014bg\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kodibo\u0331o\u0331"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Kuk \u0263a\u0331yl\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Cili\u0331"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"K\u025bm\u025brun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Cayna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kothtirika"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"K\u025bp bedi \u0263a\u0331yl\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Korwaatia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Burutic \u0263e\u0331ndian oce\u0331n"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kombodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komruth"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kaym\u025bn \u0263a\u0331yl\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ca\u0331d"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Burutic dhu\u0254\u0331\u0254\u0331l be\u0331rgin"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Thok aka\u0331ni"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Thok bunyni"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Thok Jalabni"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Thok b\u00e4l\u00e4rutha"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Thok b\u00e4lga\u0331a\u0331riani"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Thok b\u00e4ngali"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Thok cik"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Thok jarmani"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Thok girikni"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Thok li\u014bli\u0331thni"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Thok i\u0331thpaaniani"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Thok perthiani"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Thok p\u0254r\u0254thani"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Thok \u0263owthani"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Thok \u0263\u00e4ndini"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Thok \u0263\u00e4nga\u0331a\u0331ri\u025bni"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Thok indunithiani"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Thok i\u0331gboni"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Thok i\u0331taliani"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Thok japanni"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Thok jabanithni"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Thok kameeri"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Thok kuriani"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Thok may\u025byni"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Thok bormi\u0331thni"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Thok napalni"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Thok da\u0331c"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Thok pu\u0254njabani"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Thok p\u00f6licni"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Thok pu\u0254tigali"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Thok ji\u0331 r\u00f6m"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Thok ra\u0331ciaani"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Thok ruaandani"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Thok thomaaliani"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Thok i\u0331thwidicni"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Thok tamilni"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Thok tayni"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Thok turkicni"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Thok ukeraanini"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Thok udoni"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Thok betnaamni"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Thok yurubani"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Thok cayna"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Thok dhuluni"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Thok Nath"_s)
		})
	}));
	return data;
}

LocaleNames_nus::LocaleNames_nus() {
}

$Class* LocaleNames_nus::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nus, name, initialize, &_LocaleNames_nus_ClassInfo_, allocate$LocaleNames_nus);
	return class$;
}

$Class* LocaleNames_nus::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun