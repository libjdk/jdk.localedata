#include <sun/util/resources/ext/CurrencyNames_hi_IN.h>

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

$MethodInfo _CurrencyNames_hi_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_hi_IN::*)()>(&CurrencyNames_hi_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_hi_IN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_hi_IN",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_hi_IN_MethodInfo_
};

$Object* allocate$CurrencyNames_hi_IN($Class* clazz) {
	return $of($alloc(CurrencyNames_hi_IN));
}

void CurrencyNames_hi_IN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_hi_IN::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("INR"_s),
		$of(u"\u0930\u0942"_s)
	})});
}

CurrencyNames_hi_IN::CurrencyNames_hi_IN() {
}

$Class* CurrencyNames_hi_IN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_hi_IN, name, initialize, &_CurrencyNames_hi_IN_ClassInfo_, allocate$CurrencyNames_hi_IN);
	return class$;
}

$Class* CurrencyNames_hi_IN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun