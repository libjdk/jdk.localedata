#include <sun/util/resources/cldr/ext/CurrencyNames_pa_Arab.h>

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

$MethodInfo _CurrencyNames_pa_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_pa_Arab::*)()>(&CurrencyNames_pa_Arab::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_pa_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pa_Arab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pa_Arab_MethodInfo_
};

$Object* allocate$CurrencyNames_pa_Arab($Class* clazz) {
	return $of($alloc(CurrencyNames_pa_Arab));
}

void CurrencyNames_pa_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pa_Arab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of(u"\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u064a\u0648\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0631\u0648\u067e\u0626\u06cc\u06c1 [INR]"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u0631\u0648\u067e\u0626\u06cc\u06c1"_s)
		})
	}));
	return data;
}

CurrencyNames_pa_Arab::CurrencyNames_pa_Arab() {
}

$Class* CurrencyNames_pa_Arab::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pa_Arab, name, initialize, &_CurrencyNames_pa_Arab_ClassInfo_, allocate$CurrencyNames_pa_Arab);
	return class$;
}

$Class* CurrencyNames_pa_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun