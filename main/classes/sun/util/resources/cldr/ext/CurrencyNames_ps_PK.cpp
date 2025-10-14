#include <sun/util/resources/cldr/ext/CurrencyNames_ps_PK.h>

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

$MethodInfo _CurrencyNames_ps_PK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ps_PK::*)()>(&CurrencyNames_ps_PK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ps_PK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ps_PK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ps_PK_MethodInfo_
};

$Object* allocate$CurrencyNames_ps_PK($Class* clazz) {
	return $of($alloc(CurrencyNames_ps_PK));
}

void CurrencyNames_ps_PK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ps_PK::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("Rs"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0646\u0627\u0645\u0639\u0644\u0648\u0645\u0647 \u0645\u0631\u0648\u062c\u0647 \u067e\u06d0\u0633\u06d2"_s)
		})
	}));
	return data;
}

CurrencyNames_ps_PK::CurrencyNames_ps_PK() {
}

$Class* CurrencyNames_ps_PK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ps_PK, name, initialize, &_CurrencyNames_ps_PK_ClassInfo_, allocate$CurrencyNames_ps_PK);
	return class$;
}

$Class* CurrencyNames_ps_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun