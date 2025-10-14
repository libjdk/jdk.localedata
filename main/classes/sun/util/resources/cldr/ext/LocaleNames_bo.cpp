#include <sun/util/resources/cldr/ext/LocaleNames_bo.h>

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

$MethodInfo _LocaleNames_bo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_bo::*)()>(&LocaleNames_bo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_bo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bo_MethodInfo_
};

$Object* allocate$LocaleNames_bo($Class* clazz) {
	return $of($alloc(LocaleNames_bo));
}

void LocaleNames_bo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bo::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0f60\u0f5b\u0f58\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f53\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0f60\u0f47\u0f62\u0f0b\u0f58\u0f53\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0f51\u0f56\u0fb1\u0f72\u0f53\u0f0b\u0f47\u0f72\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f42\u0f62\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f40\u0fb2\u0f62\u0f0b\u0f63\u0f72\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u0f49\u0f72\u0f0b\u0f67\u0f7c\u0f44\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u0f63\u0fb7\u0f7c\u0f0b\u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u0f56\u0f63\u0f0b\u0f61\u0f74\u0f63\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0f68\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f66\u0f74\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0f68\u0f0b\u0f58\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u0f58\u0f72\u0f60\u0f72\u0f0b\u0f64\u0f7a\u0f66\u0f0b\u0f62\u0f9f\u0f7c\u0f42\u0f66\u0f0b\u0f58\u0f0b\u0f56\u0fb1\u0f74\u0f44\u0f0b\u0f56\u0f60\u0f72\u0f0b\u0f41\u0f7c\u0f62\u0f0b\u0f61\u0f74\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0f56\u0f7c\u0f51\u0f0b\u0f66\u0f90\u0f51\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0f62\u0fab\u0f7c\u0f44\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0f51\u0f56\u0fb1\u0f72\u0f53\u0f0b\u0f47\u0f72\u0f60\u0f72\u0f0b\u0f66\u0f90\u0f51\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0f67\u0f72\u0f53\u0f0b\u0f51\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u0f49\u0f72\u0f0b\u0f67\u0f7c\u0f44\u0f0b\u0f66\u0f90\u0f51\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u0f53\u0f7a\u0f0b\u0f54\u0f0b\u0f63\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0f68\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f66\u0f74\u0f0b\u0f66\u0f90\u0f51\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f66\u0f90\u0f51\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u0f5f\u0f0b\u0f5f\u0f60\u0f0b\u0f66\u0f90\u0f51\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f66\u0f62\u0f0b\u0f54\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f62\u0f99\u0f72\u0f44\u0f0b\u0f54\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u0f56\u0f7c\u0f51\u0f0b\u0f61\u0f72\u0f42\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0f66\u0f99\u0f53\u0f0b\u0f56\u0f62\u0f92\u0fb1\u0f74\u0f51\u0f0d \u0f61\u0f72\u0f42\u0f0b\u0f62\u0f72\u0f42\u0f66\u0f0b\u0f66\u0f74\u0f0b\u0f58\u0f0b\u0f56\u0f40\u0f7c\u0f51\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f5f\u0f72\u0f53\u0f0b\u0f50\u0f7c\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0f51\u0f56\u0fb1\u0f72\u0f53\u0f0b\u0f47\u0f72\u0f60\u0f72\u0f0b\u0f66\u0f90\u0f51\u0f0d (\u0f41\u0f7a\u0f0b\u0f53\u0f0b\u0f4c\u0f0b)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0f51\u0f56\u0fb1\u0f72\u0f53\u0f0b\u0f47\u0f72\u0f60\u0f72\u0f0b\u0f66\u0f90\u0f51\u0f0d (\u0f51\u0f56\u0fb1\u0f72\u0f53\u0f0b\u0f63\u0f53\u0f0b)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0f51\u0f56\u0fb1\u0f72\u0f53\u0f0b\u0f47\u0f72\u0f60\u0f72\u0f0b\u0f66\u0f90\u0f51\u0f0d (\u0f68\u0f0b\u0f62\u0f72\u0f0b)"_s)
		})
	}));
	return data;
}

LocaleNames_bo::LocaleNames_bo() {
}

$Class* LocaleNames_bo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bo, name, initialize, &_LocaleNames_bo_ClassInfo_, allocate$LocaleNames_bo);
	return class$;
}

$Class* LocaleNames_bo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun