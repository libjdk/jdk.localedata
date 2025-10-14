#include <sun/util/resources/cldr/ext/CurrencyNames_ur_IN.h>

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

$MethodInfo _CurrencyNames_ur_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ur_IN::*)()>(&CurrencyNames_ur_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ur_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ur_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ur_IN_MethodInfo_
};

$Object* allocate$CurrencyNames_ur_IN($Class* clazz) {
	return $of($alloc(CurrencyNames_ur_IN));
}

void CurrencyNames_ur_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ur_IN::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("PKR"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u06a9\u0648\u0633\u0679\u0627 \u0631\u06cc\u06a9\u0627 \u06a9\u0648\u0644\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u0642\u0627\u0628\u0644 \u0645\u0646\u062a\u0642\u0644\u06cc \u06a9\u06cc\u0648\u0628\u0627\u0626\u06cc \u067e\u06cc\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u06a9\u06cc\u0648\u0628\u0627\u0626\u06cc \u067e\u06cc\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u06a9\u06cc\u067e \u0648\u0631\u0688\u06cc \u0627\u0633\u06a9\u06cc\u0648\u0688\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0628\u0631\u0637\u0627\u0646\u0648\u06cc \u067e\u0627\u0648\u0646\u0688 \u0633\u0679\u0631\u0644\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u06af\u06be\u0627\u0646\u06cc \u0633\u06cc\u0688\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0633\u0627\u0645\u0648\u0622\u0626\u06cc \u0679\u0627\u0644\u0627"_s)
		})
	}));
	return data;
}

CurrencyNames_ur_IN::CurrencyNames_ur_IN() {
}

$Class* CurrencyNames_ur_IN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ur_IN, name, initialize, &_CurrencyNames_ur_IN_ClassInfo_, allocate$CurrencyNames_ur_IN);
	return class$;
}

$Class* CurrencyNames_ur_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun