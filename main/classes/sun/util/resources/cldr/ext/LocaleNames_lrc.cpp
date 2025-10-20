#include <sun/util/resources/cldr/ext/LocaleNames_lrc.h>

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

$MethodInfo _LocaleNames_lrc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_lrc::*)()>(&LocaleNames_lrc::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_lrc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lrc",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lrc_MethodInfo_
};

$Object* allocate$LocaleNames_lrc($Class* clazz) {
	return $of($alloc(LocaleNames_lrc));
}

void LocaleNames_lrc::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lrc::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, u"\u0628\u0623\u0646\u06af\u0627\u0644\u06cc"_s);
	$var($String, metaValue_bo, u"\u062a\u0623\u0628\u0623\u062a\u06cc"_s);
	$var($String, metaValue_el, u"\u06cc\u0648\u0659\u0646\u0627\u0646\u06cc"_s);
	$var($String, metaValue_gu, u"\u06af\u0648\u062c\u0623\u0631\u0627\u062a\u06cc"_s);
	$var($String, metaValue_he, u"\u0639\u0626\u0628\u0631\u06cc"_s);
	$var($String, metaValue_hy, u"\u0623\u0631\u0645\u0623\u0646\u06cc"_s);
	$var($String, metaValue_ja, u"\u062c\u0627\u067e\u0648\u0659\u0646\u06cc"_s);
	$var($String, metaValue_ka, u"\u06af\u0648\u0631\u062c\u06cc"_s);
	$var($String, metaValue_km, u"\u062e\u0626\u0645\u0626\u0631"_s);
	$var($String, metaValue_ko, u"\u06a9\u0648\u0631\u0626 \u06cc\u06cc"_s);
	$var($String, metaValue_la, u"\u0644\u0627\u062a\u06cc\u0646"_s);
	$var($String, metaValue_ml, u"\u0645\u0627\u0644\u0627\u06cc\u0627\u0645"_s);
	$var($String, metaValue_mn, u"\u0645\u0648\u063a\u0648\u0644\u06cc"_s);
	$var($String, metaValue_or, u"\u0626\u0648\u0631\u06cc\u0627"_s);
	$var($String, metaValue_ta, u"\u062a\u0627\u0645\u06cc\u0644"_s);
	$var($String, metaValue_te, u"\u062a\u0626\u0644\u0626\u06af\u0648"_s);
	$var($String, metaValue_th, u"\u062a\u0627\u06cc\u0644\u0623\u0646\u062f\u06cc"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u0633\u0627\u0646\u06af\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0646\u06cc\u0627\u0646 \u06a9\u0648\u0659\u0644\u0626"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u067e\u0623\u0634\u062a\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u067e\u0648\u0631\u062a\u0626\u063a\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u0644\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u0646\u0626\u0634\u0648\u0659\u0646\u06d5 \u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u0641\u06cc\u0644\u06cc\u067e\u06cc\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u067e\u0648\u0631\u062a\u0626\u063a\u0627\u0644\u06cc \u0628\u0626\u0631\u0626\u0632\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u0645\u0627\u062e\u0648\u06a4\u0627 \u0645\u06cc\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u0644\u0648\u0659\u0626\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u0644\u0627\u0626\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u0645\u0626\u062a\u0627\u065b"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0626\u0633\u067e\u0627\u0646\u06cc\u0627\u06cc\u06cc \u0626\u0648\u0631\u0648\u0659\u067e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u062a\u0626\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0622\u0630\u0623\u0631\u0628\u0627\u06cc\u0626\u062c\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u06a9\u0648\u0686\u0648\u0659\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u0641\u0626\u0644\u0627\u0645\u0627\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0622\u0641\u0631\u06cc\u06a9\u0627\u0646\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u0628\u0648\u062f\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u0622\u06a9\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0623\u0645\u06be\u0623\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u0645\u0627\u06a9\u0648\u0659\u0646\u062f\u0626"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0639\u0623\u0631\u0623\u06a4\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u062f\u0648\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0623\u0631\u0623\u06a4\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u0626\u062a\u0648\u0659\u06cc\u0648\u0659\u067e\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0626\u0641\u0631\u06cc\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0622\u0633\u0627\u0645\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0626\u0645\u0631\u06cc\u06a9\u0627 \u0634\u0648\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u0626\u0645\u0631\u06cc\u06a9\u0627 \u06be\u0627\u0631\u06af\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\u06a9\u0648\u0631\u062f\u06cc \u06be\u0627\u0631\u06af\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0626\u06cc\u0646\u06af\u06cc\u0644\u06cc\u0633\u06cc \u0626\u0645\u0631\u06cc\u06a9\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u06be\u0648\u0645 \u067e\u0626\u06a4\u0623\u0646\u062f \u062c\u0623\u06be\u0648\u0659\u0646 \u0622\u06a4"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0622\u0630\u0623\u0631\u0628\u0627\u06cc\u0626\u062c\u0627\u0646\u06cc \u06be\u0627\u0631\u06af\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0631\u0648\u0645\u0627\u0646\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u0631\u0627\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0631\u0648\u0645\u0627\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0628\u0627\u0634\u06a9\u06cc\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0631\u0648\u0659\u0633\u06cc\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0628\u0626\u0644\u0627\u0631\u0648\u0659\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0631\u0648\u0659\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0628\u0648\u0644\u063a\u0627\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u06a9\u06cc\u0646\u06cc\u0627\u0631\u0648\u0622\u0646\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u06a9\u0627\u0628\u0627\u0631\u062f\u06cc\u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0626\u06cc\u0646\u06af\u06cc\u0644\u06cc\u0633\u06cc \u0626\u0648\u0633\u062a\u0627\u0631\u0627\u0644\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u0628\u0627\u0645\u0628\u0627\u0631\u0627"_s)
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
			$of("sa"_s),
			$of(u"\u0633\u0627\u0646\u0633\u06a9\u0626\u0631\u06cc\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u062a\u0627\u0633\u0627\u06a4\u0627\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0628\u0626\u0631\u0626\u0632\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0628\u0626\u0631\u0626\u062a\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0628\u0648\u0633\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0633\u0626\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u0633\u0648\u0659\u06af\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u0645\u06cc\u0646\u062c\u0627 \u0626\u0645\u0631\u06cc\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u0633\u0627\u0645\u06cc \u0634\u0648\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u0633\u0627\u0646\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u0645\u06cc\u0627\u0646\u0645\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0633\u06cc\u0646\u06be\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u0633\u0626\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0626\u0645\u0631\u06cc\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0626\u0633\u0644\u0648\u06a4\u0627\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0626\u0633\u0644\u0648\u06a4\u0626\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0634\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0633\u0648\u0659\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u0645\u0627\u067e\u0648\u0659\u0686\u0626"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0623\u062f\u0623\u062f\u06cc\u0627 \u0639\u0623\u0631\u0623\u06a4\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u06a9\u0627\u062a\u0627\u0644\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0622\u0644\u0628\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0633\u0626\u0631\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0645\u0627\u0632\u0623\u0646\u062f\u0623\u0631\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u06a9\u06cc\u0627\u0631\u0627\u0628\u0648\u0631\u0648 \u0633\u0626\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u0686\u0626\u0686\u0626\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u0633\u0648\u0659\u062f\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0633\u0648\u0659\u0626\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0633\u0623\u06a4\u0627\u062d\u06cc\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u0686\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u06a9\u0648\u0631\u06cc\u0633\u06a9\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u0622\u0633\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0626\u0645\u0631\u06cc\u06a9\u0627 \u06a4\u0627\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0622\u0633\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u0686\u0648\u0627\u0634\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u062a\u0627\u062c\u06cc\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u062a\u06cc\u06af\u0631\u06cc\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u06a4\u0626\u0644\u0632\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0626\u06cc\u0646\u06af\u06cc\u0644\u06cc\u0633\u06cc \u06a9\u0627\u0646\u0627\u062f\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u06a9\u0627\u0631\u0627\u0626\u06cc\u0628"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u062a\u0648\u0631\u06a9\u0623\u0645\u0623\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u062a\u0648\u0659\u0646\u06af\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u062c\u0648\u0644\u0627 \u0641\u0648\u0659\u0646\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u062f\u0627\u0646\u0645\u0627\u0631\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u062a\u0648\u0631\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u067e\u0648\u0631\u062a\u0626\u063a\u0627\u0644\u06cc \u0626\u0648\u0631\u0648\u0659\u067e\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u062a\u0627\u062a\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0622\u0644\u0645\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u0622\u0644\u0645\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u0686\u06cc\u06af\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u0628\u0626\u0631\u0626\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u06a9\u0626\u06a4\u0627\u0633\u06cc\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u0646\u06cc\u0633\u0626\u0633\u06d5 \u0646\u0627\u062f\u06cc\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u0628\u06cc\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u0626\u0648\u0631\u0648\u0659\u067e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u0633\u0623\u06a4\u0627\u062d\u06cc\u0644\u06cc \u06a9\u0648\u0646\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0626\u0648\u06cc\u063a\u0648\u0659\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u0626\u0633\u067e\u0627\u0646\u06cc\u0627\u06cc\u06cc \u0626\u0645\u0631\u06cc\u06a9\u0627 \u0644\u0627\u062a\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u062c\u0627\u0626\u0648\u0641\u062a\u0627\u0623"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0632\u0648\u0659\u0646\u06af\u062e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0626\u0648\u06a9\u0631\u0627\u06cc\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u0628\u0626\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u0633\u06cc\u0646\u0627\u06be\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0626\u0648\u0631\u062f\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u06a4\u0648\u0644\u0627\u062a\u06cc\u0627 \u06cc\u0623\u06a9\u0627\u06af\u0626\u0631\u062a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u0632\u0627\u0631\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u06be\u0627\u06a4\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u0626\u06a4\u0626"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u0631\u0648\u0645\u0627\u0646\u06cc\u0627\u06cc\u06cc \u0645\u0648\u0644\u062f\u0627\u06a4\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0626\u0648\u0632\u0628\u0623\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u062a\u0627\u0645\u0627\u0632\u06cc\u063a \u0645\u06cc\u0646\u062c\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0626\u06cc\u0646\u06af\u06cc\u0644\u06cc\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0626\u0633\u067e\u0626\u0631\u0627\u0646\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u0622\u0644\u0645\u0627\u0646\u06cc \u06be\u0627\u0631\u06af\u06d5 \u062c\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u0686\u0648\u0631\u0648\u0659\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0626\u0633\u067e\u0627\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0626\u0633\u062a\u0648\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0628\u0627\u0633\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u06be\u0627\u0646\u06af\u0648\u0659\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u062a\u0623\u0642\u06a4\u06cc\u0645 \u06af\u0623\u0631\u0626\u06af\u0648\u0659\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u06a4\u06cc\u06cc\u0626\u062a\u0646\u0627\u0645\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u06a9\u06cc \u06cc\u0648\u0631\u0627 \u0686\u06cc\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u062a\u0627\u0686\u0626\u0644\u06be\u06cc\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u0633\u0648\u0631\u0628\u06cc \u06a4\u0627\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u06be\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u0641\u0627\u0631\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u0633\u0627\u062f\u06d5 \u0628\u06cc\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u0639\u0623\u062f\u0623\u062f\u06cc\u0627 \u0644\u0627\u062a\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0633\u0648\u0646\u0623\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"\u0622\u0630\u0623\u0631\u06cc \u06be\u0627\u0631\u06af\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u06a9\u06cc\u0686\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0641\u0623\u0646\u0644\u0627\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0641\u06cc\u062c\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u0631\u0626\u06a4\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0628\u0623\u0644\u0648\u0659\u0686\u06cc \u0623\u0642\u062a\u0648\u0659\u0646\u0626\u0634\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0641\u0627\u0631\u0648\u0659\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0641\u0623\u0631\u0627\u0646\u0633\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0641\u0622\u0631\u0627\u0646\u0633\u0626 \u0626\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u06af\u0627\u06af\u0627\u0626\u0648\u0632"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u0641\u0626\u0631\u06cc\u0633\u06cc \u0623\u0641\u062a\u0648\u0646\u0626\u0634\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u0646\u0626\u06af\u0648\u0659\u0645\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u0644\u0627\u06a9\u0648\u0659\u062a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u06a4\u0648\u0644\u0648\u0641"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0626\u06cc\u0631\u0644\u0623\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u062a\u0627\u0645\u0627\u0632\u06cc\u063a \u0645\u0623\u0631\u0627\u06a9\u0626\u0634\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0628\u06cc\u0631\u06cc\u062a\u0627\u0646\u06cc\u0627 \u06af\u0623\u067e"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0639\u0631\u0648\u06cc \u0645\u062f\u0631\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u06af\u0627\u0644\u06cc\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u06af\u0648\u0659\u0622\u0631\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u0632\u0648\u0659\u0646 \u0646\u0627\u062f\u06cc\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u0645\u0627\u0646\u06a9\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u062e\u0648\u0659\u0633\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0646\u06cc\u0633\u0626\u0633\u06d5 \u0646\u0623\u0628\u06cc\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u06be\u0627\u0626\u0648\u0633\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u06a9\u0648\u0631\u062f\u06cc \u0633\u0648\u0659\u0631\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u0628\u06cc \u0646\u0626\u0634\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u06be\u0626\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0622\u0644\u0645\u0627\u0646\u06cc \u0626\u0648\u062a\u0631\u06cc\u0634\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u06a4\u0627\u0631\u0644\u067e\u06cc\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u0645\u0648\u0659\u06be\u0627\u06a4\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u06a9\u0648\u0631\u0648\u06a4\u0627\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u0622\u0642\u0626\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0622\u0644\u0645\u0627\u0646\u06cc \u0633\u0648\u0659\u0626\u06cc\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u06be\u0627\u06cc\u06cc\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0645\u0623\u062c\u0627\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u0646\u0626\u06a9\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u06a9\u0648\u0659\u0644\u0627\u062a\u06cc \u0626\u0633\u062a\u0627\u0646\u062f\u0627\u0631\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u06cc\u0648\u0631\u0648\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u0626\u0633\u067e\u0627\u0646\u06cc\u0627\u06cc\u06cc \u0645\u0626\u06a9\u0632\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0623\u0646\u062f\u0648\u0646\u0626\u0632\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u0626\u06cc\u06af\u0628\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u0646\u0627\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u06a4\u0627\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u0633\u06cc \u0686\u0648\u0627\u0646 \u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u06be\u0626\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0626\u06cc\u0633\u0644\u0623\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0626\u06cc\u062a\u0627\u0644\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0626\u06cc\u062a\u0627\u0644\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0626\u06cc\u0646\u0648\u06a9\u062a\u06cc\u062a\u0648\u0659\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u06a9\u0627\u0644\u0626\u062c\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u062f\u06cc\u06a4\u0627\u0646\u06af\u0623\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u0686\u06cc\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u06be\u06cc\u0631\u0627\u06af\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u0628\u0648\u0659\u067e\u0648\u0659"_s)
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
			$of("zu"_s),
			$of(u"\u0632\u0648\u0644\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u0631\u0627\u0633\u0627\u06af\u06d5 \u0646\u0627\u062f\u06cc\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u062c\u0627\u067e\u0648\u0659\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u0633\u0627\u0645\u06cc \u06be\u0627\u0631\u06af\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u062c\u0627\u06a4\u0626 \u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u06af\u0648\u0659\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u0644\u06c9\u0644\u0626 \u0633\u0627\u0645\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0622\u0644\u0645\u0627\u0646\u06cc \u0633\u0648\u0659\u06cc\u06cc\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u0626\u06cc\u0646\u0627\u0631\u06cc \u0633\u0627\u0645\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u0626\u0633\u06a9\u0648\u0644\u062a \u0633\u0627\u0645\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u0626\u0645\u0631\u06cc\u06a9\u0627 \u0644\u0627\u062a\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u06a9\u06cc\u06a9\u06cc\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u0645\u0627\u0633\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u0642\u0623\u0632\u0627\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u06a9\u0627\u0644\u0627\u0644\u06cc\u0633\u0648\u0659\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u06a9\u0627\u0646\u0627\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u06a9\u0627\u0646\u0627\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u0641\u0622\u0631\u0627\u0646\u0633\u0626 \u0626\u06cc \u06a9\u0627\u0646\u0627\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u06a9\u0623\u0634\u0645\u06cc\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u06a9\u0648\u0631\u062f\u06cc \u06a9\u0648\u0631\u0645\u0627\u0646\u062c\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0641\u0622\u0631\u0627\u0646\u0633\u0626 \u0626\u06cc \u0633\u0648\u0659\u06cc\u06cc\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u06a9\u0648\u0631\u0646\u06cc\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u0642\u0626\u0631\u0642\u06cc\u0632\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u0633\u06cc\u0631\u06cc\u0644\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u0644\u0648\u0659\u06a9\u0632\u0627\u0645\u0628\u0648\u0659\u0631\u06af\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u0626\u0645\u0628\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u06af\u0627\u0646\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u0622\u0644\u0645\u0627\u0646\u06cc \u06be\u0627\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u0645\u0627\u0686\u0627\u0645\u0626"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u0644\u06cc\u0646\u06af\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u0686\u06cc\u0646\u06cc \u0633\u0627\u062f\u06d5 \u0628\u06cc\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u0644\u0627\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u06a9\u0648\u0645\u06cc \u067e\u0626\u0631\u0645\u06cc\u0627\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u06a9\u0648\u0659\u0646\u06a9\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u0644\u06cc\u062a\u0648\u06a4\u0627\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u0644\u0648\u0659\u0628\u0627 \u06a9\u0627\u062a\u0627\u0646\u06af\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u0644\u0627\u062a\u0648\u06a4\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u06a9\u0627\u062a\u0627\u0646\u06af\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u0646\u06cc\u0648\u0659\u0626\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u06a4\u0648\u0659\u0646\u062c\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u0644\u0627\u0646\u06af\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u062a\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u062a\u0627\u06cc\u062a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u0645\u0627\u0644\u0627\u06af\u0627\u0634\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u0645\u0627\u0626\u0648\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u0644\u06ca\u0631\u06cc \u0634\u0648\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0686\u06cc\u0646\u06cc \u0633\u0648\u0646\u0623\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u0645\u0623\u0642\u062f\u0648\u0659\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u0645\u0623\u0631\u0627\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u0645\u0627\u0644\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u0645\u0627\u0644\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0628\u0626\u0631\u0645\u0626 \u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u0633\u0648\u0631\u0628\u06cc \u06be\u0627\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u0646\u0648\u0631\u06a4\u0626\u062c\u06cc \u0628\u0648\u0659\u06a9\u0645\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u0646\u0626\u062f\u0626\u0628\u0626\u0644\u0626 \u0634\u0648\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u0646\u0626\u067e\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u0645\u0648\u0659\u0646\u062f\u0627\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u06be\u0648\u0644\u0623\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u0646\u0648\u0631\u06a4\u0626\u062c\u06cc \u0646\u06cc\u0646\u0648\u0631\u0633\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u0631\u0648\u0645\u0628\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u06a9\u0627\u0628\u06cc\u0644\u0626"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u06a9\u0627\u0645\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u0645\u0626\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u0626\u0648\u0631\u0648\u0645\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u0633\u0627\u0645\u0628\u0648\u0659\u0631\u0648\u0659"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u0645\u0648\u0659\u0631\u06cc\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u067e\u0623\u0646\u062c\u0627\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u062f\u0648\u0659\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u06af\u0648\u0659\u0631\u0648\u0659\u0645\u062e\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0626\u06cc\u0646\u06af\u06cc\u0644\u06cc\u0633\u06cc \u0628\u0626\u0631\u06cc\u062a\u0627\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0634\u0627\u0645\u0628\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u0644\u0623\u06be\u0626\u0633\u062a\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u0628\u0627\u0641\u06cc\u0627"_s)
		})
	}));
	return data;
}

LocaleNames_lrc::LocaleNames_lrc() {
}

$Class* LocaleNames_lrc::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lrc, name, initialize, &_LocaleNames_lrc_ClassInfo_, allocate$LocaleNames_lrc);
	return class$;
}

$Class* LocaleNames_lrc::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun