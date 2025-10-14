#include <sun/util/resources/ext/CurrencyNames_mk_MK.h>

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

$MethodInfo _CurrencyNames_mk_MK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mk_MK::*)()>(&CurrencyNames_mk_MK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mk_MK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_mk_MK",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mk_MK_MethodInfo_
};

$Object* allocate$CurrencyNames_mk_MK($Class* clazz) {
	return $of($alloc(CurrencyNames_mk_MK));
}

void CurrencyNames_mk_MK::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_mk_MK::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MKD"_s),
		$of("Den"_s)
	})});
}

CurrencyNames_mk_MK::CurrencyNames_mk_MK() {
}

$Class* CurrencyNames_mk_MK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mk_MK, name, initialize, &_CurrencyNames_mk_MK_ClassInfo_, allocate$CurrencyNames_mk_MK);
	return class$;
}

$Class* CurrencyNames_mk_MK::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun