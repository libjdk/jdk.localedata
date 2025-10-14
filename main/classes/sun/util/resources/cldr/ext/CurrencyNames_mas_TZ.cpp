#include <sun/util/resources/cldr/ext/CurrencyNames_mas_TZ.h>

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

$MethodInfo _CurrencyNames_mas_TZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mas_TZ::*)()>(&CurrencyNames_mas_TZ::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mas_TZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mas_TZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mas_TZ_MethodInfo_
};

$Object* allocate$CurrencyNames_mas_TZ($Class* clazz) {
	return $of($alloc(CurrencyNames_mas_TZ));
}

void CurrencyNames_mas_TZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mas_TZ::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("TZS"_s),
		$of("TSh"_s)
	})}));
	return data;
}

CurrencyNames_mas_TZ::CurrencyNames_mas_TZ() {
}

$Class* CurrencyNames_mas_TZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mas_TZ, name, initialize, &_CurrencyNames_mas_TZ_ClassInfo_, allocate$CurrencyNames_mas_TZ);
	return class$;
}

$Class* CurrencyNames_mas_TZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun