#include <sun/text/resources/cldr/ext/FormatData_bn.h>

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

$MethodInfo _FormatData_bn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_bn::*)()>(&FormatData_bn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_bn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_bn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_bn_MethodInfo_
};

$Object* allocate$FormatData_bn($Class* clazz) {
	return $of($alloc(FormatData_bn));
}

void FormatData_bn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_bn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u099c\u09be\u09a8\u09c1\u09af\u09bc\u09be\u09b0\u09c0"_s,
		u"\u09ab\u09c7\u09ac\u09cd\u09b0\u09c1\u09af\u09bc\u09be\u09b0\u09c0"_s,
		u"\u09ae\u09be\u09b0\u09cd\u099a"_s,
		u"\u098f\u09aa\u09cd\u09b0\u09bf\u09b2"_s,
		u"\u09ae\u09c7"_s,
		u"\u099c\u09c1\u09a8"_s,
		u"\u099c\u09c1\u09b2\u09be\u0987"_s,
		u"\u0986\u0997\u09b8\u09cd\u099f"_s,
		u"\u09b8\u09c7\u09aa\u09cd\u099f\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		u"\u0985\u0995\u09cd\u099f\u09cb\u09ac\u09b0"_s,
		u"\u09a8\u09ad\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		u"\u09a1\u09bf\u09b8\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u099c\u09be\u09a8\u09c1"_s,
		u"\u09ab\u09c7\u09ac"_s,
		u"\u09ae\u09be\u09b0\u09cd\u099a"_s,
		u"\u098f\u09aa\u09cd\u09b0\u09bf\u09b2"_s,
		u"\u09ae\u09c7"_s,
		u"\u099c\u09c1\u09a8"_s,
		u"\u099c\u09c1\u09b2\u09be\u0987"_s,
		u"\u0986\u0997\u09b8\u09cd\u099f"_s,
		u"\u09b8\u09c7\u09aa\u09cd\u099f\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		u"\u0985\u0995\u09cd\u099f\u09cb\u09ac\u09b0"_s,
		u"\u09a8\u09ad\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		u"\u09a1\u09bf\u09b8\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u099c\u09be"_s,
		u"\u09ab\u09c7"_s,
		u"\u09ae\u09be"_s,
		u"\u098f"_s,
		u"\u09ae\u09c7"_s,
		u"\u099c\u09c1\u09a8"_s,
		u"\u099c\u09c1"_s,
		u"\u0986"_s,
		u"\u09b8\u09c7"_s,
		u"\u0985"_s,
		u"\u09a8"_s,
		u"\u09a1\u09bf"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u09b0\u09ac\u09bf\u09ac\u09be\u09b0"_s,
		u"\u09b8\u09cb\u09ae\u09ac\u09be\u09b0"_s,
		u"\u09ae\u0999\u09cd\u0997\u09b2\u09ac\u09be\u09b0"_s,
		u"\u09ac\u09c1\u09a7\u09ac\u09be\u09b0"_s,
		u"\u09ac\u09c3\u09b9\u09b8\u09cd\u09aa\u09a4\u09bf\u09ac\u09be\u09b0"_s,
		u"\u09b6\u09c1\u0995\u09cd\u09b0\u09ac\u09be\u09b0"_s,
		u"\u09b6\u09a8\u09bf\u09ac\u09be\u09b0"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u09b0\u09ac\u09bf"_s,
		u"\u09b8\u09cb\u09ae"_s,
		u"\u09ae\u0999\u09cd\u0997\u09b2"_s,
		u"\u09ac\u09c1\u09a7"_s,
		u"\u09ac\u09c3\u09b9\u09b8\u09cd\u09aa\u09a4\u09bf"_s,
		u"\u09b6\u09c1\u0995\u09cd\u09b0"_s,
		u"\u09b6\u09a8\u09bf"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u09b0"_s,
		u"\u09b8\u09cb"_s,
		u"\u09ae"_s,
		u"\u09ac\u09c1"_s,
		u"\u09ac\u09c3"_s,
		u"\u09b6\u09c1"_s,
		u"\u09b6"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u09a4\u09cd\u09b0\u09c8\u09ae\u09be\u09b8\u09bf\u0995"_s,
		u"\u09a6\u09cd\u09ac\u09bf\u09a4\u09c0\u09af\u09bc \u09a4\u09cd\u09b0\u09c8\u09ae\u09be\u09b8\u09bf\u0995"_s,
		u"\u09a4\u09c3\u09a4\u09c0\u09af\u09bc \u09a4\u09cd\u09b0\u09c8\u09ae\u09be\u09b8\u09bf\u0995"_s,
		u"\u099a\u09a4\u09c1\u09b0\u09cd\u09a5 \u09a4\u09cd\u09b0\u09c8\u09ae\u09be\u09b8\u09bf\u0995"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u09e7"_s,
		u"\u09e8"_s,
		u"\u09e9"_s,
		u"\u09ea"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		""_s,
		""_s,
		u"\u09ad\u09cb\u09b0"_s,
		u"\u09b8\u0995\u09be\u09b2"_s,
		u"\u09a6\u09c1\u09aa\u09c1\u09b0"_s,
		u"\u09ac\u09bf\u0995\u09be\u09b2"_s,
		u"\u09b8\u09a8\u09cd\u09a7\u09cd\u09af\u09be"_s,
		""_s,
		u"\u09b0\u09be\u09a4\u09cd\u09b0\u09bf\u09a4\u09c7"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		""_s,
		""_s,
		u"\u09ad\u09cb\u09b0"_s,
		u"\u09b8\u0995\u09be\u09b2"_s,
		u"\u09a6\u09c1\u09aa\u09c1\u09b0"_s,
		u"\u09ac\u09bf\u0995\u09be\u09b2"_s,
		u"\u09b8\u09a8\u09cd\u09a7\u09cd\u09af\u09be"_s,
		""_s,
		u"\u09b0\u09be\u09a4\u09cd\u09b0\u09bf"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0996\u09cd\u09b0\u09bf\u09b8\u09cd\u099f\u09aa\u09c2\u09b0\u09cd\u09ac"_s,
		u"\u0996\u09c3\u09b7\u09cd\u099f\u09be\u09ac\u09cd\u09a6"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, y G"_s,
		"d MMMM, y G"_s,
		"d MMM, y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, y GGGG"_s,
		"d MMMM, y GGGG"_s,
		"d MMM, y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0986\u0997\u09c7 R.O.C."_s,
		u"\u09ae\u09bf\u0999\u09cd\u0997\u09c1\u09af\u09bc\u09be"_s
	}));
	$var($StringArray, metaValue_islamic_MonthNames, $new($StringArray, {
		u"\u09ae\u09b9\u09b0\u09b0\u09ae"_s,
		u"\u09b8\u09ab\u09b0"_s,
		u"\u09b0\u09ac\u09bf\u0989\u09b2 \u0986\u0989\u09af\u09bc\u09be\u09b2"_s,
		u"\u09b0\u09ac\u09bf\u0989\u09b8 \u09b8\u09be\u09a8\u09bf"_s,
		u"\u099c\u09ae\u09be\u09a6\u09bf\u0989\u09b2 \u0986\u0989\u09af\u09bc\u09be\u09b2"_s,
		u"\u099c\u09ae\u09be\u09a6\u09bf\u0989\u09b8 \u09b8\u09be\u09a8\u09bf"_s,
		u"\u09b0\u099c\u09ac"_s,
		u"\u09b6\u09be\u2018\u09ac\u09be\u09a8"_s,
		u"\u09b0\u09ae\u099c\u09be\u09a8"_s,
		u"\u09b6\u09be\u0993\u09af\u09bc\u09be\u09b2"_s,
		u"\u099c\u09cd\u09ac\u09bf\u09b2\u0995\u09a6"_s,
		u"\u099c\u09cd\u09ac\u09bf\u09b2\u09b9\u099c\u09cd\u099c"_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u09af\u09c1\u0997"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0997\u09cd\u09b0\u09bf\u0997\u09cb\u09b0\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u09ac\u099b\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995 \u09ac\u09b0\u09cd\u09b7\u09aa\u099e\u09cd\u099c\u09c0 (\u0989\u09ae\u09cd\u09ae\u09be \u0986\u09b2-\u0995\u09c1\u09b0\u0986)"_s)
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
			$of("GMT {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of($$new($StringArray, {
				"Q1"_s,
				"Q2"_s,
				"Q3"_s,
				"Q4"_s
			}))
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
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995-\u09b8\u09bf\u09ad\u09bf\u09b2 \u09ac\u09b0\u09cd\u09b7\u09aa\u099e\u09cd\u099c\u09c0"_s)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u09ae\u09be\u09a8\u0995 \u09b8\u09ae\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("beng"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09bf \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
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
			$of("beng.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u09e6"_s,
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
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0996\u09cd\u09b0\u09bf\u09b8\u09cd\u099f\u09aa\u09c2\u09b0\u09cd\u09ac"_s,
				u"\u0996\u09cd\u09b0\u09c0\u09b7\u09cd\u099f\u09be\u09ac\u09cd\u09a6"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
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
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
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
			$of(u"\u09ae\u09bf\u09a8\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u09af\u09c1\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(metaValue_islamic_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("beng.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"#,##,##0.00\u00a4"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u09ae\u09bf\u0999\u09cd\u0997\u09c1\u0993 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u09ae\u09be\u09b8"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u09b8\u09c7\u0995\u09c7\u09a8\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u09e7"_s,
				u"\u09e8"_s,
				u"\u09e9"_s,
				u"\u09ea"_s,
				u"\u09eb"_s,
				u"\u09ec"_s,
				u"\u09ed"_s,
				u"\u09ee"_s,
				u"\u09ef"_s,
				u"\u09e7\u09e6"_s,
				u"\u09e7\u09e7"_s,
				u"\u09e7\u09e8"_s,
				""_s
			}))
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
			$of(u"\u0987\u09b8\u09b2\u09be\u09ae\u09bf\u0995 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("night1:20:00-04:00;morning2:06:00-12:00;afternoon1:12:00-16:00;morning1:04:00-06:00;afternoon2:16:00-18:00;evening1:18:00-20:00"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u09b8\u09ae\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u09b9\u09be\u099c\u09be\u09b0 other:0\' \'\u09b9\u09be\u099c\u09be\u09b0}"_s,
				u"{one:00\' \'\u09b9\u09be\u099c\u09be\u09b0 other:00\' \'\u09b9\u09be\u099c\u09be\u09b0}"_s,
				u"{one:0\' \'\u09b2\u09be\u0996 other:0\' \'\u09b2\u09be\u0996}"_s,
				u"{one:00\' \'\u09b2\u09be\u0996 other:00\' \'\u09b2\u09be\u0996}"_s,
				u"{one:0\' \'\u0995\u09cb\u099f\u09bf other:0\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:00\' \'\u0995\u09cb\u099f\u09bf other:00\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:000\' \'\u0995\u09cb\u099f\u09bf other:000\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:0000\' \'\u0995\u09cb\u099f\u09bf other:0000\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:00000\' \'\u0995\u09cb\u099f\u09bf other:00000\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:0\' \'\u09b2\u09be\u0996\' \'\u0995\u09cb\u099f\u09bf other:0\' \'\u09b2\u09be\u0996\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:00\' \'\u09b2\u09be\u0996\' \'\u0995\u09cb\u099f\u09bf other:00\' \'\u09b2\u09be\u0996\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:000\' \'\u09b2\u09be\u0996\' \'\u0995\u09cb\u099f\u09bf other:000\' \'\u09b2\u09be\u0996\' \'\u0995\u09cb\u099f\u09bf}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of(metaValue_QuarterNames)
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
			$of(u"\u09b8\u09ae\u09af\u09bc \u0985\u099e\u09cd\u099a\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u09b8\u09aa\u09cd\u09a4\u09be\u09b9\u09c7\u09b0 \u09a6\u09bf\u09a8"_s)
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
			$of(metaValue_QuarterNames)
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
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u09b8\u09aa\u09cd\u09a4\u09be\u09b9"_s)
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
			$of(metaValue_QuarterNarrows)
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
				u"{one:0\u00a0\u09b9\u09be other:0\u00a0\u09b9\u09be}"_s,
				u"{one:00\u00a0\u09b9\u09be other:00\u00a0\u09b9\u09be}"_s,
				u"{one:0\u00a0\u09b2\u09be other:0\u00a0\u09b2\u09be}"_s,
				u"{one:00\u00a0\u09b2\u09be other:00\u00a0\u09b2\u09be}"_s,
				u"{one:0\u00a0\u0995\u09cb other:0\u00a0\u0995\u09cb}"_s,
				u"{one:00\u00a0\u0995\u09cb other:00\u00a0\u0995\u09cb}"_s,
				u"{one:000\u00a0\u0995\u09cb other:000\u00a0\u0995\u09cb}"_s,
				u"{one:00\u00a0\u09b6\u09a4\u00a0\u0995\u09cb other:00\u09b6\u09a4\u00a0\u0995\u09cb}"_s,
				u"{one:000\u0995\u09cb other:000\u0995\u09cb}"_s,
				u"{one:0\u00a0\u09b2\u09be\'.\'\u0995\u09cb\'.\' other:0\u00a0\u09b2\u09be\'.\'\u0995\u09cb\'.\'}"_s,
				u"{one:00\u00a0\u09b2\u09be\'.\'\u0995\u09cb\'.\' other:00\u00a0\u09b2\u09be\'.\'\u0995\u09cb\'.\'}"_s,
				u"{one:000\u00a0\u09b2\u09be\'.\'\u0995\u09cb\'.\' other:000\u00a0\u09b2\u09be\'.\'\u0995\u09cb\'.\'}"_s
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
			$of(u"{0} \u09a6\u09bf\u09ac\u09be\u09b2\u09cb\u0995 \u09b8\u09ae\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
				"d/M/yy"_s
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
			$of(u"\u0998\u09a3\u09cd\u099f\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(metaValue_islamic_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u09ac\u09cc\u09a6\u09cd\u09a7 \u0995\u09cd\u09af\u09be\u09b2\u09c7\u09a8\u09cd\u09a1\u09be\u09b0"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"#,##,##0.00\u00a4"_s,
				"#,##,##0%"_s,
				u"#,##,##0.00\u00a4;(#,##,##0.00\u00a4)"_s
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_bn::FormatData_bn() {
}

$Class* FormatData_bn::load$($String* name, bool initialize) {
	$loadClass(FormatData_bn, name, initialize, &_FormatData_bn_ClassInfo_, allocate$FormatData_bn);
	return class$;
}

$Class* FormatData_bn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun