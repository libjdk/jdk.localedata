#include <sun/util/resources/cldr/ext/CurrencyNames_mai.h>

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

$MethodInfo _CurrencyNames_mai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mai::*)()>(&CurrencyNames_mai::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mai",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mai_MethodInfo_
};

$Object* allocate$CurrencyNames_mai($Class* clazz) {
	return $of($alloc(CurrencyNames_mai));
}

void CurrencyNames_mai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mai::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u092c\u094d\u0930\u093e\u091c\u093c\u0940\u0932\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u091a\u0940\u0928\u0940 \u092f\u0941\u0906\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u092f\u0942\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u092c\u094d\u0930\u093f\u091f\u093f\u0936 \u092a\u093e\u0909\u0902\u0921 \u0938\u094d\u091f\u0930\u094d\u0932\u093f\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u092d\u093e\u0930\u0924\u0940\u092f \u0930\u0941\u092a\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928\u0940 \u092f\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0930\u0942\u0938\u0940 \u0930\u0942\u092c\u0932"_s)
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

CurrencyNames_mai::CurrencyNames_mai() {
}

$Class* CurrencyNames_mai::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mai, name, initialize, &_CurrencyNames_mai_ClassInfo_, allocate$CurrencyNames_mai);
	return class$;
}

$Class* CurrencyNames_mai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun