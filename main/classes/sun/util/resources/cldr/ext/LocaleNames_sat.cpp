#include <sun/util/resources/cldr/ext/LocaleNames_sat.h>

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

$MethodInfo _LocaleNames_sat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sat::*)()>(&LocaleNames_sat::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sat",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sat_MethodInfo_
};

$Object* allocate$LocaleNames_sat($Class* clazz) {
	return $of($alloc(LocaleNames_sat));
}

void LocaleNames_sat::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sat::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u1c75\u1c68\u1c5f\u1c61\u1c64\u1c5e"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u1c6a\u1c64\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u1c61\u1c5f\u1c68\u1c62\u1c5f\u1c71\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u1c6f\u1c77\u1c68\u1c5f\u1c71\u1c65"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u1c6d\u1c69\u1c71\u1c64\u1c6d\u1c74\u1c6e\u1c70 \u1c60\u1c64\u1c5d\u1c70\u1c5a\u1c62"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u1c64\u1c71\u1c70\u1c64\u1c6d\u1c5f"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u1c64\u1c74\u1c5e\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u1c61\u1c5f\u1c6f\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u1c68\u1c69\u1c65"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u1c6d\u1c69\u1c71\u1c5f\u1c6d\u1c74\u1c6e\u1c70 \u1c6e\u1c65\u1c74\u1c6e\u1c74"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u1c75\u1c5f\u1c5d\u1c69\u1c68\u1c69\u1c62 \u1c74\u1c5a\u1c74\u1c77\u1c5f"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u1c61\u1c5f\u1c68\u1c62\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u1c5f\u1c5d\u1c5c\u1c7d\u1c68\u1c6e\u1c61\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u1c6e\u1c65\u1c6f\u1c6e\u1c71\u1c64\u1c65"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u1c6f\u1c77\u1c68\u1c6e\u1c67\u1c6a"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u1c64\u1c74\u1c5f\u1c5e\u1c64\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u1c61\u1c5f\u1c6f\u1c5f\u1c71\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u1c6f\u1c69\u1c68\u1c5b\u1c5c\u1c5f\u1c5e\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u1c68\u1c69\u1c65\u1c64\u1c6d\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u1c6a\u1c5f\u1c6d\u1c71\u1c64\u1c61\u1c7d"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u1c65\u1c5f\u1c71\u1c5b\u1c5f\u1c72\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u1c75\u1c5f\u1c5d \u1c69\u1c68\u1c69\u1c62 \u1c6f\u1c5f\u1c79\u1c68\u1c65\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u1c5f\u1c68\u1c75\u1c64\u1c60"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u1c65\u1c64\u1c68\u1c64\u1c5e\u1c64\u1c60"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u1c6b\u1c6e\u1c63\u1c5f\u1c71\u1c5f\u1c5c\u1c5f\u1c68\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u1c65\u1c64\u1c62\u1c6f\u1c5e\u1c64\u1c6f\u1c5f\u1c6d\u1c64\u1c70"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u1c74\u1c68\u1c6e\u1c70\u1c64\u1c65\u1c5a\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u1c5e\u1c6e\u1c74\u1c64\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u1c5a\u1c5e \u1c6a\u1c64\u1c60\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u1c75\u1c5f\u1c5d \u1c5a\u1c5e \u1c5f\u1c60\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u1c75\u1c5f\u1c5d \u1c69\u1c68\u1c69\u1c62 \u1c6a\u1c64\u1c60\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u1c5a\u1c65\u1c74\u1c68\u1c64\u1c6d\u1c5f \u1c61\u1c5f\u1c68\u1c62\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u1c65\u1c69\u1c63\u1c64\u1c65 \u1c66\u1c5f\u1c64 \u1c61\u1c5f\u1c68\u1c62\u1c5f\u1c71"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u1c5a\u1c65\u1c74\u1c68\u1c6e\u1c5e\u1c64\u1c6d\u1c5f\u1c71 \u1c5f\u1c5d\u1c5c\u1c7d\u1c68\u1c6e\u1c61\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u1c60\u1c5f\u1c71\u1c5f\u1c70\u1c64\u1c6d\u1c5f\u1c71 \u1c5f\u1c5d\u1c5c\u1c7d\u1c68\u1c6e\u1c61\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u1c75\u1c68\u1c64\u1c74\u1c64\u1c65 \u1c5f\u1c5d\u1c5c\u1c7d\u1c68\u1c6e\u1c61\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u1c5f\u1c62\u1c6e\u1c68\u1c64\u1c60\u1c5f\u1c71 \u1c5f\u1c5d\u1c5c\u1c7d\u1c68\u1c6e\u1c61\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u1c68\u1c69\u1c65\u1c64\u1c6d\u1c5f\u1c71 \u1c6e\u1c65\u1c6f\u1c6e\u1c71\u1c64\u1c65"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u1c62\u1c6e\u1c60\u1c65\u1c64\u1c60\u1c5f\u1c71 \u1c6e\u1c65\u1c6f\u1c6e\u1c71\u1c64\u1c65"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u1c60\u1c5f\u1c71\u1c5f\u1c70\u1c64\u1c6d\u1c5f\u1c71 \u1c6f\u1c77\u1c68\u1c6e\u1c67\u1c6a"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u1c65\u1c69\u1c63\u1c64\u1c65 \u1c6f\u1c77\u1c68\u1c6e\u1c67\u1c6a"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u1c75\u1c68\u1c5f\u1c61\u1c64\u1c5e\u1c64\u1c6d\u1c5f\u1c71 \u1c6f\u1c69\u1c68\u1c5b\u1c5c\u1c5f\u1c5e\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u1c6d\u1c69\u1c68\u1c5a\u1c6f\u1c64\u1c6d\u1c5f\u1c71 \u1c6f\u1c69\u1c68\u1c5b\u1c5c\u1c5f\u1c5e\u1c64"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u1c5e\u1c6e\u1c74\u1c64\u1c71 \u1c5f\u1c62\u1c6e\u1c68\u1c64\u1c60\u1c5f\u1c71 \u1c6e\u1c65\u1c6f\u1c6e\u1c71\u1c64\u1c65"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u1c5f\u1c5e\u1c5c\u1c5f\u1c63\u1c5f\u1c60\u1c5f\u1c71 \u1c6a\u1c5f\u1c6d\u1c71\u1c64\u1c61\u1c7d"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u1c74\u1c68\u1c6e\u1c70\u1c64\u1c65\u1c71\u1c5f\u1c5e \u1c6a\u1c5f\u1c6d\u1c71\u1c64\u1c61\u1c7d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u1c63\u1c6e\u1c65\u1c74\u1c5f\u1c68\u1c71 \u1c6e\u1c5e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u1c6e\u1c65\u1c74\u1c6e\u1c71\u1c70\u1c5f\u1c68\u1c70 \u1c5b\u1c77\u1c5f\u1c68 \u1c5f\u1c78\u1c6b\u1c6e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u1c5c\u1c68\u1c6e\u1c5c\u1c5a\u1c68\u1c64\u1c6d\u1c5f\u1c71 \u1c60\u1c5f\u1c5e\u1c6e\u1c71\u1c70\u1c5f\u1c68"_s)
		})
	}));
	return data;
}

LocaleNames_sat::LocaleNames_sat() {
}

$Class* LocaleNames_sat::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sat, name, initialize, &_LocaleNames_sat_ClassInfo_, allocate$LocaleNames_sat);
	return class$;
}

$Class* LocaleNames_sat::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun