#include <sun/util/resources/ext/CurrencyNames_fr_CA.h>

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

$MethodInfo _CurrencyNames_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fr_CA::*)()>(&CurrencyNames_fr_CA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fr_CA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_fr_CA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_CA_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_CA($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_CA));
}

void CurrencyNames_fr_CA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_CA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CAD"_s),
		$of("$"_s)
	})});
}

CurrencyNames_fr_CA::CurrencyNames_fr_CA() {
}

$Class* CurrencyNames_fr_CA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_CA, name, initialize, &_CurrencyNames_fr_CA_ClassInfo_, allocate$CurrencyNames_fr_CA);
	return class$;
}

$Class* CurrencyNames_fr_CA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun