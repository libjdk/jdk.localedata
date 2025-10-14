#include <sun/util/resources/cldr/ext/CurrencyNames_zgh.h>

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

$MethodInfo _CurrencyNames_zgh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_zgh::*)()>(&CurrencyNames_zgh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_zgh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_zgh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zgh_MethodInfo_
};

$Object* allocate$CurrencyNames_zgh($Class* clazz) {
	return $of($alloc(CurrencyNames_zgh));
}

void CurrencyNames_zgh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_zgh::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u2d30\u2d37\u2d54\u2d49\u2d4e \u2d4f \u2d4d\u2d49\u2d4e\u2d30\u2d54\u2d30\u2d5c"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u2d3d\u2d61\u2d30\u2d4f\u2d63\u2d30 \u2d4f \u2d30\u2d4f\u2d33\u2d53\u2d4d\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d53\u2d59\u2d5c\u2d54\u2d30\u2d4d\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u2d30\u2d37\u2d49\u2d4f\u2d30\u2d54 \u2d4f \u2d31\u2d43\u2d54\u2d30\u2d62\u2d4f"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d4f \u2d31\u2d53\u2d54\u2d53\u2d4f\u2d37\u2d49"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u2d30\u2d31\u2d53\u2d4d\u2d30 \u2d4f \u2d31\u2d53\u2d5c\u2d59\u2d61\u2d30\u2d4f\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d3d\u2d30\u2d4f\u2d30\u2d37\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d4f \u2d3d\u2d53\u2d4f\u2d33\u2d53"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u2d30\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d4f \u2d59\u2d61\u2d49\u2d59\u2d54\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u2d30\u2d62\u2d30\u2d4f \u2d4f \u2d5b\u2d5b\u2d49\u2d4f\u2d61\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u2d49\u2d59\u2d3d\u2d53\u2d37\u2d53 \u2d4f \u2d3d\u2d30\u2d31\u2d31\u2d49\u2d54\u2d37\u2d49"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d4f \u2d37\u2d4a\u2d49\u2d31\u2d53\u2d5c\u2d49"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u2d30\u2d37\u2d49\u2d4f\u2d30\u2d54 \u2d4f \u2d37\u2d63\u2d30\u2d62\u2d54"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u2d30\u2d4a\u2d4f\u2d49\u2d40 \u2d4f \u2d4e\u2d49\u2d5a\u2d55"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u2d4f\u2d30\u2d3c\u2d3d\u2d30 \u2d4f \u2d49\u2d54\u2d49\u2d5c\u2d49\u2d54\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u2d31\u2d49\u2d54 \u2d4f \u2d49\u2d5c\u2d62\u2d53\u2d31\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u2d53\u2d54\u2d53"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u2d30\u2d4a\u2d4f\u2d49\u2d40 \u2d30\u2d59\u2d5c\u2d54\u2d4d\u2d49\u2d4f\u2d49 \u2d4f \u2d4f\u2d4f\u2d33\u2d4d\u2d49\u2d63"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u2d59\u2d49\u2d37\u2d49 \u2d4f \u2d56\u2d30\u2d4f\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u2d37\u2d30\u2d4d\u2d30\u2d59\u2d49 \u2d4f \u2d33\u2d30\u2d4e\u2d31\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u2d30\u2d54\u2d53\u2d31\u2d49 \u2d4f \u2d4d\u2d40\u2d49\u2d4f\u2d37"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u2d30\u2d62\u2d30\u2d4f \u2d4f \u2d4d\u2d62\u2d30\u2d31\u2d30\u2d4f"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u2d30\u2d5b\u2d49\u2d4d\u2d49\u2d4f \u2d4f \u2d3d\u2d49\u2d4f\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d4f \u2d47\u2d53\u2d4e\u2d53\u2d55"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d4d\u2d49\u2d31\u2d49\u2d54\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u2d4d\u2d53\u2d5c\u2d49 \u2d4f \u2d4d\u2d49\u2d5a\u2d53\u2d5f\u2d53"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u2d30\u2d37\u2d49\u2d4f\u2d30\u2d54 \u2d4f \u2d4d\u2d49\u2d31\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u2d30\u2d37\u2d54\u2d49\u2d4e \u2d4f \u2d4d\u2d4e\u2d56\u2d54\u2d49\u2d31"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d4f \u2d4e\u2d30\u2d37\u2d30\u2d56\u2d30\u2d5b\u2d47\u2d30\u2d54"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u2d53\u2d47\u2d49\u2d62\u2d62\u2d30 \u2d4f \u2d4e\u2d53\u2d55\u2d49\u2d5f\u2d30\u2d4f\u2d62\u2d30 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u2d53\u2d47\u2d49\u2d62\u2d62\u2d30 \u2d4f \u2d4e\u2d53\u2d55\u2d49\u2d5f\u2d30\u2d4f\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u2d30\u2d54\u2d53\u2d31\u2d49 \u2d4f \u2d4e\u2d53\u2d54\u2d49\u2d59"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u2d3d\u2d61\u2d30\u2d5b\u2d30 \u2d4f \u2d4e\u2d30\u2d4d\u2d30\u2d61\u2d49"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u2d30\u2d4e\u2d49\u2d5c\u2d49\u2d3d\u2d4d \u2d4f \u2d4e\u2d53\u2d63\u2d4f\u2d31\u2d49\u2d47"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d4f\u2d30\u2d4e\u2d49\u2d31\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u2d4f\u2d30\u2d62\u2d54\u2d30 \u2d4f \u2d4f\u2d49\u2d4a\u2d49\u2d54\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u2d30\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d4f \u2d54\u2d61\u2d30\u2d4f\u2d37\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u2d30\u2d54\u2d62\u2d30\u2d4d \u2d4f \u2d59\u2d59\u2d30\u2d44\u2d53\u2d37\u2d49\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u2d30\u2d54\u2d53\u2d31\u2d49 \u2d4f \u2d59\u2d59\u2d49\u2d5b\u2d49\u2d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u2d30\u2d37\u2d49\u2d4f\u2d30\u2d54 \u2d4f \u2d59\u2d59\u2d53\u2d37\u2d30\u2d4f"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u2d30\u2d4a\u2d4f\u2d49\u2d40 \u2d4f \u2d59\u2d59\u2d53\u2d37\u2d30\u2d4f"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u2d30\u2d4a\u2d4f\u2d49\u2d40 \u2d4f \u2d59\u2d30\u2d4f\u2d5c\u2d49\u2d4d\u2d49\u2d4f"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u2d4d\u2d49\u2d62\u2d53\u2d4f"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u2d30\u2d5b\u2d49\u2d4d\u2d49\u2d4f \u2d4f \u2d5a\u2d5a\u2d53\u2d4e\u2d30\u2d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d31\u2d54\u2d30 \u2d4f \u2d59\u2d30\u2d4f\u2d5f\u2d53\u2d4e\u2d49 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d31\u2d54\u2d30 \u2d4f \u2d59\u2d30\u2d4f\u2d5f\u2d53\u2d4e\u2d49"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u2d4d\u2d49\u2d4d\u2d30\u2d4f\u2d4a\u2d49\u2d4f\u2d49"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u2d30\u2d37\u2d49\u2d4f\u2d30\u2d54 \u2d4f \u2d5c\u2d53\u2d4f\u2d59"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u2d30\u2d5b\u2d49\u2d4d\u2d49\u2d4f \u2d4f \u2d5f\u2d30\u2d4f\u2d65\u2d30\u2d4f\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u2d30\u2d5b\u2d49\u2d4d\u2d49\u2d4f \u2d4f \u2d53\u2d56\u2d30\u2d4f\u2d37\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d49\u2d61\u2d53\u2d4f\u2d30\u2d3d \u2d49\u2d4e\u2d53\u2d4f\u2d4f"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d5a\u2d49\u2d3c\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u2d3c\u2d54\u2d30\u2d4f\u2d3d \u2d5a\u2d49\u2d3c\u2d30 \u2d31\u2d49\u2d59\u2d30\u2d61"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u2d30\u2d54\u2d30\u2d4f\u2d37 \u2d4f \u2d30\u2d3c\u2d54\u2d49\u2d47\u2d62\u2d30 \u2d4f \u2d49\u2d3c\u2d3c\u2d53\u2d59"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u2d30\u2d3d\u2d61\u2d30\u2d5b\u2d30 \u2d4f \u2d63\u2d30\u2d4e\u2d31\u2d62\u2d30 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u2d30\u2d3d\u2d61\u2d30\u2d5b\u2d30 \u2d4f \u2d63\u2d30\u2d4e\u2d31\u2d62\u2d30"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d63\u2d49\u2d4e\u2d31\u2d30\u2d31\u2d61\u2d49 (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d63\u2d49\u2d4e\u2d31\u2d30\u2d31\u2d61\u2d49 (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"\u2d30\u2d37\u2d53\u2d4d\u2d30\u2d54 \u2d4f \u2d63\u2d49\u2d4e\u2d31\u2d30\u2d31\u2d61\u2d49 (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_zgh::CurrencyNames_zgh() {
}

$Class* CurrencyNames_zgh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zgh, name, initialize, &_CurrencyNames_zgh_ClassInfo_, allocate$CurrencyNames_zgh);
	return class$;
}

$Class* CurrencyNames_zgh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun