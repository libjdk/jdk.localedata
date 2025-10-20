#include <sun/util/resources/cldr/ext/CurrencyNames_smn.h>

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

$MethodInfo _CurrencyNames_smn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_smn::*)()>(&CurrencyNames_smn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_smn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_smn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_smn_MethodInfo_
};

$Object* allocate$CurrencyNames_smn($Class* clazz) {
	return $of($alloc(CurrencyNames_smn));
}

void CurrencyNames_smn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_smn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Tanska ruvn\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Eesti ruvn\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Suom\u00e2 m\u00e4rkki"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Island ruvn\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latvia ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Taa\u017e\u00e2 ruvn\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Ruot\u00e2 ruvn\u00e2"_s)
		})
	}));
	return data;
}

CurrencyNames_smn::CurrencyNames_smn() {
}

$Class* CurrencyNames_smn::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_smn, name, initialize, &_CurrencyNames_smn_ClassInfo_, allocate$CurrencyNames_smn);
	return class$;
}

$Class* CurrencyNames_smn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun