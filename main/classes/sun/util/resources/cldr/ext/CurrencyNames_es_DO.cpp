#include <sun/util/resources/cldr/ext/CurrencyNames_es_DO.h>

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

$MethodInfo _CurrencyNames_es_DO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_es_DO::*)()>(&CurrencyNames_es_DO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_es_DO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_DO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_DO_MethodInfo_
};

$Object* allocate$CurrencyNames_es_DO($Class* clazz) {
	return $of($alloc(CurrencyNames_es_DO));
}

void CurrencyNames_es_DO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_DO::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DOP"_s),
			$of("RD$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		})
	}));
	return data;
}

CurrencyNames_es_DO::CurrencyNames_es_DO() {
}

$Class* CurrencyNames_es_DO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_DO, name, initialize, &_CurrencyNames_es_DO_ClassInfo_, allocate$CurrencyNames_es_DO);
	return class$;
}

$Class* CurrencyNames_es_DO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun