#include <sun/util/resources/cldr/ext/CurrencyNames_sr_Cyrl_BA.h>

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

$MethodInfo _CurrencyNames_sr_Cyrl_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sr_Cyrl_BA::*)()>(&CurrencyNames_sr_Cyrl_BA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sr_Cyrl_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sr_Cyrl_BA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sr_Cyrl_BA_MethodInfo_
};

$Object* allocate$CurrencyNames_sr_Cyrl_BA($Class* clazz) {
	return $of($alloc(CurrencyNames_sr_Cyrl_BA));
}

void CurrencyNames_sr_Cyrl_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_Cyrl_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0411\u043e\u0441\u0430\u043d\u0441\u043a\u043e\u0445\u0435\u0440\u0446\u0435\u0433\u043e\u0432\u0430\u0447\u043a\u0430 \u043a\u043e\u043d\u0432\u0435\u0440\u0442\u0438\u0431\u0438\u043b\u043d\u0430 \u043c\u0430\u0440\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0411\u0458\u0435\u043b\u043e\u0440\u0443\u0441\u043a\u0430 \u0440\u0443\u0431\u0459\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u043e\u043a\u043e\u0440\u0435\u0458\u0441\u043a\u0438 \u0432\u043e\u043d"_s)
		})
	}));
	return data;
}

CurrencyNames_sr_Cyrl_BA::CurrencyNames_sr_Cyrl_BA() {
}

$Class* CurrencyNames_sr_Cyrl_BA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sr_Cyrl_BA, name, initialize, &_CurrencyNames_sr_Cyrl_BA_ClassInfo_, allocate$CurrencyNames_sr_Cyrl_BA);
	return class$;
}

$Class* CurrencyNames_sr_Cyrl_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun