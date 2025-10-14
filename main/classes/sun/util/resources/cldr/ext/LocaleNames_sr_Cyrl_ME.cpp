#include <sun/util/resources/cldr/ext/LocaleNames_sr_Cyrl_ME.h>

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

$MethodInfo _LocaleNames_sr_Cyrl_ME_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sr_Cyrl_ME::*)()>(&LocaleNames_sr_Cyrl_ME::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sr_Cyrl_ME_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Cyrl_ME",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Cyrl_ME_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Cyrl_ME($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Cyrl_ME));
}

void LocaleNames_sr_Cyrl_ME::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Cyrl_ME::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0411\u0458\u0435\u043b\u043e\u0440\u0443\u0441\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u041a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0427\u0435\u0448\u043a\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u040a\u0435\u043c\u0430\u0447\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u041a\u0438\u0442\u0441 \u0438 \u041d\u0435\u0432\u0438\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u041f\u0458\u0435\u0440 \u0438 \u041c\u0438\u043a\u0435\u043b\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0420\u0435\u0443\u043d\u0438\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u041c\u0430\u045a\u0430 \u0443\u0434\u0430\u0459\u0435\u043d\u0430 \u043e\u0441\u0442\u0440\u0432\u0430 \u0421\u0410\u0414"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u0412\u0438\u043d\u0441\u0435\u043d\u0442 \u0438 \u0413\u0440\u0435\u043d\u0430\u0434\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0414\u0458\u0435\u0432\u0438\u0447\u0430\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0410\u043c\u0435\u0440\u0438\u0447\u043a\u0430 \u0414\u0458\u0435\u0432\u0438\u0447\u0430\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0431\u0458\u0435\u043b\u043e\u0440\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u0431\u0430\u043c\u0430\u043d\u0430\u043d\u043a\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0431\u0430\u043d\u0433\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u0444\u0443\u043b\u0430\u0445"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u0445\u0430\u0438\u045b\u0430\u043d\u0441\u043a\u0438 \u043a\u0440\u0435\u043e\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u043b\u0430\u043e\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u0438\u0441\u0438\u043a\u043e\u0441\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0438\u0441\u0438\u0437\u0443\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u043c\u0430\u043f\u0443\u0434\u0443\u043d\u0433\u0443\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u043c\u043e\u0445\u043e\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u043d\u2019\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u0458\u0443\u0436\u043d\u0438 \u0448\u0438\u043b\u0445\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u0446\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u043e\u0430\u0442\u043b\u0430\u0441\u043a\u0438 \u0442\u0430\u043c\u0430\u0448\u0435\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438 \u043c\u0430\u0440\u043e\u043a\u0430\u043d\u0441\u043a\u0438 \u0442\u0430\u043c\u0430\u0448\u0435\u043a"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Cyrl_ME::LocaleNames_sr_Cyrl_ME() {
}

$Class* LocaleNames_sr_Cyrl_ME::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Cyrl_ME, name, initialize, &_LocaleNames_sr_Cyrl_ME_ClassInfo_, allocate$LocaleNames_sr_Cyrl_ME);
	return class$;
}

$Class* LocaleNames_sr_Cyrl_ME::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun