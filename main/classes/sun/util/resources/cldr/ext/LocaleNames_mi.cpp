#include <sun/util/resources/cldr/ext/LocaleNames_mi.h>

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

$MethodInfo _LocaleNames_mi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_mi::*)()>(&LocaleNames_mi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_mi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mi_MethodInfo_
};

$Object* allocate$LocaleNames_mi($Class* clazz) {
	return $of($alloc(LocaleNames_mi));
}

void LocaleNames_mi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, "Tiamana"_s);
	$var($String, metaValue_FR, u"W\u012bw\u012b"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Tiamana Atiria"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Hainamana M\u0101m\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"P\u014dtik\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Momotuhi T\u0113 M\u014dhiotia"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"P\u014dtik\u012b Parahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Raupapa K\u014dmaka Arowh\u0101nui"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Paniora Amerika ki te Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Paniora M\u0113hikana"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Paniora Uropi"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"te reo M\u0101ori"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Hainamana Tukuiho"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maker\u014dnia ki te Raki"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Hononga o Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Inia"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Ingarihi"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u0101ria"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u012atariana"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arapika"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Paniora"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Hainamana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Maramataka P\u0101keh\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Ingarihi Amerikana"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Hapanihi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"M\u0101m\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Ng\u0101 Mati P\u0101keh\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tukuiho"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Rohe T\u0113 M\u014dhiotia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u016bhia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Ruhiana"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Hapani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Ingarihi Ahitereiriana"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Aotearoa"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Parahi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Tiamana \u014ckawa Huiterangi"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Hononga o Piritene"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"W\u012bw\u012b K\u0101nata"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Reo T\u0113 M\u014dhiotia"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"W\u012bw\u012b Huiterangi"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Haina"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"R\u0101tina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"H\u012bririki"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Ingarihi Piritene"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Tuhikore"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Ingarihi K\u0101nata"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"P\u014dtik\u012b Uropi"_s)
		})
	}));
	return data;
}

LocaleNames_mi::LocaleNames_mi() {
}

$Class* LocaleNames_mi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mi, name, initialize, &_LocaleNames_mi_ClassInfo_, allocate$LocaleNames_mi);
	return class$;
}

$Class* LocaleNames_mi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun