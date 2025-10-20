#include <sun/text/resources/cldr/ext/FormatData_or.h>

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

$MethodInfo _FormatData_or_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_or::*)()>(&FormatData_or::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_or_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_or",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_or_MethodInfo_
};

$Object* allocate$FormatData_or($Class* clazz) {
	return $of($alloc(FormatData_or));
}

void FormatData_or::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_or::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0b1c\u0b3e\u0b28\u0b41\u0b06\u0b30\u0b40"_s,
		u"\u0b2b\u0b47\u0b2c\u0b43\u0b06\u0b30\u0b40"_s,
		u"\u0b2e\u0b3e\u0b30\u0b4d\u0b1a\u0b4d\u0b1a"_s,
		u"\u0b05\u0b2a\u0b4d\u0b30\u0b47\u0b32"_s,
		u"\u0b2e\u0b07"_s,
		u"\u0b1c\u0b41\u0b28"_s,
		u"\u0b1c\u0b41\u0b32\u0b3e\u0b07"_s,
		u"\u0b05\u0b17\u0b37\u0b4d\u0b1f"_s,
		u"\u0b38\u0b47\u0b2a\u0b4d\u0b1f\u0b47\u0b2e\u0b4d\u0b2c\u0b30"_s,
		u"\u0b05\u0b15\u0b4d\u0b1f\u0b4b\u0b2c\u0b30"_s,
		u"\u0b28\u0b2d\u0b47\u0b2e\u0b4d\u0b2c\u0b30"_s,
		u"\u0b21\u0b3f\u0b38\u0b47\u0b2e\u0b4d\u0b2c\u0b30"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0b1c\u0b3e"_s,
		u"\u0b2b\u0b47"_s,
		u"\u0b2e\u0b3e"_s,
		u"\u0b05"_s,
		u"\u0b2e\u0b07"_s,
		u"\u0b1c\u0b41"_s,
		u"\u0b1c\u0b41"_s,
		u"\u0b05"_s,
		u"\u0b38\u0b47"_s,
		u"\u0b05"_s,
		u"\u0b28"_s,
		u"\u0b21\u0b3f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0b30\u0b2c\u0b3f\u0b2c\u0b3e\u0b30"_s,
		u"\u0b38\u0b4b\u0b2e\u0b2c\u0b3e\u0b30"_s,
		u"\u0b2e\u0b19\u0b4d\u0b17\u0b33\u0b2c\u0b3e\u0b30"_s,
		u"\u0b2c\u0b41\u0b27\u0b2c\u0b3e\u0b30"_s,
		u"\u0b17\u0b41\u0b30\u0b41\u0b2c\u0b3e\u0b30"_s,
		u"\u0b36\u0b41\u0b15\u0b4d\u0b30\u0b2c\u0b3e\u0b30"_s,
		u"\u0b36\u0b28\u0b3f\u0b2c\u0b3e\u0b30"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0b30\u0b2c\u0b3f"_s,
		u"\u0b38\u0b4b\u0b2e"_s,
		u"\u0b2e\u0b19\u0b4d\u0b17\u0b33"_s,
		u"\u0b2c\u0b41\u0b27"_s,
		u"\u0b17\u0b41\u0b30\u0b41"_s,
		u"\u0b36\u0b41\u0b15\u0b4d\u0b30"_s,
		u"\u0b36\u0b28\u0b3f"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0b30"_s,
		u"\u0b38\u0b4b"_s,
		u"\u0b2e"_s,
		u"\u0b2c\u0b41"_s,
		u"\u0b17\u0b41"_s,
		u"\u0b36\u0b41"_s,
		u"\u0b36"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1\u0b2e \u0b24\u0b4d\u0b30\u0b5f\u0b2e\u0b3e\u0b38"_s,
		u"2\u0b5f \u0b24\u0b4d\u0b30\u0b5f\u0b2e\u0b3e\u0b38"_s,
		u"3\u0b5f \u0b24\u0b4d\u0b30\u0b5f\u0b2e\u0b3e\u0b38"_s,
		u"4\u0b30\u0b4d\u0b25 \u0b24\u0b4d\u0b30\u0b5f\u0b2e\u0b3e\u0b38"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0b2a\u0b42"_s,
		u"\u0b05"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"BC"_s,
		"AD"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_buddhist_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, MMMM d, y G"_s,
		"MMMM d, y G"_s,
		"MMM d, y G"_s,
		"M/d/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, MMMM d, y GGGG"_s,
		"MMMM d, y GGGG"_s,
		"MMM d, y GGGG"_s,
		"M/d/y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0b17\u0b4d\u0b30\u0b47\u0b17\u0b4b\u0b30\u0b3f\u0b5f \u0b15\u0b4d\u0b5f\u0b3e\u0b32\u0b47\u0b23\u0b4d\u0b21\u0b30\u0b4d"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0b2c\u0b30\u0b4d\u0b37"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
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
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u0b2e\u0b3e\u0b28\u0b3e\u0b19\u0b4d\u0b15 \u0b38\u0b2e\u0b5f"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0b1c\u0b3e\u0b2a\u0b3e\u0b28\u0b3f\u0b1c\u0b4d\u200c \u0b15\u0b4d\u0b5f\u0b3e\u0b32\u0b47\u0b23\u0b4d\u0b21\u0b30\u0b4d\u200c"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0b16\u0b4d\u0b30\u0b40\u0b37\u0b4d\u0b1f\u0b2a\u0b42\u0b30\u0b4d\u0b2c"_s,
				u"\u0b16\u0b4d\u0b30\u0b40\u0b37\u0b4d\u0b1f\u0b3e\u0b2c\u0b4d\u0b26"_s
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{0} \u0b20\u0b3e\u0b30\u0b47 {1}"_s,
				u"{0} \u0b20\u0b3e\u0b30\u0b47 {1}"_s,
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
			$of(u"\u0b2e\u0b3f\u0b28\u0b3f\u0b1f\u0b4d"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0b2f\u0b41\u0b17"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0b2a\u0b42\u0b30\u0b4d\u0b2c\u0b3e\u0b39\u0b4d\u0b28/\u0b05\u0b2a\u0b30\u0b3e\u0b39\u0b4d\u0b28"_s)
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
			$of(u"\u0b2e\u0b3f\u0b19\u0b4d\u0b17\u0b4b\u0b13 \u0b15\u0b4d\u0b5f\u0b3e\u0b32\u0b47\u0b23\u0b4d\u0b21\u0b30\u0b4d\u200c"_s)
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
			$of("field.month"_s),
			$of(u"\u0b2e\u0b3e\u0b38"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0b38\u0b47\u0b15\u0b47\u0b23\u0b4d\u0b21\u0b4d"_s)
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
			$of(u"\u0b07\u0b38\u0b32\u0b3e\u0b2e\u0b3f\u0b15\u0b4d\u200c \u0b15\u0b4d\u0b5f\u0b3e\u0b32\u0b47\u0b23\u0b4d\u0b21\u0b30\u0b4d\u200c"_s)
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
			$of(u"{0} \u0b38\u0b2e\u0b5f"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0b39\u0b1c\u0b3e\u0b30 other:0\' \'\u0b39\u0b1c\u0b3e\u0b30}"_s,
				u"{one:00\' \'\u0b39\u0b1c\u0b3e\u0b30 other:00\' \'\u0b39\u0b1c\u0b3e\u0b30}"_s,
				u"{one:000\' \'\u0b39\u0b1c\u0b3e\u0b30 other:000\' \'\u0b39\u0b1c\u0b3e\u0b30}"_s,
				u"{one:0\' \'\u0b28\u0b3f\u0b5f\u0b41\u0b24 other:0\' \'\u0b28\u0b3f\u0b5f\u0b41\u0b24}"_s,
				u"{one:00\' \'\u0b28\u0b3f\u0b5f\u0b41\u0b24 other:00\' \'\u0b28\u0b3f\u0b5f\u0b41\u0b24}"_s,
				u"{one:000\' \'\u0b28\u0b3f\u0b5f\u0b41\u0b24 other:000\' \'\u0b28\u0b3f\u0b5f\u0b41\u0b24}"_s,
				u"{one:0\' \'\u0b36\u0b39\u0b15\u0b4b\u0b1f\u0b3f other:0\' \'\u0b36\u0b39\u0b15\u0b4b\u0b1f\u0b3f}"_s,
				u"{one:00\' \'\u0b36\u0b39\u0b15\u0b4b\u0b1f\u0b3f other:00\' \'\u0b36\u0b39\u0b15\u0b4b\u0b1f\u0b3f}"_s,
				u"{one:000\' \'\u0b36\u0b39\u0b15\u0b4b\u0b1f\u0b3f other:000\' \'\u0b36\u0b39\u0b15\u0b4b\u0b1f\u0b3f}"_s,
				u"{one:0\' \'\u0b32\u0b15\u0b4d\u0b37\u0b15\u0b4b\u0b1f\u0b3f other:0\' \'\u0b32\u0b15\u0b4d\u0b37\u0b15\u0b4b\u0b1f\u0b3f}"_s,
				u"{one:00\' \'\u0b32\u0b15\u0b4d\u0b37\u0b15\u0b4b\u0b1f\u0b3f other:00\' \'\u0b32\u0b15\u0b4d\u0b37\u0b15\u0b4b\u0b1f\u0b3f}"_s,
				u"{one:000\' \'\u0b32\u0b15\u0b4d\u0b37\u0b15\u0b4b\u0b1f\u0b3f other:000\' \'\u0b32\u0b15\u0b4d\u0b37\u0b15\u0b4b\u0b1f\u0b3f}"_s
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
			$of("orya.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
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
			$of(u"\u0b38\u0b2e\u0b5f \u0b15\u0b4d\u0b37\u0b47\u0b24\u0b4d\u0b30"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0b38. \u0b30 \u0b26\u0b3f\u0b28"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
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
			$of(metaValue_QuarterNames)
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
			$of("field.week"_s),
			$of(u"\u0b38\u0b2a\u0b4d\u0b24\u0b3e\u0b39"_s)
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
			$of("orya.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0b66"_s,
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
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
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
				u"{one:0\u0b39 other:0\u0b39}"_s,
				u"{one:00\u0b39 other:00\u0b39}"_s,
				u"{one:000\u0b39 other:000\u0b39}"_s,
				u"{one:0\u0b28\u0b3f other:0\u0b28\u0b3f}"_s,
				u"{one:00\u0b28\u0b3f other:00\u0b28\u0b3f}"_s,
				u"{one:000\u0b28\u0b3f other:000\u0b28\u0b3f}"_s,
				u"{one:0\u0b2c\u0b3f other:0\u0b2c\u0b3f}"_s,
				u"{one:00\u0b2c\u0b3f other:00\u0b2c\u0b3f}"_s,
				u"{one:000\u0b2c\u0b3f other:000\u0b2c\u0b3f}"_s,
				u"{one:0\u0b1f\u0b4d\u0b30\u0b3f other:0\u0b1f\u0b4d\u0b30\u0b3f}"_s,
				u"{one:00\u0b1f\u0b4d\u0b30\u0b3f other:00\u0b1f\u0b4d\u0b30\u0b3f}"_s,
				u"{one:000\u0b1f\u0b4d\u0b30\u0b3f other:000\u0b1f\u0b4d\u0b30\u0b3f}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u0b26\u0b3f\u0b2c\u0b3e\u0b32\u0b4b\u0b15 \u0b38\u0b2e\u0b5f"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, y"_s,
				"MMMM d, y"_s,
				"MMM d, y"_s,
				"M/d/yy"_s
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0b18\u0b23\u0b4d\u0b1f\u0b3e"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0b2c\u0b4c\u0b26\u0b4d\u0b27\u0b27\u0b30\u0b4d\u0b2e\u0b3e\u0b32\u0b2e\u0b4d\u0b2c\u0b40\u0b19\u0b4d\u0b15 \u0b15\u0b4d\u0b5f\u0b3e\u0b32\u0b47\u0b23\u0b4d\u0b21\u0b30\u0b4d\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_or::FormatData_or() {
}

$Class* FormatData_or::load$($String* name, bool initialize) {
	$loadClass(FormatData_or, name, initialize, &_FormatData_or_ClassInfo_, allocate$FormatData_or);
	return class$;
}

$Class* FormatData_or::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun