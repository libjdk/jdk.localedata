#include <sun/util/resources/cldr/ext/CurrencyNames_ug.h>

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

$MethodInfo _CurrencyNames_ug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ug::*)()>(&CurrencyNames_ug::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ug",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ug_MethodInfo_
};

$Object* allocate$CurrencyNames_ug($Class* clazz) {
	return $of($alloc(CurrencyNames_ug));
}

void CurrencyNames_ug::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ug::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"\uffe5"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"\u0626\u0627\u0646\u062f\u0648\u0631\u0631\u0627\u0646 \u067e\u06d0\u0633\u06d0\u062a\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0626\u06d5\u0631\u06d5\u0628 \u0628\u0649\u0631\u0644\u06d5\u0634\u0645\u06d5 \u062e\u06d5\u0644\u0649\u067e\u0649\u0644\u0649\u0643\u0649 \u062f\u06d5\u0631\u06be\u06d5\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0626\u0627\u0641\u063a\u0627\u0646 \u0626\u0627\u0641\u063a\u0627\u0646\u0649 (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0626\u0627\u0641\u063a\u0627\u0646 \u0626\u0627\u0641\u063a\u0627\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"\u0626\u0627\u0644\u0628\u0627\u0646\u0649\u064a\u06d5 \u0644\u06d0\u0643\u0649 (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0626\u0627\u0644\u0628\u0627\u0646\u0649\u064a\u06d5 \u0644\u06d0\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0626\u06d5\u0631\u0645\u06d0\u0646\u0649\u064a\u06d5 \u062f\u0649\u0631\u0627\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u06af\u0648\u0644\u0644\u0627\u0646\u062f\u0649\u064a\u06d5\u06af\u06d5 \u0642\u0627\u0631\u0627\u0634\u0644\u0649\u0642 \u0626\u0627\u0646\u062a\u0649\u0644\u0644\u06d0\u0646 \u06af\u06c7\u0644\u062f\u06d0\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0626\u0627\u0646\u06af\u0648\u0644\u0627 \u0643\u06c7\u06cb\u0627\u0646\u0632\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\u0626\u0627\u0646\u06af\u0648\u0644\u0627 \u0643\u06c7\u06cb\u0627\u0646\u0632\u0627\u0633\u0649 (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\u0626\u0627\u0646\u06af\u0648\u0644\u0627 \u064a\u06d0\u06ad\u0649 \u0643\u06c7\u06cb\u0627\u0646\u0632\u0627\u0633\u0649 (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\u0626\u0627\u0646\u06af\u0648\u0644\u0627 \u0642\u0627\u064a\u062a\u0627 \u062a\u06d5\u06ad\u0634\u06d5\u0644\u06af\u06d5\u0646 \u0643\u06c7\u06cb\u0627\u0646\u0632\u0627\u0633\u0649 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u067e\u06d0\u0633\u0648 \u0644\u06d0\u064a\u0649 (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u067e\u06d0\u0633\u0648\u0633\u0649 (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u067e\u06d0\u0633\u0648\u0633\u0649 (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0649\u064a\u06d5 \u0634\u0649\u0644\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0626\u0627\u0631\u06c7\u0628\u0627\u0646 \u0641\u0649\u0644\u0648\u0631\u06c7\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u0626\u06d5\u0632\u06d5\u0631\u0628\u06d5\u064a\u062c\u0627\u0646 \u0645\u0627\u0646\u0627\u062a\u0649 (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0626\u06d5\u0632\u06d5\u0631\u0628\u06d5\u064a\u062c\u0627\u0646 \u0645\u0627\u0646\u0627\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u0628\u0648\u0633\u0646\u0649\u064a\u06d5-\u062e\u06d0\u0631\u062a\u0633\u06d0\u06af\u0648\u06cb\u0649\u0646\u0627 \u062f\u0649\u0646\u0627\u0631\u0649 (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0628\u0648\u0633\u0646\u0649\u064a\u06d5-\u062e\u06d0\u0631\u062a\u0633\u06d0\u06af\u0648\u06cb\u0649\u0646\u0627 \u0626\u0627\u0644\u0645\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634\u0686\u0627\u0646 \u0645\u0627\u0631\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u0628\u0648\u0633\u0646\u0649\u064a\u06d5-\u062e\u06d0\u0631\u062a\u0633\u06d0\u06af\u0648\u06cb\u0649\u0646\u0627 \u064a\u06d0\u06ad\u0649 \u062f\u0649\u0646\u0627\u0631\u0649 (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0628\u0627\u0631\u0628\u0627\u062f\u0648\u0633 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0628\u0627\u06ad\u0644\u0627\u062f\u0649\u0634 \u062a\u0627\u0643\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u0628\u06d0\u0644\u06af\u0649\u064a\u06d5 \u0641\u0631\u0627\u0646\u0643\u0649 (\u0626\u0627\u0644\u0645\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634\u0686\u0627\u0646)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u0628\u06d0\u0644\u06af\u0649\u064a\u06d5 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u0628\u06d0\u0644\u06af\u0649\u064a\u06d5 \u0641\u0631\u0627\u0646\u0643\u0649 (\u067e\u06c7\u0644\u2013\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u0628\u06c7\u0644\u063a\u0627\u0631\u0649\u064a\u06d5 \u0642\u0627\u062a\u062a\u0649\u0642 \u0644\u06d0\u06cb\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"\u0628\u06c7\u0644\u063a\u0627\u0631\u0649\u064a\u06d5 \u0626\u0649\u062c\u062a\u0649\u0645\u0627\u0626\u0649\u064a \u0644\u06d0\u06cb\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0628\u06c7\u0644\u063a\u0627\u0631\u0649\u064a\u06d5 \u0644\u06d0\u06cb\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"\u0628\u06c7\u0644\u063a\u0627\u0631\u0649\u064a\u06d5 \u0644\u06d0\u06cb\u0627\u0633\u0649 (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u0628\u06d5\u06be\u0631\u06d5\u064a\u0646 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0628\u06c7\u0631\u06c7\u0646\u062f\u0649 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0628\u06d0\u0631\u0645\u06c7\u062f\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0628\u0649\u0631\u06c7\u0646\u06d0\u064a \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u06d5 \u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u0627\u0646\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"\u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u06d5 \u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u0627\u0646\u0648\u0633\u0649 (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u06d5 \u067e\u0649\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u06d5 \u0645\u06c7\u062f\u0648\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u064a\u06d0\u06ad\u0649 \u0643\u0631\u06c7\u0632\u06d0\u0631\u0648\u0633\u0649 (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u0643\u0631\u06c7\u0632\u0627\u062f\u0648\u0633\u0649 (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u064a\u06d0\u06ad\u0649 \u0643\u0631\u06c7\u0632\u06d0\u0631\u0648\u0633\u0649 (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u0631\u0649\u064a\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u064a\u06d0\u06ad\u0649 \u0643\u0631\u06c7\u0632\u0627\u062f\u0648\u0633\u0649 (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u0643\u0631\u06c7\u0632\u06d0\u0631\u0648\u0633\u0649 (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u0643\u0631\u06c7\u0632\u06d0\u0631\u0648\u0633\u0649 (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0628\u0627\u06be\u0627\u0645\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0628\u06c7\u062a\u0627\u0646 \u0646\u06af\u06c7\u0644\u062a\u0631\u06c7\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u0628\u0649\u0631\u0645\u0627 \u0643\u0649\u064a\u0627\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u0628\u0648\u062a\u0633\u06cb\u0627\u0646\u0627 \u067e\u06c7\u0644\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u0628\u06d0\u0644\u0627\u0631\u06c7\u0633\u0649\u064a\u06d5 \u064a\u06d0\u06ad\u0649 \u0631\u06c7\u0628\u0644\u0649\u0633\u0649 (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0628\u06d0\u0644\u0627\u0631\u06c7\u0633\u0649\u064a\u06d5 \u0631\u06c7\u0628\u0644\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0628\u06d0\u0644\u0627\u0631\u06c7\u0633\u0649\u064a\u06d5 \u0631\u06c7\u0628\u0644\u0649\u0633\u0649 (\u06f2\u06f0\u06f0\u06f0\u2013\u06f2\u06f0\u06f1\u06f6)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0628\u06d0\u0644\u0649\u0632 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0643\u0627\u0646\u0627\u062f\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0643\u0648\u0646\u06af\u0648 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"WIR \u064a\u0627\u06cb\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0634\u0649\u06cb\u06d0\u062a\u0633\u0649\u064a\u06d5 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"\u0686\u0649\u0644\u0649 \u0626\u06d0\u0633\u0643\u06c7\u062f\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u0686\u0649\u0644\u0649 \u06be\u06d0\u0633\u0627\u0628\u0627\u062a \u0628\u0649\u0631\u0644\u0649\u0643\u0649 (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0686\u0649\u0644\u0649 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"\u062c\u06c7\u06ad\u06af\u0648 \u062e\u06d5\u0644\u0642 \u0628\u0627\u0646\u0643\u0649\u0633\u0649 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u062c\u06c7\u06ad\u06af\u0648 \u064a\u06c8\u06d5\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0643\u0648\u0644\u0648\u0645\u0628\u0649\u064a\u06d5 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\u0643\u0648\u0644\u0648\u0645\u0628\u0649\u064a\u06d5 \u06be\u06d5\u0642\u0649\u0642\u0649\u064a \u0642\u0649\u0645\u0645\u06d5\u062a \u0628\u0649\u0631\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u0643\u0648\u0633\u062a\u0627\u0631\u0649\u0643\u0627 \u0643\u0648\u0644\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u0633\u06d0\u0631\u0628\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649 (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u0686\u06d0\u062e\u0633\u0649\u0644\u0648\u06cb\u0627\u0643\u0649\u064a\u06d5 \u0642\u0627\u062a\u062a\u0649\u0642 \u0643\u0648\u0631\u06c7\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u0643\u06c7\u0628\u0627 \u0626\u0627\u0644\u0645\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634\u0686\u0627\u0646 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u0643\u06c7\u0628\u0627 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u064a\u06d0\u0634\u0649\u0644 \u062a\u06c7\u0645\u0634\u06c7\u0642 \u0626\u06d0\u0633\u0643\u06c7\u062f\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u0633\u0649\u067e\u0631\u06c7\u0633 \u0641\u0648\u0646\u062f \u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u0686\u06d0\u062e \u062c\u06c7\u0645\u06be\u06c7\u0631\u0649\u064a\u0649\u062a\u0649 \u0643\u0648\u0631\u06c7\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u06af\u06d0\u0631\u0645\u0627\u0646\u0649\u064a\u06d5 \u0645\u0627\u0631\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u06af\u06d0\u0631\u0645\u0627\u0646\u0649\u064a\u06d5 \u0645\u0627\u0631\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u062c\u0649\u0628\u06c7\u062a\u0649 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u062f\u0627\u0646\u0649\u064a\u06d5 \u0643\u0631\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u062f\u0648\u0645\u0649\u0646\u0649\u0643\u0627 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0626\u0627\u0644\u062c\u0649\u0631\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"\u0626\u06d0\u0643\u06cb\u0627\u062f\u0648\u0631 \u0633\u06c7\u0643\u0631\u06d0\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"\u0626\u06d0\u0643\u06cb\u0627\u062f\u0648\u0631 \u062a\u06c7\u0631\u0627\u0642\u0644\u0649\u0642 \u0642\u0649\u0645\u0645\u06d5\u062a \u0628\u0649\u0631\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u0626\u06d0\u0633\u062a\u0648\u0646\u0649\u064a\u06d5 \u0643\u0631\u06c7\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0645\u0649\u0633\u0649\u0631 \u0641\u0648\u0646\u062f \u0633\u0649\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0626\u06d0\u0631\u0649\u062a\u0631\u06d0\u064a\u06d5 \u0646\u0627\u0643\u0641\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0626\u0649\u0633\u067e\u0627\u0646\u0649\u064a\u06d5 \u067e\u06d0\u0633\u06d0\u062a\u0627\u0633\u0649 (A \u06be\u06d0\u0633\u0627\u0628\u0627\u062a)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0626\u0649\u0633\u067e\u0627\u0646\u0649\u064a\u06d5 \u067e\u06d0\u0633\u06d0\u062a\u0627\u0633\u0649 (\u0626\u0627\u0644\u0645\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634 \u06be\u06d0\u0633\u0627\u0628\u0627\u062a\u0649)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0626\u0649\u0633\u067e\u0627\u0646\u0649\u064a\u06d5 \u067e\u06d0\u0633\u06d0\u062a\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0626\u06d0\u0641\u0649\u064a\u0648\u067e\u0649\u064a\u06d5 \u0628\u0649\u0631\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u0641\u0649\u0646\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u0645\u0627\u0631\u0643\u0643\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0641\u0649\u062c\u0649 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u0641\u0627\u0644\u0643\u0644\u0627\u0646\u062f \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u0641\u0648\u0646\u062f \u0633\u0649\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0626\u06d5\u0646\u06af\u0644\u0649\u064a\u06d5 \u0641\u0648\u0646\u062f \u0633\u0649\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\u06af\u0649\u0631\u06c7\u0632\u0649\u064a\u06d5 \u0643\u06c7\u067e\u0648\u0646 \u0644\u0627\u0631\u0649\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u06af\u0649\u0631\u06c7\u0632\u0649\u064a\u06d5 \u0644\u0627\u0631\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u06af\u0627\u0646\u0627 \u0633\u06d0\u062f\u0649\u0633\u0649 (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u06af\u0627\u0646\u0627 \u0633\u06d0\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u062c\u06d5\u0628\u0649\u0644\u062a\u0627\u0631\u0649\u0642 \u0641\u0648\u0646\u062f \u0633\u0649\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u06af\u0627\u0645\u0628\u0649\u064a\u06d5 \u062f\u0627\u0644\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u0646\u06d0\u064a\u06d5 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u0646\u06d0\u064a\u06d5 \u0633\u0649\u0644\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\u0626\u06d0\u0643\u06cb\u0627\u062a\u0648\u0631 \u06af\u0649\u06cb\u0649\u0646\u06d0\u064a\u06d5 \u0626\u06d0\u0643\u06cb\u06d0\u0644\u06d0\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u06af\u0649\u0631\u06d0\u062a\u0633\u0649\u064a\u06d5 \u062f\u0631\u0627\u062e\u0645\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u06af\u0649\u06cb\u0627\u062a\u06d0\u0645\u0627\u0644\u0627 \u0643\u06c7\u06cb\u06d0\u062a\u0632\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\u067e\u0648\u0631\u062a\u06c7\u06af\u0627\u0644\u0649\u064a\u06d5 \u06af\u0649\u06cb\u0649\u0646\u06d0\u064a\u06d5 \u0626\u06d0\u0633\u0643\u06c7\u062f\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u0646\u06d0\u064a\u06d5-\u0628\u0649\u0633\u0633\u0627\u0626\u06c7 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u0626\u0627\u0646\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0634\u064a\u0627\u06ad\u06af\u0627\u06ad \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u06be\u0648\u0646\u062f\u06c7\u0631\u0627\u0633 \u0644\u06d0\u0645\u067e\u0649\u0631\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u0643\u0649\u0631\u0648\u062f\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0643\u0649\u0631\u0648\u062f\u0649\u064a\u06d5 \u0643\u06c7\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u06be\u0627\u064a\u062a\u0649 \u06af\u06c7\u0631\u062f\u06d0\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u06cb\u06d0\u0646\u06af\u0649\u0631\u0649\u064a\u06d5 \u0641\u0648\u0631\u06d0\u0646\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u06be\u0649\u0646\u062f\u0648\u0646\u06d0\u0632\u0649\u064a\u06d5 \u0631\u06c7\u067e\u0649\u064a\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0626\u0649\u0631\u06d0\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0626\u0649\u0633\u0631\u0627\u0626\u0649\u0644\u0649\u064a\u06d5 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"\u0626\u0649\u0633\u0631\u0627\u0626\u0649\u0644 \u0634\u06d0\u0643\u06d0\u0644\u0649 (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0626\u0649\u0633\u0631\u0627\u0626\u0649\u0644 \u064a\u06d0\u06ad\u0649 \u0634\u06d0\u0643\u06d0\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u06be\u0649\u0646\u062f\u0649\u0633\u062a\u0627\u0646 \u0631\u06c7\u067e\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0626\u0649\u0631\u0627\u0642 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0626\u0649\u0631\u0627\u0646 \u0631\u0649\u064a\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u0643\u0631\u0648\u0646\u0627\u0633\u0649 (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u0643\u0631\u0648\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0626\u0649\u062a\u0627\u0644\u0649\u064a\u06d5 \u0644\u0649\u0631\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u064a\u0627\u0645\u0627\u064a\u0643\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0626\u0649\u064a\u0648\u0631\u062f\u0627\u0646\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u064a\u0627\u067e\u0648\u0646\u0649\u064a\u06d5 \u064a\u06d0\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0643\u06d0\u0646\u0649\u064a\u06d5 \u0634\u0649\u0644\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u0642\u0649\u0631\u063a\u0649\u0632\u0649\u0633\u062a\u0627\u0646 \u0633\u0648\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0643\u0627\u0645\u0628\u0648\u062f\u0698\u0627 \u0631\u0649\u0626\u06d0\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0643\u0648\u0645\u0648\u0631\u0648 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0643\u0648\u0631\u06d0\u064a\u06d5 \u06cb\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0643\u0648\u0631\u06d0\u064a\u06d5 \u062e\u06cb\u0627\u0646\u0649 (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0643\u0648\u0631\u06d0\u064a\u06d5 \u06cb\u0648\u0646\u0649 (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0643\u0648\u0631\u06d0\u064a\u06d5 \u06cb\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0643\u06c7\u06cb\u06d5\u064a\u062a \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u0643\u0627\u064a\u0645\u0627\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0642\u0627\u0632\u0627\u0642\u0649\u0633\u062a\u0627\u0646 \u062a\u06d5\u06ad\u06af\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0644\u0627\u0626\u0648\u0633 \u0643\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0644\u0649\u06cb\u0627\u0646 \u0641\u0648\u0646\u062f \u0633\u0649\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0633\u0649\u0631\u0649\u0644\u0627\u0646\u0643\u0627 \u0631\u06c7\u067e\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0644\u0649\u0628\u06d0\u0631\u0649\u064a\u06d5 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u0644\u06d0\u0633\u0648\u062a\u0648 \u0644\u0648\u062a\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u0644\u0649\u062a\u06cb\u0627 \u0644\u0649\u062a\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u0644\u0649\u062a\u06cb\u0627 \u062a\u0627\u0644\u0648\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\u0644\u064a\u06c7\u0643\u0633\u06d0\u0645\u0628\u06c7\u0631\u06af \u0626\u0627\u0644\u0645\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634\u0686\u0627\u0646 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u0644\u064a\u06c7\u0643\u0633\u06d0\u0645\u0628\u06c7\u0631\u06af \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u0644\u0649\u064a\u06c7\u0643\u0633\u06d0\u0645\u0628\u06c7\u0631\u06af \u067e\u06c7\u0644-\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u0644\u0627\u062a\u06cb\u0649\u064a\u06d5 \u0644\u0627\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u0644\u0627\u062a\u06cb\u0649\u064a\u06d5 \u0631\u06c7\u0628\u0644\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0644\u0649\u06cb\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0645\u0627\u0631\u0627\u0643\u06d5\u0634 \u062f\u0649\u0631\u06be\u06d5\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u0645\u0627\u0631\u0627\u0643\u06d5\u0634 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"\u0645\u0648\u0646\u0627\u0643\u0648 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"\u0645\u0648\u0644\u062f\u0648\u06cb\u0627 \u0643\u06c7\u067e\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u0645\u0648\u0644\u062f\u0648\u06cb\u0627 \u0644\u06d0\u06cb\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0645\u0627\u062f\u0627\u063a\u0627\u0633\u0642\u0627\u0631 \u0626\u0627\u0631\u0649\u0626\u0627\u0631\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u0645\u0627\u062f\u0627\u063a\u0627\u0633\u0642\u0627\u0631 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u0645\u0627\u0643\u06d0\u062f\u0648\u0646\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"\u0645\u0627\u0643\u06d0\u062f\u0648\u0646\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649 (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u0645\u0627\u0644\u0649 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u0645\u0649\u064a\u0627\u0646\u0645\u0627\u0631 \u0643\u0649\u064a\u0627\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u0645\u0648\u06ad\u063a\u06c7\u0644\u0649\u064a\u06d5 \u062a\u06c8\u06af\u0631\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u0626\u0627\u06cb\u0645\u06d0\u0646 \u067e\u0627\u062a\u0627\u0643\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0627\u0646\u0649\u064a\u06d5 \u0626\u06c7\u06af\u0649\u064a\u06d5\u0633\u0649 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0627\u0646\u0649\u064a\u06d5 \u0626\u06c7\u06af\u0649\u064a\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u0645\u0627\u0644\u062a\u0627 \u0644\u0649\u0631\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u0645\u0627\u0644\u062a\u0627 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0649\u0626\u06c7\u0633 \u0631\u06c7\u067e\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"\u0645\u0627\u0644\u062f\u0649\u06cb\u0649 \u0631\u06c7\u067e\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u0645\u0627\u0644\u062f\u0649\u06cb\u0649 \u0631\u06c7\u0641\u0649\u064a\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u0645\u0627\u0644\u0627\u06cb\u0649 \u0643\u06cb\u0627\u0686\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u0643\u06c8\u0645\u06c8\u0634 \u067e\u06d0\u0633\u0648\u0633\u0649 (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u0645\u06d5\u0628\u0644\u06d5\u063a \u0628\u0649\u0631\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u0645\u0627\u0644\u0627\u064a\u0634\u0649\u064a\u0627 \u0631\u0649\u06ad\u06af\u0649\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u0645\u0648\u0632\u0627\u0645\u0628\u0649\u0643 \u0626\u06d0\u0633\u0643\u06c7\u062f\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u0645\u0648\u0632\u0627\u0645\u0628\u0649\u0643 \u0645\u06d0\u062a\u0649\u0643\u0627\u0644\u0649 (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0645\u0648\u0632\u0627\u0645\u0628\u0649\u0643 \u0645\u06d0\u062a\u0649\u0643\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0646\u0627\u0645\u0649\u0628\u0649\u064a\u06d5 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0646\u0649\u06af\u06d0\u0631\u0649\u064a\u06d5 \u0646\u0627\u064a\u0631\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u0646\u0649\u06af\u06d0\u0631\u0649\u064a\u06d5 \u0643\u0648\u0631\u062f\u0648\u0628\u0627\u0633\u0649 (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u0646\u0649\u06af\u06d0\u0631\u0649\u064a\u06d5 \u0643\u0648\u0631\u062f\u0648\u0628\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u06af\u0648\u0644\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u06af\u06c8\u0644\u062f\u0649\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0646\u0648\u0631\u06cb\u06d0\u06af\u0649\u064a\u06d5 \u0643\u0631\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0646\u06d0\u067e\u0627\u0644 \u0631\u06c7\u067e\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u064a\u06d0\u06ad\u0649 \u0632\u06d0\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0626\u0648\u0645\u0627\u0646 \u0631\u0649\u064a\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u067e\u0627\u0646\u0627\u0645\u0627 \u0628\u0627\u0644\u0628\u0648\u0626\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u067e\u06d0\u0631\u06c7 \u0626\u0649\u0646\u062a\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u067e\u06d0\u0631\u06c7 \u0633\u0648\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u067e\u06d0\u0631\u06c7 \u0633\u0648\u0644\u0649 (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u067e\u0627\u067e\u06c7\u0626\u0627 \u064a\u06d0\u06ad\u0649 \u06af\u0649\u06cb\u0649\u0646\u06d0\u064a\u06d5 \u0643\u0649\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u0641\u0649\u0644\u0649\u067e\u067e\u0649\u0646 \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u067e\u0627\u0643\u0649\u0633\u062a\u0627\u0646 \u0631\u06c7\u067e\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u067e\u0648\u0644\u0634\u0627 \u0632\u0649\u0644\u0648\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\u067e\u0648\u0644\u0634\u0627 \u0632\u0649\u0644\u0648\u062a\u0649 (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u067e\u0648\u0631\u062a\u06c7\u06af\u0627\u0644\u0649\u064a\u06d5 \u0626\u06d0\u0633\u0643\u06c7\u062f\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u067e\u0627\u0631\u0627\u06af\u06cb\u0627\u064a \u06af\u06c7\u0626\u0627\u0631\u0627\u0646\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0642\u0627\u062a\u0627\u0631 \u0631\u0649\u064a\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u0631\u0648\u062f\u06d0\u0632\u0649\u064a\u06d5 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u0631\u06c7\u0645\u0649\u0646\u0649\u064a\u06d5 \u0644\u06d0\u064a\u0649 (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0631\u06c7\u0645\u0649\u0646\u0649\u064a\u06d5 \u0644\u06d0\u064a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0633\u06d0\u0631\u0628\u0649\u064a\u06d5 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0631\u06c7\u0633\u0649\u064a\u06d5 \u0631\u06c7\u0628\u0644\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u0631\u06c7\u0633\u0649\u064a\u06d5 \u0631\u06c7\u0628\u0644\u0649\u0633\u0649 (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0631\u06cb\u0627\u0646\u062f\u0627 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0633\u06d5\u0626\u06c7\u062f\u0649 \u0631\u0649\u064a\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0633\u0648\u0644\u0648\u0645\u0648\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0633\u06d0\u064a\u0634\u06d0\u0644 \u0631\u06c7\u067e\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u0633\u06c7\u062f\u0627\u0646 \u062f\u0649\u0646\u0627\u0631\u0649 (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0633\u06c7\u062f\u0627\u0646 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u0633\u06c7\u062f\u0627\u0646 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649 (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0634\u0649\u06cb\u06d0\u062a\u0633\u0649\u064a\u06d5 \u0643\u0631\u0648\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0633\u0649\u0646\u06af\u0627\u067e\u0648\u0631 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0633\u0627\u064a\u0646\u0649\u062a-\u06be\u06d0\u0644\u06d0\u0646\u0627 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u0633\u0649\u0644\u0648\u06cb\u06d0\u0646\u0649\u064a\u06d5 \u062a\u0648\u0644\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u0633\u0649\u0644\u0648\u06cb\u0627\u0643\u0649\u064a\u06d5 \u0643\u0648\u0631\u06c7\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0633\u06d0\u0631\u0631\u0627\u0644\u06d0\u0626\u0648\u0646 \u0644\u06d0\u0626\u0648\u0646\u06d0\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0633\u0648\u0645\u0627\u0644\u0649 \u0634\u0649\u0644\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0633\u06c7\u0631\u0649\u0646\u0627\u0645 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u0633\u06c7\u0631\u0649\u0646\u0627\u0645 \u06af\u06c8\u0644\u062f\u0649\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0633\u06c7\u062f\u0627\u0646 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u0633\u0627\u0646-\u062a\u0648\u0645\u06d0 \u06cb\u06d5 \u067e\u0649\u0631\u0649\u0646\u0633\u0649\u067e\u0649 \u062f\u0648\u0628\u0631\u0627\u0633\u0649 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0633\u0627\u0646-\u062a\u0648\u0645\u06d0 \u06cb\u06d5 \u067e\u0649\u0631\u0649\u0646\u0633\u0649\u067e\u0649 \u062f\u0648\u0628\u0631\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0633\u0648\u06cb\u0649\u062a \u0631\u06c7\u0628\u0644\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u0633\u0627\u0644\u06cb\u0627\u062f\u0648\u0631 \u0643\u0648\u0644\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0633\u06c8\u0631\u0649\u064a\u06d5 \u0641\u0648\u0646\u062f\u0633\u062a\u06d0\u0631\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0633\u0649\u06cb\u06d0\u0632\u0649\u0644\u0627\u0646\u062f \u0644\u0649\u0644\u0627\u0646\u06af\u06d0\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u062a\u0627\u064a\u0644\u0627\u0646\u062f \u0628\u0627\u062e\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u062a\u0627\u062c\u0649\u0643\u0649\u0633\u062a\u0627\u0646 \u0631\u06c7\u0628\u0644\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u062a\u0627\u062c\u0649\u0643\u0649\u0633\u062a\u0627\u0646 \u0633\u0648\u0645\u0648\u0646\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0645\u06d5\u0646\u0649\u0633\u062a\u0627\u0646 \u0645\u0627\u0646\u0627\u062a\u0649 (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0645\u06d5\u0646\u0649\u0633\u062a\u0627\u0646 \u0645\u0627\u0646\u0627\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u062a\u06c7\u0646\u0649\u0633 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u062a\u0648\u0646\u06af\u0627 \u067e\u0627\u0626\u0627\u0646\u06af\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u062a\u0649\u0645\u0648\u0631 \u0626\u06d0\u0633\u0643\u06c7\u062f\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0649\u064a\u06d5 \u0644\u0649\u0631\u0627\u0633\u0649 (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0649\u064a\u06d5 \u0644\u0649\u0631\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u062a\u0649\u0631\u0649\u0646\u0649\u062f\u0627\u062f \u06cb\u06d5 \u062a\u0648\u0628\u0627\u06af\u0648 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u064a\u06d0\u06ad\u0649 \u062a\u06d5\u064a\u06cb\u06d5\u0646 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u062a\u0627\u0646\u0632\u0627\u0646\u0649\u064a\u06d5 \u0634\u0649\u0644\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0626\u06c7\u0643\u0631\u0627\u0626\u0649\u0646\u0627 \u062e\u0631\u0649\u06cb\u0646\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\u0626\u06c7\u0643\u0631\u0627\u0626\u0649\u0646\u0627 \u0643\u0627\u0631\u0628\u0648\u06cb\u0627\u0646\u06d0\u062a\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u0626\u06c7\u06af\u0627\u0646\u062f\u0627 \u0634\u0649\u0644\u0644\u0649\u06ad\u0649 (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0626\u06c7\u06af\u0627\u0646\u062f\u0627 \u0634\u0649\u0644\u0644\u0649\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649 (\u0643\u06d0\u064a\u0649\u0646\u0643\u0649 \u0643\u06c8\u0646)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u062f\u0648\u0644\u0644\u0649\u0631\u0649 (\u0626\u0648\u062e\u0634\u0627\u0634 \u0643\u06c8\u0646)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\u0626\u06c7\u0631\u06c7\u06af\u06cb\u0627\u064a \u067e\u06d0\u0633\u0648\u0633\u0649 (\u0626\u0649\u0646\u062f\u06d0\u0643\u0649\u0633\u0644\u0627\u0634 \u0628\u0649\u0631\u0644\u0649\u0643\u0649)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u0626\u06c7\u0631\u06c7\u06af\u06cb\u0627\u064a \u067e\u06d0\u0633\u0648\u0633\u0649 (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0626\u06c7\u0631\u06c7\u06af\u06cb\u0627\u064a \u067e\u06d0\u0633\u0648\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0626\u06c6\u0632\u0628\u06d0\u0643\u0649\u0633\u062a\u0627\u0646 \u0633\u0648\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u06cb\u06d0\u0646\u06d0\u0632\u06c7\u0626\u06d0\u0644\u0627 \u0628\u0648\u0644\u0649\u06cb\u0627\u0631\u0649 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u06cb\u06d0\u0646\u06d0\u0632\u06c7\u0626\u06d0\u0644\u0627 \u0628\u0648\u0644\u0649\u06cb\u0627\u0631\u0649 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u06cb\u06d0\u0646\u06d0\u0632\u06c7\u0626\u06d0\u0644\u0627 \u0628\u0648\u0644\u0649\u06cb\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u06cb\u0649\u064a\u06d0\u062a\u0646\u0627\u0645 \u062f\u0648\u06ad\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"\u06cb\u0649\u064a\u06d0\u062a\u0646\u0627\u0645 \u062f\u0648\u06ad\u0649 (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u06cb\u0627\u0646\u06c7\u0626\u0627\u062a\u06c7 \u06cb\u0627\u062a\u06c7\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0633\u0627\u0645\u0648\u0626\u0627 \u062a\u0627\u0644\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u0642\u0649\u062a\u0626\u06d5\u0633\u0649 \u067e\u06c7\u0644-\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5 \u0626\u0649\u062a\u062a\u0649\u067e\u0627\u0642\u0649 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u0643\u06c8\u0645\u06c8\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u0626\u0627\u0644\u062a\u06c7\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u0645\u06c7\u0631\u06d5\u0643\u0643\u06d5\u067e \u0628\u0649\u0631\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u067e\u06c7\u0644 \u0628\u0649\u0631\u0644\u0649\u0643\u0649 (XBB)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u06be\u06d0\u0633\u0627\u0628\u0627\u062a \u0628\u0649\u0631\u0644\u0649\u0643\u0649 (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u06be\u06d0\u0633\u0627\u0628\u0627\u062a \u0628\u0649\u0631\u0644\u0649\u0643\u0649 (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0643\u0627\u0631\u0649\u0628 \u062f\u0648\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u0626\u0627\u0644\u0627\u06be\u0649\u062f\u06d5 \u067e\u06c7\u0644 \u0626\u06d0\u0644\u0649\u0634 \u06be\u0648\u0642\u06c7\u0642\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u067e\u06c7\u0644 \u0628\u0649\u0631\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5 \u0626\u0627\u0644\u062a\u06c7\u0646 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5 UIC \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u0642\u0649\u062a\u0626\u06d5\u0633\u0649 \u067e\u06c7\u0644-\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5 \u0626\u0649\u062a\u062a\u0649\u067e\u0627\u0642\u0649 \u0641\u0631\u0627\u0646\u0643\u0649 (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u067e\u0627\u0644\u0644\u0627\u062f\u0649\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u062a\u0649\u0646\u0686 \u0626\u0648\u0643\u064a\u0627\u0646 \u067e\u06c7\u0644-\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5 \u0626\u0648\u0631\u062a\u0627\u0642 \u06af\u06d5\u06cb\u062f\u0649\u0633\u0649 \u0641\u0631\u0627\u0646\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u067e\u0649\u0644\u0627\u062a\u0649\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET \u0641\u0648\u0646\u062f\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of(u"\u0633\u06c7\u0643\u0631\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u067e\u06c7\u0644 \u0633\u0649\u0646\u0627\u0634 \u0628\u0649\u0631\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of(u"\u0626\u0627\u0633\u0649\u064a\u0627 \u062a\u06d5\u0631\u06d5\u0642\u0642\u0649\u064a\u0627\u062a \u0628\u0627\u0646\u0643\u0649\u0633\u0649 \u06be\u06d0\u0633\u0627\u0628\u0627\u062a \u0628\u0649\u0631\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u064a\u0648\u0686\u06c7\u0646 \u067e\u06c7\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u064a\u06d5\u0645\u06d5\u0646 \u062f\u0649\u0646\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u064a\u06d5\u0645\u06d5\u0646 \u0631\u0649\u064a\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u064a\u06c7\u06af\u0648\u0633\u0644\u0627\u06cb\u0649\u064a\u06d5 \u0642\u0627\u062a\u062a\u0649\u0642 \u062f\u0649\u0646\u0627\u0631\u0649 (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u064a\u06c7\u06af\u0648\u0633\u0644\u0627\u06cb\u0649\u064a\u06d5 \u064a\u06d0\u06ad\u0649 \u062f\u0649\u0646\u0627\u0631\u0649 (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u064a\u06c7\u06af\u0648\u0633\u0644\u0627\u06cb\u0649\u064a\u06d5 \u0626\u0627\u0644\u0645\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634\u0686\u0627\u0646 \u062f\u0649\u0646\u0627\u0631\u0649 (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"\u064a\u06c7\u06af\u0648\u0633\u0644\u0627\u06cb\u0649\u064a\u06d5 \u0626\u0649\u0633\u0644\u0627\u06be\u0627\u062a \u062f\u0649\u0646\u0627\u0631\u0649 (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u0631\u0627\u0646\u062f\u0649 (\u067e\u06c7\u0644\u2013\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u0631\u0627\u0646\u062f\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u0632\u0627\u0645\u0628\u0649\u064a\u06d5 \u0643\u06cb\u0627\u0686\u0627\u0633\u0649 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u0632\u0627\u0645\u0628\u0649\u064a\u06d5 \u0643\u06cb\u0627\u0686\u0627\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u0632\u0627\u064a\u0649\u0631 \u064a\u06d0\u06ad\u0649 \u0632\u0627\u064a\u0649\u0631\u0649 (1993\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u0632\u0627\u064a\u0649\u0631 \u0632\u0627\u064a\u0649\u0631\u0649 (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u0632\u0649\u0645\u0628\u0627\u0628\u06cb\u06d0 \u062f\u0648\u0644\u0644\u0649\u0631\u0649 (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u0632\u0649\u0645\u0628\u0627\u0628\u06cb\u06d0 \u062f\u0648\u0644\u0644\u0649\u0631\u0649 (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"\u0632\u0649\u0645\u0628\u0627\u0628\u06cb\u06d0 \u062f\u0648\u0644\u0644\u0649\u0631\u0649 (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ug::CurrencyNames_ug() {
}

$Class* CurrencyNames_ug::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ug, name, initialize, &_CurrencyNames_ug_ClassInfo_, allocate$CurrencyNames_ug);
	return class$;
}

$Class* CurrencyNames_ug::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun