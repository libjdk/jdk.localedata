#include <sun/util/resources/cldr/ext/CurrencyNames_ru_MD.h>

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

$MethodInfo _CurrencyNames_ru_MD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ru_MD::*)()>(&CurrencyNames_ru_MD::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ru_MD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ru_MD",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ru_MD_MethodInfo_
};

$Object* allocate$CurrencyNames_ru_MD($Class* clazz) {
	return $of($alloc(CurrencyNames_ru_MD));
}

void CurrencyNames_ru_MD::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ru_MD::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MDL"_s),
		$of("L"_s)
	})}));
	return data;
}

CurrencyNames_ru_MD::CurrencyNames_ru_MD() {
}

$Class* CurrencyNames_ru_MD::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ru_MD, name, initialize, &_CurrencyNames_ru_MD_ClassInfo_, allocate$CurrencyNames_ru_MD);
	return class$;
}

$Class* CurrencyNames_ru_MD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun