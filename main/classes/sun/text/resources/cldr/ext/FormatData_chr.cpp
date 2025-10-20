#include <sun/text/resources/cldr/ext/FormatData_chr.h>

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

$MethodInfo _FormatData_chr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_chr::*)()>(&FormatData_chr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_chr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_chr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_chr_MethodInfo_
};

$Object* allocate$FormatData_chr($Class* clazz) {
	return $of($alloc(FormatData_chr));
}

void FormatData_chr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_chr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u13a4\u13c3\u13b8\u13d4\u13c5"_s,
		u"\u13a7\u13a6\u13b5"_s,
		u"\u13a0\u13c5\u13f1"_s,
		u"\u13a7\u13ec\u13c2"_s,
		u"\u13a0\u13c2\u13cd\u13ac\u13d8"_s,
		u"\u13d5\u13ad\u13b7\u13f1"_s,
		u"\u13ab\u13f0\u13c9\u13c2"_s,
		u"\u13a6\u13b6\u13c2"_s,
		u"\u13da\u13b5\u13cd\u13d7"_s,
		u"\u13da\u13c2\u13c5\u13d7"_s,
		u"\u13c5\u13d3\u13d5\u13c6"_s,
		u"\u13a5\u13cd\u13a9\u13f1"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u13a4\u13c3"_s,
		u"\u13a7\u13a6"_s,
		u"\u13a0\u13c5"_s,
		u"\u13a7\u13ec"_s,
		u"\u13a0\u13c2"_s,
		u"\u13d5\u13ad"_s,
		u"\u13ab\u13f0"_s,
		u"\u13a6\u13b6"_s,
		u"\u13da\u13b5"_s,
		u"\u13da\u13c2"_s,
		u"\u13c5\u13d3"_s,
		u"\u13a5\u13cd"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u13a4"_s,
		u"\u13a7"_s,
		u"\u13a0"_s,
		u"\u13a7"_s,
		u"\u13a0"_s,
		u"\u13d5"_s,
		u"\u13ab"_s,
		u"\u13a6"_s,
		u"\u13da"_s,
		u"\u13da"_s,
		u"\u13c5"_s,
		u"\u13a5"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u13a4\u13be\u13d9\u13d3\u13c6\u13cd\u13ac"_s,
		u"\u13a4\u13be\u13d9\u13d3\u13c9\u13c5\u13af"_s,
		u"\u13d4\u13b5\u13c1\u13a2\u13a6"_s,
		u"\u13e6\u13a2\u13c1\u13a2\u13a6"_s,
		u"\u13c5\u13a9\u13c1\u13a2\u13a6"_s,
		u"\u13e7\u13be\u13a9\u13b6\u13cd\u13d7"_s,
		u"\u13a4\u13be\u13d9\u13d3\u13c8\u13d5\u13be"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u13c6\u13cd\u13ac"_s,
		u"\u13c9\u13c5\u13af"_s,
		u"\u13d4\u13b5\u13c1"_s,
		u"\u13e6\u13a2\u13c1"_s,
		u"\u13c5\u13a9\u13c1"_s,
		u"\u13e7\u13be\u13a9"_s,
		u"\u13c8\u13d5\u13be"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u13c6"_s,
		u"\u13c9"_s,
		u"\u13d4"_s,
		u"\u13e6"_s,
		u"\u13c5"_s,
		u"\u13e7"_s,
		u"\u13a4"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1st \u13a9\u13c4\u13d9\u13d7"_s,
		u"2nd \u13a9\u13c4\u13d9\u13d7"_s,
		u"3rd \u13a9\u13c4\u13d9\u13d7"_s,
		u"4th \u13a9\u13c4\u13d9\u13d7"_s
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u13cc\u13be\u13b4"_s,
		u"\u13d2\u13af\u13f1\u13a2\u13d7\u13e2"_s,
		""_s,
		u"\u13a2\u13a6"_s,
		u"\u13cc\u13be\u13b4"_s,
		""_s,
		u"\u13d2\u13af\u13f1\u13a2\u13d7\u13e2"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u13cc"_s,
		u"\u13d2"_s,
		""_s,
		u"\u13a2"_s,
		u"\u13cc\u13be\u13b4"_s,
		""_s,
		u"\u13d2\u13af\u13f1\u13a2\u13d7\u13e2"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u13cc\u13be\u13b4"_s,
		u"\u13d2\u13af\u13f1\u13a2"_s,
		""_s,
		u"\u13a2\u13a6"_s,
		u"\u13cc\u13be\u13b4"_s,
		""_s,
		u"\u13d2\u13af\u13f1\u13a2\u13d7\u13e2"_s,
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
	$var($String, metaValue_calendarname_gregorian, u"\u13a9\u13b4\u13aa\u13b5\u13a0\u13c2 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u13a4\u13d5\u13d8\u13f4\u13cc\u13d7\u13d2\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u13a0\u13df\u13b6\u13cd\u13d7 \u13a0\u13df\u13a2\u13b5\u13d2"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u13e3\u13c6\u13c2\u13cf \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
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
				u"\u13e7\u13d3\u13b7\u13b8 \u13a4\u13b7\u13af\u13cd\u13d7 \u13a6\u13b6\u13c1\u13db"_s,
				u"\u13a0\u13c3 \u13d9\u13bb\u13c2"_s
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
				u"{1} \u13a4\u13be\u13a2 {0}"_s,
				u"{1} \u13a4\u13be\u13a2 {0}"_s,
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
			$of(u"\u13a2\u13ef\u13d4\u13ec\u13cd\u13d4\u13c5"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u13d7\u13d3\u13b4\u13c2\u13cd\u13ac"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u13cc\u13be\u13b4/\u13d2\u13af\u13f1"_s)
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
			$of(u"\u13cd\u13a6\u13da\u13a9 \u13be\u13bf \u13d3\u13b6\u13c2\u13a8\u13cd\u13db \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u13a7\u13b8\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u13a0\u13ce\u13e2"_s)
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
			$of(u"\u13a2\u13cd\u13b3\u13bb\u13a9 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("noon:12:00;afternoon1:12:00-24:00;morning1:00:00-12:00"_s)
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
			$of(u"{0} \u13a0\u13df\u13a2\u13b5\u13d2"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u13a2\u13ef\u13a6\u13f4\u13b5 other:0\' \'\u13a2\u13ef\u13a6\u13f4\u13b5}"_s,
				u"{one:00\' \'\u13a2\u13ef\u13a6\u13f4\u13b5 other:00\' \'\u13a2\u13ef\u13a6\u13f4\u13b5}"_s,
				u"{one:000\' \'\u13a2\u13ef\u13a6\u13f4\u13b5 other:000\' \'\u13a2\u13ef\u13a6\u13f4\u13b5}"_s,
				u"{one:0\' \'\u13a2\u13f3\u13c6\u13d7\u13c5\u13db other:0\' \'\u13a2\u13f3\u13c6\u13d7\u13c5\u13db}"_s,
				u"{one:00\' \'\u13a2\u13f3\u13c6\u13d7\u13c5\u13db other:00\' \'\u13a2\u13f3\u13c6\u13d7\u13c5\u13db}"_s,
				u"{one:000\' \'\u13a2\u13f3\u13c6\u13d7\u13c5\u13db other:000\' \'\u13a2\u13f3\u13c6\u13d7\u13c5\u13db}"_s,
				u"{one:0\' \'\u13a2\u13ef\u13d4\u13b3\u13d7\u13c5\u13db other:0\' \'\u13a2\u13ef\u13d4\u13b3\u13d7\u13c5\u13db}"_s,
				u"{one:00\' \'\u13a2\u13ef\u13d4\u13b3\u13d7\u13c5\u13db other:00\' \'\u13a2\u13ef\u13d4\u13b3\u13d7\u13c5\u13db}"_s,
				u"{one:000\' \'\u13a2\u13ef\u13d4\u13b3\u13d7\u13c5\u13db other:000\' \'\u13a2\u13ef\u13d4\u13b3\u13d7\u13c5\u13db}"_s,
				u"{one:0\' \'\u13a2\u13ef\u13e6\u13a0\u13d7\u13c5\u13db other:0\' \'\u13a2\u13ef\u13e6\u13a0\u13d7\u13c5\u13db}"_s,
				u"{one:00\' \'\u13a2\u13ef\u13e6\u13a0\u13d7\u13c5\u13db other:00\' \'\u13a2\u13ef\u13e6\u13a0\u13d7\u13c5\u13db}"_s,
				u"{one:000\' \'\u13a2\u13ef\u13e6\u13a0\u13d7\u13c5\u13db other:000\' \'\u13a2\u13ef\u13e6\u13a0\u13d7\u13c5\u13db}"_s
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
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(u"\u13c2\u13ac\u13be\u13db \u13e7\u13d3\u13b4\u13c5\u13d3 \u13d3\u13df\u13a2\u13b5\u13cd\u13d2\u13a2"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of(u"\u13a2\u13a6 \u13d5\u13a8\u13cc\u13d7\u13d2"_s)
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
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of(u"\u13d2\u13be\u13d9\u13d3\u13c6\u13cd\u13d7"_s)
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
				"{one:0K other:0K}"_s,
				"{one:00K other:00K}"_s,
				"{one:000K other:000K}"_s,
				"{one:0M other:0M}"_s,
				"{one:00M other:00M}"_s,
				"{one:000M other:000M}"_s,
				"{one:0B other:0B}"_s,
				"{one:00B other:00B}"_s,
				"{one:000B other:000B}"_s,
				"{one:0T other:0T}"_s,
				"{one:00T other:00T}"_s,
				"{one:000T other:000T}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u13aa\u13af \u13a2\u13a6 \u13a0\u13df\u13a2\u13b5\u13d2"_s)
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
			$of(metaValue_MonthAbbreviations)
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
			$of(u"\u13d1\u13df\u13b6\u13d3"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u13ca\u13d7\u13cd\u13d8 \u13c5\u13d9 \u13d7\u13ce\u13cd\u13d7"_s)
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

FormatData_chr::FormatData_chr() {
}

$Class* FormatData_chr::load$($String* name, bool initialize) {
	$loadClass(FormatData_chr, name, initialize, &_FormatData_chr_ClassInfo_, allocate$FormatData_chr);
	return class$;
}

$Class* FormatData_chr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun