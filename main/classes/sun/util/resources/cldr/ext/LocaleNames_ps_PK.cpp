#include <sun/util/resources/cldr/ext/LocaleNames_ps_PK.h>

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

$MethodInfo _LocaleNames_ps_PK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ps_PK::*)()>(&LocaleNames_ps_PK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ps_PK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ps_PK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ps_PK_MethodInfo_
};

$Object* allocate$LocaleNames_ps_PK($Class* clazz) {
	return $of($alloc(LocaleNames_ps_PK));
}

void LocaleNames_ps_PK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ps_PK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0627\u0645\u0631\u064a\u06a9\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u0641\u0644\u0633\u0637\u064a\u0646 \u0633\u064a\u0645\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u062f \u062a\u0631\u06a9\u06cc\u06d2 \u0627\u0648 \u06a9\u06cc\u06a9\u0627\u0633\u0648 \u067c\u0627\u067e\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u062f \u0641\u0631\u0627\u0646\u0633\u06d2 \u062c\u0646\u0648\u0628\u064a \u0633\u06cc\u0645\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0641\u0627\u0631\u0648\u0626\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u0646\u0627\u0631\u0648\u06d2 \u0628\u0648\u06a9\u0645\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u0644\u0648\u0693\u06d2 \u0633\u0631\u0628\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u062e\u0627\u0633\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0646\u0648\u06d2 \u0645\u0639\u064a\u0627\u0631\u064a \u0639\u0631\u0628\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u063a\u0681\u06d0\u062f\u0644\u06d2 \u0639\u0631\u0628\u064a \u06d4 \u0627\u064a\u0646\u0689\u064a\u06a9 \u0639\u062f\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0645\u0639\u064a\u0627\u0631\u064a \u062f \u0644\u067c\u06d2 \u062a\u0631\u062a\u064a\u0628"_s)
		})
	}));
	return data;
}

LocaleNames_ps_PK::LocaleNames_ps_PK() {
}

$Class* LocaleNames_ps_PK::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ps_PK, name, initialize, &_LocaleNames_ps_PK_ClassInfo_, allocate$LocaleNames_ps_PK);
	return class$;
}

$Class* LocaleNames_ps_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun