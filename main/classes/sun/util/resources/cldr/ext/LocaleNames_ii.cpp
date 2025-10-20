#include <sun/util/resources/cldr/ext/LocaleNames_ii.h>

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

$MethodInfo _LocaleNames_ii_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ii::*)()>(&LocaleNames_ii::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ii_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ii",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ii_MethodInfo_
};

$Object* allocate$LocaleNames_ii($Class* clazz) {
	return $of($alloc(LocaleNames_ii));
}

void LocaleNames_ii::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ii::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\ua020\ua46d"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\ua34f\ua1e9"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\ua113\ua1e9"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\ua0d4\ua1e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\ua471\ua1e9"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\ua474\ua117"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\ua474\ua10a\ua1ba"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\ua3dd\ua02a"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\ua289\ua1c6\ua326"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\ua0b0\ua1e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\ua0c5\ua137\ua149\ua00b\ua41a\ua320"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\ua113\ua1e9\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\ua471\ua1e9\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\ua46d\ua020\ua478\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\ua0d4\ua1e9\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\ua188\ua320\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\ua474\ua10a\ua1ba\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\ua3dd\ua02a\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\ua04d\ua128\ua478\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\ua289\ua1e9\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\ua34f\ua1e9\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\ua149\ua00b\ua320\ua147\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\ua00a\ua1c1\ua028\ua071\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\ua00a\ua1a8\ua326\ua1c1\ua0da\ua071\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\ua21d\ua42f\ua24c\ua232\ua071\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\ua00e\ua2cf\ua24c\ua232\ua071\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\ua1c1\ua100\ua071\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\ua188\ua320\ua071\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\ua071\ua00b\ua246\ua320"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\ua149\ua00b\ua41a\ua320\ua071\ua0b7"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\ua020\ua45f\ua04d\ua128\ua478\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\ua21d\ua42f\ua34f\ua1e9\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\ua00e\ua2cf\ua34f\ua1e9\ua259"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\ua473\ua326\ua1c2\ua44d\ua256"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\ua109\ua27b\ua0c5\ua44d"_s)
		})
	}));
	return data;
}

LocaleNames_ii::LocaleNames_ii() {
}

$Class* LocaleNames_ii::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ii, name, initialize, &_LocaleNames_ii_ClassInfo_, allocate$LocaleNames_ii);
	return class$;
}

$Class* LocaleNames_ii::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun