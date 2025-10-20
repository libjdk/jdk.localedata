#include <sun/util/resources/cldr/ext/LocaleNames_ar_SA.h>

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

$MethodInfo _LocaleNames_ar_SA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ar_SA::*)()>(&LocaleNames_ar_SA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ar_SA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ar_SA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ar_SA_MethodInfo_
};

$Object* allocate$LocaleNames_ar_SA($Class* clazz) {
	return $of($alloc(LocaleNames_ar_SA));
}

void LocaleNames_ar_SA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ar_SA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u062c\u0632\u064a\u0631\u0629 \u0623\u0633\u064a\u0646\u0634\u064a\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0633\u0628\u062a\u0629 \u0648\u0645\u0644\u064a\u0644\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u0645\u0627\u0643\u0627\u0648 \u0627\u0644\u0635\u064a\u0646\u064a\u0629 (\u0645\u0646\u0637\u0642\u0629 \u0625\u062f\u0627\u0631\u064a\u0629 \u062e\u0627\u0635\u0629)"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u0645\u0648\u0646\u062a\u064a\u0633\u064a\u0631\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0623\u0648\u0631\u0648\u063a\u0648\u0627\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0627\u0644\u063a\u0648\u0631\u0627\u0646\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u0627\u0644\u0644\u0627\u0648\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u0627\u0644\u0643\u0631\u0648\u0627\u062a\u064a\u0629 \u0627\u0644\u0635\u0631\u0628\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0627\u0644\u0633\u0648\u0627\u062d\u064a\u0644\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u0627\u0644\u062a\u064a\u0644\u0648\u062c\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u0627\u0644\u062a\u064a\u063a\u0631\u064a\u0646\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u0627\u0644\u0645\u0627\u0628\u0648\u062f\u0648\u0646\u062c\u0648\u0646\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u0635\u0648\u0631\u0628\u064a\u0627 \u0627\u0644\u0639\u0644\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u0633\u0627\u0645\u064a \u0627\u0644\u062c\u0646\u0648\u0628\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u0627\u0644\u0633\u0648\u0627\u062d\u064a\u0644\u064a\u0629 \u0627\u0644\u0643\u0648\u0646\u063a\u0648\u0644\u064a\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0627\u0644\u0639\u0631\u0628\u064a\u0629 \u0627\u0644\u0631\u0633\u0645\u064a\u0629 \u0627\u0644\u062d\u062f\u064a\u062b\u0629"_s)
		})
	}));
	return data;
}

LocaleNames_ar_SA::LocaleNames_ar_SA() {
}

$Class* LocaleNames_ar_SA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ar_SA, name, initialize, &_LocaleNames_ar_SA_ClassInfo_, allocate$LocaleNames_ar_SA);
	return class$;
}

$Class* LocaleNames_ar_SA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun