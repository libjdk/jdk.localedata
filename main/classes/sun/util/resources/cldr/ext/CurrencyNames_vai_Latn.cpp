#include <sun/util/resources/cldr/ext/CurrencyNames_vai_Latn.h>

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

$MethodInfo _CurrencyNames_vai_Latn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_vai_Latn::*)()>(&CurrencyNames_vai_Latn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_vai_Latn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_vai_Latn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_vai_Latn_MethodInfo_
};

$Object* allocate$CurrencyNames_vai_Latn($Class* clazz) {
	return $of($alloc(CurrencyNames_vai_Latn));
}

void CurrencyNames_vai_Latn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_vai_Latn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Yunait\u025b Arabhi \u0190mire Dihami"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Angola Kuwa\u014bza"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0186\u0301situwa Dala"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Bhar\u025b\u014b Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Bhurundi Fura\u014bki"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Bhosuwana Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kanada Dala"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"K\u00f3ngo Fura\u014bki"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Suwesi Fura\u014bki"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Chan\u00ed\u0129 Yuwa\u014b R\u025b\u014bmimbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0190sikudo Cabov\u025bdiyano"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Jibhuti Fura\u014bki"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Agiriya Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"M\u00eds\u00e9la P\u0254\u0254\u0303"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0190ritera Nakifa"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u00cdtiyopiya Bhii"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Jeng\u00e9si P\u0254\u0254\u0303"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Gana Sidi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambiya Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Gini Fura\u014bki"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u00cdndiya Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Japani\u0129 Y\u025b\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"K\u00e9nya Siye\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Komoro Fura\u014bki"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Laibhiya Dala"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Lis\u00f3to Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libhiya Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"M\u0254roko Dihami"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Malagasi Ariyari"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"M\u0254retani Yugiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"M\u0254retani Yugiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"M\u0254resh\u0254 Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawi Kuwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mozambiki M\u025btikali"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibiya Dala"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Na\u0129jiriya Na\u0129ra"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Rawunda Fura\u014bki"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Lahabu Sawodi Riya"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Sudani\u0129 P\u0254\u0254\u0303"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Si\u014b H\u025blina P\u0254\u0254\u0303"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Liy\u0254\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Somaliya Siye\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Sawo Tombe \u0253\u025b a Gbawo Dobura (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Sawo Tombe \u0253\u025b a Gbawo Dobura"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunisiya Dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Ta\u014bzaniya Siye\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Yuganda Siye\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Poo Dala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u00c1f\u00edr\u00edka T\u025b Sifa"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u00c1f\u00edr\u00edka Tele J\u00ed\u00ed Sifa"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Afirika K\u0254i Le\u014b\u014b\u025b l\u0254 Randi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambiya Kuwacha (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Zambiya Kuwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Zimbhabhuwe Dala"_s)
		})
	}));
	return data;
}

CurrencyNames_vai_Latn::CurrencyNames_vai_Latn() {
}

$Class* CurrencyNames_vai_Latn::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_vai_Latn, name, initialize, &_CurrencyNames_vai_Latn_ClassInfo_, allocate$CurrencyNames_vai_Latn);
	return class$;
}

$Class* CurrencyNames_vai_Latn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun