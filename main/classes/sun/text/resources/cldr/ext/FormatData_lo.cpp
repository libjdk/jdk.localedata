#include <sun/text/resources/cldr/ext/FormatData_lo.h>

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

$MethodInfo _FormatData_lo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_lo::*)()>(&FormatData_lo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_lo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_lo",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lo_MethodInfo_
};

$Object* allocate$FormatData_lo($Class* clazz) {
	return $of($alloc(FormatData_lo));
}

void FormatData_lo::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_lo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0ea1\u0eb1\u0e87\u0e81\u0ead\u0e99"_s,
		u"\u0e81\u0eb8\u0ea1\u0e9e\u0eb2"_s,
		u"\u0ea1\u0eb5\u0e99\u0eb2"_s,
		u"\u0ec0\u0ea1\u0eaa\u0eb2"_s,
		u"\u0e9e\u0eb6\u0e94\u0eaa\u0eb0\u0e9e\u0eb2"_s,
		u"\u0ea1\u0eb4\u0e96\u0eb8\u0e99\u0eb2"_s,
		u"\u0e81\u0ecd\u0ea5\u0eb0\u0e81\u0ebb\u0e94"_s,
		u"\u0eaa\u0eb4\u0e87\u0eab\u0eb2"_s,
		u"\u0e81\u0eb1\u0e99\u0e8d\u0eb2"_s,
		u"\u0e95\u0eb8\u0ea5\u0eb2"_s,
		u"\u0e9e\u0eb0\u0e88\u0eb4\u0e81"_s,
		u"\u0e97\u0eb1\u0e99\u0ea7\u0eb2"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0ea1.\u0e81."_s,
		u"\u0e81.\u0e9e."_s,
		u"\u0ea1.\u0e99."_s,
		u"\u0ea1.\u0eaa."_s,
		u"\u0e9e.\u0e9e."_s,
		u"\u0ea1\u0eb4.\u0e96."_s,
		u"\u0e81.\u0ea5."_s,
		u"\u0eaa.\u0eab."_s,
		u"\u0e81.\u0e8d."_s,
		u"\u0e95.\u0ea5."_s,
		u"\u0e9e.\u0e88."_s,
		u"\u0e97.\u0ea7."_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0ea7\u0eb1\u0e99\u0ead\u0eb2\u0e97\u0eb4\u0e94"_s,
		u"\u0ea7\u0eb1\u0e99\u0e88\u0eb1\u0e99"_s,
		u"\u0ea7\u0eb1\u0e99\u0ead\u0eb1\u0e87\u0e84\u0eb2\u0e99"_s,
		u"\u0ea7\u0eb1\u0e99\u0e9e\u0eb8\u0e94"_s,
		u"\u0ea7\u0eb1\u0e99\u0e9e\u0eb0\u0eab\u0eb1\u0e94"_s,
		u"\u0ea7\u0eb1\u0e99\u0eaa\u0eb8\u0e81"_s,
		u"\u0ea7\u0eb1\u0e99\u0ec0\u0eaa\u0ebb\u0eb2"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0ead\u0eb2\u0e97\u0eb4\u0e94"_s,
		u"\u0e88\u0eb1\u0e99"_s,
		u"\u0ead\u0eb1\u0e87\u0e84\u0eb2\u0e99"_s,
		u"\u0e9e\u0eb8\u0e94"_s,
		u"\u0e9e\u0eb0\u0eab\u0eb1\u0e94"_s,
		u"\u0eaa\u0eb8\u0e81"_s,
		u"\u0ec0\u0eaa\u0ebb\u0eb2"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0ead\u0eb2"_s,
		u"\u0e88"_s,
		u"\u0ead"_s,
		u"\u0e9e"_s,
		u"\u0e9e\u0eab"_s,
		u"\u0eaa\u0eb8"_s,
		u"\u0eaa"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0ec4\u0e95\u0ea3\u0ea1\u0eb2\u0e94 1"_s,
		u"\u0ec4\u0e95\u0ea3\u0ea1\u0eb2\u0e94 2"_s,
		u"\u0ec4\u0e95\u0ea3\u0ea1\u0eb2\u0e94 3"_s,
		u"\u0ec4\u0e95\u0ea3\u0ea1\u0eb2\u0e94 4"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0e95\u0ea11"_s,
		u"\u0e95\u0ea12"_s,
		u"\u0e95\u0ea13"_s,
		u"\u0e95\u0ea14"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0e81\u0ec8\u0ead\u0e99\u0e97\u0ec8\u0ebd\u0e87"_s,
		u"\u0eab\u0ebc\u0eb1\u0e87\u0e97\u0ec8\u0ebd\u0e87"_s,
		u"\u0e97\u0ec8\u0ebd\u0e87\u0e84\u0eb7\u0e99"_s,
		u"\u0e95\u0ead\u0e99\u0e97\u0ec8\u0ebd\u0e87"_s,
		u"\u0e95\u0ead\u0e99\u0ec0\u0e8a\u0ebb\u0ec9\u0eb2"_s,
		""_s,
		u"\u0e95\u0ead\u0e99\u0e9a\u0ec8\u0eb2\u0e8d"_s,
		""_s,
		u"\u0e95\u0ead\u0e99\u0ec1\u0ea5\u0e87"_s,
		""_s,
		u"\u0e95\u0ead\u0e99\u0e81\u0eb2\u0e87\u0e84\u0eb7\u0e99"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0e97\u0ec8\u0ebd\u0e87\u0e84\u0eb7\u0e99"_s,
		u"\u0e95\u0ead\u0e99\u0e97\u0ec8\u0ebd\u0e87"_s,
		u"\u0e95\u0ead\u0e99\u0ec0\u0e8a\u0ebb\u0ec9\u0eb2"_s,
		""_s,
		u"\u0e95\u0ead\u0e99\u0e97\u0ec8\u0ebd\u0e87"_s,
		""_s,
		u"\u0e95\u0ead\u0e99\u0ec1\u0ea5\u0e87"_s,
		""_s,
		u"\u0e81\u0eb2\u0e87\u0e84\u0eb7\u0e99"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u0e81\u0ec8\u0ead\u0e99\u0e97\u0ec8\u0ebd\u0e87"_s,
		u"\u0eab\u0ebc\u0eb1\u0e87\u0e97\u0ec8\u0ebd\u0e87"_s,
		u"\u0e97\u0ec8\u0ebd\u0e87\u0e84\u0eb7\u0e99"_s,
		u"\u0e95\u0ead\u0e99\u0e97\u0ec8\u0ebd\u0e87"_s,
		u"\u0e95\u0ead\u0e99\u0ec0\u0e8a\u0ebb\u0ec9\u0eb2"_s,
		""_s,
		u"\u0e95\u0ead\u0e99\u0e9a\u0ec8\u0eb2\u0e8d"_s,
		""_s,
		u"\u0e95\u0ead\u0e99\u0ec1\u0ea5\u0e87"_s,
		""_s,
		u"\u0e81\u0eb2\u0e87\u0e84\u0eb7\u0e99"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0e81\u0ec8\u0ead\u0e99 \u0e84.\u0eaa."_s,
		u"\u0e84.\u0eaa."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		u"H \u0ec2\u0ea1\u0e87 m \u0e99\u0eb2\u0e97\u0eb5 ss \u0ea7\u0eb4\u0e99\u0eb2\u0e97\u0eb5 zzzz"_s,
		u"H \u0ec2\u0ea1\u0e87 m \u0e99\u0eb2\u0e97\u0eb5 ss \u0ea7\u0eb4\u0e99\u0eb2\u0e97\u0eb5 z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_MonthNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s,
		"7"_s,
		"8"_s,
		"9"_s,
		"10"_s,
		"11"_s,
		"12"_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0e9e.\u0eaa."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u0e97\u0eb5 d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u0e97\u0eb5 d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"\u0e84\u0ea3\u0eb4\u0e94\u0eaa\u0eb1\u0e81\u0e81\u0eb0\u0ea5\u0eb2\u0e94"_s,
		u"\u0ea1\u0eb5\u0e88\u0eb5"_s,
		u"\u0ec4\u0e95\u0ec2\u0e8a"_s,
		u"\u0ec2\u0e8a\u0ea7\u0eb2"_s,
		u"\u0eae\u0eb5\u0e8a\u0eb5"_s,
		"Reiwa"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		u"\u0e84.\u0eaa."_s,
		u"\u0ea1\u0eb5\u0e88\u0eb5"_s,
		u"\u0ec4\u0e95\u0ec2\u0e8a"_s,
		u"\u0ec2\u0e8a\u0ea7\u0eb2"_s,
		u"\u0eae\u0eb5\u0e8a\u0eb5"_s,
		"Reiwa"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0e81\u0ec8\u0ead\u0e99 R.O.C."_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0e9b\u0eb0\u0e95\u0eb4\u0e97\u0eb4\u0e99\u0ec0\u0e81\u0ea3\u0ec2\u0e81\u0ea3\u0ebd\u0e99"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0e9b\u0eb5"_s)
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
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0e951"_s,
				u"\u0e952"_s,
				u"\u0e953"_s,
				u"\u0e954"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0e9b\u0eb0\u0e95\u0eb4\u0e97\u0eb4\u0e99\u0ead\u0eb4\u0e94\u0eaa\u0eb0\u0ea5\u0eb2\u0ea1"_s)
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
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"\u0ec0\u0ea7\u0ea5\u0eb2\u0ea1\u0eb2\u0e94\u0e95\u0eb0\u0e96\u0eb2\u0e99 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0e9b\u0eb0\u0e95\u0eb4\u0e97\u0eb4\u0e99\u0e8d\u0eb5\u0ec8\u0e9b\u0eb8\u0ec8\u0e99"_s)
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
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e81\u0ec8\u0ead\u0e99\u0e84\u0ea3\u0eb4\u0e94\u0eaa\u0eb1\u0e81\u0e81\u0eb0\u0ea5\u0eb2\u0e94"_s,
				u"\u0e84\u0ea3\u0eb4\u0e94\u0eaa\u0eb1\u0e81\u0e81\u0eb0\u0ea5\u0eb2\u0e94"_s
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
			$of($$new($StringArray, {
				"{1}, {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u0e9a\u0ecd\u0ec8\u200b\u0ec1\u0ea1\u0ec8\u0e99\u200b\u0ec2\u0e95\u200b\u0ec0\u0ea5\u0e81"_s,
				""_s,
				""_s
			}))
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
			$of(u"\u0e99\u0eb2\u0e97\u0eb5"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0eaa\u0eb0\u0ec4\u0edd"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0e81\u0ec8\u0ead\u0e99\u0e97\u0ec8\u0ebd\u0e87/\u0eab\u0ebc\u0eb1\u0e87\u0e97\u0ec8\u0ebd\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0ea1\u0eb8\u0ea3\u0eb0\u0eae\u0ead\u0ea1"_s,
				u"\u0e8a\u0eb2\u0e9f\u0eb2\u0ea3"_s,
				u"\u0eae\u0ead\u0e94\u0e9a\u0eb5 1"_s,
				u"\u0eae\u0ead\u0e94\u0e9a\u0eb5 2"_s,
				u"\u0e88\u0eb8\u0ea1\u0eb2\u0e94\u0eb2 1"_s,
				u"\u0e88\u0eb8\u0ea1\u0eb2\u0e94\u0eb2 2"_s,
				u"\u0eae\u0eb2\u0e88\u0eb1\u0e9a"_s,
				u"\u0e8a\u0eb0\u0e9a\u0eb2\u0e99"_s,
				u"\u0eae\u0eb2\u0ea1\u0eb2\u0e94\u0ead\u0e99"_s,
				u"\u0ec0\u0e8a\u0ebb\u0eb2\u0ea7\u0eb1\u0e94"_s,
				u"\u0e94\u0eb8\u0ead\u0eb1\u0e94\u0e81\u0eb4\u0e94\u0eb0"_s,
				u"\u0e94\u0eb8\u0ead\u0eb1\u0e94\u0e81\u0eb4\u0e88\u0eb0"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0e9b\u0eb0\u0e95\u0eb4\u0e97\u0eb4\u0e99\u0ec4\u0e95\u0ec9\u0eab\u0ea7\u0eb1\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, y MMMM dd"_s,
				"y MMMM d"_s,
				"y MMM d"_s,
				"y-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0ec0\u0e94\u0eb7\u0ead\u0e99"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0ea7\u0eb4\u0e99\u0eb2\u0e97\u0eb5"_s)
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
			$of(u"\u0e9b\u0eb0\u0e95\u0eb4\u0e97\u0eb4\u0e99\u0ead\u0eb4\u0eaa\u0eb0\u0ea5\u0eb2\u0ea1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:20:00-05:00;afternoon1:12:00-16:00;morning1:05:00-12:00;evening1:16:00-20:00"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
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
			$of(u"\u0ec0\u0ea7\u0ea5\u0eb2 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u0e9e\u0eb1\u0e99}"_s,
				u"{other:00\' \'\u0e9e\u0eb1\u0e99}"_s,
				u"{other:0\' \'\u0ec1\u0eaa\u0e99}"_s,
				u"{other:0\' \'\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:00\' \'\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:000\' \'\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:0\' \'\u0e95\u0eb7\u0ec9}"_s,
				u"{other:00\' \'\u0e95\u0eb7\u0ec9}"_s,
				u"{other:000\' \'\u0e95\u0eb7\u0ec9}"_s,
				u"{other:0\' \'\u0ea5\u0ec9\u0eb2\u0e99\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:00\' \'\u0ea5\u0ec9\u0eb2\u0e99\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:000\' \'\u0ea5\u0ec9\u0eb2\u0e99\u0ea5\u0ec9\u0eb2\u0e99}"_s
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
			$of(metaValue_buddhist_MonthNarrows)
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
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0ec0\u0e82\u0e94\u0ec0\u0ea7\u0ea5\u0eb2"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("laoo.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ed0"_s,
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
			$of("field.weekday"_s),
			$of(u"\u0ea1\u0eb7\u0ec9\u0e82\u0ead\u0e87\u0ead\u0eb2\u0e97\u0eb4\u0e94"_s)
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
			$of("islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of("java.time.japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
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
			$of("laoo.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0ead\u0eb2\u0e97\u0eb4\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
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
				u"{other:0\u00a0\u0e9e\u0eb1\u0e99}"_s,
				u"{other:00\u00a0\u0e9e\u0eb1\u0e99}"_s,
				u"{other:000\u00a0\u0e81\u0eb5\u0e9a}"_s,
				u"{other:0\u00a0\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:00\u00a0\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:000\u00a0\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:0\u00a0\u0e95\u0eb7\u0ec9}"_s,
				u"{other:00\u00a0\u0e95\u0eb7\u0ec9}"_s,
				u"{other:000\u00a0\u0e95\u0eb7\u0ec9}"_s,
				u"{other:0\u00a0\u0ea5\u0ec9\u0eb2\u0e99\u0ea5\u0ec9\u0eb2\u0e99}"_s,
				u"{other:00\u0ea5\u0ea5}"_s,
				u"{other:000\u0ea5\u0ea5}"_s
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
			$of(u"\u0ec0\u0ea7\u0ea5\u0eb2\u0e81\u0eb2\u0e87\u0ec0\u0ea7\u0eb1\u0e99 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE \u0e97\u0eb5 d MMMM G y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/y"_s
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
			$of("field.hour"_s),
			$of(u"\u0e8a\u0ebb\u0ec8\u0ea7\u0ec2\u0ea1\u0e87"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0ea1\u0eb8\u0eae\u0eb1\u0e94"_s,
				u"\u0ec0\u0e84\u0eb2\u0eb0"_s,
				u"\u0eae\u0ead\u0e94\u0e9a\u0eb5 1"_s,
				u"\u0eae\u0ead\u0e81\u0e9a\u0eb5 2"_s,
				u"\u0e99\u0eb8\u0ea1\u0eb2 1"_s,
				u"\u0e99\u0eb8\u0ea1\u0eb2 2"_s,
				u"\u0ec0\u0eae\u0eb2\u0eb0"_s,
				u"\u0e8a\u0eb0\u0ead\u0ecc"_s,
				u"\u0ec0\u0eae\u0eb2\u0eb0\u0ea1\u0eb0"_s,
				u"\u0ec0\u0e8a\u0ebb\u0eb2"_s,
				u"\u0e8a\u0eb8\u0ea5\u0e81\u0eb4\u0ead\u0eb8"_s,
				u"\u0e8a\u0eb8\u0ea5\u0eab\u0eb4\u0e88"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0e9b\u0eb0\u0e95\u0eb4\u0e97\u0eb4\u0e99 \u0e9e\u0eb8\u0e94\u0e97\u0eb0\u0eaa\u0eb1\u0e87\u0e81\u0eb2\u0e94"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00;\u00a4-#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;\u00a4-#,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of("japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
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

FormatData_lo::FormatData_lo() {
}

$Class* FormatData_lo::load$($String* name, bool initialize) {
	$loadClass(FormatData_lo, name, initialize, &_FormatData_lo_ClassInfo_, allocate$FormatData_lo);
	return class$;
}

$Class* FormatData_lo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun