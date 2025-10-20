#include <sun/util/resources/cldr/ext/LocaleNames_ti.h>

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

$MethodInfo _LocaleNames_ti_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ti::*)()>(&LocaleNames_ti::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ti_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ti",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ti_MethodInfo_
};

$Object* allocate$LocaleNames_ti($Class* clazz) {
	return $of($alloc(LocaleNames_ti));
}

void LocaleNames_ti::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ti::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_BY, u"\u1264\u120b\u1229\u1235"_s);
	$var($String, metaValue_DE, u"\u1300\u122d\u1218\u1295"_s);
	$var($String, metaValue_GB, u"\u12a5\u1295\u130d\u120a\u12dd"_s);
	$var($String, metaValue_GR, u"\u130d\u122a\u12ad"_s);
	$var($String, metaValue_IN, u"\u1205\u1295\u12f2"_s);
	$var($String, metaValue_JP, u"\u1303\u1353\u1295"_s);
	$var($String, metaValue_SD, u"\u1231\u12f3\u1295"_s);
	$var($String, metaValue_TR, u"\u1271\u122d\u12ad"_s);
	$var($String, metaValue_UA, u"\u12e9\u12ad\u122c\u1295"_s);
	$var($String, metaValue_VN, u"\u126c\u1275\u1293\u121d"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u1356\u122d\u1273 \u122a\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u12e8\u134d\u120d\u1235\u1324\u121d \u130d\u12db\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u1353\u123d\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u1356\u122d\u1271\u130b\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u1356\u122d\u1279\u130b\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u1353\u120b\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u134a\u120a\u1355\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u1353\u122b\u1313\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u1356\u122d\u1279\u130b\u120d (\u1293\u12ed \u1265\u122b\u12da\u120d)"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u1240\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u12c8\u1323 \u12eb\u1208 \u12a6\u123d\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u12a0\u1234\u1295\u123d\u1295 \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u12a3\u1295\u12f6\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u1215\u1261\u122b\u1275 \u12a2\u121b\u122b\u1275 \u12d3\u1228\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u12a3\u134d\u130b\u1292\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u12a3\u134d\u122a\u12a8\u1295\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u12a3\u1295\u1272\u1313\u1295 \u1263\u122d\u1261\u12f3\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u12a3\u1295\u130a\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u12a3\u120d\u1264\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u12a3\u122d\u121c\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u12a3\u121d\u1213\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u12a3\u1295\u130e\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u12a3\u1295\u1273\u122d\u12ad\u1272\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u12d3\u1208\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u12a3\u122d\u1300\u1295\u1272\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u12d3\u1228\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u134a\u12f0\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u12a3\u121c\u122a\u12ab \u1233\u121e\u12a3"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u12a6\u1235\u1275\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u122a\u12e9\u1292\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u12a3\u12cd\u1235\u1275\u122b\u120a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u12a3\u1229\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u12a3\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u12a6\u123d\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u12a3\u12d8\u122d\u1260\u1303\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u12a3\u12d8\u122d\u1263\u1303\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u122e\u121c\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u122e\u121b\u1292\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u1266\u12dd\u1295\u12eb\u1295 \u1204\u122d\u12d8\u130e\u126a\u1293\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u1263\u122d\u1263\u12f6\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u1230\u122d\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u1263\u1295\u130d\u120b\u12f2\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u1264\u120d\u1300\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u122b\u123a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u1229\u1235\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u1261\u122d\u12aa\u1293 \u134b\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u1261\u120d\u130b\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u1229\u12cb\u1295\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u1261\u120d\u130b\u122a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u1263\u1215\u122c\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u1261\u1229\u1295\u12f2"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u1264\u1292\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u1245\u12f1\u1235 \u1263\u122d\u1270\u1208\u121a\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u1264\u122d\u1219\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u1265\u1229\u1290\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u1263\u1295\u130b\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u1266\u120a\u126a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u1235\u12d1\u12f2 \u12d3\u1228\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u12ab\u122a\u1262\u12eb\u1295 \u1294\u12d8\u122d\u120b\u1295\u12f5\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u1230\u120e\u121e\u1295 \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u1265\u122b\u12da\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u1232\u123c\u120d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u1265\u122c\u1276\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(metaValue_SD)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u1263\u1203\u121b\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u1266\u1235\u1292\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u1261\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u1235\u12ca\u12f5\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u121d\u1235\u122b\u1243\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u12f0\u1234\u1275 \u1261\u126c\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u1232\u1295\u130b\u1356\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u1266\u1275\u1235\u12cb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u1234\u1295\u1275 \u1204\u1208\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u1230\u122d\u1266- \u12ad\u122e\u12ca\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u1218\u12ab\u12a8\u1208\u129b \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u1235\u120e\u126c\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u1232\u1295\u1203\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u1235\u126b\u120d\u1263\u122d\u12f5\u1295 \u1303\u1295 \u121b\u12e8\u1295\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u12a0\u121c\u122a\u12ab\u12ce\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u1264\u120a\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u1235\u120e\u126b\u12aa\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u1235\u120e\u126b\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u1234\u122b\u120a\u12ee\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u1235\u120e\u126a\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u1233\u1295 \u121b\u122a\u1296"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u1234\u1294\u130b\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u1231\u121b\u120c"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u12ab\u1293\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u12ab\u1273\u120b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u12a3\u120d\u1260\u1295\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u1231\u122a\u1293\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u1230\u122d\u1265\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u12ae\u12ae\u1235 \u12ac\u120a\u1295\u130d \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u12f0\u1261\u1265 \u1231\u12f3\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u12ae\u1295\u130e"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u1233\u12a6 \u1276\u121c\u1295 \u1355\u122a\u1295\u1232\u1354\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u1230\u1234\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_SD)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u121b\u12a5\u12a8\u120b\u12ca \u12a0\u134d\u122a\u1243 \u122a\u1356\u1265\u120a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u12a4\u120d \u1233\u120d\u126b\u12f6\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u1235\u12ca\u12f5\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u12ae\u1295\u130e \u122a\u1353\u1265\u120a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u1235\u12cb\u1202\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u1235\u12ca\u12d8\u122d\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u1232\u1295\u1275 \u121b\u122d\u1272\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u12ae\u1275 \u12f2\u126f\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u1232\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u12a2\u1235\u12cb\u1272\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u12a9\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u127a\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u12ab\u121c\u122e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u127b\u12ed\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u12ae\u120e\u121d\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u12ad\u120a\u1350\u122d\u1276\u1295 \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u1275\u122a\u1235\u1295 \u12f3 \u12a9\u1295\u1203"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u1273\u121a\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u12a5\u1235\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u12ae\u1235\u1273 \u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u1271\u122d\u12ad\u1295 \u12ab\u12ed\u12ae\u1235\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u132b\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u127c\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u1270\u1209\u1309\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u12a5\u1235\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u12a9\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u1293\u12ed \u1348\u1228\u1295\u1233\u12ed \u12f0\u1261\u1263\u12ca \u130d\u12dd\u12a3\u1273\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u12ac\u1355 \u126c\u122d\u12f4"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u1276\u1310"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u12a9\u122b\u12ab\u12ce"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u1273\u12ed\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u1273\u12ed\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u12f0\u1234\u1275 \u12ad\u122a\u1235\u121b\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u1275\u130d\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u1233\u12ed\u1355\u1228\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u1273\u1303\u12aa\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u12c8\u120d\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u12ab\u122a\u1262\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u127c\u12ad \u122a\u1353\u1265\u120a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u1276\u12ad\u120b\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u1271\u122d\u12ad\u121c\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u121d\u1265\u122b\u1255 \u1272\u121e\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u1271\u122d\u12ad\u121c\u1292\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u1271\u1292\u12da\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u1276\u1295\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u12f3\u1292\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u1356\u122d\u1279\u130b\u120d (\u1293\u12ed \u1356\u122d\u1271\u130b\u120d)"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u1275\u122a\u1292\u12f3\u12f5\u1295 \u1276\u1263\u130e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u1271\u126b\u1209"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u12f2\u12e8\u130e \u130b\u122d\u123a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u1273\u12ed\u12cb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u1275\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u1302\u1261\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u1273\u1295\u12db\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u12f4\u1295\u121b\u122d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u12f6\u121a\u1292\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u12f6\u1218\u1292\u12ab \u122a\u1353\u1265\u120a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u121d\u1235\u122b\u1243\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u121d\u1225\u122b\u1243\u12ca \u12a5\u1235\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u12e9\u130b\u1295\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u1235\u1353\u1292\u123d (\u12e8\u120b\u1272\u1295 \u12a0\u121c\u122a\u12ab)"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u12a3\u120d\u1300\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u1293\u12ed \u12a3\u121c\u122a\u12ab \u134d\u1295\u1275\u1275 \u12dd\u1260\u1209 \u12f0\u1234\u1273\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u1232\u12cd\u1273\u1295 \u121c\u120a\u120b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u12a1\u122d\u12f1"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u12a2\u12b3\u12f6\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u12a4\u1235\u1276\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u130d\u1265\u133d"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u1233\u1205\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u12a1\u122b\u1313\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u12e9\u12dd\u1260\u12aa\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u12a1\u12dd\u1264\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(metaValue_GB)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u12a4\u1235\u1350\u122b\u1295\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u126b\u1272\u12ab\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u12a4\u122d\u1275\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u1245\u12f1\u1235 \u126a\u1295\u1234\u1295\u1275\u1295 \u130d\u122c\u1293\u12f2\u1295\u1235\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u1235\u1354\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u1235\u1353\u1292\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u12a2\u1275\u12ee\u1335\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u126c\u1295\u12d9\u12cc\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u12a4\u1235\u1276\u1292\u12a0\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u1263\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u1268\u122d\u1302\u1295 \u1265\u122a\u1323\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u1268\u122d\u1302\u1295 \u12f0\u1234\u1273\u1275 \u12a3\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u134b\u122d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u126b\u1291\u12a0\u1271"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u134a\u1295\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u134a\u1292\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u134a\u1302"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u134e\u12ad\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u121a\u12ad\u122e\u1294\u12e2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u134b\u122b\u12a6"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u134b\u122e\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u1348\u1228\u1295\u1233\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u1348\u1228\u1295\u1233\u12ed\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u12a5\u1293 \u1292\u12cd \u12da\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u121c\u120b\u1294\u1232\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u12cb\u120a\u1235\u1295 \u1349\u1271\u1293\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u134d\u122a\u1230\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u130b\u1266\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u12a0\u12ed\u122a\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(metaValue_GB)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u1233\u121e\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u130d\u122c\u1293\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u1235\u12ae\u1272\u123d \u130b\u12a0\u120a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u1306\u122d\u1302\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u1293\u12ed \u1348\u1228\u1295\u1233\u12ed \u1309\u12ed\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u1308\u122d\u1295\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u130b\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u130a\u1265\u122b\u120d\u1273\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u130d\u122a\u1295\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u130b\u120a\u123b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u130b\u121d\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u130a\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u1313\u122b\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u1309\u12cb\u12f0\u1209\u1355"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u12a2\u12b3\u1276\u122a\u12eb\u120d \u130a\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u1356\u120a\u1294\u12e2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u120b\u1272\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u12f0\u1261\u1265 \u1306\u122d\u1302\u12eb\u1295 \u12f0\u1261\u12f5 \u1233\u1295\u12f5\u12ca\u127d\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u1309\u12cb\u1272\u121b\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u1309\u12cb\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u1309\u1303\u122b\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u1262\u1233\u12ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u12a2\u1232\u1246\u1233"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u12ad\u120a\u1295\u130d\u12a6\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u1309\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u12ae\u1236\u126e"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u12a5\u1265\u122b\u12ed\u1235\u1325"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u134d\u1209\u12ed \u121d\u121d\u1215\u12f3\u122d \u12de\u1263 \u1206\u1295\u130d \u12ae\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u1200\u122d\u12f5\u1295 \u121b\u12ad\u12f6\u1293\u120d\u12f5\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u1206\u1295\u12f1\u122b\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u12ad\u122e\u12a4\u123d\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u122e\u12a4\u123d\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u1200\u12ed\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u12e8\u1218\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u1200\u1295\u130b\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u1203\u1295\u130b\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u12ea\u12f2\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u12a2\u1295\u1274\u122d \u124b\u1295\u124b"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u12ab\u1293\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u12a2\u1295\u12f6\u1294\u12e2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u121c\u12ed\u12a6\u1274"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u12a2\u1295\u12f6\u1294\u12e5\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u12a0\u12e8\u122d\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u12a5\u1235\u122b\u12a4\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u12a0\u12ed\u120d \u12a6\u134d \u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u1293\u12ed \u1265\u122a\u1323\u1292\u12eb \u1205\u1295\u12f2 \u12cd\u1245\u12eb\u1296\u1235 \u130d\u12dd\u12a3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u12f0\u1261\u1265 \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u12a2\u122b\u1245"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u12a2\u122b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u12a3\u12e8\u122d\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u12a3\u12ed\u1235\u120b\u1295\u12f2\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u1323\u120a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u1325\u120d\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u12db\u121d\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u1300\u122d\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u12d9\u1209\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u12da\u121d\u1267\u1264"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u1303\u121b\u12ed\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u1306\u122d\u12f3\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u1303\u126b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u1306\u122d\u1305\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u12ac\u1295\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u12aa\u122d\u1302\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u12ab\u121d\u1266\u12f2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u12aa\u122a\u1263\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u12ae\u121e\u122e\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u1245\u12f1\u1235 \u12aa\u1275\u1235\u1295 \u1294\u126a\u1235\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u12ab\u121b\u12f0\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u12ae\u122a\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u1230\u121c\u1295 \u12ae\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u12f0\u1261\u1265 \u12ae\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u12a9\u122d\u12f5\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u12ad\u12cc\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u12ac\u12ed\u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u12aa\u1229\u130b\u12da"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u12ab\u12db\u12aa\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u120b\u12a6\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u120b\u1272\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u120a\u1263\u1296\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u1234\u1295\u1275 \u1209\u127a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u120a\u127d\u1270\u1295\u1235\u1273\u12ed\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u1232\u122a\u120b\u1295\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u120b\u12ed\u1264\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u120c\u1236\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u120a\u1271\u12cc\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u120a\u1271\u12c8\u1292\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u1209\u12ad\u1230\u121d\u1260\u122d\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u120b\u1275\u126a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u120b\u1272\u126a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u120a\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u121e\u122e\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u121e\u1293\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u121e\u120d\u12f6\u126b"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u121e\u1295\u1274\u1294\u130d\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u1234\u1295\u1275 \u121b\u122d\u1272\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u121b\u12f3\u130b\u1235\u12ab\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u121b\u122d\u123b\u120d \u12a0\u12ed\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u1230\u121c\u1295 \u1218\u1246\u12f6\u1295\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u1218\u1246\u12f6\u1292\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u121b\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u121b\u120b\u12ed\u12eb\u120b\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u121b\u12eb\u1295\u121b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u121e\u1295\u130e\u120a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u134d\u1209\u12ed \u121d\u121d\u1215\u12f3\u122d \u12de\u1263 \u121b\u12ab\u12ce"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u12f0\u1234\u1273\u1275 \u1230\u121c\u1293\u12ca \u121b\u122a\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u121b\u122d\u1272\u1292\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u121e\u122a\u1274\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u121b\u122b\u1272\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u121e\u1295\u1275\u1234\u122b\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u121b\u120b\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u121b\u120d\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u121b\u120d\u1270\u12d8"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u121b\u1229\u1238\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u121b\u120d\u12f2\u126d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u121b\u120b\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u121c\u12ad\u1232\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u121b\u120c\u12e2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u121e\u12db\u121d\u1262\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u1293\u121a\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u1292\u12cd \u12ab\u120c\u12f6\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u1292\u1300\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u1294\u1353\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u1296\u122d\u134e\u120d\u12ad \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u1293\u12ed\u1304\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u1292\u12ab\u122b\u1313"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u1294\u12d8\u122d\u120b\u1295\u12f5\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u12f0\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u122d\u12cc\u1302\u12eb\u1295 (\u1293\u12ed \u129d\u1296\u122d\u1235\u12ad)"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u1296\u122d\u12cc"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u122d\u12cc\u1302\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u1294\u1353\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u1293\u12a1\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u1292\u12a1\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u1292\u12cd \u12da\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u12a6\u12aa\u1273\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u12a6\u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u12a6\u12f2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u1353\u1293\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u1351\u1295\u1303\u1262"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u1354\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u1293\u12ed \u1348\u1228\u1295\u1233\u12ed \u1356\u120a\u1290\u12dd\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u1353\u1351\u12cb \u1292\u12cd \u130a\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u134a\u120a\u1352\u1295\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u1353\u12aa\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u1356\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u1356\u120a\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u1245\u12f1\u1235 \u1352\u12ec\u122d\u1295 \u121a\u12a9\u12a4\u120e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u1352\u1275\u12ab\u12a2\u122d\u1295"_s)
		})
	}));
	return data;
}

LocaleNames_ti::LocaleNames_ti() {
}

$Class* LocaleNames_ti::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ti, name, initialize, &_LocaleNames_ti_ClassInfo_, allocate$LocaleNames_ti);
	return class$;
}

$Class* LocaleNames_ti::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun