#include <sun/util/resources/ext/CurrencyNames_ar_AE.h>

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

$MethodInfo _CurrencyNames_ar_AE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ar_AE::*)()>(&CurrencyNames_ar_AE::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ar_AE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_AE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_AE_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_AE($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_AE));
}

void CurrencyNames_ar_AE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_AE::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AED"_s),
		$of(u"\u062f.\u0625.\u200f"_s)
	})});
}

CurrencyNames_ar_AE::CurrencyNames_ar_AE() {
}

$Class* CurrencyNames_ar_AE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_AE, name, initialize, &_CurrencyNames_ar_AE_ClassInfo_, allocate$CurrencyNames_ar_AE);
	return class$;
}

$Class* CurrencyNames_ar_AE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun