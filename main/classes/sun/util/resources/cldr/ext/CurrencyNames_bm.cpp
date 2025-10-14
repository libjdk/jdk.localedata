#include <sun/util/resources/cldr/ext/CurrencyNames_bm.h>

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

$MethodInfo _CurrencyNames_bm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_bm::*)()>(&CurrencyNames_bm::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_bm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bm_MethodInfo_
};

$Object* allocate$CurrencyNames_bm($Class* clazz) {
	return $of($alloc(CurrencyNames_bm));
}

void CurrencyNames_bm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bm::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("arabu mara kafoli Diram"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angola Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("ositirali Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bareyini Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"burundi Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"b\u0254tisiwana Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kanada Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"kongole Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"suwisi Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("siniwa Yuwan"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"capiv\u025brdi Esekudo"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"jibuti Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("alizeri Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("eziputi Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritere Nafika"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopi Bir"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("ero"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"angil\u025b Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("gana Sedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambi Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"gine Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0190ndu Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"zap\u0254ne Y\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("keniya Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"kom\u0254ri Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberiya Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("lesoto Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"mar\u0254ku Diram"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"madagasikari Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"m\u0254ritani Uguwiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"m\u0254ritani Uguwiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("morisi Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawi Kwaca"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("mozanbiki Metikali"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namibi Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"nizeriya N\u025bra"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"ruwanda Fra\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("sawudiya Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"ses\u025bli Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudani Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("sudani Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0190l\u025bni-Senu Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"siyeralew\u0254ni Lew\u0254ni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("somali Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"sawotome Dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("sawotome Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("swazilandi Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunizi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("tanzani Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("uganda Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("ameriki Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"sefa Fra\u014b (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"sefa Fra\u014b (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("sudafriki Randi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"zambi Kwaca (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("zambi Kwaca"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("zimbabuwe Dolar"_s)
		})
	}));
	return data;
}

CurrencyNames_bm::CurrencyNames_bm() {
}

$Class* CurrencyNames_bm::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bm, name, initialize, &_CurrencyNames_bm_ClassInfo_, allocate$CurrencyNames_bm);
	return class$;
}

$Class* CurrencyNames_bm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun