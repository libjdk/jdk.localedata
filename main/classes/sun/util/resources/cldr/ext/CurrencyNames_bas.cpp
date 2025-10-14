#include <sun/util/resources/cldr/ext/CurrencyNames_bas.h>

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

$MethodInfo _CurrencyNames_bas_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_bas::*)()>(&CurrencyNames_bas::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_bas_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bas",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bas_MethodInfo_
};

$Object* allocate$CurrencyNames_bas($Class* clazz) {
	return $of($alloc(CurrencyNames_bas));
}

void CurrencyNames_bas::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bas::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirh\u00e0m \u00e8m\u00ecr\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kw\u00e0nza \u00e0\u014bgol\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"D\u0254\u0300l\u00e2r \u00f2stral\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Din\u00e2r B\u00e0ra\u00ecn"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Fr\u01ce\u014b b\u00f9rund\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"P\u00f9la B\u00f2tswan\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"D\u0254\u0300l\u00e2r k\u00e0nad\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Fr\u01ce\u014b k\u00f2\u014bgo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Fr\u01ce\u014b s\u00f9w\u00ees"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Y\u00f9an kin\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u00c8skud\u00f2 kabwe\u1dc6r"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Fr\u01ce\u014b j\u00ecbut\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"D\u00ecn\u00e2r \u00e0lger\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Pa\u00f9nd \u00e8g\u00eept\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nafk\u00e0 \u00e8r\u00ectr\u011b\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"B\u00eer \u00e8t\u00ecop\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u00c8r\u00f4"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"St\u025brl\u00ec\u014b \u014bg\u00ecs\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"S\u00e8di g\u0101n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Dalas\u00ec gamb\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Fr\u01ce\u014b g\u00ecn\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"R\u00f9pi \u012bnd\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Y\u025b\u0302n y\u00e0p\u00e2n"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Sil\u00ee\u014b ken\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Fr\u01ce\u014b k\u00f2mor\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"D\u0254\u0300l\u00e2r l\u00ecber\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Lot\u00ec l\u00e8s\u00f2t\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"D\u00ecn\u00e2r lib\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"D\u00ecrham m\u00e0r\u00f4k"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Fr\u01ce\u014b m\u00e0l\u00e0gas\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u00d9gwiya m\u00f2r\u00ectan\u00eca (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u00d9gwiya m\u00f2r\u00ectan\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rup\u00ec\u025b\u0300 m\u00f2r\u00ees"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwaca m\u00e0law\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"M\u00e8t\u00eckal m\u00f2s\u00e0mb\u00eek"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"D\u0254\u0300l\u00e2r n\u00e0mib\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nayr\u00e0 n\u00ecger\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Fr\u01ce\u014b R\u00f9and\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"R\u00ecal s\u00e0ud\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"R\u00f9pi\u025b\u0300 s\u00e8s\u025b\u0302l"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"D\u00ecn\u00e2r s\u00f9d\u00e2n"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Pa\u00f9nd s\u00f9d\u00e2n"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Pa\u00f9nd h\u00e8len\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"L\u00e8on\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Sil\u00ee\u014b s\u00f2m\u00e0li"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobr\u00e0 s\u00e0ot\u00f2me (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobr\u00e0 s\u00e0ot\u00f2me"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"L\u00ecl\u00e0\u014bgeni sw\u00e0z\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"D\u00ecn\u00e2r t\u00f9n\u00ees"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Sil\u00ee\u014b t\u00e0nz\u00e0ni\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Sil\u00ee\u014b \u00f9g\u00e0nd\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"D\u0254la \u00e0merk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Fr\u01ce\u014b CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Fr\u01ce\u014b CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"R\u00e2n \u00e0fr\u01d0k\u00e0s\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kw\u00e0ca s\u00e0mbi\u00e0 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kw\u00e0ca s\u00e0mbi\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"D\u0254\u0300l\u00e2r s\u00ecmb\u00e0bw\u00ea"_s)
		})
	}));
	return data;
}

CurrencyNames_bas::CurrencyNames_bas() {
}

$Class* CurrencyNames_bas::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bas, name, initialize, &_CurrencyNames_bas_ClassInfo_, allocate$CurrencyNames_bas);
	return class$;
}

$Class* CurrencyNames_bas::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun