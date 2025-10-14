#include <sun/util/resources/cldr/ext/CurrencyNames_ln_AO.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _CurrencyNames_ln_AO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ln_AO::*)()>(&CurrencyNames_ln_AO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ln_AO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ln_AO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ln_AO_MethodInfo_
};

$Object* allocate$CurrencyNames_ln_AO($Class* clazz) {
	return $of($alloc(CurrencyNames_ln_AO));
}

void CurrencyNames_ln_AO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ln_AO::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AOA"_s),
		$of("Kz"_s)
	})}));
	return data;
}

CurrencyNames_ln_AO::CurrencyNames_ln_AO() {
}

$Class* CurrencyNames_ln_AO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ln_AO, name, initialize, &_CurrencyNames_ln_AO_ClassInfo_, allocate$CurrencyNames_ln_AO);
	return class$;
}

$Class* CurrencyNames_ln_AO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun