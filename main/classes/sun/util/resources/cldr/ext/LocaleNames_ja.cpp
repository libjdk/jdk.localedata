#include <sun/util/resources/cldr/ext/LocaleNames_ja.h>

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

$MethodInfo _LocaleNames_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ja::*)()>(&LocaleNames_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ja",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ja_MethodInfo_
};

$Object* allocate$LocaleNames_ja($Class* clazz) {
	return $of($alloc(LocaleNames_ja));
}

void LocaleNames_ja::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ssy, u"\u30b5\u30db\u8a9e"_s);
	$var($String, metaValue_zbl, u"\u30d6\u30ea\u30b9\u30b7\u30f3\u30dc\u30eb"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u30b1\u30eb\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u30aa\u30ac\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u30df\u30e9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u8a18\u53f7\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\u30c1\u30e3\u30ef\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u30de\u30fc\u30eb\u30ef\u30fc\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"\u30e9\u30fc\u30f3\u30ca\u30fc\u30fb\u30bf\u30e0\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"\u30a8\u30df\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of(u"\u30e1\u30f3\u30bf\u30ef\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u30bf\u30b0\u30d0\u30f3\u30ef\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u7d75\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"\u30cb\u30f4\u30a1\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"\u30e1\u30b0\u30ec\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u30c1\u30e3\u30af\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u53e4\u4ee3\u30a8\u30b8\u30d7\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u30e9\u30fc\u30b8\u30e3\u30b9\u30bf\u30fc\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u30d1\u30b9\u30d1\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u30c6\u30e0\u30cd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u30c6\u30bd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u30e9\u30d1\u30cc\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u30c6\u30ec\u30fc\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u30a2\u30bb\u30f3\u30b7\u30e7\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u30e9\u30ed\u30c8\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u30c6\u30c8\u30a5\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u30a2\u30f3\u30c9\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u30a2\u30e9\u30d6\u9996\u9577\u56fd\u9023\u90a6"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u30d5\u30e9\u30de\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u30a2\u30d5\u30ac\u30cb\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u30a2\u30f3\u30c6\u30a3\u30b0\u30a2\u30fb\u30d0\u30fc\u30d6\u30fc\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"\u30ae\u30e9\u30ad\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u30a2\u30f3\u30ae\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\u30bf\u30a4\u30e0\u30be\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\u30c6\u30f3\u30b0\u30ef\u30fc\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u30a2\u30f3\u30b4\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u5357\u6975"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u7891\u6587\u30d1\u30eb\u30c6\u30a3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u7c73\u9818\u30b5\u30e2\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u30a2\u30eb\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u30a2\u30e1\u30ea\u30ab\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u30aa\u30fc\u30e9\u30f3\u30c9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"\u30df\u30a8\u30cd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"\u6771\u30a2\u30eb\u30e1\u30cb\u30a2\u6587\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u30fb\u30d8\u30eb\u30c4\u30a7\u30b4\u30d3\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u30d0\u30eb\u30d0\u30c9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u30bb\u30d6\u30a2\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u30d0\u30f3\u30b0\u30e9\u30c7\u30b7\u30e5"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u30af\u30e0\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u30d9\u30eb\u30ae\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u4e2d\u9ad8\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u30d6\u30eb\u30ad\u30ca\u30d5\u30a1\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u30d0\u30fc\u30ec\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u30d6\u30eb\u30f3\u30b8"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u30d9\u30ca\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u30b5\u30f3\u30fb\u30d0\u30eb\u30c6\u30eb\u30df\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u30d0\u30df\u30e5\u30fc\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u30af\u30c6\u30ca\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u30a8\u30eb\u30b8\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u30d6\u30eb\u30cd\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u9818\u30ab\u30ea\u30d6"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u30d0\u30cf\u30de"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u30bd\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u30d6\u30fc\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u30d6\u30fc\u30d9\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u30dc\u30c4\u30ef\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u30d9\u30ea\u30fc\u30ba"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u8996\u8a71\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u30da\u30eb\u30b7\u30a2\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u30d8\u30d6\u30e9\u30a4\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u30ab\u30ca\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u30b3\u30b3\u30b9(\u30ad\u30fc\u30ea\u30f3\u30b0)\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u30de\u30fc\u30b6\u30f3\u30c0\u30e9\u30fc\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u30b3\u30f3\u30b4\u6c11\u4e3b\u5171\u548c\u56fd(\u30ad\u30f3\u30b7\u30e3\u30b5)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u4e2d\u592e\u30a2\u30d5\u30ea\u30ab\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u30b3\u30f3\u30b4\u5171\u548c\u56fd(\u30d6\u30e9\u30b6\u30d3\u30eb)"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u30b9\u30a4\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u30b3\u30fc\u30c8\u30b8\u30dc\u30ef\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u30af\u30c3\u30af\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u30c1\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u30ab\u30a4\u30c6\u30a3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u30ab\u30e1\u30eb\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u4e2d\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u30b3\u30ed\u30f3\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u30af\u30ea\u30c3\u30d1\u30fc\u30c8\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u30b3\u30b9\u30bf\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u30ad\u30e5\u30fc\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u30ab\u30fc\u30dc\u30d9\u30eb\u30c7"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u30ad\u30e5\u30e9\u30bd\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u30af\u30ea\u30b9\u30de\u30b9\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u30ad\u30d7\u30ed\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"\u30d0\u30ea\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u30c1\u30a7\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u30a8\u30ab\u30b8\u30e5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of(u"\u30d1\u30a6\u30fb\u30c1\u30f3\u30fb\u30cf\u30a6\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"\u897f\u30d5\u30e9\u30de\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"\u53e4\u5178\u30f4\u30a9\u30e9\u30d4\u30e5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u30c9\u30a4\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u53e4\u9ad8\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u30a2\u30c1\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u30c1\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u30c7\u30a3\u30a8\u30b4\u30ac\u30eb\u30b7\u30a2\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"\u30b4\u30a2\u30fb\u30b3\u30f3\u30ab\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u30c7\u30fc\u30d0\u30ca\u30fc\u30ac\u30ea\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u30b8\u30d6\u30c1"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u30c7\u30f3\u30de\u30fc\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u30a2\u30c1\u30e7\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u30b4\u30fc\u30f3\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u30d6\u30e9\u30a4\u30e6\u70b9\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u30d6\u30e9\u30fc\u30d5\u30df\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u30c9\u30df\u30cb\u30ab\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2\u6570\u5b57(\u5c0f\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u30c9\u30df\u30cb\u30ab\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u30b4\u30ed\u30f3\u30bf\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u30b4\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"\u30de\u30a4\u30f3\u30d5\u30e9\u30f3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u30e1\u30a4\u30c6\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u30ba\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u30c6\u30a3\u30b0\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"\u30bf\u30fc\u30af\u30ea\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u30a2\u30eb\u30b8\u30a7\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u30d1\u30f3\u30ac\u30b7\u30ca\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"\u534a\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u30d1\u30d5\u30e9\u30f4\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u30bb\u30a6\u30bf\u30fb\u30e1\u30ea\u30ea\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u30c1\u30d6\u30c1\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u30d1\u30f3\u30d1\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u30a8\u30af\u30a2\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u30d1\u30d4\u30a2\u30e1\u30f3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u30a2\u30c0\u30f3\u30b0\u30e1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u30a8\u30b9\u30c8\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u30c6\u30a3\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u897f\u30b5\u30cf\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u30c1\u30e3\u30ac\u30bf\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u30d1\u30e9\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u30c1\u30e5\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u30c1\u30cc\u30fc\u30af\u6df7\u6210\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u30de\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u30c1\u30da\u30ef\u30a4\u30a2\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u30c1\u30e7\u30af\u30c8\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u30c1\u30a7\u30ed\u30ad\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u30a8\u30ea\u30c8\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u6b27\u5dde\u9023\u5408"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u30a8\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u897f\u66a6(\u30b0\u30ec\u30b4\u30ea\u30aa\u66a6)"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u30e6\u30fc\u30ed\u570f"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u30b7\u30e3\u30a4\u30a2\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u30b0\u30b8\u30e3\u30e9\u30fc\u30c8\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u30a4\u30f3\u30c0\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u30a2\u30c7\u30a3\u30b2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"\u30c1\u30e5\u30cb\u30b8\u30a2\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u30d5\u30a9\u30fc\u30af\u30e9\u30f3\u30c9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u30df\u30af\u30ed\u30cd\u30b7\u30a2\u9023\u90a6"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"\u30ed\u30b1\u30fc\u30eb\u306e\u30d0\u30ea\u30a2\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u30d5\u30a7\u30ed\u30fc\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u30bf\u30df\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"\u30af\u30da\u30ec\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"\u30d4\u30ab\u30eb\u30c7\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"\u30c8\u30b1\u30e9\u30a6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u30b0\u30ec\u30dc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"\u30c0\u30a4\u30f3\u30c1\u30c3\u30c4\u30a1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u30a4\u30f3\u30c9\u56fd\u5b9a\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"\u30ed\u30de\u30fc\u30cb\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u53e4\u4ee3\u30ae\u30ea\u30b7\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u30ac\u30dc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"\u30c4\u30a1\u30d5\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u30f4\u30a9\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u30a4\u30ae\u30ea\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u30ca\u30a4\u30b8\u30a7\u30ea\u30a2\u30fb\u30d4\u30b8\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u30b0\u30ec\u30ca\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u30b8\u30e7\u30fc\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u4ecf\u9818\u30ae\u30a2\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u30ac\u30fc\u30f3\u30b8\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u30ac\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u30bf\u30a4\u30fb\u30ec\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u30b8\u30d6\u30e9\u30eb\u30bf\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u30a2\u30d5\u30ea\u30d2\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u30b0\u30ea\u30fc\u30f3\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u4e2d\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u30ac\u30f3\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u30ae\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u30b0\u30a2\u30c9\u30eb\u30fc\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u8d64\u9053\u30ae\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u30b5\u30a6\u30b9\u30b8\u30e7\u30fc\u30b8\u30a2\u30fb\u30b5\u30a6\u30b9\u30b5\u30f3\u30c9\u30a6\u30a3\u30c3\u30c1\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u30b0\u30a2\u30c6\u30de\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u30b0\u30a2\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"\u30da\u30f3\u30b7\u30eb\u30d9\u30cb\u30a2\u30fb\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u30ae\u30cb\u30a2\u30d3\u30b5\u30a6"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u30c8\u30ea\u30f3\u30ae\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u30af\u30ea\u30f3\u30b4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u65b0\u30bf\u30a4\u30fb\u30eb\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u30ac\u30a4\u30a2\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u4e2d\u592e\u30af\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u8a00\u8a9e\u7684\u5185\u5bb9\u306a\u3057"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"\u5973\u771f\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"\u30bf\u30ea\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"\u30e1\u30ce\u30ca\u30a4\u30c8\u4f4e\u5730\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u4e2d\u83ef\u4eba\u6c11\u5171\u548c\u56fd\u9999\u6e2f\u7279\u5225\u884c\u653f\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"\u30f4\u30a1\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u30cf\u30fc\u30c9\u5cf6\u30fb\u30de\u30af\u30c9\u30ca\u30eb\u30c9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u30db\u30f3\u30b8\u30e5\u30e9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u30a2\u30b2\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u30b9\u30a4\u30b9\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u66a6(\u30a6\u30f3\u30e0\u30fb\u30a2\u30eb\u30af\u30e9\u30fc)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u30cf\u30a4\u30c1"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u30cf\u30f3\u30ac\u30ea\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"\u30ea\u30fc\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\u30bf\u30de\u30b7\u30a7\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u30ab\u30ca\u30ea\u30a2\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"\u95a9\u5357\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u53e4\u4ee3\u30da\u30eb\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"\u30ab\u30e4\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u30ca\u30dd\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"\u30f3\u30b8\u30e5\u30ab\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u30ca\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"\u30bd\u30e9\u30fb\u30bd\u30f3\u30da\u30f3\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u30b6\u30b6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"\u897f\u590f\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u30a4\u30b9\u30e9\u30a8\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"\u30ca\u30d0\u30c6\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u30de\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u30a4\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u8a00\u8a9e\u6587\u5b57\u306e\u4e26\u3079\u66ff\u3048\u898f\u5247"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u82f1\u9818\u30a4\u30f3\u30c9\u6d0b\u5730\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u30a4\u30e9\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u30a4\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u6570\u5b66\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u30bf\u30a4\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"\u30f4\u30a9\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"\u30ef\u30e6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"\u30b3\u30f3\u30d4\u30e5\u30fc\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u30d9\u30f3\u30ac\u30eb\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"\u30d7\u30d5\u30a1\u30eb\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u30b8\u30e3\u30fc\u30b8\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u30b8\u30e3\u30de\u30a4\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u30d9\u30f3\u30ac\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u30e8\u30eb\u30c0\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of(u"\u30d5\u30e9\u30d5\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u65e5\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"\u5f8c\u671f\u4e2d\u4e16\u30d5\u30e9\u30f3\u30b9\u8a9e(\u301c1606)"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u30a2\u30a4\u30cc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"\u30e1\u30f3\u30c7\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u30b0\u30b7\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u30c8\u30f3\u30ac\u8a9e(\u30cb\u30a2\u30b5)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u30ab\u30f3\u30ca\u30c0\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u30ab\u30e4\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"\u68b5\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u6a19\u6e96\u30c9\u30a4\u30c4\u8a9e (\u30b9\u30a4\u30b9)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"\u97f3\u58f0\u9806\u306b\u3088\u308b\u4e26\u3079\u66ff\u3048"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"\u30a4\u30f3\u30b0\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u4ecf\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u30b1\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u30e9\u30c6\u30f3\u30a2\u30e1\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u30ad\u30eb\u30ae\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u30ab\u30f3\u30dc\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u30ad\u30ea\u30d0\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u30b3\u30e2\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u30bb\u30f3\u30c8\u30af\u30ea\u30b9\u30c8\u30d5\u30a1\u30fc\u30fb\u30cd\u30fc\u30f4\u30a3\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u30ab\u30f3\u30ca\u30c0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u57fa\u5e95\u6587\u5b57\u306e\u7a2e\u5225\u3092\u7d99\u627f\u3059\u308b\u7d50\u5408\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u5317\u671d\u9bae"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u97d3\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u30dd\u30e9\u30fc\u30c9\u97f3\u58f0\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u30af\u30a6\u30a7\u30fc\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u30c8\u30af\u30fb\u30d4\u30b7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u30b1\u30a4\u30de\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u30ab\u30b6\u30d5\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u30ad\u30ea\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u30e9\u30aa\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u30ec\u30d0\u30ce\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u30bb\u30f3\u30c8\u30eb\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u30d5\u30a7\u30cb\u30ad\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u53e4\u4ee3\u6559\u4f1a\u30b9\u30e9\u30d6\u8a9e\u30ad\u30ea\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u30b0\u30a6\u30a3\u30c3\u30c1\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u4f4e\u5730\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u30ea\u30d2\u30c6\u30f3\u30b7\u30e5\u30bf\u30a4\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u30b9\u30ea\u30e9\u30f3\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u30a2\u30c3\u30ab\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u30b3\u30d7\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u30ea\u30d9\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"\u4e2d\u592e\u30a2\u30e9\u30b9\u30ab\u30fb\u30e6\u30d4\u30c3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u30ec\u30bd\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\u66f8\u7269\u7528\u30d1\u30d5\u30e9\u30f4\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u30ab\u30bf\u30ab\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"\u30bd\u30e9\u30f3\u30b0\u30fb\u30bd\u30f3\u30da\u30f3\u30b0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u30ea\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u30e9\u30c7\u30a3\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u30f4\u30f3\u30b8\u30e7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"\u30a2\u30e9\u30d0\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"\u30e9\u30a6\u30ad\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u30e9\u30d5\u30f3\u30c0\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"\u30de\u30cf\u30fc\u30b8\u30e3\u30cb\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u30e9\u30f3\u30ae\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u30bf\u30fc\u30ca\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u30e2\u30ed\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u30e2\u30ca\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u30e2\u30eb\u30c9\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"\u5973\u66f8"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u30e2\u30f3\u30c6\u30cd\u30b0\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u30b5\u30f3\u30fb\u30de\u30eb\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u30e9\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u30de\u30fc\u30b7\u30e3\u30eb\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u30a2\u30ec\u30a6\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u30bf\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"\u30f4\u30a1\u30a4\u6587\u5b57\u306e\u8a18\u6570\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u5317\u30de\u30b1\u30c9\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u30de\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc (\u30d3\u30eb\u30de)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u30cd\u30ef\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u4e2d\u83ef\u4eba\u6c11\u5171\u548c\u56fd\u30de\u30ab\u30aa\u7279\u5225\u884c\u653f\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"\u30b2\u30b0\u30fb\u30a2\u30eb\u30d0\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u5317\u30de\u30ea\u30a2\u30ca\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u30de\u30eb\u30c6\u30a3\u30cb\u30fc\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u30e2\u30fc\u30ea\u30bf\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u30e2\u30f3\u30c8\u30bb\u30e9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u30de\u30eb\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"\u30ab\u30d4\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u30e2\u30fc\u30ea\u30b7\u30e3\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u5357\u30a2\u30eb\u30bf\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u30e2\u30eb\u30c7\u30a3\u30d6"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u30de\u30e9\u30a6\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u30e1\u30ad\u30b7\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u548c\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u30de\u30ec\u30fc\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u30e2\u30b6\u30f3\u30d3\u30fc\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\u7891\u6587\u30d1\u30d5\u30e9\u30f4\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u30ca\u30df\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u30b5\u30d6\u30b5\u30cf\u30e9\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u30e6\u30c0\u30e4\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u8f9e\u66f8\u9806"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u30cb\u30e5\u30fc\u30ab\u30ec\u30c9\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"\u30a6\u30a7\u30fc\u30c9\u5f0f\u30ed\u30fc\u30de\u5b57\u8868\u8a18\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"\u30c8\u30a5\u30ed\u30e8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"\u6539\u8a02\u7d71\u4e00\u30b3\u30fc\u30f3\u30a6\u30a9\u30fc\u30eb\u8a9e\u6b63\u66f8\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u30cb\u30b8\u30a7\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u30ce\u30fc\u30d5\u30a9\u30fc\u30af\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u30ca\u30a4\u30b8\u30a7\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u30bf\u30ed\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u8a69\u7de8\u7528\u30d1\u30d5\u30e9\u30f4\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u30cb\u30ab\u30e9\u30b0\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\u30d1\u30cf\u30a6\u30fb\u30d5\u30e2\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u30cd\u30d1\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u30ca\u30a6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"\u30c4\u30a1\u30b3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u30cb\u30a6\u30a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\u30d5\u30a7\u30cb\u30ad\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u30ed\u30f3\u30dc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u30c1\u30e0\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u30cb\u30e5\u30fc\u30b8\u30fc\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"\u30e1\u30ed\u30a8\u6587\u5b57\u8349\u66f8\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u30ed\u30de\u30fc\u30cb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u30e1\u30ed\u30a8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u30af\u30ea\u30df\u30a2\u30fb\u30bf\u30bf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u53e4\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u30aa\u30de\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u30a2\u30f3\u30ae\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u30bb\u30fc\u30b7\u30a7\u30eb\u30fb\u30af\u30ec\u30aa\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"\u53e4\u4ee3\u30da\u30eb\u30b7\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u30d1\u30ca\u30de"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u6b74(\u5b9a\u5468\u671f\u3001\u516c\u6c11\u7d00\u5143)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u30ab\u30b7\u30e5\u30fc\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u30a4\u30ae\u30ea\u30b9\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u30da\u30eb\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"\u30e0\u30b9\u30ea\u30e0\u30fb\u30bf\u30bf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u4ecf\u9818\u30dd\u30ea\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u30d1\u30d7\u30a2\u30cb\u30e5\u30fc\u30ae\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u30d5\u30a3\u30ea\u30d4\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u30d1\u30ad\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u30a8\u30a6\u30a9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u30b5\u30f3\u30d4\u30a8\u30fc\u30eb\u5cf6\u30fb\u30df\u30af\u30ed\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u30d4\u30c8\u30b1\u30a2\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u30d7\u30a8\u30eb\u30c8\u30ea\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u30d1\u30ec\u30b9\u30c1\u30ca\u81ea\u6cbb\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u30d0\u30ea\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u30d1\u30e9\u30aa"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u30cb\u30a2\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3\u6570\u5b57(\u5c0f\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u30d1\u30e9\u30b0\u30a2\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u30c8\u30a5\u30f3\u30d6\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u30d8\u30d6\u30e9\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u30ab\u30bf\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u30b9\u30b3\u30c3\u30c8\u30e9\u30f3\u30c9\u6a19\u6e96\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"\u30b8\u30e3\u30de\u30a4\u30ab\u30fb\u30af\u30ec\u30aa\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"\u30d4\u30a8\u30e2\u30f3\u30c6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u30cb\u30a6\u30fc\u30a8\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u30aa\u30bb\u30a2\u30cb\u30a2\u5468\u8fba\u5730\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"\u30a8\u30b9\u30c8\u30ec\u30de\u30c9\u30a5\u30fc\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u30ec\u30ba\u30ae\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"\u30a6\u30e9\u30eb\u97f3\u58f0\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"\u30bf\u30fc\u30af\u30ea\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u30c4\u30d0\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u30bf\u30a4\u30fb\u30f4\u30a7\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u4e16\u754c"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"\u30a2\u30aa\u30fb\u30ca\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u5317\u30a2\u30e1\u30ea\u30ab\u5927\u9678"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u30ec\u30e6\u30cb\u30aa\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u5357\u30a2\u30e1\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"\u30ea\u30f3\u30b0\u30a2\u30fb\u30d5\u30e9\u30f3\u30ab\u30fb\u30ce\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u30ed\u30b8\u30d0\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"\u30dd\u30f3\u30c8\u30b9\u30fb\u30ae\u30ea\u30b7\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u30eb\u30b8\u30e3\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u30aa\u30bb\u30a2\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of(u"\u30b9\u30eb\u30b7\u30eb\u30f4\u30a1\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"\u30e0\u30ed\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u30ed\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u30eb\u30ef\u30f3\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"\u65b0\u30bf\u30a4\u30fb\u30eb\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"\u30e1\u30c6\u30eb\u30c1\u30c3\u30c4\u30a1"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\u30de\u30cb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"\u30a6\u30ac\u30ea\u30c3\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u30ab\u30ed\u30fc\u30b7\u30e5\u30c6\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u30b5\u30a6\u30b8\u30a2\u30e9\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u30dd\u30f3\u30da\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u30de\u30f3\u30c0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u30bd\u30ed\u30e2\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u30bf\u30b5\u30ef\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u897f\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u30bb\u30fc\u30b7\u30a7\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u30b9\u30fc\u30c0\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u4e2d\u592e\u30a2\u30e1\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u30b9\u30a6\u30a7\u30fc\u30c7\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u6771\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u30a2\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"\u30ed\u30de\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u5317\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u30b7\u30f3\u30ac\u30dd\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u30bb\u30f3\u30c8\u30d8\u30ec\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u7981\u5247\u51e6\u7406(\u5f37)"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u4e2d\u90e8\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u5357\u90e8\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u30b9\u30d0\u30fc\u30eb\u30d0\u30eb\u8af8\u5cf6\u30fb\u30e4\u30f3\u30de\u30a4\u30a8\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u30a2\u30e1\u30ea\u30ab\u5927\u9678"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u30b9\u30ed\u30d0\u30ad\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"\u30d0\u30e0\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"\u30a6\u30a9\u30ec\u30a2\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u30b7\u30a8\u30e9\u30ec\u30aa\u30cd"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u30b5\u30f3\u30de\u30ea\u30ce"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u30bb\u30cd\u30ac\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u30bd\u30de\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u30de\u30d7\u30c1\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u30a2\u30e9\u30d1\u30db\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u4f1d\u7d71\u7684\u30bf\u30df\u30eb\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"\u30a2\u30e9\u30aa\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u5357\u30b9\u30fc\u30c0\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u30b5\u30f3\u30c8\u30e1\u30fb\u30d7\u30ea\u30f3\u30b7\u30da"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"\u30a2\u30eb\u30b8\u30a7\u30ea\u30a2\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u30a8\u30eb\u30b5\u30eb\u30d0\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u30ca\u30b8\u30e5\u30c9\u5730\u65b9\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u30b7\u30f3\u30c8\u30fb\u30de\u30fc\u30eb\u30c6\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u30b7\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u30e4\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u30a8\u30b9\u30ef\u30c6\u30a3\u30cb"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u30a2\u30e9\u30ef\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"\u30e2\u30ed\u30c3\u30b3\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u30e4\u30c3\u30d7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"\u30ed\u30c4\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u30c8\u30ea\u30b9\u30bf\u30f3\u30fb\u30c0\u30fb\u30af\u30fc\u30cb\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u30a2\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u7c73\u6163\u7fd2\u5358\u4f4d"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u5317\u30a2\u30e1\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u30bf\u30fc\u30af\u30b9\u30fb\u30ab\u30a4\u30b3\u30b9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u30e4\u30f3\u30d9\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u30c1\u30e3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u4ecf\u9818\u6975\u5357\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"\u30a2\u30e1\u30ea\u30ab\u624b\u8a71"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u30c8\u30fc\u30b4"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u30bf\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u30bf\u30b8\u30ad\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u30ab\u30ea\u30d6"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u30c8\u30b1\u30e9\u30a6"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u6771\u30c6\u30a3\u30e2\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u30a4\u30a8\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"\u30cf\u30f3\u30b0\u30eb\u8a9e\u982d\u5b50\u97f3\u306b\u3088\u308b\u4e26\u3079\u66ff\u3048"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30cb\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"\u30d6\u30fc\u30f3\u30c8\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u30c1\u30e5\u30cb\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u30c8\u30f3\u30ac"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"\u73fe\u4ee3\u30f4\u30a9\u30e9\u30d4\u30e5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u30c8\u30eb\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u30c8\u30ea\u30cb\u30c0\u30fc\u30c9\u30fb\u30c8\u30d0\u30b4"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u30c4\u30d0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u53f0\u6e7e"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u30a2\u30b9\u30c8\u30a5\u30ea\u30a2\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"\u30eb\u30b7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"\u30ed\u30f4\u30a3\u30a2\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u30aa\u30eb\u30db\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u30bf\u30f3\u30b6\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u30af\u30ef\u30b7\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u4e0d\u660e\u306a\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"\u30af\u30c0\u30ef\u30c7\u30a3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"\u30ea\u30b0\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u30a2\u30eb\u30fc\u30de\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u6771\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u30c8\u30a5\u30f4\u30a1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u30b3\u30f3\u30b4\u30fb\u30b9\u30ef\u30d2\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u5357\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u30cf\u30a4\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u6771\u5357\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u30a6\u30ac\u30f3\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"\u5ba2\u5bb6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u30d4\u30f3\u30a4\u30f3\u9806"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u5357\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u30b7\u30f3\u30cf\u30e9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u5408\u8846\u56fd\u9818\u6709\u5c0f\u96e2\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"\u30ea\u30f4\u30a9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u56fd\u969b\u9023\u5408"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u30a2\u30e1\u30ea\u30ab\u5408\u8846\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u30cf\u30ef\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"\u6a19\u6e96\u30d9\u30e9\u30eb\u30fc\u30b7\u8a9e (1959)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u7c21\u4f53\u5b57\u4e2d\u56fd\u8a9e\u9806(GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u30a6\u30eb\u30b0\u30a2\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u30d7\u30ed\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u30a6\u30ba\u30d9\u30ad\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u4e2d\u592e\u30a2\u30c8\u30e9\u30b9\u30fb\u30bf\u30de\u30b8\u30af\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u753b\u6570\u9806"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u30f3\u30b8\u30a8\u30e0\u30d6\u30fc\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u30d0\u30c1\u30ab\u30f3\u5e02\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u53e4\u671f\u30d7\u30ed\u30d0\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u30bb\u30f3\u30c8\u30d3\u30f3\u30bb\u30f3\u30c8\u53ca\u3073\u30b0\u30ec\u30ca\u30c7\u30a3\u30fc\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u30d9\u30cd\u30ba\u30a8\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u82f1\u9818\u30f4\u30a1\u30fc\u30b8\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u7c73\u9818\u30f4\u30a1\u30fc\u30b8\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u30d0\u30cc\u30a2\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u30ce\u30ac\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u30eb\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u53e4\u30ce\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30e9\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"\u897f\u30a2\u30eb\u30e1\u30cb\u30a2\u6587\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u30e1\u30e9\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u30a6\u30a9\u30ea\u30b9\u30fb\u30d5\u30c4\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u30c8\u30e9\u30c7\u30a3\u30c3\u30b7\u30e7\u30ca\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u30df\u30af\u30ed\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u30f3\u30b4\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u30e9\u30b3\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of(u"\u30ce\u30f4\u30a3\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"\u8ca1\u52d9\u7528\u6f22\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of(u"\u30b3\u30bf\u30f4\u30a1"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"\u30d8\u30dc\u30f3\u5f0f\u30ed\u30fc\u30de\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"\u4ee5\u524d\u306e\u9806\u5e8f\uff08\u4e92\u63db\u6027\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u30f4\u30a1\u30ea\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u30b5\u30e2\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"\u30d0\u30b5\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"\u30de\u30cb\u30d7\u30ea\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u30a6\u30a9\u30e9\u30a4\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u30ef\u30b7\u30e7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u7591\u4f3c\u30a2\u30af\u30bb\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u30ef\u30e9\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u7591\u4f3c BIDI"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u30a2\u30ef\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u30dd\u30ea\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"\u6a19\u6e96\u30b3\u30fc\u30f3\u30a6\u30a9\u30fc\u30eb\u8a9e\u6b63\u66f8\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u30b3\u30bd\u30dc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"\u30d6\u30e9\u30fc\u30d5\u30df\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\u30b0\u30b8\u30e3\u30e9\u30fc\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u975e\u8868\u8a18"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u30aa\u30eb\u30c1\u30ad\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u30ef\u30eb\u30d4\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u30d0\u30bf\u30af\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u30a4\u30a8\u30e1\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u30f3\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u6a19\u6e96\u4e26\u3079\u66ff\u3048\u9806\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"\u30ed\u30f3\u30d0\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u30d5\u30a1\u30f3\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"\u30ec\u30b7\u30a2\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"\u30b9\u30c8\u30b7\u30eb\u30f4\u30a1\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u30d5\u30a1\u30f3\u30c6\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u624b\u8a71\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u30de\u30e8\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"\u30c1\u30e3\u30e0\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u5357\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"\u30b9\u30f3\u30c0\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u7981\u5247\u51e6\u7406(\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u30c7\u30fc\u30d0\u30ca\u30fc\u30ac\u30ea\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u30b8\u30e7\u30fc\u30b8\u30a2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"\u6ce8\u97f3\u9806"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u3072\u3089\u304c\u306a"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u30b6\u30f3\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"\u30d4\u30f3\u97f3(\u30ed\u30fc\u30de\u5b57\u8868\u8a18\u6cd5)"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u30b8\u30f3\u30d0\u30d6\u30a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u4e0d\u660e\u306a\u5730\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u30eb\u30fc\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u30e1\u30fc\u30c8\u30eb\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u30e2\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u5317\u90e8\u30bd\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u30c6\u30eb\u30b0\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"\u30eb\u30a4\u30b8\u30a2\u30ca\u30fb\u30af\u30ec\u30aa\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u30ed\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"\u30ca\u30b7\u65cf\u30b2\u30d0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u30de\u30c1\u30e3\u30e1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc\u30fb\u30d2\u30f3\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u7c21\u4f53\u5927\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u30d2\u30ea\u30ac\u30a4\u30ce\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u30da\u30eb\u30b7\u30a2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u30cc\u30a8\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u30c0\u30b3\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u5168\u89d2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u30d2\u30c3\u30bf\u30a4\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u30c0\u30eb\u30b0\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u30bf\u30a4\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u30de\u30e4\u8c61\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u5317\u30ed\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u30b3\u30d7\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u53e4\u5178\u30cd\u30ef\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u30a6\u30c9\u30e0\u30eb\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u30af\u30e1\u30fc\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u66a6(\u30b5\u30a6\u30b8\u30a2\u30e9\u30d3\u30a2\u3001\u6708\u89b3\u6e2c)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u30ea\u30f3\u30d6\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u30b5\u30f3\u30c0\u30a6\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u30ed\u30fc\u30de\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u30b5\u30cf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"\u30b7\u30e3\u30fc\u30e9\u30c0\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"\u30e9\u30c8\u30ac\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u30b5\u30de\u30ea\u30a2\u30fb\u30a2\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"\u30ab\u30d5\u30ab\u30b9\u30fb\u30a2\u30eb\u30d0\u30cb\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"\u30ea\u30d0\u30d7\u30fc\u30eb\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u30b5\u30f3\u30d6\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u30b5\u30b5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u30b5\u30f3\u30bf\u30fc\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u30c6\u30a3\u30d5\u30ca\u30b0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u30e6\u30c0\u30e4\u30fb\u30da\u30eb\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"\u30b5\u30a6\u30e9\u30fc\u30b7\u30e5\u30c8\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"\u72ec\u81ea\u306e\u8a18\u6570\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u30f3\u30ac\u30e0\u30d0\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u30b0\u30eb\u30e0\u30ad\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"\u30a2\u30ed\u30b3\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u30eb\u30d0\u30fb\u30eb\u30eb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"\u30d3\u30b9\u30ab\u30e4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u5168\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u30b5\u30f3\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u30eb\u30a4\u30bb\u30fc\u30cb\u30e7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u30cb\u30e3\u30f3\u30b3\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u30cb\u30e3\u30e0\u30a6\u30a7\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u30eb\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u30cb\u30e7\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u30eb\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u30d5\u30a3\u30ea\u30d4\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u30d5\u30e2\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u30c7\u30e9\u30a6\u30a7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u30df\u30be\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u30d0\u30eb\u30fc\u30c1\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u30b9\u30ec\u30a4\u30d3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u30d0\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"\u30a6\u30ac\u30ea\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"\u30c8\u30eb\u30cd\u30c0\u30fc\u30eb\u30fb\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u30eb\u30d2\u30e4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"\u30d0\u30a4\u30a8\u30eb\u30f3\u30fb\u30aa\u30fc\u30b9\u30c8\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u30d0\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"\u30d0\u30e0\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u30e6\u30c0\u30e4\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3\u8a9e (\u30a4\u30d9\u30ea\u30a2\u534a\u5cf6)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u30f3\u30bc\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u30b9\u30b3\u30c3\u30c8\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u30b7\u30c1\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u30a2\u30d5\u30a1\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u30a2\u30d6\u30cf\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"\u30ca\u30b9\u30bf\u30a2\u30ea\u30fc\u30af\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"\u30c8\u30d0\u30fb\u30d0\u30bf\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u30a2\u30f4\u30a7\u30b9\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u30a2\u30d5\u30ea\u30ab\u30fc\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u30a2\u30ab\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"\u30c1\u30e3\u30af\u30de\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"\u30b4\u30fc\u30de\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u30a2\u30e0\u30cf\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u30a2\u30e9\u30b4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u30a2\u30e9\u30d3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"\u30b9\u30c8\u30eb\u30f4\u30a3\u30c3\u30c4\u30a1/\u30bd\u30eb\u30d3\u30c4\u30a1\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u65e5\u672c\u8a9e\u306e\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u4eee\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u30a2\u30c3\u30b5\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"\u30b5\u30c3\u30b5\u30ea\u30fb\u30b5\u30eb\u30c7\u30fc\u30cb\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u7dda\u6587\u5b57A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u30a2\u30f4\u30a1\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u7dda\u6587\u5b57B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\u5357\u90e8\u30af\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u30a2\u30a4\u30de\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"\u30db\u30b8\u30e3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"\u30aa\u30bc\u30a2\u30c3\u30b3/\u30aa\u30bd\u30e4\u30cd\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u30d0\u30b7\u30ad\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u90e8\u9996\u9806"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u30d3\u30b9\u30e9\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"\u30b8\u30e3\u30ef\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u30d0\u30f3\u30d0\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u30d9\u30f3\u30ac\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u30c1\u30d9\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u30c9\u30b0\u30ea\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u30d6\u30eb\u30c8\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"\u30bb\u30cd\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of(u"\u30bb\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u30e9\u30aa\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u30bb\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\u30f3\u30b3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u30bb\u30ea\u30af\u30d7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u30ab\u30bf\u30ed\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u30b3\u30a4\u30e9\u30dc\u30ed\u30fb\u30bb\u30f3\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u30c1\u30a7\u30c1\u30a7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u30c1\u30e3\u30e2\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\u6539\u8a02\u7248"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u30b3\u30eb\u30b7\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u30aa\u30c7\u30a3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u30af\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u30c1\u30a7\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u6559\u4f1a\u30b9\u30e9\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"\u30cb\u30a7\u30a8\u30f3\u30ac\u30c8\u30a5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u30c1\u30e5\u30f4\u30a1\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u30a6\u30a7\u30fc\u30eb\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u30c7\u30f3\u30de\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb\u8a9e (\u30a4\u30d9\u30ea\u30a2\u534a\u5cf6)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u6a19\u6e96\u901a\u8ca8\u30d5\u30a9\u30fc\u30de\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u30d9\u30b8\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u30c7\u30a3\u30f3\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"\u30e6\u30c8\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u30d6\u30ae\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u30d9\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u53e4\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u30c7\u30a3\u30d9\u30d2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"\u30d9\u30bf\u30a6\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u30be\u30f3\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u30d9\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u4e2d\u56fd\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"\u6f22\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"\u30d5\u30ec\u30a4\u30b6\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u30b6\u30eb\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"\u30b5\u30e2\u30ae\u30c6\u30a3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u30a8\u30a6\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"\u30d0\u30d5\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u7981\u5247\u51e6\u7406(\u6a19\u6e96)"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u30e2\u30eb\u30c0\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u30a8\u30b9\u30da\u30e9\u30f3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"\u30d0\u30c0\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"\u30e9\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u7e41\u4f53\u5b57\u4e2d\u56fd\u8a9e\u9806(Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u30a8\u30b9\u30c8\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u6f22\u8a9e\u6ce8\u97f3\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u30d0\u30b9\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u30d6\u30d2\u30c3\u30c9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u30cf\u30f3\u30b0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u30b5\u30de\u30ea\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u30bf\u30b7\u30eb\u30cf\u30a4\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u9ad8\u5730\u30bd\u30eb\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u6f22\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"\u30a2\u30eb\u30b9\u30bf\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u30b7\u30e3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\u30cf\u30cc\u30ce\u30aa\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u30da\u30eb\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u7c21\u4f53\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u7b97\u7528\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u7e41\u4f53\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u30d5\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u30c1\u30e3\u30c9\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"\u6e58\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u30d5\u30a9\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u897f\u30d0\u30ed\u30fc\u30c1\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u5e83\u6771\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u30d5\u30a7\u30ed\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u30e0\u30d6\u30f3\u30c9\u30a5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u30b7\u30c0\u30e2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u897f\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u30b9\u30b3\u30c3\u30c8\u30e9\u30f3\u30c9\u30fb\u30b2\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u30ac\u30ea\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u30b0\u30a2\u30e9\u30cb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u30dc\u30fc\u30b8\u30e5\u30d7\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u8a00\u8a9e\u4e0d\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2\u5275\u4e16\u7d00\u5143\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u30b0\u30b8\u30e3\u30e9\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u6b74(\u5b9a\u5468\u671f\u3001\u5929\u6587\u7d00\u5143)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u30de\u30f3\u5cf6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"\u30aa\u30b9\u30de\u30cb\u30a2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u30cf\u30a6\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u30d8\u30d6\u30e9\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u30d2\u30f3\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u30d5\u30d1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u30d3\u30b3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u30d3\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u30d2\u30ea\u30e2\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u30cf\u30a4\u30c1\u30fb\u30af\u30ec\u30aa\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u30cf\u30f3\u30ac\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u30d8\u30ec\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"\u30b1\u30a4\u30b8\u30e3\u30f3\u30fb\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"\u56fd\u969b\u97f3\u58f0\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u30a4\u30f3\u30bf\u30fc\u30ea\u30f3\u30b0\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u30c1\u30d9\u30c3\u30c8\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u30a4\u30f3\u30bf\u30fc\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u30a4\u30dc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u56db\u5ddd\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u4e2d\u671f\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u30a4\u30cc\u30d4\u30a2\u30c3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u53e4\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"\u30a2\u30eb\u30d4\u30bf\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u30a4\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u6771\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"\u30d0\u30f3\u30b8\u30e3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u5317\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u30a4\u30cc\u30af\u30c6\u30a3\u30c8\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"\u4f4e\u30b7\u30ec\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"\u30d8\u30b0\u30ce\u30b7\u30e5\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u65e5\u672c\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u30de\u30e9\u30e4\u30fc\u30e9\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"\u53e4\u4ee3\u5357\u30a2\u30e9\u30d3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u30b5\u30e9\u30c6\u30a3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u30c9\u30fc\u30b0\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"\u30b9\u30e9\u30e4\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"\u30ec\u30d7\u30c1\u30e3\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"\u30b3\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u5357\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u30b8\u30e3\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u30b7\u30e7\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"\u30d0\u30a6\u30c3\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u30de\u30c9\u30a5\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u30eb\u30ec\u30fb\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u30de\u30ac\u30d2\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u30de\u30d5\u30a1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u30de\u30a4\u30c6\u30a3\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u30a4\u30ca\u30ea\u30fb\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u30b8\u30e7\u30fc\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u30b7\u30af\u30b7\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u30de\u30ab\u30c3\u30b5\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"\u5449\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u30b9\u30b3\u30eb\u30c8\u30fb\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u30de\u30f3\u30c7\u30a3\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u30b3\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\u30b4\u30fc\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u30ad\u30af\u30e6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u30de\u30b5\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u30af\u30ef\u30cb\u30e3\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u30ab\u30b6\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u30b0\u30ea\u30fc\u30f3\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u30af\u30e1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u30ab\u30f3\u30ca\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u97d3\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u30ab\u30cc\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u30ab\u30b7\u30df\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u30ad\u30a2\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u30ec\u30d7\u30c1\u30e3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u30a2\u30f4\u30a7\u30b9\u30bf\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u30af\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u30b3\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u30b3\u30fc\u30f3\u30a6\u30a9\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u30ad\u30eb\u30ae\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u30bd\u30cb\u30f3\u30b1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u30e9\u30c6\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u30de\u30e9\u30e4\u30fc\u30e9\u30e0\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u30ac\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u30ed\u30f3\u30b4\u30ed\u30f3\u30b4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u30ea\u30f3\u30d6\u30eb\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u30c1\u30d9\u30c3\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u30ea\u30f3\u30ac\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u30d5\u30ea\u30a6\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u30e9\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u30e4\u30fc\u30c9\u30fb\u30dd\u30f3\u30c9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"\u30e9\u30fc\u30f3\u30ca\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u30eb\u30d0\u30fb\u30ab\u30bf\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u30bd\u30b0\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}\u3001{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u30de\u30fc\u30b7\u30e3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u30e6\u30cb\u30b3\u30fc\u30c9\u7167\u5408\u9806"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u30de\u30aa\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u30de\u30b1\u30c9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u30de\u30e9\u30e4\u30fc\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u30de\u30e9\u30fc\u30c6\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u30de\u30ec\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u30de\u30eb\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u30b5\u30a6\u30e9\u30fc\u30b7\u30e5\u30c8\u30e9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u30e2\u30af\u30b7\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"\u30de\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u4f4e\u5730\u30bd\u30eb\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u5e1d\u56fd\u30a2\u30e9\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u30ca\u30a6\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u6c4e\u7528\u691c\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e(\u30d6\u30fc\u30af\u30e2\u30fc\u30eb)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u5317\u30f3\u30c7\u30d9\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u30cd\u30d1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u30f3\u30c9\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u30de\u30f3\u30c0\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e(\u30cb\u30fc\u30ce\u30b7\u30e5\u30af)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u5357\u30f3\u30c7\u30d9\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u30ca\u30d0\u30db\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u30ab\u30e9\u30ab\u30eb\u30d1\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u30cb\u30e3\u30f3\u30b8\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u30ab\u30c1\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u30ab\u30d3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"\u30dd\u30ea\u30c8\u30cb\u30c3\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u30aa\u30c3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u30ab\u30b8\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u30ab\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u30e1\u30f3\u30c7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"\u521d\u671f\u8fd1\u4ee3\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u30aa\u30b8\u30d6\u30a6\u30a7\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u30e1\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u30aa\u30ed\u30e2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u30ab\u30a6\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"\u4e2d\u592e\u30c9\u30a5\u30b9\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u30aa\u30c7\u30a3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"\u30e2\u30fc\u30c7\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u30aa\u30bb\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC\u30e9\u30c6\u30f3\u6587\u5b57\u5316(1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"\u30d3\u30b7\u30e5\u30cc\u30d7\u30ea\u30e4\u30fb\u30de\u30cb\u30d7\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u30ab\u30d0\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u30e2\u30fc\u30ea\u30b7\u30e3\u30b9\u30fb\u30af\u30ec\u30aa\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u30d1\u30f3\u30b8\u30e3\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u30c9\u30a5\u30a2\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u30bb\u30ec\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"\u30ec\u30fc\u30b8\u30a2\u65b9\u8a00 \u30ea\u30dd\u30f4\u30a1\u30c4\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"\u30ab\u30cd\u30f3\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u30d1\u30fc\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"\u30d0\u30d5\u30c6\u30a3\u30e4\u30fc\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u4e2d\u4e16\u30aa\u30e9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"\u30b5\u30a6\u30e9\u30fc\u30b7\u30e5\u30c8\u30e9\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u30c0\u30f3\u30ae\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"\u30f4\u30a1\u30e9\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u30d1\u30b7\u30e5\u30c8\u30a5\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u4e2d\u671f\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u4e26\u3079\u66ff\u3048\u9806\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"\u30dc\u30db\u30ea\u30c3\u30c4\u30fb\u30a2\u30eb\u30d5\u30a1\u30d9\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u30ab\u30bf\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u30de\u30af\u30a2\u30fb\u30df\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u901a\u8ca8\u30d5\u30a9\u30fc\u30de\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"\u30f3\u30b3\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u30d6\u30e9\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u66a6\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"\u30e4\u30a6\u30a8\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u30e9\u30aa\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"\u30b9\u30eb\u30df\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u30e1\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24\u6642\u9593\u5236(0\u301c23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24\u6642\u9593\u5236(1\u301c24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"\u30d6\u30e9\u30d5\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u30b1\u30c1\u30e5\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u30b5\u30dd\u30c6\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u30dc\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u30e9\u30fc\u30f3\u30ca\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u30de\u30b3\u30f3\u30c7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"\u30f4\u30a1\u30a4\u30c7\u30a3\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"\u30b6\u30fc\u30bf\u30fc\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of(u"\u7565\u79f0\u7ca4\u62fc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12\u6642\u9593\u5236(1\u301c12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12\u6642\u9593\u5236(0\u301c11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u30ed\u30de\u30f3\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u30eb\u30f3\u30c7\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u901a\u8ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u30aa\u30c7\u30a3\u30a2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u6f22\u6570\u5b57(\u4f4d\u53d6\u308a\u8a18\u6570\u6cd5)"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u30ed\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"\u30a2\u30b3\u30fc\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u30ad\u30cb\u30a2\u30eb\u30ef\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u30ab\u30fc\u30dc\u30d9\u30eb\u30c7\u30fb\u30af\u30ec\u30aa\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u30df\u30af\u30de\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u30b9\u30af\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"\u30c7\u30e5\u30d7\u30ed\u30ef\u30a8\u5f0f\u901f\u8a18"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u30b5\u30f3\u30b9\u30af\u30ea\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"\u7d71\u4e00\u30b3\u30fc\u30f3\u30a6\u30a9\u30fc\u30eb\u8a9e\u6b63\u66f8\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u30b5\u30eb\u30c7\u30fc\u30cb\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u30b9\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u30b7\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u5317\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u30df\u30ca\u30f3\u30ab\u30d0\u30a6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u30b5\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u30bb\u30eb\u30dc\u30fb\u30af\u30ed\u30a2\u30c1\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of(u"\u30cb\u30e3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u30b7\u30f3\u30cf\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u30b7\u30e5\u30e1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u30b9\u30ed\u30d0\u30ad\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"\u30b0\u30e9\u30f3\u30bf\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u30b5\u30e2\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u30b7\u30e7\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u30bd\u30de\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u30a2\u30e9\u30d3\u30a2\u30fb\u30a4\u30f3\u30c9\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u30b9\u30ef\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u4f1a\u8a08\u901a\u8ca8\u30d5\u30a9\u30fc\u30de\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u5357\u90e8\u30bd\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\u30b8\u30e3\u30ef\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u30b9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"\u30ca\u30c6\u30a3\u30be\u30fc\u30cd\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u30b9\u30a6\u30a7\u30fc\u30c7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u30b9\u30ef\u30d2\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u7e41\u4f53\u5927\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u30a4\u30d3\u30d3\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u30a4\u30d0\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u30bf\u30df\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u30d6\u30ea\u30e4\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u4e2d\u592e\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u30c6\u30eb\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u897f\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u30bf\u30b8\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u30bf\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u30c6\u30a3\u30b0\u30ea\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u30d6\u30ae\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u30b3\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u30ab\u30ca\u30c0\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u30bf\u30ac\u30ed\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u30c4\u30ef\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u30c8\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"\u30d6\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u30b8\u30e7\u30e9\uff1d\u30d5\u30a9\u30cb\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u6f22\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u30c8\u30eb\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u30c4\u30a9\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u30b3\u30e2\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u30c1\u30e3\u30af\u30de\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u30bf\u30bf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u30b8\u30e5\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u30c8\u30a6\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u30bf\u30d2\u30c1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"\u30b5\u30f3\u30fb\u30b8\u30e7\u30eb\u30b8\u30e7/\u30d3\u30fc\u30e9\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u6771\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u5317\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u30c0\u30b6\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u897f\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u30a6\u30a4\u30b0\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u53e4\u30a4\u30bf\u30ea\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\u97d3\u56fd\u8a9e\u306e\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of(u"\u30ab\u30a4\u30f3\u30ac\u30f3\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u5171\u901a\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"\u30bc\u30fc\u30e9\u30f3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\u30b3\u30d7\u30c8\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u30a6\u30eb\u30c9\u30a5\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"\u6a19\u6e96\u30ec\u30fc\u30b8\u30a2\u65b9\u8a00\u6b63\u66f8\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u30ab\u30eb\u30e0\u30a4\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u30bc\u30ca\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u30a6\u30ba\u30d9\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u30ab\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"\u30c9\u30a4\u30c4\u8a9e\u6b63\u66f8\u6cd5(1996)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u30b7\u30ed\u30c6\u30a3\u30fb\u30ca\u30b0\u30ea\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u30d9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"\u30d0\u30e9\u30f3\u30fb\u30af\u30b7\u30c6\u30a3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u4e2d\u83ef\u6c11\u56fd\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u30b3\u30fc\u30bf\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u30b3\u30a4\u30e9\u30fb\u30c1\u30fc\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u6642\u9593\u5236(12 / 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"\u30bf\u30e9\u30b7\u30b1\u30f4\u30a3\u30c4\u30a1\u6b63\u66f8\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u30f4\u30a9\u30e9\u30d4\u30e5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"\u30b3\u30ef\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u53e4\u5178\u30b7\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u30aa\u30b9\u30de\u30cb\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u30ad\u30c1\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"\u30c1\u30f3\u30dc\u30e9\u30bd\u9ad8\u5730\u30b1\u30c1\u30e5\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u30ef\u30ed\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u30ac\u30ac\u30a6\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u30b7\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"\u8d1b\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"\u30ad\u30eb\u30de\u30f3\u30b8\u30e5\u30ad\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u30ea\u30c7\u30a3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u30b7\u30e5\u30e1\u30fc\u30eb\uff1d\u30a2\u30c3\u30ab\u30c9\u8a9e\u6954\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u30a6\u30a9\u30ed\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u6a19\u6e96\u30e2\u30ed\u30c3\u30b3 \u30bf\u30de\u30b8\u30af\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u73fe\u4ee3\u6a19\u6e96\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u7d71\u5408\u30ab\u30ca\u30c0\u5148\u4f4f\u6c11\u97f3\u7bc0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"\u30d5\u30a9\u30f3\u30af\u30b5\u30f3\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u30ac\u30e8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u6e80\u5dde\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u30e9\u30c6\u30f3\u6587\u5b57(\u30c9\u30a4\u30c4\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u30b7\u30ec\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"\u30a2\u30ca\u30c8\u30ea\u30a2\u8c61\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u30d0\u30e4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u30de\u30cb\u30d7\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u30e9\u30c6\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u30e9\u30c6\u30f3\u6587\u5b57 (\u30b2\u30fc\u30eb\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u7c21\u4f53\u6f22\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u7e41\u4f53\u6f22\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u30b3\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u30ed\u30fc\u30de\u6570\u5b57(\u5c0f\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u30d3\u30ea\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"\u30d1\u30de\u30ab\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u30ea\u30ad\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u30aa\u30bb\u30fc\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"\u30e1\u30c9\u30a5\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"\u30c0\u30ea\u30fc\u8a9e(\u30be\u30ed\u30a2\u30b9\u30bf\u30fc\u6559)"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u30e0\u30fc\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u30e2\u30fc\u30db\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u30ab\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"\u521d\u671f\u73fe\u4ee3\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u30a4\u30c7\u30a3\u30c3\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u30e2\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u30c7\u30bb\u30ec\u30c3\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u30e8\u30eb\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"\u5f93\u6765\u306e\u8a18\u6570\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57(\u897f\u65b9\u30b7\u30ea\u30a2\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u30aa\u30b9\u30de\u30f3\u30c8\u30eb\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57(\u30a8\u30b9\u30c8\u30e9\u30f3\u30b2\u30ed\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u30f4\u30a1\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u30c1\u30ef\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u30ab\u30ea\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u30ab\u30ec\u30f3\u30b8\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u4e2d\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"\u30a2\u30d5\u30a1\u30ab\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u6ce8\u97f3\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u53e4\u307a\u30eb\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u7981\u5247\u51e6\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u30ba\u30fc\u30eb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u96fb\u8a71\u5e33\u9806"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"\u30e2\u30ce\u30c8\u30cb\u30c3\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u30b8\u30e7\u30fc\u30b8\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"\u30b7\u30e3\u30fc\u30e9\u30c0\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u30ad\u30f3\u30d6\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u5927\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u30c1\u30e3\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u30b2\u30a8\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"\u5c71\u5730\u30de\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57(\u6771\u65b9\u30b7\u30ea\u30a2\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc\u30fb\u30b7\u30e3\u30f3\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"\u30a8\u30eb\u30d0\u30b5\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"\u53e4\u4ee3\u5317\u30a2\u30e9\u30d3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"\u30aa\u30eb\u30c1\u30ad\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u30ea\u30d5\u30a9\u30fc\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\u30bf\u30ac\u30ed\u30b0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8\u6c11\u8846\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8\u795e\u5b98\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"\u30a4\u30c6\u30a3\u30cf\u30fc\u30b5"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"\u30d1\u30eb\u30df\u30e9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u30a8\u30f3\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8\u8056\u523b\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u30b8\u30e7\u30fc\u30b8\u30a2\u6587\u5b57(\u30d5\u30c4\u30ea)"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u7c21\u4f53\u4e2d\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u30b3\u30df\u30fb\u30da\u30eb\u30df\u30e3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u53e4\u4ee3\u30cf\u30f3\u30ac\u30ea\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u30b3\u30f3\u30ab\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\u30c9\u30a4\u30c4\u8a9e\u65e7\u6b63\u66f8\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u30b3\u30b9\u30e9\u30a8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"\u30f4\u30a7\u30cd\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"\u30ea\u30f3\u30d6\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u7e41\u4f53\u4e2d\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"\u30b9\u30f3\u30c0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"\u30f4\u30a7\u30d7\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u30af\u30da\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u30af\u30e1\u30fc\u30eb\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"\u30c6\u30a3\u30eb\u30d5\u30fc\u30bf\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u30a4\u30ed\u30ab\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"\u30d0\u30ec\u30f3\u30b7\u30a2\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\u30ad\u30d7\u30ed\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"\u7d71\u4e00\u30c8\u30eb\u30b3\u30e9\u30c6\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u30e0\u30f3\u30c0\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u30b0\u30eb\u30e0\u30ad\u30fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u8907\u6570\u8a00\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"\u30d7\u30fc\u30bf\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u30ab\u30c9\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u5358\u4f4d\u7cfb"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u30af\u30ea\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u30b0\u30e9\u30b4\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u30ad\u30ea\u30d0\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"\u5171\u901a\u30b3\u30fc\u30f3\u30a6\u30a9\u30fc\u30eb\u8a9e\u6b63\u66f8\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u30c1\u30a7\u30ed\u30ad\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u30ab\u30ea\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"\u30ab\u30e6\u30fc\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u30bf\u30df\u30eb\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u30ab\u30e9\u30c1\u30e3\u30a4\u30fb\u30d0\u30eb\u30ab\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u30a4\u30f3\u30b0\u30fc\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"\u30ad\u30ca\u30e9\u30a4\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"\u30af\u30ea\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u30c0\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u30ab\u30ec\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u30a8\u30d5\u30a3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"\u30c8\u30a5\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u6570\u5024\u66f8\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u30af\u30eb\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u30b5\u30f3\u30d0\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u30c6\u30eb\u30b0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u30d0\u30d5\u30a3\u30a2\u8a9e"_s)
		})
	}));
	return data;
}

LocaleNames_ja::LocaleNames_ja() {
}

$Class* LocaleNames_ja::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ja, name, initialize, &_LocaleNames_ja_ClassInfo_, allocate$LocaleNames_ja);
	return class$;
}

$Class* LocaleNames_ja::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun