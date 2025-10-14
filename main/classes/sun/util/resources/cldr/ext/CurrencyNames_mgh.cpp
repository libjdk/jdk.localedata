#include <sun/util/resources/cldr/ext/CurrencyNames_mgh.h>

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

$MethodInfo _CurrencyNames_mgh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mgh::*)()>(&CurrencyNames_mgh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mgh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mgh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mgh_MethodInfo_
};

$Object* allocate$CurrencyNames_mgh($Class* clazz) {
	return $of($alloc(CurrencyNames_mgh));
}

void CurrencyNames_mgh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mgh::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MZN"_s),
		$of("MTn"_s)
	})}));
	return data;
}

CurrencyNames_mgh::CurrencyNames_mgh() {
}

$Class* CurrencyNames_mgh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mgh, name, initialize, &_CurrencyNames_mgh_ClassInfo_, allocate$CurrencyNames_mgh);
	return class$;
}

$Class* CurrencyNames_mgh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun