#include <sun/util/resources/ext/CurrencyNames_ar_SD.h>

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

$MethodInfo _CurrencyNames_ar_SD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ar_SD::*)()>(&CurrencyNames_ar_SD::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ar_SD_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_SD",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_SD_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_SD($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_SD));
}

void CurrencyNames_ar_SD::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_SD::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("SDD"_s),
			$of(u"\u062f.\u0633.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of(u"\u062c.\u0633.\u200f"_s)
		})
	});
}

CurrencyNames_ar_SD::CurrencyNames_ar_SD() {
}

$Class* CurrencyNames_ar_SD::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_SD, name, initialize, &_CurrencyNames_ar_SD_ClassInfo_, allocate$CurrencyNames_ar_SD);
	return class$;
}

$Class* CurrencyNames_ar_SD::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun