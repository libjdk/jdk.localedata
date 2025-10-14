#include <sun/util/resources/cldr/ext/CurrencyNames_agq.h>

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

$MethodInfo _CurrencyNames_agq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_agq::*)()>(&CurrencyNames_agq::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_agq_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_agq",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_agq_MethodInfo_
};

$Object* allocate$CurrencyNames_agq($Class* clazz) {
	return $of($alloc(CurrencyNames_agq));
}

void CurrencyNames_agq::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_agq::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dil\u00e0m \u00e8 Y\u00f9naet\u025b Alab Emel\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwanz\u00e0 \u00e8 \u00c0\u014bgol\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"D\u0254l\u00e0 e \u00d9s\u0268\u0300t\u025b\u0300l\u025bl\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Din\u00e0 \u00e8 Balae"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"F\u00e0l\u00e2\u014b \u00e8 B\u00f9lund\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Kpuwl\u00e0 \u00e8 Bot\u0268sh\u01d4an\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"D\u0254l\u00e0 \u00e8 Kanad\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"F\u00e0l\u00e2\u014b \u00e8 Ku\u014bg\u00f9l\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"F\u00e0l\u00e2\u014b \u00e8 Sues"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Y\u00f9w\u00e2n L\u00e8membi \u00e8 Chaen\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"K\u00e0b\u00f2v\u00e0dian\u00f9 \u00e8 \u00c8s\u00f9kud\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"F\u00e0l\u00e2\u014b \u00e8 Dz\u00ecbut\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Din\u00e0 \u00e8 \u00c0dz\u025bl\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"B\u0254\u0300\u014b \u00e8 Edz\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakafa \u00e8 \u00c8let\u0268\u0300l\u00e0e"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"B\u00eei \u00e8 Ety\u01d2kp\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Yul\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"B\u0254\u0300\u014b \u00e8 B\u00e8let\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"S\u025b\u0300di \u00e8 Gaan\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"D\u00e0las\u00ec \u00e8 Gamb\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"F\u00e0l\u00e2\u014b \u00e8 Gin\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Lukp\u00ec \u00e8 End\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Gh\u0268\u0302n Dz\u00e0kp\u00e0n\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Shw\u0268l\u00e0 t\u0268 Keny\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"F\u00e0l\u00e2\u014b \u00e8 Komol\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"D\u0254l\u00e0 L\u00e0eb\u025bl\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"L\u0254t\u00ec L\u00e8sut\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Din\u00e0 \u00e8 Leb\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dil\u00e0m \u00e8 M\u00f2lok\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u00c0l\u01d0al\u00e8 \u00e8 M\u00e0l\u00e0gas\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u00d9gueya \u00e8 M\u00f9l\u00e8teny\u00eca (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u00d9gueya \u00e8 M\u00f9l\u00e8teny\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Lukp\u00eci \u00e8 M\u00f9lesh\u00f2s"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwach\u00e0 \u00e8 M\u00e0law\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"M\u00e8tik\u00e0 \u00e8 M\u00f9z\u00e0mb\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"D\u0254l\u00e0 \u00e8 N\u00e0mib\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nael\u00e0 \u00e8 G\u0268\u0300any\u0268"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"F\u00e0l\u00e2\u014b \u00e8 L\u00f9wand\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Ley\u00e0 \u00e8 S\u00e0wud\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Lukp\u00eci \u00e8 S\u025bch\u025b\u0300l\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"B\u0254\u0300\u014b \u00e8 S\u00f9d\u00e0n\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"B\u0254\u0300\u014b \u00e8 S\u025b\u0300n \u00c8len\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Ly\u0254\u0302\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Shw\u0268l\u00e0 \u00e8 S\u00f9mal\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"D\u0254b\u00e0l\u00e0 \u00e8 S\u00e0wu T\u0254\u0300me \u00e0 P\u00e8l\u00e8nsip\u00e8 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"D\u0254b\u00e0l\u00e0 \u00e8 S\u00e0wu T\u0254\u0300me \u00e0 P\u00e8l\u00e8nsip\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"L\u00e8l\u00e0\u014bgen\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Din\u00e0 \u00e8 T\u00f9wnesh\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Shw\u0268l\u00e0 \u00e8 T\u00e0anzany\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Shw\u0268l\u00e0 \u00e8 Y\u00f9gand\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"D\u0254l\u00e0 \u00e8 US"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"CFA F\u00e0l\u00e2\u014b BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"CFA F\u00e0l\u00e2\u014b BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"L\u00e2n \u00e8 Af\u0268lek\u00e0 gh\u0268 Em\u00e0m gh\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwach\u00e0 \u00e8 Zamb\u00eca (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwach\u00e0 \u00e8 Zamb\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"D\u0254l\u00e0 \u00e8 Z\u00ecmbagb\u025b\u0300"_s)
		})
	}));
	return data;
}

CurrencyNames_agq::CurrencyNames_agq() {
}

$Class* CurrencyNames_agq::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_agq, name, initialize, &_CurrencyNames_agq_ClassInfo_, allocate$CurrencyNames_agq);
	return class$;
}

$Class* CurrencyNames_agq::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun