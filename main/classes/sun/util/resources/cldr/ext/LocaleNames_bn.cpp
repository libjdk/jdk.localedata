#include <sun/util/resources/cldr/ext/LocaleNames_bn.h>

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

$MethodInfo _LocaleNames_bn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_bn::*)()>(&LocaleNames_bn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_bn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bn_MethodInfo_
};

$Object* allocate$LocaleNames_bn($Class* clazz) {
	return $of($alloc(LocaleNames_bn));
}

void LocaleNames_bn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"\u09a8\u09be\u0989\u09b0\u09c1"_s);
	$var($String, metaValue_TK, u"\u099f\u09cb\u0995\u09c7\u09b2\u09be\u0989"_s);
	$var($String, metaValue_TV, u"\u099f\u09c1\u09ad\u09be\u09b2\u09c1"_s);
	$var($String, metaValue_bn, u"\u09ac\u09be\u0982\u09b2\u09be"_s);
	$var($String, metaValue_bo, u"\u09a4\u09bf\u09ac\u09cd\u09ac\u09a4\u09bf"_s);
	$var($String, metaValue_el, u"\u0997\u09cd\u09b0\u09bf\u0995"_s);
	$var($String, metaValue_gu, u"\u0997\u09c1\u099c\u09b0\u09be\u099f\u09bf"_s);
	$var($String, metaValue_he, u"\u09b9\u09bf\u09ac\u09cd\u09b0\u09c1"_s);
	$var($String, metaValue_jv, u"\u099c\u09be\u09ad\u09be\u09a8\u09bf\u099c"_s);
	$var($String, metaValue_ka, u"\u099c\u09b0\u09cd\u099c\u09bf\u09af\u09bc\u09be\u09a8"_s);
	$var($String, metaValue_ko, u"\u0995\u09cb\u09b0\u09bf\u09af\u09bc\u09be\u09a8"_s);
	$var($String, metaValue_lo, u"\u09b2\u09be\u0993"_s);
	$var($String, metaValue_ml, u"\u09ae\u09be\u09b2\u09be\u09af\u09bc\u09be\u09b2\u09be\u09ae"_s);
	$var($String, metaValue_or, u"\u0993\u09a1\u09bc\u09bf\u09af\u09bc\u09be"_s);
	$var($String, metaValue_ta, u"\u09a4\u09be\u09ae\u09bf\u09b2"_s);
	$var($String, metaValue_th, u"\u09a5\u09be\u0987"_s);
	$var($String, metaValue_ccp, u"\u099a\u09be\u0995\u09ae\u09be"_s);
	$var($String, metaValue_peo, u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09ab\u09be\u09b0\u09cd\u09b8\u09bf"_s);
	$var($String, metaValue_syr, u"\u09b8\u09bf\u09b0\u09bf\u09af\u09bc\u09be\u0995"_s);
	$var($String, metaValue_uga, u"\u0989\u0997\u09be\u09b0\u09bf\u099f\u09bf\u0995"_s);
	$var($String, metaValue_vai, u"\u09ad\u09be\u0987"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u0995\u09b2\u09cb\u09a8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u0993\u0998\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u09ae\u09bf\u09b0\u09be\u09a8\u09cd\u09a1\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u09aa\u09cd\u09b0\u09a4\u09c0\u0995\u0997\u09c1\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\u0986\u09a4\u09cd\u09b8\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u09ae\u09be\u09b0\u09cb\u09af\u09bc\u09be\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"\u099f\u09be\u0987 \u09a5\u09be\u09ae \u09a5\u09be\u09ae \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u099f\u09be\u0997\u09cb\u0993\u09af\u09bc\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u0987\u09ae\u09cb\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09ae\u09bf\u09b6\u09b0\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u09b0\u09be\u099c\u09b8\u09cd\u09a5\u09be\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u09ab\u09be\u0997\u09cd\u09b8-\u09aa\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u099f\u09be\u0987\u09ae\u09cd\u09a8\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"\u0995\u09c1\u09a6\u09af\u09bc\u09be\u09a6\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u09a4\u09c7\u09b8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u09b0\u09be\u09aa\u09be\u09a8\u09c1\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u09a4\u09c7\u09b0\u09c7\u09a8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u0985\u09cd\u09af\u09be\u09b8\u09b8\u09c7\u09a8\u09b6\u09a8 \u0986\u0987\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u09b0\u09be\u09b0\u09cb\u099f\u09cb\u0982\u0997\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u09a4\u09c7\u09a4\u09c1\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"\u09b8\u09bf\u0982\u09b9\u09b2\u09c0 \u09b2\u09bf\u09a5 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0986\u09a8\u09cd\u09a1\u09cb\u09b0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u09b8\u0982\u09af\u09c1\u0995\u09cd\u09a4 \u0986\u09b0\u09ac \u0986\u09ae\u09bf\u09b0\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u09ab\u09cd\u09b2\u09c7\u09ae\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0986\u09ab\u0997\u09be\u09a8\u09bf\u09b8\u09cd\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0985\u09cd\u09af\u09be\u09a8\u09cd\u099f\u09bf\u0997\u09c1\u09af\u09bc\u09be \u0993 \u09ac\u09be\u09b0\u09ac\u09c1\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"\u09ae\u09cd\u09b0\u09cb \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u0987\u09a5\u09bf\u0993\u09aa\u09bf\u0995 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u098f\u09cd\u09af\u09be\u0999\u09cd\u0997\u09c1\u0987\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\u09b8\u09ae\u09af\u09bc \u099c\u09cb\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0986\u09b2\u09ac\u09c7\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0986\u09b0\u09cd\u09ae\u09c7\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\u09a4\u09c7\u0999\u09cd\u0997\u09cb\u09af\u09bc\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0985\u09cd\u09af\u09be\u0999\u09cd\u0997\u09cb\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0985\u09cd\u09af\u09be\u09a8\u09cd\u099f\u09be\u09b0\u09cd\u0995\u099f\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0986\u09b0\u09cd\u099c\u09c7\u09a8\u09cd\u099f\u09bf\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u09aa\u09be\u09b0\u09cd\u09a5\u09bf\u09af\u09bc\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09b8\u09be\u09ae\u09cb\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0985\u09b8\u09cd\u099f\u09cd\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0985\u09b8\u09cd\u099f\u09cd\u09b0\u09c7\u09b2\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0986\u09b0\u09c1\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09b0 \u0987\u0982\u09b0\u09c7\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u0986\u09b2\u09be\u09a8\u09cd\u09a1 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0986\u099c\u09be\u09b0\u09ac\u09be\u0987\u099c\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u09ac\u09b8\u09a8\u09bf\u09af\u09bc\u09be \u0993 \u09b9\u09be\u09b0\u09cd\u099c\u09c7\u0997\u09cb\u09ad\u09bf\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u09ac\u09be\u09b0\u09ac\u09be\u09a6\u09cb\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u099a\u09c7\u09ac\u09c1\u09af\u09bc\u09be\u09a8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u09ac\u09be\u0982\u09b2\u09be\u09a6\u09c7\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u0995\u09c1\u09ae\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u09ac\u09c7\u09b2\u099c\u09bf\u09af\u09bc\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af-\u0989\u099a\u09cd\u099a \u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u09ac\u09c1\u09b0\u0995\u09bf\u09a8\u09be \u09ab\u09be\u09b8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u09ac\u09c1\u09b2\u0997\u09c7\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u09ac\u09be\u09b9\u09b0\u09be\u0987\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u09ac\u09c1\u09b0\u09c1\u09a8\u09cd\u09a1\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u09ac\u09c7\u09a8\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f \u09ac\u09be\u09b0\u09a5\u09c7\u09b2\u09bf\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u09ac\u09be\u09b0\u09ae\u09c1\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u0995\u09c1\u099f\u09c7\u09a8\u09be\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u098f\u09b0\u099c\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u09ac\u09cd\u09b0\u09c1\u09a8\u09c7\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u09ac\u09b2\u09bf\u09ad\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09b0\u09bf\u09ac\u09bf\u09af\u09bc\u09be\u09a8 \u09a8\u09c7\u09a6\u09be\u09b0\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u099c\u09bf\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u09ac\u09be\u09b9\u09be\u09ae\u09be \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u09b8\u09cb\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u09ad\u09c1\u099f\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u09ac\u09cb\u09ad\u09c7\u099f \u09a6\u09cd\u09ac\u09c0\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u09ac\u09a4\u09b8\u09cb\u09af\u09bc\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u09ac\u09c7\u09b2\u09be\u09b0\u09c1\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u09ac\u09c7\u09b2\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u09a6\u09c3\u09b6\u09cd\u09af\u09ae\u09be\u09a8 \u09ad\u09be\u09b7\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u09ab\u09be\u09b0\u09b8\u09bf \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u09b9\u09bf\u09ac\u09cd\u09b0\u09c1 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u0995\u09be\u09a8\u09be\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u0995\u09cb\u0995\u09cb\u09b8 (\u0995\u09bf\u09b2\u09bf\u0982) \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u09ae\u09be\u099c\u09be\u09a8\u09a6\u09c7\u09b0\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u0995\u0999\u09cd\u0997\u09cb-\u0995\u09bf\u09a8\u09b6\u09be\u09b8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be\u09b0 \u09aa\u09cd\u09b0\u099c\u09be\u09a4\u09a8\u09cd\u09a4\u09cd\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u0995\u0999\u09cd\u0997\u09cb - \u09ac\u09cd\u09b0\u09be\u099c\u09be\u09ad\u09bf\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u09b8\u09c1\u0987\u099c\u09be\u09b0\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u0995\u09cb\u09a4 \u09a6\u09bf\u09ad\u09cb\u09af\u09bc\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u0995\u09c1\u0995 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u099a\u09bf\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u0995\u09be\u0987\u09a5\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09ae\u09c7\u09b0\u09c1\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u099a\u09c0\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u0995\u09b2\u09ae\u09cd\u09ac\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u0995\u09cd\u09b2\u09bf\u09aa\u09be\u09b0\u099f\u09a8 \u0986\u0987\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u0995\u09cb\u09b8\u09cd\u099f\u09be\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u0995\u09bf\u0989\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u0995\u09c7\u09aa\u09ad\u09be\u09b0\u09cd\u09a6\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u0995\u09c1\u09b0\u09be\u09b8\u09be\u0993"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0995\u09cd\u09b0\u09bf\u09b8\u09ae\u09be\u09b8 \u09a6\u09cd\u09ac\u09c0\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u09b8\u09be\u0987\u09aa\u09cd\u09b0\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"\u09ac\u09be\u09b2\u09bf\u09a8\u09c0\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u099a\u09c7\u099a\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u0987\u0995\u09be\u099c\u09c1\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u0989\u099a\u09cd\u099a \u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u0985\u09cd\u09af\u09be\u099a\u09be\u0987\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u099a\u09bf\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u09a6\u09bf\u09af\u09bc\u09c7\u0997\u09cb \u0997\u09be\u09b0\u09cd\u09b8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u09a6\u09c7\u09ac\u09a8\u09be\u0997\u09b0\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u099c\u09bf\u09ac\u09c1\u09a4\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u09a1\u09c7\u09a8\u09ae\u09be\u09b0\u09cd\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u0986\u0995\u09cb\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u0997\u09cb\u09a8\u09cd\u09a1\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u09ac\u09cd\u09b0\u09c7\u0987\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u09b9\u09cd\u09ae\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u09a1\u09cb\u09ae\u09bf\u09a8\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u0986\u09b0\u09cd\u09ae\u09c7\u09a8\u09c0\u09af\u09bc \u099b\u09cb\u099f\u09b9\u09be\u09a4\u09c7\u09b0 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u09a1\u09cb\u09ae\u09c7\u09a8\u09bf\u0995\u09be\u09a8 \u09aa\u09cd\u09b0\u099c\u09be\u09a4\u09a8\u09cd\u09a4\u09cd\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u0997\u09cb\u09b0\u09cb\u09a8\u09cd\u09a4\u09be\u09b2\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u0997\u09a5\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u09ae\u09c7\u0987\u099f\u09c7\u0987 \u09ae\u09be\u09af\u09bc\u09c7\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u099c\u09c1\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u099f\u09be\u0987\u0997\u09cd\u09b0\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0986\u09b2\u099c\u09c7\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u09aa\u09be\u0999\u09cd\u0997\u09be\u09b8\u09bf\u09a8\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"\u0985\u09b0\u09cd\u09a7\u09aa\u09cd\u09b0\u09b8\u09cd\u09a5 \u09aa\u09b0\u09cd\u09af\u09a8\u09cd\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u09aa\u09be\u09b9\u09cd\u09b2\u09be\u09ad\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0995\u09c1\u0989\u099f\u09be \u098f\u09ac\u0982 \u09ae\u09c7\u09b2\u09bf\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u099a\u09bf\u09ac\u099a\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u09aa\u09be\u09ae\u09cd\u09aa\u09be\u0999\u09cd\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0987\u0995\u09c1\u09af\u09bc\u09c7\u09a1\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u09aa\u09be\u09aa\u09bf\u09af\u09bc\u09be\u09ae\u09c7\u09a8\u09cd\u099f\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u0985\u09a6\u09be\u0997\u09cd\u09ae\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u098f\u09b8\u09cd\u09a4\u09cb\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u099f\u09bf\u09ad"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u09ae\u09bf\u09b6\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae \u09b8\u09be\u09b9\u09be\u09b0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u099a\u09be\u0997\u09be\u09a4\u09be\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u09aa\u09be\u09b2\u09be\u09af\u09bc\u09c1\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u099a\u09c1\u0995\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u099a\u09bf\u09a8\u09c1\u0995 \u099c\u09be\u09b0\u09cd\u0997\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u09ae\u09be\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u099a\u09bf\u09aa\u09c7\u0993\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u099a\u0995\u099f\u09cb\u0993"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"\u0997\u09be\u09a3\u09bf\u09a4\u09bf\u0995 \u09ac\u09cb\u09b2\u09cd\u09a1 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u099a\u09c7\u09b0\u09cb\u0995\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0987\u09b0\u09bf\u09a4\u09cd\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u09b8\u09cd\u09aa\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0987\u09a5\u09bf\u0993\u09aa\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u0987\u0989\u09b0\u09cb\u09aa\u09c0\u09af\u09bc \u0987\u0989\u09a8\u09bf\u09af\u09bc\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u098f\u09b2\u09be\u09ae\u09be\u0987\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0997\u09cd\u09b0\u09bf\u0997\u09cb\u09b0\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u0987\u0989\u09b0\u09cb\u099c\u09cb\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u09b6\u09be\u0987\u09af\u09bc\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u0997\u09c1\u099c\u09b0\u09be\u09a4\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u09b8\u09bf\u09a8\u09cd\u09a7\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u0986\u09a6\u09c7\u0997\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u09ab\u09bf\u09a8\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u09ab\u09bf\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u09ab\u0995\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u09ae\u09be\u0987\u0995\u09cd\u09b0\u09cb\u09a8\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"\u09b8\u09cd\u09a5\u09be\u09a8\u09c0\u09af\u09bc \u09ad\u09bf\u09a8\u09cd\u09a8\u09a4\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u09ab\u09cd\u09af\u09be\u09b0\u0993 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u09ab\u09cd\u09b0\u09be\u09a8\u09cd\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u0997\u09cd\u09b0\u09c7\u09ac\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u09ad\u09be\u09b0\u09a4\u09c0\u09af\u09bc \u099c\u09be\u09a4\u09c0\u09af\u09bc \u09ac\u09b0\u09cd\u09b7\u09aa\u099e\u09cd\u099c\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u0997\u09cd\u09b0\u09c0\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0997\u09cd\u09af\u09be\u09ac\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u09ad\u09cb\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u09af\u09c1\u0995\u09cd\u09a4\u09b0\u09be\u099c\u09cd\u09af"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u09a8\u09be\u0987\u099c\u09c7\u09b0\u09bf\u09af\u09bc \u09aa\u09bf\u099c\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u0997\u09cd\u09b0\u09c7\u09a8\u09be\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u099c\u09b0\u09cd\u099c\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u09ab\u09b0\u09be\u09b8\u09c0 \u0997\u09be\u09af\u09bc\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u0997\u09c1\u09af\u09bc\u09be\u09b0\u09cd\u09a8\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0998\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u09a4\u09be\u0987\u09b2\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u099c\u09bf\u09ac\u09cd\u09b0\u09be\u09b2\u09cd\u099f\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u0986\u09ab\u09cd\u09b0\u09bf\u09b9\u09bf\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u0997\u09cd\u09b0\u09c0\u09a8\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u0987\u0982\u09b0\u09c7\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0997\u09be\u09ae\u09cd\u09ac\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0997\u09bf\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0997\u09c1\u09af\u09bc\u09be\u09a6\u09c7\u09b2\u09cc\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u09a8\u09bf\u09b0\u0995\u09cd\u09b7\u09c0\u09af\u09bc \u0997\u09bf\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0997\u09cd\u09b0\u09c0\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u099c\u09b0\u09cd\u099c\u09bf\u09af\u09bc\u09be \u0993 \u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u09b8\u09cd\u09af\u09be\u09a8\u09cd\u09a1\u0989\u0987\u099a \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0997\u09c1\u09af\u09bc\u09be\u09a4\u09c7\u09ae\u09be\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u0997\u09c1\u09af\u09bc\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"\u0997\u09be\u09a3\u09bf\u09a4\u09bf\u0995 \u09ae\u09cb\u09a8\u09cb\u09b8\u09cd\u09aa\u09c7\u09b8 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0997\u09bf\u09a8\u09bf-\u09ac\u09bf\u09b8\u09be\u0989"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u09a4\u09cd\u09b2\u09bf\u0999\u09cd\u0997\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u0995\u09cd\u09b2\u09bf\u0999\u09cd\u0997\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u09a8\u09a4\u09c1\u09a8 \u09a4\u09be\u0987 \u09b2\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0997\u09bf\u09af\u09bc\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u0995\u09c1\u09b0\u09cd\u09a6\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u09ad\u09be\u09b7\u09be\u09ad\u09bf\u09a4\u09cd\u09a4\u09bf\u0995 \u09ac\u09bf\u09b7\u09af\u09bc\u09ac\u09b8\u09cd\u09a4\u09c1 \u09a8\u09c7\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0985\u09b8\u09cd\u099f\u09cd\u09b0\u09bf\u09af\u09bc\u09be\u09a8 \u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u09b9\u0982\u0995\u0982 \u098f\u09b8\u098f\u0986\u09b0 \u099a\u09c0\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u09b9\u09be\u09b0\u09cd\u09a1 \u098f\u09ac\u0982 \u09ae\u09cd\u09af\u09be\u0995\u09a1\u09cb\u09a8\u09be\u09b2\u09cd\u09a1 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u09b9\u09a8\u09cd\u09a1\u09c1\u09b0\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0995\u09cd\u09b0\u09cb\u09af\u09bc\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u098f\u0998\u09c7\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u09b8\u09c1\u0987\u09b8 \u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995 \u09ac\u09b0\u09cd\u09b7\u09aa\u099e\u09cd\u099c\u09c0 (\u0989\u09ae\u09cd\u09ae\u09be \u0986\u09b2-\u0995\u09c1\u09b0\u0986)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u09b9\u09be\u0987\u09a4\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u09b9\u09be\u0999\u09cd\u0997\u09c7\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\u09a4\u09be\u09ae\u09be\u09b6\u09c7\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09a8\u09be\u09b0\u09bf \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0987\u09a8\u09cd\u09a6\u09cb\u09a8\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"\u0995\u09be\u09af\u09bc\u09be\u09b9 \u09b2\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0986\u09af\u09bc\u09be\u09b0\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u09a8\u09c7\u09af\u09bc\u09be\u09aa\u09cb\u09b2\u09bf\u099f\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u09a8\u09be\u09ae\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"\u09b8\u09cb\u09b0\u09be \u09b8\u09ae\u09cd\u09aa\u09c7\u0982 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u099c\u09be\u099c\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0987\u099c\u09b0\u09be\u09af\u09bc\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u0986\u0987\u09b2 \u0985\u09ab \u09ae\u09cd\u09af\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u09ad\u09be\u09b0\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"\u0987\u0989\u09b0\u09cb\u09aa\u09c0\u09af\u09bc \u0995\u09cd\u09b0\u09ae \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8\u09c7\u09b0 \u09a8\u09bf\u09af\u09bc\u09ae\u09be\u09ac\u09b2\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u09ac\u09cd\u09b0\u09bf\u099f\u09bf\u09b6 \u09ad\u09be\u09b0\u09a4 \u09ae\u09b9\u09be\u09b8\u09be\u0997\u09b0\u09c0\u09af\u09bc \u0985\u099e\u09cd\u099a\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0987\u09b0\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0987\u09b0\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0986\u0987\u09b8\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0987\u09a4\u09be\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u0997\u09be\u09a3\u09bf\u09a4\u09bf\u0995 \u099a\u09bf\u09b9\u09cd\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u09a5\u09be\u0987 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u09ac\u09be\u0982\u09b2\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"\u09b8\u09bf\u09b0\u09bf\u09b2\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u099c\u09be\u09b0\u09cd\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u099c\u09be\u09ae\u09be\u0987\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u099c\u09b0\u09cd\u09a1\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u0986\u0987\u09a8\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u0997\u09c1\u09b8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u09a8\u09be\u09af\u09bc\u09be\u09b8\u09be \u099f\u09cb\u0999\u09cd\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u0995\u09a8\u09cd\u09a8\u09a1\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u0995\u09be\u09af\u09bc\u09be\u09b9 \u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u09b8\u09c1\u0987\u09b8 \u09b9\u09be\u0987 \u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"\u09a7\u09cd\u09ac\u09a8\u09bf \u09a8\u09bf\u09b0\u09cd\u09a6\u09c7\u09b6\u0995 \u09ac\u09be\u099b\u09be\u0987 \u0995\u09cd\u09b0\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u09ac\u09cc\u09a6\u09cd\u09a7 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u0995\u09c7\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u09b2\u09cd\u09af\u09be\u099f\u09bf\u09a8 \u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u0995\u09bf\u09b0\u0997\u09bf\u099c\u09bf\u09b8\u09cd\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u0995\u09ae\u09cd\u09ac\u09cb\u09a1\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u0995\u09bf\u09b0\u09bf\u09ac\u09be\u09a4\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u0995\u09ae\u09cb\u09b0\u09cb\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f \u0995\u09bf\u099f\u09b8 \u0993 \u09a8\u09c7\u09ad\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u0995\u09be\u09a8\u09be\u09a1\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u0995\u09be\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u0995\u09be\u09a8\u09be\u09a1\u09c0\u09af\u09bc \u09ab\u09b0\u09be\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0 \u0995\u09cb\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u0995\u09cb\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u09aa\u09cb\u09b2\u09be\u09b0\u09cd\u09a1 \u09a7\u09cd\u09ac\u09a8\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u09b8\u09c1\u0987\u09b8 \u09ab\u09b0\u09be\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u0995\u09c1\u09af\u09bc\u09c7\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u099f\u09cb\u0995 \u09aa\u09bf\u09b8\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u0995\u09c7\u09ae\u09cd\u09af\u09be\u09a8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u0995\u09be\u099c\u09be\u0996\u09b8\u09cd\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u09b8\u09bf\u09b0\u09bf\u09b2\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u09b2\u09be\u0993\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u09b2\u09c7\u09ac\u09be\u09a8\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f \u09b2\u09c1\u09b8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u09ab\u09cb\u09a8\u09bf\u09b6\u09c0\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u099a\u09be\u09b0\u09cd\u099a \u09b8\u09cd\u09b2\u09be\u09ad\u09cb\u09a8\u09bf\u0995 \u09b8\u09bf\u09b0\u09bf\u09b2\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u0997\u0993\u0987\u099a\u09cd\u2019\u0987\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u09a8\u09bf\u09ae\u09cd\u09a8 \u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u09b2\u09bf\u099a\u09c7\u09a8\u09b8\u09cd\u099f\u09c7\u0987\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u09b6\u09cd\u09b0\u09c0\u09b2\u0999\u09cd\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u0986\u0995\u09cd\u0995\u09be\u09a6\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0995\u09aa\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u09b2\u09be\u0987\u09ac\u09c7\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u09b2\u09c7\u09b8\u09cb\u09a5\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\u09aa\u09c1\u09b8\u09cd\u09a4\u0995 \u09aa\u09be\u09b9\u09b2\u09ad\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u09b2\u09bf\u09a5\u09c1\u09af\u09bc\u09be\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u09b2\u09be\u0995\u09cd\u09b8\u09c7\u09ae\u09ac\u09be\u09b0\u09cd\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u09b2\u09be\u09a4\u09cd\u09ad\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u0995\u09be\u099f\u09be\u0995\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u09b2\u09bf\u09ac\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u09b2\u09be\u09a1\u09bf\u09a8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u09ad\u09c1\u099e\u09cd\u099c\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u09b2\u09be\u09a8\u09cd\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u09b2\u09be\u0999\u09cd\u0997\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u09a5\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u09ae\u09cb\u09b0\u0995\u09cd\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u09ae\u09cb\u09a8\u09be\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u09ae\u09b2\u09a1\u09cb\u09ad\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u09ae\u09a8\u09cd\u099f\u09bf\u09a8\u09bf\u0997\u09cd\u09b0\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f \u09ae\u09be\u09b0\u09cd\u099f\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u09b2\u09be\u09ae\u09cd\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u09ae\u09be\u09a6\u09be\u0997\u09be\u09b8\u09cd\u0995\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u09ae\u09be\u09b0\u09cd\u09b6\u09be\u09b2 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u0986\u09b2\u09c7\u0989\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"\u09ad\u09be\u0987 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0 \u09ae\u09cd\u09af\u09be\u09b8\u09c7\u09a1\u09cb\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"\u0997\u09be\u09a3\u09bf\u09a4\u09bf\u0995 \u09a1\u09be\u09ac\u09b2-\u09b8\u09cd\u099f\u09cd\u09b0\u09be\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u09ae\u09be\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u09ae\u09be\u09af\u09bc\u09be\u09a8\u09ae\u09be\u09b0 (\u09ac\u09be\u09b0\u09cd\u09ae\u09be)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u09ae\u0999\u09cd\u0997\u09cb\u09b2\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u09a8\u09c7\u0993\u09af\u09bc\u09be\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u0995\u09be\u0993 \u098f\u09b8\u098f\u0986\u09b0 \u099a\u09c0\u09a8\u09be \u099a\u09c0\u09a8\u09be (\u09ae\u09cd\u09af\u09be\u0995\u09be\u0993 \u098f\u09b8\u098f\u0986\u09b0 \u099a\u09c0\u09a8\u09be) \u099a\u09c0\u09a8\u09be (\u0990\u09a4\u09bf\u09b9\u09cd\u09af\u09ac\u09be\u09b9\u09c0, \u09ae\u09cd\u09af\u09be\u0995\u09be\u0993 \u098f\u09b8\u098f\u0986\u09b0 \u099a\u09c0\u09a8\u09be) \u0985\u099e\u09cd\u099a\u09b2: \u09ae\u09cd\u09af\u09be\u0995\u09be\u0993 \u098f\u09b8\u098f\u0986\u09b0 \u099a\u09c0\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u09ae\u09be\u09b0\u09bf\u09af\u09bc\u09be\u09a8\u09be \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u09ae\u09be\u09b0\u09cd\u099f\u09bf\u09a8\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u09ae\u09b0\u09bf\u09a4\u09be\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u09ae\u09a8\u09cd\u099f\u09b8\u09c7\u09b0\u09be\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u09ae\u09be\u09b2\u09cd\u099f\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"\u0987\u0989\u098f\u09a8 \u099c\u09bf\u0987\u099c\u09bf\u098f\u09a8 \u09ac\u09b0\u09cd\u09a3\u09be\u09a8\u09cd\u09a4\u09b0\u09a3"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u09ae\u09b0\u09bf\u09b6\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a8 \u0986\u09b2\u09a4\u09be\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u09ae\u09be\u09b2\u09a6\u09cd\u09ac\u09c0\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u09ae\u09be\u09b2\u09be\u0989\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u09ae\u09c7\u0995\u09cd\u09b8\u09bf\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u09ae\u09be\u09b2\u09af\u09bc\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u09ae\u09cb\u099c\u09be\u09ae\u09cd\u09ac\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\u0996\u09a6\u09bf\u09a4 \u09aa\u09be\u09b9\u09b2\u09ad\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u09a8\u09be\u09ae\u09bf\u09ac\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u0989\u09aa \u09b8\u09be\u09b9\u09be\u09b0\u09be\u09a8 \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u09b9\u09bf\u09ac\u09cd\u09b0\u09c1 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u0985\u09ad\u09bf\u09a7\u09be\u09a8 \u09ac\u09be\u099b\u09be\u0987 \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u09a8\u09bf\u0989 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a1\u09cb\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u09a8\u09be\u0987\u099c\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u09a8\u09b0\u09ab\u09cb\u0995 \u09a6\u09cd\u09ac\u09c0\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u09a8\u09be\u0987\u099c\u09c7\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u09a4\u09be\u09b0\u09cb\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u09b8\u09b2\u09cd\u099f\u09be\u09b0 \u09aa\u09be\u09b9\u09b2\u09ad\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u09a8\u09bf\u0995\u09be\u09b0\u09be\u0997\u09c1\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\u09ab\u09be\u09b9\u09be\u0993 \u09ae\u0999"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u09a8\u09c7\u09a6\u09be\u09b0\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u09a8\u09b0\u0993\u09af\u09bc\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u09a8\u09c7\u09aa\u09be\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u09a8\u09bf\u0989\u09af\u09bc\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\u09ab\u09bf\u09a8\u09bf\u09b6\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u09b0\u09ae\u09cd\u09ac\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u09b8\u09bf\u09ae\u09b6\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u09a8\u09bf\u0989\u099c\u09bf\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u09b0\u09cb\u09ae\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u09ae\u09c7\u09b0\u09cb\u0987\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u0995\u09cd\u09b0\u09bf\u09ae\u09bf\u09af\u09bc\u09be\u09a8 \u09a4\u09c1\u09b0\u09cd\u0995\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u0987\u0982\u09b0\u09c7\u099c\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0993\u09ae\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u0986\u0999\u09cd\u0997\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u09b8\u09c7\u09b8\u09c7\u09b2\u0993\u09af\u09bc\u09be \u0995\u09cd\u09b0\u09c7\u0993\u09b2 \u09ab\u09cd\u09b0\u09c7\u099e\u09cd\u099a"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"\u09aa\u09be\u09b9\u09af\u09bc\u09be \u09ae\u0982 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u09aa\u09be\u09a8\u09be\u09ae\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995-\u09b8\u09bf\u09ad\u09bf\u09b2 \u09ac\u09b0\u09cd\u09b7\u09aa\u099e\u09cd\u099c\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u0995\u09be\u09b6\u09c1\u09ac\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u09ac\u09cd\u09b0\u09bf\u099f\u09bf\u09b6 \u0987\u0982\u09b0\u09c7\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u09aa\u09c7\u09b0\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u09ab\u09b0\u09be\u09b8\u09c0 \u09aa\u09b2\u09bf\u09a8\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u09aa\u09be\u09aa\u09c1\u09af\u09bc\u09be \u09a8\u09bf\u0989 \u0997\u09bf\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u09ab\u09bf\u09b2\u09bf\u09aa\u09be\u0987\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u09aa\u09be\u0995\u09bf\u09b8\u09cd\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u09aa\u09cb\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u0987\u0993\u09a8\u09cd\u09a1\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f \u09aa\u09bf\u09af\u09bc\u09c7\u09b0 \u0993 \u09ae\u09bf\u0995\u09c1\u09af\u09bc\u09c7\u09b2\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u09aa\u09bf\u099f\u0995\u09c7\u09af\u09bc\u09be\u09b0\u09cd\u09a8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u09aa\u09c1\u09af\u09bc\u09c7\u09b0\u09cd\u09a4\u09cb \u09b0\u09bf\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u09aa\u09cd\u09af\u09be\u09b2\u09c7\u09b8\u09cd\u099f\u09be\u0987\u09a8\u09c7\u09b0 \u0985\u099e\u09cd\u099a\u09b2\u09b8\u09ae\u09c2\u09b9"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u09ac\u09be\u09b2\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u09aa\u09b0\u09cd\u09a4\u09c1\u0997\u09be\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u09aa\u09be\u09b2\u09be\u0989"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u09a8\u09bf\u09af\u09bc\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u0997\u09cd\u09b0\u09c0\u0995 \u099b\u09cb\u099f \u09b9\u09be\u09a4\u09c7\u09b0 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u09aa\u09cd\u09af\u09be\u09b0\u09be\u0997\u09c1\u09af\u09bc\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u09a4\u09c1\u09ae\u09cd\u09ac\u09c1\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u0995\u09be\u09a4\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u09a8\u09bf\u0989\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u0986\u0989\u099f\u09b2\u09be\u0987\u09a8\u09bf\u0982 \u0993\u09b8\u09be\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u09b2\u09c7\u099c\u0998\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"\u0985\u09b9\u09ae \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"\u09a4\u09be\u0995\u09cd\u09b0\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u09a4\u09be\u0987 \u09ad\u09bf\u09af\u09bc\u09c7\u09ce"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u09aa\u09c3\u09a5\u09bf\u09ac\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0 \u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u09b0\u09bf\u0987\u0989\u09a8\u09bf\u09af\u09bc\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u09b2\u09cb\u099c\u09ac\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u09b0\u09c7\u099c\u09cd\u09af\u09be\u0999\u09cd\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u0993\u09b6\u09bf\u09af\u09bc\u09be\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u09b0\u09cb\u09ae\u09be\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u09b8\u09be\u09b0\u09cd\u09ac\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u09b0\u09be\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u09b0\u09c1\u09af\u09bc\u09be\u09a8\u09cd\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"\u09a8\u09a4\u09c1\u09a8 \u09a4\u09be\u0987 \u09b2\u09bf\u0989 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u09a8\u09bf\u099a\u09be\u0987\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u0996\u09b0\u09cb\u09b7\u09cd\u09a0\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u09b8\u09cc\u09a6\u09bf \u0986\u09b0\u09ac"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u09aa\u09cb\u09b9\u09cd\u09a8\u09aa\u09c7\u0987\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u09a8\u09cd\u09a1\u09be\u09af\u09bc\u09c0\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u09b8\u09b2\u09cb\u09ae\u09a8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u09a4\u09be\u09b8\u09be\u0993\u09af\u09bc\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u09b8\u09bf\u09b8\u09bf\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u09b8\u09c1\u09a6\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u09b8\u09c1\u0987\u09a1\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u09aa\u09c2\u09b0\u09cd\u09ac \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u0986\u09b0\u09be\u09ae\u09be\u0987\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0 \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u09b8\u09bf\u0999\u09cd\u0997\u09be\u09aa\u09c1\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f \u09b9\u09c7\u09b2\u09c7\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u099f\u09be\u0987\u099f \u09b2\u09be\u0987\u09a8 \u09ac\u09bf\u09ad\u09be\u099c\u0995 \u09b6\u09c8\u09b2\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u09b8\u09cd\u09b2\u09cb\u09ad\u09be\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"\u09ae\u09be\u09af\u09bc\u09be\u09a8\u09ae\u09be\u09b0 \u09a5\u09be\u0987 \u09b2\u09c7\u09af\u09bc\u09bf\u0982 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a8 \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u09b8\u09cd\u09ac\u09be\u09b2\u09ac\u09be\u09b0\u09cd\u09a1 \u0993 \u099c\u09be\u09a8 \u09ae\u09c7\u09af\u09bc\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u09b8\u09cd\u09b2\u09cb\u09ad\u09be\u0995\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u09b8\u09bf\u09af\u09bc\u09c7\u09b0\u09be \u09b2\u09bf\u0993\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u09b8\u09be\u09a8 \u09ae\u09be\u09b0\u09bf\u09a8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u09b8\u09c7\u09a8\u09c7\u0997\u09be\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u09b8\u09cb\u09ae\u09be\u09b2\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u09ae\u09be\u09aa\u09c1\u099a\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0986\u09b0\u09be\u09aa\u09be\u09b9\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u0990\u09a4\u09bf\u09b9\u09cd\u09af\u09ac\u09be\u09b9\u09c0 \u09a4\u09be\u09ae\u09bf\u09b2 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u09b8\u09c1\u09b0\u09bf\u09a8\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u09b8\u09c1\u09a6\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u09b8\u09be\u0993\u099f\u09cb\u09ae\u09be \u0993 \u09aa\u09cd\u09b0\u09bf\u09a8\u09cd\u09b8\u09bf\u09aa\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u098f\u09b2 \u09b8\u09be\u09b2\u09ad\u09c7\u09a6\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u09b8\u09bf\u09a8\u09cd\u099f \u09ae\u09be\u09b0\u09cd\u099f\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u09b8\u09bf\u09b0\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u0987\u09af\u09bc\u09be\u0993"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0987\u09b8\u0993\u09af\u09bc\u09be\u09a4\u09bf\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u0986\u09b0\u09be\u0993\u09af\u09bc\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u0987\u09af\u09bc\u09be\u09aa\u09c7\u09b8\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u099f\u09cd\u09b0\u09bf\u09b8\u09cd\u099f\u09be\u09a8 \u09a1\u09be \u0995\u09c1\u09a8\u09b9\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u0986\u09b8\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u09ae\u09be\u09b0\u09cd\u0995\u09bf\u09a8 \u09af\u09c1\u0995\u09cd\u09a4\u09b0\u09be\u09b7\u09cd\u099f\u09cd\u09b0\u09c7\u09b0 \u09aa\u09b0\u09bf\u09ae\u09be\u09aa \u09b8\u09bf\u09b8\u09cd\u099f\u09c7\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u09a4\u09c1\u09b0\u09cd\u0995\u09b8 \u0993 \u0995\u09be\u0987\u0995\u09cb\u09b8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u0987\u09af\u09bc\u09be\u0999\u09cd\u0997\u09ac\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u099a\u09be\u09a6"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u09ab\u09b0\u09be\u09b8\u09c0 \u09a6\u0995\u09cd\u09b7\u09bf\u09a3\u09be\u099e\u09cd\u099a\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u099f\u09cb\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u09a5\u09be\u0987\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u09a4\u09be\u099c\u09bf\u0995\u09bf\u09b8\u09cd\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09b0\u09be\u09ac\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u09a4\u09bf\u09ae\u09c1\u09b0-\u09b2\u09c7\u09b8\u09cd\u09a4\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u0987\u09af\u09bc\u09c7\u09ae\u09cd\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"\u09b9\u09be\u0999\u09cd\u0997\u09c1\u09b2 \u09aa\u09cd\u09b0\u09be\u09a5\u09ae\u09bf\u0995 \u09ac\u09cd\u09af\u099e\u09cd\u099c\u09a8\u09ac\u09b0\u09cd\u09a3 \u09a6\u09cd\u09ac\u09be\u09b0\u09be \u0985\u09a8\u09c1\u09b8\u09a8\u09cd\u09a7\u09be\u09a8 \u0995\u09b0\u09c1\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u09a4\u09c1\u09b0\u09cd\u0995\u09ae\u09c7\u09a8\u09bf\u09b8\u09cd\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u09a4\u09bf\u0989\u09a8\u09bf\u09b8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u099f\u09cb\u0999\u09cd\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u09a4\u09c1\u09b0\u09b8\u09cd\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u09a4\u09cd\u09b0\u09bf\u09a8\u09bf\u09a8\u09be\u09a6 \u0993 \u099f\u09cb\u09ac\u09cd\u09af\u09be\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u09a4\u09be\u0987\u0993\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u0986\u09b8\u09cd\u09a4\u09c1\u09b0\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u0985\u09b0\u09cd\u0996\u09cb\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u09a4\u09be\u099e\u09cd\u099c\u09be\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u0995\u09cb\u09af\u09bc\u09be\u09b8\u09bf\u0993"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u0985\u099c\u09be\u09a8\u09be \u09b2\u09bf\u09aa\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0987\u0989\u0995\u09cd\u09b0\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u0986\u09b0\u09ae\u09c7\u09a8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u09aa\u09c2\u09b0\u09cd\u09ac \u098f\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u099f\u09c1\u09ad\u09bf\u09a8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u0995\u0999\u09cd\u0997\u09cb \u09b8\u09cb\u09af\u09bc\u09be\u09b9\u09bf\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u098f\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u09b9\u09be\u0987\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u09aa\u09c2\u09b0\u09cd\u09ac \u098f\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0989\u0997\u09be\u09a8\u09cd\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u09aa\u09bf\u09a8\u09bf\u09a8 \u09b8\u099c\u09cd\u099c\u09be\u0995\u09cd\u09b0\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u0987\u0989\u09b0\u09cb\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u09b8\u09bf\u0982\u09b9\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u09af\u09c1\u0995\u09cd\u09a4\u09b0\u09be\u09b7\u09cd\u099f\u09cd\u09b0\u09c7\u09b0 \u09aa\u09be\u09b0\u09cd\u09b6\u09cd\u09ac\u09ac\u09b0\u09cd\u09a4\u09c0 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u099c\u09be\u09a4\u09bf\u09b8\u0982\u0998"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u09ae\u09be\u09b0\u09cd\u0995\u09bf\u09a8 \u09af\u09c1\u0995\u09cd\u09a4\u09b0\u09be\u09b7\u09cd\u099f\u09cd\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u09b9\u09be\u0993\u09af\u09bc\u09be\u0987\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u09b8\u09be\u09a7\u09be\u09b0\u09a3 \u099a\u09c0\u09a8\u09be \u09b8\u099c\u09cd\u099c\u09be\u0995\u09cd\u09b0\u09ae - \u099c\u09bf\u09ac\u09bf\u09e8\u09e9\u09e7\u09e8"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0989\u09b0\u09c1\u0997\u09c1\u09af\u09bc\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u09aa\u09cd\u09b0\u09c1\u09b6\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0989\u099c\u09ac\u09c7\u0995\u09bf\u09b8\u09cd\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f\u09cd\u09b0\u09be\u09b2 \u0986\u099f\u09b2\u09be\u09b8 \u09a4\u09be\u09ae\u09be\u099c\u09bf\u0997\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u0986\u09ac\u09b0\u09cd\u09a4\u09bf\u09a4 \u09b8\u099c\u09cd\u099c\u09be\u0995\u09cd\u09b0\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u09a8\u09bf\u0999\u09cd\u0997\u09c7\u09ae\u09cd\u09ac\u09c1\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u09ad\u09cd\u09af\u09be\u099f\u09bf\u0995\u09be\u09a8 \u09b8\u09bf\u099f\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09aa\u09cd\u09b0\u09cb\u09ad\u09c7\u09a8\u09b8\u09be\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u09b8\u09c7\u09a8\u09cd\u099f \u09ad\u09bf\u09a8\u09b8\u09c7\u09a8\u09cd\u099f \u0993 \u0997\u09cd\u09b0\u09c7\u09a8\u09be\u09a1\u09bf\u09a8\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u09ad\u09c7\u09a8\u09c7\u099c\u09c1\u09af\u09bc\u09c7\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u09ac\u09cd\u09b0\u09bf\u099f\u09bf\u09b6 \u09ad\u09be\u09b0\u09cd\u099c\u09bf\u09a8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u09ae\u09be\u09b0\u09cd\u0995\u09bf\u09a8 \u09af\u09c1\u0995\u09cd\u09a4\u09b0\u09be\u09b7\u09cd\u099f\u09cd\u09b0\u09c7\u09b0 \u09ad\u09be\u09b0\u09cd\u099c\u09bf\u09a8 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u09ad\u09bf\u09af\u09bc\u09c7\u09a4\u09a8\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u09ad\u09be\u09a8\u09c1\u09af\u09bc\u09be\u099f\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u09a8\u09cb\u0997\u09be\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u09b0\u09be\u0993\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09a8\u09b0\u09cd\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u0985\u09b8\u09cd\u099f\u09cd\u09b0\u09be\u09b2\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b2\u09bf\u09b8 \u0993 \u09ab\u09c1\u099f\u09c1\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u09aa\u09cd\u09b0\u09a5\u09be\u0997\u09a4 \u09ac\u09be\u099b\u09be\u0987 \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u09ae\u09be\u0987\u0995\u09cd\u09b0\u09cb\u09a8\u09c7\u09b6\u09bf\u09af\u09bc\u09be \u0985\u099e\u09cd\u099a\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u0997\u09cb\u09ae\u09cd\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u09b2\u09be\u0995\u09cb\u099f\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"\u0985\u09b0\u09cd\u09a5\u09a8\u09c8\u09a4\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be\u09b8\u09c2\u099a\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"\u0986\u0997\u09c7\u09b0 \u09ac\u09be\u099b\u09be\u0987\u09af\u09bc\u09c7\u09b0 \u0995\u09cd\u09b0\u09ae, \u09b8\u09be\u09ae\u099e\u09cd\u099c\u09b8\u09cd\u09af\u09c7\u09b0 \u099c\u09a8\u09cd\u09af"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b2\u09b8\u09c7\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u09b8\u09be\u09ae\u09cb\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"\u09ae\u09bf\u099f\u09bf\u0987 \u09ae\u09be\u09af\u09bc\u09c7\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b2\u09be\u09ae\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b6\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u09b8\u09bf\u0989\u09a1\u09cb-\u0985\u09cd\u09af\u09be\u0995\u09b8\u09c7\u09a8\u09cd\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b0\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u09b8\u09bf\u0989\u09a1\u09cb-\u09ac\u09bf\u09a1\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u0986\u0993\u09af\u09bc\u09be\u09a7\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u09aa\u09b2\u09bf\u09a8\u09c7\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u0995\u09b8\u09cb\u09ad\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u09b9\u09cd\u09ae\u09c0 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0985\u09b2\u09bf\u0996\u09bf\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u0993\u09b2 \u099a\u09bf\u0995\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b0\u09cd\u09b2\u09aa\u09bf\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u09ac\u09be\u099f\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\u09ac\u09cd\u09b2\u09bf\u09b8\u09aa\u09cd\u09b0\u09a4\u09c0\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0987\u09af\u09bc\u09c7\u09ae\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u098f\u09a8\u2019\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0986\u09a6\u09b0\u09cd\u09b6 \u09ac\u09be\u099b\u09be\u0987 \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u09ab\u09cd\u09af\u09be\u0999\u09cd\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u09ab\u09be\u09a8\u09cd\u09a4\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u099a\u09bf\u09b9\u09cd\u09a8 \u09b2\u09bf\u0996\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u09ae\u09be\u09af\u09bc\u09cb\u09a4\u09cd\u09a4\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"\u099a\u09be\u09ae \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"\u09b8\u09c1\u09a6\u09be\u09a8\u09c0\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u0986\u09b2\u0997\u09be \u09b2\u09be\u0987\u09a8 \u09ac\u09bf\u09ad\u09be\u099c\u0995 \u09b6\u09c8\u09b2\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u09a6\u09c7\u09ac\u09a8\u09be\u0997\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u099c\u09b0\u09cd\u099c\u09bf\u09af\u09bc\u09be\u09a8 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"\u099d\u09c1\u0987\u09a8 \u09b8\u099c\u09cd\u099c\u09be\u0995\u09cd\u09b0\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u09b9\u09bf\u09b0\u09be\u0997\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u099c\u09be\u09ae\u09cd\u09ac\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u099c\u09bf\u09ae\u09cd\u09ac\u09be\u09ac\u09cb\u09af\u09bc\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u0985\u099c\u09be\u09a8\u09be \u0985\u099e\u09cd\u099a\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u09b0\u09c1\u09a8\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u09ae\u09c7\u099f\u09cd\u09b0\u09bf\u0995 \u09b8\u09bf\u09b8\u09cd\u099f\u09c7\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-861 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u09ae\u09cb\u0999\u09cd\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u09b8\u09cb\u09a5\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u09a4\u09c7\u09b2\u09c1\u0997\u09c1 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"\u09b2\u09c1\u0987\u09b8\u09bf\u09af\u09bc\u09be\u09a8\u09be \u0995\u09cd\u09b0\u09c7\u0993\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u09b2\u09cb\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u09ae\u09be\u0995\u09be\u09ae\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u09b8\u09b0\u09b2\u09bf\u0995\u09c3\u09a4 \u099a\u09c8\u09a8\u09bf\u0995 \u0986\u09b0\u09cd\u09a5\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u09b9\u09bf\u09b2\u09bf\u0997\u09cd\u09af\u09be\u09af\u09bc\u09a8\u09cb\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u09aa\u09cd\u09b0\u09b8\u09be\u09b0\u09bf\u09a4 \u0986\u09b0\u09ac\u09bf -\u09ad\u09be\u09b0\u09a4\u09c0\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u09a8\u09c1\u09af\u09bc\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u09a1\u09be\u0995\u09cb\u099f\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u09aa\u09c2\u09b0\u09cd\u09a3 \u099a\u0993\u09a1\u09bc\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u09b9\u09bf\u099f\u09cd\u099f\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u09a6\u09be\u09b0\u09cd\u0997\u0993\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u09a4\u09be\u0987\u09a4\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u09ae\u09be\u09af\u09bc\u09be\u09a8 \u09b9\u09be\u09af\u09bc\u09be\u09b0\u09cb\u0997\u09cd\u09b2\u09bf\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0 \u09b2\u09c1\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"\u0987\u09ae\u09cb\u099c\u09bf \u09ac\u09be\u099b\u09be\u0987 \u0995\u09cd\u09b0\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u0995\u09cb\u09aa\u09cd\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09a8\u09c7\u0993\u09af\u09bc\u09be\u09b0\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u0989\u09a1\u09ae\u09c1\u09b0\u09cd\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u0996\u09c7\u09ae\u09c7\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995 \u09ac\u09b0\u09cd\u09b7\u09aa\u099e\u09cd\u099c\u09c0 (\u09b8\u09cc\u09a6\u09bf \u0986\u09b0\u09ac, \u09a6\u09c3\u09b6\u09cd\u09af\u09ae\u09be\u09a8)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u09b2\u09bf\u09ae\u09cd\u09ac\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u09b8\u09cd\u09af\u09be\u09a8\u09cd\u09a1\u09be\u0993\u09af\u09bc\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u09b0\u09cb\u09ae\u09be\u09a8 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u09b6\u09be\u0996\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"\u09b8\u09be\u09b0\u09a6\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u09b8\u09be\u09ae\u09be\u09b0\u09bf\u099f\u09be\u09a8 \u0986\u09b0\u09be\u09ae\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u09b8\u09be\u09ae\u09ac\u09c1\u09b0\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u09b8\u09be\u09b8\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u09b8\u09be\u0981\u0993\u09a4\u09be\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u09a4\u09bf\u09ab\u09bf\u09a8\u09be\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u099c\u09c1\u09a6\u09c7\u0993 \u09ab\u09be\u09b0\u09cd\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"\u09b8\u09be\u0982\u0996\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"\u09b8\u09cd\u09a5\u09be\u09a8\u09c0\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u09a8\u09cd\u09af\u09be\u0997\u09be\u09ae\u09cd\u09ac\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u0997\u09c1\u09b0\u09c1\u09ae\u09c1\u0996\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u09b2\u09c1\u09ac\u09be-\u09b2\u09c1\u09b2\u09c1\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"\u09a4\u09bf\u09b0\u09b9\u09c1\u09a4\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u09aa\u09c2\u09b0\u09cd\u09a3\u09aa\u09cd\u09b0\u09b8\u09cd\u09a5 \u09aa\u09b0\u09cd\u09af\u09a8\u09cd\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u09b8\u09be\u0999\u09cd\u0997\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u09b2\u09c1\u0987\u09b8\u09c7\u09a8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u09a8\u09cd\u09af\u09be\u09af\u09bc\u09be\u0999\u09cd\u0995\u09cb\u09b2\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u09a8\u09cd\u09af\u09be\u09af\u09bc\u09be\u09ae\u0993\u09af\u09bc\u09c7\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u09b2\u09c1\u09a8\u09cd\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u09a8\u09cd\u09af\u09cb\u09b0\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u09b2\u09c1\u09af\u09bc\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u09ab\u09bf\u09b2\u09bf\u09aa\u09bf\u09a8\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u09b9\u09cd\u200c\u09ae\u09cb\u0999"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u09a1\u09c7\u09b2\u09be\u0993\u09af\u09bc\u09c7\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u09ae\u09bf\u099c\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u09ac\u09c7\u09b2\u09c1\u099a\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u09b8\u09cd\u09b2\u09cd\u09af\u09be\u09ad"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u09ac\u09be\u09b2\u09bf\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b0\u09c7\u0982 \u09b8\u09bf\u099f\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u09b2\u09c1\u0987\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u09ac\u09be\u09b8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u099c\u09c1\u09a6\u09c7\u0993 \u0986\u09b0\u09ac\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0987\u0989\u09b0\u09cb\u09aa\u09c0\u09af\u09bc \u09b8\u09cd\u09aa\u09cd\u09af\u09be\u09a8\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u098f\u09a8\u099c\u09bf\u09ae\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u09b8\u09cd\u0995\u099f\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u09b8\u09bf\u09b8\u09bf\u09b2\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0986\u09ab\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0986\u09ac\u0996\u09be\u099c\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u0986\u09ac\u09c7\u09b8\u09cd\u09a4\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0986\u09ab\u09cd\u09b0\u09bf\u0995\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u0986\u0995\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"\u099a\u09be\u0995\u09ae\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0986\u09ae\u09b9\u09be\u09b0\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u0986\u09b0\u09cd\u0997\u09cb\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0986\u09b0\u09ac\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0986\u09b0\u09ac\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf \u0985\u0995\u09cd\u09b7\u09b0\u09ae\u09be\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0985\u09b8\u09ae\u09c0\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u09b2\u09bf\u09a8\u09bf\u09af\u09bc\u09be\u09b0 \u098f"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u0986\u09ad\u09c7\u09b0\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u09b2\u09bf\u09a8\u09bf\u09af\u09bc\u09be\u09b0 \u09ac\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u0995\u09c1\u09b0\u09cd\u09a6\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u0986\u09af\u09bc\u09ae\u09be\u09b0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0986\u099c\u09be\u09b0\u09ac\u09be\u0987\u099c\u09be\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u09ac\u09be\u09b6\u0995\u09bf\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u09b0\u09be\u09a1\u09bf\u0995\u09c7\u09b2 \u09b8\u09cd\u099f\u09cd\u09b0\u09cb\u0995 \u09ac\u09be\u099b\u09be\u0987 \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u09ac\u09c7\u09b2\u09be\u09b0\u09c1\u09b6\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u09ac\u09c1\u09b2\u0997\u09c7\u09b0\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u09ac\u09bf\u09b8\u09b2\u09be\u09ae\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"\u099c\u09be\u09ad\u09be\u09a8\u09bf\u099c \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u09ac\u09be\u09ae\u09ac\u09be\u09b0\u09be"_s)
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
			$of("dgr"_s),
			$of(u"\u09a6\u09cb\u0997\u09cd\u09b0\u09c0\u09ac"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u09ac\u09cd\u09b0\u09c7\u099f\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u09ac\u09b8\u09a8\u09c0\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u09ae\u09be\u09af\u09bc\u09be\u09a8\u09ae\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u09b2\u09be\u0993 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u09b8\u09c7\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\u098f\u09a8\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u09b8\u09c7\u09b2\u09cd\u0995\u09c1\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u0995\u09be\u09a4\u09be\u09b2\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u0995\u09cb\u09af\u09bc\u09b0\u09be\u09ac\u09c7\u09a8\u09cb \u09b8\u09c7\u09a8\u09cd\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u099a\u09c7\u099a\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u099a\u09be\u09ae\u09cb\u09b0\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u0995\u09b0\u09cd\u09b8\u09bf\u0995\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u0995\u09cd\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u099a\u09c7\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u099a\u09be\u09b0\u09cd\u099a \u09b8\u09cd\u09b2\u09be\u09ad\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u099a\u09c1\u09ac\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u0993\u09af\u09bc\u09c7\u09b2\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u0987\u09a5\u09bf\u09af\u09bc\u09cb\u09aa\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u0989\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u09a1\u09c7\u09a8\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u0987\u0989\u09b0\u09cb\u09aa\u09c7\u09b0 \u09aa\u09b0\u09cd\u09a4\u09c1\u0997\u09c0\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u099c\u09be\u09b0\u09cd\u09ae\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u09ae\u09be\u09a8\u0995 \u09ae\u09c1\u09a6\u09cd\u09b0\u09be \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u09ac\u09c7\u099c\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u09a1\u09bf\u0982\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u09ac\u09c1\u0997\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u09ac\u09c7\u09ae\u09cd\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u0986\u0987\u09b0\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\u09ae\u0999\u09cd\u0997\u09cb\u09b2\u09c0\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u09a6\u09bf\u09ac\u09c7\u09b9\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u09b2\u09cd\u09af\u09be\u099f\u09bf\u09a8 \u0986\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09b8\u09cd\u09aa\u09cd\u09af\u09be\u09a8\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u099c\u09cb\u0999\u09cd\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u09ac\u09c7\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u099a\u09c0\u09a8\u09be \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u099c\u09be\u09b0\u09cd\u09ae\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u0997\u09cd\u09b0\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u0987\u0989\u09af\u09bc\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u09b8\u09be\u09a7\u09be\u09b0\u09a3 \u09b2\u09be\u0987\u09a8 \u09ac\u09bf\u09ad\u09be\u099c\u0995 \u09b6\u09c8\u09b2\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u09ae\u09b2\u09a6\u09be\u09ad\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0987\u0982\u09b0\u09c7\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u098f\u09b8\u09cd\u09aa\u09c7\u09b0\u09be\u09a8\u09cd\u09a4\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u09aa\u09cd\u09b0\u09a5\u09be\u0997\u09a4 \u099a\u09c0\u09a8\u09be \u09b8\u099c\u09cd\u099c\u09be\u0995\u09cd\u09b0\u09ae - \u09ac\u09bf\u0997\u09eb"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u09b8\u09cd\u09aa\u09cd\u09af\u09be\u09a8\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u098f\u09b8\u09cd\u09a4\u09cb\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u09b9\u09cd\u09af\u09be\u09a8\u09ac\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u09ac\u09be\u09b8\u09cd\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u09ac\u09c1\u09b9\u09bf\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u09b9\u09be\u0999\u09cd\u0997\u09c1\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u09b8\u09ae\u09c7\u09b0\u09bf\u099f\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u09a4\u09be\u099a\u09c7\u09b2\u09b9\u09bf\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u0989\u099a\u09cd\u099a \u09b8\u09cb\u09b0\u09cd\u09ac\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u09b9\u09cd\u09af\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u09b6\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\u09b9\u09cd\u09af\u09be\u09a8\u09c1\u09a8\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u09ab\u09be\u09b0\u09cd\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u09b8\u09b0\u09b2\u09c0\u0995\u09c3\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u0993\u09af\u09bc\u09c7\u09b8\u09cd\u099f\u09be\u09b0\u09cd\u09a8 \u09a1\u09bf\u099c\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0990\u09a4\u09bf\u09b9\u09cd\u09af\u09ac\u09be\u09b9\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u09ab\u09c1\u09b2\u09be\u09b9\u09cd"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"Xiang \u099a\u09c0\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u09ab\u09bf\u09a8\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u09ab\u09bf\u099c\u09bf\u0986\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u09ab\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae \u09ac\u09be\u09b2\u09cb\u099a\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09a8\u09cd\u099f\u09cb\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u09ab\u09be\u09b0\u09cb\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"\u0987\u0989\u098f\u09b8 \u09ac\u09bf\u099c\u09bf\u098f\u09a8 \u09ac\u09b0\u09cd\u09a3\u09be\u09a8\u09cd\u09a4\u09b0\u09a3"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u0989\u09ae\u09cd\u09ac\u09c1\u09a8\u09cd\u09a6\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u09ab\u09b0\u09be\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u09b8\u09bf\u09a1\u09be\u09ae\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae \u09ab\u09cd\u09b0\u09bf\u09b8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0986\u0987\u09b0\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u09b8\u09cd\u0995\u099f\u09b8-\u0997\u09cd\u09af\u09c7\u09b2\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u0997\u09cd\u09af\u09be\u09b2\u09bf\u09b6\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0997\u09c1\u09af\u09bc\u09be\u09b0\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u09ad\u09cb\u099c\u09aa\u09c1\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u0985\u099c\u09be\u09a8\u09be \u09ad\u09be\u09b7\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u0987\u09a5\u09bf\u0993\u09aa\u09bf\u0993 \u0986\u09ae\u09c7\u09a4\u09c7 \u0986\u09b2\u09c7\u09ae \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995 \u09ac\u09b0\u09cd\u09b7\u09aa\u099e\u09cd\u099c\u09c0 (\u099b\u0995\u09ac\u09a6\u09cd\u09a7, \u099c\u09cd\u09af\u09cb\u09a4\u09bf\u09b0\u09cd\u09ac\u09bf\u09a6\u09cd\u09af\u09c0\u09af\u09bc \u09af\u09c1\u0997)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u0999\u09cd\u0995\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"\u0993\u09b8\u09ae\u09be\u09a8\u09bf\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u09b9\u09be\u0989\u09b8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u09b9\u09bf\u09a8\u09cd\u09a6\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u09b9\u09c1\u09aa\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u09ac\u09bf\u0995\u09cb\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u09ac\u09bf\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u09b9\u09bf\u09b0\u09bf \u09ae\u09cb\u09a4\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0995\u09cd\u09b0\u09cb\u09af\u09bc\u09c7\u09b6\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u09b9\u09be\u0987\u09a4\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09cd\u09b0\u09c7\u0993\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u09b9\u09be\u0999\u09cd\u0997\u09c7\u09b0\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0986\u09b0\u09cd\u09ae\u09c7\u09a8\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u09b9\u09c7\u09b0\u09c7\u09b0\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"\u0995\u09be\u099c\u09c1\u09a8 \u09ab\u09b0\u09be\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u0987\u09a8\u09cd\u099f\u09be\u09b0\u09b2\u09bf\u0999\u09cd\u0997\u09c1\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u099c\u09cd\u09af\u09be\u09ae\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0987\u09a8\u09cd\u09a6\u09cb\u09a8\u09c7\u09b6\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u09a4\u09bf\u09ac\u09cd\u09ac\u09a4\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u0987\u09a8\u09cd\u099f\u09be\u09b0\u09b2\u09bf\u0999\u09cd\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u0987\u0997\u09cd\u200c\u09ac\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u09b8\u09bf\u099a\u09c1\u09af\u09bc\u09be\u09a8 \u09af\u09bc\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u09ab\u09b0\u09be\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u0987\u09a8\u09c1\u09aa\u09bf\u09af\u09bc\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09ab\u09b0\u09be\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u0987\u09a1\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u09aa\u09c2\u09b0\u09cd\u09ac \u09ab\u09cd\u09b0\u09bf\u09b8\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u09ab\u09cd\u09b0\u09bf\u09b8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0986\u0987\u09b8\u09b2\u09cd\u09af\u09be\u09a8\u09cd\u09a1\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0987\u09a4\u09be\u09b2\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0987\u09a8\u09c1\u0995\u09cd\u099f\u09bf\u099f\u09c1\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u09b8\u09be\u09b0\u09be\u09a4\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u09a1\u09cb\u0997\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"\u09b2\u09c7\u09aa\u099a\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u09b8\u09be\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u09b8\u09be\u09ad\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u09ae\u09be\u09a6\u09c1\u09b0\u09c7\u09b8\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u09b2\u09c1\u09b2\u09c7 \u09b8\u09be\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u09ae\u09be\u0997\u09be\u09b9\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u09ae\u09c8\u09a5\u09bf\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u0987\u09a8\u09be\u09b0\u09bf \u09b8\u09be\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u09b8\u09bf\u0995\u09b8\u09bf\u0995\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u0995\u09be\u09b8\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"Wu \u099a\u09c0\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u09b8\u09cd\u0995\u09cb\u09b2\u09cd\u099f \u09b8\u09be\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u09a8\u09cd\u09a1\u09bf\u0999\u09cd\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u0995\u0999\u09cd\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\u0997\u09cb\u09a5\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u0995\u09bf\u0995\u09c1\u09af\u09bc\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u09ae\u09be\u09b8\u09be\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u0995\u09cb\u09af\u09bc\u09be\u09a8\u09bf\u09af\u09bc\u09be\u09ae\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u0995\u09be\u099c\u09be\u0996"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09b2\u09be\u09b2\u09cd\u09b2\u09bf\u09b8\u09c1\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u0996\u09ae\u09c7\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u0995\u09a8\u09cd\u09a8\u09a1\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u0995\u09be\u09a8\u09c1\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u0995\u09be\u09b6\u09cd\u09ae\u09c0\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u0995\u09bf\u09b0\u09cd\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u09b2\u09c7\u09aa\u09cd\u099a\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u0986\u09ad\u09c7\u09b8\u09a4\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u0995\u09c1\u09b0\u09cd\u09a6\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u0995\u09cb\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u0995\u09b0\u09cd\u09a3\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u0995\u09bf\u09b0\u09cd\u0997\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u09b8\u09cb\u09a8\u09bf\u0999\u09cd\u0995\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u09b2\u09be\u09a4\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u09b2\u09c1\u0995\u09cd\u09b8\u09c7\u09ae\u09ac\u09be\u09b0\u09cd\u0997\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u09ae\u09be\u09b2\u09af\u09bc\u09be\u09b2\u09ae \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u0997\u09be\u09a8\u09cd\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u09b0\u09cb\u0999\u09cd\u0997\u09cb\u09b0\u09cb\u0999\u09cd\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u09b2\u09bf\u09ae\u09cd\u09ac\u09c1\u09b0\u09cd\u0997\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u09b2\u09bf\u0999\u09cd\u0997\u09be\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u09ab\u09cd\u09b0\u09bf\u0989\u09b2\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u0987\u09ae\u09cd\u09aa\u09c7\u09b0\u09bf\u09af\u09bc\u09be\u09b2 \u09aa\u09b0\u09bf\u09ae\u09be\u09aa \u09b8\u09bf\u09b8\u09cd\u099f\u09c7\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"\u099f\u09be\u0987 \u09a5\u09be\u09ae \u09b9\u09cb\u09b0\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u09b2\u09bf\u09a5\u09c1\u09af\u09bc\u09c7\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u09b2\u09c1\u09ac\u09be-\u0995\u09be\u099f\u09be\u0999\u09cd\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u09b2\u09be\u09a4\u09cd\u200c\u09ad\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u09b8\u09cb\u0997\u09a1\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u09ae\u09be\u09b2\u09be\u0997\u09be\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u09ae\u09be\u09b0\u09cd\u09b6\u09be\u09b2\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u09a1\u09bf\u09ab\u09b2\u09cd\u099f \u0987\u0989\u09a8\u09bf\u0995\u09cb\u09a1 \u09ac\u09be\u099b\u09be\u0987 \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u09ae\u09be\u0993\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u09b8\u09bf\u09a1\u09cb\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u09ae\u0999\u09cd\u0997\u09cb\u09b2\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u09ae\u09be\u09b0\u09be\u09a0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u09ae\u09be\u09b2\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u09ae\u09b2\u09cd\u099f\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u09ac\u09b0\u09cd\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u09b8\u09cc\u09b0\u09be\u09b7\u09cd\u099f\u09cd\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u0986\u09b0\u09cd\u09ae\u09c7\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u09ae\u09cb\u0995\u09b6\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u09a8\u09bf\u09ae\u09cd\u09a8\u09a4\u09b0 \u09b8\u09cb\u09b0\u09cd\u09ac\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u0986\u09b0\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u09b8\u09be\u09a7\u09be\u09b0\u09a3-\u0989\u09a6\u09cd\u09a6\u09c7\u09b6\u09cd\u09af\u09c7 \u0985\u09a8\u09c1\u09b8\u09a8\u09cd\u09a7\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u09a8\u09b0\u0993\u09af\u09bc\u09c7\u099c\u09bf\u09af\u09bc\u09be\u09a8 \u09ac\u09cb\u0995\u09ae\u09be\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0 \u098f\u09a8\u09cd\u09a6\u09c7\u09ac\u09bf\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u09a8\u09c7\u09aa\u09be\u09b2\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u098f\u09a8\u09cd\u09a6\u09cb\u0999\u09cd\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u09a3\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u0993\u09b2\u09a8\u09cd\u09a6\u09be\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u09a8\u09b0\u0993\u09af\u09bc\u09c7\u099c\u09bf\u09af\u09bc\u09be\u09a8 \u09a8\u09bf\u09a8\u09b0\u09cd\u09b8\u09cd\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u09a8\u09b0\u0993\u09af\u09bc\u09c7\u099c\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a3 \u098f\u09a8\u09a1\u09c7\u09ac\u09c7\u09b2\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"\u09ae\u09cb\u09a6\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u09a8\u09be\u09ad\u09be\u099c\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u0995\u09be\u09b0\u09be-\u0995\u09be\u09b2\u09cd\u09aa\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u09a8\u09be\u09af\u09bc\u09be\u099e\u09cd\u099c\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u0995\u09be\u099a\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u0995\u09be\u09ac\u09be\u0987\u09b2\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u0985\u0995\u09cd\u09b8\u09bf\u099f\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u0985\u099c\u09cd\u099c\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u0995\u09be\u09ae\u09cd\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u09ae\u09c7\u09a8\u09cd\u09a1\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u0993\u099c\u09bf\u09ac\u0993\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u09ae\u09c7\u09b0\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u0986\u09b0\u09cd\u09ae\u09c7\u09a8\u09c0\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u0985\u09b0\u09cb\u09ae\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u0995\u09be\u0989\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u0993\u09b8\u09c7\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u0995\u09be\u09ac\u09be\u09b0\u09cd\u09a1\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u09ae\u09b0\u09bf\u09b8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u09b8\u09cd\u09b0\u09be\u09a8\u09be\u09a8 \u099f\u09cb\u0999\u09cd\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u09aa\u09be\u099e\u09cd\u099c\u09be\u09ac\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u09a6\u09c1\u09af\u09bc\u09be\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u09b8\u09c7\u09b0\u09c7\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u09aa\u09be\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u09aa\u09cb\u09b2\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u09a1\u09be\u099a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"\u09b8\u09cc\u09b0\u09be\u09b7\u09cd\u099f\u09cd\u09b0\u09c7\u09b0 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u09a6\u09be\u0999\u09cd\u0997\u09c0 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u09aa\u09c1\u09b6\u09a4\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u09aa\u09b0\u09cd\u09a4\u09c1\u0997\u09c0\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u0986\u0987\u09b0\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u09ac\u09be\u099b\u09be\u0987 \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u099c\u09bf\u09b2\u09c7\u09b0 \u09aa\u09b0\u09cd\u09a4\u09c1\u0997\u09c0\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u099f\u09be\u0987\u09af\u09bc\u09be\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u09ae\u09be\u0996\u09c1\u09af\u09bc\u09be-\u09ae\u09c7\u09a4\u09cd\u09a4\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u09ae\u09c1\u09a6\u09cd\u09b0\u09cd\u09af\u09be \u09ab\u09b0\u09ae\u09cd\u09af\u09be\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"\u098f\u09a8\u2019\u0995\u09cb \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u09ae\u09c7\u099f\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"\u09e8\u09ea \u0998\u09a3\u09cd\u099f\u09be\u09b0 \u09b9\u09bf\u09b8\u09be\u09ac\u09c7 (\u09e6\u2013\u09e8\u09e9)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"\u09e8\u09ea \u0998\u09a3\u09cd\u099f\u09be\u09b0 \u09b9\u09bf\u09b8\u09be\u09ac\u09c7 (\u09e7\u2013\u09e8\u09ea)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\u09b8\u09be\u09b9\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u09ae\u09be\u09af\u09bc\u09be\u09a8\u09ae\u09be\u09b0 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u0995\u09c7\u099a\u09c1\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u099c\u09be\u09aa\u09cb\u099f\u09c7\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u09ac\u09cb\u09a1\u09bc\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u09b2\u09be\u09a8\u09cd\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u09ae\u09be\u0995\u09cb\u09a8\u09cd\u09a6\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u0987\u09a5\u09bf\u0993\u09aa\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"\u09e7\u09e8 \u0998\u09a3\u09cd\u099f\u09be\u09b0 \u09b9\u09bf\u09b8\u09be\u09ac\u09c7 (\u09e7\u2013\u09e7\u09e8)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"\u09e7\u09e8 \u0998\u09a3\u09cd\u099f\u09be\u09b0 \u09b9\u09bf\u09b8\u09be\u09ac\u09c7 (\u09e6\u2013\u09e7\u09e7)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u09b0\u09cb\u09ae\u09be\u09a8\u09cd\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u09b0\u09c1\u09a8\u09cd\u09a6\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u09ae\u09c1\u09a6\u09cd\u09b0\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u09b0\u09cb\u09ae\u09be\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u0993\u09a1\u09bc\u09bf\u09af\u09bc\u09be \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u099a\u09c8\u09a8\u09bf\u0995 \u09a6\u09b6\u09ae\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u09b0\u09c1\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u0995\u09bf\u09a8\u09af\u09bc\u09be\u09b0\u09cb\u09af\u09bc\u09be\u09a8\u09cd\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\u099a\u09bf\u09a4\u09cd\u09b0 \u09ad\u09be\u09b7\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u0995\u09be\u09ac\u09c1\u09ad\u09be\u09b0\u09a6\u09bf\u09af\u09bc\u09be\u09a8\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u09ae\u09bf\u0995\u09ae\u09cd\u09af\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u09b8\u09c1\u0995\u09c1\u09ae\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0985\u09b8\u09cd\u099f\u09cd\u09b0\u09c7\u09b2\u09c0\u09af\u09bc \u0987\u0982\u09b0\u09c7\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u09b8\u0982\u09b8\u09cd\u0995\u09c3\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u09b8\u09be\u09b0\u09cd\u09a1\u09bf\u09a8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u09b8\u09c1\u09b8\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u09b8\u09bf\u09a8\u09cd\u09a7\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u09b8\u09be\u09ae\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u09ae\u09bf\u09a8\u09be\u0982\u0995\u09be\u09ac\u09be\u0989"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u09b8\u09be\u0999\u09cd\u0997\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u09b8\u09be\u09b0\u09cd\u09ac\u09cb-\u0995\u09cd\u09b0\u09cb\u09af\u09bc\u09c7\u09b6\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u09b8\u09bf\u0982\u09b9\u09b2\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u09b8\u09c1\u09ae\u09c7\u09b0\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u09b8\u09cd\u09b2\u09cb\u09ad\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u09b8\u09cd\u09b2\u09cb\u09ad\u09c7\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u09b8\u09be\u09ae\u09cb\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u09b6\u09cb\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u09b8\u09cb\u09ae\u09be\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0986\u09b0\u09ac\u09bf-\u09ad\u09be\u09b0\u09a4\u09c0\u09af\u09bc \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0986\u09b2\u09ac\u09c7\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u09b8\u09be\u09b0\u09cd\u09ac\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u09b8\u09cb\u09af\u09bc\u09be\u09a4\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u09b9\u09bf\u09b8\u09be\u09ac\u09c7\u09b0 \u09ae\u09c1\u09a6\u09cd\u09b0\u09be \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u09a6\u0995\u09cd\u09b7\u09bf\u09a8 \u09b8\u09cb\u09a5\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u09b8\u09c1\u09a6\u09be\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u09b8\u09c1\u0987\u09a1\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u09b8\u09cb\u09af\u09bc\u09be\u09b9\u09bf\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u0990\u09a4\u09bf\u09b9\u09cd\u09af\u09ac\u09be\u09b9\u09c0 \u099a\u09c8\u09a8\u09bf\u0995 \u0986\u09b0\u09cd\u09a5\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u0987\u09ac\u09bf\u09ac\u09bf\u0993"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u0987\u09ac\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u098f\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u09ac\u09c1\u09b0\u09bf\u09af\u09bc\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u09ae\u09a7\u09cd\u09af \u098f\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u09a4\u09c7\u09b2\u09c1\u0997\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae \u098f\u09b6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u09a4\u09be\u099c\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u09a4\u09bf\u0997\u09b0\u09bf\u09a8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u09ac\u09c1\u0997\u09bf\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u0995\u09cb\u09b0\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0995\u09be\u09a8\u09be\u09a1\u09c0\u09af\u09bc \u0987\u0982\u09b0\u09c7\u099c\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u09a4\u09c1\u09b0\u09cd\u0995\u09ae\u09c7\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u09a4\u09be\u0997\u09be\u09b2\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u09b8\u09cb\u09af\u09bc\u09be\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u099f\u09cb\u0999\u09cd\u0997\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u099c\u09cb\u09b2\u09be-\u09ab\u09a8\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u09a4\u09c1\u09b0\u09cd\u0995\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u09b8\u0999\u09cd\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u0995\u09ae\u09cb\u09b0\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u09a4\u09be\u09a4\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u09a1\u09bf\u0989\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u099f\u09cb\u09af\u09bc\u09be\u0987"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u09a4\u09be\u09b9\u09bf\u09a4\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u0987\u0989\u09b0\u09cb\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u09aa\u09c2\u09b0\u09cd\u09ac \u0987\u0989\u09b0\u09cb\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"\u0997\u09be\u09a3\u09bf\u09a4\u09bf\u0995 \u09b8\u09cd\u09af\u09be\u09a8\u09cd\u09b8-\u09b6\u09c7\u09b0\u09bf\u09ab \u09ac\u09cb\u09b2\u09cd\u09a1 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u0989\u09a4\u09cd\u09a4\u09b0 \u0987\u0989\u09b0\u09cb\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u09a6\u09be\u099c\u09be\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae \u0987\u0989\u09b0\u09cb\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0989\u0987\u0998\u09c1\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u0987\u09a4\u09be\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u09b8\u09be\u09a7\u09be\u09b0\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0987\u0989\u0995\u09cd\u09b0\u09c7\u09a8\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\u0995\u09aa\u099f\u09bf\u0995 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0989\u09b0\u09cd\u09a6\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u0995\u09be\u09b2\u09cd\u09ae\u0987\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u099c\u09c7\u09a8\u09be\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0989\u099c\u09ac\u09c7\u0995\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u0996\u09be\u09b6\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u09b2\u09cb \u09b8\u09cd\u09af\u09be\u0995\u09cd\u09b8\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u09b8\u09bf\u09b2\u09c7\u099f\u09bf \u09a8\u09be\u0997\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u09ad\u09c7\u09a8\u09cd\u09a1\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u09ae\u09bf\u0999\u09cd\u0997\u09c1\u0993 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u09ad\u09bf\u09af\u09bc\u09c7\u09a4\u09a8\u09be\u09ae\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u0996\u09cb\u099f\u09be\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u0995\u09cb\u09af\u09bc\u09b0\u09be \u099a\u09c0\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u09b8\u09ae\u09af\u09bc\u09c7\u09b0 \u09b9\u09bf\u09b8\u09be\u09ac (\u09e7\u09e8 \u09ac\u09be \u09e8\u09ea)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u09ad\u09cb\u09b2\u09be\u09aa\u09c1\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09b8\u09bf\u09b0\u09bf\u0993"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"\u0997\u09be\u09a3\u09bf\u09a4\u09bf\u0995 \u09b8\u09cd\u09af\u09be\u09a8\u09cd\u09b8-\u09b6\u09c7\u09b0\u09bf\u09ab \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u0993\u09b8\u09ae\u09be\u09a8\u09bf\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u0995\u09bf\u2018\u099a\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"\u09ae\u09be\u09b8\u09be\u09b0\u09be\u09ae \u0997\u09a8\u09cd\u09a1\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u0997\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u0993\u09af\u09bc\u09be\u09b2\u09c1\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u0997\u09be\u0997\u09be\u0989\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u09b2\u09be\u0987\u09a1\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u09b8\u09c1\u09ae\u09c7\u09b0-\u0986\u0995\u09cd\u0995\u09be\u09a6\u09c0\u09af\u09bc \u0995\u09c0\u09b2\u0995\u09b0\u09c2\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u0989\u0993\u09b2\u09cb\u09ab"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u0986\u09a6\u09b0\u09cd\u09b6 \u09ae\u09b0\u0995\u09cd\u0995\u09cb\u09a8 \u09a4\u09be\u09ae\u09be\u099c\u09bf\u0997\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0986\u09a7\u09c1\u09a8\u09bf\u0995 \u0986\u09a6\u09b0\u09cd\u09b6 \u0986\u09b0\u09ac\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u09b8\u0982\u09af\u09c1\u0995\u09cd\u09a4 \u0995\u09be\u09a8\u09be\u09a1\u09bf\u09af\u09bc\u09be\u09a8 \u0985\u09cd\u09af\u09be\u09ac\u09cd\u09b0\u09cb\u099c\u09bf\u09a8\u09bf\u09af\u09bc\u09be\u09a8 \u09b8\u09bf\u09b2\u09c7\u09ac\u09bf\u0995\u09cd\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u0997\u09be\u09af\u09bc\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u09ae\u09cb\u0999\u09cd\u0997\u09cb\u09b2\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u09ae\u09be\u099e\u09cd\u099a\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u09ab\u09cd\u09b0\u09be\u0995\u09cd\u099f\u09c1\u09b0 \u09b2\u09cd\u09af\u09be\u099f\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u09ac\u09be\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u09ae\u09a3\u09bf\u09aa\u09c1\u09b0\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u09b2\u09cd\u09af\u09be\u099f\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u0997\u09cd\u09af\u09be\u09b2\u09bf\u0995 \u09b2\u09cd\u09af\u09be\u099f\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u09b8\u09b0\u09b2\u09bf\u0995\u09c3\u09a4 \u099a\u09c8\u09a8\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u0990\u09a4\u09bf\u09b9\u09cd\u09af\u09be\u09ac\u09be\u09b9\u09c0 \u099a\u09c8\u09a8\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u099c\u09cb\u09b8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u09b0\u09cb\u09ae\u09be\u09a8 \u099b\u09cb\u099f\u09b9\u09be\u09a4\u09c7\u09b0 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u09ac\u09cd\u09b2\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u09b2\u09be\u0987\u09b8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u0993\u09b8\u09c7\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u09ae\u09c1\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u09ae\u09cb\u09b9\u09be\u0993\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u0995\u09be\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0987\u09af\u09bc\u09c7\u09a6\u09cd\u09a6\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u09ae\u09b8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u09a6\u09c7\u09b8\u09c7\u09b0\u09be\u09a4"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u0987\u0993\u09b0\u09c1\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"\u0990\u09a4\u09bf\u09b9\u09cd\u09af\u0997\u09a4 \u09b8\u0982\u0996\u09cd\u09af\u09be\u09b8\u09c2\u099a\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u09ae\u09cd\u09af\u09be\u0995\u09cd\u09b8\u09bf\u0995\u09be\u09a8 \u09b8\u09cd\u09aa\u09cd\u09af\u09be\u09a8\u09bf\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u09aa\u09b6\u09cd\u099a\u09bf\u09ae\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u09b8\u09bf\u09b0\u09bf\u09af\u09bc\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u0985\u099f\u09cb\u09ae\u09be\u09a8 \u09a4\u09c1\u09b0\u09cd\u0995\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u098f\u09b8\u09cd\u099f\u09cd\u09b0\u09c7\u0999\u09cd\u0997\u09c7\u09b2\u09cb \u09b8\u09bf\u09b0\u09bf\u09af\u09bc\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u099d\u09c1\u09cd\u09af\u09bc\u09be\u0999"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09b0\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u0995\u09be\u09b2\u09c7\u09a8\u099c\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u099a\u09c0\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u09ac\u09cb\u09aa\u09cb\u09ae\u09cb\u09ab\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u09aa\u09cd\u09b0\u09be\u099a\u09c0\u09a8 \u09aa\u09be\u09b0\u09cd\u09ae\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u09b2\u09be\u0987\u09a8 \u09ac\u09bf\u09ad\u09be\u099c\u0995 \u09b6\u09c8\u09b2\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u099c\u09c1\u09b2\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u09ab\u09cb\u09a8\u09ac\u09c1\u0995 \u09b8\u099c\u09cd\u099c\u09be\u0995\u09cd\u09b0\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u0995\u09bf\u09ae\u09cd\u09ac\u09c1\u09a8\u09cd\u09a6\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf \u0986\u09b0\u09cd\u09a5\u09bf\u0995 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u099a\u09cd\u09af\u09be\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u0997\u09c0\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u09aa\u09c2\u09b0\u09cd\u09ac\u09be\u099e\u09cd\u099a\u09b2\u09c0\u09af\u09bc \u09b8\u09bf\u09b0\u09bf\u09af\u09bc\u09be\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"\u09ae\u09be\u09af\u09bc\u09be\u09a8\u09ae\u09be\u09b0 \u09b6\u09be\u09a8 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"\u0993\u09b2 \u099a\u09bf\u0995\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u09b0\u09bf\u09ab\u09b0\u09cd\u09ae\u09a1 \u09ac\u09be\u099b\u09be\u0987 \u09ac\u09bf\u09a8\u09cd\u09af\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\u099f\u09be\u0997\u09be\u09b2\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u09ae\u09bf\u09b6\u09b0\u09c0\u09af\u09bc \u09a1\u09c7\u09ae\u09cb\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u09ae\u09bf\u09b6\u09b0\u09c0\u09af\u09bc \u09b9\u09be\u09af\u09bc\u09b0\u09c7\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u098f\u09ae\u09cd\u09ac\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u09ae\u09bf\u09b6\u09b0\u09c0\u09af\u09bc \u09b9\u09be\u09af\u09bc\u09be\u09b0\u09cb\u0997\u09cd\u09b2\u09bf\u09aa"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u099c\u09b0\u09cd\u099c\u09bf\u09af\u09bc \u0996\u09c1\u09ce\u09b8\u09c1\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u09b8\u09b0\u09b2\u09c0\u0995\u09c3\u09a4 \u099a\u09c0\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u0995\u09ae\u09bf-\u09aa\u09be\u09b0\u09ae\u09bf\u0986\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u09aa\u09c1\u09b0\u09cb\u09a8\u09cb \u09b9\u09be\u0999\u09cd\u0997\u09c7\u09b0\u09c0\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u0995\u09cb\u0999\u09cd\u0995\u09be\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u0995\u09cb\u09b8\u09cd\u09b0\u09be\u0987\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"\u09b2\u09bf\u09ae\u09cd\u09ac\u09c1 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0990\u09a4\u09bf\u09b9\u09cd\u09af\u09ac\u09be\u09b9\u09bf \u099a\u09c0\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"\u09b8\u09be\u09a8\u09cd\u09a6\u09be\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u0995\u09cd\u200c\u09aa\u09c7\u09b2\u09cd\u09b2\u09c7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u0996\u09c7\u09ae\u09c7\u09b0 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u0987\u09b2\u09cb\u0995\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\u09b8\u09be\u0987\u09aa\u09cd\u09b0\u09cb\u09af\u09bc\u09c7\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u09ae\u09c1\u09a6\u09be\u0999\u09cd\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u0997\u09c1\u09b0\u09c1\u09ae\u09c1\u0996\u09bf \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u098f\u0995\u09be\u09a7\u09bf\u0995 \u09ad\u09be\u09b7\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09a1\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u09aa\u09b0\u09bf\u09ae\u09be\u09aa \u09b8\u09bf\u09b8\u09cd\u099f\u09c7\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u0995\u09cd\u09b0\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u0997\u09cd\u09b2\u09be\u0997\u09cb\u09b2\u09bf\u099f\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u0997\u09bf\u09b2\u09ac\u09be\u09b0\u09cd\u099f\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u099a\u09c7\u09b0\u09cb\u0995\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u0995\u09cd\u09af\u09be\u09b0\u09bf\u09ac"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u09a4\u09be\u09ae\u09bf\u09b2 \u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u0995\u09be\u09b0\u099a\u09c7-\u09ac\u09be\u09b2\u09cd\u0995\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u0987\u0999\u09cd\u0997\u09c1\u09b6"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u09a6\u09be\u09b0\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u0995\u09be\u09b0\u09c7\u09b2\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u098f\u09ab\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u09b8\u0982\u0996\u09cd\u09af\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u0995\u09c1\u09b0\u09c1\u0996"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u09b6\u09be\u09ae\u09cd\u09ac\u09be\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u09a4\u09c7\u09b2\u09c7\u0997\u09c1"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u09ac\u09be\u09ab\u09bf\u09af\u09bc\u09be"_s)
		})
	}));
	return data;
}

LocaleNames_bn::LocaleNames_bn() {
}

$Class* LocaleNames_bn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bn, name, initialize, &_LocaleNames_bn_ClassInfo_, allocate$LocaleNames_bn);
	return class$;
}

$Class* LocaleNames_bn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun