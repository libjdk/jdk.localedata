#include <sun/text/resources/cldr/ext/FormatData_tt.h>

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

$MethodInfo _FormatData_tt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_tt::*)()>(&FormatData_tt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_tt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_tt",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_tt_MethodInfo_
};

$Object* allocate$FormatData_tt($Class* clazz) {
	return $of($alloc(FormatData_tt));
}

void FormatData_tt::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_tt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0433\u044b\u0439\u043d\u0432\u0430\u0440"_s,
		u"\u0444\u0435\u0432\u0440\u0430\u043b\u044c"_s,
		u"\u043c\u0430\u0440\u0442"_s,
		u"\u0430\u043f\u0440\u0435\u043b\u044c"_s,
		u"\u043c\u0430\u0439"_s,
		u"\u0438\u044e\u043d\u044c"_s,
		u"\u0438\u044e\u043b\u044c"_s,
		u"\u0430\u0432\u0433\u0443\u0441\u0442"_s,
		u"\u0441\u0435\u043d\u0442\u044f\u0431\u0440\u044c"_s,
		u"\u043e\u043a\u0442\u044f\u0431\u0440\u044c"_s,
		u"\u043d\u043e\u044f\u0431\u0440\u044c"_s,
		u"\u0434\u0435\u043a\u0430\u0431\u0440\u044c"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0433\u044b\u0439\u043d."_s,
		u"\u0444\u0435\u0432."_s,
		u"\u043c\u0430\u0440."_s,
		u"\u0430\u043f\u0440."_s,
		u"\u043c\u0430\u0439"_s,
		u"\u0438\u044e\u043d\u044c"_s,
		u"\u0438\u044e\u043b\u044c"_s,
		u"\u0430\u0432\u0433."_s,
		u"\u0441\u0435\u043d\u0442."_s,
		u"\u043e\u043a\u0442."_s,
		u"\u043d\u043e\u044f\u0431."_s,
		u"\u0434\u0435\u043a."_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u044f\u043a\u0448\u04d9\u043c\u0431\u0435"_s,
		u"\u0434\u04af\u0448\u04d9\u043c\u0431\u0435"_s,
		u"\u0441\u0438\u0448\u04d9\u043c\u0431\u0435"_s,
		u"\u0447\u04d9\u0440\u0448\u04d9\u043c\u0431\u0435"_s,
		u"\u043f\u04d9\u043d\u0497\u0435\u0448\u04d9\u043c\u0431\u0435"_s,
		u"\u0497\u043e\u043c\u0433\u0430"_s,
		u"\u0448\u0438\u043c\u0431\u04d9"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u044f\u043a\u0448."_s,
		u"\u0434\u04af\u0448."_s,
		u"\u0441\u0438\u0448."_s,
		u"\u0447\u04d9\u0440."_s,
		u"\u043f\u04d9\u043d\u0497."_s,
		u"\u0497\u043e\u043c."_s,
		u"\u0448\u0438\u043c."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u042f"_s,
		u"\u0414"_s,
		u"\u0421"_s,
		u"\u0427"_s,
		u"\u041f"_s,
		u"\u0496"_s,
		u"\u0428"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1 \u043d\u0447\u0435 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"2 \u043d\u0447\u0435 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"3 \u043d\u0447\u0435 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"4 \u043d\u0447\u0435 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1 \u043d\u0447\u0435 \u043a\u0432."_s,
		u"2 \u043d\u0447\u0435 \u043a\u0432."_s,
		u"3 \u043d\u0447\u0435 \u043a\u0432."_s,
		u"4 \u043d\u0447\u0435 \u043a\u0432."_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0431.\u044d.\u043a."_s,
		u"\u043c\u0438\u043b\u0430\u0434\u0438"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
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
		u"d MMMM, y \'\u0435\u043b\' (G), EEEE"_s,
		u"d MMMM, y \'\u0435\u043b\' (G)"_s,
		"dd.MM.y (G)"_s,
		"dd.MM.y (GGGGG)"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"d MMMM, y \'\u0435\u043b\' (GGGG), EEEE"_s,
		u"d MMMM, y \'\u0435\u043b\' (GGGG)"_s,
		"dd.MM.y (GGGG)"_s,
		"dd.MM.y (G)"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0433\u0440\u0438\u0433\u043e\u0440\u0438\u0430\u043d \u0435\u043b \u0438\u0441\u04d9\u0431\u0435"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0435\u043b"_s)
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
			$of(metaValue_buddhist_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
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
			$of(u"\u0432\u0430\u043a\u044b\u0442 \u04e9\u043b\u043a\u04d9\u0441\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
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
			$of(u"{0} \u0433\u0430\u0434\u04d9\u0442\u0438 \u0432\u0430\u043a\u044b\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
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
			$of(metaValue_DayAbbreviations)
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
			$of($$new($StringArray, {
				u"\u0431\u0435\u0437\u043d\u0435\u04a3 \u044d\u0440\u0430\u0433\u0430 \u043a\u0430\u0434\u04d9\u0440"_s,
				"CE"_s
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0430\u0442\u043d\u0430 \u043a\u04e9\u043d\u0435"_s)
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
				"NaN"_s,
				""_s,
				""_s
			}))
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
			$of(u"\u043c\u0438\u043d\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u044d\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
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
			$of(u"\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0441\u0435\u043a\u0443\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0430\u0442\u043d\u0430"_s)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u0497\u04d9\u0439\u0433\u0435 \u0432\u0430\u043a\u044b\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"d MMMM, y \'\u0435\u043b\', EEEE"_s,
				u"d MMMM, y \'\u0435\u043b\'"_s,
				u"d MMM, y \'\u0435\u043b\'"_s,
				"dd.MM.y"_s
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
			$of(u"\u0441\u04d9\u0433\u0430\u0442\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0432\u0430\u043a\u044b\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				u"#,##0\u00a0%"_s,
				u"#,##0.00\u00a0\u00a4"_s
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
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
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
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_tt::FormatData_tt() {
}

$Class* FormatData_tt::load$($String* name, bool initialize) {
	$loadClass(FormatData_tt, name, initialize, &_FormatData_tt_ClassInfo_, allocate$FormatData_tt);
	return class$;
}

$Class* FormatData_tt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun