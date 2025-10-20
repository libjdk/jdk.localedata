#include <sun/util/resources/cldr/ext/CurrencyNames_en_DK.h>

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

$MethodInfo _CurrencyNames_en_DK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_DK::*)()>(&CurrencyNames_en_DK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_DK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_DK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_DK_MethodInfo_
};

$Object* allocate$CurrencyNames_en_DK($Class* clazz) {
	return $of($alloc(CurrencyNames_en_DK));
}

void CurrencyNames_en_DK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_DK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DKK"_s),
		$of("kr."_s)
	})}));
	return data;
}

CurrencyNames_en_DK::CurrencyNames_en_DK() {
}

$Class* CurrencyNames_en_DK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_DK, name, initialize, &_CurrencyNames_en_DK_ClassInfo_, allocate$CurrencyNames_en_DK);
	return class$;
}

$Class* CurrencyNames_en_DK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun