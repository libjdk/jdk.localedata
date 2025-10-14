#include <sun/text/resources/cldr/ext/FormatData_am.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_am_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_am::*)()>(&FormatData_am::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_am_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_am",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_am_MethodInfo_
};

$Object* allocate$FormatData_am($Class* clazz) {
	return $of($alloc(FormatData_am));
}

void FormatData_am::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_am::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u1303\u1295\u12e9\u12c8\u122a"_s,
		u"\u134c\u1265\u1229\u12c8\u122a"_s,
		u"\u121b\u122d\u127d"_s,
		u"\u12a4\u1355\u122a\u120d"_s,
		u"\u121c\u12ed"_s,
		u"\u1301\u1295"_s,
		u"\u1301\u120b\u12ed"_s,
		u"\u12a6\u1308\u1235\u1275"_s,
		u"\u1234\u1355\u1274\u121d\u1260\u122d"_s,
		u"\u12a6\u12ad\u1276\u1260\u122d"_s,
		u"\u1296\u126c\u121d\u1260\u122d"_s,
		u"\u12f2\u1234\u121d\u1260\u122d"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u1303\u1295\u12e9"_s,
		u"\u134c\u1265\u1229"_s,
		u"\u121b\u122d\u127d"_s,
		u"\u12a4\u1355\u122a"_s,
		u"\u121c\u12ed"_s,
		u"\u1301\u1295"_s,
		u"\u1301\u120b\u12ed"_s,
		u"\u12a6\u1308\u1235"_s,
		u"\u1234\u1355\u1274"_s,
		u"\u12a6\u12ad\u1276"_s,
		u"\u1296\u126c\u121d"_s,
		u"\u12f2\u1234\u121d"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u1303"_s,
		u"\u134c"_s,
		u"\u121b"_s,
		u"\u12a4"_s,
		u"\u121c"_s,
		u"\u1301"_s,
		u"\u1301"_s,
		u"\u12a6"_s,
		u"\u1234"_s,
		u"\u12a6"_s,
		u"\u1296"_s,
		u"\u12f2"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u12a5\u1211\u12f5"_s,
		u"\u1230\u129e"_s,
		u"\u121b\u12ad\u1230\u129e"_s,
		u"\u1228\u1261\u12d5"_s,
		u"\u1210\u1219\u1235"_s,
		u"\u12d3\u122d\u1265"_s,
		u"\u1245\u12f3\u121c"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u12a5\u1211\u12f5"_s,
		u"\u1230\u129e"_s,
		u"\u121b\u12ad\u1230"_s,
		u"\u1228\u1261\u12d5"_s,
		u"\u1210\u1219\u1235"_s,
		u"\u12d3\u122d\u1265"_s,
		u"\u1245\u12f3\u121c"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u12a5"_s,
		u"\u1230"_s,
		u"\u121b"_s,
		u"\u1228"_s,
		u"\u1210"_s,
		u"\u12d3"_s,
		u"\u1245"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1\u129b\u12cd \u1229\u1265"_s,
		u"2\u129b\u12cd \u1229\u1265"_s,
		u"3\u129b\u12cd \u1229\u1265"_s,
		u"4\u129b\u12cd \u1229\u1265"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u1229\u12651"_s,
		u"\u1229\u12652"_s,
		u"\u1229\u12653"_s,
		u"\u1229\u12654"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u1325\u12cb\u1275"_s,
		u"\u12a8\u1230\u12d3\u1275"_s,
		u"\u12a5\u12a9\u1208 \u120c\u120a\u1275"_s,
		u"\u1240\u1275\u122d"_s,
		u"\u1325\u12cb\u12751"_s,
		""_s,
		u"\u12a8\u1230\u12d3\u1275 7 \u1230\u12d3\u1275"_s,
		""_s,
		u"\u121b\u12731"_s,
		""_s,
		u"\u120c\u120a\u12751"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u1320"_s,
		u"\u12a8"_s,
		u"\u12a5\u12a9\u1208 \u120c\u120a\u1275"_s,
		u"\u1240"_s,
		u"\u1325\u12cb\u12751"_s,
		""_s,
		u"\u12a8\u1230\u12d3\u12751"_s,
		""_s,
		u"\u121b\u12731"_s,
		""_s,
		u"\u120c\u120a\u12751"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u1325\u12cb\u1275"_s,
		u"\u12a8\u1230\u12d3\u1275"_s,
		u"\u12a5\u12a9\u1208 \u120c\u120a\u1275"_s,
		u"\u1240\u1275\u122d"_s,
		u"\u1325\u12cb\u12751"_s,
		""_s,
		u"\u12a8\u1230\u12d3\u1275 7"_s,
		""_s,
		u"\u121b\u12731"_s,
		""_s,
		u"\u120c\u120a\u12751"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u12d3/\u12d3"_s,
		u"\u12d3/\u121d"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_DateTimePatterns, $new($StringArray, {
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u1363 d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u1363 d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u12e8\u130d\u122a\u130e\u122a\u12eb\u1295 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u12d3\u1218\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"\u1302 \u12a4\u121d \u1272{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u12e8\u12a5\u1235\u120b\u121d \u1205\u12dd\u1263\u12ca \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u1218\u12f0\u1260\u129b \u1230\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u12e8\u1303\u1353\u1295 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u1302 \u12a4\u121d \u1272"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u12d3\u1218\u1270 \u12d3\u1208\u121d"_s,
				u"\u12d3\u1218\u1270 \u121d\u1215\u1228\u1275"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u12f0\u1242\u1243"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u12d8\u1218\u1295"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u1325\u12cb\u1275/\u12a8\u1230\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u12e8\u121a\u1295\u1309 \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u12c8\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u1230\u12a8\u1295\u12f5"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u12a5\u1235\u120b\u121b\u12ca \u12e8\u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:00:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-24:00"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u130a\u12dc"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u123a other:0\' \'\u123a}"_s,
				u"{one:00\' \'\u123a other:00\' \'\u123a}"_s,
				u"{one:000\' \'\u123a other:000\' \'\u123a}"_s,
				u"{one:0\' \'\u121a\u120a\u12ee\u1295 other:0\' \'\u121a\u120a\u12ee\u1295}"_s,
				u"{one:00\' \'\u121a\u120a\u12ee\u1295 other:00\' \'\u121a\u120a\u12ee\u1295}"_s,
				u"{one:000\' \'\u121a\u120a\u12ee\u1295 other:000\' \'\u121a\u120a\u12ee\u1295}"_s,
				u"{one:0\' \'\u1262\u120a\u12ee\u1295 other:0\' \'\u1262\u120a\u12ee\u1295}"_s,
				u"{one:00\' \'\u1262\u120a\u12ee\u1295 other:00\' \'\u1262\u120a\u12ee\u1295}"_s,
				u"{one:000\' \'\u1262\u120a\u12ee\u1295 other:000\' \'\u1262\u120a\u12ee\u1295}"_s,
				u"{one:0\' \'\u1275\u122a\u120a\u12ee\u1295 other:0\' \'\u1275\u122a\u120a\u12ee\u1295}"_s,
				u"{one:00\' \'\u1275\u122a\u120a\u12ee\u1295 other:00\' \'\u1275\u122a\u120a\u12ee\u1295}"_s,
				u"{one:000\' \'\u1275\u122a\u120a\u12ee\u1295 other:000\' \'\u1275\u122a\u120a\u12ee\u1295}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u12e8\u1230\u12d3\u1275 \u1230\u1245"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u12a0\u12d8\u1266\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of("+HHmm;-HHmm"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u1233\u121d\u1295\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\u00a0\u123a other:0\u00a0\u123a}"_s,
				u"{one:00\u00a0\u123a other:00\u00a0\u123a}"_s,
				u"{one:000\u00a0\u123a other:000\u00a0\u123a}"_s,
				u"{one:0\u00a0\u121a other:0\u00a0\u121a}"_s,
				u"{one:00\u00a0\u121a other:00\u00a0\u121a}"_s,
				u"{one:000\u00a0\u121a other:000\u00a0\u121a}"_s,
				u"{one:0\u00a0\u1262 other:0\u00a0\u1262}"_s,
				u"{one:00\u00a0\u1262 other:00\u00a0\u1262}"_s,
				u"{one:000\u00a0\u1262 other:000\u00a0\u1262}"_s,
				u"{one:0\u00a0\u1275 other:0\u00a0\u1275}"_s,
				u"{one:00\u00a0\u1275 other:00\u00a0\u1275}"_s,
				u"{one:000\u00a0\u1275 other:000\u00a0\u1275}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u12e8\u1240\u1295 \u1265\u122d\u1203\u1295 \u1230\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y MMMM d, EEEE"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"dd/MM/y"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:i = 0 or n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u1230\u12d3\u1275"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u12e8\u1261\u12f2\u1235\u1275 \u1240\u1295 \u12a0\u1246\u1323\u1320\u122d"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_am::FormatData_am() {
}

$Class* FormatData_am::load$($String* name, bool initialize) {
	$loadClass(FormatData_am, name, initialize, &_FormatData_am_ClassInfo_, allocate$FormatData_am);
	return class$;
}

$Class* FormatData_am::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun