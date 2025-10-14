#include <sun/util/resources/cldr/ext/CurrencyNames_ln.h>

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

$MethodInfo _CurrencyNames_ln_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ln::*)()>(&CurrencyNames_ln::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ln_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ln",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ln_MethodInfo_
};

$Object* allocate$CurrencyNames_ln($Class* clazz) {
	return $of($alloc(CurrencyNames_ln));
}

void CurrencyNames_ln::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ln::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("FC"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Diriham\u025b ya L\u00e9mila alabo"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwanza ya Ang\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dolar\u025b ya Ositali"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dinar\u025b ya Bahr\u025bn\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Fal\u00e1nga ya Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula ya Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dolar\u025b ya Kanad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Fal\u00e1nga ya Kong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Fal\u00e1nga ya Swis\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuan\u025b Renminbi ya Sin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Esikudo ya Kapev\u025br\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Fal\u00e1nga ya Dzibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dinar\u025b ya Alizeri"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Paun\u025b ya Ez\u00edpit\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakfa ya Elitl\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Bir\u025b ya Etsi\u00f3pi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0190l\u0254\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Paun\u025b ya Ang\u025bl\u025bt\u025b\u0301l\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi ya Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi ya Gambi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Fal\u00e1nga ya Gin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupi ya \u00cdnd\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yeni ya Zap\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Shiling\u025b ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Fal\u00e1nga ya Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dolar\u025b ya Liberya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Loti ya Les\u00f3to"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dinar\u025b ya Lib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dirihame ya Marok\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Fal\u00e1nga ya Madagasikar\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya ya Moritani (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya ya Moritani"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupi ya Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwasha ya Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikali ya Mozambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dolar\u025b ya Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira ya Nizerya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Fal\u00e1nga ya Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riyal\u025b ya Alabi Sawudit\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rupi ya S\u025bsh\u025bl\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Dinar\u025b ya Sud\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Paun\u025b ya Sud\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Paun\u025b ya S\u00e1ntu elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Leon\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Shiling\u025b ya Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra ya Sao Tom\u00e9 mp\u00e9 Presipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobra ya Sao Tom\u00e9 mp\u00e9 Presipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Dinar\u025b ya Tinizi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Shiling\u025b ya Tanzani"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Shiling\u025b ya Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dolar\u025b ya Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Fal\u00e1nga CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Fal\u00e1nga CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Rand\u025b ya Afr\u00edka S\u00fadi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwasha ya Zambi (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwasha ya Zambi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dolar\u025b ya Zimbabw\u025b"_s)
		})
	}));
	return data;
}

CurrencyNames_ln::CurrencyNames_ln() {
}

$Class* CurrencyNames_ln::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ln, name, initialize, &_CurrencyNames_ln_ClassInfo_, allocate$CurrencyNames_ln);
	return class$;
}

$Class* CurrencyNames_ln::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun