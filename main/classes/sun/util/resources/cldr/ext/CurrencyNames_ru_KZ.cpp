#include <sun/util/resources/cldr/ext/CurrencyNames_ru_KZ.h>

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

$MethodInfo _CurrencyNames_ru_KZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ru_KZ::*)()>(&CurrencyNames_ru_KZ::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ru_KZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ru_KZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ru_KZ_MethodInfo_
};

$Object* allocate$CurrencyNames_ru_KZ($Class* clazz) {
	return $of($alloc(CurrencyNames_ru_KZ));
}

void CurrencyNames_ru_KZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ru_KZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KZT"_s),
		$of(u"\u20b8"_s)
	})}));
	return data;
}

CurrencyNames_ru_KZ::CurrencyNames_ru_KZ() {
}

$Class* CurrencyNames_ru_KZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ru_KZ, name, initialize, &_CurrencyNames_ru_KZ_ClassInfo_, allocate$CurrencyNames_ru_KZ);
	return class$;
}

$Class* CurrencyNames_ru_KZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun