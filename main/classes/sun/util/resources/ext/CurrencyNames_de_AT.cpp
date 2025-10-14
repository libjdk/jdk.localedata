#include <sun/util/resources/ext/CurrencyNames_de_AT.h>

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

$MethodInfo _CurrencyNames_de_AT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_de_AT::*)()>(&CurrencyNames_de_AT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_de_AT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_de_AT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_de_AT_MethodInfo_
};

$Object* allocate$CurrencyNames_de_AT($Class* clazz) {
	return $of($alloc(CurrencyNames_de_AT));
}

void CurrencyNames_de_AT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_de_AT::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ATS"_s),
			$of(u"\u00f6S"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"\u20ac"_s)
		})
	});
}

CurrencyNames_de_AT::CurrencyNames_de_AT() {
}

$Class* CurrencyNames_de_AT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_de_AT, name, initialize, &_CurrencyNames_de_AT_ClassInfo_, allocate$CurrencyNames_de_AT);
	return class$;
}

$Class* CurrencyNames_de_AT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun