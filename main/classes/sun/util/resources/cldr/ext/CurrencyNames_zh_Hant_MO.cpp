#include <sun/util/resources/cldr/ext/CurrencyNames_zh_Hant_MO.h>

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

$MethodInfo _CurrencyNames_zh_Hant_MO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_zh_Hant_MO::*)()>(&CurrencyNames_zh_Hant_MO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_zh_Hant_MO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_zh_Hant_MO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_Hant_MO_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_Hant_MO($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_Hant_MO));
}

void CurrencyNames_zh_Hant_MO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_Hant_MO::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MOP"_s),
		$of("MOP$"_s)
	})}));
	return data;
}

CurrencyNames_zh_Hant_MO::CurrencyNames_zh_Hant_MO() {
}

$Class* CurrencyNames_zh_Hant_MO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_Hant_MO, name, initialize, &_CurrencyNames_zh_Hant_MO_ClassInfo_, allocate$CurrencyNames_zh_Hant_MO);
	return class$;
}

$Class* CurrencyNames_zh_Hant_MO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun