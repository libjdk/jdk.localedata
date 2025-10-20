#include <sun/util/resources/ext/CurrencyNames_sr_Latn_RS.h>

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

$MethodInfo _CurrencyNames_sr_Latn_RS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sr_Latn_RS::*)()>(&CurrencyNames_sr_Latn_RS::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sr_Latn_RS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sr_Latn_RS",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sr_Latn_RS_MethodInfo_
};

$Object* allocate$CurrencyNames_sr_Latn_RS($Class* clazz) {
	return $of($alloc(CurrencyNames_sr_Latn_RS));
}

void CurrencyNames_sr_Latn_RS::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_Latn_RS::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of("din."_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Srpski dinar"_s)
		})
	});
}

CurrencyNames_sr_Latn_RS::CurrencyNames_sr_Latn_RS() {
}

$Class* CurrencyNames_sr_Latn_RS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sr_Latn_RS, name, initialize, &_CurrencyNames_sr_Latn_RS_ClassInfo_, allocate$CurrencyNames_sr_Latn_RS);
	return class$;
}

$Class* CurrencyNames_sr_Latn_RS::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun