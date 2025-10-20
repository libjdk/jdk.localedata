#include <sun/util/resources/ext/CurrencyNames_ja.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ja::*)()>(&CurrencyNames_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ja",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ja_MethodInfo_
};

$Object* allocate$CurrencyNames_ja($Class* clazz) {
	return $of($alloc(CurrencyNames_ja));
}

void CurrencyNames_ja::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"\u30a2\u30f3\u30c9\u30e9 \u30da\u30bb\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"UAE \u30c7\u30a3\u30eb\u30cf\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u30a2\u30d5\u30ac\u30cb\u30fc (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u30a2\u30d5\u30ac\u30cb\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2 \u30ec\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2 \u30c9\u30e9\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u9818\u30a2\u30f3\u30c6\u30a3\u30eb \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u30af\u30ef\u30f3\u30b6"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30ea\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u30a2\u30eb\u30d0 \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3 \u30de\u30ca\u30c8 (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3 \u30de\u30ca\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2 \u30de\u30eb\u30af (BAM)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u30d0\u30eb\u30d0\u30c9\u30b9 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u30d0\u30f3\u30b0\u30e9\u30c7\u30b7\u30e5 \u30bf\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u30d9\u30eb\u30ae\u30fc \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2 \u30ec\u30d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2 \u65b0\u30ec\u30d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u30d0\u30fc\u30ec\u30fc\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u30d6\u30eb\u30f3\u30b8 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u30d0\u30df\u30e5\u30fc\u30c0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u30d6\u30eb\u30cd\u30a4 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2\u30fc\u30ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2 Mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u30ec\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u30d0\u30cf\u30de \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u30d6\u30fc\u30bf\u30f3 \u30cb\u30e5\u30eb\u30bf\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u30dc\u30c4\u30ef\u30ca \u30d7\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7 \u30eb\u30fc\u30d6\u30eb (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7 \u30eb\u30fc\u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u30d9\u30ea\u30fc\u30ba \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u30ab\u30ca\u30c0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u30b3\u30f3\u30b4 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u30b9\u30a4\u30b9 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u30c1\u30ea \u30a6\u30cb\u30c0 \u30c7 \u30d5\u30a9\u30e1\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u30c1\u30ea \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u4e2d\u56fd\u4eba\u6c11\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u30b3\u30ed\u30f3\u30d3\u30a2 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u30b3\u30b9\u30bf\u30ea\u30ab \u30b3\u30ed\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u30ad\u30e5\u30fc\u30d0 \u514c\u63db\u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u30ad\u30e5\u30fc\u30d0 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u30ab\u30fc\u30dc\u30d9\u30eb\u30c7 \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u30ad\u30d7\u30ed\u30b9 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u30c1\u30a7\u30b3 \u30b3\u30eb\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u30c9\u30a4\u30c4 \u30de\u30eb\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u30b8\u30d6\u30c1 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u30c7\u30f3\u30de\u30fc\u30af \u30af\u30ed\u30fc\u30cd"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u30c9\u30df\u30cb\u30ab \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u30a2\u30eb\u30b8\u30a7\u30ea\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u30a8\u30b9\u30c8\u30cb\u30a2 \u30af\u30eb\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u30a8\u30ea\u30c8\u30ea\u30a2 \u30ca\u30af\u30d5\u30a1"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3 \u30da\u30bb\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2 \u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u30e6\u30fc\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9 \u30de\u30eb\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc\u8af8\u5cf6 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u30d5\u30a9\u30fc\u30af\u30e9\u30f3\u30c9\uff08\u30de\u30eb\u30d3\u30ca\u30b9\uff09\u8af8\u5cf6 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u82f1\u56fd\u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u30b0\u30eb\u30b8\u30a2 \u30e9\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u30ac\u30fc\u30ca \u30bb\u30c7\u30a3 (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u30ac\u30fc\u30ca \u30bb\u30c7\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u30b8\u30d6\u30e9\u30eb\u30bf\u30eb \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u30ac\u30f3\u30d3\u30a2 \u30c0\u30e9\u30b7"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u30ae\u30cb\u30a2 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3 \u30c9\u30e9\u30af\u30de"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u30b0\u30a2\u30c6\u30de\u30e9 \u30b1\u30c4\u30a1\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u30ae\u30cb\u30a2\u30d3\u30b5\u30a6 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u30ac\u30a4\u30a2\u30ca \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u9999\u6e2f\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u30db\u30f3\u30b8\u30e5\u30e9\u30b9 \u30ec\u30f3\u30d4\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2 \u30af\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u30cf\u30a4\u30c1 \u30b0\u30fc\u30eb\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u30cf\u30f3\u30ac\u30ea\u30fc \u30d5\u30a9\u30ea\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2 \u30eb\u30d4\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u30a2\u30a4\u30ea\u30c3\u30b7\u30e5 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u30a4\u30b9\u30e9\u30a8\u30eb\u65b0\u30b7\u30a7\u30b1\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u30a4\u30f3\u30c9 \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u30a4\u30e9\u30af \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u30a4\u30e9\u30f3 \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9 \u30af\u30ed\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2 \u30ea\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u30b8\u30e3\u30de\u30a4\u30ab \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u30e8\u30eb\u30c0\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u65e5\u672c\u5186"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u30b1\u30cb\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u30ad\u30eb\u30ae\u30b9\u30bf\u30f3 \u30bd\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u30ab\u30f3\u30dc\u30b8\u30a2 \u30ea\u30a8\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u30b3\u30e2\u30ed \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u5317\u671d\u9bae \u30a6\u30a9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u97d3\u56fd \u30a6\u30a9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u30af\u30a6\u30a7\u30fc\u30c8 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u30b1\u30a4\u30de\u30f3\u8af8\u5cf6 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u30ab\u30b6\u30d5\u30b9\u30bf\u30f3 \u30c6\u30f3\u30b2"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u30e9\u30aa\u30b9 \u30ad\u30fc\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u30ec\u30d0\u30ce\u30f3 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u30b9\u30ea\u30e9\u30f3\u30ab \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u30ea\u30d9\u30ea\u30a2 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u30ec\u30bd\u30c8 \u30ed\u30c6\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2 \u30ea\u30bf\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30b0 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2 \u30e9\u30c3\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u30ea\u30d3\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u30e2\u30ed\u30c3\u30b3 \u30c7\u30a3\u30eb\u30cf\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u30e2\u30eb\u30c9\u30d0 \u30ec\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb \u30a2\u30ea\u30a2\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u30de\u30b1\u30c9\u30cb\u30a2 \u30c7\u30ca\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc \u30c1\u30e3\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb \u30c8\u30b0\u30ed\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u30de\u30ab\u30aa \u30d1\u30bf\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u30e2\u30fc\u30ea\u30bf\u30cb\u30a2 \u30a6\u30ae\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u30de\u30eb\u30bf \u30ea\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u30e2\u30fc\u30ea\u30b7\u30e3\u30b9 \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u30e2\u30eb\u30c7\u30a3\u30d6\u8af8\u5cf6 \u30eb\u30d5\u30a3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u30de\u30e9\u30a6\u30a3 \u30af\u30ef\u30c1\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u30e1\u30ad\u30b7\u30b3 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u30e1\u30ad\u30b7\u30b3 UDI"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u30de\u30ec\u30fc\u30b7\u30a2 \u30ea\u30f3\u30ae\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u30e2\u30b6\u30f3\u30d4\u30fc\u30af \u30e1\u30c6\u30a3\u30ab\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u30e2\u30b6\u30f3\u30d3\u30fc\u30af \u30e1\u30c6\u30a3\u30ab\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u30ca\u30df\u30d3\u30a2 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u30ca\u30a4\u30b8\u30a7\u30ea\u30a2 \u30ca\u30a4\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u30cb\u30ab\u30e9\u30b0\u30a2 \u30b3\u30eb\u30c9\u30d0 \u30aa\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0 \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc \u30af\u30ed\u30fc\u30cd"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u30cd\u30d1\u30fc\u30eb \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u30cb\u30e5\u30fc\u30b8\u30fc\u30e9\u30f3\u30c9 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u30aa\u30de\u30fc\u30f3 \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u30d1\u30ca\u30de \u30d0\u30eb\u30dc\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u30da\u30eb\u30fc \u65b0\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u30d1\u30d7\u30a2\u30cb\u30e5\u30fc\u30ae\u30cb\u30a2 \u30ad\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u30d5\u30a3\u30ea\u30d4\u30f3 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u30d1\u30ad\u30b9\u30bf\u30f3 \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9 \u30ba\u30a6\u30a9\u30c6\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u30d1\u30e9\u30b0\u30a2\u30a4 \u30b0\u30a2\u30e9\u30cb"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u30ab\u30bf\u30fc\u30eb \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2 \u65e7\u30ec\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2 \u30ec\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u30c7\u30a3\u30ca\u30fc\u30eb (\u30bb\u30eb\u30d3\u30a2)"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u30ed\u30b7\u30a2 \u30eb\u30fc\u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u30ed\u30b7\u30a2 \u30eb\u30fc\u30d6\u30eb (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u30eb\u30ef\u30f3\u30c0 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u30b5\u30a6\u30b8 \u30ea\u30e4\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u30bd\u30ed\u30e2\u30f3\u8af8\u5cf6 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u30bb\u30a4\u30b7\u30a7\u30eb \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u30b9\u30fc\u30c0\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u30b9\u30fc\u30c0\u30f3 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u30b9\u30a6\u30a7\u30fc\u30c7\u30f3 \u30af\u30ed\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u30b7\u30f3\u30ac\u30dd\u30fc\u30eb \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u30bb\u30f3\u30c8\u30d8\u30ec\u30ca\u5cf6 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2 \u30c8\u30e9\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u30b9\u30ed\u30d0\u30ad\u30a2 \u30b3\u30eb\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u30b7\u30a8\u30e9\u30ec\u30aa\u30cd \u30ec\u30aa\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u30bd\u30de\u30ea\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0 \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u30b5\u30f3\u30c8\u30e1\u30fb\u30d7\u30ea\u30f3\u30b7\u30da \u30c9\u30d6\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u30a8\u30eb\u30b5\u30eb\u30d0\u30c9\u30eb \u30b3\u30ed\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u30b7\u30ea\u30a2 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u30b9\u30ef\u30b8\u30e9\u30f3\u30c9 \u30ea\u30e9\u30f3\u30b2\u30cb"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u30bf\u30a4 \u30d0\u30fc\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u30bf\u30b8\u30ad\u30b9\u30bf\u30f3 \u30bd\u30e2\u30cb"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30cb\u30b9\u30bf\u30f3 \u30de\u30ca\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30cb\u30b9\u30bf\u30f3 \u65b0\u30de\u30ca\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u30c1\u30e5\u30cb\u30b8\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u30c8\u30f3\u30ac \u30d1\u30fb\u30a2\u30f3\u30ac"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u30c6\u30a3\u30e2\u30fc\u30eb \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u30c8\u30eb\u30b3 \u30ea\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u65b0\u30c8\u30eb\u30b3\u30ea\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u30c8\u30ea\u30cb\u30c0\u30fc\u30c9\u30c8\u30d0\u30b4 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u65b0\u53f0\u6e7e\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u30bf\u30f3\u30b6\u30cb\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca \u30b0\u30ea\u30d6\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u30a6\u30ac\u30f3\u30c0 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u7c73\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u7c73\u30c9\u30eb (\u7fcc\u65e5)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u7c73\u30c9\u30eb (\u5f53\u65e5)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u30a6\u30eb\u30b0\u30a2\u30a4 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u30a6\u30ba\u30d9\u30ad\u30b9\u30bf\u30f3 \u30b9\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u30d9\u30cd\u30ba\u30a8\u30e9 \u30dc\u30ea\u30d0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u30d9\u30cd\u30ba\u30a8\u30e9 \u30dc\u30ea\u30d0\u30eb\u30d5\u30a8\u30eb\u30c6"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0 \u30c9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u30d0\u30cc\u30a2\u30c4 \u30d0\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u897f\u30b5\u30e2\u30a2 \u30bf\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"CFA \u30d5\u30e9\u30f3 BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u9280"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u91d1"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u6df7\u5408\u5358\u4f4d (EURCO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u901a\u8ca8\u5358\u4f4d (EMU-6)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u52d8\u5b9a\u5358\u4f4d (EUA-9)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u52d8\u5b9a\u5358\u4f4d (EUA-17)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u6771\u30ab\u30ea\u30d6 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u7279\u5225\u5f15\u304d\u51fa\u3057\u6a29"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9\u91d1\u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9 UIC \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"CFA \u30d5\u30e9\u30f3 BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u30d1\u30e9\u30b8\u30a6\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u30d7\u30e9\u30c1\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u30c6\u30b9\u30c8\u7528\u901a\u8ca8\u30b3\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u4e0d\u660e\u307e\u305f\u306f\u7121\u52b9\u306a\u901a\u8ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u30a4\u30a8\u30e1\u30f3 \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u30e6\u30fc\u30b4\u30b9\u30e9\u30d3\u30a2 \u30b9\u30fc\u30d1\u30fc \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u5357\u30a2\u30d5\u30ea\u30ab \u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u30b6\u30f3\u30d3\u30a2 \u30af\u30ef\u30c1\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u30b8\u30f3\u30d0\u30d6\u30a8 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u30b8\u30f3\u30d0\u30d6\u30a8 \u30c9\u30eb (2009)"_s)
		})
	});
}

CurrencyNames_ja::CurrencyNames_ja() {
}

$Class* CurrencyNames_ja::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ja, name, initialize, &_CurrencyNames_ja_ClassInfo_, allocate$CurrencyNames_ja);
	return class$;
}

$Class* CurrencyNames_ja::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun