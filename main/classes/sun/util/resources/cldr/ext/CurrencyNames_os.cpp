#include <sun/util/resources/cldr/ext/CurrencyNames_os.h>

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

$MethodInfo _CurrencyNames_os_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_os::*)()>(&CurrencyNames_os::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_os_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_os",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_os_MethodInfo_
};

$Object* allocate$CurrencyNames_os($Class* clazz) {
	return $of($alloc(CurrencyNames_os));
}

void CurrencyNames_os::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_os::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of(u"\u20be"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b\u0438\u0430\u0433 \u0440\u0435\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0415\u0432\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u0439\u043d\u0430\u0433 \u0424\u0443\u043d\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u041b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0421\u043e\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0410\u0418\u0428-\u044b \u0414\u043e\u043b\u043b\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u041d\u04d5\u0437\u043e\u043d\u0433\u04d5 \u0432\u0430\u043b\u044e\u0442\u04d5"_s)
		})
	}));
	return data;
}

CurrencyNames_os::CurrencyNames_os() {
}

$Class* CurrencyNames_os::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_os, name, initialize, &_CurrencyNames_os_ClassInfo_, allocate$CurrencyNames_os);
	return class$;
}

$Class* CurrencyNames_os::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun