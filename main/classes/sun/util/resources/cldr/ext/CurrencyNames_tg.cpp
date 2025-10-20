#include <sun/util/resources/cldr/ext/CurrencyNames_tg.h>

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

$MethodInfo _CurrencyNames_tg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_tg::*)()>(&CurrencyNames_tg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_tg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_tg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tg_MethodInfo_
};

$Object* allocate$CurrencyNames_tg($Class* clazz) {
	return $of($alloc(CurrencyNames_tg));
}

void CurrencyNames_tg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("TJS"_s),
			$of(u"\u0441\u043e\u043c."_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0420\u0435\u0430\u043b\u0438 \u0431\u0440\u0430\u0437\u0438\u043b\u0438\u044f\u0433\u04e3"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0418\u0435\u043d\u0430\u0438 \u0445\u0438\u0442\u043e\u04e3"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0415\u0432\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0424\u0443\u043d\u0442 \u0441\u0442\u0435\u0440\u043b\u0438\u043d\u0433\u0438 \u0431\u0440\u0438\u0442\u0430\u043d\u04e3"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0420\u0443\u043f\u0438\u044f\u0438 \u04b3\u0438\u043d\u0434\u0443\u0441\u0442\u043e\u043d\u04e3"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u0418\u0435\u043d\u0430\u0438 \u044f\u043f\u043e\u043d\u04e3"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0420\u0443\u0431\u043b\u0438 \u0440\u0443\u0441\u04e3"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0421\u043e\u043c\u043e\u043d\u04e3"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0414\u043e\u043b\u043b\u0430\u0440\u0438 \u0418\u041c\u0410"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0410\u0441\u044a\u043e\u0440\u0438 \u043d\u043e\u043c\u0430\u044a\u043b\u0443\u043c"_s)
		})
	}));
	return data;
}

CurrencyNames_tg::CurrencyNames_tg() {
}

$Class* CurrencyNames_tg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tg, name, initialize, &_CurrencyNames_tg_ClassInfo_, allocate$CurrencyNames_tg);
	return class$;
}

$Class* CurrencyNames_tg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun