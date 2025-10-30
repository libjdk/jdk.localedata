#include <sun/text/resources/cldr/ext/FormatData_az_Cyrl.h>

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

$MethodInfo _FormatData_az_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_az_Cyrl::*)()>(&FormatData_az_Cyrl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_az_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_az_Cyrl",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_az_Cyrl_MethodInfo_
};

$Object* allocate$FormatData_az_Cyrl($Class* clazz) {
	return $of($alloc(FormatData_az_Cyrl));
}

void FormatData_az_Cyrl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_az_Cyrl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0458\u0430\u043d\u0432\u0430\u0440"_s,
		u"\u0444\u0435\u0432\u0440\u0430\u043b"_s,
		u"\u043c\u0430\u0440\u0442"_s,
		u"\u0430\u043f\u0440\u0435\u043b"_s,
		u"\u043c\u0430\u0439"_s,
		u"\u0438\u0458\u0443\u043d"_s,
		u"\u0438\u0458\u0443\u043b"_s,
		u"\u0430\u0432\u0433\u0443\u0441\u0442"_s,
		u"\u0441\u0435\u043d\u0442\u0458\u0430\u0431\u0440"_s,
		u"\u043e\u043a\u0442\u0458\u0430\u0431\u0440"_s,
		u"\u043d\u043e\u0458\u0430\u0431\u0440"_s,
		u"\u0434\u0435\u043a\u0430\u0431\u0440"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0458\u0430\u043d"_s,
		u"\u0444\u0435\u0432"_s,
		u"\u043c\u0430\u0440"_s,
		u"\u0430\u043f\u0440"_s,
		u"\u043c\u0430\u0439"_s,
		u"\u0438\u0458\u043d"_s,
		u"\u0438\u0458\u043b"_s,
		u"\u0430\u0432\u0433"_s,
		u"\u0441\u0435\u043d"_s,
		u"\u043e\u043a\u0442"_s,
		u"\u043d\u043e\u0458"_s,
		u"\u0434\u0435\u043a"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0431\u0430\u0437\u0430\u0440"_s,
		u"\u0431\u0430\u0437\u0430\u0440 \u0435\u0440\u0442\u04d9\u0441\u0438"_s,
		u"\u0447\u04d9\u0440\u0448\u04d9\u043d\u0431\u04d9 \u0430\u0445\u0448\u0430\u043c\u044b"_s,
		u"\u0447\u04d9\u0440\u0448\u04d9\u043d\u0431\u04d9"_s,
		u"\u04b9\u04af\u043c\u04d9 \u0430\u0445\u0448\u0430\u043c\u044b"_s,
		u"\u04b9\u04af\u043c\u04d9"_s,
		u"\u0448\u04d9\u043d\u0431\u04d9"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0411."_s,
		u"\u0411.\u0415."_s,
		u"\u0427.\u0410."_s,
		u"\u0427."_s,
		u"\u04b8.\u0410."_s,
		u"\u04b8."_s,
		u"\u0428."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"7"_s,
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u04b9\u0438 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"2-\u04b9\u0438 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"3-\u04b9\u04af \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"4-\u04b9\u04af \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u04b9\u0438 \u043a\u0432."_s,
		u"2-\u04b9\u0438 \u043a\u0432."_s,
		u"3-\u04b9\u04af \u043a\u0432."_s,
		u"4-\u04b9\u04af \u043a\u0432."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0410\u041c"_s,
		u"\u041f\u041c"_s,
		u"\u049d\u0435\u04b9\u04d9\u0458\u0430\u0440\u044b"_s,
		u"\u049d\u04af\u043d\u043e\u0440\u0442\u0430"_s,
		u"\u0441\u04af\u0431\u04bb"_s,
		u"\u0441\u04d9\u04bb\u04d9\u0440"_s,
		u"\u049d\u04af\u043d\u0434\u04af\u0437"_s,
		""_s,
		u"\u0430\u0445\u0448\u0430\u043c\u04af\u0441\u0442\u04af"_s,
		""_s,
		u"\u0430\u0445\u0448\u0430\u043c"_s,
		u"\u049d\u0435\u04b9\u04d9"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0430"_s,
		u"\u043f"_s,
		u"\u049d\u0435\u04b9\u04d9\u0458\u0430\u0440\u044b"_s,
		u"\u049d"_s,
		u"\u0441\u04af\u0431\u04bb"_s,
		u"\u0441\u04d9\u04bb\u04d9\u0440"_s,
		u"\u049d\u04af\u043d\u0434\u04af\u0437"_s,
		""_s,
		u"\u0430\u0445\u0448\u0430\u043c\u04af\u0441\u0442\u04af"_s,
		""_s,
		u"\u0430\u0445\u0448\u0430\u043c"_s,
		u"\u049d\u0435\u04b9\u04d9"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0435.\u04d9."_s,
		u"\u0458.\u0435."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G d MMMM y, EEEE"_s,
		"G d MMMM, y"_s,
		"G d MMM y"_s,
		"GGGGG dd.MM.y"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG d MMMM y, EEEE"_s,
		"GGGG d MMMM, y"_s,
		"GGGG d MMM y"_s,
		"G dd.MM.y"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0435\u0440\u0430\u043c\u044b\u0437\u0434\u0430\u043d \u04d9\u0432\u0432\u04d9\u043b"_s,
				u"\u0458\u0435\u043d\u0438 \u0435\u0440\u0430"_s
			}))
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
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"d MMMM y, EEEE"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
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
			$of(metaValue_DayNames)
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
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0408\u0430\u043d\u0432\u0430\u0440"_s,
				u"\u0424\u0435\u0432\u0440\u0430\u043b"_s,
				u"\u041c\u0430\u0440\u0442"_s,
				u"\u0410\u043f\u0440\u0435\u043b"_s,
				u"\u041c\u0430\u0439"_s,
				u"\u0418\u0458\u0443\u043d"_s,
				u"\u0418\u0458\u0443\u043b"_s,
				u"\u0410\u0432\u0433\u0443\u0441\u0442"_s,
				u"\u0421\u0435\u043d\u0442\u0458\u0430\u0431\u0440"_s,
				u"\u041e\u043a\u0442\u0458\u0430\u0431\u0440"_s,
				u"\u041d\u043e\u0458\u0430\u0431\u0440"_s,
				u"\u0414\u0435\u043a\u0430\u0431\u0440"_s,
				""_s
			}))
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
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_az_Cyrl::FormatData_az_Cyrl() {
}

$Class* FormatData_az_Cyrl::load$($String* name, bool initialize) {
	$loadClass(FormatData_az_Cyrl, name, initialize, &_FormatData_az_Cyrl_ClassInfo_, allocate$FormatData_az_Cyrl);
	return class$;
}

$Class* FormatData_az_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun