#include <sun/util/resources/cldr/ext/LocaleNames_mni.h>

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

$MethodInfo _LocaleNames_mni_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_mni::*)()>(&LocaleNames_mni::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_mni_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mni",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mni_MethodInfo_
};

$Object* allocate$LocaleNames_mni($Class* clazz) {
	return $of($alloc(LocaleNames_mni));
}

void LocaleNames_mni::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mni::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u099c\u09bf\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u099a\u09bf\u09a8\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u099c\u09b0\u09cd\u09ae\u09a8\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u09ab\u09cd\u09b0\u09be\u09a8\u09cd\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u09af\u09bc\u09c1\u09a8\u09be\u0987\u099f\u09c7\u09a6 \u0995\u09bf\u0982\u09a6\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0987\u09a8\u09cd\u09a6\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0987\u099f\u09be\u09b2\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u09b0\u09c1\u09b8\u09bf\u09af\u09bc\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u09af\u09bc\u09c1\u09a8\u09be\u0987\u099f\u09c7\u09a6 \u09b7\u09cd\u099f\u09c7\u099f\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u09ae\u09b6\u0995\u0996\u0982\u09a6\u09ac\u09be \u09b2\u09ae\u09a6\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u099c\u09b0\u09cd\u09ae\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0987\u0982\u09b2\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u09b8\u09cd\u09aa\u09c7\u09a8\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u09ab\u09cd\u09b0\u09c7\u099e\u09cd\u099a"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0987\u099f\u09be\u09b2\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u09aa\u09cb\u09b0\u09cd\u099f\u09c1\u0997\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u09b0\u09c1\u09b8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u099a\u09be\u0987\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u09ae\u09c8\u09a4\u09c8\u09b2\u09cb\u09a8\u09cd"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u09ae\u09b6\u0995\u0996\u0982\u09a6\u09ac\u09be \u09b2\u09cb\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0986\u09b0\u09ac\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u09ac\u09be\u0982\u09b2\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u09b8\u09bf\u09b0\u09bf\u09b2\u09bf\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u09b2\u09be\u0987\u09a5\u09cb\u0995\u09b9\u09b2\u09cd\u09b2\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u09a4\u09cd\u09b0\u09c7\u09a6\u09bf\u09b8\u09cd\u09a8\u09c7\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u09b2\u09c7\u099f\u09bf\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u09ae\u09c7\u0987\u099f\u09c7\u0987 \u09ae\u09be\u09af\u09bc\u09c7\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0987\u09a6\u09ac\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u09ae\u09b6\u0995\u0996\u0982\u09a6\u09ac\u09be \u09b8\u09cd\u0995\u09cd\u09b0\u09bf\u09aa\u09cd\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0993\u09b7\u09cd\u099f\u09cd\u09b0\u09bf\u09af\u09bc\u09be\u09a8 \u099c\u09b0\u09cd\u09ae\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u09b8\u09cd\u09ac\u09bf\u099c \u09b9\u09be\u09af\u09bc \u099c\u09b0\u09cd\u09ae\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0993\u09b7\u09cd\u099f\u09cd\u09b0\u09c7\u09b2\u09bf\u09af\u09bc\u09be\u09a8 \u0987\u0982\u09b2\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0995\u09be\u09a8\u09be\u09a6\u09bf\u09af\u09bc\u09be\u09a8 \u0987\u0982\u09b2\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u09ac\u09cd\u09b0\u09bf\u099f\u09bf\u09b6 \u0987\u0982\u09b2\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u0987\u0982\u09b2\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09b8\u09cd\u09aa\u09c7\u09a8\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u09ae\u09c7\u0995\u09cd\u09b8\u09bf\u0995\u09be\u09a8 \u09b8\u09cd\u09aa\u09c7\u09a8\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u0995\u09be\u09a8\u09be\u09a6\u09bf\u09af\u09bc\u09be\u09a8 \u09ab\u09cd\u09b0\u09c7\u099e\u09cd\u099a"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u09b8\u09cd\u09ac\u09bf\u099c \u09ab\u09cd\u09b0\u09c7\u099e\u09cd\u099a"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u09ac\u09cd\u09b0\u09be\u099c\u09bf\u09b2\u09bf\u09af\u09bc\u09be\u09a8 \u09aa\u09cb\u09b0\u09cd\u099f\u09c1\u0997\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09aa\u09cb\u09b0\u09cd\u099f\u09c1\u0997\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u09b2\u09c7\u099f\u09bf\u09a8 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09b8\u09cd\u09aa\u09c7\u09a8\u09bf\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u09b8\u09bf\u09ae\u09aa\u09cd\u09b2\u09bf\u09ab\u09be\u0987\u09a6 \u099a\u09be\u0987\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u09a4\u09cd\u09b0\u09c7\u09a6\u09bf\u09b8\u09cd\u09a8\u09c7\u09b2 \u099a\u09be\u0987\u09a8\u09bf\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u09ac\u09be\u0982\u09b2\u09be \u09a6\u09bf\u099c\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u09f1\u09c7\u09b8\u09cd\u09a4\u09b0\u09cd\u09a8 \u09a6\u09bf\u099c\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u09b8\u09cb\u09b0\u09cd\u099f \u0993\u09b0\u09cd\u09a6\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0997\u09cd\u09b0\u09bf\u0997\u09cb\u09b0\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09c7\u09b2\u09c7\u09a8\u09cd\u09a6\u09b0"_s)
		})
	}));
	return data;
}

LocaleNames_mni::LocaleNames_mni() {
}

$Class* LocaleNames_mni::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mni, name, initialize, &_LocaleNames_mni_ClassInfo_, allocate$LocaleNames_mni);
	return class$;
}

$Class* LocaleNames_mni::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun