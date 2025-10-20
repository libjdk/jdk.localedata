#include <sun/util/resources/cldr/ext/CurrencyNames_en_LC.h>

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

$MethodInfo _CurrencyNames_en_LC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_LC::*)()>(&CurrencyNames_en_LC::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_LC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_LC",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_LC_MethodInfo_
};

$Object* allocate$CurrencyNames_en_LC($Class* clazz) {
	return $of($alloc(CurrencyNames_en_LC));
}

void CurrencyNames_en_LC::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_LC::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("XCD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_LC::CurrencyNames_en_LC() {
}

$Class* CurrencyNames_en_LC::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_LC, name, initialize, &_CurrencyNames_en_LC_ClassInfo_, allocate$CurrencyNames_en_LC);
	return class$;
}

$Class* CurrencyNames_en_LC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun