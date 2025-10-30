#include <sun/text/resources/cldr/ext/FormatData_tg.h>

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

$MethodInfo _FormatData_tg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_tg::*)()>(&FormatData_tg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_tg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_tg",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_tg_MethodInfo_
};

$Object* allocate$FormatData_tg($Class* clazz) {
	return $of($alloc(FormatData_tg));
}

void FormatData_tg::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_tg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u042f\u043d\u0432\u0430\u0440"_s,
		u"\u0424\u0435\u0432\u0440\u0430\u043b"_s,
		u"\u041c\u0430\u0440\u0442"_s,
		u"\u0410\u043f\u0440\u0435\u043b"_s,
		u"\u041c\u0430\u0439"_s,
		u"\u0418\u044e\u043d"_s,
		u"\u0418\u044e\u043b"_s,
		u"\u0410\u0432\u0433\u0443\u0441\u0442"_s,
		u"\u0421\u0435\u043d\u0442\u044f\u0431\u0440"_s,
		u"\u041e\u043a\u0442\u044f\u0431\u0440"_s,
		u"\u041d\u043e\u044f\u0431\u0440"_s,
		u"\u0414\u0435\u043a\u0430\u0431\u0440"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u042f\u043d\u0432"_s,
		u"\u0424\u0435\u0432"_s,
		u"\u041c\u0430\u0440"_s,
		u"\u0410\u043f\u0440"_s,
		u"\u041c\u0430\u0439"_s,
		u"\u0418\u044e\u043d"_s,
		u"\u0418\u044e\u043b"_s,
		u"\u0410\u0432\u0433"_s,
		u"\u0421\u0435\u043d"_s,
		u"\u041e\u043a\u0442"_s,
		u"\u041d\u043e\u044f"_s,
		u"\u0414\u0435\u043a"_s,
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
		u"\u042f\u043a\u0448\u0430\u043d\u0431\u0435"_s,
		u"\u0414\u0443\u0448\u0430\u043d\u0431\u0435"_s,
		u"\u0421\u0435\u0448\u0430\u043d\u0431\u0435"_s,
		u"\u0427\u043e\u0440\u0448\u0430\u043d\u0431\u0435"_s,
		u"\u041f\u0430\u043d\u04b7\u0448\u0430\u043d\u0431\u0435"_s,
		u"\u04b6\u0443\u043c\u044a\u0430"_s,
		u"\u0428\u0430\u043d\u0431\u0435"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u042f\u0448\u0431"_s,
		u"\u0414\u0448\u0431"_s,
		u"\u0421\u0448\u0431"_s,
		u"\u0427\u0448\u0431"_s,
		u"\u041f\u0448\u0431"_s,
		u"\u04b6\u043c\u044a"_s,
		u"\u0428\u043d\u0431"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u042f"_s,
		u"\u0414"_s,
		u"\u0421"_s,
		u"\u0427"_s,
		u"\u041f"_s,
		u"\u04b6"_s,
		u"\u0428"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u04271"_s,
		u"\u04272"_s,
		u"\u04273"_s,
		u"\u04274"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u041f\u0435\u041c"_s,
		u"\u041f\u0430\u041c"_s
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
		"EEEE, dd MMMM y G"_s,
		"dd MMMM y G"_s,
		"dd MMM y G"_s,
		"dd/MM/yy GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y GGGG"_s,
		"dd MMMM y GGGG"_s,
		"dd MMM y GGGG"_s,
		"dd/MM/yy G"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u0421\u0410\u041d\u0410"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0422\u0430\u049b\u0432\u0438\u043c\u0438 \u0433\u0440\u0435\u0433\u043e\u0440\u0438\u0430\u043d\u04e3"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0441\u043e\u043b"_s)
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
			$of(metaValue_QuarterNames)
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
			$of(u"\u043c\u0438\u043d\u0442\u0430\u049b\u0430\u0438 \u0432\u0430\u049b\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
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
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u041f\u0435\u0448 \u0430\u0437 \u043c\u0438\u043b\u043e\u0434"_s,
				u"\u041f\u0430\u0441 \u0430\u0437 \u043c\u0438\u043b\u043e\u0434"_s
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
			$of($$new($StringArray, {
				u"EEEE, d MMMM\'\u0438\' y G"_s,
				u"d MMMM\'\u0438\' y G"_s,
				"d MMM y G"_s,
				"M/d/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0440\u04ef\u0437\u0438 \u04b3\u0430\u0444\u0442\u0430"_s)
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
			$of(u"\u0434\u0430\u049b\u0438\u049b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u043c\u0430\u0431\u0434\u0430\u0438 \u0442\u0430\u044a\u0440\u0438\u0445"_s)
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
			$of("islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u043c\u0443\u04b3\u0430\u0440\u0440\u0430\u043c"_s,
				u"\u0441\u0430\u0444\u0430\u0440"_s,
				u"\u0420\u0430\u0431\u0435\u044a I"_s,
				u"\u0420\u0430\u0431\u0435\u044a II"_s,
				u"\u04b7\u0438\u043c\u043e\u0434\u0438-\u0443\u043b-\u0443\u043b\u043e"_s,
				u"\u04b7\u0438\u043c\u043e\u0434\u0438-\u0443\u043b-\u0441\u043e\u043d\u0438"_s,
				u"\u0440\u0430\u04b7\u0430\u0431"_s,
				u"\u0428\u0430\u0431\u0430\u043d"_s,
				u"\u0420\u0430\u043c\u0430\u0434\u0430\u043d"_s,
				u"\u0428\u0430\u0432\u0432\u0430\u043b"_s,
				u"\u0414\u0445\u0443\u0442-\u049a\u0438\u0434\u0430\u04b3"_s,
				u"\u0414\u0445\u0443\u0442-\u04b2\u0438\u04b7\u04b7\u0430\u04b3"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d MMMM\'\u0438\' y GGGG"_s,
				u"d MMMM\'\u0438\' y GGGG"_s,
				"d MMM y GGGG"_s,
				"M/d/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of(u"\u043c\u043e\u04b3"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0441\u043e\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u04b3\u0430\u0444\u0442\u0430"_s)
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
				u"{other:0\u00a0\u04b3\u0437\u0440\'.\'}"_s,
				u"{other:00\u00a0\u04b3\u0437\u0440\'.\'}"_s,
				u"{other:000\u00a0\u04b3\u0437\u0440\'.\'}"_s,
				u"{other:0\u00a0\u043c\u043b\u043d\'.\'}"_s,
				u"{other:00\u00a0\u043c\u043b\u043d\'.\'}"_s,
				u"{other:000\u00a0\u043c\u043b\u043d\'.\'}"_s,
				u"{other:0\u00a0\u043c\u043b\u0440\u0434\'.\'}"_s,
				u"{other:00\u00a0\u043c\u043b\u0440\u0434\'.\'}"_s,
				u"{other:000\u00a0\u043c\u043b\u0440\u0434\'.\'}"_s,
				u"{other:0\u00a0\u0442\u0440\u043b\u043d\'.\'}"_s,
				u"{other:00\u00a0\u0442\u0440\u043b\u043d\'.\'}"_s,
				u"{other:000\u00a0\u0442\u0440\u043b\u043d\'.\'}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd MMMM y"_s,
				"dd MMMM y"_s,
				"dd MMM y"_s,
				"dd/MM/yy"_s
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
			$of(u"\u0441\u043e\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u041c\u0443\u04b3."_s,
				u"\u0421\u0430\u0444."_s,
				u"\u0420\u0430\u0431. I"_s,
				u"\u0420\u0430\u0431. II"_s,
				u"\u04b6\u0443\u043c. I"_s,
				u"\u04b6\u0443\u043c. II"_s,
				u"\u0420\u0430\u04b7."_s,
				u"\u0428\u0430."_s,
				u"\u0420\u0430\u043c."_s,
				u"\u0428\u0430\u0432."_s,
				u"\u0414\u0445\u0443\u043b-\u049a."_s,
				u"\u0414\u0445\u0443\u043b-\u04b2."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				u"#,##0.00\u00a0\u00a4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u04b3\u0430\u0437\u043e\u0440}"_s,
				u"{other:00\' \'\u04b3\u0430\u0437\u043e\u0440}"_s,
				u"{other:000\' \'\u04b3\u0430\u0437\u043e\u0440}"_s,
				u"{other:0\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{other:00\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{other:000\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{other:0\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{other:00\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{other:000\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{other:0\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{other:00\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{other:000\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s
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

FormatData_tg::FormatData_tg() {
}

$Class* FormatData_tg::load$($String* name, bool initialize) {
	$loadClass(FormatData_tg, name, initialize, &_FormatData_tg_ClassInfo_, allocate$FormatData_tg);
	return class$;
}

$Class* FormatData_tg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun