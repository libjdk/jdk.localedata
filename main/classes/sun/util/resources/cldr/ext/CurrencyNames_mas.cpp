#include <sun/util/resources/cldr/ext/CurrencyNames_mas.h>

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

$MethodInfo _CurrencyNames_mas_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_mas::*)()>(&CurrencyNames_mas::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_mas_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mas",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mas_MethodInfo_
};

$Object* allocate$CurrencyNames_mas($Class* clazz) {
	return $of($alloc(CurrencyNames_mas));
}

void CurrencyNames_mas::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mas::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("Ksh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Iropiyian\u00ed \u0254\u0301\u0254\u0304 lmarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Iropiyian\u00ed e Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Iropiyian\u00ed e Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Iropiyian\u00ed e Bahareini"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Iropiyian\u00ed e Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Iropiyian\u00ed e Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Iropiyian\u00ed e Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Iropiyian\u00ed e Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Iropiyian\u00ed e Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Iropiyian\u00ed e China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Iropiyian\u00ed e Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Iropiyian\u00ed e Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Iropiyian\u00ed e Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Iropiyian\u00ed e Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Iropiyian\u00ed e Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Iropiyian\u00ed e Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Iropiyian\u00ed e yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Iropiyian\u00ed e Nk\u0268\u0301resa"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Iropiyian\u00ed e Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Iropiyian\u00ed e Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Iropiyian\u00ed e Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Iropiyian\u00ed e India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Iropiyian\u00ed e Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Iropiyian\u00ed e Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Iropiyian\u00ed e Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Iropiyian\u00ed e Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Iropiyian\u00ed e Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Iropiyian\u00ed e Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Iropiyian\u00ed e Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Iropiyian\u00ed e Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Iropiyian\u00ed e Moritania (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Iropiyian\u00ed e Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Iropiyian\u00ed e Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Iropiyian\u00ed e Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Iropiyian\u00ed e Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Iropiyian\u00ed e Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Iropiyian\u00ed e Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Iropiyian\u00ed e Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Iropiyian\u00ed e Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Iropiyian\u00ed e Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Iropiyian\u00ed e Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Iropiyian\u00ed e Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Iropiyian\u00ed e leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Iropiyian\u00ed e Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Iropiyian\u00ed e Saotome (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Iropiyian\u00ed e Saotome"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Iropiyian\u00ed e lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Iropiyian\u00ed e Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Iropiyian\u00ed e Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Iropiyian\u00ed e Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Iropiyian\u00ed \u0254\u0301\u0254\u0304 lamarekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Iropiyian\u00ed e CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Iropiyian\u00ed e CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Iropiyian\u00ed e Afrika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Iropiyian\u00ed e Sambia (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Iropiyian\u00ed e Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Iropiyian\u00ed e Simbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_mas::CurrencyNames_mas() {
}

$Class* CurrencyNames_mas::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mas, name, initialize, &_CurrencyNames_mas_ClassInfo_, allocate$CurrencyNames_mas);
	return class$;
}

$Class* CurrencyNames_mas::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun