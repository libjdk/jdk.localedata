#include <sun/util/resources/cldr/ext/CurrencyNames_tzm.h>

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

$MethodInfo _CurrencyNames_tzm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_tzm::*)()>(&CurrencyNames_tzm::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_tzm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_tzm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tzm_MethodInfo_
};

$Object* allocate$CurrencyNames_tzm($Class* clazz) {
	return $of($alloc(CurrencyNames_tzm));
}

void CurrencyNames_tzm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tzm::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Derhem Uymarati"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza Unguli"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u1e0cular Us\u1e6drali"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u1e0cinar Uba\u1e25rayni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Frank Uburundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula Ubutswani"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u1e0cular Ukanadi"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Frank Ukunguli"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Frank Uswisri"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Ywan Renminbi Ucinwi"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Iskudu Ukabuvirdyani"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Frank U\u011fibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u1e0cinar Udzayri"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Junih Umi\u1e63\u1e5bi"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa Uyritri"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birr Uyityuppi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"U\u1e5bu"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Junih Ubri\u1e6dani"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Sidi U\u0263ani"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Agambi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Frank U\u0263ini"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupi U\u1e25indi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yann Ujappuni"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Cillin Ukini"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Frank Uqumuri"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u1e0cular Ulibiri"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Luti Ulusu\u1e6di"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u1e0cinar Ulibi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Derhem Ume\u1e5b\u1e5buki"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Aryari Umal\u0263aci"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Uqiyya Umuritani (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Uqiyya Umuritani"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupi Umurisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwa\u010da Umalawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mitikal Umuzambiqi"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u1e0cular Unamibi"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nayra Unijiri"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Frank Urwandi"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Ryal Usa\u03b5udi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupi Usicili"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Junih Usudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Junih Usudani (1956\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Junih Usantehilini"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Lyun Usirralyuni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Cilin U\u1e63umali"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dubra Usaw\u1e6dumi (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dubra Usaw\u1e6dumi"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilanjini Uswazi"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u1e0cinar Utunsi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Cilin U\u1e6danzani"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Cilin U\u0263andi (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u1e0cular Umirikani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Frank CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Frank CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand Ufriki Unzul"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwa\u010da Uzambi (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwa\u010da Uzambi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u1e0cular Uzimbabwi"_s)
		})
	}));
	return data;
}

CurrencyNames_tzm::CurrencyNames_tzm() {
}

$Class* CurrencyNames_tzm::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tzm, name, initialize, &_CurrencyNames_tzm_ClassInfo_, allocate$CurrencyNames_tzm);
	return class$;
}

$Class* CurrencyNames_tzm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun