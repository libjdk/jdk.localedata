#include <sun/util/resources/cldr/ext/LocaleNames_sr_Latn_BA.h>

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

$MethodInfo _LocaleNames_sr_Latn_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sr_Latn_BA::*)()>(&LocaleNames_sr_Latn_BA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sr_Latn_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Latn_BA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Latn_BA_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Latn_BA($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Latn_BA));
}

void LocaleNames_sr_Latn_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Latn_BA::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("svijet"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Sjevernoameri\u010dki kontinent"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Sjeverna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Sjeverna i Ju\u017ena Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Sjeverna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Sjeverna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("ostrvo Asension"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bjelorusija"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokosova (Kiling) ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("ostrvo Kliperton"_s)
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
			$of("DE"_s),
			$of(u"Njema\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ju\u017ena D\u017eord\u017eija i Ju\u017ena Sendvi\u010dka ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gvam"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong (SAO Kine)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("ostrvo Herd i ostrva Makdonald"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sveti Kits i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Sjeverna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Sjeverna Makedonija"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("SAR Makao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Sjeverna Marijanska ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("ostrvo Norfok"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Nijue"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sveti Pjer i Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("palestinske teritorije"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Spoljna ostrva SAD"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sveti Vinsent i Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britanska Djevi\u010danska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Ameri\u010dka Djevi\u010danska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bjeloruski"_s)
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
			$of("de"_s),
			$of(u"njema\u010dki"_s)
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
			$of("nd"_s),
			$of("sjeverni ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sjeverni sami"_s)
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
			$of("arn"_s),
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"njema\u010dki (\u0160vajcarska)"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("sjeverni luri"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohok"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"niskonjema\u010dki"_s)
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
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("redoslijed sortiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistem mjernih jedinica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("mjanmarske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("podrazumijevani Unicode redoslijed sortiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"pretraga op\u0161te namjene"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standardni redoslijed sortiranja"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Latn_BA::LocaleNames_sr_Latn_BA() {
}

$Class* LocaleNames_sr_Latn_BA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Latn_BA, name, initialize, &_LocaleNames_sr_Latn_BA_ClassInfo_, allocate$LocaleNames_sr_Latn_BA);
	return class$;
}

$Class* LocaleNames_sr_Latn_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun