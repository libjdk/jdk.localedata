#include <sun/text/resources/cldr/ext/FormatData_ur.h>

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

$MethodInfo _FormatData_ur_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ur::*)()>(&FormatData_ur::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ur_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ur",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ur_MethodInfo_
};

$Object* allocate$FormatData_ur($Class* clazz) {
	return $of($alloc(FormatData_ur));
}

void FormatData_ur::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ur::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u062c\u0646\u0648\u0631\u06cc"_s,
		u"\u0641\u0631\u0648\u0631\u06cc"_s,
		u"\u0645\u0627\u0631\u0686"_s,
		u"\u0627\u067e\u0631\u06cc\u0644"_s,
		u"\u0645\u0626\u06cc"_s,
		u"\u062c\u0648\u0646"_s,
		u"\u062c\u0648\u0644\u0627\u0626\u06cc"_s,
		u"\u0627\u06af\u0633\u062a"_s,
		u"\u0633\u062a\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0645\u0628\u0631"_s,
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
		u"\u0627\u062a\u0648\u0627\u0631"_s,
		u"\u067e\u06cc\u0631"_s,
		u"\u0645\u0646\u06af\u0644"_s,
		u"\u0628\u062f\u06be"_s,
		u"\u062c\u0645\u0639\u0631\u0627\u062a"_s,
		u"\u062c\u0645\u0639\u06c1"_s,
		u"\u06c1\u0641\u062a\u06c1"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u067e\u06c1\u0644\u06cc \u0633\u06c1 \u0645\u0627\u06c1\u06cc"_s,
		u"\u062f\u0648\u0633\u0631\u06cc \u0633\u06c1 \u0645\u0627\u06c1\u06cc"_s,
		u"\u062a\u06cc\u0633\u0631\u06cc \u0633\u06c1 \u0645\u0627\u06c1\u06cc"_s,
		u"\u0686\u0648\u062a\u0647\u06cc \u0633\u06c1 \u0645\u0627\u06c1\u06cc"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0622\u062f\u06be\u06cc \u0631\u0627\u062a"_s,
		""_s,
		u"\u0635\u0628\u062d \u0645\u06cc\u06ba"_s,
		""_s,
		u"\u062f\u0648\u067e\u06c1\u0631 \u0645\u06cc\u06ba"_s,
		u"\u0633\u06c1 \u067e\u06c1\u0631"_s,
		u"\u0634\u0627\u0645 \u0645\u06cc\u06ba"_s,
		""_s,
		u"\u0631\u0627\u062a \u0645\u06cc\u06ba"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"\u0622\u062f\u06be\u06cc \u0631\u0627\u062a"_s,
		""_s,
		u"\u0635\u0628\u062d"_s,
		""_s,
		u"\u062f\u0648\u067e\u06c1\u0631"_s,
		u"\u0633\u06c1 \u067e\u06c1\u0631"_s,
		u"\u0634\u0627\u0645"_s,
		""_s,
		u"\u0631\u0627\u062a"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0622\u062f\u06be\u06cc \u0631\u0627\u062a"_s,
		""_s,
		u"\u0635\u0628\u062d"_s,
		""_s,
		u"\u062f\u0648\u067e\u06c1\u0631"_s,
		u"\u0633\u06c1 \u067e\u06c1\u0631"_s,
		u"\u0634\u0627\u0645"_s,
		""_s,
		u"\u0631\u0627\u062a"_s,
		""_s
	}));
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		u"\u0642\u0628\u0644 \u0645\u0633\u06cc\u062d"_s,
		u"\u0639\u06cc\u0633\u0648\u06cc"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_buddhist_DayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		"T"_s,
		"W"_s,
		"T"_s,
		"F"_s,
		"S"_s
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
		u"EEEE\u060c d MMMM\u060c y G"_s,
		u"d MMMM\u060c y G"_s,
		u"d MMM\u060c y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u060c d MMMM\u060c y GGGG"_s,
		u"d MMMM\u060c y GGGG"_s,
		u"d MMM\u060c y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0642\u0628\u0644 \u0627\u0632 \u062c\u0645\u06c1\u0648\u0631\u06cc\u06c1 \u0686\u06cc\u0646"_s,
		u"\u062c\u0645\u06c1\u0648\u0631\u06cc\u06c1 \u0686\u06cc\u0646"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u06c1\u062c\u0631\u06cc"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u062c\u0627\u0631\u062c\u06cc\u0627\u0626\u06cc \u06a9\u06cc\u0644\u0646\u0688\u0631"_s);
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
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0627\u0633\u0644\u0627\u0645\u06cc \u06a9\u06cc\u0644\u0646\u0688\u0631 (\u0627\u0645 \u0627\u0644\u0642\u0631\u0627\u06c1)"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				";"_s,
				"%"_s,
				u"\u06f0"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
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
			$of(metaValue_QuarterNames)
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
			$of(u"\u0627\u0633\u0644\u0627\u0645\u06cc \u0634\u06c1\u0631\u06cc \u06a9\u06cc\u0644\u0646\u0688\u0631"_s)
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
			$of(metaValue_long_Eras)
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
			$of(u"{0} \u0645\u0639\u06cc\u0627\u0631\u06cc \u0648\u0642\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u062c\u0627\u067e\u0627\u0646\u06cc \u06a9\u06cc\u0644\u0646\u0688\u0631"_s)
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
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
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
				u"\u200e-"_s,
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
			$of(u"\u0645\u0646\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0639\u06c1\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0642\u0628\u0644 \u062f\u0648\u067e\u06c1\u0631/\u0628\u0639\u062f \u062f\u0648\u067e\u06c1\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0645\u062d\u0631\u0645"_s,
				u"\u0635\u0641\u0631"_s,
				u"\u0631 \u0628\u06cc\u0639 \u0627\u0644\u0627\u0648\u0644"_s,
				u"\u0631 \u0628\u06cc\u0639 \u0627\u0644\u062b\u0627\u0646\u06cc"_s,
				u"\u062c\u0645\u0627\u062f\u06cc \u0627\u0644\u0627\u0648\u0644"_s,
				u"\u062c\u0645\u0627\u062f\u06cc \u0627\u0644\u062b\u0627\u0646\u06cc"_s,
				u"\u0631\u062c\u0628"_s,
				u"\u0634\u0639\u0628\u0627\u0646"_s,
				u"\u0631\u0645\u0636\u0627\u0646"_s,
				u"\u0634\u0648\u0627\u0644"_s,
				u"\u0630\u0648\u0627\u0644\u0642\u0639\u062f\u06c3"_s,
				u"\u0630\u0648\u0627\u0644\u062d\u062c\u06c3"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0645\u0646\u06af\u0648\u0648 \u06a9\u06cc\u0644\u0646\u0688\u0631"_s)
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
			$of(u"\u0645\u06c1\u06cc\u0646\u06c1"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0633\u06cc\u06a9\u0646\u0688"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0627\u0633\u0644\u0627\u0645\u06cc \u06a9\u06cc\u0644\u0646\u0688\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:20:00-04:00;afternoon1:12:00-16:00;morning1:04:00-12:00;afternoon2:16:00-18:00;evening1:18:00-20:00"_s)
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
			$of(u"{0} \u0648\u0642\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u06c1\u0632\u0627\u0631 other:0\' \'\u06c1\u0632\u0627\u0631}"_s,
				u"{one:00\' \'\u06c1\u0632\u0627\u0631 other:00\' \'\u06c1\u0632\u0627\u0631}"_s,
				u"{one:0\' \'\u0644\u0627\u06a9\u06be other:0\' \'\u0644\u0627\u06a9\u06be}"_s,
				u"{one:00\' \'\u0644\u0627\u06a9\u06be other:00\' \'\u0644\u0627\u06a9\u06be}"_s,
				u"{one:0\' \'\u06a9\u0631\u0648\u0691 other:0\' \'\u06a9\u0631\u0648\u0691}"_s,
				u"{one:00\' \'\u06a9\u0631\u0648\u0691 other:00\' \'\u06a9\u0631\u0648\u0691}"_s,
				u"{one:0\' \'\u0627\u0631\u0628 other:0\' \'\u0627\u0631\u0628}"_s,
				u"{one:00\' \'\u0627\u0631\u0628 other:00\' \'\u0627\u0631\u0628}"_s,
				u"{one:0\' \'\u06a9\u06be\u0631\u0628 other:0\' \'\u06a9\u06be\u0631\u0628}"_s,
				u"{one:00\' \'\u06a9\u06be\u0631\u0628 other:00\' \'\u06a9\u06be\u0631\u0628}"_s,
				u"{one:00\' \'\u0679\u0631\u06cc\u0644\u06cc\u0646 other:00\' \'\u0679\u0631\u06cc\u0644\u06cc\u0646}"_s,
				u"{one:000\' \'\u0679\u0631\u06cc\u0644\u06cc\u0646 other:000\' \'\u0679\u0631\u06cc\u0644\u06cc\u0646}"_s
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
			$of(metaValue_DayNames)
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
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0645\u0646\u0637\u0642\u06c2 \u0648\u0642\u062a"_s)
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
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
			$of(u"\u06c1\u0641\u062a\u06d2 \u06a9\u0627 \u062f\u0646"_s)
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
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u06c1\u0641\u062a\u06c1"_s)
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
			$of(metaValue_buddhist_DayNarrows)
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
				u"{one:0\u00a0\u06c1\u0632\u0627\u0631 other:0\u00a0\u06c1\u0632\u0627\u0631}"_s,
				u"{one:00\u00a0\u06c1\u0632\u0627\u0631 other:00\u00a0\u06c1\u0632\u0627\u0631}"_s,
				u"{one:0\u00a0\u0644\u0627\u06a9\u06be other:0\u00a0\u0644\u0627\u06a9\u06be}"_s,
				u"{one:00\u00a0\u0644\u0627\u06a9\u06be other:00\u00a0\u0644\u0627\u06a9\u06be}"_s,
				u"{one:0\u00a0\u06a9\u0631\u0648\u0691 other:0\u00a0\u06a9\u0631\u0648\u0691}"_s,
				u"{one:00\u00a0\u06a9\u0631\u0648\u0691 other:00\u00a0\u06a9\u0631\u0648\u0691}"_s,
				u"{one:0\u00a0\u0627\u0631\u0628 other:0\u00a0\u0627\u0631\u0628}"_s,
				u"{one:00\u00a0\u0627\u0631\u0628 other:00\u00a0\u0627\u0631\u0628}"_s,
				u"{one:0\u00a0\u06a9\u06be\u0631\u0628 other:0\u00a0\u06a9\u06be\u0631\u0628}"_s,
				u"{one:00\u00a0\u06a9\u06be\u0631\u0628 other:00\u00a0\u06a9\u06be\u0631\u0628}"_s,
				u"{one:00\u00a0\u0679\u0631\u06cc\u0644\u06cc\u0646 other:00\u00a0\u0679\u0631\u06cc\u0644\u06cc\u0646}"_s,
				u"{one:000\u00a0\u0679\u0631\u06cc\u0644\u06cc\u0646 other:000\u00a0\u0679\u0631\u06cc\u0644\u06cc\u0646}"_s
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
			$of(u"{0} \u0688\u06d2 \u0644\u0627\u0626\u0679 \u0679\u0627\u0626\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM\u060c y"_s,
				u"d MMMM\u060c y"_s,
				u"d MMM\u060c y"_s,
				"d/M/yy"_s
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
			$of("one:i = 1 and v = 0"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u06af\u06be\u0646\u0679\u06c1"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0645\u062d\u0631\u0645"_s,
				u"\u0635\u0641\u0631"_s,
				u"\u0631\u0628\u06cc\u0639 \u0627\u0644\u0627\u0648\u0651\u0644"_s,
				u"\u0631\u0628\u06cc\u0639 \u0627\u0644\u062b\u0627\u0646\u06cc"_s,
				u"\u062c\u0645\u0627\u062f\u06cc \u0627\u0644\u0627\u0648\u0651\u0644"_s,
				u"\u062c\u0645\u0627\u062f\u06cc \u0627\u0644\u062b\u0627\u0646\u06cc"_s,
				u"\u0631\u062c\u0628"_s,
				u"\u0634\u0639\u0628\u0627\u0646"_s,
				u"\u0631\u0645\u0636\u0627\u0646"_s,
				u"\u0634\u0648\u0627\u0644"_s,
				u"\u0630\u0648\u0627\u0644\u0642\u0639\u062f\u06c3"_s,
				u"\u0630\u0648\u0627\u0644\u062d\u062c\u06c3"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0628\u0648\u062f\u06be \u06a9\u0644\u06cc\u0646\u0688\u0631"_s)
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
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of("japanese.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
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

FormatData_ur::FormatData_ur() {
}

$Class* FormatData_ur::load$($String* name, bool initialize) {
	$loadClass(FormatData_ur, name, initialize, &_FormatData_ur_ClassInfo_, allocate$FormatData_ur);
	return class$;
}

$Class* FormatData_ur::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun