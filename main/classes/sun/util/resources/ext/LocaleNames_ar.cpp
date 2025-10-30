#include <sun/util/resources/ext/LocaleNames_ar.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ar::*)()>(&LocaleNames_ar::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ar_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ar",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ar_MethodInfo_
};

$Object* allocate$LocaleNames_ar($Class* clazz) {
	return $of($alloc(LocaleNames_ar));
}

void LocaleNames_ar::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ar::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0627\u0644\u0625\u0645\u0627\u0631\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0627\u0644\u0628\u062d\u0631\u064a\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0627\u0644\u062c\u0632\u0627\u0626\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0645\u0635\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0627\u0644\u0639\u0631\u0627\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0627\u0644\u0623\u0631\u062f\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u0627\u0644\u0643\u0648\u064a\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u0644\u0628\u0646\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u0644\u064a\u0628\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u0627\u0644\u0645\u063a\u0631\u0628"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0633\u0644\u0637\u0646\u0629 \u0639\u0645\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u0642\u0637\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0627\u0644\u0633\u0639\u0648\u062f\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0627\u0644\u0633\u0648\u062f\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0633\u0648\u0631\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u062a\u0648\u0646\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0627\u0644\u064a\u0645\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0627\u0644\u0639\u0631\u0628\u064a\u0629"_s)
		})
	});
}

LocaleNames_ar::LocaleNames_ar() {
}

$Class* LocaleNames_ar::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ar, name, initialize, &_LocaleNames_ar_ClassInfo_, allocate$LocaleNames_ar);
	return class$;
}

$Class* LocaleNames_ar::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun