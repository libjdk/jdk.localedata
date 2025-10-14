#include <sun/util/resources/cldr/ext/LocaleNames_doi.h>

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

$MethodInfo _LocaleNames_doi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_doi::*)()>(&LocaleNames_doi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_doi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_doi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_doi_MethodInfo_
};

$Object* allocate$LocaleNames_doi($Class* clazz) {
	return $of($alloc(LocaleNames_doi));
}

void LocaleNames_doi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_doi::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u092c\u094d\u0930\u093e\u091c\u0940\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u091a\u0940\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u091c\u0930\u094d\u092e\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u092b\u094d\u0930\u093e\u0902\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u092f\u0942\u0928\u093e\u0907\u091f\u0947\u0921 \u0915\u093f\u0902\u0917\u0921\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u092d\u093e\u0930\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0907\u091f\u0932\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0930\u0942\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u092f\u0942\u090f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u0905\u0928\u091c\u093e\u0902\u0924\u093e \u0916\u0947\u0924\u094d\u0924\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u091c\u0930\u094d\u092e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0905\u0902\u0917\u0930\u0947\u091c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0938\u094d\u092a\u0948\u0928\u093f\u0936"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u092b\u094d\u0930\u0947\u0902\u091a"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0907\u091f\u093e\u0932\u093f\u092f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u092a\u0941\u0930\u094d\u0924\u0917\u093e\u0932\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0930\u0942\u0938\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u091a\u0940\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u0921\u094b\u0917\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u0905\u0928\u091c\u093e\u0902\u0924\u0940 \u092d\u093e\u0936\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0905\u0930\u092c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u0938\u093f\u0930\u093f\u0932\u093f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u0926\u0947\u0935\u0928\u093e\u0917\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u0938\u0930\u0932\u0940\u0915\u0943\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0930\u0935\u093e\u092f\u0924\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u0932\u0948\u091f\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0905\u0928\u0932\u093f\u0916\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u0905\u0928\u091c\u093e\u0902\u0924\u0940 \u0932\u093f\u092a\u093f"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0906\u0938\u094d\u091f\u094d\u0930\u093f\u092f\u093e\u0908 \u091c\u0930\u094d\u092e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0938\u094d\u0935\u093f\u0938 \u0939\u093e\u0908 \u091c\u0930\u094d\u092e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0906\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u093e\u0908 \u0905\u0902\u0917\u0930\u0947\u091c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0915\u0948\u0928\u0947\u0921\u093f\u092f\u0928 \u0905\u0902\u0917\u0930\u0947\u091c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u092c\u094d\u0930\u093f\u091f\u093f\u0936 \u0905\u0902\u0917\u0930\u0947\u091c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0905\u092e\u0930\u0940\u0915\u0940 \u0905\u0902\u0917\u0930\u0947\u091c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u092f\u0942\u0930\u094b\u092a\u0940 \u0938\u094d\u092a\u0948\u0928\u093f\u0936"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u092e\u0948\u0915\u094d\u0938\u093f\u0928 \u0938\u094d\u092a\u0948\u0928\u093f\u0936"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u0915\u0948\u0928\u0947\u0921\u093f\u092f\u0928 \u092b\u094d\u0930\u0947\u0902\u091a"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0938\u094d\u0935\u093f\u0938 \u092b\u094d\u0930\u0947\u0902\u091a"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u092c\u094d\u0930\u093e\u091c\u0940\u0932\u0940 \u092a\u0941\u0930\u094d\u0924\u0917\u093e\u0932\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u092f\u0942\u0930\u094b\u092a\u0940 \u092a\u0941\u0930\u094d\u0924\u0917\u093e\u0932\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u0932\u0948\u091f\u093f\u0928 \u0905\u092e\u0930\u0940\u0915\u0940 \u0938\u094d\u092a\u0948\u0928\u093f\u0936"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u0938\u0930\u0932\u0940\u0915\u0943\u0924 \u091a\u0940\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0930\u0935\u093e\u092f\u0924\u0940 \u091a\u0940\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0905\u0930\u092c\u0940-\u0907\u0902\u0921\u093f\u0915 \u0905\u0902\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u0926\u0947\u0935\u0928\u093e\u0917\u0930\u0940 \u0905\u0902\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u092a\u091a\u094d\u091b\u092e\u0940 \u0905\u0902\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u092e\u093e\u0928\u0915 \u0924\u093e\u0932 \u0924\u0930\u0924\u0940\u092c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0917\u094d\u0930\u0947\u0917\u094b\u0930\u0940 \u0915\u0948\u0932\u0947\u0928\u094d\u0921\u0930"_s)
		})
	}));
	return data;
}

LocaleNames_doi::LocaleNames_doi() {
}

$Class* LocaleNames_doi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_doi, name, initialize, &_LocaleNames_doi_ClassInfo_, allocate$LocaleNames_doi);
	return class$;
}

$Class* LocaleNames_doi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun