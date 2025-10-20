#include <sun/text/resources/cldr/ext/FormatData_os.h>

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

$MethodInfo _FormatData_os_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_os::*)()>(&FormatData_os::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_os_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_os",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_os_MethodInfo_
};

$Object* allocate$FormatData_os($Class* clazz) {
	return $of($alloc(FormatData_os));
}

void FormatData_os::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_os::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u044f\u043d\u0432\u0430\u0440\u044b"_s,
		u"\u0444\u0435\u0432\u0440\u0430\u043b\u044b"_s,
		u"\u043c\u0430\u0440\u0442\u044a\u0438\u0439\u044b"_s,
		u"\u0430\u043f\u0440\u0435\u043b\u044b"_s,
		u"\u043c\u0430\u0439\u044b"_s,
		u"\u0438\u044e\u043d\u044b"_s,
		u"\u0438\u044e\u043b\u044b"_s,
		u"\u0430\u0432\u0433\u0443\u0441\u0442\u044b"_s,
		u"\u0441\u0435\u043d\u0442\u044f\u0431\u0440\u044b"_s,
		u"\u043e\u043a\u0442\u044f\u0431\u0440\u044b"_s,
		u"\u043d\u043e\u044f\u0431\u0440\u044b"_s,
		u"\u0434\u0435\u043a\u0430\u0431\u0440\u044b"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u044f\u043d\u0432."_s,
		u"\u0444\u0435\u0432."_s,
		u"\u043c\u0430\u0440."_s,
		u"\u0430\u043f\u0440."_s,
		u"\u043c\u0430\u0439\u044b"_s,
		u"\u0438\u044e\u043d\u044b"_s,
		u"\u0438\u044e\u043b\u044b"_s,
		u"\u0430\u0432\u0433."_s,
		u"\u0441\u0435\u043d."_s,
		u"\u043e\u043a\u0442."_s,
		u"\u043d\u043e\u044f."_s,
		u"\u0434\u0435\u043a."_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u042f"_s,
		u"\u0424"_s,
		u"\u041c"_s,
		u"\u0410"_s,
		u"\u041c"_s,
		u"\u0418"_s,
		u"\u0418"_s,
		u"\u0410"_s,
		u"\u0421"_s,
		u"\u041e"_s,
		u"\u041d"_s,
		u"\u0414"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0445\u0443\u044b\u0446\u0430\u0443\u0431\u043e\u043d"_s,
		u"\u043a\u044a\u0443\u044b\u0440\u0438\u0441\u04d5\u0440"_s,
		u"\u0434\u044b\u0446\u0446\u04d5\u0433"_s,
		u"\u04d5\u0440\u0442\u044b\u0446\u0446\u04d5\u0433"_s,
		u"\u0446\u044b\u043f\u043f\u04d5\u0440\u04d5\u043c"_s,
		u"\u043c\u0430\u0439\u0440\u04d5\u043c\u0431\u043e\u043d"_s,
		u"\u0441\u0430\u0431\u0430\u0442"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0445\u0446\u0431"_s,
		u"\u043a\u0440\u0441"_s,
		u"\u0434\u0446\u0433"_s,
		u"\u04d5\u0440\u0442"_s,
		u"\u0446\u043f\u0440"_s,
		u"\u043c\u0440\u0431"_s,
		u"\u0441\u0431\u0442"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0425"_s,
		u"\u041a"_s,
		u"\u0414"_s,
		u"\u04d4"_s,
		u"\u0426"_s,
		u"\u041c"_s,
		u"\u0421"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u0430\u0433 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"2-\u0430\u0433 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"3-\u0430\u0433 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"4-\u04d5\u043c \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u0430\u0433 \u043a\u0432."_s,
		u"2-\u0430\u0433 \u043a\u0432."_s,
		u"3-\u0430\u0433 \u043a\u0432."_s,
		u"4-\u04d5\u043c \u043a\u0432."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u04d5\u043c\u0431\u0438\u0441\u0431\u043e\u043d\u044b \u0440\u0430\u0437\u043c\u04d5"_s,
		u"\u04d5\u043c\u0431\u0438\u0441\u0431\u043e\u043d\u044b \u0444\u04d5\u0441\u0442\u04d5"_s,
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
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		u"\u043d.\u0434.\u0430."_s,
		u"\u043d.\u0434."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, d MMMM, y \'\u0430\u0437\' G"_s,
		u"d MMMM, y \'\u0430\u0437\' G"_s,
		u"dd MMM y \'\u0430\u0437\' G"_s,
		"dd.MM.yy GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, d MMMM, y \'\u0430\u0437\' GGGG"_s,
		u"d MMMM, y \'\u0430\u0437\' GGGG"_s,
		u"dd MMM y \'\u0430\u0437\' GGGG"_s,
		"dd.MM.yy G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0413\u0440\u0435\u0433\u043e\u0440\u0438\u0430\u043d \u043a\u044a\u04d5\u043b\u0438\u043d\u0434\u0430\u0440"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0410\u0437"_s)
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
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
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
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
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
			$of(u"\u0420\u04d5\u0441\u0442\u04d5\u0434\u0436\u044b \u0437\u043e\u043d\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0425\u0446\u0431"_s,
				u"\u041a\u0440\u0441"_s,
				u"\u0414\u0446\u0433"_s,
				u"\u04d4\u0440\u0442"_s,
				u"\u0426\u043f\u0440"_s,
				u"\u041c\u0440\u0431"_s,
				u"\u0421\u0431\u0442"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u041a\u044a\u0443\u044b\u0440\u0438\u0439\u044b \u0431\u043e\u043d"_s)
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
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u"\u00a0"_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u041d\u041d"_s,
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u041c\u0438\u043d\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0414\u0443\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0411\u043e\u043d\u044b \u043f\u0435\u0440\u0438\u043e\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of("field.month"_s),
			$of(u"\u041c\u04d5\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0421\u0435\u043a\u0443\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u041a\u044a\u0443\u044b\u0440\u0438"_s)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d MMMM, y \'\u0430\u0437\'"_s,
				u"d MMMM, y \'\u0430\u0437\'"_s,
				u"dd MMM y \'\u0430\u0437\'"_s,
				"dd.MM.yy"_s
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
			$of($$new($StringArray, {
				u"\u0425\u0443\u044b\u0446\u0430\u0443\u0431\u043e\u043d"_s,
				u"\u041a\u044a\u0443\u044b\u0440\u0438\u0441\u04d5\u0440"_s,
				u"\u0414\u044b\u0446\u0446\u04d5\u0433"_s,
				u"\u04d4\u0440\u0442\u044b\u0446\u0446\u04d5\u0433"_s,
				u"\u0426\u044b\u043f\u043f\u04d5\u0440\u04d5\u043c"_s,
				u"\u041c\u0430\u0439\u0440\u04d5\u043c\u0431\u043e\u043d"_s,
				u"\u0421\u0430\u0431\u0430\u0442"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0421\u0430\u0445\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u042f\u043d\u0432\u0430\u0440\u044c"_s,
				u"\u0424\u0435\u0432\u0440\u0430\u043b\u044c"_s,
				u"\u041c\u0430\u0440\u0442\u044a\u0438"_s,
				u"\u0410\u043f\u0440\u0435\u043b\u044c"_s,
				u"\u041c\u0430\u0439"_s,
				u"\u0418\u044e\u043d\u044c"_s,
				u"\u0418\u044e\u043b\u044c"_s,
				u"\u0410\u0432\u0433\u0443\u0441\u0442"_s,
				u"\u0421\u0435\u043d\u0442\u044f\u0431\u0440\u044c"_s,
				u"\u041e\u043a\u0442\u044f\u0431\u0440\u044c"_s,
				u"\u041d\u043e\u044f\u0431\u0440\u044c"_s,
				u"\u0414\u0435\u043a\u0430\u0431\u0440\u044c"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u042f\u043d\u0432."_s,
				u"\u0424\u0435\u0432\u0440."_s,
				u"\u041c\u0430\u0440\u0442."_s,
				u"\u0410\u043f\u0440."_s,
				u"\u041c\u0430\u0439"_s,
				u"\u0418\u044e\u043d\u044c"_s,
				u"\u0418\u044e\u043b\u044c"_s,
				u"\u0410\u0432\u0433."_s,
				u"\u0421\u0435\u043d\u0442."_s,
				u"\u041e\u043a\u0442."_s,
				u"\u041d\u043e\u044f\u0431."_s,
				u"\u0414\u0435\u043a."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0440\u04d5\u0441\u0442\u04d5\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_os::FormatData_os() {
}

$Class* FormatData_os::load$($String* name, bool initialize) {
	$loadClass(FormatData_os, name, initialize, &_FormatData_os_ClassInfo_, allocate$FormatData_os);
	return class$;
}

$Class* FormatData_os::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun