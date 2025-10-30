#include <sun/util/resources/cldr/ext/LocaleNames_pa_Arab.h>

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

$MethodInfo _LocaleNames_pa_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_pa_Arab::*)()>(&LocaleNames_pa_Arab::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_pa_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_pa_Arab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_pa_Arab_MethodInfo_
};

$Object* allocate$LocaleNames_pa_Arab($Class* clazz) {
	return $of($alloc(LocaleNames_pa_Arab));
}

void LocaleNames_pa_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pa_Arab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u067e\u0627\u06a9\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u067e\u0646\u062c\u0627\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0639\u0631\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"\u0646\u0633\u062a\u0639\u0644\u06cc\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u06af\u064f\u0631\u0645\u064f\u06a9\u06be\u06cc"_s)
		})
	}));
	return data;
}

LocaleNames_pa_Arab::LocaleNames_pa_Arab() {
}

$Class* LocaleNames_pa_Arab::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pa_Arab, name, initialize, &_LocaleNames_pa_Arab_ClassInfo_, allocate$LocaleNames_pa_Arab);
	return class$;
}

$Class* LocaleNames_pa_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun