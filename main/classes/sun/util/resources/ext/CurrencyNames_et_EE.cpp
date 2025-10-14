#include <sun/util/resources/ext/CurrencyNames_et_EE.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_et_EE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_et_EE::*)()>(&CurrencyNames_et_EE::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_et_EE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_et_EE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_et_EE_MethodInfo_
};

$Object* allocate$CurrencyNames_et_EE($Class* clazz) {
	return $of($alloc(CurrencyNames_et_EE));
}

void CurrencyNames_et_EE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_et_EE::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EEK"_s),
			$of("kr"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"\u20ac"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Eesti kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		})
	});
}

CurrencyNames_et_EE::CurrencyNames_et_EE() {
}

$Class* CurrencyNames_et_EE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_et_EE, name, initialize, &_CurrencyNames_et_EE_ClassInfo_, allocate$CurrencyNames_et_EE);
	return class$;
}

$Class* CurrencyNames_et_EE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun