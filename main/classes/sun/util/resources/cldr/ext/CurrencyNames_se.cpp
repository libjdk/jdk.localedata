#include <sun/util/resources/cldr/ext/CurrencyNames_se.h>

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

$MethodInfo _CurrencyNames_se_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_se::*)()>(&CurrencyNames_se::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_se_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_se",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_se_MethodInfo_
};

$Object* allocate$CurrencyNames_se($Class* clazz) {
	return $of($alloc(CurrencyNames_se));
}

void CurrencyNames_se::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_se::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("Dkr"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("kr"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("Skr"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"\u0e3f"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"suoma m\u00e1rkki"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("norgga kruvdno"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"ruo\u0167\u0167a kruvdno"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("uns silba"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("uns golli"_s)
		})
	}));
	return data;
}

CurrencyNames_se::CurrencyNames_se() {
}

$Class* CurrencyNames_se::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_se, name, initialize, &_CurrencyNames_se_ClassInfo_, allocate$CurrencyNames_se);
	return class$;
}

$Class* CurrencyNames_se::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun