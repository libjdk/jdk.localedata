#include <sun/util/resources/cldr/ext/CurrencyNames_ewo.h>

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

$MethodInfo _CurrencyNames_ewo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ewo::*)()>(&CurrencyNames_ewo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ewo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ewo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ewo_MethodInfo_
};

$Object* allocate$CurrencyNames_ewo($Class* clazz) {
	return $of($alloc(CurrencyNames_ewo));
}

void CurrencyNames_ewo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ewo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dir\u00e1m y\u00e1 Emir\u00e1 Ar\u00e1b Un\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kw\u00e1n\u0259za y\u00e1 Angol\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dol\u00e1r y\u00e1 Os\u0259t\u0259ral\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Din\u00e1r y\u00e1 Bah\u0259r\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"F\u0259l\u00e1\u014b y\u00e1 Burund\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"P\u00fal\u00e1 y\u00e1 Botsw\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dol\u00e1r y\u00e1 Kan\u00e1da"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"F\u0259l\u00e1\u014b y\u00e1 Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"F\u0259l\u00e1\u014b y\u00e1 Su\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yu\u00e1n Ren\u0259min\u0259b\u00ed y\u00e1 Tsain\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Es\u0259k\u00fado y\u00e1 K\u00e1p\u0259\u0301v\u025b\u0301r\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"F\u0259l\u00e1\u014b y\u00e1 dzibut\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Din\u00e1r y\u00e1 Aleh\u00e9r\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"L\u00edv\u0259\u0301l\u0259 y\u00e1 Eh\u00edb\u0259t\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"N\u00e1f\u0259ka y\u00e1 Eritel\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"B\u00edr y\u00e1 Etsi\u00f3pia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0259r\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"L\u00edv\u0259\u0301l\u0259 S\u0259t\u0259r\u0259l\u00ed\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Tzed\u00ed y\u00e1 Gan\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Dalas\u00ed y\u00e1 G\u00e1mb\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"S\u00edli y\u00e1 Gin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rup\u00ed y\u00e1 \u025b\u0301nd\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Y\u025b\u0301n y\u00e1 Hap\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Sil\u00ed\u014b y\u00e1 Keni\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"F\u0259l\u00e1\u014b y\u00e1 Kom\u00f3ria"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dol\u00e1r y\u00e1 Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Lot\u00ed y\u00e1 Lesot\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Din\u00e1r y\u00e1 Lib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dir\u00e1m y\u00e1 Mar\u00f3g"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Ariari y\u00e1 Mal\u0259g\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugiya y\u00e1 Moritan\u00ed (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ugiya y\u00e1 Moritan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rup\u00ed y\u00e1 Mor\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwatsa y\u00e1 Malaw\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metikal y\u00e1 Mozamb\u00edg"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dol\u00e1r y\u00e1 Namib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"N\u00e1\u00edra y\u00e1 Nih\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"F\u0259l\u00e1\u014b y\u00e1 Ruwand\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Ri\u00e1l y\u00e1 Arab\u00ed Saud\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rup\u00ed y\u00e1 S\u025bs\u025b\u0301l"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"L\u00edv\u0259l\u0259 y\u00e1 Sud\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"L\u00edv\u0259l\u0259 y\u00e1 Sud\u00e1n (1956\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"L\u00edv\u0259l\u0259 y\u00e1 \u01f8f\u00faf\u00fab El\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Le\u00f3ne y\u00e1 Sier\u00e1-le\u00f3n\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Sil\u00ed\u014b y\u00e1 Somal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"D\u00f3b\u0259\u0301ra y\u00e1 Sa\u00f3 Tom\u00e9 ai P\u0259lin\u0259s\u00edpe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"D\u00f3b\u0259\u0301ra y\u00e1 Sa\u00f3 Tom\u00e9 ai P\u0259lin\u0259s\u00edpe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Lilangeni y\u00e1 Swaz\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Din\u00e1r y\u00e1 Tunis\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Sil\u00ed\u014b y\u00e1 Tanazan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Sil\u00ed\u014b y\u00e1 Ugand\u00e1 (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dol\u00e1r y\u00e1 am\u025b\u0301r\u0259k\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"F\u0259l\u00e1\u014b CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"F\u0259l\u00e1\u014b CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"R\u00e1n\u0259d\u0259 y\u00e1 Afir\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwatsa y\u00e1 Zamb\u00ed (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwatsa y\u00e1 Zamb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dol\u00e1r y\u00e1 Zimbabw\u00e9"_s)
		})
	}));
	return data;
}

CurrencyNames_ewo::CurrencyNames_ewo() {
}

$Class* CurrencyNames_ewo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ewo, name, initialize, &_CurrencyNames_ewo_ClassInfo_, allocate$CurrencyNames_ewo);
	return class$;
}

$Class* CurrencyNames_ewo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun