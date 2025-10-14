#include <sun/util/resources/cldr/ext/CurrencyNames_sat.h>

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

$MethodInfo _CurrencyNames_sat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sat::*)()>(&CurrencyNames_sat::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sat",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sat_MethodInfo_
};

$Object* allocate$CurrencyNames_sat($Class* clazz) {
	return $of($alloc(CurrencyNames_sat));
}

void CurrencyNames_sat::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sat::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u1c75\u1c68\u1c5f\u1c61\u1c64\u1c5e\u1c64\u1c6d\u1c5f\u1c71 \u1c68\u1c64\u1c6d\u1c5f\u1c79\u1c5e"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u1c6a\u1c64\u1c71\u1c64 \u1c6d\u1c69\u1c63\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u1c6d\u1c69\u1c68\u1c5a"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u1c75\u1c68\u1c64\u1c74\u1c64\u1c65 \u1c6f\u1c5f\u1c63\u1c69\u1c78\u1c70"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u1c65\u1c64\u1c67\u1c5a\u1c5b \u1c68\u1c6e\u1c71\u1c5f\u1c5c \u1c74\u1c5f\u1c60\u1c5f"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u1c61\u1c5f\u1c6f\u1c5f\u1c71\u1c64 \u1c6d\u1c6e\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u1c68\u1c69\u1c65\u1c64 \u1c68\u1c69\u1c75\u1c5f\u1c79\u1c5e"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u1c6d\u1c69\u1c6e\u1c65 \u1c70\u1c5a\u1c5e\u1c5f\u1c68"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u1c75\u1c5f\u1c5d\u1c69\u1c68\u1c69\u1c62 \u1c60\u1c5f\u1c68\u1c6e\u1c71\u1c65\u1c64"_s)
		})
	}));
	return data;
}

CurrencyNames_sat::CurrencyNames_sat() {
}

$Class* CurrencyNames_sat::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sat, name, initialize, &_CurrencyNames_sat_ClassInfo_, allocate$CurrencyNames_sat);
	return class$;
}

$Class* CurrencyNames_sat::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun