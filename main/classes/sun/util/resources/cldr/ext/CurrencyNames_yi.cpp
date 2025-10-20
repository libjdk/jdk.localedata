#include <sun/util/resources/cldr/ext/CurrencyNames_yi.h>

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

$MethodInfo _CurrencyNames_yi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_yi::*)()>(&CurrencyNames_yi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_yi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_yi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_yi_MethodInfo_
};

$Object* allocate$CurrencyNames_yi($Class* clazz) {
	return $of($alloc(CurrencyNames_yi));
}

void CurrencyNames_yi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u05d1\u05e8\u05d0\u05d6\u05d9\u05dc \u05e8\u05e2\u05d0\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u05d1\u05e2\u05dc\u05d9\u05d6 \u05d3\u05d0\u05dc\u05d0\u05b7\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u05e9\u05d5\u05d5\u05d9\u05d9\u05e6\u05e2\u05e8 \u05e4\u05bf\u05e8\u05d0\u05b7\u05e0\u05e7"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u05db\u05d9\u05e0\u05e2\u05d6\u05d9\u05e9\u05e2\u05e8 \u05d9\u05d5\u05d0\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u05d0\u05d9\u05d9\u05e8\u05d0"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u05e4\u05bf\u05d5\u05e0\u05d8 \u05e9\u05d8\u05e2\u05e8\u05dc\u05d9\u05e0\u05d2"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u05d0\u05d9\u05e0\u05d3\u05d9\u05e9\u05e2\u05e8 \u05e8\u05d5\u05e4\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u05d9\u05d0\u05e4\u05d0\u05e0\u05e2\u05d6\u05d9\u05e9\u05e2\u05e8 \u05d9\u05e2\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u05e8\u05d5\u05e1\u05d9\u05e9\u05e2\u05e8 \u05e8\u05d5\u05d1\u05dc"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u05e9\u05d5\u05d5\u05e2\u05d3\u05d9\u05e9\u05e2 \u05e7\u05e8\u05d0\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u05d0\u05de\u05e2\u05e8\u05d9\u05e7\u05d0\u05e0\u05e2\u05e8 \u05d3\u05d0\u05dc\u05d0\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u05d6\u05d9\u05dc\u05d1\u05e2\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u05d2\u05d0\u05dc\u05d3"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u05d0\u05d5\u05de\u05d1\u05d0\u05b7\u05d5\u05d5\u05d0\u05d5\u05e1\u05d8\u05e2 \u05d5\u05d5\u05d0\u05b7\u05dc\u05d5\u05d8\u05e2"_s)
		})
	}));
	return data;
}

CurrencyNames_yi::CurrencyNames_yi() {
}

$Class* CurrencyNames_yi::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_yi, name, initialize, &_CurrencyNames_yi_ClassInfo_, allocate$CurrencyNames_yi);
	return class$;
}

$Class* CurrencyNames_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun