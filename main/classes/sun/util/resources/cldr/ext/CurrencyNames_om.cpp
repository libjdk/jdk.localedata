#include <sun/util/resources/cldr/ext/CurrencyNames_om.h>

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

$MethodInfo _CurrencyNames_om_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_om::*)()>(&CurrencyNames_om::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_om_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_om",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_om_MethodInfo_
};

$Object* allocate$CurrencyNames_om($Class* clazz) {
	return $of($alloc(CurrencyNames_om));
}

void CurrencyNames_om::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_om::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("Br"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brazilian Real"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Chinese Yuan Renminbi"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Itoophiyaa Birrii"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("British Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanese Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Russian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("US Dollar"_s)
		})
	}));
	return data;
}

CurrencyNames_om::CurrencyNames_om() {
}

$Class* CurrencyNames_om::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_om, name, initialize, &_CurrencyNames_om_ClassInfo_, allocate$CurrencyNames_om);
	return class$;
}

$Class* CurrencyNames_om::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun