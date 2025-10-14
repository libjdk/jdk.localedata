#include <sun/util/resources/cldr/ext/CurrencyNames_fr_TN.h>

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

$MethodInfo _CurrencyNames_fr_TN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fr_TN::*)()>(&CurrencyNames_fr_TN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fr_TN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_TN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_TN_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_TN($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_TN));
}

void CurrencyNames_fr_TN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_TN::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("TND"_s),
		$of("DT"_s)
	})}));
	return data;
}

CurrencyNames_fr_TN::CurrencyNames_fr_TN() {
}

$Class* CurrencyNames_fr_TN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_TN, name, initialize, &_CurrencyNames_fr_TN_ClassInfo_, allocate$CurrencyNames_fr_TN);
	return class$;
}

$Class* CurrencyNames_fr_TN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun