#include <sun/util/resources/ext/CurrencyNames_fr_LU.h>

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

$MethodInfo _CurrencyNames_fr_LU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fr_LU::*)()>(&CurrencyNames_fr_LU::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fr_LU_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_fr_LU",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_LU_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_LU($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_LU));
}

void CurrencyNames_fr_LU::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_LU::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"\u20ac"_s)
		}),
		$$new($ObjectArray, {
			$of("LUF"_s),
			$of("F"_s)
		})
	});
}

CurrencyNames_fr_LU::CurrencyNames_fr_LU() {
}

$Class* CurrencyNames_fr_LU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_LU, name, initialize, &_CurrencyNames_fr_LU_ClassInfo_, allocate$CurrencyNames_fr_LU);
	return class$;
}

$Class* CurrencyNames_fr_LU::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun