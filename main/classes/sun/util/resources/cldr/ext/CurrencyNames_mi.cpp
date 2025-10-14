#include <sun/util/resources/cldr/ext/CurrencyNames_mi.h>

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

$MethodInfo _CurrencyNames_mi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mi::*)()>(&CurrencyNames_mi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mi_MethodInfo_
};

$Object* allocate$CurrencyNames_mi($Class* clazz) {
	return $of($alloc(CurrencyNames_mi));
}

void CurrencyNames_mi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mi::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("NZD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Parahi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Haina"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"P\u0101una Piritene"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rup\u012b Iniana"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Hapanihi"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"T\u0101ra o Aotearoa"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"R\u016bpera Ruhiana"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"T\u0101ra US"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Moni T\u0113 M\u014dhiotia"_s)
		})
	}));
	return data;
}

CurrencyNames_mi::CurrencyNames_mi() {
}

$Class* CurrencyNames_mi::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mi, name, initialize, &_CurrencyNames_mi_ClassInfo_, allocate$CurrencyNames_mi);
	return class$;
}

$Class* CurrencyNames_mi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun