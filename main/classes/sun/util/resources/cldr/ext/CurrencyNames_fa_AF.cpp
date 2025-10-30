#include <sun/util/resources/cldr/ext/CurrencyNames_fa_AF.h>

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

$MethodInfo _CurrencyNames_fa_AF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fa_AF::*)()>(&CurrencyNames_fa_AF::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fa_AF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fa_AF",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fa_AF_MethodInfo_
};

$Object* allocate$CurrencyNames_fa_AF($Class* clazz) {
	return $of($alloc(CurrencyNames_fa_AF));
}

void CurrencyNames_fa_AF::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fa_AF::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u062f\u0627\u0644\u0631 \u0622\u0633\u062a\u0631\u0627\u0644\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u062f\u0627\u0644\u0631 \u0628\u0631\u0648\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0631\u0648\u0633\u06cc\u0647\u0654 \u0633\u0641\u06cc\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0631\u0648\u0628\u0644 \u0631\u0648\u0633\u06cc\u0647\u0654 \u0633\u0641\u06cc\u062f (\u06f2\u06f0\u06f0\u06f0\u2013\u06f2\u06f0\u06f1\u06f6)"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u062f\u0627\u0644\u0631 \u06a9\u0627\u0646\u0627\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u06a9 \u0633\u0648\u06cc\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u06a9\u0631\u0648\u0646 \u062f\u0646\u0645\u0627\u0631\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u06cc\u0646 \u062c\u0627\u067e\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u067e\u0632\u0648\u06cc \u0645\u06a9\u0633\u06cc\u06a9\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u06af\u06cc\u0644\u062f\u0631 \u0647\u0627\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u06a9\u0631\u0648\u0646 \u0646\u0627\u0631\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u06a9\u0631\u0648\u0646 \u0633\u0648\u06cc\u062f\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u062f\u0627\u0644\u0631 \u0633\u06cc\u0646\u06af\u0627\u067e\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0633\u0627\u0645\u0627\u0646\u06cc \u062a\u0627\u062c\u06a9\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u062f\u0627\u0644\u0631 \u0627\u0645\u0631\u06cc\u06a9\u0627"_s)
		})
	}));
	return data;
}

CurrencyNames_fa_AF::CurrencyNames_fa_AF() {
}

$Class* CurrencyNames_fa_AF::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fa_AF, name, initialize, &_CurrencyNames_fa_AF_ClassInfo_, allocate$CurrencyNames_fa_AF);
	return class$;
}

$Class* CurrencyNames_fa_AF::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun