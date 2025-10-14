#include <sun/util/resources/cldr/ext/CurrencyNames_ms_BN.h>

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

$MethodInfo _CurrencyNames_ms_BN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ms_BN::*)()>(&CurrencyNames_ms_BN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ms_BN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ms_BN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ms_BN_MethodInfo_
};

$Object* allocate$CurrencyNames_ms_BN($Class* clazz) {
	return $of($alloc(CurrencyNames_ms_BN));
}

void CurrencyNames_ms_BN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ms_BN::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BND"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_ms_BN::CurrencyNames_ms_BN() {
}

$Class* CurrencyNames_ms_BN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ms_BN, name, initialize, &_CurrencyNames_ms_BN_ClassInfo_, allocate$CurrencyNames_ms_BN);
	return class$;
}

$Class* CurrencyNames_ms_BN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun