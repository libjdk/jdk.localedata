#include <sun/util/resources/cldr/ext/CurrencyNames_en_NR.h>

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

$MethodInfo _CurrencyNames_en_NR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_NR::*)()>(&CurrencyNames_en_NR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_NR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_NR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_NR_MethodInfo_
};

$Object* allocate$CurrencyNames_en_NR($Class* clazz) {
	return $of($alloc(CurrencyNames_en_NR));
}

void CurrencyNames_en_NR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_NR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AUD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_NR::CurrencyNames_en_NR() {
}

$Class* CurrencyNames_en_NR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_NR, name, initialize, &_CurrencyNames_en_NR_ClassInfo_, allocate$CurrencyNames_en_NR);
	return class$;
}

$Class* CurrencyNames_en_NR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun