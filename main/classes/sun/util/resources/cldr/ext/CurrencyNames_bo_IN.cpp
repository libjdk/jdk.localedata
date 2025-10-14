#include <sun/util/resources/cldr/ext/CurrencyNames_bo_IN.h>

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

$MethodInfo _CurrencyNames_bo_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_bo_IN::*)()>(&CurrencyNames_bo_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_bo_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bo_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bo_IN_MethodInfo_
};

$Object* allocate$CurrencyNames_bo_IN($Class* clazz) {
	return $of($alloc(CurrencyNames_bo_IN));
}

void CurrencyNames_bo_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bo_IN::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CNY"_s),
		$of(u"CN\u00a5"_s)
	})}));
	return data;
}

CurrencyNames_bo_IN::CurrencyNames_bo_IN() {
}

$Class* CurrencyNames_bo_IN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bo_IN, name, initialize, &_CurrencyNames_bo_IN_ClassInfo_, allocate$CurrencyNames_bo_IN);
	return class$;
}

$Class* CurrencyNames_bo_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun