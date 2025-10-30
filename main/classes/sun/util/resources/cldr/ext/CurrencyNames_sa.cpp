#include <sun/util/resources/cldr/ext/CurrencyNames_sa.h>

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

$MethodInfo _CurrencyNames_sa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sa::*)()>(&CurrencyNames_sa::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sa",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sa_MethodInfo_
};

$Object* allocate$CurrencyNames_sa($Class* clazz) {
	return $of($alloc(CurrencyNames_sa));
}

void CurrencyNames_sa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sa::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u092c\u094d\u0930\u093e\u091c\u0940\u0932\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u091a\u0940\u0928\u0940 \u092f\u0941\u0906\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u092b\u093f\u0930\u0919\u094d\u0917\u093f\u0928\u094d \u092e\u0941\u0926\u094d\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0906\u0919\u094d\u0917\u094d\u0932\u0926\u0947\u0936\u0940\u092f\u0903 \u092a\u093e\u0909\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u092d\u093e\u0930\u0924\u0940\u092f \u0930\u0942\u092a\u094d\u092f\u0915\u092e\u094d"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928\u0940 \u092f\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0930\u0937\u094d\u092f\u0926\u0947\u0936\u0940\u092f \u0930\u0942\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u092f\u0942\u090f\u0938 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0905\u091c\u094d\u091e\u093e\u0924 \u092e\u0941\u0926\u094d\u0930\u093e"_s)
		})
	}));
	return data;
}

CurrencyNames_sa::CurrencyNames_sa() {
}

$Class* CurrencyNames_sa::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sa, name, initialize, &_CurrencyNames_sa_ClassInfo_, allocate$CurrencyNames_sa);
	return class$;
}

$Class* CurrencyNames_sa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun