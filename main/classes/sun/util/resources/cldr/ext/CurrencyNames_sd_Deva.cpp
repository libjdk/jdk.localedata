#include <sun/util/resources/cldr/ext/CurrencyNames_sd_Deva.h>

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

$MethodInfo _CurrencyNames_sd_Deva_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sd_Deva::*)()>(&CurrencyNames_sd_Deva::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sd_Deva_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sd_Deva",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sd_Deva_MethodInfo_
};

$Object* allocate$CurrencyNames_sd_Deva($Class* clazz) {
	return $of($alloc(CurrencyNames_sd_Deva));
}

void CurrencyNames_sd_Deva::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sd_Deva::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u092c\u0930\u091c\u093f\u0932\u093f\u092f\u0928 \u0930\u093f\u092f\u0932\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u091a\u0940\u0928\u093e \u092f\u0941\u0906\u0928\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u092f\u0942\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u092c\u0930\u0924\u093e\u0928\u0935\u0940 \u092a\u093e\u0909\u0902\u0921\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0939\u093f\u0902\u0926\u0941\u0938\u094d\u0924\u093e\u0928\u0940 \u0930\u0941\u092a\u092f\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928\u0940 \u092f\u0947\u0928\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0930\u0936\u093f\u092f\u0928\u0941 \u0930\u0941\u092c\u0932\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u092f\u0942\u090f\u0938 \u091c\u094b \u0921\u0949\u0932\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0905\u0923\u0935\u093e\u0915\u0941\u092b\u0941 \u091a\u093e\u0932\u0942 \u0938\u093f\u0915\u094d\u0915\u094b"_s)
		})
	}));
	return data;
}

CurrencyNames_sd_Deva::CurrencyNames_sd_Deva() {
}

$Class* CurrencyNames_sd_Deva::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sd_Deva, name, initialize, &_CurrencyNames_sd_Deva_ClassInfo_, allocate$CurrencyNames_sd_Deva);
	return class$;
}

$Class* CurrencyNames_sd_Deva::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun