#include <sun/util/resources/cldr/ext/CurrencyNames_wae.h>

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

$MethodInfo _CurrencyNames_wae_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_wae::*)()>(&CurrencyNames_wae::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_wae_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_wae",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_wae_MethodInfo_
};

$Object* allocate$CurrencyNames_wae($Class* clazz) {
	return $of($alloc(CurrencyNames_wae));
}

void CurrencyNames_wae::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_wae::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Brasiliani\u0161i Real"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Chinesi\u0161i Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Indi\u0161i Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Unbekannti W\u00e3rig"_s)
		})
	}));
	return data;
}

CurrencyNames_wae::CurrencyNames_wae() {
}

$Class* CurrencyNames_wae::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_wae, name, initialize, &_CurrencyNames_wae_ClassInfo_, allocate$CurrencyNames_wae);
	return class$;
}

$Class* CurrencyNames_wae::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun