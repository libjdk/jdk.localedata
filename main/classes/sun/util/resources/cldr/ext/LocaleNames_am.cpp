#include <sun/util/resources/cldr/ext/LocaleNames_am.h>

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

$MethodInfo _LocaleNames_am_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_am::*)()>(&LocaleNames_am::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_am_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_am",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_am_MethodInfo_
};

$Object* allocate$LocaleNames_am($Class* clazz) {
	return $of($alloc(LocaleNames_am));
}

void LocaleNames_am::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_am::getContents() {
	$var($String, metaValue_DE, u"\u1300\u122d\u1218\u1295"_s);
	$var($String, metaValue_GR, u"\u130d\u122a\u12ad"_s);
	$var($String, metaValue_NR, u"\u1293\u12a1\u1229"_s);
	$var($String, metaValue_TV, u"\u1271\u126b\u1209"_s);
	$var($String, metaValue_ar, u"\u12d3\u1228\u1265\u129b"_s);
	$var($String, metaValue_ja, u"\u1303\u1353\u1295\u129b"_s);
	$var($String, metaValue_ko, u"\u12ae\u122a\u12eb\u129b"_s);
	$var($String, metaValue_mn, u"\u121e\u1295\u130e\u120a\u12eb\u129b"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u12ae\u120e\u129d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u121a\u122b\u1295\u12f4\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u121d\u120d\u12ad\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\u12a0\u1275\u1233\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u12a2\u121e\u1302"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u127b\u12ad\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u12e8\u1325\u1295\u1273\u12ca \u130d\u1265\u133d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u1272\u121d\u1294"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u1274\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u122b\u1353\u1291\u12a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u12a0\u1234\u1295\u123d\u1295 \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u122b\u122e\u1276\u1295\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u1274\u1270\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u12a0\u1295\u12f6\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u12e8\u1270\u1263\u1260\u1229\u1275 \u12d3\u1228\u1265 \u12a4\u121d\u122c\u1275\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u134d\u120c\u121a\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u12a0\u134d\u130b\u1292\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u12a0\u1295\u1272\u1313 \u12a5\u1293 \u1263\u1229\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u12e8\u12a2\u1275\u12ee\u1335\u12eb \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u12a0\u1295\u1309\u12ed\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\u12e8\u1230\u12d3\u1275 \u1230\u1245"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u12a0\u120d\u1263\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u12a0\u122d\u121c\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u12a0\u1295\u1310\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u12a0\u1295\u1273\u122d\u12ad\u1272\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u12a0\u122d\u1300\u1295\u1272\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab \u1233\u121e\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u12a6\u1235\u1275\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u12a0\u12cd\u1235\u1275\u122b\u120d\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u12a0\u1229\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab \u12a5\u1295\u130d\u120a\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u12e8\u12a0\u120b\u1295\u12f5 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u12a0\u12d8\u122d\u1263\u1303\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u1266\u1235\u1292\u12eb \u12a5\u1293 \u1204\u122d\u12de\u130e\u126a\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u1263\u122d\u1264\u12f6\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u12ab\u1261\u12cb\u1296"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u1263\u1295\u130d\u120b\u12f2\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u12a9\u121b\u12ed\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u1264\u120d\u1304\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u1261\u122d\u12aa\u1293 \u134b\u1236"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u1261\u120d\u130c\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u1263\u1205\u122c\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u1265\u1229\u1295\u12f2"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u1264\u1292\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u1245\u12f1\u1235 \u1260\u122d\u1274\u120e\u121c"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u1264\u122d\u1219\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u12a4\u122d\u12dd\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u1265\u1229\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u1266\u120a\u126a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u12e8\u12ab\u122a\u1262\u12eb\u1295 \u1294\u12d8\u122d\u120b\u1295\u12f5\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u1265\u122b\u12da\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u1263\u1203\u121b\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u1236\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u1261\u1205\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u1261\u126c\u1275 \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u1266\u1275\u1235\u12cb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u1264\u120b\u1229\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u1260\u120a\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u12e8\u1350\u122d\u123d\u12eb \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u12e8\u12a5\u1265\u122b\u12ed\u1235\u1325 \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u12ab\u1293\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u12ae\u12ae\u1235(\u12ac\u120a\u1295\u130d) \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u121b\u12db\u1295\u12f0\u122b\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u12ae\u1295\u130e-\u12aa\u1295\u123b\u1233"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u121b\u12d5\u12a8\u120b\u12ca \u12a0\u134d\u122a\u12ab \u122a\u1351\u1265\u120a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u12ae\u1295\u130e \u1265\u122b\u12db\u126a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u1235\u12ca\u12d8\u122d\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u12ae\u1275 \u12f2\u126f\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u12a9\u12ad \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u127a\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u12ab\u121c\u1229\u1295"_s)
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
			$of("CR"_s),
			$of(u"\u12ae\u1235\u1273\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u12a9\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u12ac\u1355 \u126c\u122d\u12f4"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u12a9\u122b\u1233\u12ce"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u12ad\u122a\u1235\u121b\u1235 \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u1233\u12ed\u1355\u1228\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u127c\u127a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u12a4\u12ab\u1301\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u12a0\u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u127a\u130b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u12f2\u12ec\u130e \u130b\u122d\u123a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u12e8\u12f4\u126b\u1295\u130b\u122a \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u1302\u1261\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u12f4\u1295\u121b\u122d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u12a0\u12ae\u120a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u1265\u122c\u12ed\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u12f6\u121a\u1292\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab\u1295 \u1295\u12d1\u1235 \u1206\u1204 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u12f6\u1218\u1292\u12ab\u1295 \u122a\u1351\u1265\u120a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u130e\u122e\u1295\u1273\u120e"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u12d9\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u1275\u130d\u1228"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u12a0\u120d\u1304\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u1353\u1295\u130b\u1232\u1293\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"\u130d\u121b\u123d \u12c8\u122d\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u1234\u12a1\u1273\u1293 \u121c\u120a\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u127a\u1265\u127b"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u1353\u121d\u1353\u1295\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u12a2\u12b3\u12f6\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u1353\u1352\u12a0\u121c\u1295\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u12a0\u12f3\u1295\u130d\u121c"_s)
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
			$of("chg"_s),
			$of(u"\u127b\u130b\u1273\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u1353\u120b\u12a1\u12a0\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u1279\u12ad\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u127a\u1291\u12ad \u1303\u122d\u130e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u121b\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u127a\u1354\u12cd\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u127e\u12ad\u1273\u12cb"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u127c\u122e\u12ac\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u12a4\u122d\u1275\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u1235\u1354\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u12a2\u1275\u12ee\u1335\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u12e8\u12a0\u12cd\u122e\u1353 \u1205\u1265\u1228\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u12e8\u130d\u122a\u130e\u122a\u12eb\u1295 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u12e8\u12a0\u12cd\u122e\u1353 \u12de\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u127d\u12ec\u1294"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u12e8\u1309\u1303\u122b\u1272 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u12a0\u12f5\u12ed\u130d\u1204"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u134a\u1295\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u134a\u1302"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u12e8\u134e\u12ad\u120b\u1295\u12f5 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u121a\u12ad\u122e\u1294\u12e2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"\u12e8\u12a0\u12ab\u1263\u1262 \u12a0\u12ed\u1290\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u12e8\u134b\u122e \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u1273\u121a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u1348\u1228\u1295\u1233\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u12e8\u1205\u1295\u12f5 \u1265\u1214\u122b\u12ca \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u12e8\u1325\u1295\u1273\u12ca \u130d\u122a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u130b\u1266\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u12e9\u1293\u12ed\u1275\u12f5 \u12aa\u1295\u130d\u12f0\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u12e8\u1293\u12ed\u1304\u122a\u12eb \u1352\u1302\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u130d\u122c\u1293\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u1306\u122d\u1302\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u12e8\u1348\u1228\u1295\u1233\u12ed \u1309\u12ca\u12a0\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u1309\u122d\u1290\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u130b\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u1302\u1265\u122b\u120d\u1270\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u12a0\u134d\u122a\u1202\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u130d\u122a\u1295\u120b\u1295\u12f5"_s)
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
			$of("GS"_s),
			$of(u"\u12f0\u1261\u1265 \u1306\u122d\u1302\u12eb \u12a5\u1293 \u12e8\u12f0\u1261\u1265 \u1233\u1295\u12f5\u12ca\u127d \u12f0\u1234\u1276\u127d"_s)
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
			$of("GW"_s),
			$of(u"\u130a\u1292 \u1262\u1233\u12a6"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u12ad\u120a\u1295\u130e\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u1309\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u12e8\u1236\u122b\u1292 \u12a9\u122d\u12f5\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u124b\u1295\u124b\u12ca \u12ed\u12d8\u1275 \u12a0\u12ed\u12f0\u1208\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u12e8\u12a6\u1235\u1275\u122a\u12eb \u1300\u122d\u1218\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u1206\u1295\u130d \u12ae\u1295\u130d \u120d\u12e9 \u12e8\u12a0\u1235\u1270\u12f3\u12f0\u122d \u12ad\u120d\u120d \u127b\u12ed\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u12bd\u122d\u12f5 \u12f0\u1234\u1276\u127d\u1293 \u121b\u12ad\u12f6\u1293\u120d\u12f5 \u12f0\u1234\u1276\u127d"_s)
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
			$of("agq"_s),
			$of(u"\u12a0\u1308\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u12e8\u1235\u12ca\u12dd \u1300\u122d\u1218\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u1200\u12ed\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u1200\u1295\u130b\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u12e8\u12ab\u1293\u122a \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"\u121a\u1295 \u129b\u1295 \u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u12a2\u1295\u12f6\u1294\u12e2\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u12a0\u12e8\u122d\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u1292\u12a0\u1356\u120a\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u1293\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u12db\u12db"_s)
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
			$of(u"\u1205\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u12e8\u1265\u122a\u1273\u1292\u12eb \u1205\u1295\u12f5 \u12cd\u1242\u12eb\u1296\u1235 \u130d\u12db\u1275"_s)
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
			$of(u"\u12a0\u12ed\u1235\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u1323\u120a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u12e8\u1202\u1233\u1265 \u1218\u130d\u1208\u132b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u12e8\u1273\u12ed \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u12e8\u1264\u1295\u130b\u120a \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u1300\u122d\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u12a5\u1235\u120b\u121b\u12ca \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u1303\u121b\u12ed\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u1264\u1295\u130b\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u1306\u122d\u12f3\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u1303\u1353\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u12a0\u12ed\u1291"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u1309\u1235\u120a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u12e8\u12ab\u1295\u12a0\u12f3 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u12e8\u1235\u12ca\u12dd \u12a8\u134d\u1270\u129b \u1300\u122d\u1218\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"\u12e8\u134e\u1290\u1272\u12ad \u12f5\u122d\u12f0\u122b \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u12e8\u1261\u12f2\u1235\u1275 \u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u12ac\u1295\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u120b\u1272\u1295 \u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u12aa\u122d\u130a\u1235\u1273\u1295"_s)
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
			$of(u"\u1245\u12f1\u1235 \u12aa\u1275\u1235 \u12a5\u1293 \u1294\u126a\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u12ab\u1295\u12a0\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u12e8\u12ab\u1293\u12f3 \u1348\u1228\u1295\u1233\u12ed\u129b"_s)
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
			$of("fr_CH"_s),
			$of(u"\u12e8\u1235\u12ca\u12dd \u1348\u1228\u1295\u1233\u12ed\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u12ad\u12cc\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u1276\u12ad \u1352\u1232\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u12ab\u12ed\u121b\u1295 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u12ab\u12db\u12aa\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u1232\u12ed\u122a\u120d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u120b\u12a6\u1235"_s)
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
			$of("gwi"_s),
			$of(u"\u130d\u12ca\u127a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u12e8\u1273\u127d\u129b\u12cd \u1300\u122d\u1218\u1295"_s)
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
			$of("akk"_s),
			$of(u"\u12a0\u12ab\u12f2\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u12ae\u1355\u1272\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u120b\u12ed\u1264\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"\u1234\u1295\u1270\u122b\u120d \u12e9\u1352\u12ad"_s)
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
			$of("LU"_s),
			$of(u"\u1209\u12ad\u1230\u121d\u1260\u122d\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u120b\u1275\u126a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u12ab\u1273\u12ab\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u120a\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u120b\u12f2\u1296"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u1269\u1295\u1306"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"\u12a0\u120b\u1263\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u120b\u1295\u130a"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u1273\u1293"_s)
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
			$of(u"\u121e\u1295\u1270\u1294\u130d\u122e"_s)
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
			$of("ale"_s),
			$of(u"\u12a0\u120d\u12e9\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u1273\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"\u12e8\u126b\u12ed \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u1230\u121c\u1295 \u1218\u1244\u12f6\u1295\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u121b\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u121b\u12ed\u1293\u121b\u122d(\u1260\u122d\u121b)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u121e\u1295\u130e\u120a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u1292\u12cb\u122a(\u1294\u1353\u120d)"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u121b\u12ab\u12a6 \u120d\u12e9 \u12e8\u12a0\u1235\u1270\u12f3\u12f0\u122d \u12ad\u120d\u120d \u127b\u12ed\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u12e8\u1230\u121c\u1293\u12ca \u121b\u122a\u12eb\u1293 \u12f0\u1234\u1276\u127d"_s)
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
			$of("MS"_s),
			$of(u"\u121e\u1295\u1275\u1234\u122b\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u121b\u120d\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"\u12ab\u1352\u12dd\u1296\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u121e\u122a\u1238\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a0\u120d\u1273\u12ed"_s)
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
			$of("type.ca.japanese"_s),
			$of(u"\u12e8\u1303\u1353\u1295 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
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
			$of("202"_s),
			$of(u"\u12a8\u1230\u1203\u122b \u1260\u1273\u127d \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u12e8\u12a5\u1265\u122b\u12ca\u12eb\u1295 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u12e8\u1218\u12dd\u1308\u1260 \u1243\u120b\u1275 \u12e8\u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
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
			$of("NF"_s),
			$of(u"\u1296\u122d\u134e\u120d\u12ad \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u1293\u12ed\u1304\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u1273\u122e\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u1292\u12ab\u122b\u1313"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u1294\u12d8\u122d\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u1296\u122d\u12cc\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u1294\u1353\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u1292\u12a1\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u122e\u121d\u1266"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u1292\u12cd \u12da\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u12ad\u122a\u121a\u12eb\u1295 \u1270\u122d\u12aa\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u12a6\u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u12a0\u1295\u130a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u1230\u1230\u120b\u12ca \u12ad\u122c\u12a6\u120a \u1348\u1228\u1295\u1233\u12ed\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u1353\u1293\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u12e8\u12a5\u1235\u120b\u121d \u1205\u12dd\u1263\u12ca \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u12e8\u1265\u122a\u1272\u123d \u12a5\u1295\u130d\u120a\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u1354\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u12e8\u1348\u1228\u1295\u1233\u12ed \u1356\u120a\u1294\u12e2\u12eb"_s)
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
			$of("ewo"_s),
			$of(u"\u12a4\u12ce\u1295\u12f6"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u1245\u12f1\u1235 \u1352\u12ec\u122d \u12a5\u1293 \u121a\u12a9\u12a4\u120e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u1352\u1275\u12ab\u12a2\u122d\u1295 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u1356\u122d\u1273 \u122a\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u12e8\u134d\u120d\u1235\u1324\u121d \u130d\u12db\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u1356\u122d\u1271\u130b\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u1353\u120b\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u1292\u12a0\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u12e8\u130d\u122a\u12ad \u1295\u12d1\u1235 \u1206\u1204 \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u1353\u122b\u1313\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u1271\u121d\u1261\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u12a5\u1265\u122b\u12ed\u1235\u1325"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u12b3\u1273\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u1292\u12e9\u12a0\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u12a0\u12cd\u1275\u120b\u12ed\u1295\u130d \u12a6\u123d\u1295\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u120c\u12dd\u130a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u12d3\u1208\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"\u12a6 \u1293\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u1230\u121c\u1295 \u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u122a\u12e9\u1292\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u12f0\u1261\u1265 \u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u120e\u1305\u1263\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u12a6\u123d\u1292\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u122e\u121c\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u1230\u122d\u1265\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u1229\u1235\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u1229\u12cb\u1295\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u1233\u12cd\u12f5\u12a0\u1228\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u1230\u120e\u121e\u1295 \u12f0\u1234\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u1273\u1233\u12cb\u1245"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u121d\u1235\u122b\u1243\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u1232\u123c\u120d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u1231\u12f3\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u1235\u12ca\u12f5\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u12a0\u122b\u121b\u12ed\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u1232\u1295\u130b\u1356\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u1234\u1295\u1275 \u1204\u1208\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u1320\u1260\u1245 \u12eb\u1208 \u1218\u1235\u1218\u122d \u1218\u1235\u1260\u122a\u12eb \u1245\u1325"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u1235\u120e\u126c\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u1235\u126b\u120d\u1263\u122d\u12f5 \u12a5\u1293 \u1303\u1295 \u121b\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u1235\u120e\u126b\u12aa\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u1234\u122b\u120a\u12ee\u1295"_s)
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
			$of("arn"_s),
			$of(u"\u121b\u1351\u127c"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u12a0\u122b\u1353\u1206"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u1263\u1205\u120b\u12ca \u12e8\u1273\u121a\u120d \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u1231\u122a\u1293\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"\u12a0\u122b\u12a6\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u12f0\u1261\u1265 \u1231\u12f3\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u1233\u12a6 \u1276\u121c \u12a5\u1293 \u1355\u122a\u1295\u1232\u1354"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"\u12e8\u12a0\u120d\u1304\u122a\u12eb \u12d3\u1228\u1265\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u12a4\u120d \u1233\u120d\u126b\u12f6\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u1232\u1295\u1275 \u121b\u122d\u1270\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u1232\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u1231\u12cb\u12da\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u12a0\u122b\u12cb\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u1275\u122a\u1235\u1273\u1295 \u12f2 \u12a9\u1295\u1203"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u12a0\u1231"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab \u1218\u1208\u12aa\u12eb \u1235\u122d\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u12a0\u121c\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u12e8\u1271\u122d\u12ae\u127d\u1293 \u12e8\u12ab\u12a2\u12ae\u1235 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u12eb\u1295\u130d\u1264\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u127b\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u12e8\u1348\u1228\u1295\u1233\u12ed \u12f0\u1261\u1263\u12ca \u130d\u12db\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab \u12e8\u121d\u120d\u12ad\u1275 \u124b\u1295\u124b"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u1276\u1310"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u1273\u12ed\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u1273\u1303\u12aa\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u12ab\u122a\u1262\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u1276\u12ad\u120b\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u1272\u121e\u122d \u120c\u1235\u1274"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u12e8\u121d\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"\u1260\u1203\u1295\u1309\u120d \u12e8\u1218\u1300\u1218\u122a\u12eb \u1270\u1290\u1263\u1262 \u1348\u120d\u130d"_s)
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
			$of("TR"_s),
			$of(u"\u1271\u122d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u1275\u122a\u1293\u12f3\u12f5 \u12a5\u1293 \u1276\u1264\u130e"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u1273\u12ed\u12cb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u12a0\u1235\u1271\u122a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u1273\u1295\u12db\u1292\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u12ad\u12cb\u1232\u12ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u12eb\u120d\u1273\u12c8\u1240 \u1235\u12ad\u122a\u1355\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u12e9\u12ad\u122c\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u12a0\u122e\u121b\u1295\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u121d\u1235\u122b\u1243\u12ca \u12a5\u1235\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u1271\u126a\u1295\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u12ae\u1295\u130e \u1235\u12cb\u1202\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a5\u1232\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u12f0\u1261\u1265 \u12a5\u1232\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u12e9\u130b\u1295\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"\u1203\u12ab \u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u1352\u1295\u12ed\u1295 \u12e8\u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u1232\u1295\u1203\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u12e8\u12e9 \u12a4\u1235 \u1320\u1228\u134d \u120b\u12ed \u12eb\u1209 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u12e8\u1270\u1263\u1260\u1229\u1275 \u1218\u1295\u130d\u1235\u1273\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u12e9\u1293\u12ed\u1275\u12f5 \u1235\u1274\u1275\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u1203\u12ca\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u12e8\u1240\u1208\u1208 \u12e8\u127b\u12ed\u1295\u129b \u12e8\u12f5\u122d\u12f0\u122b \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u12a1\u122b\u1313\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u1350\u1229\u1233\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u12a1\u12dd\u1264\u12aa\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u1275\u120b\u1235 \u1273\u121b\u12da\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u12e8\u1260\u1275\u122d \u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u1292\u130a\u121d\u1261\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u126b\u1272\u12ab\u1295 \u12a8\u1270\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u1245\u12f1\u1235 \u126a\u1295\u1234\u1295\u1275 \u12a5\u1293 \u130d\u122c\u1293\u12f2\u1295\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u126c\u1295\u12d9\u12cc\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u12e8\u12a5\u1295\u130d\u120a\u12dd \u1268\u122d\u1302\u1295 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u12e8\u12a0\u121c\u122a\u12ab \u1268\u122d\u1302\u1295 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u126c\u1275\u1293\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u126b\u1291\u12a0\u1271"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u1296\u130b\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u122d\u12cb"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u12a0\u12cd\u1235\u1275\u122b\u120c\u12e5\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u121c\u120b\u1294\u12e5\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u12cb\u120a\u1235 \u12a5\u1293 \u1349\u1271\u1293 \u12f0\u1234\u1276\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u1263\u1205\u120b\u12ca \u12e8\u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u12e8\u121b\u12ed\u12ad\u122e\u1294\u12e5\u12eb\u1295 \u12ad\u120d\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u1295\u130e\u1263\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u120b\u12ae\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"\u12e8\u134b\u12ed\u1293\u1295\u1235 \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u12cb\u120d\u1230\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u1233\u121e\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u12c8\u120b\u12ed\u1275\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u12e8\u1200\u1230\u1275 \u1275\u12a5\u121d\u122d\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u12cb\u122b\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u12e8\u1200\u1230\u1275 \u1263\u1208\u1201\u1208\u1275 \u12a0\u1245\u1323\u132b"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u12a0\u12cb\u12f5\u1202"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u1356\u120a\u1294\u12e5\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u12ae\u1236\u126e"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\u1309\u1303\u122b\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u12eb\u120d\u1270\u133b\u1348"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u12cb\u122d\u120d\u1352\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u12e8\u1218\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u1295\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u1218\u12f0\u1260\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u121c\u12ed\u12a6\u1274"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u12f0\u1261\u1265 \u12a0\u134d\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u120b\u120b \u12eb\u1208 \u1218\u1235\u1218\u122d \u1218\u1235\u1260\u122a\u12eb \u1245\u1325"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u12f0\u126b\u1295\u130b\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u12e8\u1306\u122d\u1302\u12eb\u1295 \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u1202\u122b\u130b\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u12db\u121d\u1262\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u12da\u121d\u1267\u1264"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u12eb\u120d\u1273\u12c8\u1240 \u12ad\u120d\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u12e8\u120d\u12ac\u1275 \u1235\u122d\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u1236\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u12e8\u1270\u120d\u1309 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u120e\u12da\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u121b\u127b\u121c\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u1240\u1208\u120d \u12eb\u1209 \u12e8\u127b\u12ed\u1295\u129b \u1308\u1295\u12d8\u1265 \u1290\u12ad \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u1202\u120a\u130b\u12ed\u1296\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u12e8\u1270\u122b\u12d8\u1219 \u12e8\u12a0\u1228\u1262\u12ad-\u12a2\u1295\u12f2\u12ad \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u1291\u12cc\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u12f3\u12ae\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u12e8\u1219\u1209 \u12c8\u122d\u12f5 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u12f3\u122d\u130d\u12cb"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u1273\u12ed\u1273\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u1209\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u12ad\u120b\u1232\u12ad \u1294\u12cb\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u12a1\u12f5\u1219\u122d\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u12ad\u1205\u1218\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u1233\u1295\u12f3\u12cc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u12e8\u122e\u121b\u1295 \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u1233\u12ad\u1203"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u1233\u121d\u1261\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u1233\u1295\u1273\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"\u12a0\u1203\u12db\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"\u1275\u12cd\u120d\u12f5 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u1295\u130b\u121d\u1263\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u1309\u122d\u1219\u12aa"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u1209\u1263-\u1209\u120f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u1219\u1209 \u12c8\u122d\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u1233\u1295\u1309"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u1292\u12eb\u1295\u12ae\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u1209\u1295\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u1209\u12a6"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u134a\u120a\u1352\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u1205\u121e\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u12f3\u120b\u12cc\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u121a\u12de"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u1263\u1209\u127a"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u1263\u120a\u1294\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u1209\u12ea\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"\u1263\u126b\u122a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u1263\u1233"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"\u1263\u1219\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u12e8\u12a0\u12cd\u122e\u1353 \u1235\u1353\u1295\u123d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u1235\u12ae\u1275\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u1232\u1232\u120a\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u12a0\u134b\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u12a0\u1265\u1210\u12da\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"\u1263\u1273\u12ab \u1276\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u12a0\u126c\u1235\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u12a0\u134d\u122a\u12ab\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u12a0\u12ab\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u12a0\u121b\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u12a0\u122b\u130e\u1295\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u12ab\u1273\u12ab\u1293 \u12c8\u12ed\u1295\u121d \u1202\u122b\u130b\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u12a0\u1233\u121c\u12db\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u12a0\u126b\u122a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u12a9\u122d\u12f2\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u12a0\u12eb\u121b\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u12a0\u12d8\u122d\u1263\u1303\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u1263\u1235\u12aa\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u12e8\u1218\u1230\u1228\u1273\u12ca \u1260\u1275\u122d \u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u1264\u120b\u122b\u123b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u1261\u120d\u130b\u122a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u1262\u1235\u120b\u121d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u1263\u121d\u1263\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u1264\u1295\u130b\u120a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u1272\u1264\u1273\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u12f6\u130d\u122a\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u1265\u122c\u1276\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u1266\u1235\u1292\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u121d\u12eb\u1295\u121b\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u12e8\u120b\u12a6 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u1234\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u12ab\u1273\u120b\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u12ae\u12ed\u122b\u1266\u122e \u1234\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u127d\u127d\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u127b\u121e\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u12ae\u122d\u1232\u12ab\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u12a6\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u12ad\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u127c\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u1278\u122d\u127d \u1235\u120b\u126a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u1279\u126b\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u12c8\u120d\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u12e8\u12a2\u1275\u12ee\u1335\u12eb \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u12f4\u1292\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u12e8\u12a0\u12cd\u122e\u1353 \u1356\u122d\u1279\u130b\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u1218\u12f0\u1260\u129b \u12e8\u121d\u1295\u12db\u122a \u1245\u122d\u1338\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u1264\u1303"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u12f2\u1295\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u1264\u121d\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\u12e8\u121e\u1295\u130e\u120d\u129b \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u12f2\u126c\u1202"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u12e8\u120b\u1272\u1295 \u12a0\u121c\u122a\u12ab \u1235\u1353\u1292\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"\u1264\u1273\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u12f5\u12de\u1295\u130d\u12bb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u1264\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u12e8\u127b\u12ed\u1293 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u12db\u122d\u121b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u12e8\u130d\u122a\u12ad \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u12a2\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"\u1263\u1349\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u1218\u12f0\u1260\u129b \u1218\u1235\u1218\u122d \u1218\u1235\u1260\u122a\u12eb \u1245\u1325"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u121e\u120d\u12f3\u126a\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u130d\u122a\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u12a5\u1295\u130d\u120a\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u12a4\u1235\u1350\u122b\u1295\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"\u1263\u12f3\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u12e8\u1263\u1205\u120b\u12ca \u127b\u12ed\u1295\u129b \u12e8\u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d - \u1275\u120d\u12455"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u1235\u1353\u1295\u123d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u12a2\u1235\u1276\u1292\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u1203\u1295\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u1263\u1235\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u1210\u1295\u1309\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u1273\u127c\u120d\u1202\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u12e8\u120b\u12ed\u129b\u12cd \u1236\u122d\u1262\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u1203\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u123b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u1350\u122d\u123a\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u1240\u1208\u120d \u12eb\u1208"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u12e8\u121d\u1235\u122b\u1243\u12ca \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u1263\u1205\u120b\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u1349\u120b\u1205"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u127b\u12f2\u12eb\u1295 \u12d3\u1228\u1265\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"\u12e2\u12eb\u1295\u130d \u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u134a\u1292\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u134a\u1302\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u134e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u12e8\u121d\u12d5\u122b\u1265 \u1263\u120e\u127a"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u12ab\u1295\u1276\u1292\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u134b\u122e\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"\u1262 \u1302 \u12a4\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u12a1\u121d\u1261\u1295\u12f1"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u1348\u1228\u1295\u1233\u12ed\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u1232\u12f3\u121d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u134d\u122a\u1232\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u12a0\u12ed\u122a\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u12e8\u1235\u12ae\u1272\u123d \u130c\u120d\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u130b\u120a\u123a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u1313\u122b\u1292\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u1266\u1301\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u12eb\u120d\u1273\u12c8\u1240 \u124b\u1295\u124b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u12e8\u12a2\u1275\u12ee\u1352\u12ad \u12a0\u1218\u1270 \u12a0\u1208\u121d \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u1309\u1303\u122d\u1272\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u121b\u1295\u12ad\u1235\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u1203\u12cd\u1233\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u12d5\u1265\u122b\u12ed\u1235\u1325\ufeff"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u1212\u1295\u12f1\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u1201\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u1262\u12ae\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u1262\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u12ad\u122e\u123d\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u1203\u12ed\u1275\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u1200\u1295\u130b\u122a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u12a0\u122d\u1218\u1293\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u1204\u122c\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"\u12ab\u1301\u1295 \u134d\u122c\u1295\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u12a2\u1295\u1274\u122d\u120a\u1295\u1313"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u1303\u121e"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u12a2\u1295\u12f6\u1294\u12e5\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u12e8\u1272\u1264\u1273\u1295 \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u12a5\u1295\u1270\u122d\u120a\u1295\u130d\u12c8"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u12a2\u130d\u1266\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u1232\u1279\u1295\u12ea\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u12a5\u1291\u1352\u12eb\u1245\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"\u12a0\u122d\u1352\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u12a2\u12f6"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"\u1263\u1295\u1303\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u12a0\u12ed\u1235\u120b\u1295\u12f5\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u1323\u120a\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u12a5\u1291\u12ad\u1272\u1271\u1275\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u121b\u120b\u12eb\u120d\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u12f6\u130d\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u1233\u121a"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u1303\u126b\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u121b\u12f1\u1228\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u1209\u120c \u1233\u121a"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u121b\u130b\u1202"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u121b\u12ed\u1270\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u12a2\u1293\u122a \u1233\u121a"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u1306\u122d\u1302\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u1232\u12ad\u1232\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u121b\u12ab\u1233\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"\u12c9 \u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u1235\u12ae\u120d\u1275 \u1233\u121a"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u12ae\u1295\u130e\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u12aa\u12a9\u12e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u121b\u1233\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u12a9\u1295\u12eb\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u12ab\u12db\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u12ab\u120b\u120a\u1231\u1275\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u12ad\u1205\u1218\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u12ab\u1293\u12f3\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u12ab\u1291\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u12ab\u123d\u121a\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u12a9\u122d\u12f5\u123d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u12ae\u121a"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u12ae\u122d\u1292\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u12aa\u122d\u130a\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u1236\u1292\u1295\u12ac"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u120b\u1272\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u1209\u12ad\u12d8\u121d\u1260\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u12e8\u121b\u120b\u12eb\u120b\u121d\u129b \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u130b\u1295\u12f3\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u120a\u121d\u1261\u122d\u130a\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u1272\u1264\u1273\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u120a\u1295\u130b\u120b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u134d\u1229\u120a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u120b\u12a6\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u12a2\u121d\u1354\u122a\u12eb\u120d \u12e8\u1218\u1208\u12aa\u12eb \u1235\u122d\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u1209\u1274\u1295\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u1209\u1263 \u12ab\u1273\u1295\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u120b\u1275\u126a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}\u1363{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u121b\u120b\u130b\u1235\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u121b\u122d\u123b\u120c\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u12e8\u1290\u1263\u122a \u12e9\u1292\u12ae\u12f5 \u12e8\u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u121b\u12a6\u122a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u121b\u1234\u12f6\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u121b\u120b\u12eb\u120b\u121d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u121b\u122b\u1272\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u121b\u120b\u12ed\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u121b\u120d\u1272\u1235\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u1261\u122d\u121b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u12a0\u122d\u121c\u1295\u12eb\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u121e\u12ad\u123b"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u12e8\u1273\u127d\u129b\u12cd \u1230\u122d\u1262\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u1208\u1320\u1245\u120b\u120b \u1309\u12f3\u12ed \u134d\u1208\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u12e8\u1296\u122d\u12cc\u12ed \u1266\u12ad\u121b\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u1230\u121c\u1295 \u1295\u12f4\u1265\u120c"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u1294\u1353\u120a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u1295\u12f6\u1295\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u12f0\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u12e8\u1296\u122d\u12cc\u12ed \u1293\u12ed\u1296\u122d\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u1296\u122d\u12cc\u1302\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u12f0\u1261\u1265 \u1295\u12f0\u1264\u120c"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u1293\u126b\u1306"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u1295\u12eb\u1295\u1303"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u12ab\u127a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u12ab\u1265\u12ed\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u12a6\u12aa\u1273\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u12ab\u1305"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u12ab\u121d\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u121c\u1295\u12f4"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u121c\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u12e8\u12a0\u122d\u1218\u1295\u129b \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u12a6\u122e\u121e\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"\u1234\u1295\u1270\u122b\u120d \u12f1\u1230\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u12a6\u12f2\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u12a6\u1234\u1272\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"\u1262\u1239\u1295\u1351\u122a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u12ab\u1263\u122d\u12f2\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u121e\u122a\u1232\u12e8\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u1235\u122b\u1293\u1295 \u1276\u1295\u130e"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u1351\u1295\u1303\u1265\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u12f1\u12cb\u120b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"\u1263\u12ad\u1205\u1272\u12eb\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u1356\u120a\u123d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u12e8\u12f3\u1295\u130a \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u1353\u123d\u1276\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u1356\u122d\u1279\u130b\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u12a0\u1240\u121b\u1218\u1325 \u12f0\u122d\u12f5\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u12e8\u1265\u122b\u12da\u120d \u1356\u122d\u1279\u130b\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u1273\u12eb\u1355"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u121b\u12a9\u12cb \u121c\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u12e8\u121d\u1295\u12db\u122a \u1245\u122d\u1338\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u1265\u122b\u1305"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u120b\u12a6"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u121c\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"\u12e824 \u1230\u12d3\u1275 \u1235\u122d\u12d3\u1275 (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"\u12e824 \u1230\u12d3\u1275 \u1235\u122d\u12d3\u1275 (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\u1233\u1206\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"\u1265\u122b\u1201\u12ea"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u12e8\u121b\u12eb\u1295\u121b\u122d \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u12b5\u127f\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u1266\u12f6"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u121b\u12ae\u1295\u12f4"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u12a2\u1275\u12ee\u1352\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"\u12e812 \u1230\u12d3\u1275 \u1235\u122d\u12d3\u1275 (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"\u12e812 \u1230\u12d3\u1275 \u1235\u122d\u12d3\u1275 (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u122e\u121b\u1295\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u1229\u1295\u12f2\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u121d\u1295\u12db\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u122e\u121b\u1292\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u12e8\u12a6\u122a\u12eb\u129b \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u12e8\u127b\u12ed\u1295\u129b \u12a0\u1235\u122d\u12ee\u123d \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u122b\u123d\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"\u12a0\u12ae\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u12aa\u1295\u12eb\u122d\u12cb\u1295\u12f5\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\u1265\u120a\u1235\u12ed\u121d\u1266\u120d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u12ab\u1261\u1268\u122d\u12f2\u12eb\u1291"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u121a\u12ad\u121b\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u1231\u12a9\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u12a5\u1295\u130d\u120a\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u1233\u1295\u1235\u12ad\u122a\u1275\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u1233\u122d\u12f2\u1295\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u1232\u1295\u12f5\u1202\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u1233\u121a"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u121a\u1293\u1295\u130d\u12ab\u1263\u12a1"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u1233\u1295\u130e\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u1230\u122d\u1266-\u12ad\u122e\u12a4\u123d\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u1232\u1295\u1203\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u1235\u120e\u126b\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u1235\u120e\u126a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u1233\u121e\u12a0\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u123e\u1293\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u1231\u121b\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u12e8\u12a0\u1228\u1262\u12ad-\u12a2\u1295\u12f2\u12ad \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u12a0\u120d\u1263\u1295\u12eb\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u1230\u122d\u1265\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u1235\u12cb\u1272\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u12e8\u1202\u1233\u1265 \u121d\u1295\u12db\u122a \u1245\u122d\u1338\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u12f0\u1261\u1263\u12ca \u1236\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u1231\u12f3\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u1235\u12ca\u12f5\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u1235\u12cb\u1202\u120a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u12e8\u1263\u1205\u120b\u12ca \u127b\u12ed\u1295\u129b \u12e8\u1308\u1295\u12d8\u1265 \u1290\u12ad \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u12a2\u1262\u1266"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u12a2\u1263\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u1273\u121a\u120d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u12a5\u1232\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u1261\u122a\u12eb\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a5\u1232\u12eb"_s)
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
			$of("tg"_s),
			$of(u"\u1273\u1302\u12aa\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u1273\u12ed\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u1275\u130d\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u1261\u130a\u1294\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u12ae\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u12e8\u12ab\u1293\u12f3 \u12a5\u1295\u130d\u120a\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u1271\u122d\u12ad\u121c\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u1273\u130b\u120e\u1308\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u133d\u12cb\u1293\u12ca\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u1276\u1295\u130b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"\u1261\u1209"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u1306\u120b \u134e\u1295\u12eb\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u12e8\u1303\u1353\u1295\u129b \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u1271\u122d\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u133e\u1295\u130b\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u12ae\u121e\u122a\u12eb\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u1273\u1273\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u12f5\u12e9\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u1275\u12ca\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u1273\u1202\u1273\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u121d\u12d5\u122b\u1263\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u1230\u121c\u1293\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u12f3\u12db\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u121d\u1235\u122b\u1243\u12ca \u12a0\u12cd\u122e\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u12a1\u12ca\u130d\u1201\u122d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u12e8\u130b\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u12e9\u12ad\u122c\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\u12e8\u12ae\u1355\u1272\u12ad \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u12a1\u122d\u12f1\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u12ab\u120d\u121b\u12ed\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u12a1\u12dd\u1264\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u12ad\u1203\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u12e8\u1273\u127d\u129b\u12cd \u1233\u12ad\u1230\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u126c\u1295\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u12e8\u121a\u1295\u1309 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u126a\u12e8\u1275\u1293\u121d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u12ae\u12ed\u122b \u127a\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u12e8\u1230\u12d3\u1275 \u12d1\u12f0\u1275 (12 \u12c8\u12ed\u121d 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u126e\u120b\u1351\u12ad\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u12ad\u120b\u1232\u12ad \u1294\u12ed\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u12aa\u127c"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"\u127a\u121d\u1266\u122b\u12de \u1203\u12ed\u120b\u1295\u12f5 \u12a9\u1279\u12cb"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u12cb\u120e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u130b\u1309\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u1232\u122a\u12eb\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"\u130b\u1295 \u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u12ce\u120e\u134d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u1218\u12f0\u1260\u129b \u12e8\u121e\u122e\u12ae \u1273\u121b\u12da\u130d\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u12d8\u1218\u1293\u12ca \u1218\u12f0\u1260\u129b \u12d3\u1228\u1265\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u121b\u1292\u1351\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u120b\u1272\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u1240\u1208\u120d \u12eb\u1209 \u12e8\u127b\u12ed\u1295\u129b \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u12e8\u1263\u1205\u120b\u12ca \u127b\u12ed\u1295\u129b \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u12de\u1233\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u12e8\u122e\u121b\u1295 \u1295\u12d1\u1235 \u1206\u1204 \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u1265\u120a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u121e\u1203\u12cd\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u12ab\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u12ed\u12f2\u123d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u121e\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u12ee\u1229\u1263\u12ca\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"\u1270\u1208\u121d\u12f7\u12ca \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u12e8\u121c\u12ad\u1232\u12ae \u1235\u1353\u1295\u123d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u126b\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u12e1\u12cb\u1295\u130d\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u12ab\u1208\u1295\u1302\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u1266\u1356\u121e\u134e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u1218\u1235\u1218\u122d \u1218\u1235\u1260\u122a\u12eb \u1245\u1325"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u12d9\u1209\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u12e8\u1235\u120d\u12ad \u12f0\u1265\u1270\u122d \u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u1306\u122d\u1302\u12eb\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u12aa\u121d\u1261\u1295\u12f1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u12e8\u1303\u1353\u1295\u129b \u12e8\u1308\u1295\u12d8\u1265 \u1290\u12ad \u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u130d\u12d5\u12dd\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u12f3\u130d\u121d \u12e8\u1270\u1348\u1320\u1228 \u12e8\u12f5\u122d\u12f5\u122d \u1245\u12f0\u121d \u1270\u12a8\u1270\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u12a2\u1266\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u1240\u1208\u120d \u12eb\u1208 \u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u12ae\u121a \u1354\u122d\u121d\u12eb\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u12ae\u1295\u12ab\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u1263\u1205\u120b\u12ca \u127b\u12ed\u1295\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u12ad\u1354\u120c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u12e8\u12ad\u1205\u1218\u122d \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u12a2\u120e\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u1219\u1295\u12f3\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u12e8\u1309\u122d\u1219\u12aa \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u1263\u1208\u1265\u12d9 \u124b\u1295\u124b\u12ce\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u12ab\u12f6"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u12e8\u1218\u1208\u12aa\u12eb \u1235\u122d\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u12ad\u122a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u1305\u120d\u1260\u122d\u1275\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u12ab\u122a\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"\u12ab\u12e9\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u12e8\u1273\u121a\u120d \u12a0\u1203\u12de\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u12ab\u122b\u127b\u12ed-\u1263\u120d\u12ab\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u12a2\u1295\u1309\u123d"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u12f3\u122a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u12ab\u1228\u120a\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u12a4\u134a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u1241\u1325\u122e\u127d"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u12a9\u1229\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u123b\u121d\u1263\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u1270\u1209\u1309"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u1263\u134a\u12eb"_s)
		})
	}));
	return data;
}

LocaleNames_am::LocaleNames_am() {
}

$Class* LocaleNames_am::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_am, name, initialize, &_LocaleNames_am_ClassInfo_, allocate$LocaleNames_am);
	return class$;
}

$Class* LocaleNames_am::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun