#include <sun/text/resources/cldr/ext/FormatData_sd.h>

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

$MethodInfo _FormatData_sd_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sd::*)()>(&FormatData_sd::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sd_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sd",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sd_MethodInfo_
};

$Object* allocate$FormatData_sd($Class* clazz) {
	return $of($alloc(FormatData_sd));
}

void FormatData_sd::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sd::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u062c\u0646\u0648\u0631\u064a"_s,
		u"\u0641\u064a\u0628\u0631\u0648\u0631\u064a"_s,
		u"\u0645\u0627\u0631\u0686"_s,
		u"\u0627\u067e\u0631\u064a\u0644"_s,
		u"\u0645\u0626\u064a"_s,
		u"\u062c\u0648\u0646"_s,
		u"\u062c\u0648\u0644\u0627\u0621\u0650"_s,
		u"\u0622\u06af\u0633\u067d"_s,
		u"\u0633\u064a\u067e\u067d\u0645\u0628\u0631"_s,
		u"\u0622\u06aa\u067d\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0645\u0628\u0631"_s,
		u"\u068a\u0633\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"J"_s,
		"F"_s,
		"M"_s,
		"A"_s,
		"M"_s,
		"J"_s,
		"J"_s,
		"A"_s,
		"S"_s,
		"O"_s,
		"N"_s,
		"D"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0622\u0686\u0631"_s,
		u"\u0633\u0648\u0645\u0631"_s,
		u"\u0627\u06b1\u0627\u0631\u0648"_s,
		u"\u0627\u0631\u0628\u0639"_s,
		u"\u062e\u0645\u064a\u0633"_s,
		u"\u062c\u0645\u0639\u0648"_s,
		u"\u0687\u0646\u0687\u0631"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0622\u0686\u0631"_s,
		u"\u0633\u0648"_s,
		u"\u0627\u06b1\u0627\u0631\u0648"_s,
		u"\u0627\u0631\u0628\u0639"_s,
		u"\u062e\u0645"_s,
		u"\u062c\u0645\u0639\u0648"_s,
		u"\u0687\u0646\u0687\u0631"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u067e\u0647\u0631\u064a\u0646 \u067d\u064a \u0645\u0627\u0647\u064a"_s,
		u"\u067b\u064a\u0646 \u067d\u064a \u0645\u0627\u0647\u064a"_s,
		u"\u067d\u064a\u0646 \u067d\u064a \u0645\u0627\u0647\u064a"_s,
		u"\u0686\u0648\u067f\u064a\u0646 \u067d\u064a \u0645\u0627\u0647\u064a"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q5"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0635\u0628\u062d\u060c \u0645\u0646\u062c\u0647\u0646\u062f"_s,
		u"\u0645\u0646\u062c\u0647\u0646\u062f\u060c \u0634\u0627\u0645"_s,
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
		u"\u0635\u0628\u062d\u060c \u0645\u0646\u062c\u0647\u0646\u062f"_s,
		u"\u0634\u0627\u0645\u060c \u0645\u0646\u062c\u0647\u0646\u062f"_s,
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
		"CD"_s
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
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, metaValue_islamic_MonthNames, $new($StringArray, {
		u"\u0645\u062d\u0631\u0645"_s,
		u"\u0635\u0641\u0631"_s,
		u"\u0631\u0628\u064a\u0639 \u0627\u0644\u0627\u0648\u0644"_s,
		u"\u0631\u0628\u06cc\u0639 \u0627\u0644\u0627\u062e\u0631"_s,
		u"\u062c\u0645\u0627\u062f\u06cc \u0627\u0644\u0627\u0648\u0644"_s,
		u"\u062c\u0645\u0627\u062f\u064a \u0627\u0644\u0627\u062e\u0631"_s,
		u"\u0631\u062c\u0628"_s,
		u"\u0634\u0639\u0628\u0627\u0646"_s,
		u"\u0631\u0645\u0636\u0627\u0646"_s,
		u"\u0634\u0648\u0627\u0644"_s,
		u"\u0630\u0648\u0627\u0644\u0642\u0639\u062f"_s,
		u"\u0630\u0648\u0627\u0644\u062d\u062c\u06c1"_s,
		""_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u062c\u0627\u0631\u062c\u064a\u0627\u0626\u064a \u06aa\u0626\u0644\u064a\u0646\u068a\u0631"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0633\u0627\u0644"_s)
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
			$of(metaValue_AmPmMarkers)
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
			$of(u"{0} \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u0642\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arab"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u062c\u0627\u067e\u0627\u0646\u064a \u06aa\u0626\u0644\u064a\u0646\u068a\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0642\u0628\u0644 \u0645\u0633\u064a\u062d"_s,
				u"\u0639\u064a\u0633\u0648\u064a \u06a9\u0627\u0646 \u067e\u0647\u0631\u064a\u0646"_s
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
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(u"\u0645\u0646\u067d"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u062f\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0635\u0628\u062d/\u0634\u0627\u0645"_s)
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
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0645\u0646\u06af\u0648\u0648 \u06aa\u0626\u0644\u064a\u0646\u068a\u0631"_s)
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
			$of(u"\u0645\u0647\u064a\u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0633\u064a\u06aa\u0646\u068a"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of(u"\u0627\u0633\u0644\u0627\u0645\u064a \u06aa\u0626\u0644\u064a\u0646\u068a\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(u"{0} \u0648\u0642\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u06be\u0632\u0627\u0631 other:0\' \'\u06be\u0632\u0627\u0631}"_s,
				u"{one:00\' \'\u06be\u0632\u0627\u0631 other:00\' \'\u0647\u0632\u0627\u0631}"_s,
				u"{one:000\' \'\u0647\u0632\u0627\u0631 other:000\' \'\u0647\u0632\u0627\u0631}"_s,
				u"{one:0\' \'\u0645\u0644\u064a\u0646 other:0\' \'\u0645\u0644\u064a\u0646}"_s,
				u"{one:00\' \'\u0645\u0644\u064a\u0646 other:00\' \'\u0645\u0644\u064a\u0646}"_s,
				u"{one:000\' \'\u0645\u0644\u064a\u0646 other:000\' \'\u0645\u0644\u064a\u0646}"_s,
				u"{one:0\' \'\u0628\u0644\u064a\u0646 other:0\' \'\u0628\u0644\u064a\u0646}"_s,
				u"{one:00\' \'\u0628\u0644\u064a\u0646 other:00\' \'\u0628\u0644\u064a\u0646}"_s,
				u"{one:000\' \'\u0628\u0644\u064a\u0646 other:000\' \'\u0628\u0644\u064a\u0646}"_s,
				u"{one:0\' \'\u067d\u0631\u0644\u064a\u0646 other:0\' \'\u067d\u0631\u0644\u064a\u0646}"_s,
				u"{one:00\' \'\u067d\u0631\u0644\u064a\u0646 other:00\' \'\u067d\u0631\u0644\u064a\u0646}"_s,
				u"{one:000\' \'\u067d\u0631\u0644\u064a\u0646 other:000\' \'\u067d\u0631\u0644\u064a\u0646}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(metaValue_DayNames)
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
			$of(u"\u067d\u0627\u0626\u064a\u0645 \u0632\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(u"\u0647\u0641\u062a\u064a \u062c\u0648 \u068f\u064a\u0646\u0647\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of(u"\u0647\u0641\u062a\u0648"_s)
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
				u"{one:0\u00a0\u0647\u0632\u0627\u0631 other:0\u00a0\u0647\u0632\u0627\u0631}"_s,
				u"{one:00\u00a0\u0647\u0632\u0627\u0631 other:00\u00a0\u0647\u0632\u0627\u0631}"_s,
				u"{one:000\u00a0\u0647\u0632\u0627\u0631 other:000\u00a0\u0647\u0632\u0627\u0631}"_s,
				u"{one:0\u00a0\u0645\u0644\u064a\u0646 other:0\u00a0\u0645\u0644\u064a\u0646}"_s,
				u"{one:00\u00a0\u0645\u0644\u064a\u0646 other:00\u00a0\u0645\u0644\u064a\u0646}"_s,
				u"{one:000\u00a0\u0645\u0644\u064a\u0646 other:000\u00a0\u0645\u0644\u064a\u0646}"_s,
				u"{one:0\u00a0\u0628\u0644\u064a\u0646 other:0\u00a0\u0628\u0644\u064a\u0646}"_s,
				u"{one:00\u00a0\u0628\u0644\u064a\u0646 other:00\u00a0\u0628\u0644\u064a\u0646}"_s,
				u"{one:000\u00a0\u0628\u0644\u064a\u0646 other:000\u00a0\u0628\u0644\u064a\u0646}"_s,
				u"{one:0\u00a0\u067d\u0631\u0644\u064a\u0646 other:0\u00a0\u067d\u0631\u0644\u064a\u0646}"_s,
				u"{one:00\u00a0\u067d\u0631\u0644\u064a\u0646 other:00\u00a0\u067d\u0631\u0644\u064a\u0646}"_s,
				u"{one:000\u00a0\u067d\u0631\u0644\u064a\u0646 other:000\u00a0\u067d\u0631\u0644\u064a\u0646}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u068f\u064a\u0646\u0647\u0646 \u062c\u0648 \u0648\u0642\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y MMMM d, EEEE"_s,
				"y MMMM d"_s,
				"y MMM d"_s,
				"y-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of(u"\u06aa\u0644\u0627\u06aa"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(metaValue_islamic_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u067b\u068c \u068c\u0631\u0645 \u062c\u0648 \u06aa\u0626\u0644\u064a\u0646\u068a\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4\u00a0#,##0.00"_s
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

FormatData_sd::FormatData_sd() {
}

$Class* FormatData_sd::load$($String* name, bool initialize) {
	$loadClass(FormatData_sd, name, initialize, &_FormatData_sd_ClassInfo_, allocate$FormatData_sd);
	return class$;
}

$Class* FormatData_sd::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun