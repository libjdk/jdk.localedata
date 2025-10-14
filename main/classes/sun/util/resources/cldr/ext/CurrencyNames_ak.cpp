#include <sun/util/resources/cldr/ext/CurrencyNames_ak.h>

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

$MethodInfo _CurrencyNames_ak_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ak::*)()>(&CurrencyNames_ak::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ak",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ak_MethodInfo_
};

$Object* allocate$CurrencyNames_ak($Class* clazz) {
	return $of($alloc(CurrencyNames_ak));
}

void CurrencyNames_ak::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ak::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of(u"GH\u20b5"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0190mirete Arab Nkab\u0254mu Deram"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angola Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0186strelia D\u0254la"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Baren Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundi Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswana Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Kanada D\u0254la"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Kongo Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0190skudo"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Gyebuti Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0186lgyeria Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Egypt P\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0190retereya Nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Itiopia Bir"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Iro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Breten P\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ghana Sidi (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ghana Sidi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambia Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Gini Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("India Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Gyapan Y\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Kenya Hyelen"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Komoro Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Laeberia D\u0254la"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesoto Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libya Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Moroko Diram"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Madagasi Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"M\u0254retenia Ouguiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"M\u0254retenia Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"M\u0254rehye\u0254s Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawi Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mozambik Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Namibia D\u0254la"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naegyeria Naira"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Rewanda Frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudi Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Seyhy\u025bls Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudan Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Sudan P\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"St Helena P\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Somailia Hyelen"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Sao Tome ne Principe Dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Sao Tome ne Principe Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunisia Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Tanzania Hyelen"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Uganda Hyelen"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Am\u025brika D\u0254la"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Sefa"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Afrika Anaafo Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambia Kwacha (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Zambia Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabwe D\u0254la"_s)
		})
	}));
	return data;
}

CurrencyNames_ak::CurrencyNames_ak() {
}

$Class* CurrencyNames_ak::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ak, name, initialize, &_CurrencyNames_ak_ClassInfo_, allocate$CurrencyNames_ak);
	return class$;
}

$Class* CurrencyNames_ak::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun