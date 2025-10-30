#include <sun/util/resources/ext/CurrencyNames_ko_KR.h>

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

$MethodInfo _CurrencyNames_ko_KR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ko_KR::*)()>(&CurrencyNames_ko_KR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ko_KR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ko_KR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ko_KR_MethodInfo_
};

$Object* allocate$CurrencyNames_ko_KR($Class* clazz) {
	return $of($alloc(CurrencyNames_ko_KR));
}

void CurrencyNames_ko_KR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ko_KR::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KRW"_s),
		$of(u"\uffe6"_s)
	})});
}

CurrencyNames_ko_KR::CurrencyNames_ko_KR() {
}

$Class* CurrencyNames_ko_KR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ko_KR, name, initialize, &_CurrencyNames_ko_KR_ClassInfo_, allocate$CurrencyNames_ko_KR);
	return class$;
}

$Class* CurrencyNames_ko_KR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun