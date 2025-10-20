#include <sun/util/resources/cldr/ext/LocaleNames_es_CR.h>

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

$MethodInfo _LocaleNames_es_CR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_es_CR::*)()>(&LocaleNames_es_CR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_es_CR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_es_CR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_CR_MethodInfo_
};

$Object* allocate$LocaleNames_es_CR($Class* clazz) {
	return $of($alloc(LocaleNames_es_CR));
}

void LocaleNames_es_CR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es_CR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia y Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Trist\u00e1n de Acu\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Islas menores alejadas de EE. UU."_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("euskera"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"punyab\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suajili"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"acehn\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("griego antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight marroqu\u00ed est\u00e1ndar"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suajili del Congo"_s)
		})
	}));
	return data;
}

LocaleNames_es_CR::LocaleNames_es_CR() {
}

$Class* LocaleNames_es_CR::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es_CR, name, initialize, &_LocaleNames_es_CR_ClassInfo_, allocate$LocaleNames_es_CR);
	return class$;
}

$Class* LocaleNames_es_CR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun