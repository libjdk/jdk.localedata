#include <sun/util/resources/ext/CurrencyNames_ru_RU.h>

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

$MethodInfo _CurrencyNames_ru_RU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ru_RU::*)()>(&CurrencyNames_ru_RU::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ru_RU_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ru_RU",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ru_RU_MethodInfo_
};

$Object* allocate$CurrencyNames_ru_RU($Class* clazz) {
	return $of($alloc(CurrencyNames_ru_RU));
}

void CurrencyNames_ru_RU::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ru_RU::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("RUB"_s),
		$of(u"\u0440\u0443\u0431."_s)
	})});
}

CurrencyNames_ru_RU::CurrencyNames_ru_RU() {
}

$Class* CurrencyNames_ru_RU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ru_RU, name, initialize, &_CurrencyNames_ru_RU_ClassInfo_, allocate$CurrencyNames_ru_RU);
	return class$;
}

$Class* CurrencyNames_ru_RU::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun