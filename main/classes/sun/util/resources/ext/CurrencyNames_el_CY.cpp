#include <sun/util/resources/ext/CurrencyNames_el_CY.h>

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

$MethodInfo _CurrencyNames_el_CY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_el_CY::*)()>(&CurrencyNames_el_CY::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_el_CY_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_el_CY",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_el_CY_MethodInfo_
};

$Object* allocate$CurrencyNames_el_CY($Class* clazz) {
	return $of($alloc(CurrencyNames_el_CY));
}

void CurrencyNames_el_CY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_el_CY::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CYP"_s),
			$of(u"\u00a3"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"\u20ac"_s)
		})
	});
}

CurrencyNames_el_CY::CurrencyNames_el_CY() {
}

$Class* CurrencyNames_el_CY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_el_CY, name, initialize, &_CurrencyNames_el_CY_ClassInfo_, allocate$CurrencyNames_el_CY);
	return class$;
}

$Class* CurrencyNames_el_CY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun