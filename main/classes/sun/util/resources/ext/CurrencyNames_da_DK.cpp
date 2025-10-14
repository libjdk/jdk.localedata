#include <sun/util/resources/ext/CurrencyNames_da_DK.h>

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

$MethodInfo _CurrencyNames_da_DK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_da_DK::*)()>(&CurrencyNames_da_DK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_da_DK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_da_DK",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_da_DK_MethodInfo_
};

$Object* allocate$CurrencyNames_da_DK($Class* clazz) {
	return $of($alloc(CurrencyNames_da_DK));
}

void CurrencyNames_da_DK::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_da_DK::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("kr"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"\u20ac"_s)
		})
	});
}

CurrencyNames_da_DK::CurrencyNames_da_DK() {
}

$Class* CurrencyNames_da_DK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_da_DK, name, initialize, &_CurrencyNames_da_DK_ClassInfo_, allocate$CurrencyNames_da_DK);
	return class$;
}

$Class* CurrencyNames_da_DK::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun