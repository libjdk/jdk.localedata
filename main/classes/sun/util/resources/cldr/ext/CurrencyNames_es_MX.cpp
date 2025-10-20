#include <sun/util/resources/cldr/ext/CurrencyNames_es_MX.h>

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

$MethodInfo _CurrencyNames_es_MX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_es_MX::*)()>(&CurrencyNames_es_MX::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_es_MX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_MX",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_MX_MethodInfo_
};

$Object* allocate$CurrencyNames_es_MX($Class* clazz) {
	return $of($alloc(CurrencyNames_es_MX));
}

void CurrencyNames_es_MX::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_MX::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRU"_s)
		}),
		$$new($ObjectArray, {
			$of("MRU"_s),
			$of("UM"_s)
		}),
		$$new($ObjectArray, {
			$of("MXN"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"taka banglades\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ngultrum butan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"som kirgu\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel camboyano"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rupia de Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("dobra santotomense"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tailand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambiano"_s)
		})
	}));
	return data;
}

CurrencyNames_es_MX::CurrencyNames_es_MX() {
}

$Class* CurrencyNames_es_MX::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_MX, name, initialize, &_CurrencyNames_es_MX_ClassInfo_, allocate$CurrencyNames_es_MX);
	return class$;
}

$Class* CurrencyNames_es_MX::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun