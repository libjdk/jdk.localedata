#include <sun/util/resources/ext/CurrencyNames_fr_CH.h>

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

$MethodInfo _CurrencyNames_fr_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fr_CH::*)()>(&CurrencyNames_fr_CH::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fr_CH_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_fr_CH",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_CH_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_CH($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_CH));
}

void CurrencyNames_fr_CH::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_CH::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CHF"_s),
		$of("SFr."_s)
	})});
}

CurrencyNames_fr_CH::CurrencyNames_fr_CH() {
}

$Class* CurrencyNames_fr_CH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_CH, name, initialize, &_CurrencyNames_fr_CH_ClassInfo_, allocate$CurrencyNames_fr_CH);
	return class$;
}

$Class* CurrencyNames_fr_CH::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun