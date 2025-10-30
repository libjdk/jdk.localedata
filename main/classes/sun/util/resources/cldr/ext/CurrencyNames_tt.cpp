#include <sun/util/resources/cldr/ext/CurrencyNames_tt.h>

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

$MethodInfo _CurrencyNames_tt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_tt::*)()>(&CurrencyNames_tt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_tt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_tt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tt_MethodInfo_
};

$Object* allocate$CurrencyNames_tt($Class* clazz) {
	return $of($alloc(CurrencyNames_tt));
}

void CurrencyNames_tt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"\u20bd"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b\u0438\u044f \u0440\u0435\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u043a\u044b\u0442\u0430\u0439 \u044e\u0430\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0435\u0432\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0444\u0443\u043d\u0442 \u0441\u0442\u0435\u0440\u043b\u0438\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0418\u043d\u0434\u0438\u044f \u0440\u0443\u043f\u0438\u044f\u0441\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u044f\u043f\u043e\u043d \u0438\u0435\u043d\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0420\u043e\u0441\u0441\u0438\u044f \u0441\u0443\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0410\u041a\u0428 \u0434\u043e\u043b\u043b\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0431\u0438\u043b\u0433\u0435\u0441\u0435\u0437 \u0432\u0430\u043b\u044e\u0442\u0430"_s)
		})
	}));
	return data;
}

CurrencyNames_tt::CurrencyNames_tt() {
}

$Class* CurrencyNames_tt::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tt, name, initialize, &_CurrencyNames_tt_ClassInfo_, allocate$CurrencyNames_tt);
	return class$;
}

$Class* CurrencyNames_tt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun