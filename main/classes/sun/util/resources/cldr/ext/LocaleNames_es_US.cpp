#include <sun/util/resources/cldr/ext/LocaleNames_es_US.h>

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

$MethodInfo _LocaleNames_es_US_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_es_US::*)()>(&LocaleNames_es_US::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_es_US_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_es_US",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_US_MethodInfo_
};

$Object* allocate$LocaleNames_es_US($Class* clazz) {
	return $of($alloc(LocaleNames_es_US));
}

void LocaleNames_es_US::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es_US::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00c1frica occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00c1frica oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u00c1frica septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u00c1frica meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sudeste asi\u00e1tico"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Isla de la Ascensi\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia y Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Territorios alejados de Ocean\u00eda"_s)
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
			$of("gu"_s),
			$of(u"gurayat\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("criollo haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romanche"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setchwana"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"acehn\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"alt\u00e1i meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u00e1rabe najdi"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"neerland\u00e9s medieval"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"ingl\u00e9s medieval"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"franc\u00e9s medieval"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan (China)"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"alem\u00e1n de la alta edad media"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("griego antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hiligain\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang (China)"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingusetio"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardiano"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("creole de Luisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"irland\u00e9s medieval"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u00e1rabe chadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("siriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tet\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuviniano"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"silabarios del japon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("letra desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("swahili del Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"d\u00edgitos en gujarati"_s)
		})
	}));
	return data;
}

LocaleNames_es_US::LocaleNames_es_US() {
}

$Class* LocaleNames_es_US::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es_US, name, initialize, &_LocaleNames_es_US_ClassInfo_, allocate$LocaleNames_es_US);
	return class$;
}

$Class* LocaleNames_es_US::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun