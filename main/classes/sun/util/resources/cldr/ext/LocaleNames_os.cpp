#include <sun/util/resources/cldr/ext/LocaleNames_os.h>

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

$MethodInfo _LocaleNames_os_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_os::*)()>(&LocaleNames_os::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_os_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_os",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_os_MethodInfo_
};

$Object* allocate$LocaleNames_os($Class* clazz) {
	return $of($alloc(LocaleNames_os));
}

void LocaleNames_os::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_os::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0414\u0443\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0410\u0444\u0440\u0438\u043a\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u041e\u043a\u0435\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0410\u043c\u0435\u0440\u0438\u043a\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0410\u0437\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u0415\u0432\u0440\u043e\u043f\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u041a\u0438\u0442\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0413\u0435\u0440\u043c\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0421\u0442\u044b\u0440 \u0411\u0440\u0438\u0442\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0413\u0443\u044b\u0440\u0434\u0437\u044b\u0441\u0442\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0418\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0418\u0442\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u042f\u043f\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0423\u04d5\u0440\u04d5\u0441\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0410\u0418\u0428"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u041d\u04d5\u0437\u043e\u043d\u0433\u04d5 \u0431\u04d5\u0441\u0442\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0430\u0431\u0445\u0430\u0437\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u0430\u0432\u0435\u0441\u0442\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0430\u0444\u0440\u0438\u043a\u0430\u0430\u043d\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0430\u0440\u0430\u0431\u0431\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u0430\u0432\u0430\u0439\u0440\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0442\u04d5\u0442\u04d5\u0439\u0440\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0431\u0430\u0448\u043a\u0438\u0440\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0431\u043e\u043b\u0433\u0430\u0439\u0440\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0431\u043e\u0441\u043d\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u043a\u0430\u0442\u0430\u043b\u0430\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u0446\u04d5\u0446\u04d5\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0447\u0435\u0445\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u0447\u0443\u0432\u0430\u0448\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0434\u0430\u043d\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u043d\u0435\u043c\u044b\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0431\u0435\u0440\u0434\u0437\u0435\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0435\u0441\u043f\u0435\u0440\u0430\u043d\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0438\u0441\u043f\u0430\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0435\u0441\u0442\u043e\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0431\u0430\u0441\u043a\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u043f\u0435\u0440\u0441\u0430\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0444\u0438\u043d\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0444\u0438\u0434\u0436\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0444\u0430\u0440\u0435\u0440\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0444\u0440\u0430\u043d\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0438\u0440\u043b\u0430\u043d\u0434\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0443\u0438\u0440\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0445\u043e\u0440\u0432\u0430\u0442\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0432\u0435\u043d\u0433\u0435\u0440\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0441\u043e\u043c\u0438\u0445\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0438\u0442\u0430\u043b\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u044f\u043f\u043e\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0433\u0443\u044b\u0440\u0434\u0437\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u043a\u0443\u0440\u0434\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u043b\u0430\u0442\u0438\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u043c\u04d5\u0447\u044a\u0438\u0434\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u0438\u0440\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u043f\u043e\u0440\u0442\u0443\u0433\u0430\u043b\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0443\u044b\u0440\u044b\u0441\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u043a\u0438\u0442\u0430\u0439\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u0430\u0434\u044b\u0433\u0435\u0439\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0440\u0430\u0433\u043e\u043d \u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u0431\u0443\u0440\u044f\u0442\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u043a\u043e\u043f\u0442\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u0440\u0430\u0433\u043e\u043d \u0435\u0433\u0438\u043f\u0442\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u0444\u0438\u043b\u0438\u043f\u043f\u0438\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u0440\u0430\u0433\u043e\u043d \u0444\u0440\u0430\u043d\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u0440\u0430\u0433\u043e\u043d \u0431\u0435\u0440\u0434\u0437\u0435\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u043c\u04d5\u0445\u044a\u04d5\u043b\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u043a\u04d5\u0441\u0433\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u0431\u04d5\u043b\u0445\u044a\u04d5\u0440\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u0445\u044a\u0443\u044b\u043c\u044b\u0445\u044a\u0445\u044a\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u043b\u0435\u043a\u044a\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u0446\u0438\u0433\u0430\u0439\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u043d\u04d5\u0437\u043e\u043d\u0433\u04d5 \u04d5\u0432\u0437\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0410\u0440\u0430\u0431\u0431\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u041a\u0438\u0440\u0440\u0438\u043b\u0438\u0446\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u04d4\u043d\u0446\u043e\u043d\u0433\u043e\u043d\u0434 \u043a\u0438\u0442\u0430\u0439\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0422\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d \u043a\u0438\u0442\u0430\u0439\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u041b\u0430\u0442\u0438\u043d\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u041d\u04d5\u0444\u044b\u0441\u0433\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u041d\u04d5\u0437\u043e\u043d\u0433\u04d5 \u0441\u043a\u0440\u0438\u043f\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0430\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u0430\u0433 \u043d\u0435\u043c\u044b\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0448\u0432\u0439\u0435\u0446\u0430\u0440\u0438\u0430\u0433 \u043d\u0435\u043c\u044b\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0430\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u0430\u0433 \u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u04d5\u0439\u0430\u0433 \u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0431\u0440\u0438\u0442\u0430\u0439\u043d\u0430\u0433 \u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0430\u043c\u0435\u0440\u0438\u043a\u0430\u0433 \u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0435\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u04d5\u0439\u0430\u0433 \u0444\u0440\u0430\u043d\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0448\u0432\u0435\u0439\u0446\u0430\u0440\u0438\u0430\u0433 \u0444\u0440\u0430\u043d\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u0431\u0440\u0430\u0437\u0438\u043b\u0438\u0430\u0433 \u043f\u043e\u0440\u0442\u0443\u0433\u0430\u043b\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u0435\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u043f\u043e\u043b\u0442\u0443\u0433\u0430\u043b\u0438\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u043b\u0430\u0442\u0438\u043d\u0430\u0433 \u0430\u043c\u0435\u0440\u0438\u043a\u0430\u0433 \u0430\u043d\u0433\u043b\u0438\u0441\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u041a\u044a\u04d5\u043b\u0438\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u041d\u044b\u043c\u04d5\u0446\u0442\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u04d5\u043d\u0446\u043e\u043d\u0433\u043e\u043d\u0434 \u043a\u0438\u0442\u0430\u0439\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0442\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d \u043a\u0438\u0442\u0430\u0439\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u041d\u044b\u0440\u044b\u043a\u043a\u043e\u043d \u0446\u0438\u0444\u0440\u04d5\u0442\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u0423\u0438\u0440\u04d5\u0433\u0442\u044b \u043a\u044a\u04d5\u043b\u0438\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u041f\u0435\u0440\u0441\u0430\u0439\u043d\u0430\u0433 \u043a\u044a\u04d5\u043b\u0438\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0413\u0440\u0435\u0433\u043e\u0440\u0438\u0430\u043d \u043a\u044a\u04d5\u043b\u0438\u043d\u0434\u0430\u0440"_s)
		})
	}));
	return data;
}

LocaleNames_os::LocaleNames_os() {
}

$Class* LocaleNames_os::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_os, name, initialize, &_LocaleNames_os_ClassInfo_, allocate$LocaleNames_os);
	return class$;
}

$Class* LocaleNames_os::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun