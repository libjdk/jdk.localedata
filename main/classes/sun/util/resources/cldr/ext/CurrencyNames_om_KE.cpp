#include <sun/util/resources/cldr/ext/CurrencyNames_om_KE.h>

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

$MethodInfo _CurrencyNames_om_KE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_om_KE::*)()>(&CurrencyNames_om_KE::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_om_KE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_om_KE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_om_KE_MethodInfo_
};

$Object* allocate$CurrencyNames_om_KE($Class* clazz) {
	return $of($alloc(CurrencyNames_om_KE));
}

void CurrencyNames_om_KE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_om_KE::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KES"_s),
		$of("Ksh"_s)
	})}));
	return data;
}

CurrencyNames_om_KE::CurrencyNames_om_KE() {
}

$Class* CurrencyNames_om_KE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_om_KE, name, initialize, &_CurrencyNames_om_KE_ClassInfo_, allocate$CurrencyNames_om_KE);
	return class$;
}

$Class* CurrencyNames_om_KE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun