#include <sun/text/resources/cldr/ext/FormatData_ps.h>

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

$MethodInfo _FormatData_ps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ps::*)()>(&FormatData_ps::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ps",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ps_MethodInfo_
};

$Object* allocate$FormatData_ps($Class* clazz) {
	return $of($alloc(FormatData_ps));
}

void FormatData_ps::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ps::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u062c\u0646\u0648\u0631\u064a"_s,
		u"\u0641\u0628\u0631\u0648\u0631\u064a"_s,
		u"\u0645\u0627\u0631\u0686"_s,
		u"\u0627\u067e\u0631\u06cc\u0644"_s,
		u"\u0645\u06cd"_s,
		u"\u062c\u0648\u0646"_s,
		u"\u062c\u0648\u0644\u0627\u06cc"_s,
		u"\u0627\u06ab\u0633\u062a"_s,
		u"\u0633\u06d0\u067e\u062a\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u062c"_s,
		u"\u0641"_s,
		u"\u0645"_s,
		u"\u0627"_s,
		u"\u0645"_s,
		u"\u062c"_s,
		u"\u062c"_s,
		u"\u0627"_s,
		u"\u0633"_s,
		u"\u0627"_s,
		u"\u0646"_s,
		u"\u062f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u064a\u0648\u0646\u06cd"_s,
		u"\u062f\u0648\u0646\u06cd"_s,
		u"\u062f\u0631\u06d0\u0646\u06cd"_s,
		u"\u0685\u0644\u0631\u0646\u06cd"_s,
		u"\u067e\u064a\u0646\u0681\u0646\u06cd"_s,
		u"\u062c\u0645\u0639\u0647"_s,
		u"\u0627\u0648\u0646\u06cd"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0644\u0648\u0645\u0693\u06cd \u0631\u0628\u0639\u0647"_s,
		u"\u06f2\u0645\u0647 \u0631\u0628\u0639\u0647"_s,
		u"\u06f3\u0645\u0647 \u0631\u0628\u0639\u0647"_s,
		u"\u06f4\u0645\u0647 \u0631\u0628\u0639\u0647"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u063a.\u0645."_s,
		u"\u063a.\u0648."_s,
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
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H:mm:ss (zzzz)"_s,
		"H:mm:ss (z)"_s,
		"H:mm:ss"_s,
		"H:mm"_s
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
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE \u062f G y \u062f MMMM d"_s,
		u"\u062f G y \u062f MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y/M/d"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE \u062f GGGG y \u062f MMMM d"_s,
		u"\u062f GGGG y \u062f MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y/M/d"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u06ab\u0631\u064a\u06ab\u0648\u0631\u064a\u0646 \u062c\u0646\u062a\u0631\u064a"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u06a9\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a"_s,
				u"\u06f0"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
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
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(u"\u0627\u0633\u0644\u0627\u0645\u064a \u062c\u0646\u062a\u0631\u064a (\u062c\u062f\u0648\u0644\u064a\u060c \u0645\u062f\u0646\u064a \u0639\u0635\u0631)"_s)
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
			$of($$new($StringArray, {
				"BCE"_s,
				u"\u0645."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u0645\u0639\u06cc\u0627\u0631\u06cc \u0648\u062e\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arabext"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u062c\u0627\u067e\u0627\u0646\u064a \u062c\u0646\u062a\u0631\u064a"_s)
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
			$of($$new($StringArray, {
				u"\u0644\u0647 \u0645\u06cc\u0644\u0627\u062f \u0685\u062e\u0647 \u0648\u0693\u0627\u0646\u062f\u06d0"_s,
				u"\u0644\u0647 \u0645\u06cc\u0644\u0627\u062f \u0685\u062e\u0647 \u0648\u0631\u0648\u0633\u062a\u0647"_s
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
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				u"\u200e\u2212"_s,
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
			$of(u"\u062f\u0642\u064a\u0642\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u067e\u06d0\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0648\u0631\u0681 \u0634\u06d0\u0628\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0645\u062d\u0631\u0645"_s,
				u"\u0635\u0641\u0631"_s,
				u"\u0631\u0628\u064a\u0639"_s,
				u"\u0631\u0628\u064a\u0639 II"_s,
				u"\u062c\u0645\u0627\u0639\u0647"_s,
				u"\u062c\u0645\u0648\u0645\u0627 II"_s,
				u"\u0631\u062c\u0628"_s,
				u"\u0634\u0639\u0628\u0627\u0646"_s,
				u"\u0631\u0645\u0636\u0627\u0646"_s,
				u"\u0634\u0648\u0627\u0644"_s,
				u"\u0630\u064a \u0627\u0644\u0642\u0639\u062f\u0647"_s,
				u"\u0630\u064a \u0627\u0644\u062d\u062c"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0645\u0646\u06af\u0648\u0648 \u062c\u0646\u062a\u0631\u064a"_s)
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
			$of(u"\u0645\u064a\u0627\u0634\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u062b\u0627\u0646\u064a\u0647"_s)
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
			$of(u"\u0627\u0633\u0644\u0627\u0645\u064a \u062c\u0646\u062a\u0631\u064a"_s)
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
			$of($$new($StringArray, {
				u"\u062c\u0646\u0648\u0631\u064a"_s,
				u"\u0641\u0628\u0631\u0648\u0631\u064a"_s,
				u"\u0645\u0627\u0631\u0686"_s,
				u"\u0627\u067e\u0631\u06cc\u0644"_s,
				u"\u0645\u06cd"_s,
				u"\u062c\u0648\u0646"_s,
				u"\u062c\u0648\u0644\u0627\u06cc"_s,
				u"\u0627\u06ab\u0633\u062a"_s,
				u"\u0633\u067e\u062a\u0645\u0628\u0631"_s,
				u"\u0627\u06a9\u062a\u0648\u0628\u0631"_s,
				u"\u0646\u0648\u0645\u0628\u0631"_s,
				u"\u062f\u0633\u0645\u0628\u0631"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"\u062f {0} \u067e\u0647 \u0648\u062e\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
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
				"{one:0G other:0G}"_s,
				"{one:00G other:00G}"_s,
				"{one:000G other:000G}"_s,
				"{one:0T other:0T}"_s,
				"{one:00T other:00T}"_s,
				"{one:000T other:000T}"_s
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0648\u062e\u062a \u0633\u064a\u0645\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u0644\u0647 \u0645\u06cc\u0644\u0627\u062f \u0648\u0693\u0627\u0646\u062f\u06d0"_s,
				u"\u0645."_s
			}))
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u062f \u0627\u0648\u0646\u06cd \u0648\u0631\u0681"_s)
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
			$of(u"\u0627\u0648\u0646\u06cd"_s)
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
				"{one:0K other:0K}"_s,
				"{one:00K other:00K}"_s,
				"{one:000K other:000K}"_s,
				"{one:0M other:0M}"_s,
				"{one:00M other:00M}"_s,
				"{one:000M other:000M}"_s,
				"{one:0B other:0B}"_s,
				"{one:00B other:00B}"_s,
				"{one:000G other:000B}"_s,
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
			$of(u"{0} \u0631\u06bc\u0627 \u0648\u0631\u0681 \u0648\u062e\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE \u062f y \u062f MMMM d"_s,
				u"\u062f y \u062f MMMM d"_s,
				"y MMM d"_s,
				"y/M/d"_s
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
			$of(u"\u0633\u0627\u0639\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0645\u062d\u0631\u0645"_s,
				u"\u0635\u0641\u0631"_s,
				u"\u0631\u0628\u064a\u0639"_s,
				u"\u0631\u0628\u064a\u0639 II"_s,
				u"\u062c\u0645\u0627\u062f \u06f1"_s,
				u"\u062c\u0645\u0627\u062f \u06f2"_s,
				u"\u0631\u062c\u0628"_s,
				u"\u0634\u0639\u0628\u0627\u0646"_s,
				u"\u0631\u0645\u0636\u0627\u0646"_s,
				u"\u0634\u0648\u0627\u0644"_s,
				u"\u062f\u0627\u0644\u0642\u0627\u0639\u062f\u0647"_s,
				u"\u0630\u064a \u0627\u0644\u062d\u062c"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0628\u0648\u062f\u0627\u064a\u064a \u062c\u0646\u062a\u0631\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u062c\u0646\u0648\u0631\u064a"_s,
				u"\u0641\u06d0\u0628\u0631\u0648\u0631\u064a"_s,
				u"\u0645\u0627\u0631\u0686"_s,
				u"\u0627\u067e\u0631\u06cc\u0644"_s,
				u"\u0645\u06cd"_s,
				u"\u062c\u0648\u0646"_s,
				u"\u062c\u0648\u0644\u0627\u06cc"_s,
				u"\u0627\u06ab\u0633\u062a"_s,
				u"\u0633\u067e\u062a\u0645\u0628\u0631"_s,
				u"\u0627\u06a9\u062a\u0648\u0628\u0631"_s,
				u"\u0646\u0648\u0645\u0628\u0631"_s,
				u"\u062f\u0633\u0645\u0628\u0631"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_ps::FormatData_ps() {
}

$Class* FormatData_ps::load$($String* name, bool initialize) {
	$loadClass(FormatData_ps, name, initialize, &_FormatData_ps_ClassInfo_, allocate$FormatData_ps);
	return class$;
}

$Class* FormatData_ps::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun