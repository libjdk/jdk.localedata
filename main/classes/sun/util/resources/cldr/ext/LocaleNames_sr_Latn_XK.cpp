#include <sun/util/resources/cldr/ext/LocaleNames_sr_Latn_XK.h>

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

$MethodInfo _LocaleNames_sr_Latn_XK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sr_Latn_XK::*)()>(&LocaleNames_sr_Latn_XK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sr_Latn_XK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Latn_XK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Latn_XK_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Latn_XK($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Latn_XK));
}

void LocaleNames_sr_Latn_XK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Latn_XK::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010ce\u0161ka Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("SAR Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sveti Kits i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("SAR Makao"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sveti Pjer i Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Manja udaljena ostrva SAD"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sveti Vinsent i Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bamanankan"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"hai\u0107anski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"lao\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("sinhalski"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("isikosa"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("isizulu"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0161vajcarski nema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohok"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ju\u017eni \u0161ilha"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"centralnoatlaski tama\u0161ek"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standardni marokanski tama\u0161ek"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Latn_XK::LocaleNames_sr_Latn_XK() {
}

$Class* LocaleNames_sr_Latn_XK::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Latn_XK, name, initialize, &_LocaleNames_sr_Latn_XK_ClassInfo_, allocate$LocaleNames_sr_Latn_XK);
	return class$;
}

$Class* LocaleNames_sr_Latn_XK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun