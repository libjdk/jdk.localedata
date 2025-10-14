#include <sun/util/resources/cldr/ext/CurrencyNames_to.h>

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

$MethodInfo _CurrencyNames_to_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_to::*)()>(&CurrencyNames_to::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_to_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_to",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_to_MethodInfo_
};

$Object* allocate$CurrencyNames_to($Class* clazz) {
	return $of($alloc(CurrencyNames_to));
}

void CurrencyNames_to::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_to::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AUD$"_s)
		}),
		$$new($ObjectArray, {
			$of("NZD"_s),
			$of("NZD$"_s)
		}),
		$$new($ObjectArray, {
			$of("TOP"_s),
			$of("T$"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Tola faka\u02bbaositel\u0113lia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u02bbEulo"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Tola fakafisi"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Tola fakanu\u02bbusila"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina fakapapuaniukini"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Tola faka\u02bbotusolomone"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Pa\u02bbanga fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu fakavanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Tala fakaha\u02bbamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Falaniki fakapasifika"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Pa\u2019anga Ta\u2019e\u2019ilo"_s)
		})
	}));
	return data;
}

CurrencyNames_to::CurrencyNames_to() {
}

$Class* CurrencyNames_to::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_to, name, initialize, &_CurrencyNames_to_ClassInfo_, allocate$CurrencyNames_to);
	return class$;
}

$Class* CurrencyNames_to::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun