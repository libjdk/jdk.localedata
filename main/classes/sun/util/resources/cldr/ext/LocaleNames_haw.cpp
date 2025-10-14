#include <sun/util/resources/cldr/ext/LocaleNames_haw.h>

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

$MethodInfo _LocaleNames_haw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_haw::*)()>(&LocaleNames_haw::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_haw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_haw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_haw_MethodInfo_
};

$Object* allocate$LocaleNames_haw($Class* clazz) {
	return $of($alloc(LocaleNames_haw));
}

void LocaleNames_haw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_haw::getContents() {
	$var($String, metaValue_DE, u"Kelem\u0101nia"_s);
	$var($String, metaValue_DK, "Kenemaka"_s);
	$var($String, metaValue_FR, "Palani"_s);
	$var($String, metaValue_GR, "Helene"_s);
	$var($String, metaValue_IT, u"\u02bb\u012ak\u0101lia"_s);
	$var($String, metaValue_NL, u"H\u014dlani"_s);
	$var($String, metaValue_RU, u"L\u016bkia"_s);
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
			$of("zh_Hans"_s),
			$of(u"P\u0101k\u0113 Ho\u02bboma\u02bbalahi \u02bbia"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Pukik\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Polapola"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(metaValue_DK)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Kuikilani Kelem\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Pukik\u012b Palakila"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u02bbIlelani"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"M\u0101ori"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"P\u0101k\u0113 Ku\u02bbuna"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u02bbAmelika Hui P\u016b \u02bbIa"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u02bb\u014clelo Hawai\u02bbi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u02bbIsera\u02bbela"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u02bb\u012ania"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Pelek\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mekiko"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Kepania"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Paniolo"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"P\u0101k\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u02bbAlapia"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Wiekanama"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"N\u016bh\u014dlani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Pelek\u0101nia \u02bbAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Kepan\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(metaValue_NL)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(metaValue_NL)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"P\u012bk\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"I\u0101pana"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Pelek\u0101ne N\u016b H\u014dlani"_s)
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
			$of("ga"_s),
			$of(u"\u02bbAiliki"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"K\u0101moa"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Aupuni M\u014d\u02bb\u012b Hui P\u016b \u02bbIa"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kanak\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Kuekene"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Palani Kanak\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"K\u014dlea"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u02bbIke \u02bbole \u2018ia a k\u016bpono \u02bbole paha ka \u02bb\u014dlelo"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Kuikilani"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Pelek\u0101nia Pekek\u0101ne"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"L\u0101kina"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Wale"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Pelek\u0101ne Kanak\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u02bb\u0100ina Pilipino"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(metaValue_DK)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Hebera"_s)
		})
	}));
	return data;
}

LocaleNames_haw::LocaleNames_haw() {
}

$Class* LocaleNames_haw::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_haw, name, initialize, &_LocaleNames_haw_ClassInfo_, allocate$LocaleNames_haw);
	return class$;
}

$Class* LocaleNames_haw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun