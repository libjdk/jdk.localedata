#include <sun/util/resources/cldr/ext/CurrencyNames_vai.h>

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

$MethodInfo _CurrencyNames_vai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_vai::*)()>(&CurrencyNames_vai::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_vai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_vai",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_vai_MethodInfo_
};

$Object* allocate$CurrencyNames_vai($Class* clazz) {
	return $of($alloc(CurrencyNames_vai));
}

void CurrencyNames_vai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_vai::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\ua5b3\ua56f\ua524\ua5f3 \ua549\ua55f\ua52c \ua5e1\ua546\ua513\ua53b \ua535\ua54c\ua546"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\ua549\ua590\ua55e \ua5b4\ua54e\ua60b\ua564"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\ua5ba\ua53b\ua5a4\ua503\ua537\ua569 \ua55c\ua55e\ua54c"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\ua551\ua5f8\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\ua59c\ua5a9\ua53a \ua5a2\ua55f\ua60b\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\ua577\ua5ac\ua54e\ua56f \ua59b\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\ua56a\ua56f\ua55c \ua55c\ua55e\ua54c"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\ua58f\ua590\ua571 \ua5a2\ua55f\ua60b\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\ua5ac\ua503\ua564 \ua5a8\ua56e\ua54a \ua5a2\ua55f\ua60b\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\ua566\ua547\ua527 \ua5b3\ua54e\ua60b \ua513\ua546\ua60b\ua52c"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\ua5e1\ua53b\ua5b4\ua581 \ua56a\ua577\ua5f2\ua5e1\ua535\ua569\ua586"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\ua540\ua59c\ua533 \ua5a2\ua55f\ua60b\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\ua549\ua537\ua540\ua538\ua569 \ua535\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\ua546\ua53b\ua55e \ua5c1\ua5bb\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\ua500\ua538\ua533\ua55f \ua5c1\ua5bb\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\ua524\ua57f\ua58e\ua52a\ua569 \ua52b\ua524"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\ua5b3\ua584"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\ua51b\ua51f\ua53b \ua5c1\ua5bb\ua60b \ua53b\ua5f3\ua537\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\ua56d\ua54c\ua56f \ua53b\ua535"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\ua56d\ua52d\ua569 \ua55c\ua55e\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\ua545\ua524\ua547 \ua5a2\ua55f\ua60b\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\ua524\ua53a\ua569 \ua5a9\ua52a"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\ua567\ua550\ua547\ua527 \ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\ua51e\ua570 \ua53b\ua51d\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\ua58f\ua592\ua584 \ua5a2\ua55f\ua60b\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\ua55e\ua524\ua52b\ua569 \ua55c\ua55e\ua54c"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\ua537\ua587\ua57f \ua583\ua533"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\ua537\ua52b\ua569 \ua535\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\ua5de\ua55f\ua58f \ua535\ua54c\ua546"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\ua56e\ua55e\ua56d\ua54c\ua53b \ua549\ua538\ua569\ua538"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\ua5de\ua538\ua55a\ua547\ua570 \ua5b3\ua545\ua569 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\ua5de\ua538\ua55a\ua547\ua570 \ua5b3\ua545\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\ua5de\ua513\ua5d4 \ua5a9\ua52a"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\ua56e\ua55e\ua54c\ua528 \ua5b4\ua54e\ua566"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\ua5de\ua564\ua52d\ua543 \ua546\ua533\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\ua56f\ua546\ua52b\ua569 \ua55c\ua55e\ua54c"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\ua56f\ua524\ua540\ua538\ua569 \ua56f\ua524\ua55f"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\ua55f\ua599\ua561 \ua5a2\ua55f\ua60b\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\ua562\ua599\ua535 \ua538\ua569\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\ua516\ua5fc\ua537 \ua5a9\ua52a"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\ua5ac\ua5f5\ua60b \ua5c1\ua5bb\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\ua53b\ua60b \ua5e5\ua537\ua56f \ua5c1\ua5bb\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\ua537\ua5da\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\ua587\ua56e\ua537 \ua53b\ua51d\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\ua562\ua574 \ua57f\ua508 \ua5ea \ua549 \ua557\ua574 \ua581\ua59c\ua55f (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\ua562\ua574 \ua57f\ua508 \ua5ea \ua549 \ua557\ua574 \ua581\ua59c\ua55f"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\ua537\ua55e\ua51f\ua547"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\ua5a4\ua547\ua53b\ua569 \ua535\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\ua55a\ua60b\ua564\ua547\ua570 \ua53b\ua51d\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\ua5b3\ua56d\ua561 \ua53b\ua51d\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\ua576\ua571 \ua55c\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\ua549\ua531\ua538\ua56a \ua5db\ua524 \ua512\ua60b\ua5e3 \ua5cf \ua55f\ua60b\ua535"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\ua564\ua52d\ua569 \ua5b4\ua54e\ua566 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\ua564\ua52d\ua569 \ua5b4\ua54e\ua566"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\ua53d\ua553\ua59c\ua503 \ua55c\ua55e"_s)
		})
	}));
	return data;
}

CurrencyNames_vai::CurrencyNames_vai() {
}

$Class* CurrencyNames_vai::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_vai, name, initialize, &_CurrencyNames_vai_ClassInfo_, allocate$CurrencyNames_vai);
	return class$;
}

$Class* CurrencyNames_vai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun