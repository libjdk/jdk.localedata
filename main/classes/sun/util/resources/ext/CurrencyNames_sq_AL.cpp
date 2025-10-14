#include <sun/util/resources/ext/CurrencyNames_sq_AL.h>

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

$MethodInfo _CurrencyNames_sq_AL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sq_AL::*)()>(&CurrencyNames_sq_AL::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sq_AL_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sq_AL",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sq_AL_MethodInfo_
};

$Object* allocate$CurrencyNames_sq_AL($Class* clazz) {
	return $of($alloc(CurrencyNames_sq_AL));
}

void CurrencyNames_sq_AL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sq_AL::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ALL"_s),
		$of("Lek"_s)
	})});
}

CurrencyNames_sq_AL::CurrencyNames_sq_AL() {
}

$Class* CurrencyNames_sq_AL::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sq_AL, name, initialize, &_CurrencyNames_sq_AL_ClassInfo_, allocate$CurrencyNames_sq_AL);
	return class$;
}

$Class* CurrencyNames_sq_AL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun