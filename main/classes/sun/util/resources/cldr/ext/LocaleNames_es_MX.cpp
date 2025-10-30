#include <sun/util/resources/cldr/ext/LocaleNames_es_MX.h>

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

$MethodInfo _LocaleNames_es_MX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_es_MX::*)()>(&LocaleNames_es_MX::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_es_MX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_es_MX",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_MX_MethodInfo_
};

$Object* allocate$LocaleNames_es_MX($Class* clazz) {
	return $of($alloc(LocaleNames_es_MX));
}

void LocaleNames_es_MX::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es_MX::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00c1frica Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00c1frica Oriental"_s)
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
			$of("Asia Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sudeste Asi\u00e1tico"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa Occidental"_s)
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
			$of("EZ"_s),
			$of("zona euro"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumania"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
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
			$of("UN"_s),
			$of("ONU"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("euskera"_s)
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
			$of("pa"_s),
			$of(u"punyab\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suajili"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"acehn\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhoshpuri"_s)
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
			$of("hak"_s),
			$of("kejia (China)"_s)
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
			$of(u"karach\u00e1i b\u00e1lkaro"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("cumuco"_s)
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
			$of("nan"_s),
			$of("min nan (Chino)"_s)
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
			$of("wuu"_s),
			$of("chino wu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight marroqu\u00ed est\u00e1ndar"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"malay\u00e1lam"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suajili del Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("calendario minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"d\u00edgitos en gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"orden de clasificaci\u00f3n de Unicode predeterminado"_s)
		})
	}));
	return data;
}

LocaleNames_es_MX::LocaleNames_es_MX() {
}

$Class* LocaleNames_es_MX::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es_MX, name, initialize, &_LocaleNames_es_MX_ClassInfo_, allocate$LocaleNames_es_MX);
	return class$;
}

$Class* LocaleNames_es_MX::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun