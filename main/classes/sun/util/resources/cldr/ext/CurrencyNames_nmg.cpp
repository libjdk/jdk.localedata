#include <sun/util/resources/cldr/ext/CurrencyNames_nmg.h>

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

$MethodInfo _CurrencyNames_nmg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_nmg::*)()>(&CurrencyNames_nmg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_nmg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nmg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nmg_MethodInfo_
};

$Object* allocate$CurrencyNames_nmg($Class* clazz) {
	return $of($alloc(CurrencyNames_nmg));
}

void CurrencyNames_nmg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nmg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"M\u0254n B \u00b4Arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"M\u0254n Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"D\u0254\u0301ll\u0254 \u0186stralia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"M\u0254n Bahrein"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Fra\u014b Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"M\u0254n Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"D\u0254\u0301ll\u0254 Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Fra\u014b b\u00f3 Kongol\u025b\u030c"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Fra\u014b Suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"M\u0254n b\u00f3 Chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"M\u0254n Kapv\u025brt"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Fra\u014b Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"M\u0254n Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"M\u0254n \u00c4gypt\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"M\u0254n Erytr\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"M\u0254n Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"M\u0254n Ng\u025b\u0304l\u025b\u0304n"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"M\u0254n Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"M\u0254n Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Fra\u014b Guin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"M\u0254n India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"M\u0254n Jap\u0254n"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"M\u0254n K\u025bnya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Fra\u014b b\u00f3 K\u0254m\u0254r"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"D\u0254\u0301ll\u0254 Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"M\u0254n Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"M\u0254n Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"M\u0254n Mar\u0254k"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"M\u0254n Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"M\u0254n Moritania (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"M\u0254n Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"M\u0254n Moriss"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"M\u0254n Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"M\u0254n Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"D\u0254\u0301ll\u0254 Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Na\u00efra Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Fra\u014b Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"M\u0254n Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"M\u0254n Seych\u025blle"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"M\u0254n Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"M\u0254n Sudan (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"M\u0254n m\u00e1 Saint Lina"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"M\u0254n Le\u0254ne"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"M\u0254n Somal\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"M\u0254n Sao tom\u00e9 na prinship (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"M\u0254n Sao tom\u00e9 na prinship"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"M\u0254n Ligangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"M\u0254n Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"M\u0254n Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"M\u0254n Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"D\u0254\u0301ll\u0254 Am\u025b\u0155ka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Fra\u014b CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Fra\u014b CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"M\u0254n Afrik y\u00ed s\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"M\u0254n Zambia (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"M\u0254n Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"D\u0254\u0301ll\u0254 Zimbabw\u01dd (1980\u20132008)"_s)
		})
	}));
	return data;
}

CurrencyNames_nmg::CurrencyNames_nmg() {
}

$Class* CurrencyNames_nmg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nmg, name, initialize, &_CurrencyNames_nmg_ClassInfo_, allocate$CurrencyNames_nmg);
	return class$;
}

$Class* CurrencyNames_nmg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun