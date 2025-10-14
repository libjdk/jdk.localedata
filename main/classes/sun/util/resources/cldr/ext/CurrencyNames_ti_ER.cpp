#include <sun/util/resources/cldr/ext/CurrencyNames_ti_ER.h>

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

$MethodInfo _CurrencyNames_ti_ER_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ti_ER::*)()>(&CurrencyNames_ti_ER::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ti_ER_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ti_ER",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ti_ER_MethodInfo_
};

$Object* allocate$CurrencyNames_ti_ER($Class* clazz) {
	return $of($alloc(CurrencyNames_ti_ER));
}

void CurrencyNames_ti_ER::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ti_ER::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ERN"_s),
		$of("Nfk"_s)
	})}));
	return data;
}

CurrencyNames_ti_ER::CurrencyNames_ti_ER() {
}

$Class* CurrencyNames_ti_ER::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ti_ER, name, initialize, &_CurrencyNames_ti_ER_ClassInfo_, allocate$CurrencyNames_ti_ER);
	return class$;
}

$Class* CurrencyNames_ti_ER::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun