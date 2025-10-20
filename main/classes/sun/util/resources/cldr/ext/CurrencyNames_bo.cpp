#include <sun/util/resources/cldr/ext/CurrencyNames_bo.h>

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

$MethodInfo _CurrencyNames_bo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_bo::*)()>(&CurrencyNames_bo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_bo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bo_MethodInfo_
};

$Object* allocate$CurrencyNames_bo($Class* clazz) {
	return $of($alloc(CurrencyNames_bo));
}

void CurrencyNames_bo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f68\u0f53\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f42\u0f62\u0f0b\u0f66\u0f92\u0f7c\u0f62\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0f68\u0f0b\u0f62\u0f72\u0f60\u0f72\u0f0b\u0f66\u0f92\u0f7c\u0f62\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0f58\u0f0b\u0f62\u0f9f\u0f7c\u0f42\u0f66\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f53\u0f74\u0f66\u0f0b\u0f58\u0f7a\u0f51\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b\u0f63\u0f7c\u0f62"_s)
		})
	}));
	return data;
}

CurrencyNames_bo::CurrencyNames_bo() {
}

$Class* CurrencyNames_bo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bo, name, initialize, &_CurrencyNames_bo_ClassInfo_, allocate$CurrencyNames_bo);
	return class$;
}

$Class* CurrencyNames_bo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun