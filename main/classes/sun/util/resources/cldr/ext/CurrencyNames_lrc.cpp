#include <sun/util/resources/cldr/ext/CurrencyNames_lrc.h>

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

$MethodInfo _CurrencyNames_lrc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_lrc::*)()>(&CurrencyNames_lrc::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_lrc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lrc",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lrc_MethodInfo_
};

$Object* allocate$CurrencyNames_lrc($Class* clazz) {
	return $of($alloc(CurrencyNames_lrc));
}

void CurrencyNames_lrc::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lrc::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IQD"_s),
			$of(u"\u062f.\u0639.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0631\u0626\u0627\u0644 \u0628\u0626\u0631\u0626\u0632\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u06cc\u0648\u0627\u0646 \u0686\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u06cc\u0648\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u067e\u0648\u0646\u062f \u0628\u0626\u0631\u06cc\u062a\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0631\u0648\u0659\u067e\u06cc\u0647 \u0647\u0626\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u06cc\u0626\u0646 \u062c\u0627\u067e\u0648\u0659\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0631\u0648\u0659\u0628\u0644 \u0631\u0648\u0659\u0633\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u067e\u06cc\u0644 \u0646\u0627\u062f\u06cc\u0627\u0631"_s)
		})
	}));
	return data;
}

CurrencyNames_lrc::CurrencyNames_lrc() {
}

$Class* CurrencyNames_lrc::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lrc, name, initialize, &_CurrencyNames_lrc_ClassInfo_, allocate$CurrencyNames_lrc);
	return class$;
}

$Class* CurrencyNames_lrc::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun