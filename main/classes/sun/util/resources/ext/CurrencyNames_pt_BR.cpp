#include <sun/util/resources/ext/CurrencyNames_pt_BR.h>

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

$MethodInfo _CurrencyNames_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_pt_BR::*)()>(&CurrencyNames_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_pt_BR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_BR_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_BR($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_BR));
}

void CurrencyNames_pt_BR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BRL"_s),
			$of("R$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		})
	});
}

CurrencyNames_pt_BR::CurrencyNames_pt_BR() {
}

$Class* CurrencyNames_pt_BR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_BR, name, initialize, &_CurrencyNames_pt_BR_ClassInfo_, allocate$CurrencyNames_pt_BR);
	return class$;
}

$Class* CurrencyNames_pt_BR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun