#include <sun/util/resources/ext/LocaleNames_en_PH.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_en_PH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_en_PH::*)()>(&LocaleNames_en_PH::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_en_PH_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_en_PH",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_PH_MethodInfo_
};

$Object* allocate$LocaleNames_en_PH($Class* clazz) {
	return $of($alloc(LocaleNames_en_PH));
}

void LocaleNames_en_PH::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_en_PH::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Aland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos (Keeling) Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo (Kinshasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo (Brazzaville)"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Ivory Coast"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of("Serbia And Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("South Georgia and the South Sandwich Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard Island and McDonald Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts and Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre and Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinian Territory"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard and Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome and Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks and Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("East Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent and the Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis and Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Western Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galician"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja; Chichewa; Chewa"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Occitan (post 1500); Proven\u00e7al"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Rhaeto-Romance"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tonga (Tonga Islands)"_s)
		})
	});
}

LocaleNames_en_PH::LocaleNames_en_PH() {
}

$Class* LocaleNames_en_PH::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_PH, name, initialize, &_LocaleNames_en_PH_ClassInfo_, allocate$LocaleNames_en_PH);
	return class$;
}

$Class* LocaleNames_en_PH::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun