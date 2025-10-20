#include <sun/util/resources/cldr/ext/LocaleNames_uz_Arab.h>

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

$MethodInfo _LocaleNames_uz_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_uz_Arab::*)()>(&LocaleNames_uz_Arab::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_uz_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_uz_Arab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_uz_Arab_MethodInfo_
};

$Object* allocate$LocaleNames_uz_Arab($Class* clazz) {
	return $of($alloc(LocaleNames_uz_Arab));
}

void LocaleNames_uz_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_uz_Arab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0627\u0641\u063a\u0627\u0646\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u062f\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u067e\u0634\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0627\u0648\u0632\u0628\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0639\u0631\u0628\u06cc"_s)
		})
	}));
	return data;
}

LocaleNames_uz_Arab::LocaleNames_uz_Arab() {
}

$Class* LocaleNames_uz_Arab::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_uz_Arab, name, initialize, &_LocaleNames_uz_Arab_ClassInfo_, allocate$LocaleNames_uz_Arab);
	return class$;
}

$Class* LocaleNames_uz_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun