#include <sun/util/resources/cldr/ext/CurrencyNames_es_419.h>

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

$MethodInfo _CurrencyNames_es_419_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_es_419::*)()>(&CurrencyNames_es_419::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_es_419_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_419",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_419_MethodInfo_
};

$Object* allocate$CurrencyNames_es_419($Class* clazz) {
	return $of($alloc(CurrencyNames_es_419));
}

void CurrencyNames_es_419::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_419::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of("EUR"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of("THB"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("USD"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of("VND"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"flor\u00edn de las Antillas Neerlandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"d\u00f3lar de Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"kwacha malau\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"c\u00f3rdoba nicarag\u00fcense"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("baht tailandes"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som uzbeko"_s)
		})
	}));
	return data;
}

CurrencyNames_es_419::CurrencyNames_es_419() {
}

$Class* CurrencyNames_es_419::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_419, name, initialize, &_CurrencyNames_es_419_ClassInfo_, allocate$CurrencyNames_es_419);
	return class$;
}

$Class* CurrencyNames_es_419::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun