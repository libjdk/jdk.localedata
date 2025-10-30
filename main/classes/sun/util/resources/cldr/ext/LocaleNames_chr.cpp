#include <sun/util/resources/cldr/ext/LocaleNames_chr.h>

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

$MethodInfo _LocaleNames_chr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_chr::*)()>(&LocaleNames_chr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_chr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_chr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_chr_MethodInfo_
};

$Object* allocate$LocaleNames_chr($Class* clazz) {
	return $of($alloc(LocaleNames_chr));
}

void LocaleNames_chr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_chr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_AZ, u"\u13a0\u13ce\u13c6\u13e3\u13c2"_s);
	$var($String, metaValue_JP, u"\u13e3\u13e9\u13c2\u13cf"_s);
	$var($String, metaValue_KG, u"\u13a9\u13b5\u13e3\u13a2\u13cd"_s);
	$var($String, metaValue_ML, u"\u13b9\u13b5"_s);
	$var($String, metaValue_NP, u"\u13c1\u13c6\u13b5"_s);
	$var($String, metaValue_NR, u"\u13c3\u13a4\u13b7"_s);
	$var($String, metaValue_SO, u"\u13d0\u13b9\u13b5"_s);
	$var($String, metaValue_TV, u"\u13da\u13e9\u13b7"_s);
	$var($String, metaValue_bo, u"\u13d8\u13c7\u13d4\u13c2"_s);
	$var($String, metaValue_gu, u"\u13ab\u13e3\u13b3\u13d8"_s);
	$var($String, metaValue_hy, u"\u13a0\u13b3\u13bb\u13a0\u13c2"_s);
	$var($String, metaValue_ka, u"\u13e6\u13e5\u13a0\u13c2"_s);
	$var($String, metaValue_km, u"\u13a9\u13bb\u13b7"_s);
	$var($String, metaValue_kn, u"\u13a7\u13be\u13d3"_s);
	$var($String, metaValue_ko, u"\u13aa\u13b5\u13a0\u13c2"_s);
	$var($String, metaValue_la, u"\u13b3\u13d8\u13c2"_s);
	$var($String, metaValue_lo, u"\u13b3\u13a3"_s);
	$var($String, metaValue_ml, u"\u13b9\u13b3\u13ef\u13b3\u13bb"_s);
	$var($String, metaValue_mn, u"\u13b9\u13c2\u13aa\u13b5\u13a0\u13c2"_s);
	$var($String, metaValue_or, u"\u13a3\u13d7\u13a0"_s);
	$var($String, metaValue_ta, u"\u13d4\u13bb\u13b5"_s);
	$var($String, metaValue_te, u"\u13d6\u13b7\u13a6"_s);
	$var($String, metaValue_chr, u"\u13e3\u13b3\u13a9"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u13aa\u13b6\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u13bb\u13b3\u13d5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u13d7\u13ac\u13df\u13b6\u13cd\u13d9\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u13a1\u13bc\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u13e3\u13a7\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u13d8\u13b9\u13c1"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u13d6\u13d0"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u13b3\u13c6\u13c4\u13eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u13a4\u13b5\u13cc\u13b3\u13d3\u13c5 \u13a4\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u13b3\u13b6\u13d9\u13be\u13a6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u13d6\u13da\u13bc"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u13a0\u13c2\u13d9\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u13cc\u13ca \u13a2\u13f3\u13be\u13b5\u13cd\u13d4\u13c5 \u13a1\u13b3\u13c8 \u13a2\u13b9\u13b5\u13d8\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u13ca\u13b5\u13e5\u13a5\u13bb \u13db\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u13a0\u13eb\u13a8\u13c2\u13cd\u13d6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u13a4\u13ea\u13d8 & \u13c6\u13ca\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u13a2\u13d7\u13ef\u13c8\u13a9 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u13a0\u13c2\u13a9\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u13a0\u13b5\u13c7\u13c2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u13a0\u13b5\u13bb\u13c2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u13a0\u13c2\u13aa\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u13e7\u13c1\u13cd\u13d3\u13b8"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u13a0\u13e5\u13c2\u13d8\u13c2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u13a0\u13ba\u13b5\u13a7 \u13cc\u13bc\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u13a0\u13cd\u13df\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u13a1\u13b3\u13d7\u13dc"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u13a0\u13b7\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u13a0\u13b9\u13f0\u13df \u13a9\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u13a3\u13b4\u13c5\u13d3 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(metaValue_AZ)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u13c9\u13cf\u13c2\u13a0 & \u13b2\u13e4\u13aa\u13eb\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u13c6\u13c7\u13d9\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u13ce\u13c6\u13c3"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u13c6\u13c2\u13a6\u13b5\u13d5\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u13ab\u13bb\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u13c7\u13b5\u13e5\u13a5\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u13cb\u13a9\u13be \u13e9\u13d0"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u13ca\u13b5\u13a8\u13b5\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u13c6\u13ad\u13b4\u13a2\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u13cb\u13b7\u13c2\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u13c6\u13c2\u13a2\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13c6\u13d5\u13b3\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u13c6\u13ca\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u13a1\u13cf\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u13ca\u13be\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u13c9\u13b5\u13eb\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u13a7\u13b5\u13c8\u13a2\u13c2\u13af \u13be\u13cd\u13a9\u13c1\u13db\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u13c6\u13cf\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u13be\u13cd\u13a9 \u13c6\u13ad\u13b9\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u13d0\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u13ca\u13d4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u13ca\u13ea \u13a4\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u13c6\u13e3\u13e9\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u13c7\u13b3\u13b7\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u13c7\u13b5\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u13c7\u13cf\u13a0\u13c2 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u13a0\u13c2\u13c8\u13b7 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u13a8\u13be\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u13aa\u13aa\u13cd (\u13a9\u13b5\u13c2) \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u13b9\u13cc\u13d5\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u13a7\u13c2\u13aa - \u13a8\u13c2\u13dd\u13cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u13ac\u13bf\u13a8\u13cd\u13db \u13a0\u13f0\u13df \u13cd\u13a6\u13da\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u13a7\u13c2\u13aa - \u13c6\u13cc\u13e9\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u13cd\u13eb\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u13a2\u13ec\u13b5 \u13be\u13bf \u13a0\u13b9\u13f3\u13b6\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u13a0\u13d3\u13cd\u13d3\u13f4\u13b2\u13cd\u13a9 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u13e5\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u13a7\u13b9\u13b7\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u13d3\u13b6\u13c2\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u13aa\u13b8\u13bb\u13c8\u13a2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u13a6\u13c2\u13f4\u13d4\u13c5\u13a3\u13d3\u13b8 \u13a4\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u13aa\u13cd\u13d3 \u13b5\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u13ab\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u13a2\u13ac\u13be\u13d5\u13be \u13a2\u13e4\u13f3\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u13ab\u13b3\u13a8\u13a3"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u13d3\u13c2\u13cd\u13d3\u13f2\u13af\u13b2 \u13a4\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u13cc\u13a2\u13c6\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u13e4\u13a9\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u13a8\u13a7\u13e7\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u13a0\u13c2\u13db\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u13a0\u13e5\u13c2\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u13e5\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u13d7\u13f0\u13aa \u13a6\u13cf\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u13d5\u13eb\u13be\u13a6\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u13e5\u13ca\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u13d7\u13c2\u13b9\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u13d7\u13c2\u13a8\u13eb \u13a4\u13c3\u13ea\u13b6\u13d9\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u13d9\u13bb\u13c2\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u13a0\u13b3\u13bb\u13a0\u13c2 \u13e7\u13cd\u13d7 \u13d7\u13aa\u13ea\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u13d9\u13bb\u13c2\u13a7\u13c2 \u13cd\u13a6\u13da\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u13aa\u13b6\u13c2\u13d4\u13c3"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u13d1\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u13e2\u13d3\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u13a0\u13b5\u13e5\u13b5\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u13c7\u13a6\u13cf\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u13d1\u13d4 \u13a0\u13b4 \u13ba\u13b5\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u13c6\u13b9\u13c6\u13be\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u13a1\u13c6\u13d9\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u13c6\u13c8\u13ef\u13ba\u13be\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u13a0\u13d3\u13be\u13a6\u13ba"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u13a1\u13cd\u13d9\u13c2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u13a2\u13e5\u13c8\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u13ed\u13d5\u13b5\u13ac \u13d7\u13dc \u13cc\u13ae\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u13c6\u13b3\u13a4\u13e9\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u13e7\u13a8\u13ce"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(metaValue_ML)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u13a0\u13e3\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u13a1\u13b5\u13df\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u13a0\u13c2\u13cd\u13c6\u13c2\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u13a2\u13d7\u13a3\u13c8\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u13f3\u13b3\u13db \u13a0\u13c2\u13a4\u13be\u13d3\u13e1\u13ac"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u13a9\u13b4\u13aa\u13b5\u13a0\u13c2 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u13f3\u13b6\u13a0\u13cd\u13d3\u13c5\u13c5"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u13e3\u13f0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u13ab\u13e3\u13b3\u13d8 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u13a0\u13d7\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u13eb\u13c2\u13a6\u13d9\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u13eb\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u13e9\u13a9 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u13b9\u13a2\u13c9\u13c2\u13cf\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u13ea\u13b6 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u13a6\u13b8\u13e5\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u13a6\u13c9\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u13a9\u13b5\u13cf\u13f2"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u13be\u13a9\u13b5\u13a0\u13c2 \u13c8\u13e5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u13cb\u13be\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u13e3\u13a0\u13e5\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u13a0\u13c2\u13a6\u13b8\u13e5 \u13a9\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u13ac\u13c2\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u13a6\u13a0\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u13e5\u13c6\u13b5\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u13a2\u13e4\u13cd\u13db\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u13a6\u13b9\u13c8\u13a2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u13a9\u13a2\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u13e9\u13d3\u13b7\u13c7"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u13a1\u13c6\u13d9\u13b5\u13a0\u13b5 \u13a9\u13a2\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u13aa\u13a2\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u13e7\u13a6\u13c3\u13ee \u13e3\u13a0\u13e5\u13a2 \u13a0\u13b4 \u13be\u13cd\u13a9 \u13e7\u13a6\u13c3\u13ee \u13a0\u13cd\u13db\u13ad\u13df \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u13e9\u13d4\u13b9\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u13c6\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u13a9\u13a2\u13c2-\u13c8\u13cc\u13a4\u13eb"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u13df\u13a6\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u13a6\u13ef\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u13a0\u13f0\u13df \u13ab\u13d7\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u13dd \u13a6\u13ec\u13c2\u13af\u13cd\u13d7 \u13a6\u13b8\u13db\u13a2 \u13f1\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u13a0\u13df\u13ef\u13c2 \u13a0\u13c2\u13d3\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u13b0\u13c2\u13a9 \u13aa\u13c2\u13a9 \u13a4\u13d3\u13e4\u13b5\u13d3 \u13e7\u13c2\u13b8\u13eb\u13cd\u13d3\u13c1\u13d7 \u13a2\u13ac\u13be\u13d5\u13be \u13d3\u13b6\u13c2\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u13b2\u13d7 \u13a4\u13a6\u13da\u13db\u13a2 \u13a0\u13b4 \u13ba\u13a9\u13d3\u13be\u13b5\u13d7 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u13ad\u13c2\u13da\u13b3\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u13a7\u13b6\u13a1\u13cf\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u13a0\u13a8\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u13cd\u13eb\u13cf \u13a0\u13c2\u13d3\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u13ae\u13a2\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u13b2\u13c2\u13a6\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u13e5\u13cd\u13c6 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u13a2\u13c2\u13d9\u13c2\u13cd\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u13a0\u13f2\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u13c2\u13ef\u13c6\u13b5\u13d4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u13be\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u13cc\u13cc"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u13a2\u13cf\u13b5\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u13a4\u13cd\u13d7 \u13a4\u13a6\u13da\u13db\u13a2 \u13be\u13bf \u13a0\u13cd\u13a6\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u13a2\u13c5\u13d7\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u13c8\u13d7\u13cf \u13f4\u13eb\u13ef \u13a0\u13ba\u13c9 \u13a2\u13ac\u13be\u13d5\u13c5"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u13a2\u13b3\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u13a2\u13b4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u13e7\u13c1\u13cd\u13d3\u13b8\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u13a2\u13d4\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u13a0\u13f0\u13a6\u13b4\u13f4\u13eb\u13cd\u13a9 \u13a0\u13a4\u13d3\u13d7\u13cd\u13d9\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u13d4\u13f1 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u13c7\u13c2\u13a6\u13b3 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u13e8\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u13a2\u13cd\u13b3\u13bb\u13a9 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u13e3\u13ba\u13a2\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u13c7\u13c2\u13a6\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u13e6\u13d3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u13a0\u13f1\u13c4"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u13ab\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u13a7\u13be\u13d3 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u13cd\u13eb\u13cf \u13a6\u13b8\u13b3\u13d7 \u13a0\u13c2\u13d3\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u13ca\u13d7\u13cd\u13d8 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u13a8\u13c2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(metaValue_KG)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u13b3\u13d8\u13c2 \u13a0\u13b9\u13f0\u13df"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u13a7\u13b9\u13c9\u13d7\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u13a7\u13b5\u13c6\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u13aa\u13bc\u13b3\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13a8\u13d8\u13cf \u13a0\u13b4 \u13c1\u13ea\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u13a8\u13be\u13d3 \u13a6\u13b8\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13aa\u13b5\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u13e7\u13a6\u13c3\u13ee \u13aa\u13b5\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u13cd\u13eb\u13cf \u13a6\u13b8\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u13ab\u13ea\u13a2\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u13d9\u13a9 \u13c8\u13cf\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u13a8\u13a2\u13b9\u13c2 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u13a7\u13ce\u13a7\u13cd\u13d5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u13f2\u13c2\u13a2 \u13d7\u13aa\u13ea\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u13b4\u13a3\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u13b4\u13c6\u13be\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13b7\u13cf\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u13c8\u13e5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u13a1\u13b3\u13d7 \u13a0\u13c2\u13d3\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u13b5\u13a6\u13d7\u13c2\u13cd\u13d3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u13cd\u13b5 \u13b3\u13c2\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u13b3\u13c8\u13b5\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u13b4\u13d0\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u13b5\u13d7\u13ea\u13c2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u13b8\u13a7\u13ce\u13cb\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u13b3\u13d8\u13eb\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u13a7\u13d4\u13a7\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u13b5\u13c8\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u13b3\u13d7\u13c3"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u13ed\u13be\u13e6"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u13b3\u13c2\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u13d4\u13a0\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u13bc\u13b6\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u13b9\u13be\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u13b9\u13b5\u13d9\u13eb\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u13bc\u13c2\u13d4\u13c1\u13a6\u13b6"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13e1\u13e1"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u13b9\u13d3\u13a6\u13cd\u13a7\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u13b9\u13cc\u13b5 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u13a0\u13b5\u13a4\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u13d4\u13f1 \u13d4\u13ef\u13b4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u13e7\u13f4\u13dc \u13b9\u13ce\u13d9\u13c2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(metaValue_ML)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u13b9\u13ef\u13b9\u13b5 (\u13c7\u13b5\u13b9)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u13b9\u13c2\u13aa\u13b5\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u13c1\u13e9\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u13b9\u13a7\u13a3 (\u13a4\u13d3\u13e4\u13b5\u13d3 \u13e7\u13c2\u13b8\u13eb\u13cd\u13d3\u13c1\u13d7 \u13a2\u13ac\u13be\u13d5\u13be) \u13e3\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13d7\u13dc \u13b9\u13b5\u13a0\u13be \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u13b9\u13d8\u13c2\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u13b9\u13d8\u13a2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u13b9\u13c2\u13d8\u13cc\u13b3\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u13b9\u13b5\u13d4"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u13bc\u13b5\u13cf\u13a5\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d7\u13dc \u13a0\u13b5\u13d4\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u13b9\u13b5\u13d7\u13eb\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u13b9\u13b3\u13eb"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u13a0\u13c2\u13cd\u13c6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u13e3\u13c6\u13c2\u13cf \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u13b9\u13b4\u13cf\u13a2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u13bc\u13ce\u13bb\u13c7\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u13be\u13bb\u13c8\u13a2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u13ad\u13eb\u13c2-\u13cc\u13ad\u13e9 \u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u13a0\u13c2\u13c8\u13b7 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u13a2\u13e4 \u13a7\u13b5\u13d9\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u13be\u13a2\u13e8"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u13c3\u13b5\u13ec\u13b5\u13a9 \u13a4\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u13c2\u13e5\u13b5\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u13d4\u13b6\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u13c2\u13a7\u13b3\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u13c1\u13db\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u13c3\u13ea"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u13c2\u13f3"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u13b6\u13b9\u13c9"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u13a2\u13e4 \u13cf\u13a2\u13b4\u13c2\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u13a3\u13ba\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u13a0\u13be\u13a9\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u13ce\u13ce\u13b5\u13e9 \u13df\u13f2\u13b5 \u13a0\u13c2\u13a6\u13b8"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u13c6\u13be\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u13a9\u13b5\u13cf\u13f2 \u13a9\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u13c7\u13b7"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u13a0\u13c2\u13a6\u13b8\u13e5 \u13c6\u13b5\u13c2\u13cf\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u13c6\u13c7 \u13a2\u13e4 \u13a9\u13a2\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u13a0\u13c2\u13c8\u13b5\u13a9\u13c3"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u13c6\u13a9\u13cd\u13d6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u13c9\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u13a1\u13ec\u13c2\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13c8\u13f0 \u13a0\u13b4 \u13bb\u13c7\u13b6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u13c8\u13a7\u13b5\u13c2 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u13c7\u13a1\u13d9 \u13b5\u13a2\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u13c6\u13b4\u13cd\u13d7\u13c2\u13a0\u13c2 \u13c4\u13ac\u13eb\u13f3\u13cc\u13d5\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u13c9\u13e5\u13a6\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u13c6\u13b4\u13a0\u13eb"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u13c2\u13a0\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u13a0\u13c2\u13aa\u13a2 \u13e7\u13cd\u13d7 \u13d7\u13aa\u13ea\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u13c6\u13b3\u13c7\u13a2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u13db\u13b9\u13ca\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u13a0\u13c2\u13c8\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u13a7\u13d4\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u13c2\u13f3\u13eb\u13ef\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u13a0\u13cd\u13db \u13a3\u13cf\u13f0\u13c2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u13b4\u13cf\u13a6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u13a1\u13b6\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13a0\u13b9\u13f0\u13df"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u13b4\u13f3\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u13e7\u13a6\u13c3\u13ee \u13a0\u13ba\u13b5\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u13b6\u13e3\u13c6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u13a3\u13cf\u13f0\u13c2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u13b6\u13b9\u13c2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u13d2\u13c8\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u13f2\u13c2\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u13b6\u13e9\u13c2\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u13cc\u13a4\u13d7 \u13a1\u13b4\u13c8\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u13d0\u13b6\u13b9\u13c2 \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u13d4\u13cc\u13e9\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u13ed\u13d5\u13b5\u13ac \u13d7\u13dc \u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u13cf\u13a1\u13e5\u13b5\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u13d1\u13d5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u13a0\u13f0\u13df \u13a0\u13b9\u13f0\u13df"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u13cd\u13eb\u13d5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u13d7\u13a7\u13b8\u13ac \u13d7\u13dc \u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13d7\u13dc \u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u13cf\u13c2\u13a6\u13c9\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13ae\u13b5\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u13a4\u13b6\u13d2\u13cd\u13d4\u13c5\u13af \u13a0\u13cd\u13d3\u13c5\u13c5 \u13a0\u13f2\u13cd\u13d4\u13c5\u13a9 \u13c2\u13da\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u13a0\u13f0\u13df \u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u13cd\u13b6\u13eb\u13c2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d7\u13dc \u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u13cd\u13e9\u13b5\u13c6\u13b5\u13d7 \u13a0\u13b4 \u13e4\u13c2 \u13b9\u13f0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u13a0\u13ba\u13b5\u13a6\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u13cd\u13b6\u13e9\u13a9\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u13cf\u13a1\u13b3 \u13b4\u13a3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13b9\u13b5\u13a2\u13c3"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u13cf\u13c2\u13a6\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u13b9\u13ca\u13e4"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u13a0\u13e9\u13c8\u13b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u13a4\u13e6\u13cd\u13d7 \u13d4\u13bb\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u13d2\u13b5\u13be\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d1\u13d5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u13cc\u13a3 \u13d9\u13ba \u13a0\u13b4 \u13c8\u13c2\u13cf\u13c7"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u13a1\u13b5\u13cc\u13b5\u13c6\u13d9\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u13cf\u13c2\u13d8 \u13b9\u13d8\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u13cf\u13b5\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u13a1\u13cd\u13e9\u13d8\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u13df\u13cd\u13db\u13c2 \u13d3 \u13ab\u13be\u13ad"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u13a0\u13d1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"US \u13a0\u13df\u13b6\u13db \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13d7\u13dc \u13a0\u13b9\u13f0\u13df"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u13a0\u13c2\u13db\u13b5\u13a9 \u13a0\u13b4 \u13a8\u13a2\u13aa \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u13f0\u13be\u13a6\u13c7\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u13e3\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u13a0\u13c2\u13a6\u13b8\u13e5 \u13e7\u13a6\u13be\u13ee \u13a6\u13d9\u13af \u13a4\u13b5\u13cd\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u13d9\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u13d4\u13ef\u13b4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u13d4\u13e5\u13a9\u13cd\u13d5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u13a8\u13c6\u13d9\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u13d9\u13a8\u13b3\u13ed"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u13d8\u13bc\u13b5-\u13b4\u13cd\u13d6"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u13f0\u13b9\u13cb"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u13db\u13b5\u13a9\u13ba\u13c2\u13cd\u13d4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u13da\u13c2\u13cf\u13cd\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u13d9\u13be\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u13ac\u13c3"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u13df\u13c2\u13d5\u13d7 \u13a0\u13b4 \u13d9\u13c6\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u13d4\u13a2\u13e9\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u13a0\u13cd\u13da\u13b5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u13d6\u13c2\u13cf\u13c2\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u13c6\u13cf\u13f2"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u13c4\u13ec\u13b5\u13cd\u13db\u13be \u13a0\u13cd\u13d3\u13e9\u13db\u13cd\u13d9\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u13f3\u13a7\u13b4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u13a0\u13ec\u13b9\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u13d7\u13a7\u13b8\u13ac \u13d7\u13dc \u13d3\u13b6\u13c2\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u13da\u13eb\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u13a7\u13c2\u13aa \u13cd\u13e9\u13af\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d7\u13dc \u13d3\u13b6\u13c2\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d7\u13a7\u13b8\u13ac \u13d3\u13b6\u13c2\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u13f3\u13a6\u13c2\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d7\u13dc \u13f3\u13b3\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u13cf\u13c5\u13ad\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"U.S. \u13a0\u13cd\u13db \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u13cc\u13ca \u13a2\u13f3\u13be\u13b5\u13cd\u13d4\u13c5 \u13a0\u13f0\u13b5 \u13da\u13be\u13d9\u13e2\u13d2"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u13cc\u13ca \u13a2\u13f3\u13be\u13b5\u13cd\u13d4\u13c5 \u13cd\u13a6\u13da\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u13ad\u13e9\u13bc"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u13f3\u13b7\u13c7"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u13e1\u13cf\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u13a4\u13cd\u13c7\u13a9\u13cd\u13d6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u13a0\u13f0\u13df \u13a1\u13b6\u13af \u13d3\u13df\u13b6\u13cd\u13d7\u13d3\u13c5\u13a2 \u13d4\u13b9\u13cf\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u13be\u13e5\u13f0\u13b9\u13ca\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u13a0\u13e5\u13b3\u13c1\u13e0 \u13a6\u13da\u13b2"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u13a4\u13d3\u13c5\u13d8 \u13eb\u13c2\u13cf\u13c2\u13d7 \u13a0\u13b4 \u13be\u13cd\u13a9 \u13c7\u13be\u13d7\u13c1\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u13ea\u13c1\u13d1\u13ea\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u13c8\u13d7\u13cd \u13a0\u13d2\u13c2\u13b8 \u13c2\u13a8\u13d2\u13be \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"U.S. \u13a0\u13d2\u13c2\u13b8 \u13c2\u13a8\u13d2\u13be \u13da\u13a6\u13da\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u13eb\u13a1\u13d8\u13be\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u13e9\u13c2\u13a4\u13e9\u13da"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u13c3\u13a6\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u13a0\u13cd\u13d4\u13b4\u13cf\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u13ba\u13b3\u13c1\u13cf\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u13e9\u13b5\u13cd \u13a0\u13b4 \u13ca\u13da\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u13a0\u13f0\u13df \u13e7\u13be\u13b5\u13aa\u13af \u13be\u13bf \u13b9\u13a2\u13c9\u13c2\u13cf\u13ef \u13a2\u13ac\u13be\u13d5\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u13be\u13aa\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u13b3\u13aa\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u13e9\u13b5\u13ce\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u13cc\u13bc\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u13ec\u13b3\u13f1\u13d4"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u13e1\u13d9-\u13c4\u13cd\u13db\u13a2\u13a5\u13a7\u13c1\u13ac\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u13e9\u13b4"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u13e1\u13d9-\u13c8\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u13a0\u13e9\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u13c6\u13b5\u13c2\u13cf\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u13aa\u13d0\u13c9"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u13aa\u13ea\u13b3\u13c5 \u13c2\u13a8\u13d2\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u13f0\u13ba\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u13be\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u13a0\u13df\u13b6\u13cd\u13d7 \u13d7\u13a6\u13c5\u13c3\u13d9\u13d7 \u13d5\u13a6\u13c5\u13c3\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u13ba\u13ef\u13d6"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u13e9\u13be\u13a2 \u13a0\u13cd\u13d3\u13c5\u13c5 \u13a0\u13f2\u13cd\u13d4\u13c5\u13a9 \u13c2\u13da\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u13d5\u13eb\u13be\u13a6\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u13a9\u13b4\u13aa\u13b5\u13a0\u13c2 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u13af\u13b3\u13a6\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u13cc\u13bb\u13c8\u13ef"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u13cf\u13bb\u13c6\u13c7"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u13c4\u13ec\u13b5\u13cd\u13db\u13be \u13a4\u13d4\u13c2\u13d7\u13a6\u13d9\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u13a0\u13c2\u13a9\u13b8\u13e5 \u13c2\u13d3\u13f3\u13d3\u13b4\u13c5\u13af \u13d7\u13ce\u13cd\u13d7 \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13d7\u13dc \u13d0\u13e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u13d6\u13b7\u13a6 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u13b6\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u13b9\u13e3\u13ba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u13a0\u13af\u13d7\u13a8 \u13d3\u13b6\u13c2\u13a8 \u13a0\u13d5\u13b3 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u13af\u13b5\u13a8\u13be\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u13a6\u13c5\u13af\u13db \u13a0\u13b3\u13c8-\u13a1\u13c2\u13d7\u13a9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u13c4\u13ea\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u13d3\u13aa\u13d4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u13a7\u13b5\u13a2-\u13be\u13ef\u13db\u13d2 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u13d3\u13b3\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u13d4\u13a2\u13d4"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13d7\u13dc \u13b7\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u13a4\u13da\u13b7\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u13cc\u13c5\u13d3\u13eb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u13a0\u13c2\u13b6\u13bb \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u13cc\u13a7\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u13cc\u13b9\u13ca\u13b7"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u13cc\u13c2\u13d4\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u13be\u13a6\u13b9\u13c7"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u13ac\u13b9\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u13b7\u13c6-\u13b7\u13b7\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u13cc\u13c1\u13ab"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u13c2\u13ef\u13be\u13aa\u13b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u13b7\u13be\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u13b7\u13a3"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u13a0\u13c8\u13b5\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u13ad\u13bc\u13c2\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u13bb\u13d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u13c6\u13b5\u13c1\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u13b7\u13f1\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u13c6\u13cc\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u13a0\u13c2\u13cd\u13c6\u13c2\u13f1 \u13cd\u13c6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u13cd\u13a6\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u13cf\u13cf\u13b5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u13a0\u13e9\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u13a0\u13c6\u13cf\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u13a0\u13ac\u13bf\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u13a0\u13a7\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u13a0\u13b9\u13ad\u13b5\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u13a0\u13e9\u13aa\u13c2\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u13a1\u13b3\u13c8\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u13e3\u13c6\u13c2\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u13a1\u13b3\u13c8"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u13e3\u13e9\u13c2\u13cf \u13e7\u13c3\u13f4\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u13a0\u13cc\u13bb\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u13a0\u13e9\u13b5\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u13a0\u13f1\u13b9\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(metaValue_AZ)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u13c6\u13cd\u13af\u13a9\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u13c7\u13b3\u13b7\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u13ca\u13b5\u13a8\u13b5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u13c8\u13cd\u13b3\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u13c6\u13bb\u13c6\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u13c7\u13c2\u13a6\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u13a9\u13df \u13a4\u13c4\u13b3\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u13c7\u13d9\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u13c6\u13cd\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"\u13cf\u13c2\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u13b9\u13a1\u13c2\u13b9\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u13b3\u13a3 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u13ce\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u13a8\u13d4\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u13aa\u13f1\u13b3\u13c8\u13b6 \u13ce\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u13e4\u13e4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u13e3\u13bc\u13b6"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u13aa\u13b5\u13cd\u13a2\u13a7\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u13e4\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u13e7\u13c2\u13b3\u13eb\u13cd\u13d7 \u13cd\u13b3\u13eb\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u13e7\u13e9\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u13ea\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u13a2\u13d7\u13ef\u13c8\u13a9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u13d5\u13c2\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u13f3\u13b3\u13c8 \u13c9\u13e7\u13a9\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u13d9\u13a2\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u13a0\u13df\u13b6\u13cd\u13d7 \u13a0\u13d5\u13b3 \u13f1\u13ac\u13c1\u13b8\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u13c7\u13b9\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u13d7\u13ea\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u13d4\u13d8\u13c2 \u13a0\u13b9\u13f0\u13df \u13cd\u13c6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u13d3\u13d0\u13c5\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u13c7\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u13d3\u13b6\u13c2\u13a8\u13cd\u13db \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u13cc\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u13a0\u13c2\u13aa\u13a2 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u13a1\u13ea"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u13f1\u13ac\u13cd\u13d7\u13ad\u13ca \u13a0\u13cd\u13d3\u13c5\u13c5 \u13a0\u13f2\u13cd\u13d4\u13c5\u13a9 \u13c2\u13da\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u13b9\u13b5\u13d9\u13eb\u13a0 \u13e3\u13b9\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u13a0\u13c2\u13aa\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u13a9\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u13a1\u13cd\u13c7\u13b3\u13c2\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u13cd\u13c6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u13a1\u13cd\u13d9\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u13ad\u13c2 \u13be\u13bf \u13c6\u13c9\u13bc\u13ec"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u13c6\u13cd\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u13ad\u13c2\u13ab\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u13d4\u13e4\u13b5\u13af\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u13a6\u13b8\u13b3\u13d7\u13a8 \u13d0\u13c8\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u13ad\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u13dd\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u13c7\u13cf\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u13a0\u13af\u13d7\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u13ed\u13d7\u13b5\u13ac \u13d7\u13dc \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u13a4\u13e6\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u13ca\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u13c8\u13c2\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u13eb\u13e5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u13e0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u13a8\u13be\u13d9\u13c2\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u13c7\u13b6\u13a1\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u13a4\u13b9\u13ca\u13c5\u13da"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u13a6\u13b8\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u13ed\u13d5\u13b5\u13ac \u13d7\u13dc \u13df\u13cf\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u13a8\u13b5\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u13cd\u13a6\u13d7 \u13a8\u13b5\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u13a6\u13b5\u13cf\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u13c6\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u13c9\u13e3\u13ca\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u13c4\u13ec\u13b5\u13cd\u13db\u13be \u13a6\u13ec\u13c2\u13af\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u13b9\u13be\u13a7\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u13ad\u13a4\u13cc"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u13a0\u13c2\u13c8\u13b7"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u13af\u13c2\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u13a0\u13c2\u13b1\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u13c8\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u13a7\u13b6\u13a1\u13cf\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u13ae\u13cf\u13a0\u13c2 \u13df\u13f2\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u13b2\u13c2\u13a6\u13b5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u13ae\u13b4\u13b6"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u13a0\u13f0\u13df \u13a6\u13ec\u13c2\u13af\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u13e3\u13bc"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u13a2\u13c2\u13d9\u13c2\u13cf\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u13d8\u13c7\u13d4\u13c2 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u13a2\u13a6\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u13cf\u13e7\u13e9\u13c2 \u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u13a2\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u13e7\u13c1\u13cd\u13d3\u13b8\u13af\u13a2\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u13ac\u13e9\u13b5\u13f2\u13e5\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u13a2\u13c4\u13a6\u13d8\u13da"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d7\u13dc \u13cc\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u13c6\u13cc \u13e3\u13e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u13b9\u13da\u13b4\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u13b7\u13b4 \u13cc\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u13b9\u13a6\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u13b9\u13df\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u13a2\u13be\u13b5 \u13cc\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u13cf\u13a9\u13cf\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u13b9\u13a7\u13cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u13cd\u13aa\u13b5\u13d8 \u13cc\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u13a9\u13ab\u13f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u13b9\u13cc\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u13ab\u13e9\u13c2\u13a0\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u13a7\u13cc\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u13a7\u13b3\u13b5\u13d1\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u13a7\u13c4\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u13a7\u13cf\u13bb\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u13ab\u13d7\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u13aa\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u13ce\u13b7\u13ad"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(metaValue_KG)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u13d0\u13c2\u13c2\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u13b8\u13a6\u13cf\u13bb\u13cb\u13a2\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u13b9\u13b3\u13ef\u13b3\u13bb \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u13a6\u13c2\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u13b4\u13b9\u13ca\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u13b5\u13c2\u13a6\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u13de\u13a4\u13b5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u13c2\u13ac\u13be\u13db\u13a2 \u13a4\u13d3\u13e4\u13b5\u13a6\u13ef \u13a0\u13df\u13b6\u13db \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u13b5\u13da\u13e9\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u13b7\u13c6-\u13a7\u13d4\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u13b3\u13d8\u13eb\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u13b9\u13b3\u13a6\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u13b9\u13cc\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u13a0\u13d3\u13c1\u13df\u13f4\u13d7\u13cd\u13a9 Unicode \u13d7\u13a6\u13c5\u13c3\u13d9\u13d7 \u13d5\u13a6\u13c5\u13c3\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u13b9\u13eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u13b9\u13ce\u13d9\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u13b9\u13b3\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u13b9\u13b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u13b9\u13b5\u13d8\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u13cb\u13bb\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u13bc\u13a7\u13cc"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u13a1\u13b3\u13d7 \u13d0\u13c8\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u13c2\u13a6\u13a5-\u13a2\u13f3\u13f1\u13b8\u13d7 \u13a0\u13f1\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u13c3\u13b5\u13ea\u13e5\u13c2 \u13c9\u13a7\u13b9\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13c2\u13d5\u13c7\u13b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u13be\u13d9\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u13db\u13e5"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u13c3\u13b5\u13ea\u13e5\u13c2 \u13be\u13b5\u13cd\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13c2\u13d5\u13c7\u13b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u13be\u13e9\u13b0"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u13c2\u13ef\u13c2\u13e3"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u13a7\u13e5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u13a7\u13c8\u13b4"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u13a0\u13cf\u13d4\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u13e5\u13e7"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u13a7\u13bb\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u13ba\u13be\u13d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u13ba\u13b7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u13a0\u13b3\u13bb\u13a0\u13c2 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u13a3\u13b6\u13bc"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u13a3\u13ce\u13d8\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u13a7\u13c6\u13d7\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u13bc\u13b5\u13cf\u13a1\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u13cf\u13b3\u13be\u13c2 \u13d9\u13c3\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u13e1\u13c2\u13e3\u13c8"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u13da\u13a0\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u13c9\u13b5\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u13d3\u13c2\u13a9 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u13c6\u13cd\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u13c9\u13e7\u13a9\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u13d7\u13a6\u13c5\u13c3\u13d9\u13d7 \u13d5\u13a6\u13c5\u13c3\u13db\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u13c6\u13cf\u13b5\u13a2 \u13c9\u13e7\u13a9\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u13d4\u13ef\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u13b9\u13ab\u13e9-\u13bb\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u13a0\u13d5\u13b3 \u13f1\u13ac\u13c1\u13b8\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u13ba\u13b3\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 \u13a2\u13f3\u13df\u13b6\u13d3 \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2 (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 \u13a2\u13f3\u13df\u13b6\u13d3 \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2 (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\u13cc\u13b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u13b9\u13ef\u13b9\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u13a8\u13e7\u13e9"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u13c9\u13d9"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u13b9\u13aa\u13d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u13a2\u13d7\u13ef\u13c8\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 \u13a2\u13f3\u13df\u13b6\u13d3 \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2 (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 \u13a2\u13f3\u13df\u13b6\u13d3 \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2 (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u13a0\u13c2\u13b6\u13ba\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u13b7\u13c2\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u13a0\u13d5\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u13b6\u13b9\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u13a3\u13d7\u13a0 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u13d3\u13b6\u13c2\u13a8 \u13d5\u13cf\u13b9\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u13f2\u13c5\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u13a9\u13c2\u13ef\u13e9\u13c2\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u13a7\u13ca\u13ea\u13d7\u13a0\u13c4"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u13bb\u13a7\u13b9\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u13d1\u13ab\u13b9"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u13a1\u13b3\u13d7\u13dc \u13a9\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u13cd\u13c2\u13cd\u13a9\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u13cc\u13d7\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u13cf\u13c2\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13d7\u13dc \u13cc\u13bb"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u13bb\u13be\u13a7\u13c6\u13a4"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u13cc\u13c2\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u13cf\u13be\u13ad\u13b3"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u13cd\u13b6\u13e9\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u13cd\u13b6\u13eb\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u13cc\u13bc\u13ef\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u13e0\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u13a0\u13b3\u13c8-\u13a1\u13c2\u13d7\u13a9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u13a0\u13b5\u13c7\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u13d2\u13c8\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u13cd\u13e9\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u13a0\u13d5\u13b3 \u13d7\u13ce\u13af\u13af \u13a0\u13d5\u13b3 \u13f1\u13ac\u13c1\u13b8\u13af"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u13e7\u13a6\u13be\u13ee \u13d7\u13dc \u13d0\u13e0"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u13d1\u13c2\u13d3\u13c2\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u13cd\u13eb\u13d7\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u13cd\u13e9\u13af\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u13a4\u13e6\u13cd\u13d7 \u13d3\u13b6\u13c2\u13a8 \u13a0\u13d5\u13b3 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u13a2\u13c8\u13c8\u13a3"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u13a2\u13c6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u13d3\u13b6\u13be\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u13a0\u13f0\u13df \u13d3\u13b6\u13c2\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u13ed\u13d5\u13b5\u13ac \u13d7\u13dc \u13d3\u13b6\u13c2\u13a8\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u13d4\u13e5\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u13d4\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u13d8\u13a9\u13b5\u13c2\u13a0"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u13c8\u13a5\u13a9\u13c2\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u13aa\u13b6"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u13a8\u13be\u13d3 \u13a9\u13b5\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u13a0\u13c2\u13ac\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u13e7\u13e9\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u13d9\u13be\u13a6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u13e6\u13b3-\u13ec\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u13e3\u13c6\u13c2\u13cf \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u13a0\u13ac\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u13e6\u13be\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u13aa\u13bc\u13b5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u13d4\u13d4"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u13d4\u13af\u13d8\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u13f3\u13b3\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u13d7\u13a7\u13b8\u13ac \u13d7\u13dc \u13f3\u13b3\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u13e7\u13f4\u13e2 \u13d7\u13dc \u13f3\u13b3\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u13d3\u13cc\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u13ed\u13d5\u13b5\u13ac \u13d7\u13dc \u13f3\u13b3\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u13eb\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u13ef\u13c3\u13c9 \u13f1\u13ac\u13cd\u13db\u13ed"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u13f3\u13a7\u13b4\u13c2\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u13a4\u13b5\u13da"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u13a7\u13b3\u13bb\u13a7"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u13a4\u13cd\u13c7\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u13a7\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u13a1\u13b3\u13d7 \u13c1\u13db\u13b3\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u13eb\u13c2\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u13cd\u13a6\u13da\u13a9 \u13be\u13bf \u13d3\u13b6\u13c2\u13a8\u13cd\u13db \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u13eb\u13a1\u13d8\u13be\u13bb\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u13aa\u13f1\u13b3 \u13e5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u13d1\u13df\u13b6\u13d3 \u13a0\u13d3\u13c1\u13df\u13f4\u13ce\u13ac (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u13ec\u13b3\u13ca\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u13a9\u13e4"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u13e9\u13b7\u13be"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u13cf\u13b5\u13a0\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u13aa\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u13ec\u13b6\u13eb"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u13a0\u13df\u13b6\u13cd\u13d7 \u13bc\u13b6\u13aa \u13d4\u13b9\u13cf\u13d8"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u13aa\u13af\u13ca \u13a2\u13ac\u13e5\u13a9 \u13a0\u13df\u13b6\u13cd\u13d7 \u13a1\u13b3\u13c8"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u13ba\u13c2\u13c9\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u13a0\u13af\u13d7\u13a8 \u13d3\u13b6\u13c2\u13a8 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u13a4\u13e6\u13cd\u13d7 \u13d3\u13b6\u13c2\u13a8 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u13e0\u13cc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u13a0\u13c2\u13b6\u13bb \u13e7\u13cd\u13d7 \u13d7\u13aa\u13ea\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u13df\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u13bc\u13ad\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u13a7\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u13f1\u13d7\u13cd"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u13bc\u13cd\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u13f2\u13c4\u13c6"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u13cd\u13c6\u13c2\u13f1 \u13cd\u13c6\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u13e9\u13f1"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u13a7\u13b4\u13c2\u13e5\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u13d3\u13b6\u13c2\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u13c6\u13c9\u13bc\u13ec"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u13a0\u13cd\u13d3\u13c5\u13c5 \u13a0\u13f2\u13cd\u13d4\u13c5\u13a9 \u13c2\u13da\u13cd\u13db"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u13d1\u13b7"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u13a9\u13bb\u13ca\u13da"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u13e3\u13c6\u13c2\u13cf \u13a0\u13d5\u13b3 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u13a9\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u13a1\u13bb\u13ca"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u13a0\u13af\u13d7\u13a8 \u13d3\u13b6\u13c2\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u13a7\u13c2\u13a7\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u13a4\u13e6\u13cd\u13d7 \u13d3\u13b6\u13c2\u13a8"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u13c7\u13b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u13a9\u13bb\u13b7 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u13a2\u13b6\u13aa"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u13bd\u13c2\u13d3\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u13ac\u13b9\u13a9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u13e7\u13c8\u13cd\u13d7 \u13d7\u13a6\u13ec\u13c2\u13af\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u13a0\u13df\u13b6\u13db \u13c4\u13cd\u13d7\u13d3\u13c5\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u13a0\u13ab\u13cc"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u13a9\u13c7\u13d8\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"\u13a7\u13f3\u13a6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u13d4\u13bb\u13b5 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u13a7\u13b3\u13e3\u13f1-\u13c6\u13b5\u13a7\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u13a2\u13c2\u13ab\u13cf"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u13d3\u13b5"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u13a7\u13b4\u13b5\u13a0\u13c2"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u13a1\u13eb\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u13ab\u13b7\u13a9"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u13dd\u13bb\u13c6\u13b8"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u13c6\u13eb\u13a0"_s)
		})
	}));
	return data;
}

LocaleNames_chr::LocaleNames_chr() {
}

$Class* LocaleNames_chr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_chr, name, initialize, &_LocaleNames_chr_ClassInfo_, allocate$LocaleNames_chr);
	return class$;
}

$Class* LocaleNames_chr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun