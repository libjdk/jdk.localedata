#include <sun/text/resources/cldr/ext/FormatData_ug.h>

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

$MethodInfo _FormatData_ug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ug::*)()>(&FormatData_ug::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ug",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ug_MethodInfo_
};

$Object* allocate$FormatData_ug($Class* clazz) {
	return $of($alloc(FormatData_ug));
}

void FormatData_ug::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ug::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u064a\u0627\u0646\u06cb\u0627\u0631"_s,
		u"\u0641\u06d0\u06cb\u0631\u0627\u0644"_s,
		u"\u0645\u0627\u0631\u062a"_s,
		u"\u0626\u0627\u067e\u0631\u06d0\u0644"_s,
		u"\u0645\u0627\u064a"_s,
		u"\u0626\u0649\u064a\u06c7\u0646"_s,
		u"\u0626\u0649\u064a\u06c7\u0644"_s,
		u"\u0626\u0627\u06cb\u063a\u06c7\u0633\u062a"_s,
		u"\u0633\u06d0\u0646\u062a\u06d5\u0628\u0649\u0631"_s,
		u"\u0626\u06c6\u0643\u062a\u06d5\u0628\u0649\u0631"_s,
		u"\u0646\u0648\u064a\u0627\u0628\u0649\u0631"_s,
		u"\u062f\u06d0\u0643\u0627\u0628\u0649\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u064a\u06d5\u0643\u0634\u06d5\u0646\u0628\u06d5"_s,
		u"\u062f\u06c8\u0634\u06d5\u0646\u0628\u06d5"_s,
		u"\u0633\u06d5\u064a\u0634\u06d5\u0646\u0628\u06d5"_s,
		u"\u0686\u0627\u0631\u0634\u06d5\u0646\u0628\u06d5"_s,
		u"\u067e\u06d5\u064a\u0634\u06d5\u0646\u0628\u06d5"_s,
		u"\u062c\u06c8\u0645\u06d5"_s,
		u"\u0634\u06d5\u0646\u0628\u06d5"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u064a\u06d5"_s,
		u"\u062f\u06c8"_s,
		u"\u0633\u06d5"_s,
		u"\u0686\u0627"_s,
		u"\u067e\u06d5"_s,
		u"\u062c\u06c8"_s,
		u"\u0634\u06d5"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u064a"_s,
		u"\u062f"_s,
		u"\u0633"_s,
		u"\u0686"_s,
		u"\u067e"_s,
		u"\u062c"_s,
		u"\u0634"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0628\u0649\u0631\u0649\u0646\u0686\u0649 \u067e\u06d5\u0633\u0649\u0644"_s,
		u"\u0626\u0649\u0643\u0643\u0649\u0646\u0686\u0649 \u067e\u06d5\u0633\u0649\u0644"_s,
		u"\u0626\u06c8\u0686\u0649\u0646\u0686\u0649 \u067e\u06d5\u0633\u0649\u0644"_s,
		u"\u062a\u06c6\u062a\u0649\u0646\u0686\u0649 \u067e\u06d5\u0633\u0649\u0644"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u067e\u06d5\u0633\u0649\u0644"_s,
		u"2-\u067e\u06d5\u0633\u0649\u0644"_s,
		u"3-\u067e\u06d5\u0633\u0649\u0644"_s,
		u"4-\u067e\u06d5\u0633\u0649\u0644"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0686\u06c8\u0634\u062a\u0649\u0646 \u0628\u06c7\u0631\u06c7\u0646"_s,
		u"\u0686\u06c8\u0634\u062a\u0649\u0646 \u0643\u06d0\u064a\u0649\u0646"_s,
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
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0628"_s,
		u"\u0643"_s,
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
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u0686.\u0628"_s,
		u"\u0686.\u0643"_s,
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
		"BCE"_s,
		u"\u0645\u0649\u0644\u0627\u062f\u0649\u064a\u06d5"_s
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
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0628\u06c7\u062f\u062f\u0627 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u060c MMMM d\u060c y G"_s,
		u"MMMM d\u060c y G"_s,
		u"MMM d\u060c y G"_s,
		"M/d/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u060c MMMM d\u060c y GGGG"_s,
		u"MMMM d\u060c y GGGG"_s,
		u"MMM d\u060c y GGGG"_s,
		"M/d/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u062c\u06c7\u06ad\u062e\u06c7\u0627 \u0645\u0649\u0646\u06af\u0648\u062f\u0649\u0646 \u0628\u06c7\u0631\u06c7\u0646"_s,
		u"\u0645\u0649\u0646\u06af\u0648"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		"Before R.O.C."_s,
		u"\u0645\u0649\u0646\u06af\u0648"_s
	}));
	$var($StringArray, metaValue_islamic_MonthNames, $new($StringArray, {
		u"\u0645\u06c7\u06be\u06d5\u0631\u0631\u06d5\u0645"_s,
		u"\u0633\u06d5\u067e\u06d5\u0631"_s,
		u"\u0631\u06d5\u0628\u0649\u0626\u06c7\u0644\u0626\u06d5\u06cb\u06cb\u06d5\u0644"_s,
		u"\u0631\u06d5\u0628\u0649\u0626\u06c7\u0644\u0626\u0627\u062e\u0649\u0631"_s,
		u"\u062c\u06d5\u0645\u0627\u062f\u0649\u064a\u06d5\u0644\u0626\u06d5\u06cb\u06cb\u06d5\u0644"_s,
		u"\u062c\u06d5\u0645\u0627\u062f\u0649\u064a\u06d5\u0644\u0626\u0627\u062e\u0649\u0631"_s,
		u"\u0631\u06d5\u062c\u06d5\u0628"_s,
		u"\u0634\u06d5\u0626\u0628\u0627\u0646"_s,
		u"\u0631\u0627\u0645\u0649\u0632\u0627\u0646"_s,
		u"\u0634\u06d5\u06cb\u06cb\u0627\u0644"_s,
		u"\u0632\u06c7\u0644\u0642\u06d5\u0626\u062f\u06d5"_s,
		u"\u0632\u06c7\u0644\u06be\u06d5\u062c\u062c\u06d5"_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u06be\u0649\u062c\u0631\u0649\u064a\u06d5"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0645\u0649\u0644\u0627\u062f\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u064a\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649 (\u0626\u06c7\u0645 \u0626\u06d5\u0644\u0642\u06c7\u0631\u0627)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, MMMM d\u060c y G"_s,
				u"MMMM d\u060c y G"_s,
				u"MMM d\u060c y G"_s,
				"M/d/y GGGGG"_s
			}))
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
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649 (\u0645\u06d5\u062f\u0649\u0646\u06d5)"_s)
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
			$of(u"{0} \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u064a\u0627\u067e\u0648\u0646\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
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
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0645\u0649\u0644\u0627\u062f\u0649\u064a\u06d5\u062f\u0649\u0646 \u0628\u06c7\u0631\u06c7\u0646"_s,
				u"\u0645\u0649\u0644\u0627\u062f\u0649\u064a\u06d5"_s
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
				"{1} {0}"_s,
				"{1} {0}"_s,
				u"{1}\u060c {0}"_s,
				u"{1}\u060c {0}"_s
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
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, MMMM d\u060c y GGGG"_s,
				u"MMMM d\u060c y GGGG"_s,
				u"MMM d\u060c y GGGG"_s,
				"M/d/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0645\u0649\u0646\u06c7\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0645\u0649\u0644\u0627\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0686\u06c8\u0634\u062a\u0649\u0646 \u0628\u06c7\u0631\u06c7\u0646/\u0686\u06c8\u0634\u062a\u0649\u0646 \u0643\u06d0\u064a\u0649\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(metaValue_islamic_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0645\u0649\u0646\u06af\u0648 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM\u060c y GGGG"_s,
				u"d MMMM\u060c y GGGG"_s,
				u"d MMM\u060c y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
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
			$of(u"\u0626\u0627\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0633\u06d0\u0643\u06c7\u0646\u062a"_s)
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
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
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
			$of(u"{0} \u06cb\u0627\u0642\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0645\u0649\u06ad other:0\' \'\u0645\u0649\u06ad}"_s,
				u"{one:00\' \'\u0645\u0649\u06ad other:00\' \'\u0645\u0649\u06ad}"_s,
				u"{one:000\' \'\u0645\u0649\u06ad other:000\' \'\u0645\u0649\u06ad}"_s,
				u"{one:0\' \'\u0645\u0649\u0644\u064a\u0648\u0646 other:0\' \'\u0645\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:00\' \'\u0645\u0649\u0644\u064a\u0648\u0646 other:00\' \'\u0645\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:000\' \'\u0645\u0649\u0644\u064a\u0648\u0646 other:000\' \'\u0645\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:0\' \'\u0645\u0649\u0644\u064a\u0627\u0631\u062f other:0\' \'\u0645\u0649\u0644\u064a\u0627\u0631\u062f}"_s,
				u"{one:00\' \'\u0645\u0649\u0644\u064a\u0627\u0631\u062f other:00\' \'\u0645\u0649\u0644\u064a\u0627\u0631\u062f}"_s,
				u"{one:000\' \'\u0645\u0649\u0644\u064a\u0627\u0631\u062f other:000\' \'\u0645\u0649\u0644\u064a\u0627\u0631\u062f}"_s,
				u"{one:0\' \'\u062a\u0649\u0631\u0649\u0644\u064a\u0648\u0646 other:0\' \'\u062a\u0649\u0631\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:00\' \'\u062a\u0649\u0631\u0649\u0644\u064a\u0648\u0646 other:00\' \'\u062a\u0649\u0631\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:000\' \'\u062a\u0649\u0631\u0649\u0644\u064a\u0648\u0646 other:000\' \'\u062a\u0649\u0631\u0649\u0644\u064a\u0648\u0646}"_s
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
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u06cb\u0627\u0642\u0649\u062a \u0631\u0627\u064a\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
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
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM\u060c y G"_s,
				u"d MMMM\u060c y G"_s,
				u"d MMM\u060c y G"_s,
				u"d\u200f/M\u200f/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u06be\u06d5\u067e\u062a\u06d5 \u0643\u06c8\u0646\u0644\u0649\u0631\u0649"_s)
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
			$of(metaValue_java_time_buddhist_Eras)
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
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u06be\u06d5\u067e\u062a\u06d5"_s)
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
				u"{one:0\u0645\u0649\u06ad other:0\u0645\u0649\u06ad}"_s,
				u"{one:00\u0645\u0649\u06ad other:00\u0645\u0649\u06ad}"_s,
				u"{one:000\u0645\u0649\u06ad other:000\u0645\u0649\u06ad}"_s,
				u"{one:0\u0645\u0649\u0644\u064a\u0648\u0646 other:0\u0645\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:00\u0645\u0649\u0644\u064a\u0648\u0646 other:00\u0645\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:000\u0645\u0649\u0644\u064a\u0648\u0646 other:000\u0645\u0649\u0644\u064a\u0648\u0646}"_s,
				u"{one:0\u0645\u0649\u0644\u064a\u0627\u0631\u062f other:0\u0645\u0649\u0644\u064a\u0627\u0631\u062f}"_s,
				u"{one:00\u0645\u0649\u0644\u064a\u0627\u0631\u062f other:00\u0645\u0649\u0644\u064a\u0627\u0631\u062f}"_s,
				u"{one:000\u0645\u0649\u0644\u064a\u0627\u0631\u062f other:000\u0645\u0649\u0644\u064a\u0627\u0631\u062f}"_s,
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
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y d-MMMM\u060c EEEE"_s,
				u"d-MMMM\u060c y"_s,
				u"d-MMM\u060c y"_s,
				"y-MM-dd"_s
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
			$of(u"\u0633\u0627\u0626\u06d5\u062a"_s)
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
			$of(u"\u0628\u06c7\u062f\u062f\u0627 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
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

FormatData_ug::FormatData_ug() {
}

$Class* FormatData_ug::load$($String* name, bool initialize) {
	$loadClass(FormatData_ug, name, initialize, &_FormatData_ug_ClassInfo_, allocate$FormatData_ug);
	return class$;
}

$Class* FormatData_ug::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun