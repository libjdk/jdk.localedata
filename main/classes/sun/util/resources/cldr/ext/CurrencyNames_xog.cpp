#include <sun/util/resources/cldr/ext/CurrencyNames_xog.h>

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

$MethodInfo _CurrencyNames_xog_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_xog::*)()>(&CurrencyNames_xog::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_xog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_xog",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_xog_MethodInfo_
};

$Object* allocate$CurrencyNames_xog($Class* clazz) {
	return $of($alloc(CurrencyNames_xog));
}

void CurrencyNames_xog::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_xog::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("USh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Diraamu eya Emireeti"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwanza y\u2019Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Doola y\u2019Awusiturelya"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinaali ya Baareeni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Faranga ya burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula ya Botiswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Doola ya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Faranga ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Faranga ey\u2019eSwitizirandi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuwani Reniminibi ya Cayina"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Esikudo ya Keepu Veredi"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Faranga ya Jjibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dinaali y\u2019Aligerya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Pawunda ya Misiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakifa ya Eritureya"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Biiru ya Esyopya"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pawunda ya Bungereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi ya Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi ya Gambya"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Faranga ya Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupiya ya Buyindi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yeni ya Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Silingi ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Faranga ya Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Doola ya Liberya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti ya Lesoso"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinaali ya Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Diraamu ey\u2019eMoroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Faranga ey\u2019eMalagase"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Wugwiya ey\u2019eMawritenya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Wugwiya ey\u2019eMawritenya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rupiya ey\u2019eMawurisyasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwaca ey\u2019eMalawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metikaali ey\u2019eMozambiiki"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nayira ey\u2019eNayijerya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Faranga ey\u2019eRwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riyaali ey\u2019eBuwarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rupiya ey\u2019eSesere"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Dinaali ey\u2019eSudaani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Pawunda ey\u2019eSudaani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Pawunda ey\u2019eSenti Herena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Lewone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Silingi ey\u2019eSomaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobura ey\u2019eSantome ne Purincipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobura ey\u2019eSantome ne Purincipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Dinaali ey\u2019eTunizya"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Silingi ey\u2019eTanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Silingi eya Yuganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Doola ey\u2019Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Faranga yamu Afirika ya wakati"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Faranga yamu Afirika ya bugwanjuba"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Randi ey\u2019eSawusafirika"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwaca ey\u2019eZambya (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwaca ey\u2019eZambya"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Doola ey\u2019eZimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_xog::CurrencyNames_xog() {
}

$Class* CurrencyNames_xog::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_xog, name, initialize, &_CurrencyNames_xog_ClassInfo_, allocate$CurrencyNames_xog);
	return class$;
}

$Class* CurrencyNames_xog::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun