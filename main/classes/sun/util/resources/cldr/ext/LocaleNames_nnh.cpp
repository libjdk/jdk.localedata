#include <sun/util/resources/cldr/ext/LocaleNames_nnh.h>

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

$MethodInfo _LocaleNames_nnh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_nnh::*)()>(&LocaleNames_nnh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_nnh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_nnh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_nnh_MethodInfo_
};

$Object* allocate$LocaleNames_nnh($Class* clazz) {
	return $of($alloc(LocaleNames_nnh));
}

void LocaleNames_nnh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nnh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"K\u00e0mal\u00fbm"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"nz\u01cem\u0254\u0302\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ngil\u00eds\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Shw\u00f3\u014b\u00f2 menkesa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"fela\u014bs\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Shw\u00f3\u014b\u00f2 p\u0289a mbas\u01ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"Shw\u00f3\u014b\u00f2 pamom"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"Shw\u00f3\u014b\u00f2 p\u0289a nzsek\u00e0\u02bca"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"Shw\u00f3\u014b\u00f2 pafud"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"Shw\u00f3\u014b\u00f2 p\u0289\u0300a njinikom"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"Shw\u00f3\u014b\u00f2 pak\u0254si"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"Shw\u00f3\u014b\u00f2 mbulu"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"Shw\u00f3\u014b\u00f2 ng\u00e1\u014bt\u00ff\u0254\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Shw\u00f3\u014b\u00f2 p\u0289a Y\u0254\u0254nmendi"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Shw\u00f3\u014b\u00f2 p\u0289a sh\u00ff\u00f3 B\u025bgt\u00f9a"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Shw\u00f3\u014b\u00f2 ngiemb\u0254\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Shw\u00f3\u014b\u00f2 p\u0289a sh\u00ff\u00f3 Mbaf\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"Shw\u00f3\u014b\u00f2 Tsa\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"f\u0289\u0300\u02bc nj\u00ff\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"nk\u00e1b"_s)
		})
	}));
	return data;
}

LocaleNames_nnh::LocaleNames_nnh() {
}

$Class* LocaleNames_nnh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nnh, name, initialize, &_LocaleNames_nnh_ClassInfo_, allocate$LocaleNames_nnh);
	return class$;
}

$Class* LocaleNames_nnh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun