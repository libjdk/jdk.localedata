#include <sun/util/resources/cldr/ext/TimeZoneNames_am.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_am_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_am::*)()>(&TimeZoneNames_am::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_am_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_am",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_am_MethodInfo_
};

$Object* allocate$TimeZoneNames_am($Class* clazz) {
	return $of($alloc(TimeZoneNames_am));
}

void TimeZoneNames_am::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_am::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\u130d\u122a\u1295\u12ca\u127d \u121b\u12d5\u12a8\u120b\u12ca \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"\u12e8\u12a0\u1352\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u1352\u12eb \u12e8\u1240\u1295 \u130a\u12dc \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u1352\u12eb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"\u12e8\u12a9\u12ad \u12f0\u1234\u1276\u127d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a9\u12ad \u12f0\u1234\u1276\u127d \u130d\u121b\u123d \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a9\u12ad \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"\u12e8\u12a9\u1263 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a9\u1263 \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12a9\u1263 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"\u12e8\u134a\u1302 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u134a\u1302 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u134a\u1302 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u12e8\u1263\u1205\u1228\u1230\u120b\u1324 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"\u12e8\u1206\u126d\u12f5 \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1206\u126d\u12f5 \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1206\u126d\u12f5 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u12e8\u12a2\u122b\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a2\u122b\u1295 \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a2\u122b\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"\u12e8\u1292\u12e9\u12cc \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"\u12e8\u12a6\u121d\u1235\u12ad \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a6\u121d\u1235\u12ad \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a6\u121d\u1235\u12ad \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"\u12e8\u1354\u1229 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1354\u1229 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1354\u1229 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"\u12e8\u1279\u12ad \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"\u12e8\u12cc\u12ad \u12f0\u1234\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\u12e8\u127a\u120a \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u127a\u120a \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u127a\u120a \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u12e8\u127b\u12ed\u1293 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u127b\u12ed\u1293 \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u127b\u12ed\u1293 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"\u12e8\u12ae\u12ae\u1235 \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"\u12e8\u12f4\u126a\u1235 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u12e8\u1205\u1295\u12f5 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\u12e8\u1303\u1353\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1303\u1353\u1295 \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1303\u1353\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\u12e8\u12ae\u122a\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12ae\u122a\u12eb \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12ae\u122a\u12eb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"\u12e8\u1293\u12cd\u1229 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"\u12e8\u1294\u1353\u120d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"\u12e8\u1353\u120b\u12cd \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"\u12e8\u1233\u121e\u12cb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1233\u121e\u12cb \u12e8\u1260\u130b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1233\u121e\u12cb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"\u12e8\u1232\u12ee\u12cb \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"\u12e8\u1276\u1295\u130b \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1276\u1295\u130b \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1276\u1295\u130b \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"\u12e8\u12a0\u120b\u1235\u12ab \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u120b\u1235\u12ab \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u120b\u1235\u12ab \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"\u12e8\u12a0\u121b\u12de\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u121b\u12de\u1295 \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u121b\u12de\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"\u12e8\u12a0\u1293\u12f2\u12ed\u122d \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u1293\u12f5\u12ed\u122d \u12e8\u1260\u130b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u1293\u12f5\u12ed\u122d \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"\u12e8\u12a0\u12de\u1228\u1235 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u12de\u1228\u1235 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u12de\u1228\u1235 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"\u12e8\u1261\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"\u12e8\u1265\u1229\u1294\u12ed \u12f3\u1229\u1233\u120b\u121d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"\u12e8\u12a2\u1235\u1270\u122d \u12f0\u1234\u1275 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a2\u1235\u1270\u122d \u12f0\u1234\u1275 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a2\u1235\u1270\u122d \u12f0\u1234\u1275 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\u12e8\u1309\u12eb\u1293 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u12e8\u12a5\u1235\u122b\u12a4\u120d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a5\u1235\u122b\u12a4\u120d \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a5\u1235\u122b\u12a4\u120d \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"\u12e8\u12ae\u1235\u122b\u12a4 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"\u12e8\u121b\u12cd\u1230\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\u12e8\u121e\u1235\u12ae \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121e\u1235\u12ae \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121e\u1235\u12ae \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"\u12e8\u1356\u1293\u1354 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"\u12e8\u1233\u121b\u122b \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1233\u121b\u122b \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1233\u121b\u122b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"\u12e8\u1273\u1202\u1272 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"\u12e8\u1273\u12ed\u1354\u12ed \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1273\u12ed\u1354\u12ed \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1273\u12ed\u1354\u12ed \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"\u12e8\u1271\u126b\u1209 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"\u12e8\u126e\u1235\u1276\u12ad \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"\u12e8\u12cb\u120a\u1235 \u12a5\u1293 \u1349\u1271\u1293 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u12e8\u12d3\u1228\u1262\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12d3\u1228\u1262\u12eb \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12d3\u1228\u1262\u12eb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\u12e8\u12a0\u122d\u1218\u1292\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u122d\u1218\u1292\u12eb \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u122d\u1218\u1292\u12eb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"\u12e8\u1266\u120a\u126a\u12eb \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"\u12e8\u127b\u1273\u121d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u127b\u1273\u121d \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u127b\u1273\u121d \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"\u12e8\u1270\u1240\u1290\u1263\u1260\u1228 \u1201\u1208\u1308\u1265 \u1230\u12d3\u1275"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\u12e8\u12a2\u12b3\u12f6\u122d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"\u12e8\u130b\u121d\u1262\u12e8\u122d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u12e8\u1302\u12ee\u122d\u1302\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1302\u12ee\u122d\u1302\u12eb \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1302\u12ee\u122d\u1302\u12eb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\u12e8\u12a2\u122d\u12a9\u1275\u1235\u12ad \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12a2\u122d\u12a9\u1275\u1235\u12ad \u12e8\u1260\u130b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a2\u122d\u12a9\u1275\u1235\u12ad \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"\u12e8\u121b\u130b\u12f3\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121b\u130b\u12f3\u1295 \u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121b\u130b\u12f3\u1295 \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"\u12e8\u121a\u12eb\u1295\u121b\u122d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"\u12e8\u1296\u122d\u134e\u120d\u12ad \u12f0\u1234\u1276\u127d \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1296\u122d\u134e\u120d\u12ad \u12f0\u1234\u1276\u127d \u12e8\u1240\u1295 \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1296\u122d\u134e\u120d\u12ad \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\u12e8\u1348\u122d\u1293\u1295\u12f6 \u12f2 \u1296\u122e\u1295\u127b \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1348\u122d\u1293\u1295\u12f6 \u12f2 \u1296\u122e\u1295\u1203 \u12e8\u1260\u130b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1296\u122e\u1295\u1203 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"\u12e8\u122c\u12e9\u1292\u12e8\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"\u12e8\u122e\u1274\u122b \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"\u12e8\u1230\u1208\u121e\u1295 \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"\u12e8\u1276\u12ac\u120b\u12cd \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"\u12e8\u12a1\u122b\u1313\u12ed \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a1\u122b\u1313\u12ed \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a1\u122b\u1313\u12ed \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"\u12e8\u126b\u1297\u1271 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u126b\u1297\u1271 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u126b\u1297\u1271 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\u12eb\u12a9\u1275\u1235\u12ad \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12eb\u12a9\u1275\u1235\u12ad \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12eb\u12a9\u1275\u1235\u12ad \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\u12e8\u12a0\u1275\u120b\u1295\u1272\u12ad \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u1275\u120b\u1295\u1272\u12ad \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u1275\u120b\u1295\u1272\u12ad \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"\u12e8\u1265\u122b\u1232\u120a\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1265\u122b\u12da\u120b \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1265\u122b\u12da\u120b\u12ca \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"\u12e8\u127b\u121e\u122e \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"\u12e8\u12ae\u120e\u121d\u1262\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12ae\u120e\u121d\u1262\u12eb \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12ae\u120e\u121d\u1262\u12eb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"\u12e8\u134b\u120d\u12ad\u120b\u1295\u12f5 \u12f0\u1234\u1276\u127d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u134b\u120d\u12ad\u120b\u1295\u12f5 \u12f0\u1234\u1276\u127d \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u134b\u120d\u12ad\u120b\u1295\u12f5 \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"\u12e8\u121b\u120c\u12ed\u12e2\u12eb \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\u12e8\u121b\u120d\u12f2\u126d\u1235 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"\u12e8\u12a1\u120b\u1295 \u1263\u1276\u122d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a1\u120b\u1295 \u1263\u1276\u122d \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a1\u120b\u1295 \u1263\u1276\u122d \u130a\u12dc"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\u12e8\u1353\u12aa\u1235\u1273\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1353\u12aa\u1235\u1273\u1295 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1353\u12aa\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"\u12e8\u1353\u122b\u1313\u12ed \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1353\u122b\u1313\u12ed \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1353\u122b\u1313\u12ed \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"\u12e8\u1352\u1275\u12ab\u12ed\u122d\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"\u12e8\u1233\u12ad\u1203\u120a\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1233\u12ad\u1203\u120a\u1295 \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1233\u12ad\u1203\u120a\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\u12e8\u1231\u122a\u1293\u121d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"\u12e8\u12a0\u122d\u1300\u1295\u1272\u1293 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u122d\u1300\u1295\u1272\u1293 \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u122d\u1300\u1295\u1272\u1293 \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"\u12e8\u1308\u1293 \u12f0\u1234\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\u12e8\u130b\u120b\u1353\u130e\u1235 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"\u12e8\u1206\u1295\u130d \u12ae\u1295\u130d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1206\u1295\u130d \u12ae\u1295\u130d \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1206\u1295\u130d \u12ae\u1295\u130d \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"\u12e8\u12a2\u1295\u12f6\u127b\u12ed\u1293 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"\u12e8\u1354\u1275\u122e\u1353\u126d\u120e\u1235\u12aa - \u12ab\u121d\u127b\u1275\u1235\u12aa \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1354\u1275\u122e\u1353\u126d\u120e\u1235\u12aa - \u12ab\u121d\u127b\u1275\u1235\u12aa \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12ab\u121d\u127b\u1275\u12ab \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"\u12e8\u12aa\u122d\u130a\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"\u12e8\u120e\u122d\u12f5 \u1206\u12cc \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u120e\u122d\u12f5 \u1206\u12cc \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u120e\u122d\u12f5 \u1206\u12cc \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"\u12e8\u121b\u122d\u12b4\u1233\u1235 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"\u12e8\u121b\u12cd\u122a\u123a\u12e8\u1235 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121b\u12cd\u122a\u123a\u12e8\u1235 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121b\u12cd\u122a\u123a\u12e8\u1235 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"\u12e8\u1232\u1295\u130b\u1352\u122d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"\u12e8\u126c\u1294\u12dd\u12cc\u120b \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"\u12e8\u126e\u120d\u130e\u122b\u12f5 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u126b\u120d\u130e\u122b\u12f5 \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u126e\u120d\u130e\u122b\u12f5 \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\u12e8\u12a0\u12d8\u122d\u1263\u1303\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u12d8\u122d\u1263\u1303\u1295 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a0\u12d8\u122d\u1263\u1303\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"\u12e8\u1263\u1295\u130d\u120b\u12f4\u123d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1263\u1295\u130d\u120b\u12f4\u123d \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1263\u1295\u130d\u120b\u12f4\u123d \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"\u12e8\u12ac\u1355 \u1268\u122d\u12f4 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12ac\u1355 \u1268\u122d\u12f4 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12ac\u1355 \u1268\u122d\u12f4 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"\u12e8\u121d\u1235\u122b\u1245 \u1272\u121e\u122d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"\u12e8\u1234\u1238\u120d\u1235 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"\u12e8\u1273\u1302\u12aa\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"\u12e8\u12a1\u12dd\u1264\u12aa\u1235\u1273\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a1\u12dd\u1264\u12aa\u1235\u1273\u1295 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u12a1\u12dd\u1264\u12aa\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\u12e8\u12a0\u134d\u130b\u1292\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"\u12e8\u12ad\u122b\u1235\u1296\u12ed\u12a0\u122d\u1235\u12ad \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12ad\u122b\u1235\u1296\u12eb\u122d\u1235\u12ad \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12ad\u122b\u1235\u1296\u12eb\u122d\u1235\u12ad \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u12e8\u1292\u12cd \u12da\u120b\u1295\u12f5 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1292\u12cd \u12da\u120b\u1295\u12f5 \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1292\u12cd \u12da\u120b\u1295\u12f5 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"\u12e8\u1296\u126e\u1232\u1262\u122d\u1235\u12ad \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1296\u126e\u1232\u1265\u122a\u1235\u12ad \u12e8\u1260\u130b \u1230\u12a0\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1296\u126e\u1232\u1265\u122a\u1235\u12ad \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"\u12e8\u134a\u120a\u1352\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u134a\u120a\u1352\u1295 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u134a\u120a\u1352\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"\u12e8\u126a\u120b\u12f2\u126e\u1235\u1276\u12ad \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u126d\u120b\u12f2\u126e\u1235\u1276\u12ad \u12e8\u1260\u130b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u126d\u120b\u12f2\u126e\u1235\u1276\u12ad \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"\u12e8\u1205\u1295\u12f5 \u12cd\u1245\u12eb\u1296\u1235 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"\u12e8\u120b\u12ed\u1295 \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"\u12e8\u1292\u12cd\u134b\u12cd\u1295\u12f5\u120b\u1295\u12f5 \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1292\u12cd\u134b\u12cd\u1295\u12f5\u120b\u1295\u12f5 \u12e8\u1240\u1295 \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1292\u12cd\u134b\u12cd\u1295\u12f5\u120b\u1295\u12f5 \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"\u12e8\u1271\u122d\u12ad\u1218\u1292\u1235\u1273\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1271\u122d\u12ad\u1218\u1292\u1235\u1273\u1295 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1271\u122d\u12ad\u1218\u1292\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"\u12e8\u1348\u1228\u1295\u1233\u12ed \u1309\u12eb\u1293 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"\u12e8\u1292\u12cd \u12ab\u120c\u12f6\u1292\u12eb \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1292\u12cd \u12ab\u120c\u12f6\u1292\u12eb \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1292\u12cd \u12ab\u120c\u12f6\u1292\u12eb \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"\u12e8\u12f0\u1261\u1265 \u1302\u12ee\u122d\u1302\u12eb \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"\u12e8\u12e8\u12ab\u1270\u122a\u1295\u1260\u122d\u130d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12e8\u12ab\u1270\u122a\u1295\u1260\u122d\u130d \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12e8\u12ab\u1270\u122a\u1295\u1260\u122d\u130d \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"\u12e8\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u134d\u122a\u12ab \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"\u12e8\u121d\u1235\u122b\u1245 \u12a0\u134d\u122a\u12ab \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"\u12e8\u121d\u12d5\u122b\u1265 \u12a0\u134d\u122a\u12ab \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u12d5\u122b\u1265 \u12a0\u134d\u122a\u12ab \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u12d5\u122b\u1265 \u12a0\u134d\u122a\u12ab \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"\u12e8\u12f1\u121e\u1295\u1275-\u12f1\u122d\u126a\u120d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u12e8\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u12cd\u122e\u1353 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u12cd\u122e\u1353 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u12cd\u122e\u1353 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u12e8\u121d\u1235\u122b\u1243\u12ca \u12a0\u12cd\u122e\u1353 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u1235\u122b\u1243\u12ca \u12a0\u12cd\u122e\u1353 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u1235\u122b\u1243\u12ca \u12a0\u12cd\u122e\u1353 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u12e8\u121d\u12d5\u122b\u1263\u12ca \u12a0\u12cd\u122e\u1353 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u12d5\u122b\u1263\u12ca \u12a0\u12cd\u122e\u1353 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u12d5\u122b\u1263\u12ca \u12a0\u12cd\u122e\u1353 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"\u12e8\u121c\u12ad\u1232\u12ae \u1353\u1232\u134a\u12ad \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121c\u12ad\u1232\u12ae \u1353\u1232\u134a\u12ad \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121c\u12ad\u1232\u12ae \u1353\u1232\u134a\u12ad \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"\u12e8\u12f0\u1261\u1265 \u12a0\u134d\u122a\u12ab \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u12e8\u1230\u121c\u1295 \u12a0\u121c\u122a\u12ab \u12e8\u1218\u12ab\u12a8\u1208\u129b \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1218\u12ab\u12a8\u1208\u129b \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1230\u121c\u1295 \u12a0\u121c\u122a\u12ab \u12e8\u1218\u12ab\u12a8\u1208\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u121d\u1235\u122b\u1243\u12ca \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u121d\u1235\u122b\u1243\u12ca \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u121d\u1235\u122b\u1243\u12ca \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u12e8\u1353\u1235\u134a\u12ad \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1353\u1235\u134a\u12ad \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1353\u1235\u134a\u12ad \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"\u12e8\u1348\u1228\u1295\u1233\u12ed \u12f0\u1261\u1263\u12ca \u12a5\u1293 \u12a0\u1295\u1273\u122d\u12ad\u1272\u12ad \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"\u12e8\u1302\u120d\u1260\u122d\u1275 \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"\u12e8\u1203\u12cb\u12ed \u12a0\u120c\u12a1\u1275 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1203\u12cb\u12ed \u12a0\u120c\u12a1\u1275 \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1203\u12cb\u12ed \u12a0\u120c\u12a1\u1275 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"\u12e8\u134a\u1292\u12ad\u1235 \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"\u1245\u12f1\u1235 \u12e8\u1352\u12ec\u122d \u12a5\u1293 \u121a\u12b4\u120e\u1295 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u1245\u12f1\u1235 \u12e8\u1352\u12ec\u122d \u12a5\u1293 \u121a\u12b4\u120e\u1295 \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u1245\u12f1\u1235 \u12e8\u1352\u12ec\u122d \u12a5\u1293 \u121a\u12b4\u120e\u1295 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u12e8\u1270\u122b\u122b \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1270\u122b\u122b \u12e8\u1240\u1295\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1270\u122b\u122b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"\u12e8\u121b\u122d\u123b\u120d \u12f0\u1234\u1276\u127d \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"\u1230\u121c\u1293\u12ca \u121d\u12a5\u122b\u1265 \u12e8\u121c\u12ad\u1232\u12ae \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u1230\u121c\u1293\u12ca \u121d\u12a5\u122b\u1265 \u12e8\u121c\u12ad\u1232\u12ae \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u1230\u121c\u1293\u12ca \u121d\u12a5\u122b\u1265 \u12e8\u121c\u12ad\u1232\u12ae \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"\u12e8\u1353\u1357 \u1292\u12cd \u130a\u1292 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u1218\u12ab\u12a8\u1208\u129b \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u1218\u12ab\u12a8\u1208\u129b \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u121d\u12d5\u122b\u1263\u12ca \u1218\u12f0\u1260\u129b \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u121d\u12d5\u122b\u1263\u12ca \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121d\u12d5\u122b\u1263\u12ca \u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u12e8\u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u121d\u1235\u122b\u1243\u12ca \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u121d\u1235\u122b\u1243\u12ca \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u121d\u1235\u122b\u1243\u12ca \u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"\u12e8\u121d\u1235\u122b\u1245 \u130d\u122a\u1295\u120b\u1295\u12f5 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u1235\u122b\u1245 \u130d\u122a\u1295\u120b\u1295\u12f5 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u1235\u122b\u1245 \u130d\u122a\u1295\u120b\u1295\u12f5 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"\u12e8\u121d\u12d5\u122b\u1265 \u130d\u122a\u1295\u120b\u1295\u12f5 \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u12d5\u122b\u1265 \u130d\u122a\u1295\u120b\u1295\u12f5 \u12ad\u1228\u121d\u1275 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u12e8\u121d\u12d5\u122b\u1265 \u130d\u122a\u1295\u120b\u1295\u12f5 \u1230\u12d3\u1275"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"\u12e8\u1218\u12ab\u12a8\u1208\u129b\u12cd \u12a2\u1295\u12f6\u1294\u12e2\u12eb \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"\u12e8\u121d\u1235\u122b\u1243\u12ca \u12a2\u1295\u12f6\u1294\u12e2\u12eb \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"\u12e8\u121d\u12d5\u122b\u1263\u12ca \u12a2\u1295\u12f6\u1294\u12e2\u12eb \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\u12e8\u121d\u1235\u122b\u1245 \u12ab\u12db\u12aa\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"\u12e8\u121d\u12d5\u122b\u1265 \u12ab\u12db\u12aa\u1235\u1273\u1295 \u1230\u12d3\u1275"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u1218\u12ab\u12a8\u1208\u129b \u121d\u1235\u122b\u1243\u12ca \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u1218\u12ab\u12a8\u1208\u129b\u12cd \u121d\u1235\u122b\u1245 \u12e8\u1240\u1295 \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s,
		u"\u12e8\u12a0\u12cd\u1235\u1275\u122b\u120a\u12eb \u1218\u12ab\u12a8\u1208\u129b \u121d\u1235\u122b\u1243\u12ca \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(Israel)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Etc/GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of(Azerbaijan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dili"_s),
			$of(East_Timor)
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of(Hovd)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of(Afghanistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Almaty"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Anadyr"_s),
			$of(Anadyr)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Atyrau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of(Brunei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of(Philippines)
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Saigon"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(Taipei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(Iran)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of(Seychelles)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Yap"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bangkok"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of(Kyrgystan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(Irkutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jakarta"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of(Magadan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Rangoon"_s),
			$of(Myanmar)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of(Georgia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimphu"_s),
			$of(Bhutan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of(Cocos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of(Fiji)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guam"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of(Niue)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Truk"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wake"_s),
			$of(Wake)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Banjul"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bissau"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Douala"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(Turkmenistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dushanbe"_s),
			$of(Tajikistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jayapura"_s),
			$of(Indonesia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(Nepal)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Makassar"_s),
			$of(Indonesia_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qostanay"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of($$new($StringArray, {
				u"\u130d\u122a\u1295\u12ca\u127d \u121b\u12d5\u12a8\u120b\u12ca \u1230\u12d3\u1275"_s,
				""_s,
				u"\u12e8\u12a0\u12ed\u122a\u123d \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of($$new($StringArray, {
				u"\u130d\u122a\u1295\u12ca\u127d \u121b\u12d5\u12a8\u120b\u12ca \u1230\u12d3\u1275"_s,
				""_s,
				u"\u12e8\u1265\u122a\u1275\u123d \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Samara"_s),
			$of(Samara)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Chagos"_s),
			$of(Indian_Ocean)
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of(Vanuatu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of(Nauru)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Palau"_s),
			$of(Palau)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of(Colombia)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of(Guyana)
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(Cuba)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of(Bolivia)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(Hong_Kong)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of(Kamchatka)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pontianak"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vientiane"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of($$new($StringArray, {
				u"\u130d\u122a\u1295\u12ca\u127d \u121b\u12d5\u12a8\u120b\u12ca \u1230\u12d3\u1275"_s,
				""_s,
				u"\u12e8\u1265\u122a\u1275\u123d \u12e8\u1260\u130b \u1230\u12d3\u1275 \u12a0\u1246\u1323\u1320\u122d"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of(Reunion)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(Easter)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of(Kosrae)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Majuro"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of(New_Caledonia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Ponape"_s),
			$of(Ponape)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tahiti"_s),
			$of(Tahiti)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of(Gilbert_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of(Wallis)
		}),
		$$new($ObjectArray, {
			$of("Africa/Blantyre"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Sao_Tome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Timbuktu"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Windhoek"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Caracas"_s),
			$of(Venezuela)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of(French_Guiana)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(Greenland_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(Noronha)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Phnom_Penh"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of(Azores)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of(Australia_CentralWestern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of(Maldives)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(Chatham)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of(Tokelau)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Gambier"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of(Norfolk)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of(Paraguay)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of(Pierre_Miquelon)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(Chile)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Davis"_s),
			$of(Davis)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Syowa"_s),
			$of(Syowa)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(Novosibirsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of(Falkland)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(Volgograd)
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of(Christmas)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of(French_Southern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of(Tuvalu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of(Mawson)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of(Vostok)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of(Phoenix_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kwajalein"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of(Marquesas)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of(Cook)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of(Tonga)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of(Uruguay)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of(Suriname)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Rothera"_s),
			$of(Rothera)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of(Yekaterinburg)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of(Line_Islands)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of(Cape_Verde)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(Lord_Howe)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(Mexico_Northwest)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(Greenland_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Port_Moresby"_s),
			$of(Papua_New_Guinea)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/South_Georgia"_s),
			$of(South_Georgia)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of(DumontDUrville)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aden"_s),
			$of(u"\u12a4\u12f0\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"\u1263\u12a9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of(u"\u12f2\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"\u130b\u12db"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hovd"_s),
			$of(u"\u1206\u126d\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"\u12a6\u121d\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Oral"_s),
			$of(u"\u12a6\u122b\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Amman"_s),
			$of(u"\u12a0\u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of(u"\u12a0\u12a9\u1273\u12a1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"\u127a\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of(u"\u12f3\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"\u12f1\u1263\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"\u12ab\u1261\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of(u"\u121b\u12ab\u12a1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of(u"\u12b3\u1273\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of(u"\u1234\u12a6\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of(u"\u1276\u12aa\u12ee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tomsk"_s),
			$of(u"\u1276\u121d\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Juba"_s),
			$of(u"\u1301\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"\u120e\u121c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"\u12a0\u120d\u121b\u1275\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"\u12a0\u1293\u12f5\u12ed\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of(u"\u12a0\u12a9\u1276\u1264"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of(u"\u12a0\u1275\u12ed\u122b\u12a1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of(u"\u1264\u1229\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of(u"\u1265\u1229\u1293\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"\u12ac\u1265\u122e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of(u"\u12a9\u12cc\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of(u"\u121b\u1292\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of(u"\u1219\u1235\u12ab\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of(u"\u122a\u12eb\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"\u1206 \u127a \u121a\u1295\u1205 \u12a8\u1270\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of(u"\u1273\u12ed\u1353\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of(u"\u1274\u1205\u122b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"\u12a1\u1229\u121d\u12aa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u12eb\u120d\u1273\u12c8\u1240 \u12a8\u1270\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of(u"\u12aa\u12e8\u126d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of(u"\u12a6\u1235\u120e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of(u"\u122a\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of(u"\u122e\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of(u"\u121b\u1204"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of(u"\u12a0\u12ad\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"\u12ab\u12ed\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of(u"\u1232\u12a1\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"\u12f3\u12ab\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of(u"\u120c\u130e\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"\u1271\u1292\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of(u"\u12a0\u12f3\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lima"_s),
			$of(u"\u120a\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nome"_s),
			$of(u"\u1296\u121c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"\u1263\u130d\u12f3\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"\u1263\u1205\u122c\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of(u"\u1263\u1295\u12ae\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"\u1263\u122d\u1293\u12a1\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"\u1262\u123d\u12ac\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"\u12ae\u120e\u121d\u1266"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"\u12a2\u122d\u12a9\u1275\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of(u"\u1303\u12ab\u122d\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"\u12ab\u122b\u127a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of(u"\u12a9\u127a\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"\u121b\u130b\u12f3\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of(u"\u1292\u12ae\u1232\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of(u"\u12eb\u1295\u130e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of(u"\u1275\u1265\u120a\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"\u1272\u121d\u1349"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"\u12eb\u12a9\u1275\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"\u12ed\u122c\u126b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kirov"_s),
			$of(u"\u12aa\u122e\u126d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of(u"\u121b\u120d\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of(u"\u121a\u1295\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Paris"_s),
			$of(u"\u1353\u122a\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of(u"\u1236\u134a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of(u"\u126b\u12f1\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of(u"\u12ae\u12ae\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"\u12a0\u1352\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of(u"\u134a\u1302"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of(u"\u1309\u12a0\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of(u"\u1292\u12cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of(u"\u1279\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of(u"\u12cb\u12ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"\u12a0\u1235\u1218\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of(u"\u1263\u121b\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of(u"\u1263\u1295\u1309\u12a2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of(u"\u1263\u1295\u1301\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of(u"\u1262\u1233\u12a6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of(u"\u12f1\u12a0\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of(u"\u1203\u122b\u122c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of(u"\u12aa\u130b\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of(u"\u1209\u12a0\u1295\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of(u"\u1209\u1233\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Malabo"_s),
			$of(u"\u121b\u120b\u1261"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maputo"_s),
			$of(u"\u121b\u1351\u1271"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of(u"\u121b\u1234\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Niamey"_s),
			$of(u"\u1292\u12eb\u121c\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of(u"\u12a0\u1229\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of(u"\u1263\u1202\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of(u"\u1264\u1208\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of(u"\u1266\u12ed\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jujuy"_s),
			$of(u"\u1301\u1301\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sitka"_s),
			$of(u"\u1232\u1275\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"\u1271\u120c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"\u12a0\u123d\u130b\u1263\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of(u"\u12ae\u120d\u12ab\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"\u12f0\u121b\u1235\u1246"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"\u12f0\u123b\u1295\u1264"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of(u"\u1303\u12eb\u1351\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of(u"\u12ab\u1275\u121b\u1295\u12f1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"\u12ab\u1295\u12f2\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of(u"\u121b\u12ab\u1233\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qostanay"_s),
			$of(u"\u12ae\u1235\u1273\u1293\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"\u1233\u12ad\u1203\u120a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of(u"\u123b\u1295\u130b\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"\u1273\u123d\u12ac\u1295\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"\u12a1\u1235\u1275-\u1294\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"\u12a0\u1274\u1295\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of(u"\u1260\u122d\u120a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of(u"\u12f0\u1265\u120a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of(u"\u1300\u122d\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of(u"\u120a\u12dd\u1260\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of(u"\u1208\u1295\u12f0\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of(u"\u121b\u12f5\u122a\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of(u"\u121e\u1293\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"\u121e\u1235\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of(u"\u1355\u122b\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"\u1233\u121b\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of(u"\u1235\u12ae\u1355\u12e8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of(u"\u1274\u122b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of(u"\u126a\u12e8\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of(u"\u12cb\u122d\u1236\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of(u"\u12db\u130d\u122c\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"\u12d9\u122a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"\u127b\u130e\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of(u"\u12ae\u121e\u122e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Efate"_s),
			$of(u"\u12a2\u134b\u1274"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of(u"\u1293\u12cd\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Palau"_s),
			$of(u"\u1353\u120b\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Abidjan"_s),
			$of(u"\u12a0\u1262\u1303\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of(u"\u12a0\u120d\u1300\u122d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of(u"\u12ae\u1293\u12ad\u122c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kampala"_s),
			$of(u"\u12ab\u121d\u1353\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mbabane"_s),
			$of(u"\u121d\u1263\u1263\u1294"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of(u"\u1293\u12ed\u122e\u1262"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"\u1275\u122a\u1356\u120a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"\u1264\u120a\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"\u1266\u130e\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of(u"\u12ab\u1295\u12a9\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"\u12ab\u12ed\u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"\u12a9\u12e8\u12a0\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"\u12f3\u12cd\u1230\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of(u"\u12f4\u1295\u1268\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"\u1309\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of(u"\u1203\u126b\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"\u12a2\u1291\u126a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of(u"\u1301\u1292\u12e9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"\u120b \u1353\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"\u121c\u1232\u12a6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of(u"\u121b\u1293\u12a1\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of(u"\u121c\u122a\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of(u"\u1293\u1233\u12cd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"\u1353\u1293\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of(u"\u1228\u1232\u134d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"\u1228\u1302\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of(u"\u134b\u121b\u1309\u1235\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of(u"\u1206\u1295\u130d \u12ae\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"\u12a5\u12e8\u1229\u1233\u120c\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"\u12ab\u121d\u127b\u1275\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of(u"\u1356\u1295\u1272\u12a0\u1293\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of(u"\u1355\u12ee\u1295\u130d\u12eb\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of(u"\u12a9\u12ed\u12da\u120e\u122d\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"\u1233\u121b\u122d\u12ab\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of(u"\u1232\u1295\u130b\u1356\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of(u"\u126c\u1295\u1272\u12a0\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Andorra"_s),
			$of(u"\u12a0\u1295\u12f6\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of(u"\u1233\u122b\u1276\u126d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"\u1273\u120a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of(u"\u126b\u1272\u12ab\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of(u"\u126a\u120a\u1290\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of(u"\u121b\u12ee\u1274"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"\u122c\u12e9\u1292\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of(u"\u134b\u1232\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of(u"\u12ae\u1235\u122c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of(u"\u121b\u1301\u1229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of(u"\u121a\u12f5\u12c8\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of(u"\u1293\u12a6\u121a\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Ponape"_s),
			$of(u"\u1356\u1205\u1295\u1354"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of(u"\u1234\u12ed\u1353\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of(u"\u1273\u1202\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of(u"\u1273\u122b\u12cb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of(u"\u12cb\u120a\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of(u"\u1265\u120b\u1295\u1273\u12e8\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"\u1305\u1261\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"\u12a4\u120d \u12a0\u12e9\u12a0\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of(u"\u134d\u122a\u1273\u12cd\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of(u"\u130b\u1266\u122e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"\u12ab\u122d\u1271\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"\u12aa\u1295\u123b\u1233"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of(u"\u121e\u1295\u122e\u126a\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of(u"\u1295\u1303\u121c\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"\u1233\u12a6 \u1276\u121c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"\u12ca\u1295\u12f5\u1206\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"\u12a0\u1295\u1272\u1313"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of(u"\u12ab\u122b\u12ab\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of(u"\u12ab\u12ed\u1295\u12a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"\u127a\u12ab\u130e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"\u12ae\u122d\u12f6\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of(u"\u12ad\u1228\u1235\u1270\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"\u12a9\u122b\u1233\u12ce"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of(u"\u12f2\u1275\u122e\u12ed\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Godthab"_s),
			$of(u"\u130b\u12f5\u1273\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of(u"\u130d\u122c\u1293\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"\u1203\u120a\u134b\u12ad\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of(u"\u12a2\u12b3\u120a\u12cd\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of(u"\u1303\u121b\u12ed\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of(u"\u121b\u1293\u1309\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of(u"\u121b\u122d\u130e\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of(u"\u121c\u1295\u12f6\u12db"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"\u121e\u1295\u12ad\u1276\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"\u1292\u1352\u130e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of(u"\u1296\u122e\u129b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of(u"\u12a6\u12ea\u1293\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of(u"\u134a\u1292\u12ad\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"\u1272\u1301\u12a0\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"\u1276\u122e\u1295\u1276"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of(u"\u1276\u122d\u1276\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"\u12eb\u12a9\u1273\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"\u127e\u12ed\u1263\u120d\u1233\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of(u"\u134d\u1296\u121d \u1354\u1295\u1205"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of(u"\u12a0\u12de\u1228\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"\u12ab\u1293\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"\u134b\u122e\u12a5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of(u"\u12a1\u12ad\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of(u"\u1350\u122d\u12dd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"\u1264\u120d\u130d\u122c\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"\u1265\u122b\u1230\u120d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"\u1261\u12f3\u1354\u1235\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of(u"\u1261\u1232\u1295\u1308\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"\u127a\u1235\u1293\u12a1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of(u"\u1309\u122d\u1290\u1232"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"\u1204\u120d\u1232\u1295\u12aa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"\u12a2\u1235\u1273\u1295\u1261\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of(u"\u1233\u122a\u12e8\u126e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"\u12a1\u12dd\u130e\u122e\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of(u"\u121b\u120d\u12f2\u1268"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"\u127b\u1273\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of(u"\u134b\u12ab\u12a6\u134e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of(u"\u130b\u121d\u1262\u12e8\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Norfolk"_s),
			$of(u"\u1296\u122d\u134e\u120d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bujumbura"_s),
			$of(u"\u1261\u1301\u121d\u1265\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"\u121e\u1243\u12f2\u1239"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of(u"\u12a0\u1295\u1309\u12ed\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"\u12a0\u1231\u1295\u1232\u12ee\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"\u1263\u122d\u1264\u12f6\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"\u12f6\u121c\u1292\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"\u12a4\u12f5\u1218\u1295\u1270\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"\u12a2\u1229\u1294\u1355"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of(u"\u121b\u12db\u1275\u120b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of(u"\u121a\u12ae\u12cd\u120e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of(u"\u1292\u12cd\u12ee\u122d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"\u122a\u12de\u120a\u12e9\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of(u"\u1233\u1295\u1273\u122c\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"\u1233\u1295\u1272\u12eb\u130e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"\u1245\u12f1\u1235 \u12ee\u1210\u1295\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of(u"\u1245\u12f1\u1235 \u12aa\u1275\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"\u1245\u12f5\u1235\u1275 \u1209\u1232\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of(u"\u12ca\u1292\u1354\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of(u"\u12ab\u12da\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"\u12f3\u126a\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of(u"\u1235\u12ee\u12cb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of(u"\u1275\u122e\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"\u12ad\u122b\u1235\u1296\u12eb\u122d\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"\u1296\u126e\u1232\u1262\u122a\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"\u12a1\u120b\u12a0\u1295\u1263\u12a0\u1273\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of(u"\u126d\u120b\u12f2\u126e\u1235\u1276\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"\u1264\u122d\u1219\u12f3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of(u"\u121b\u12f4\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of(u"\u1235\u1273\u1295\u120c\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of(u"\u12a8\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of(u"\u12f3\u122d\u12ca\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of(u"\u1206\u1263\u122d\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of(u"\u1232\u12f5\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Amsterdam"_s),
			$of(u"\u12a0\u121d\u1235\u1270\u122d\u12f3\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"\u12a0\u1235\u1275\u122b\u12ad\u1203\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of(u"\u1261\u12ab\u122c\u1235\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of(u"\u1302\u1265\u122b\u120d\u1273\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of(u"\u120d\u1301\u1265\u120d\u1303\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of(u"\u121c\u122a\u1203\u121d\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of(u"\u1356\u12f5\u130e\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of(u"\u1235\u1276\u12ad\u1206\u120d\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"\u12a1\u120d\u12eb\u1296\u126d\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of(u"\u126e\u120d\u130e\u122b\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of(u"\u1308\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of(u"\u12ac\u122d\u1309\u1208\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of(u"\u121e\u122a\u123d\u12e8\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of(u"\u12a6\u12ad\u120b\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of(u"\u1348\u1293\u1349\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of(u"\u1206\u1296\u1209\u1209"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of(u"\u1306\u1295\u1235\u1270\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of(u"\u1352\u1275\u12a8\u12ed\u122d\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of(u"\u12ab\u12db\u1265\u120b\u1295\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of(u"\u120a\u1260\u122d\u126a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of(u"\u1209\u1261\u121d\u1263\u123a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"\u1291\u12a0\u12ad\u127e\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of(u"\u1356\u122d\u1276 - \u1296\u126e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of(u"\u12a0\u1295\u12ae\u122b\u1305"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"\u12a0\u122b\u1309\u12e8\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of(u"\u1266\u12a0 \u126a\u1235\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of(u"\u12ab\u1273\u121b\u122d\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"\u127a\u1201\u12cb\u12cd\u12a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of(u"\u134e\u122d\u1273\u120c\u12db"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"\u130d\u120c\u1235 \u1264\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"\u1309\u12dd \u1264\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"\u1313\u1272\u121b\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of(u"\u1309\u12eb\u12a9\u12ed\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of(u"\u121b\u1273\u121e\u122e\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of(u"\u121c\u1296\u121a\u1292"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of(u"\u121e\u1295\u1270\u122d\u122c\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"\u1233\u12a6 \u1356\u120e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of(u"\u1245\u12f1\u1235 \u1276\u121b\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of(u"\u126b\u1295\u12ae\u1268\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"\u1293\u12cd\u1230\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of(u"\u1353\u120d\u1218\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of(u"\u126d\u1235\u1276\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuala_Lumpur"_s),
			$of(u"\u12a9\u12cb\u120b \u120b\u121d\u1351\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of(u"\u1296\u126e\u12a9\u1275\u12dd\u1294\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of(u"\u1265\u122b\u1272\u1235\u120b\u126b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"\u12ae\u1350\u1295\u1203\u1308\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of(u"\u1209\u12ad\u1230\u121d\u1260\u122d\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of(u"\u1233\u1295 \u121b\u122a\u1296"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"\u1232\u121d\u1348\u122e\u1356\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of(u"\u12db\u1356\u122e\u12da\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"\u12a2\u1295\u12f0\u122d\u1260\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of(u"\u130b\u120b\u1353\u130e\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of(u"\u12ad\u12cb\u1303\u120a\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of(u"\u121b\u122d\u12ad\u12cc\u1233\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of(u"\u1353\u130e \u1353\u130e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of(u"\u122b\u122e\u1276\u1295\u130b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of(u"\u1276\u1295\u130b\u1273\u1351"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"\u12a0\u12f2\u1235 \u12a0\u1260\u1263"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of(u"\u1265\u122b\u12db\u126a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of(u"\u12a1\u130b\u12f1\u1309"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"\u12ae\u1235\u1273\u122a\u12ab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of(u"\u130d\u122b\u1295\u12f5 \u1270\u122d\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of(u"\u1315\u12f3\u1209\u1355"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of(u"\u12b8\u122d\u121e\u12da\u120e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of(u"\u12ad\u122b\u1208\u1295\u12f2\u12ed\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of(u"\u120a\u12cd\u1235\u126a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of(u"\u121b\u122d\u1272\u1292\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Metlakatla"_s),
			$of(u"\u1218\u1275\u120b\u12ab\u1275\u120b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of(u"\u121e\u1295\u1274\u126a\u12f5\u12ee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of(u"\u121e\u1295\u1275\u1234\u122b\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of(u"\u1353\u122b\u121b\u122a\u1266"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"\u122a\u12ee \u1265\u122b\u1295\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of(u"\u1245\u12f1\u1235 \u126a\u1295\u1230\u1295\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of(u"\u128b\u12ed\u1275\u1206\u122d\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of(u"\u121b\u12ad\u1218\u122d\u12f6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of(u"\u122e\u1274\u122b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"\u1235\u122c\u12f5\u1294\u1235\u12ae\u120d\u121d\u1235\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"\u12e8\u12ab\u1270\u122a\u1295\u1260\u122d\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"\u122c\u12ed\u12ad\u1303\u126a\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of(u"\u1245\u12f5\u1235\u1275 \u1204\u1208\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of(u"\u12a0\u12f4\u120c\u12a5\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of(u"\u1265\u122a\u1235\u1264\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of(u"\u120a\u1295\u12f5\u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"\u12a0\u12ed\u1235\u120d \u12a6\u134d \u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"\u12ab\u120a\u1292\u1295\u130d\u122b\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of(u"\u12aa\u122a\u1272\u121b\u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of(u"\u1306\u1203\u1295\u1235\u1260\u122d\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"\u12a4\u120d\u1233\u120d\u126b\u12f6\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of(u"\u134e\u122d\u1275 \u1294\u120d\u1230\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of(u"\u120e\u1235 \u12a0\u1295\u1300\u1208\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"\u121c\u12ad\u1232\u12ae \u12a8\u1270\u121b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"\u1353\u1295\u130d\u1292\u122d\u1270\u1295\u130d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of(u"\u1354\u1275\u122e \u126c\u120d\u1206"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of(u"\u1356\u122d\u1276\u122a\u12ae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"\u122c\u1292 \u122a\u1268\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"\u1274\u1309\u1232\u130b\u120d\u1353"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"\u1270\u1295\u12f0\u122d \u1264\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of(u"\u12e8\u120e\u12cd\u1293\u12ed\u134d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of(u"\u120e\u1295\u130d\u12ed\u122d\u1263\u12e8\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of(u"\u12ac\u1355 \u126c\u122d\u12f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of(u"\u120e\u122d\u12f5 \u1206\u12ca"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of(u"\u121c\u120d\u1266\u122d\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of(u"\u12a0\u1295\u1273\u1293\u1293\u122a\u126e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of(u"\u1309\u12cb\u12f3\u120d\u12ab\u1293\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of(u"\u12f3\u122c \u1230\u120b\u121d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of(u"\u1265\u120b\u1295\u12ad- \u1233\u1265\u120e\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of(u"\u1266\u1290\u1235 \u12a0\u12ed\u1228\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of(u"\u12ab\u121d\u1356 \u130d\u122b\u1295\u12f4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"\u12f3\u1295\u121b\u122d\u12ad\u123b\u126d\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"\u12f3\u12cd\u1230\u1295 \u12ad\u122c\u12ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of(u"\u1296\u12ad\u1235, \u12a2\u1295\u12f2\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"\u12a2\u1295\u12f2\u12eb\u1293\u1356\u120a\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of(u"\u1351\u1295\u1273 \u12a0\u122c\u1293\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"\u122b\u1295\u12aa\u1295 \u12a2\u1295\u120c\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of(u"\u1233\u1295\u1273 \u12a2\u12db\u1264\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"\u1235\u12ae\u122d\u1235\u1263\u12ed\u1230\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of(u"\u121b\u12a8\u122a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of(u"\u1266\u130c\u12ed\u1295\u126a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of(u"\u1356\u122d\u1275 \u121e\u122c\u1235\u1263\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"\u12ab\u121d\u1265\u122a\u1305 \u1264\u12ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"\u12a0\u1272\u12ae\u12ab\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of(u"\u126a\u126b\u12ed, \u12a2\u1295\u12f2\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"\u12e8\u1273\u127d\u129b\u12cd \u120d\u12d1\u120d \u1229\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"\u12e8\u12a5\u1235\u1354\u1295 \u12c8\u12f0\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"\u1233\u1295\u1276 \u12f6\u121a\u1295\u130e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"\u1245\u12f5\u1235\u1275 \u1264\u122d\u1270\u120e\u121c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"\u12e8\u1210\u12cb\u120b \u1308\u1295\u12d8\u1265"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of(u"\u1265\u122e\u12ad\u1295 \u1202\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"\u1263\u1202\u12eb \u1263\u1295\u12f0\u122b\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of(u"\u1356\u122d\u1275 \u12a6 \u1355\u122a\u1295\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"\u12f0\u1261\u1265 \u1306\u122d\u1302\u12eb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of(u"\u1233\u120d\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of(u"\u121b\u122c\u1295\u130e, \u12a2\u1295\u12f2\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of(u"\u12ca\u1293\u121b\u12ad, \u12a2\u1295\u12f2\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of(u"\u1271\u12a9\u121b\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of(u"\u12a1\u1239\u12a0\u12a2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of(u"\u1274\u120d \u12a8\u1270\u121b, \u12a2\u1295\u12f2\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of(u"\u126a\u1295\u127c\u1295\u1235, \u12a2\u1295\u12f2\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"\u12f0\u121e\u1295\u1275 \u12f2\u12a1\u122d\u126a\u120d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of(u"\u120b \u122a\u12a6\u1303"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of(u"\u1233\u1295 \u1301\u12a0\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of(u"\u1233\u1295 \u120a\u12cd\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of(u"\u1352\u1270\u122d\u1235\u1260\u122d\u130d, \u12a2\u1295\u12f2\u12eb\u1293"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of(u"\u121e\u1295\u1272\u1234\u120e, \u12aa\u1295\u1273\u12aa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"\u1264\u12a1\u120b\u1205, \u1230\u121c\u1295 \u12f3\u12ae\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"\u1218\u12ab\u12a8\u1208\u129b, \u1230\u121c\u1295 \u12f3\u12ae\u1273"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of(u"\u122a\u12ee \u130b\u120c\u130e\u1235"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of(u"\u12a0\u12f2\u1235 \u1233\u120c\u121d, \u1230\u121c\u1295 \u12f3\u12ae\u1273"_s)
		})
	}));
	return data;
}

TimeZoneNames_am::TimeZoneNames_am() {
}

$Class* TimeZoneNames_am::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_am, name, initialize, &_TimeZoneNames_am_ClassInfo_, allocate$TimeZoneNames_am);
	return class$;
}

$Class* TimeZoneNames_am::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun