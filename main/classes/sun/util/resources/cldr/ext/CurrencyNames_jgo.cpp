#include <sun/util/resources/cldr/ext/CurrencyNames_jgo.h>

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

$MethodInfo _CurrencyNames_jgo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_jgo::*)()>(&CurrencyNames_jgo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_jgo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_jgo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_jgo_MethodInfo_
};

$Object* allocate$CurrencyNames_jgo($Class* clazz) {
	return $of($alloc(CurrencyNames_jgo));
}

void CurrencyNames_jgo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_jgo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Nd\u0254\u0301la-Kanand\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0244\u0301l\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Nd\u0254\u0301la-Am\u025bl\u00eek"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"F\u025bl\u00e2\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"nt\u025b-\u014bk\u00e1p yi p\u025b\u0301 k\u00e1 k\u025b\u0301 j\u00edn\u025b"_s)
		})
	}));
	return data;
}

CurrencyNames_jgo::CurrencyNames_jgo() {
}

$Class* CurrencyNames_jgo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_jgo, name, initialize, &_CurrencyNames_jgo_ClassInfo_, allocate$CurrencyNames_jgo);
	return class$;
}

$Class* CurrencyNames_jgo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun