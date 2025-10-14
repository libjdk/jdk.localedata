#include <sun/util/resources/cldr/ext/CurrencyNames_kl.h>

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

$MethodInfo _CurrencyNames_kl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_kl::*)()>(&CurrencyNames_kl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_kl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_kl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_kl_MethodInfo_
};

$Object* allocate$CurrencyNames_kl($Class* clazz) {
	return $of($alloc(CurrencyNames_kl));
}

void CurrencyNames_kl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_kl::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("kr."_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		})
	}));
	return data;
}

CurrencyNames_kl::CurrencyNames_kl() {
}

$Class* CurrencyNames_kl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_kl, name, initialize, &_CurrencyNames_kl_ClassInfo_, allocate$CurrencyNames_kl);
	return class$;
}

$Class* CurrencyNames_kl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun