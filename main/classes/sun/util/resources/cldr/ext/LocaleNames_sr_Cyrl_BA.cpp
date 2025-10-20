#include <sun/util/resources/cldr/ext/LocaleNames_sr_Cyrl_BA.h>

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

$MethodInfo _LocaleNames_sr_Cyrl_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sr_Cyrl_BA::*)()>(&LocaleNames_sr_Cyrl_BA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sr_Cyrl_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Cyrl_BA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Cyrl_BA_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Cyrl_BA($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Cyrl_BA));
}

void LocaleNames_sr_Cyrl_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Cyrl_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0441\u0432\u0438\u0458\u0435\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u043e\u0430\u043c\u0435\u0440\u0438\u0447\u043a\u0438 \u043a\u043e\u043d\u0442\u0438\u043d\u0435\u043d\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0438 \u0408\u0443\u0436\u043d\u0430 \u0410\u043c\u0435\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0410\u043c\u0435\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0415\u0432\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u043e\u0441\u0442\u0440\u0432\u043e \u0410\u0441\u0435\u043d\u0441\u0438\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0411\u0458\u0435\u043b\u043e\u0440\u0443\u0441\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u041a\u043e\u043a\u043e\u0441\u043e\u0432\u0430 (\u041a\u0438\u043b\u0438\u043d\u0433) \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u041a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u043e\u0441\u0442\u0440\u0432\u043e \u041a\u043b\u0438\u043f\u0435\u0440\u0442\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u041a\u0430\u0431\u043e \u0412\u0435\u0440\u0434\u0435"_s)
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
			$of("GS"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u040f\u043e\u0440\u045f\u0438\u0458\u0430 \u0438 \u0408\u0443\u0436\u043d\u0430 \u0421\u0435\u043d\u0434\u0432\u0438\u0447\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u0413\u0432\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0425\u043e\u043d\u0433\u043a\u043e\u043d\u0433 (\u0421\u0410\u041e \u041a\u0438\u043d\u0435)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u043e\u0441\u0442\u0440\u0432\u043e \u0425\u0435\u0440\u0434 \u0438 \u043e\u0441\u0442\u0440\u0432\u0430 \u041c\u0430\u043a\u0434\u043e\u043d\u0430\u043b\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u041a\u0438\u0442\u0441 \u0438 \u041d\u0435\u0432\u0438\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u041a\u043e\u0440\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u0421\u0410\u0420 \u041c\u0430\u043a\u0430\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u041c\u0430\u0440\u0438\u0458\u0430\u043d\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u043e\u0441\u0442\u0440\u0432\u043e \u041d\u043e\u0440\u0444\u043e\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u041d\u0438\u0458\u0443\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u041f\u0458\u0435\u0440 \u0438 \u041c\u0438\u043a\u0435\u043b\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u043f\u0430\u043b\u0435\u0441\u0442\u0438\u043d\u0441\u043a\u0435 \u0442\u0435\u0440\u0438\u0442\u043e\u0440\u0438\u0458\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0420\u0435\u0443\u043d\u0438\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u0421\u043f\u043e\u0459\u043d\u0430 \u043e\u0441\u0442\u0440\u0432\u0430 \u0421\u0410\u0414"_s)
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
			$of("de"_s),
			$of(u"\u045a\u0435\u043c\u0430\u0447\u043a\u0438"_s)
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
			$of("nd"_s),
			$of(u"\u0441\u0458\u0435\u0432\u0435\u0440\u043d\u0438 \u043d\u0434\u0435\u0431\u0435\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u0441\u0458\u0435\u0432\u0435\u0440\u043d\u0438 \u0441\u0430\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0441\u0438\u043d\u0445\u0430\u043b\u0441\u043a\u0438"_s)
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
			$of("gsw"_s),
			$of(u"\u045a\u0435\u043c\u0430\u0447\u043a\u0438 (\u0428\u0432\u0430\u0458\u0446\u0430\u0440\u0441\u043a\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u0441\u0458\u0435\u0432\u0435\u0440\u043d\u0438 \u043b\u0443\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u043c\u043e\u0445\u043e\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u043d\u0438\u0441\u043a\u043e\u045a\u0435\u043c\u0430\u0447\u043a\u0438"_s)
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
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u0440\u0435\u0434\u043e\u0441\u043b\u0438\u0458\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u0441\u0438\u0441\u0442\u0435\u043c \u043c\u0458\u0435\u0440\u043d\u0438\u0445 \u0458\u0435\u0434\u0438\u043d\u0438\u0446\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u043c\u0458\u0430\u043d\u043c\u0430\u0440\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u043f\u043e\u0434\u0440\u0430\u0437\u0443\u043c\u0438\u0458\u0435\u0432\u0430\u043d\u0438 Unicode \u0440\u0435\u0434\u043e\u0441\u043b\u0438\u0458\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u043f\u0440\u0435\u0442\u0440\u0430\u0433\u0430 \u043e\u043f\u0448\u0442\u0435 \u043d\u0430\u043c\u0458\u0435\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438 \u0440\u0435\u0434\u043e\u0441\u043b\u0438\u0458\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Cyrl_BA::LocaleNames_sr_Cyrl_BA() {
}

$Class* LocaleNames_sr_Cyrl_BA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Cyrl_BA, name, initialize, &_LocaleNames_sr_Cyrl_BA_ClassInfo_, allocate$LocaleNames_sr_Cyrl_BA);
	return class$;
}

$Class* LocaleNames_sr_Cyrl_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun