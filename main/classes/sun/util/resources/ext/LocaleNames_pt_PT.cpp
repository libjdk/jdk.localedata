#include <sun/util/resources/ext/LocaleNames_pt_PT.h>

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

$MethodInfo _LocaleNames_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_pt_PT::*)()>(&LocaleNames_pt_PT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_pt_PT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_pt_PT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_pt_PT_MethodInfo_
};

$Object* allocate$LocaleNames_pt_PT($Class* clazz) {
	return $of($alloc(LocaleNames_pt_PT));
}

void LocaleNames_pt_PT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_pt_PT::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emiratos \u00c1rabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Ant\u00e1rctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbeij\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u00f3snia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benim"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Bielorr\u00fassia"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Camar\u00f5es"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Ilha do Natal"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Rep\u00fablica Checa"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Est\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gronel\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Ilhas South Georgia e South Sandwich"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guin\u00e9-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hong Kong - Regi\u00e3o Administrativa Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Qu\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Quirguizist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Coreia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Coreia do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Ilhas Caim\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Cazaquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Lao, Rep\u00fablica Popular Democr\u00e1tica"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Let\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f3naco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mold\u00e1via, Rep\u00fablica da"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madag\u00e1scar"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maced\u00f3nia, Rep\u00fablica da"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macau - Regi\u00e3o Administrativa Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ilhas Mariana do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u00edcias"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caled\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua Nova Guin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pol\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Territ\u00f3rio Palestiniano"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seicheles"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslov\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"S\u00e3o Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ilhas Turcas e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tchade"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territ\u00f3rios Franceses a Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajiquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turquemenist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ilhas Minor Outlying (E.U.A)"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbaquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Santa S\u00e9 (Estado da Cidade do Vaticano)"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent e Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Ilhas Virgin Brit\u00e2nicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ilhas Virgin E.U.A."_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietname"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"I\u00e9men"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("checo"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"est\u00f3nio"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("esloveno"_s)
		})
	});
}

LocaleNames_pt_PT::LocaleNames_pt_PT() {
}

$Class* LocaleNames_pt_PT::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pt_PT, name, initialize, &_LocaleNames_pt_PT_ClassInfo_, allocate$LocaleNames_pt_PT);
	return class$;
}

$Class* LocaleNames_pt_PT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun