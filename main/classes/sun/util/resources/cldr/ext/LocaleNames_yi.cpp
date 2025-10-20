#include <sun/util/resources/cldr/ext/LocaleNames_yi.h>

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

$MethodInfo _LocaleNames_yi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_yi::*)()>(&LocaleNames_yi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_yi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_yi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_yi_MethodInfo_
};

$Object* allocate$LocaleNames_yi($Class* clazz) {
	return $of($alloc(LocaleNames_yi));
}

void LocaleNames_yi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_yi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_FJ, u"\u05e4\u05bf\u05d9\u05d3\u05d6\u05e9\u05d9"_s);
	$var($String, metaValue_ar, u"\u05d0\u05b7\u05e8\u05d0\u05b7\u05d1\u05d9\u05e9"_s);
	$var($String, metaValue_el, u"\u05d2\u05e8\u05d9\u05db\u05d9\u05e9"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u05e4\u05bc\u05d0\u05e8\u05d8\u05d0\u05be\u05e8\u05d9\u05e7\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u05e4\u05bc\u05d0\u05b7\u05e9\u05d8\u05d0\u05b8"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u05e4\u05bc\u05d0\u05e8\u05d8\u05d5\u05d2\u05d0\u05b7\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u05e4\u05bc\u05d0\u05e8\u05d8\u05d5\u05d2\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u05e4\u05bf\u05d9\u05dc\u05d9\u05e4\u05bc\u05d9\u05e0\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u05e4\u05bc\u05d0\u05b7\u05e8\u05d0\u05b7\u05d2\u05d5\u05d5\u05f2\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u05de\u05d9\u05d6\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u05d1\u05d0\u05b7\u05dc\u05d9\u05e0\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u05d4\u05e2\u05d1\u05e8\u05e2\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u05e7\u05d0\u05b7\u05d8\u05d0\u05b7\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"\u05d1\u05f2\u05b7\u05e2\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u05e1\u05e7\u05d0\u05d8\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u05e1\u05d9\u05e6\u05d9\u05dc\u05d9\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u05d0\u05b7\u05e4\u05bf\u05d0\u05b7\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u05d0\u05b7\u05e0\u05d3\u05d0\u05e8\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u05e4\u05bf\u05dc\u05e2\u05de\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u05d0\u05b7\u05e4\u05bf\u05d2\u05d4\u05d0\u05b7\u05e0\u05d9\u05e1\u05d8\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u05d0\u05b7\u05e4\u05bf\u05e8\u05d9\u05e7\u05d0\u05b7\u05e0\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u05d0\u05b7\u05e0\u05d8\u05d9\u05d2\u05d5\u05e2 \u05d0\u05d5\u05df \u05d1\u05d0\u05b7\u05e8\u05d1\u05d5\u05d3\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u05d0\u05b7\u05dc\u05d1\u05d0\u05b7\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u05d0\u05b7\u05e8\u05de\u05e2\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u05d0\u05b7\u05de\u05d4\u05d0\u05b7\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u05d0\u05b7\u05e8\u05d0\u05b7\u05d2\u05d0\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u05d0\u05b7\u05e0\u05d2\u05d0\u05dc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u05d0\u05b7\u05e0\u05d8\u05d0\u05b7\u05e8\u05e7\u05d8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u05d5\u05d5\u05e2\u05dc\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u05d0\u05b7\u05e8\u05d2\u05e2\u05e0\u05d8\u05d9\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u05d0\u05b7\u05e4\u05bf\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u05d0\u05b7\u05e1\u05d0\u05b7\u05de\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u05e6\u05e4\u05d5\u05df\u05be\u05d0\u05b7\u05de\u05e2\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u05e2\u05e1\u05d8\u05e8\u05d9\u05d9\u05da"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u05e8\u05e2\u05d0\u05d5\u05e0\u05d9\u05d0\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u05d0\u05d5\u05d9\u05e1\u05d8\u05e8\u05d0\u05b7\u05dc\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u05d3\u05e8\u05d5\u05dd\u05be\u05d0\u05b7\u05de\u05e2\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u05d0\u05b7\u05e8\u05d5\u05d1\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u05dc\u05d0\u05d6\u05e9\u05d1\u05d0\u05b8\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u05d0\u05e7\u05e2\u05d0\u05b7\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u05d0\u05b7\u05d6\u05e2\u05e8\u05d1\u05d9\u05d9\u05d3\u05d6\u05e9\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u05e8\u05d5\u05de\u05e2\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u05e8\u05d5\u05de\u05e2\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u05d1\u05d0\u05e1\u05e0\u05d9\u05e2 \u05d4\u05e2\u05e8\u05e6\u05e2\u05d2\u05d0\u05d5\u05d5\u05d9\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u05d1\u05d0\u05b7\u05e8\u05d1\u05d0\u05b7\u05d3\u05d0\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u05e1\u05e2\u05e8\u05d1\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u05e1\u05e2\u05d1\u05d5\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u05d1\u05d0\u05b7\u05e0\u05d2\u05dc\u05d0\u05b7\u05d3\u05e2\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u05d1\u05e2\u05dc\u05d2\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u05e8\u05d5\u05e1\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u05d1\u05e2\u05dc\u05d0\u05b7\u05e8\u05d5\u05e1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u05e8\u05d5\u05e1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u05de\u05d9\u05d8\u05dc \u05d4\u05d5\u05d9\u05db\u05d3\u05d5\u05d9\u05d8\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u05d1\u05d5\u05e8\u05e7\u05d9\u05e0\u05e2 \u05e4\u05bf\u05d0\u05b7\u05e1\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u05d1\u05d5\u05dc\u05d2\u05d0\u05b7\u05e8\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u05e8\u05d5\u05d5\u05d0\u05b7\u05e0\u05d3\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u05d1\u05d5\u05dc\u05d2\u05d0\u05b7\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u05d1\u05d5\u05e8\u05d5\u05e0\u05d3\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u05d1\u05e2\u05e0\u05d9\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u05d1\u05e2\u05e8\u05de\u05d5\u05d3\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u05d1\u05e8\u05d5\u05e0\u05d9\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u05d1\u05e2\u05e0\u05d2\u05d0\u05b7\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u05d1\u05d0\u05dc\u05d9\u05d5\u05d5\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u05d8\u05d9\u05d1\u05e2\u05d8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u05e1\u05d0\u05b7\u05e0\u05e1\u05e7\u05e8\u05d9\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u05e1\u05d0\u05dc\u05d0\u05de\u05d0\u05df \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u05d1\u05e8\u05d0\u05b7\u05d6\u05d9\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u05e1\u05d9\u05d9\u05e9\u05e2\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u05d1\u05e8\u05e2\u05d8\u05d0\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u05e1\u05d0\u05b7\u05e8\u05d3\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u05d1\u05d0\u05b7\u05d4\u05d0\u05b7\u05de\u05d0\u05b7\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u05e1\u05d5\u05d3\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u05d1\u05d0\u05e1\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u05e1\u05d9\u05e0\u05d3\u05d4\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u05e6\u05e2\u05e0\u05d8\u05e8\u05d0\u05b7\u05dc\u05be\u05d0\u05b7\u05de\u05e2\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u05d1\u05d4\u05d5\u05d8\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u05e9\u05d5\u05d5\u05e2\u05d3\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u05e0\u05d0\u05e8\u05d3\u05e1\u05d0\u05b7\u05de\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u05d0\u05b7\u05e8\u05d0\u05b7\u05de\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u05e1\u05d9\u05e0\u05d2\u05d0\u05b7\u05e4\u05bc\u05d5\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u05d1\u05d0\u05e6\u05d5\u05d5\u05d0\u05b7\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u05e1\u05d8 \u05d4\u05e2\u05dc\u05e2\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u05e1\u05e2\u05e8\u05d1\u05d0\u05be\u05e7\u05e8\u05d0\u05d0\u05b7\u05d8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u05e1\u05dc\u05d0\u05d5\u05d5\u05e2\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u05e1\u05d9\u05e0\u05d4\u05d0\u05b7\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u05d1\u05e2\u05dc\u05d0\u05b7\u05e8\u05d5\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u05e1\u05d5\u05de\u05e2\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u05d0\u05b7\u05de\u05e2\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u05d1\u05e2\u05dc\u05d9\u05d6"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u05e1\u05dc\u05d0\u05d5\u05d5\u05d0\u05b7\u05e7\u05d9\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u05e1\u05dc\u05d0\u05d5\u05d5\u05d0\u05b7\u05e7\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u05e1\u05d9\u05e2\u05e8\u05e2 \u05dc\u05e2\u05d0\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u05e1\u05dc\u05d0\u05d5\u05d5\u05e2\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u05e1\u05d0\u05b7\u05df \u05de\u05d0\u05b7\u05e8\u05d9\u05e0\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u05e1\u05d0\u05b7\u05de\u05d0\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u05e1\u05e2\u05e0\u05e2\u05d2\u05d0\u05b7\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u05e9\u05d0\u05e0\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u05e1\u05d0\u05de\u05d0\u05b7\u05dc\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u05e1\u05d0\u05de\u05d0\u05b7\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u05e7\u05d0\u05b7\u05e0\u05d0\u05b7\u05d3\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u05e7\u05d0\u05b7\u05d8\u05d0\u05b7\u05dc\u05d0\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u05d0\u05b7\u05dc\u05d1\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u05e1\u05d5\u05e8\u05d9\u05e0\u05d0\u05b7\u05dd"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u05e1\u05e2\u05e8\u05d1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u05d3\u05e8\u05d5\u05dd\u05be\u05e1\u05d5\u05d3\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u05e7\u05d0\u05e0\u05d2\u05d0\u05be\u05e7\u05d9\u05e0\u05e9\u05d0\u05b7\u05d6\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u05e1\u05d0\u05b7\u05d0 \u05d8\u05d0\u05de\u05e2 \u05d0\u05d5\u05df \u05e4\u05bc\u05e8\u05d9\u05e0\u05e1\u05d9\u05e4\u05bc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u05e6\u05e2\u05e0\u05d8\u05e8\u05d0\u05b7\u05dc\u05be\u05d0\u05b7\u05e4\u05bf\u05e8\u05d9\u05e7\u05d0\u05b7\u05e0\u05d9\u05e9\u05e2 \u05e8\u05e2\u05e4\u05bc\u05d5\u05d1\u05dc\u05d9\u05e7"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u05e2\u05dc \u05e1\u05d0\u05b7\u05dc\u05d5\u05d5\u05d0\u05b7\u05d3\u05d0\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u05e9\u05d5\u05d5\u05e2\u05d3\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u05e1\u05d5\u05d5\u05d0\u05b7\u05d4\u05d9\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u05e9\u05d5\u05d5\u05d9\u05d9\u05e5"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u05d4\u05e2\u05dc\u05e4\u05bf\u05d0\u05b7 \u05e0\u05d3\u05d1\u05d9\u05d9\u05df \u05d1\u05d0\u05e8\u05d8\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u05e1\u05d9\u05e8\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u05e1\u05d5\u05d5\u05d0\u05b7\u05d6\u05d9\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u05e7\u05d5\u05e7 \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u05d8\u05e9\u05d9\u05dc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u05e7\u05d0\u05b7\u05de\u05e2\u05e8\u05d5\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u05db\u05d9\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u05e7\u05d0\u05dc\u05d0\u05de\u05d1\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u05d8\u05d0\u05b7\u05de\u05d9\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u05e6\u05e4\u05d5\u05e0\u05d3\u05d9\u05e7\u05e2 \u05d0\u05b7\u05de\u05e2\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u05d0\u05b7\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u05e7\u05d0\u05e1\u05d8\u05d0\u05b7 \u05e8\u05d9\u05e7\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u05e6\u05e2\u05e0\u05d8\u05e8\u05d0\u05b7\u05dc\u05be\u05d0\u05b7\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u05d8\u05e9\u05d0\u05b7\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u05d8\u05e9\u05e2\u05db\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u05de\u05e2\u05e8\u05d1\u05be\u05d0\u05b7\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u05e7\u05d5\u05d1\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u05e7\u05dc\u05d5\u05d9\u05e1\u05d8\u05e2\u05e8\u05be\u05e1\u05dc\u05d0\u05b7\u05d5\u05d5\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u05e7\u05d0\u05b7\u05e4\u05bc\u05d5\u05d5\u05e2\u05e8\u05d3\u05d9\u05e9\u05e2 \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u05d8\u05d0\u05d2\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u05e7\u05d5\u05e8\u05d0\u05b7\u05e1\u05d0\u05b7\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u05d8\u05d9\u05d9\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u05d5\u05d5\u05e2\u05dc\u05e9\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u05e7\u05d0\u05b7\u05e8\u05d0\u05b7\u05d0\u05d9\u05d1\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u05d8\u05e9\u05e2\u05db\u05d9\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u05d8\u05d5\u05e8\u05e7\u05de\u05e2\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u05d8\u05d0\u05b7\u05d2\u05d0\u05b7\u05dc\u05d0\u05d2"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u05d8\u05d5\u05e8\u05e7\u05de\u05e2\u05e0\u05d9\u05e1\u05d8\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u05d8\u05d5\u05e0\u05d9\u05e1\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u05d8\u05d0\u05e0\u05d2\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u05d6\u05e9\u05d0\u05dc\u05d0\u05be\u05e4\u05bf\u05d0\u05e0\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"\u05de\u05e2\u05e8\u05d1 \u05e4\u05bf\u05dc\u05e2\u05de\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u05d3\u05e2\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u05d8\u05e2\u05e8\u05e7\u05d9\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u05e7\u05d0\u05de\u05d0\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u05d8\u05e8\u05d9\u05e0\u05d9\u05d3\u05d0\u05b7\u05d3 \u05d0\u05d5\u05df \u05d8\u05d0\u05d1\u05d0\u05b7\u05d2\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u05d8\u05d0\u05b8\u05d8\u05e2\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u05d3\u05d9\u05d9\u05d8\u05e9\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u05d3\u05f2\u05b7\u05d8\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u05d0\u05b7\u05dc\u05d8\u05be \u05d4\u05d5\u05d9\u05db\u05d3\u05d5\u05d9\u05d8\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u05d8\u05d5\u05d0\u05d5\u05d5\u05d0\u05b7\u05dc\u05d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"\u05e8\u05d5\u05e1\u05d9\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u05d3\u05d6\u05e9\u05d9\u05d1\u05d5\u05d8\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u05d8\u05d0\u05b7\u05e0\u05d6\u05d0\u05b7\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u05d3\u05e2\u05e0\u05de\u05d0\u05b7\u05e8\u05e7"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u05d3\u05d0\u05de\u05d9\u05e0\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u05d3\u05d0\u05de\u05d9\u05e0\u05d9\u05e7\u05d0\u05b7\u05e0\u05d9\u05e9\u05e2 \u05e8\u05e2\u05e4\u05bc\u05d5\u05d1\u05dc\u05d9\u05e7"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u05d0\u05d9\u05d9\u05e8\u05d0\u05e4\u05bc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u05d0\u05d5\u05e7\u05e8\u05d0\u05b7\u05d9\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u05d0\u05b7\u05dc\u05d8\u05be\u05d0\u05d9\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u05de\u05d6\u05e8\u05d7 \u05d0\u05b7\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u05de\u05d6\u05e8\u05d7\u05be\u05d0\u05d9\u05d9\u05e8\u05d0\u05e4\u05bc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u05d2\u05d0\u05d8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u05e6\u05e4\u05bf\u05d5\u05df\u05be\u05d0\u05d9\u05d9\u05e8\u05d0\u05e4\u05bc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u05e7\u05d0\u05e0\u05d2\u05d0\u05be\u05e1\u05d5\u05d5\u05d0\u05b7\u05d4\u05d9\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u05d3\u05e8\u05d5\u05dd\u05be\u05d0\u05b7\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u05de\u05e2\u05e8\u05d1\u05be\u05d0\u05d9\u05d9\u05e8\u05d0\u05e4\u05bc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u05d3\u05e8\u05d5\u05dd\u05be\u05de\u05d6\u05e8\u05d7 \u05d0\u05b7\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u05d0\u05d5\u05d2\u05d0\u05b7\u05e0\u05d3\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u05d8\u05d9\u05d2\u05e8\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u05d3\u05e8\u05d5\u05dd\u05be\u05d0\u05d9\u05d9\u05e8\u05d0\u05e4\u05bc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u05d0\u05d5\u05e7\u05e8\u05d0\u05b7\u05d0\u05d9\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"\u05dc\u05d9\u05d5\u05d5\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u05d0\u05d5\u05e8\u05d3\u05d5"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u05e2\u05e7\u05d5\u05d5\u05d0\u05b7\u05d3\u05d0\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u05e4\u05bf\u05d0\u05b7\u05e8\u05d0\u05d9\u05d9\u05e0\u05d9\u05d2\u05d8\u05e2 \u05e9\u05d8\u05d0\u05b7\u05d8\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u05e2\u05e1\u05d8\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u05e2\u05d2\u05d9\u05e4\u05bc\u05d8\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u05d0\u05d5\u05e8\u05d5\u05d2\u05d5\u05d5\u05d9\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u05e4\u05bc\u05e8\u05d9\u05d9\u05e1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u05d0\u05d5\u05d6\u05d1\u05e2\u05e7\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u05e2\u05e0\u05d2\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u05e2\u05e1\u05e4\u05bc\u05e2\u05e8\u05d0\u05b7\u05e0\u05d8\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u05d5\u05d5\u05d0\u05b7\u05d8\u05d9\u05e7\u05d0\u05b7\u05df \u05e9\u05d8\u05d0\u05b8\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u05e2\u05e8\u05d9\u05d8\u05e8\u05e2\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u05e9\u05e4\u05bc\u05d0\u05b7\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u05e9\u05e4\u05bc\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u05e2\u05d8\u05d9\u05d0\u05e4\u05bc\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u05d5\u05d5\u05e2\u05e0\u05e2\u05d6\u05d5\u05e2\u05dc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u05e2\u05e1\u05d8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u05d0\u05d9\u05d9\u05e8\u05d0\u05e4\u05bc\u05e2\u05d9\u05e9\u05e2\u05e8 \u05e4\u05bf\u05d0\u05b7\u05e8\u05d1\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u05d1\u05d0\u05b7\u05e1\u05e7\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u05d2\u05e8\u05e2\u05d2\u05d0\u05e8\u05d9\u05e9\u05e2\u05e8 \u05e7\u05d0\u05b7\u05dc\u05e2\u05e0\u05d3\u05d0\u05b7\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u05d5\u05d5\u05d9\u05e2\u05d8\u05e0\u05d0\u05b7\u05de\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u05d0\u05d9\u05d9\u05d1\u05e2\u05e8\u05be\u05e1\u05d0\u05e8\u05d1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u05d5\u05d5\u05d9\u05e2\u05d8\u05e0\u05d0\u05b7\u05dd"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u05d5\u05d5\u05d0\u05dc\u05d0\u05b7\u05e4\u05bc\u05d5\u05e7"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u05e4\u05bc\u05e2\u05e8\u05e1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u05d5\u05d5\u05d0\u05b7\u05e0\u05d5\u05d0\u05b7\u05d8\u05d5"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u05e4\u05bf\u05d9\u05e0\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u05e4\u05bf\u05d9\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u05e4\u05bf\u05d0\u05b7\u05dc\u05e7\u05dc\u05d0\u05b7\u05e0\u05d3 \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u05de\u05d9\u05e7\u05e8\u05d0\u05e0\u05e2\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u05e4\u05bf\u05d0\u05b7\u05e8\u05d0 \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u05e4\u05bf\u05d0\u05b7\u05e8\u05d0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u05e4\u05bf\u05e8\u05d0\u05b7\u05e0\u05e7\u05e8\u05d9\u05d9\u05da"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u05e4\u05bf\u05e8\u05d0\u05b7\u05e0\u05e6\u05d5\u05d9\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u05de\u05e2\u05e8\u05d1\u05be\u05e4\u05bf\u05e8\u05d9\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u05d0\u05d5\u05e8\u05d0\u05b7\u05dc\u05d8\u05be\u05d2\u05e8\u05d9\u05db\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u05d2\u05d0\u05b7\u05d1\u05d0\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u05d0\u05d9\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u05e4\u05bf\u05d0\u05b7\u05e8\u05d0\u05d9\u05d9\u05e0\u05d9\u05d2\u05d8\u05e2 \u05e7\u05e2\u05e0\u05d9\u05d2\u05e8\u05d9\u05d9\u05da"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u05e1\u05d0\u05b7\u05de\u05d0\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u05d2\u05e8\u05e2\u05e0\u05d0\u05b7\u05d3\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u05e1\u05e7\u05d0\u05d8\u05d9\u05e9 \u05d2\u05e2\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u05d2\u05e8\u05d5\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u05e4\u05bf\u05e8\u05d0\u05b7\u05e0\u05e6\u05d5\u05d9\u05d6\u05d9\u05e9\u05e2 \u05d2\u05d5\u05d9\u05d0\u05b7\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u05d2\u05e2\u05e8\u05e0\u05d6\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u05d2\u05d4\u05d0\u05b7\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u05d2\u05d9\u05d1\u05e8\u05d0\u05b7\u05dc\u05d8\u05d0\u05b7\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u05e9\u05dc\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u05d2\u05e8\u05d9\u05e0\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u05d2\u05d0\u05b7\u05dc\u05d9\u05e9\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u05de\u05d9\u05d8\u05dc \u05e2\u05e0\u05d2\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u05d2\u05d0\u05b7\u05de\u05d1\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u05d2\u05d9\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u05d2\u05d5\u05d5\u05d0\u05b7\u05d3\u05e2\u05dc\u05d5\u05e4"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u05e2\u05e7\u05d5\u05d5\u05d0\u05b7\u05d8\u05d0\u05e8\u05d9\u05e9\u05e2 \u05d2\u05d9\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u05d0\u05d5\u05de\u05d1\u05d0\u05b7\u05d5\u05d5\u05d0\u05d5\u05e1\u05d8\u05e2 \u05e9\u05e4\u05bc\u05e8\u05d0\u05b7\u05da"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u05e4\u05bc\u05d0\u05dc\u05d9\u05e0\u05e2\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u05d2\u05e8\u05d9\u05db\u05e0\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u05d2\u05b7\u05dc\u05d7\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u05d2\u05d5\u05d5\u05d0\u05b7\u05d8\u05e2\u05de\u05d0\u05b7\u05dc\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u05d2\u05d5\u05d5\u05d0\u05b7\u05dd"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u05de\u05d0\u05b7\u05e0\u05e7\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u05d2\u05d9\u05e0\u05e2\u05be\u05d1\u05d9\u05e1\u05d0\u05b7\u05d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u05d2\u05d5\u05d9\u05d0\u05b7\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u05e7\u05d0\u05e1\u05d0\u05d5\u05d5\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u05d4\u05d0\u05b7\u05d5\u05e1\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u05d4\u05e2\u05d1\u05e8\u05e2\u05d0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u05d4\u05d9\u05e0\u05d3\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u05d4\u05d0\u05e0\u05d3\u05d5\u05e8\u05d0\u05b7\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u05e7\u05e8\u05d0\u05d0\u05b7\u05d8\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u05e7\u05e8\u05d0\u05d0\u05b7\u05d8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u05d4\u05d0\u05b7\u05d9\u05d8\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u05ea\u05d9\u05de\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u05d0\u05d5\u05e0\u05d2\u05e2\u05e8\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u05d0\u05d5\u05e0\u05d2\u05e2\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u05d9\u05d9\u05b4\u05d3\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u05d0\u05b7\u05e8\u05de\u05e2\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u05e7\u05d0\u05b7\u05e0\u05d0\u05b7\u05e8\u05d9\u05e9\u05e2 \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u05d0\u05d9\u05e0\u05d3\u05d0\u05e0\u05e2\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u05de\u05d0\u05b7\u05d9\u05d0\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u05d0\u05d9\u05e0\u05d3\u05d0\u05e0\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u05d0\u05b7\u05dc\u05d8 \u05e4\u05bc\u05e2\u05e8\u05e1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u05d0\u05d9\u05e8\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u05e0\u05d0\u05b7\u05e4\u05bc\u05d0\u05dc\u05d9\u05d8\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u05d0\u05b7\u05dc\u05d8\u05be\u05e4\u05bf\u05e8\u05d0\u05b7\u05e0\u05e6\u05d5\u05d9\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u05d9\u05e9\u05e8\u05d0\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u05d0\u05d9\u05e0\u05d3\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u05d0\u05d9\u05d3\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u05de\u05d6\u05e8\u05d7\u05be\u05e4\u05bf\u05e8\u05d9\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u05d3\u05e8\u05d5\u05dd\u05be\u05d0\u05b7\u05e4\u05bf\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u05d3\u05e8\u05d5\u05dd\u05be\u05e4\u05bf\u05e8\u05d9\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u05d0\u05d9\u05e8\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u05d0\u05d9\u05e1\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u05d0\u05d9\u05e1\u05dc\u05d0\u05b7\u05e0\u05d3\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u05d0\u05d9\u05d8\u05d0\u05b7\u05dc\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u05d0\u05d9\u05d8\u05d0\u05b7\u05dc\u05d9\u05e2\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u05d3\u05e2\u05d5\u05d5\u05d0\u05b7\u05e0\u05d0\u05b7\u05d2\u05d0\u05b7\u05e8\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u05db\u05d9\u05e0\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"\u05d0\u05d5\u05e0\u05d8\u05e2\u05e8 \u05e9\u05dc\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u05d6\u05d0\u05b7\u05de\u05d1\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u05d9\u05d0\u05b7\u05e4\u05bc\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u05d3\u05d6\u05e9\u05e2\u05e8\u05d6\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u05d6\u05d5\u05dc\u05d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u05d6\u05d9\u05de\u05d1\u05d0\u05b7\u05d1\u05d5\u05d5\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u05d0\u05d5\u05de\u05d1\u05d0\u05b7\u05d5\u05d5\u05d0\u05d5\u05e1\u05d8\u05e2\u05e8 \u05e8\u05d0\u05b7\u05d9\u05d0\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u05d3\u05d6\u05e9\u05d0\u05b7\u05de\u05d9\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u05d9\u05d0\u05b7\u05e4\u05bc\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u05d9\u05d0\u05b7\u05d5\u05d5\u05d0\u05b7\u05e0\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u05d2\u05e8\u05d5\u05d6\u05d9\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u05e7\u05e2\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u05dc\u05d0\u05b7\u05d8\u05d9\u05d9\u05df\u05be\u05d0\u05b7\u05de\u05e2\u05e8\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u05e7\u05d0\u05b7\u05de\u05d1\u05d0\u05d3\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u05e7\u05d9\u05e8\u05d9\u05d1\u05d0\u05b7\u05d8\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u05e7\u05d0\u05b7\u05d6\u05d0\u05b7\u05db\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u05e7\u05d0\u05de\u05d0\u05e8\u05d0\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u05db\u05de\u05e2\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u05e7\u05d0\u05b7\u05e0\u05d0\u05b7\u05d3\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u05e7\u05d0\u05e8\u05e2\u05d0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u05e7\u05d5\u05e8\u05d3\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u05e7\u05d0\u05e8\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u05e7\u05d9\u05d9\u05de\u05d0\u05b7\u05df \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u05e7\u05d9\u05e8\u05d2\u05d9\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u05e6\u05d9\u05e8\u05d9\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u05dc\u05d0\u05b7\u05d0\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u05dc\u05d0\u05d8\u05d9\u05d9\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u05dc\u05d1\u05e0\u05d5\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u05dc\u05d5\u05e7\u05e1\u05e2\u05de\u05d1\u05d5\u05e8\u05d2\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u05e0\u05d9\u05d3\u05e2\u05e8\u05d3\u05f2\u05b7\u05d8\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u05dc\u05d9\u05db\u05d8\u05e0\u05e9\u05d8\u05d9\u05d9\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u05e1\u05e8\u05d9\u05be\u05dc\u05d0\u05b7\u05e0\u05e7\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u05d0\u05b7\u05e7\u05d0\u05b7\u05d3\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u05dc\u05d0\u05b7\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"\u05e4\u05d9\u05d3\u05d6\u05e9\u05d9 \u05d4\u05d9\u05e0\u05d3\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u05dc\u05d9\u05d1\u05e2\u05e8\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u05dc\u05e2\u05e1\u05d0\u05d8\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u05dc\u05d9\u05d8\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u05dc\u05d9\u05d8\u05d5\u05d5\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u05dc\u05d5\u05e7\u05e1\u05e2\u05de\u05d1\u05d5\u05e8\u05d2"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u05dc\u05e2\u05d8\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u05dc\u05e2\u05d8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u05dc\u05d9\u05d1\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u05dc\u05d0\u05b7\u05d3\u05d9\u05e0\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u05de\u05d0\u05b7\u05e8\u05d0\u05e7\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u05de\u05d0\u05e0\u05d0\u05b7\u05e7\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u05de\u05d0\u05dc\u05d3\u05d0\u05d5\u05d5\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u05de\u05d0\u05e0\u05d8\u05e2\u05e0\u05e2\u05d2\u05e8\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u05de\u05d0\u05b7\u05d3\u05d0\u05b7\u05d2\u05d0\u05b7\u05e1\u05e7\u05d0\u05b7\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u05de\u05d0\u05b7\u05e8\u05e9\u05d0\u05b7\u05dc \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u05de\u05d0\u05b7\u05d0\u05e8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u05de\u05d0\u05b7\u05e7\u05e2\u05d3\u05d0\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u05de\u05d0\u05b7\u05dc\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u05de\u05d0\u05b7\u05dc\u05d0\u05b7\u05d9\u05d0\u05b7\u05dc\u05d0\u05b7\u05dd"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u05de\u05d9\u05d0\u05b7\u05e0\u05de\u05d0\u05b7\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u05de\u05d0\u05e0\u05d2\u05d0\u05dc\u05d9\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u05de\u05d0\u05e0\u05d2\u05d0\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u05de\u05d0\u05b7\u05e8\u05d8\u05d9\u05e0\u05d9\u05e7"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u05de\u05d0\u05b7\u05e8\u05d9\u05d8\u05d0\u05b7\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u05de\u05d0\u05e0\u05d8\u05e1\u05e2\u05e8\u05d0\u05b7\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u05de\u05d0\u05b7\u05dc\u05d8\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u05de\u05d0\u05b7\u05dc\u05d8\u05e2\u05d6\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u05de\u05d0\u05e8\u05d9\u05e6\u05d9\u05d5\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u05de\u05d0\u05b7\u05dc\u05d3\u05d9\u05d5\u05d5\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u05de\u05d0\u05b7\u05dc\u05d0\u05b7\u05d5\u05d5\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u05de\u05e2\u05e7\u05e1\u05d9\u05e7\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u05de\u05d0\u05b7\u05dc\u05d9\u05d9\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u05d1\u05d9\u05e8\u05de\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u05de\u05d0\u05d6\u05d0\u05b7\u05de\u05d1\u05d9\u05e7"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u05d0\u05d5\u05e0\u05d8\u05e2\u05e8\u05be\u05e1\u05d0\u05e8\u05d1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u05e0\u05d0\u05b7\u05de\u05d9\u05d1\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u05e0\u05f2\u05b7 \u05e7\u05d0\u05b7\u05dc\u05e2\u05d3\u05d0\u05e0\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u05e0\u05d9\u05d6\u05e9\u05e2\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u05e0\u05e2\u05e4\u05bc\u05d0\u05b7\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u05e0\u05d0\u05e8\u05e4\u05bf\u05d0\u05dc\u05e7 \u05d0\u05d9\u05e0\u05d6\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u05e0\u05d9\u05d2\u05e2\u05e8\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u05e0\u05d9\u05e7\u05d0\u05b7\u05e8\u05d0\u05b7\u05d2\u05d5\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u05d4\u05d0\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u05d4\u05d0\u05dc\u05e2\u05e0\u05d3\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u05e0\u05f2\u05b7\u05be\u05e0\u05d0\u05e8\u05d5\u05d5\u05e2\u05d2\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u05e0\u05d0\u05e8\u05d5\u05d5\u05e2\u05d2\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u05e0\u05d0\u05e8\u05d5\u05d5\u05e2\u05d2\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u05e0\u05e2\u05e4\u05bc\u05d0\u05b7\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u05e0\u05d9\u05d5 \u05d6\u05d9\u05dc\u05d0\u05b7\u05e0\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u05d0\u05e7\u05e1\u05d9\u05d8\u05d0\u05b7\u05e0\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u05e7\u05e8\u05d9\u05dd\u05be\u05d8\u05e2\u05e8\u05e7\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u05d0\u05b7\u05dc\u05d8 \u05e2\u05e0\u05d2\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u05d0\u05e1\u05e2\u05d8\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u05e0\u05d5\u05de\u05e2\u05e8\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u05d9\u05d9\u05d3\u05d9\u05e9\u05be\u05e4\u05e2\u05e8\u05e1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u05e4\u05bc\u05d0\u05b7\u05e0\u05d0\u05b7\u05de\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u05e7\u05d0\u05b7\u05e9\u05d5\u05d1\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u05e4\u05bc\u05e2\u05e8\u05d5"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u05e4\u05bf\u05e8\u05d0\u05b7\u05e0\u05e6\u05d5\u05d9\u05d6\u05d9\u05e9\u05e2 \u05e4\u05bc\u05d0\u05dc\u05d9\u05e0\u05e2\u05d6\u05d9\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u05e4\u05bc\u05d0\u05b7\u05e4\u05bc\u05d5\u05d0\u05b7 \u05e0\u05f2\u05b7 \u05d2\u05d9\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u05e4\u05bf\u05d9\u05dc\u05d9\u05e4\u05bc\u05d9\u05e0\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u05e4\u05bc\u05d0\u05b7\u05e7\u05d9\u05e1\u05d8\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u05e4\u05bc\u05d5\u05d9\u05dc\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u05e4\u05bc\u05d5\u05d9\u05dc\u05d9\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u05e4\u05bc\u05d9\u05d8\u05e7\u05e2\u05e8\u05df \u05d0\u05d9\u05e0\u05d6\u05dc\u05e2\u05df"_s)
		})
	}));
	return data;
}

LocaleNames_yi::LocaleNames_yi() {
}

$Class* LocaleNames_yi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_yi, name, initialize, &_LocaleNames_yi_ClassInfo_, allocate$LocaleNames_yi);
	return class$;
}

$Class* LocaleNames_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun