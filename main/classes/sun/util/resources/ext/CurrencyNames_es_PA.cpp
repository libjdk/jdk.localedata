#include <sun/util/resources/ext/CurrencyNames_es_PA.h>

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

$MethodInfo _CurrencyNames_es_PA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_es_PA::*)()>(&CurrencyNames_es_PA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_es_PA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_PA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_PA_MethodInfo_
};

$Object* allocate$CurrencyNames_es_PA($Class* clazz) {
	return $of($alloc(CurrencyNames_es_PA));
}

void CurrencyNames_es_PA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_PA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PAB"_s),
		$of("B"_s)
	})});
}

CurrencyNames_es_PA::CurrencyNames_es_PA() {
}

$Class* CurrencyNames_es_PA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_PA, name, initialize, &_CurrencyNames_es_PA_ClassInfo_, allocate$CurrencyNames_es_PA);
	return class$;
}

$Class* CurrencyNames_es_PA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun