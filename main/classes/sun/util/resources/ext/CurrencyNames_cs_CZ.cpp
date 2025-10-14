#include <sun/util/resources/ext/CurrencyNames_cs_CZ.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_cs_CZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_cs_CZ::*)()>(&CurrencyNames_cs_CZ::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_cs_CZ_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_cs_CZ",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_cs_CZ_MethodInfo_
};

$Object* allocate$CurrencyNames_cs_CZ($Class* clazz) {
	return $of($alloc(CurrencyNames_cs_CZ));
}

void CurrencyNames_cs_CZ::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_cs_CZ::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CZK"_s),
		$of(u"K\u010d"_s)
	})});
}

CurrencyNames_cs_CZ::CurrencyNames_cs_CZ() {
}

$Class* CurrencyNames_cs_CZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_cs_CZ, name, initialize, &_CurrencyNames_cs_CZ_ClassInfo_, allocate$CurrencyNames_cs_CZ);
	return class$;
}

$Class* CurrencyNames_cs_CZ::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun