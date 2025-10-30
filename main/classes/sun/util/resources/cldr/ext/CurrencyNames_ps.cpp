#include <sun/util/resources/cldr/ext/CurrencyNames_ps.h>

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

$MethodInfo _CurrencyNames_ps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ps::*)()>(&CurrencyNames_ps::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ps",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ps_MethodInfo_
};

$Object* allocate$CurrencyNames_ps($Class* clazz) {
	return $of($alloc(CurrencyNames_ps));
}

void CurrencyNames_ps::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ps::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of(u"\u060b"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("SGD"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of("THB"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0645\u062a\u062d\u062f\u0647 \u0639\u0631\u0628 \u0627\u0645\u0627\u0631\u0627\u062a \u062f\u0631\u0647\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0627\u0641\u063a\u0627\u0646\u06cd (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0627\u0641\u063a\u0627\u0646\u06cd"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0627\u0644\u0628\u0627\u0646\u0648\u064a \u0644\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0627\u0631\u0645\u064a\u0646\u064a\u0627\u064a\u064a \u0689\u0631\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0647\u0627\u0644\u06d0\u0646\u0689\u064a \u0627\u0646\u067c\u064a\u0644\u064a\u0627\u064a\u064a \u06ab\u064a\u0644\u0689\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u0627\u0646\u06ab\u0648\u0644\u064a \u06a9\u0648\u0627\u0646\u0632\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0627\u0631\u062c\u0646\u067c\u0627\u064a\u0646 \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0622\u0633\u062a\u0631\u0627\u0644\u0648\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0627\u0631\u0648\u0628\u0627\u064a\u064a \u0641\u0644\u0648\u0631\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0622\u0632\u0631\u0628\u0627\u064a\u062c\u0627\u0646\u064a \u0645\u0646\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u0628\u0648\u0633\u0646\u064a\u0627 \u0647\u0631\u0632\u06ab\u0648\u064a\u0646\u064a\u0627\u064a\u064a \u0628\u062f\u0644\u06d0\u062f\u0648\u0646\u06a9\u06d0 \u0645\u0627\u0631\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0628\u0627\u0631\u0628\u064a\u0689\u064a\u0646 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0628\u0646\u06ab\u0627\u0644\u06cd \u067c\u0627\u06a9\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0628\u0644\u063a\u0627\u0631\u064a \u0644\u064a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u0628\u062d\u0631\u064a\u0646\u064a \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u0628\u0631\u0648\u0646\u0689\u064a \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0628\u0631\u0645\u0648\u062f\u0627 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u0628\u0631\u0648\u0646\u0627\u064a\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0628\u0648\u0644\u064a\u0648\u064a \u0628\u0648\u0644\u064a\u0648\u064a\u0627\u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0628\u0631\u0627\u0632\u064a\u0644\u064a \u0631\u064a\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0628\u0647\u0627\u0645\u0627\u0633\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0628\u0647\u0648\u067c\u0627\u0646\u06cd \u0627\u0646\u06ab\u0648\u0644\u067c\u0631\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u0628\u0648\u067c\u0633\u0648\u0627\u0646\u064a \u067e\u0648\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0628\u0644\u0627\u0631\u0648\u0633\u064a \u0631\u0648\u0628\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0628\u0644\u064a\u0632 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u06a9\u0627\u0646\u0627\u0689\u0627\u064a\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u06a9\u0627\u0646\u06ab\u0648\u0644\u064a \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0633\u0648\u064a\u0633\u064a \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0686\u0644\u064a \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u0686\u064a\u0646\u064a \u064a\u0648\u0627\u0646 (\u0622\u0641 \u0634\u0648\u0631)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0686\u064a\u0646\u064a \u064a\u0648\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u06a9\u0648\u0644\u0645\u0628\u064a\u0646 \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u06a9\u0648\u0633\u067c\u0627 \u0631\u064a\u06a9\u0646 \u06a9\u0648\u0644\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u06a9\u064a\u0648\u0628\u0627\u064a\u064a \u0628\u062f\u0644\u06d0\u062f\u0648\u0646\u06a9\u064a \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u06a9\u064a\u0648\u0628\u0627\u064a\u064a \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u06a9\u064a\u067e \u0648\u0631\u062f\u064a\u0646 \u0627\u0633\u06a9\u0648\u0689\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u0686\u064a\u06a9 \u06a9\u0631\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u062c\u0628\u0648\u062a\u064a \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0689\u0646\u0645\u0627\u0631\u06a9\u064a \u06a9\u0631\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u062f\u0648\u0645\u064a\u0646\u064a\u06a9\u0627 \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0627\u0644\u062c\u064a\u0631\u064a\u0646 \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0645\u0635\u0631\u064a \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0627\u064a\u0631\u064a\u067c\u0631\u064a\u0646 \u0646\u06a9\u0641\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0627\u064a\u062a\u0647\u0648\u067e\u064a\u0627\u064a\u064a \u0628\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u064a\u0648\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u0641\u062c\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u067e\u0627\u06a9\u0644\u06d0\u0646\u0689 \u067c\u0627\u067e\u0648\u06ab\u0627\u0646\u0648 \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0628\u0631\u062a\u0627\u0646\u0648\u06d0 \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u062c\u0627\u0631\u062c\u06cc\u0627\u06d0\u064a \u0644\u0627\u0631\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u06ab\u0627\u0646\u064a\u0646 \u0633\u064a\u0689\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u062c\u0628\u0644 \u0627\u0644\u0637\u0627\u0631\u0642\u064a \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u06ab\u064a\u0645\u0628\u064a\u0646 \u062f\u0644\u0627\u0633\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u06ab\u0646\u06d0 \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u06ab\u0648\u064a\u067c\u064a\u0645\u0627\u0644\u0646 \u06a9\u0648\u067c\u0632\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u06ab\u0627\u064a\u0627\u0646\u064a\u0632 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0647\u0627\u0646\u06ab \u06a9\u0627\u0646\u06ab \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0647\u0648\u0646\u0689\u0648\u0631\u0627\u0646 \u0644\u064a\u0645\u067e\u064a\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u06a9\u0631\u0648\u0634\u064a\u0627\u064a\u064a \u06a9\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0647\u064a\u067c\u064a \u06ab\u0648\u0631\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0647\u0646\u06ab\u0631\u064a \u0641\u0648\u0631\u0646\u067c"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0627\u0646\u0689\u0648\u0646\u064a\u0634\u064a \u0631\u0648\u067e\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0627\u0633\u0631\u0627\u064a\u0644\u064a \u0646\u064a\u0648 \u0634\u064a\u06a9\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0647\u0646\u062f\u064a \u0631\u0648\u067e\u06cd"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0639\u0631\u0627\u0642\u064a \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0627\u064a\u0631\u0627\u0646\u064a \u0631\u064a\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0622\u064a\u0633\u0644\u06d0\u0646\u0689\u064a \u06a9\u0631\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u062c\u0645\u0627\u064a\u06a9\u0627\u064a\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0627\u0631\u062f\u0646\u064a \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u062c\u0627\u067e\u0627\u0646\u064a \u064a\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u06a9\u064a\u0646\u064a\u0627\u064a\u064a \u0634\u064a\u0644\u0646\u06ab"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u06a9\u0631\u063a\u0632\u0633\u062a\u0627\u0646\u064a \u0633\u0648\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u06a9\u0645\u0628\u0648\u0689\u064a \u0631\u064a\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u06a9\u0648\u0645\u0648\u0631\u064a \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0634\u0645\u0627\u0644\u064a \u06a9\u0648\u0631\u064a\u0627\u064a\u064a \u0648\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u062c\u0646\u0648\u0628\u064a \u06a9\u0648\u0631\u064a\u0627\u064a\u064a \u0648\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u06a9\u0648\u064a\u062a\u064a \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u06a9\u064a\u0645\u0646 \u067c\u0627\u067e\u0648\u06ab\u0627\u0646\u0648 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0642\u0627\u0632\u0642\u0633\u062a\u0627\u0646\u064a \u067c\u064a\u0646\u062c"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0644\u0627\u0634\u06d0 \u06a9\u067e"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0644\u0628\u0646\u0627\u0646\u064a \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0633\u0631\u064a \u0644\u0646\u06a9\u0646 \u0631\u0648\u067e\u06cd"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0644\u0627\u064a\u0628\u064a\u0631\u064a\u0646 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0644\u064a\u0628\u064a\u0627\u06d0\u064a \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0645\u0631\u0627\u06a9\u0634\u064a \u062f\u0631\u0647\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u0645\u0627\u0644\u0689\u0648\u064a \u0644\u064a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0645\u0644\u0627\u06ab\u0627\u0633\u064a \u0627\u0631\u064a\u0627\u0631\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u0645\u0633\u064a\u0689\u0648\u0646\u0627\u064a\u064a \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u0645\u064a\u0627\u0646\u0645\u0627\u0631\u064a \u06a9\u064a\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u0645\u0646\u06ab\u0648\u0644\u064a\u0627\u064a\u064a \u062a\u0648\u06ab\u0631\u064a\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u0645\u06a9\u0627\u0646\u064a\u0633 \u067e\u067c\u0627\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u0645\u0648\u0631\u064a\u0634\u064a\u0633\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u0645\u0648\u0631\u064a\u0634\u064a\u0633\u064a \u0631\u0648\u067e\u06cd"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u0645\u0627\u0644\u062f\u064a\u067e\u064a \u0631\u0648\u067e\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u0645\u0644\u0627\u0648\u064a \u06a9\u0648\u0627\u0686\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u0645\u064a\u06a9\u0633\u064a\u06a9\u0646 \u067e\u064a\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u0645\u0644\u0627\u064a\u0634\u064a \u0631\u0646\u06ab\u067c"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0645\u0648\u0632\u0645\u0628\u064a\u0642\u064a \u0645\u064a\u067c\u064a\u06a9\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0646\u064a\u0645\u064a\u0628\u064a\u0627\u064a\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0646\u0627\u064a\u062c\u064a\u0631\u064a \u0646\u0627\u064a\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u0646\u064a\u06a9\u0627\u0631\u0627\u06ab\u0648\u0646 \u06a9\u0648\u0631\u0689\u0648\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0646\u0627\u0631\u0648\u064a\u062c\u064a\u0646 \u06a9\u0631\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0646\u064a\u067e\u0627\u0644\u064a \u0631\u0648\u067e\u06cd"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0646\u064a\u0648\u0632\u064a \u0644\u064a\u0646\u0689\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0639\u0645\u0627\u0646\u064a \u0631\u064a\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u067e\u0627\u0646\u0627\u0645\u06cd \u0628\u0627\u0644\u0628\u0648\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u067e\u064a\u0631\u0648\u064a\u0646 \u0633\u0648\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u067e\u0627\u067e\u0648\u0627 \u0646\u064a\u0648\u06ab\u0627\u0646\u064a \u06a9\u064a\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u0641\u0644\u067e\u0627\u064a\u0646\u06cd \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u067e\u0627\u06a9\u0633\u062a\u0627\u0646\u06cd \u06a9\u0644\u062f\u0627\u0631\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u067e\u0648\u0644\u064a\u0646\u0689\u064a \u0632\u0644\u0648\u067c\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u067e\u064a\u0631\u0627\u06ab\u0648\u064a\u0646 \u06ab\u0648\u0631\u0627\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0642\u0637\u0631\u064a \u0631\u064a\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0631\u0648\u0645\u0627\u0646\u064a \u0644\u064a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0633\u0631\u0628\u064a\u0627\u064a\u064a \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0631\u0648\u0633\u064a \u0631\u0648\u0628\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0631\u0648\u0627\u0646\u0689\u064a \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0633\u0639\u0648\u062f\u064a \u0631\u064a\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0633\u0648\u0644\u0648\u0645\u0646 \u067c\u0627\u067e\u0648\u06ab\u0627\u0646\u0648 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0633\u064a\u0686\u064a\u0644\u064a\u0633\u064a \u0631\u0648\u067e\u06cd"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0633\u0648\u0689\u0627\u0646\u064a \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0633\u0648\u064a\u0689\u0646\u064a \u06a9\u0631\u0648\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0633\u0646\u06ab\u0627\u067e\u0648\u0631 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0633\u064a\u0646\u067c \u0647\u064a\u0644\u064a\u0646\u0627 \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0633\u064a\u0631\u0627 \u0644\u064a\u0648\u0646\u064a \u0644\u064a\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0633\u0648\u0645\u0627\u0644\u064a \u0634\u064a\u0644\u0646\u06ab"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0633\u0648\u0631\u064a\u0646\u064a\u0645\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u062c\u0646\u0648\u0628 \u0633\u0648\u0689\u0627\u0646\u064a \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0633\u0627\u0648 \u067c\u0648\u0645 \u0627\u0648 \u067e\u0631\u064a\u0646\u0633\u067e\u064a \u0689\u0648\u0628\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0633\u0648\u0631\u064a\u0627\u064a\u064a \u067e\u0648\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0633\u0648\u0627\u0632\u064a \u0644\u064a\u0644\u0627\u0646\u06ab\u064a\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u062a\u0647\u0627\u064a\u064a \u0628\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u062a\u0627\u062c\u06a9\u0633\u062a\u0627\u0646\u064a \u0633\u0648\u0645\u0648\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u062a\u0631\u06a9\u0645\u0627\u0646\u0633\u062a\u0627\u0646\u064a \u0645\u0646\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u062a\u064a\u0648\u0646\u0633\u06d0 \u062f\u064a\u0646\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u067c\u0648\u0646\u06ab\u0646 \u067e\u0627\u0646\u06ab\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u062a\u0631\u06a9\u064a \u0644\u064a\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u067c\u0631\u064a\u0646\u064a\u0689\u0627\u0689 \u0627\u0648 \u067c\u0648\u0628\u0627\u06ab\u0648 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0646\u064a\u0648 \u062a\u0627\u0626\u064a\u0648\u0627\u0646\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u062a\u0646\u0632\u0627\u0646\u064a \u0634\u064a\u0644\u0646\u06ab"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0627\u0648\u06a9\u0631\u0627\u064a\u0646\u064a \u0647\u0631\u064a\u0648\u0646\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u064a\u0648\u06ab\u0627\u0646\u0689\u064a \u0634\u064a\u0644\u0646\u06ab"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0627\u0645\u0631\u064a\u06a9\u0627\u064a\u064a \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u064a\u0648\u0631\u0627\u06ab\u0648\u064a \u067e\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0627\u0632\u0628\u06a9\u0633\u062a\u0627\u0646\u064a \u0633\u0648\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0648\u064a\u0646\u0632\u0648\u064a\u0644\u064a \u0628\u0648\u0644\u064a\u0648\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0648\u064a\u062a\u0646\u0627\u0645\u064a \u0689\u0648\u0646\u06ab"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0648\u0646\u0648\u0627\u062a\u0648 \u0648\u0627\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0633\u0645\u0648\u0648\u0646 \u062a\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0645\u0631\u06a9\u0632\u064a \u0627\u0641\u0631\u064a\u0642\u0627\u064a\u064a CFA \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u062e\u062a\u064a\u0681 \u06a9\u0631\u0628\u064a\u0646 \u0689\u0627\u0644\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u062e\u062a\u064a\u0681 \u0627\u0641\u0631\u064a\u0642\u0627\u064a\u064a CFA \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \u0641\u0631\u0627\u0646\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0646\u0627\u0645\u0639\u0644\u0648\u0645\u0647 \u0645\u0631\u0648\u062c\u0647 \u067e\u06d0\u0633\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u064a\u0645\u0646\u064a \u0631\u064a\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u062c\u0646\u0648\u0628\u064a \u0627\u0641\u0631\u064a\u0642\u0627\u06d0\u064a \u0631\u0646\u0689"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u0632\u064a\u0645\u0628\u064a \u06a9\u0648\u0627\u0686\u0627"_s)
		})
	}));
	return data;
}

CurrencyNames_ps::CurrencyNames_ps() {
}

$Class* CurrencyNames_ps::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ps, name, initialize, &_CurrencyNames_ps_ClassInfo_, allocate$CurrencyNames_ps);
	return class$;
}

$Class* CurrencyNames_ps::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun