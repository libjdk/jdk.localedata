#include <sun/util/resources/ext/CurrencyNames_ar_MA.h>

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

$MethodInfo _CurrencyNames_ar_MA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ar_MA::*)()>(&CurrencyNames_ar_MA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ar_MA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_MA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_MA_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_MA($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_MA));
}

void CurrencyNames_ar_MA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_MA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MAD"_s),
		$of(u"\u062f.\u0645.\u200f"_s)
	})});
}

CurrencyNames_ar_MA::CurrencyNames_ar_MA() {
}

$Class* CurrencyNames_ar_MA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_MA, name, initialize, &_CurrencyNames_ar_MA_ClassInfo_, allocate$CurrencyNames_ar_MA);
	return class$;
}

$Class* CurrencyNames_ar_MA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun