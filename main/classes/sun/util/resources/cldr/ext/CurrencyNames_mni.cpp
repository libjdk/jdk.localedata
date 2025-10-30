#include <sun/util/resources/cldr/ext/CurrencyNames_mni.h>

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

$MethodInfo _CurrencyNames_mni_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mni::*)()>(&CurrencyNames_mni::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mni_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mni",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mni_MethodInfo_
};

$Object* allocate$CurrencyNames_mni($Class* clazz) {
	return $of($alloc(CurrencyNames_mni));
}

void CurrencyNames_mni::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mni::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u099c\u09bf\u09b2\u09bf\u09af\u09bc\u09be\u09a8 \u09b0\u09c7\u09af\u09bc\u09be\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u099a\u09be\u0987\u09a8\u09bf\u099c \u09af\u09bc\u09c1\u0986\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u09af\u09bc\u09c1\u09b0\u09cb"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u09ac\u09cd\u09b0\u09bf\u099f\u09bf\u09b6 \u09aa\u09be\u0989\u09a8\u09cd\u09a6"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0987\u09a8\u09cd\u09a6\u09bf\u09af\u09bc\u09be\u09a8 \u09b0\u09c1\u09aa\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf\u099c \u09af\u09bc\u09c7\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u09b0\u09c1\u09b8\u09bf\u09af\u09bc\u09be\u09a8 \u09b0\u09c1\u09ac\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u09af\u09bc\u09c1 \u098f\u09b8 \u09a6\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u09ae\u09b6\u0995\u0996\u0982\u09a6\u09ac\u09be \u0995\u09b0\u09c7\u09a8\u09cd\u09b8\u09bf"_s)
		})
	}));
	return data;
}

CurrencyNames_mni::CurrencyNames_mni() {
}

$Class* CurrencyNames_mni::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mni, name, initialize, &_CurrencyNames_mni_ClassInfo_, allocate$CurrencyNames_mni);
	return class$;
}

$Class* CurrencyNames_mni::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun