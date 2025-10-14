#include <sun/util/resources/cldr/ext/CurrencyNames_en_001.h>

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

$MethodInfo _CurrencyNames_en_001_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_001::*)()>(&CurrencyNames_en_001::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_001_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_001",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_001_MethodInfo_
};

$Object* allocate$CurrencyNames_en_001($Class* clazz) {
	return $of($alloc(CurrencyNames_en_001));
}

void CurrencyNames_en_001::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_001::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"JP\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermudian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Belarusian New Rouble (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarusian Rouble"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Belarusian Rouble (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latvian Rouble"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Philippine Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Russian Rouble"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Russian Rouble (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("St Helena Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("Tajikistani Rouble"_s)
		})
	}));
	return data;
}

CurrencyNames_en_001::CurrencyNames_en_001() {
}

$Class* CurrencyNames_en_001::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_001, name, initialize, &_CurrencyNames_en_001_ClassInfo_, allocate$CurrencyNames_en_001);
	return class$;
}

$Class* CurrencyNames_en_001::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun