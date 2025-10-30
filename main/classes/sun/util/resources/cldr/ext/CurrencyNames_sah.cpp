#include <sun/util/resources/cldr/ext/CurrencyNames_sah.h>

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

$MethodInfo _CurrencyNames_sah_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sah::*)()>(&CurrencyNames_sah::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sah_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sah",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sah_MethodInfo_
};

$Object* allocate$CurrencyNames_sah($Class* clazz) {
	return $of($alloc(CurrencyNames_sah));
}

void CurrencyNames_sah::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sah::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"\u20bd"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0410\u0440\u0430\u0441\u0441\u044b\u044b\u0439\u0430 \u0441\u043e\u043b\u043a\u0443\u043e\u0431\u0430\u0439\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0410\u0425\u0428 \u0434\u0443\u043e\u043b\u043b\u0430\u0440\u0430"_s)
		})
	}));
	return data;
}

CurrencyNames_sah::CurrencyNames_sah() {
}

$Class* CurrencyNames_sah::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sah, name, initialize, &_CurrencyNames_sah_ClassInfo_, allocate$CurrencyNames_sah);
	return class$;
}

$Class* CurrencyNames_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun