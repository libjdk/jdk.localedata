#include <sun/util/resources/cldr/ext/CurrencyNames_ks.h>

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

$MethodInfo _CurrencyNames_ks_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ks::*)()>(&CurrencyNames_ks::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ks_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ks",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ks_MethodInfo_
};

$Object* allocate$CurrencyNames_ks($Class* clazz) {
	return $of($alloc(CurrencyNames_ks));
}

void CurrencyNames_ks::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ks::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"\u0627\u0620\u0691\u0648\u0631\u064e\u0646 \u067e\u06cc\u0633\u0650\u0679\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0645\u064f\u062a\u062d\u062f\u06c1 \u0639\u0631\u0628 \u0627\u0650\u0645\u0627\u0631\u0627\u062a \u062f\u0650\u0631\u06c1\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0627\u0641\u063a\u0627\u0646 \u0627\u0641\u063a\u0672\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0627\u0620\u0644\u0628\u06cc\u0646\u0650\u06cc\u064e\u0646 \u0644\u0650\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0627\u064e\u0631\u0645\u0627\u0646\u0620\u0646 \u0688\u0631\u0620\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0646\u0627\u06cc\u062f\u064e\u0631\u0644\u06cc\u0646\u0691 \u0627\u0620\u0646\u0679\u0655\u0644\u06cc\u0656\u06cc\u064e\u0646 \u06af\u0650\u0644\u0691\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0627\u0620\u0646\u06af\u0648\u0644\u064e\u0646 \u06a9\u0648\u0627\u0646\u0632\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\u0627\u0620\u0646\u06af\u0648\u0644\u064e\u0646 \u06a9\u0648\u0627\u0646\u0632\u0627 \u0631\u0620\u062c\u0650\u0633\u0679\u0627\u0691\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u0623\u0631\u062c\u064e\u0646\u0679\u06cc\u0656\u0646 \u0627\u064e\u0633\u0679\u0631\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0623\u0631\u062c\u064e\u0646\u0679\u06cc\u0656\u0646 \u067e\u0650\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0622\u0633\u0679\u0631\u06cc\u064e\u0646 \u0634\u0650\u0644\u0650\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0622\u0633\u0679\u0631\u06cc\u0644\u0650\u06cc\u064e\u0646 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0627\u064e\u0631\u0648\u0628\u064e\u0646 \u0641\u0650\u0644\u0648\u0631\u0650\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0622\u0632\u064e\u0631\u0628\u0627\u062c\u0627\u0646\u06cc \u0645\u064e\u0646\u064e\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u0628\u0648\u0632\u0646\u0650\u06cc\u0627\u06c1\u064e\u0631\u0632\u0650\u06af\u0648\u0648\u0650\u0646\u0627 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0628\u0648\u0632\u0646\u0650\u06cc\u0627\u06c1\u064e\u0631\u0632\u0650\u06af\u0648\u0648\u0650\u0646\u0627 \u06a9\u064e\u0646\u0648\u0672\u0679\u06cc\u0628\u0655\u0644 \u0645\u0627\u0631\u0655\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0628\u0627\u0628\u06cc\u0691\u0650\u06cc\u064e\u0646 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0628\u064e\u0646\u06af\u0644\u0627\u062f\u06cc\u0656\u0634\u06cc \u0679\u064e\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u0628\u064e\u0644\u062c\u0650\u06cc\u064e\u0646 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0628\u06cc\u0644\u06af\u06cc\u0631\u0650\u06cc\u064e\u0646 \u06c1\u0627\u0691 \u0644\u0650\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u0628\u062d\u0631\u06cc\u0656\u0646\u06cc \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0628\u064f\u0631\u064f\u0646\u0691\u0650\u06cc\u0646 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0628\u0654\u0631\u0645\u06cc\u0648\u0657\u0691\u064e\u0646 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0628\u0631\u0648\u0646\u06cc \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0628\u0648\u0644\u0650\u0648\u0650\u06cc\u064e\u0646 \u0628\u0648\u0644\u0648\u06cc\u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u0628\u0648\u0644\u0648\u06cc\u064e\u0646 \u067e\u0650\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u0628\u0648\u0644\u0648\u0650\u06cc\u064e\u0646 \u0645\u064e\u0648\u0688\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\u0628\u0631\u0627\u0632\u06cc\u0656\u0644\u06cc\u0646 \u06a9\u0631\u0648\u0632\u0650\u0631\u0648 \u0646\u0648\u0648\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\u0628\u0631\u0627\u0632\u06cc\u0656\u0644\u06cc\u0646 \u06a9\u0631\u0648\u0632\u06cc\u0691\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u0628\u0631\u0627\u0632\u06cc\u0656\u0644\u06cc\u0646 \u06a9\u0631\u0648\u0632\u0650\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0628\u0631\u0627\u0632\u06cc\u0656\u0644\u06cc\u0646 \u0631\u0650\u06cc\u064e\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\u0628\u0631\u0627\u0632\u06cc\u0656\u0644\u06cc\u0646 \u06a9\u0631\u0648\u0632\u06cc\u0691\u0648 \u0646\u0648\u0648\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\u0628\u0631\u0627\u0632\u06cc\u0656\u0644\u06cc\u0646 \u06a9\u0631\u0648\u0632\u06cc\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0628\u06c1\u0627\u0645\u0650\u06cc\u064e\u0646 \u0688\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0628\u0648\u0657\u0679\u06cc\u0646\u06cc\u0656\u0632 \u0646\u06af\u064f\u0644\u0679\u0631\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u0628\u0654\u0631\u0645\u06cc\u0656\u0632 \u06a9\u06cc\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u0628\u0648\u0679\u0655\u0633\u0648\u0627\u0646\u064e\u0646 \u067e\u064f\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u0628\u0650\u0644\u06cc\u0631\u0648\u0634\u0650\u06cc\u064e\u0646 \u0646\u0650\u0648 \u0631\u0650\u0628\u0655\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0628\u0650\u0644\u06cc\u0631\u0648\u0634\u0650\u06cc\u064e\u0646 \u0631\u0650\u0628\u0655\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u0628\u0650\u0644\u06cc\u0631\u0648\u0634\u0650\u06cc\u064e\u0646 \u0631\u0650\u0628\u0655\u0644 (\u06f2\u06f0\u06f0\u06f0\u2013\u06f2\u06f0\u06f1\u06f6)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0628\u0650\u0644\u0650\u0632\u06cc \u0688\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u06a9\u06cc\u0646\u064e\u0691\u0650\u06cc\u064e\u0646 \u0688\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u06a9\u0648\u0646\u06af\u0648\u0644\u06cc\u0656\u0632 \u0641\u0631\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u0648\u0650\u0631 \u06cc\u0648\u0657\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0633\u064f\u0648\u0650\u0632 \u0641\u0631\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"\u0648\u0650\u0631 \u0641\u0631\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u0686\u0650\u0644\u0650\u0646 \u06cc\u0648\u0657\u0646\u0650\u0691\u06cc\u062f\u06cc\u0656\u0632 \u0691\u0650 \u0641\u0648\u0645\u06cc\u0679\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0686\u0650\u0644\u0650\u0646 \u067e\u0650\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0686\u06cc\u0646\u06cc\u0656\u0632 \u06cc\u064e\u0646 \u0631\u0650\u0646\u0645\u0650\u0646\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u06a9\u0648\u0644\u064e\u0645\u0628\u0650\u06cc\u0646 \u067e\u0650\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\u0650\u0656\u06cc\u0648\u0657\u0646\u0650\u0691\u06cc\u0691 \u0691\u0650 \u0648\u06cc\u0644\u0648\u0631 \u0631\u0650\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u06a9\u0648\u0633\u0679\u0627 \u0631\u0650\u06a9\u064e\u0646 \u06a9\u0648\u0644\u064e\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u067e\u0631\u0648\u0646 \u0633\u0654\u0631\u0628\u0650\u06cc\u0646 \u0688\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u0686\u0650\u06a9\u0648\u0633\u0648\u0644\u0648\u0648\u0627\u06a9 \u06c1\u0627\u0691 \u06a9\u0648\u0631\u0648\u0657\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u06a9\u06cc\u0648\u0657\u0628\u064e\u0646 \u067e\u0650\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u06a9\u06cc\u067e\u0631\u0648\u0679 \u067e\u064e\u0648\u064f\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u0686\u06cc\u06a9 \u06a9\u0648\u0631\u06cc\u0656\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0645\u0654\u0634\u0631\u0650\u0642\u06cc \u062c\u0654\u0631\u0645\u064e\u0646 \u0645\u0627\u0631\u0655\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u062c\u0654\u0631\u0645\u064e\u0646 \u0645\u0627\u0631\u0655\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0688\u0654\u0646\u0650\u0634 \u06a9\u0631\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0688\u0648\u0645\u0650\u0646\u0650\u06a9\u064e\u0646 \u067e\u0650\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0627\u0620\u0644\u062c\u06cc\u0631\u0650\u06cc\u064e\u0646 \u0688\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u0627\u0620\u0633\u0679\u0648\u0646\u0650\u06cc\u064e\u0646 \u06a9\u0631\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0627\u0650\u062c\u0650\u067e\u0679\u0650\u06cc\u064e\u0646 \u067e\u064e\u0648\u064f\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0631\u0650\u0679\u0631\u06cc\u0656\u0646 \u0646\u064e\u0641\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0633\u0650\u067e\u06cc\u0646\u0650\u0634 \u067e\u06cc\u0633\u0650\u0679\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0627\u0650\u062a\u06be\u0648\u067e\u0650\u06cc\u064e\u0646 \u0628\u0650\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u06cc\u0648\u0657\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u0641\u0650\u0646\u0650\u0634 \u0645\u0627\u0631\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0641\u0650\u062c\u06cc\u0646 \u0688\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u0641\u06cc\u06a9\u0644\u06cc\u0646\u0691\u0650\u0633 \u0622\u06cc\u0644\u06cc\u0646\u0691 \u067e\u0648\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u0641\u0631\u0627\u0646\u0633\u0650\u0633\u06cc \u0641\u0631\u06cc\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0628\u0631\u0637\u0672\u0646\u0648\u06cc \u067e\u0627\u0648\u0646\u0691 \u0633\u0679\u0654\u0631\u0644\u0650\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\u062c\u0627\u0631\u062c\u0650\u06cc\u064e\u0646 \u06a9\u06cc\u0648\u0657\u067e\u064e\u0646 \u0644\u064e\u0631\u0650\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u062c\u0627\u0631\u062c\u0650\u06cc\u064e\u0646 \u0644\u0627\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u06af\u064e\u0646\u06cc\u06cc\u064e\u0646 \u0633\u0620\u0691\u06cc(\u06f1\u06f9\u06f7\u06f9\u2013\u06f2\u0660\u0660\u06f7)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u06af\u064e\u0646\u06cc\u06cc\u064e\u0646 \u0633\u0620\u0691\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u06af\u0650\u0628\u0631\u06cc\u0644\u0679\u064e\u0631 \u067e\u064e\u0627\u0648\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u06af\u06cc\u0645\u0628\u0650\u06cc\u0627\u06c1\u064f\u06a9 \u062f\u0644\u0627\u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u06af\u0650\u0646\u0650\u06cc\u064e\u0646 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\u06af\u0650\u0646\u0650\u06cc\u064e\u0646 \u0633\u0650\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\u0627\u0650\u06a9\u0648\u06cc\u0679\u0648\u0631\u0650\u06cc\u064e\u0644 \u06af\u0650\u0646\u0650\u06cc\u064e\u0646 \u0627\u0620\u06a9\u0648\u06cc\u0656\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u06af\u0631\u06cc\u0656\u0633\u064f\u06a9 \u0691\u0631\u0620\u06a9\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u06af\u0648\u0627\u0679\u064e\u0645\u0627\u0644\u064e\u0646 \u0642\u06cc\u0648\u0657\u0679\u0632\u064e\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\u067e\u0648\u0631\u062a\u06af\u06cc\u0656\u0632\u064f\u06a9 \u06af\u0650\u0646\u06cc \u0627\u0620\u0633\u06a9\u06cc\u0648\u0657\u0691\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u06af\u0650\u0646\u06cc \u0628\u0650\u0633\u0627\u0648\u064f\u06a9 \u067e\u0620\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u06af\u064e\u06cc\u064e\u0646\u06cc\u0656\u0632\u064f\u06a9 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u062d\u0627\u0646\u06af \u06a9\u0627\u0646\u06af\u064f\u06a9 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u062d\u0648\u0646\u0691\u0648\u0631\u0646\u064f\u06a9 \u0644\u0620\u0645\u067e\u06cc\u0656\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u06a9\u0631\u0648\u0627\u06cc\u0634\u0646\u064f\u06a9 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u06a9\u0631\u0648\u0627\u06cc\u0634\u0646\u064f\u06a9 \u06a9\u0648\u0657\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u062d\u06cc\u0634\u064e\u0646\u064f\u06a9 \u06af\u0648\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u062d\u064e\u0646\u06af\u06cc\u0631\u0650\u06cc\u064e\u0646 \u0641\u0648\u0631\u0650\u0646\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0627\u0650\u0646\u0691\u0648\u0646\u06cc\u0634\u06cc\u0627\u06c1\u064f\u06a9 \u0631\u064f\u067e\u0650\u06cc\u0627\u06c1"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0627\u064e\u06cc\u0631\u0644\u06cc\u0646\u0691\u064f\u06a9 \u067e\u0627\u0648\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0627\u0650\u0632\u0631\u0672\u06cc\u0650\u0644\u06cc \u067e\u0627\u0648\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0627\u0650\u0632\u0631\u0672\u06cc\u0650\u0644\u06cc \u0646\u0654\u0648\u06cd \u0634\u0620\u0642\u0655\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u06c1\u0650\u0646\u062f\u064f\u0633\u062a\u0672\u0646\u06cd \u0631\u06c4\u067e\u064e\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0627\u06cc\u0656\u0631\u0627\u0642\u064f\u06a9 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0627\u06cc\u0656\u0631\u0627\u0646\u064f\u06a9 \u0631\u0650\u06cc\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0627\u064e\u06cc\u0633\u0644\u06cc\u0646\u0691\u064f\u06a9 \u06a9\u0631\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0627\u0650\u0679\u0644\u06cc\u0656 \u06cc\u064f\u06a9 \u0644\u06cc\u0656\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u062c\u064e\u0645\u064e\u06cc\u06a9\u0627\u06c1\u064f\u06a9 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u062c\u064e\u0631\u0691\u06cc\u0646\u06cc\u0627\u06c1\u064f\u06a9 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u062c\u0627\u067e\u0627\u0646\u064f\u06a9 \u06cc\u064e\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u06a9\u0620\u0646\u06cc\u064e\u0646 \u0634\u0650\u0644\u0650\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u06a9\u0650\u0631\u06af\u0650\u0633\u062a\u0627\u0646\u064f\u06a9 \u0633\u0648\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u06a9\u064e\u0645\u0628\u0648\u0691\u0650\u06cc\u0627\u06c1\u064f\u06a9 \u0631\u0650\u06cc\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u06a9\u0648\u0645\u0648\u0631\u0650\u06cc\u064e\u0646 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u062c\u0646\u0648\u0657\u0628\u06cc \u06a9\u0648\u0631\u0650\u06cc\u064e\u0646 \u0648\u064e\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0633\u0627\u0648\u062a\u06be \u06a9\u0648\u0631\u0650\u06cc\u064e\u0646 \u0648\u064e\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0642\u064f\u0648\u06cc\u062a\u064f\u06a9 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u06a9\u06cc\u0645\u06cc\u0646 \u062c\u062c\u06cc\u0656\u0631\u064f\u06a9 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u06a9\u0632\u0627\u06a9\u0650\u0633\u062a\u0627\u0646 \u0679\u06cc\u0646\u062c"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0644\u064e\u0648\u0679\u0650\u06cc\u064e\u0646 \u06a9\u0650\u067e"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0644\u06cc\u0628\u0646\u06cc\u0656\u0632\u064f\u06a9 \u067e\u0627\u0648\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0633\u0631\u06cc \u0644\u064e\u0646\u06a9\u0627\u06c1\u0655\u0686 \u0631\u06c4\u067e\u064e\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0644\u064e\u06cc\u0628\u06cc\u0631\u0650\u06cc\u064e\u0646 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u0644\u0650\u0633\u0648\u062a\u06be\u0648 \u0644\u0648\u0679\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u0644\u0650\u062a\u06be\u0648\u06cc\u0646\u0650\u06cc\u064e\u0646 \u0644\u0650\u0679\u0627\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u0644\u0650\u062a\u06be\u0648\u06cc\u0646\u0650\u06cc\u064e\u0646 \u0679\u0620\u0644\u0648\u0646\u0627\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\u0644\u064e\u06a9\u0632\u0655\u0645\u0628\u0648\u0631\u06af\u0650\u06cc\u064e\u0646 \u06a9\u064e\u0646\u0624\u0631\u0679\u0650\u0628\u0655\u0644 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u0644\u064e\u06a9\u0632\u0655\u0645\u0628\u0648\u0631\u06af\u0650\u06cc\u064e\u0646 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u0644\u064e\u06a9\u0632\u0655\u0645\u0628\u0648\u06af \u0641\u064e\u06cc\u0646\u0627\u0646\u0634\u064e\u0644 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u0644\u064e\u062a\u0648\u0650\u06cc\u064e\u0646 \u0644\u06cc\u0679\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u0644\u064e\u062a\u0648\u0650\u06cc\u064e\u0646 \u0631\u064e\u0628\u0655\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0644\u0650\u0628\u06cc\u064e\u0646 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0645\u0648\u0631\u0648\u06a9\u064e\u0646 \u062f\u0650\u0631\u06c1\u064e\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u0645\u0648\u0631\u0648\u06a9\u064e\u0646 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u0645\u0648\u0644\u0691\u0648\u0648\u06cc\u0646 \u0644\u06cc\u0648\u0657"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0645\u0620\u0644\u0620\u06af\u06cc\u0633\u06cc \u0627\u0620\u0631\u06cc\u064e\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u0645\u0620\u0644\u0620\u06af\u06cc\u0633\u06cc \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u0645\u0620\u06a9\u064e\u0691\u0648\u0646\u0650\u06cc\u064e\u0646 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u0645\u06cc\u0644\u0650\u06cc\u064e\u0646 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u0645\u0650\u06cc\u0627\u0646\u0645\u0627 \u06a9\u06cc\u0627\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u0645\u06c4\u0646\u06af\u0648\u0644\u0650\u06cc\u064e\u0646 \u0679\u064f\u06af\u0631\u0650\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u0645\u0620\u06a9\u0627\u0646\u06cc\u0656\u0632 \u067e\u064e\u0679\u0627\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u0645\u0648\u0631\u0650\u0679\u06cc\u0646\u0650\u06cc\u064e\u0646 \u0639\u0648\u06af\u06cc\u0648\u0657\u06cc\u0627 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u0645\u0648\u0631\u0650\u0679\u06cc\u0646\u0650\u06cc\u064e\u0646 \u0639\u0648\u06af\u06cc\u0648\u0657\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u0645\u0627\u0644\u0679\u06cc\u0656\u0632\u064f\u06a9 \u0644\u06cc\u0656\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u0645\u0627\u0644\u0679\u06cc\u0656\u0632\u064f\u06a9 \u067e\u0627\u0648\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u0645\u0648\u0631\u0620\u0634\u0650\u06cc\u0627\u06c1\u0655\u0686 \u0631\u06c4\u067e\u064e\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u0645\u0627\u0644\u062f\u0650\u06cc\u0656\u0648\u0650\u06cc\u064e\u0646 \u0631\u064f\u0641\u0650\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u0645\u0620\u0644\u06cc\u0648\u0650\u06cc\u064e\u0646 \u06a9\u0648\u0627\u0686\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u0645\u0620\u06a9\u0633\u0650\u06a9\u064e\u0646 \u067e\u0620\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u0645\u0620\u06a9\u0633\u0650\u06a9\u064e\u0646 \u0633\u0650\u0644\u0648\u064e\u0631 \u067e\u0620\u0633\u0648 (\u06f1\u06f8\u06f6\u06f1\u2013\u06f1\u06f9\u06f9\u06f2)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u0645\u064e\u0644\u06cc\u0634\u0650\u06cc\u064e\u0646 \u0631\u0650\u0646\u06af\u0650\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u0645\u0648\u0632\u06cc\u0645\u0628\u0650\u06a9\u064e\u0646 \u0633\u06a9\u06cc\u0648\u0657\u0691\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u067e\u0631\u0648\u0646 \u0645\u0648\u0632\u06cc\u0645\u0628\u0650\u06a9\u064e\u0646 \u0645\u0620\u0679\u0650\u06a9\u064e\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0645\u0648\u0632\u06cc\u0645\u0628\u0650\u06a9\u064e\u0646 \u0645\u0620\u0679\u0650\u06a9\u064e\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0646\u0627\u0645\u0650\u0628\u0650\u06cc\u064e\u0646 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0646\u064e\u06cc\u062c\u06cc\u0631\u0650\u06cc\u064e\u0646 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u0646\u0650\u06a9\u0620\u0631\u0627\u06af\u064f\u0648\u0620\u0646 \u06a9\u0648\u0631\u0691\u0648\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u0646\u0650\u06a9\u0620\u0631\u0627\u06af\u064f\u0648\u0620\u0646 \u06a9\u0648\u0631\u0691\u0648\u0628\u0627 \u0627\u0648\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u0688\u064e\u0686 \u06af\u0650\u0644\u0691\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0646\u0648\u0631\u0648\u06cc\u06cc\u0650\u0646\u064f\u06a9 \u06a9\u0631\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0646\u06cc\u067e\u0627\u0644\u0655\u0686 \u0631\u06c4\u067e\u064e\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0646\u0650\u0648\u0632\u06cc\u0656\u0644\u06cc\u0646\u0691\u064f\u06a9 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0627\u0648\u0645\u0650\u0646\u06cc \u0631\u0650\u06cc\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u067e\u0627\u0646\u0627\u0645\u0627\u0646\u0650\u06cc\u064e\u0646 \u0628\u0627\u0644\u0628\u0648\u0632"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u067e\u0654\u0631\u06cc\u0648\u0657\u0648\u0650\u06cc\u064e\u0646 \u0627\u0650\u0646\u0679\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u067e\u0654\u0631\u06cc\u0648\u0657\u0648\u0650\u06cc\u064e\u0646 \u0633\u0648\u0644\u0655\u0632"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u067e\u0654\u0631\u06cc\u0648\u0657\u0648\u0650\u06cc\u064e\u0646 \u0633\u0648\u0644 (\u06f1\u06f8\u06f6\u06f3\u2013\u06f1\u06f9\u06f6\u06f5)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u0646\u06cc\u0648\u0657 \u067e\u06cc\u067e\u064f\u0639\u0627 \u06af\u0650\u0646\u0650\u06cc\u064e\u0646 \u06a9\u06cc\u0656\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u067e\u06be\u0650\u0644\u0650\u067e\u0627\u06cc\u0650\u0654\u0646 \u067e\u0620\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u067e\u0627\u06a9\u0650\u0633\u062a\u0672\u0646\u06cd \u0631\u06c4\u067e\u064e\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u067e\u0648\u0644\u0650\u0634 \u0632\u0644\u0648\u0679\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\u067e\u0648\u0644\u0650\u0634 \u0632\u0644\u0648\u0679\u06cc(\u06f1\u06f9\u06f5\u0660\u2013\u06f1\u06f9\u06f9\u06f5)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u067e\u0648\u0631\u062a\u064f\u06af\u06cc\u0656\u0632 \u0627\u0620\u0633\u06a9\u06cc\u0648\u0657\u0691\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u067e\u0620\u0631\u0620\u06af\u06cc\u0648\u0657\u0648\u064e\u06cc\u064e\u0646 \u06af\u064f\u0639\u0627\u0631\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0642\u0637\u0627\u0631\u06cc \u0631\u0650\u06cc\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u0631\u06be\u0648\u0691\u06cc\u0634\u0650\u06cc\u064e\u0646 \u0691\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u0627\u0648\u0644\u0691 \u0631\u0648\u0645\u0627\u0646\u0650\u06cc\u064e\u0646 \u0644\u0620\u06cc\u0648\u0657"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0631\u0648\u0645\u0627\u0646\u0650\u06cc\u064e\u0646 \u0644\u0620\u06cc\u0648\u0657"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0633\u0654\u0631\u0628\u0650\u06cc\u064e\u0646 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0631\u0654\u0634\u06cc\u064e\u0646 \u0631\u064e\u0628\u0655\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u0631\u0654\u0634\u06cc\u064e\u0646 \u0631\u064e\u0628\u0655\u0644(\u06f1\u06f9\u06f9\u06f1\u2013\u06f1\u06f9\u06f9\u06f8)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0631\u0648\u0627\u0646\u0691\u064e\u0646 \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0633\u0648\u062f\u06cc\u0656\u06cc\u064f\u06a9 \u0631\u0650\u06cc\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0633\u0648\u0644\u064e\u0645\u064e\u0646 \u062c\u0654\u0632\u06cc\u0656\u0631\u064f\u06a9 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u067e\u0631\u0648\u0646 \u0633\u0648\u0657\u0688\u0627\u0646\u064f\u06a9 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0633\u0648\u0657\u0688\u0627\u0646\u064f\u06a9 \u067e\u0648\u0646\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u067e\u0631\u0648\u0646 \u0633\u0648\u0657\u0688\u0627\u0646\u064f\u06a9 \u067e\u0648\u0646\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0633\u0648\u06cc\u0656\u0688\u0650\u0634 \u06a9\u064e\u0631\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0633\u0650\u0646\u06af\u0627\u067e\u0648\u0631\u064f\u06a9 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0633\u06cc\u0646\u0679 \u06c1\u06cc\u0644\u0650\u0646\u0627 \u067e\u0648\u0646\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u0633\u0644\u0648\u0648\u06cc\u0646\u064f\u06a9 \u0679\u0648\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u0633\u0644\u0648\u0648\u064e\u06a9 \u06a9\u064e\u0631\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0633\u0648\u0645\u0627\u0644\u06cc \u0634\u0650\u0644\u0650\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0633\u064f\u0631\u06cc\u0656\u0646\u0627\u0645\u064f\u06a9 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u0633\u064f\u0631\u06cc\u0656\u0646\u0627\u0645 \u06af\u0650\u0644\u062f\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0633\u0648\u0648\u06cc\u062a \u0631\u0648\u0628\u0655\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u0633\u064e\u0644\u0648\u06cc\u062f\u064e\u0631\u064f\u06a9 \u06a9\u0648\u0644\u064e\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0633\u06cc\u0656\u0631\u06cc\u0627\u06c1\u064f\u06a9 \u067e\u0648\u0646\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0633\u0648\u0627\u0632\u06cc \u0644\u0650\u0644\u064e\u0646\u06af\u06cc\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u062a\u06be\u0627\u06cc\u06be\u06a9 \u0628\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u062a\u0627\u062c\u06a9\u0650\u0633\u062a\u0627\u0646\u064f\u06a9 \u0631\u064e\u0628\u0655\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u062a\u0627\u062c\u0650\u06a9\u062a\u0627\u0646\u064f\u06a9 \u0633\u064e\u0645\u0648\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u062a\u064f\u06a9\u064e\u0645\u064e\u0646\u0650\u0633\u062a\u0627\u0646\u064f\u06a9 \u0645\u064e\u0646\u064e\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u0679\u064f\u0646\u06cc\u0634\u06cc\u0627\u06c1\u064f\u06a9 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u0679\u0648\u0646\u06af\u064e\u0646 \u067e\u0627\u0646\u06af\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u0679\u06cc\u0645\u0648\u0631\u06cc\u0633\u0648 \u0627\u06cc\u06a9\u06cc\u0656\u0688\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u067e\u0631\u0648\u0646 \u062a\u064f\u0631\u06a9\u0650\u0634 \u0644\u06cc\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u062a\u064f\u0631\u06a9\u06cc\u06c1\u064f\u06a9 \u0644\u06cc\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0679\u0631\u0650\u0646\u06c1\u0650 \u0688\u06cc\u0688 \u062a\u06c1\u0655 \u0679\u0648\u0628\u06cc\u06af\u0648 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0646\u06c6\u0648 \u062a\u06cc\u0648\u0627\u0646\u064f\u06a9 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u062a\u064e\u0646\u0632\u0627\u0646\u06cc\u0627\u06c1\u064f\u06a9 \u0634\u0650\u0644\u0650\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u06cc\u0648\u0657\u06a9\u0631\u06cc\u0646\u06cc\u0627\u06c1\u064f\u06a9 \u06c1\u0631\u0650\u0648\u0650\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\u06cc\u0648\u0657\u06a9\u0631\u06cc\u0646\u06cc\u0627\u06c1\u064f\u06a9 \u06a9\u0627\u0631\u0628\u0648\u0648\u064e\u0646\u06cc\u0679\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u0627\u064f\u06af\u0627\u062f\u0627\u06c1\u064f\u06a9 \u0634\u0650\u0644\u0650\u0646\u06af(\u06f1\u06f9\u06f6\u06f6\u2013\u06f1\u06f9\u06f8\u06f7)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0627\u064f\u06af\u0627\u062f\u0627\u06c1\u064f\u06a9 \u0634\u0650\u0644\u0650\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u06cc\u0648\u0657 \u0627\u06cc\u0633 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u06cc\u0648\u0657 \u0627\u06cc\u0633 \u0688\u0627\u0644\u064e\u0631(\u067e\u064e\u06af\u0627\u06c1)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u06cc\u0648\u0657 \u0627\u06cc\u0633 \u0688\u0627\u0644\u064e\u0631(\u062a\u064e\u0645\u06cc \u062f\u064b\u06c4\u06c1)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\u0627\u064f\u0631\u06af\u0627\u06cc\u064e\u0646 \u067e\u06cc\u0633\u0648 \u06cc\u0648\u0657\u0646\u0650\u0688\u06cc\u0688\u064e\u0633 \u0627\u0650\u0646\u0688\u06cc\u06a9\u0633\u064e\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u0627\u064f\u0631\u06af\u0627\u06cc\u064e\u0646 \u067e\u06cc\u0633\u0648(\u06f1\u06f9\u06f7\u06f5\u2013\u06f1\u06f9\u06f9\u06f3)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0627\u064f\u0631\u0648\u0657\u06af\u0627\u06cc\u064e\u0646 \u067e\u06cc\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0627\u064f\u0628\u06cc\u06a9\u0650\u0633\u062a\u0627\u0646 \u0633\u0648\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u0648\u06cc\u0646\u0655\u0632\u0648\u0657\u0644\u06cc\u064f\u06a9 \u0628\u0648\u0644\u0650\u0648\u064e\u0631 (\u06f1\u06f8\u06f7\u06f1\u2013\u06f2\u06f0\u06f0\u06f8)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0648\u06cc\u0646\u0655\u0632\u0648\u0657\u0644\u06cc\u064f\u06a9 \u0628\u0648\u0644\u0650\u0648\u064e\u0631 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0648\u06cc\u0646\u0655\u0632\u0648\u0657\u0644\u06cc\u064f\u06a9 \u0628\u0648\u0644\u0650\u0648\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0648\u0650\u06cc\u064e\u0646\u064e\u0645\u064f\u06a9 \u0688\u0627\u0646\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0648\u064e\u0646\u0648\u0657\u0627\u064e\u062a\u0648\u0657 \u0648\u064e\u062a\u0648\u0657"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0633\u064e\u0645\u0648\u0646 \u062a\u064e\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0633\u06cc \u0627\u06cc\u0641 \u0627\u06d2 \u0641\u0631\u06cc\u0646\u06a9 \u0628\u06cc \u0627\u06cc\u0656 \u0627\u06d2 \u0633\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u0631\u06c4\u067e\u06be"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u0633\u06c4\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u06cc\u0648\u0657\u0631\u067e\u06cc \u06a9\u064e\u0645\u067e\u0648\u0633\u0650\u0679 \u06cc\u0648\u0657\u0646\u0650\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u06cc\u0648\u0657\u0631\u067e\u06cc \u0645\u0648\u0646\u0650\u0679\u064e\u0631\u06cc \u06cc\u0648\u0657\u0646\u0650\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u06cc\u0648\u0657\u0631\u067e\u06cc \u06cc\u0648\u0657\u0646\u0650\u0679 \u0622\u0641 \u0627\u06cc\u06a9\u0627\u0648\u064f\u0646\u0679 (\u0627\u06cc\u06a9\u0633 \u0628\u06cc \u0633\u06cc)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u06cc\u0648\u0657\u0631\u067e\u06cc \u06cc\u0648\u0657\u0646\u0650\u0679 \u0622\u0641 \u0627\u06cc\u06a9\u0627\u0648\u064f\u0646\u0679 (\u0627\u06cc\u06a9\u0633 \u0628\u06cc \u0688\u06cc)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0645\u064e\u0634\u0631\u0650\u0642\u06cc \u06a9\u06cc\u0631\u0650\u0628\u0650\u06cc\u064e\u0646 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u062e\u0627\u0635 \u0688\u0631\u0627\u06cc\u0650\u0646\u06af \u0631\u0627\u06cc\u0679\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\u06cc\u0648\u0657\u0631\u067e\u06cc \u06a9\u064e\u0631\u064e\u0646\u0633\u06cc \u06cc\u0648\u0657\u0646\u0650\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u0641\u0631\u06cc\u0646\u0686 \u06af\u0648\u0644\u0688 \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u0641\u0631\u06cc\u0646\u0686 \u06cc\u0648\u0657 \u0627\u06d2 \u0633\u06cc \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0633\u06cc \u0627\u06cc\u0641 \u0627\u06d2 \u0641\u0631\u06cc\u0646\u06a9 \u0628\u06cc \u0633\u06cc \u0627\u06cc\u0656 \u0627\u06d2 \u0627\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u067e\u064f\u0644\u06cc\u0688\u06cc\u064e\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u0633\u06cc \u0627\u06cc\u0641 \u067e\u06cc \u0641\u0631\u06cc\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u067e\u0644\u06cc\u0679\u0650\u0646\u064e\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"\u0622\u0631 \u0622\u06d2 \u0627\u06cc\u0646 \u0627\u06cc\u0656 \u0679\u06cc \u0641\u064e\u0646\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u0679\u06cc\u0633\u0679\u0650\u0646\u06af \u06a9\u064e\u0631\u064e\u0646\u0633\u06cc \u06a9\u0648\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0627\u064e\u0646\u0632\u0672\u0646\u06cd \u06cc\u0627 \u0646\u0627\u0644\u064e\u06af\u06c1\u0655 \u06c1\u0627\u0631 \u0633\u0650\u06a9\u06c1\u0655"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u06cc\u064e\u0645\u0646\u064f\u06a9 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u06cc\u064e\u0645\u0646\u064f\u06a9 \u0631\u0650\u06cc\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u06cc\u0648\u06af\u0648\u0633\u0644\u0627\u0648\u0650\u06cc\u064e\u0646 \u06c1\u0627\u0691 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u06cc\u0648\u06af\u0648\u0633\u0644\u0627\u0648\u0650\u06cc\u064e\u0646 \u0646\u0648\u0648\u0650\u06d2 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u06cc\u0648\u06af\u0648\u0633\u0644\u0627\u0648\u0650\u06cc\u064e\u0646 \u06a9\u064e\u0646\u0624\u0679\u0650\u0628\u0655\u0644 \u062f\u06cc\u0656\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0633\u0627\u0648\u064f\u062a\u06be \u0627\u0641\u0631\u06cc\u0656\u06a9\u0627\u06c1\u064f\u06a9 \u0631\u06cc\u0646\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u0632\u0650\u0645\u0628\u0627\u0628\u06cc\u064f\u06a9 \u06a9\u0648\u0627\u0686\u0627 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u0632\u0650\u0645\u0628\u0627\u0628\u06cc\u064f\u06a9 \u06a9\u0648\u0627\u0686\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u0632\u0627\u06cc\u0631\u0650\u06cc\u064e\u0646 \u0646\u0650\u0648 \u0632\u0627\u06cc\u0650\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u0632\u064e\u06cc\u0631\u064f\u06a9 \u0688\u0627\u0644\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u0632\u0650\u0645\u0628\u0627\u0628\u0650\u06cc\u064f\u06a9 \u0688\u0627\u0644\u064e\u0631"_s)
		})
	}));
	return data;
}

CurrencyNames_ks::CurrencyNames_ks() {
}

$Class* CurrencyNames_ks::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ks, name, initialize, &_CurrencyNames_ks_ClassInfo_, allocate$CurrencyNames_ks);
	return class$;
}

$Class* CurrencyNames_ks::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun