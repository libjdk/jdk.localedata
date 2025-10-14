#include <sun/util/resources/cldr/ext/CurrencyNames_yav.h>

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

$MethodInfo _CurrencyNames_yav_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_yav::*)()>(&CurrencyNames_yav::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_yav_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_yav",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_yav_MethodInfo_
};

$Object* allocate$CurrencyNames_yav($Class* clazz) {
	return $of($alloc(CurrencyNames_yav));
}

void CurrencyNames_yav::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yav::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kuansa wu angol\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"tol\u00e1al wu ostalal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"tin\u00e1al wu paal\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"fal\u00e1\u014b\u025b u pulund\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"pula pu posu\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"tol\u00e1al u kan\u00e1ta"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0301fal\u00e1\u014b\u025b u kong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"yuan \u025bl\u025bnmimb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u025bsk\u00fado u k\u00e1pf\u025b\u0301\u025bl"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u0301fal\u00e1\u014b\u025b u s\u00edput\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"tin\u00e1al wu alsel\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"l\u00edfil\u025b wu is\u00edpit"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"n\u00e1fka wu elitil\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"p\u00edil wu etiop\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ol\u00f3o"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"l\u00edfil\u025b sitelel\u00edi\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"set\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"talas\u00ed u kaamb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"sil\u00ed u kiin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ulup\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"y\u025b\u0301\u025bn u sap\u0254\u0301\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"s\u00edli\u014b u k\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0301fal\u00e1\u014b\u025b u k\u0254m\u0254\u0301\u0254l"_s)
		})
	}));
	return data;
}

CurrencyNames_yav::CurrencyNames_yav() {
}

$Class* CurrencyNames_yav::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_yav, name, initialize, &_CurrencyNames_yav_ClassInfo_, allocate$CurrencyNames_yav);
	return class$;
}

$Class* CurrencyNames_yav::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun