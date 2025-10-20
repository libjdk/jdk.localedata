#include <sun/util/resources/cldr/ext/CurrencyNames_ti.h>

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

$MethodInfo _CurrencyNames_ti_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ti::*)()>(&CurrencyNames_ti::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ti_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ti",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ti_MethodInfo_
};

$Object* allocate$CurrencyNames_ti($Class* clazz) {
	return $of($alloc(CurrencyNames_ti));
}

void CurrencyNames_ti::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ti::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("Br"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u12e8\u1265\u122b\u12da\u120d \u122a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u12e8\u127b\u12ed\u1293 \u12e9\u12a0\u1295 \u1228\u1295\u121a\u1295\u1262"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u12e8\u12a2\u1275\u12ee\u1335\u12eb \u1265\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u12a0\u12cd\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u12e8\u12a5\u1295\u130d\u120a\u12dd \u1353\u12cd\u1295\u12f5 \u1235\u1270\u122d\u120a\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u12e8\u1215\u1295\u12f5 \u1229\u1352"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u12e8\u1303\u1353\u1295 \u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u12e8\u122b\u123b \u1229\u1265\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab\u1295 \u12f6\u120b\u122d"_s)
		})
	}));
	return data;
}

CurrencyNames_ti::CurrencyNames_ti() {
}

$Class* CurrencyNames_ti::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ti, name, initialize, &_CurrencyNames_ti_ClassInfo_, allocate$CurrencyNames_ti);
	return class$;
}

$Class* CurrencyNames_ti::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun