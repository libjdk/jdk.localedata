#include <sun/text/resources/cldr/ext/FormatData_ce.h>

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

$MethodInfo _FormatData_ce_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ce::*)()>(&FormatData_ce::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ce_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ce",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ce_MethodInfo_
};

$Object* allocate$FormatData_ce($Class* clazz) {
	return $of($alloc(FormatData_ce));
}

void FormatData_ce::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ce::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u044f\u043d\u0432\u0430\u0440\u044c"_s,
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
		u"\u044f\u043d\u0432"_s,
		u"\u0444\u0435\u0432"_s,
		u"\u043c\u0430\u0440"_s,
		u"\u0430\u043f\u0440"_s,
		u"\u043c\u0430\u0439"_s,
		u"\u0438\u044e\u043d"_s,
		u"\u0438\u044e\u043b"_s,
		u"\u0430\u0432\u0433"_s,
		u"\u0441\u0435\u043d"_s,
		u"\u043e\u043a\u0442"_s,
		u"\u043d\u043e\u044f"_s,
		u"\u0434\u0435\u043a"_s,
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
		u"\u043a\u04c0\u0438\u0440\u0430"_s,
		u"\u043e\u0440\u0448\u043e\u0442"_s,
		u"\u0448\u0438\u043d\u0430\u0440\u0430"_s,
		u"\u043a\u0445\u0430\u0430\u0440\u0430"_s,
		u"\u0435\u0430\u0440\u0430"_s,
		u"\u043f\u04c0\u0435\u0440\u0430\u0441\u043a\u0430"_s,
		u"\u0448\u0443\u043e\u0442"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u043a\u04c0\u0438"_s,
		u"\u043e\u0440"_s,
		u"\u0448\u0438"_s,
		u"\u043a\u0445\u0430"_s,
		u"\u0435\u0430"_s,
		u"\u043f\u04c0\u0435"_s,
		u"\u0448\u0443\u043e"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u0433\u04c0\u0430 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"2-\u0433\u04c0\u0430 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"3-\u0433\u04c0\u0430 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"4-\u0433\u04c0\u0430 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u0433\u04c0\u0430 \u043a\u0432."_s,
		u"2-\u0433\u04c0\u0430 \u043a\u0432."_s,
		u"3-\u0433\u04c0\u0430 \u043a\u0432."_s,
		u"4-\u0433\u04c0\u0430 \u043a\u0432."_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0432. \u044d. \u0442\u04c0. \u044f"_s,
		u"\u0432. \u044d"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0433\u0440\u0438\u0433\u043e\u0440\u0438\u0430\u043d\u0430\u043d"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0448\u043e"_s)
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
			$of($$new($StringArray, {
				u"\u043a\u04c0"_s,
				u"\u043e"_s,
				u"\u0448"_s,
				u"\u043a\u0445"_s,
				u"\u0435"_s,
				u"\u043f\u04c0"_s,
				u"\u0448"_s
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
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0441\u0430\u0445\u044c\u0442\u0430\u043d \u0430\u0441\u0430"_s)
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
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0438\u0439\u043d"_s)
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
				u"\u04c0\u0438\u0439\u0441\u0430 \u043f\u0430\u0439\u0445\u0430\u043c\u0430\u0440 \u0432\u0438\u043d\u0430 \u0434\u0435 \u043a\u0445\u0430\u0447\u0430\u043b\u0435"_s,
				u"\u04c0\u0438\u0439\u0441\u0430 \u043f\u0430\u0439\u0445\u0430\u043c\u0430\u0440 \u0432\u0438\u043d\u0430 \u0434\u0438\u0439\u043d\u0430\u0445\u044c \u0434\u0443\u044c\u0439\u043d\u0430"_s
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
			$of("field.weekday"_s),
			$of(u"\u043a\u04c0\u0438\u0440\u0430\u043d\u0430\u043d \u0434\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
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
				u"\u0422\u0435\u0440\u0445\u044c\u0430\u0448\u00a0\u0434\u0430\u0446"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of(u"\u043c\u0438\u043d\u043e\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u043c\u0443\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0434\u0435\u043b\u043a\u044a\u0430\u043b \u0442\u04c0\u0435\u0445\u044c\u0430"_s)
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
			$of(u"\u0431\u0443\u0442\u0442"_s)
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
			$of(u"\u043a\u04c0\u0438\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("calendarname.islamic"_s),
			$of(u"\u0438\u0441\u043b\u0430\u043c\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\u00a0\u044d\u0437\u0430\u0440 other:0\u00a0\u044d\u0437\u0430\u0440}"_s,
				u"{one:00\u00a0\u044d\u0437\u0430\u0440 other:00\u00a0\u044d\u0437\u0430\u0440}"_s,
				u"{one:000\u00a0\u044d\u0437\u0430\u0440 other:000\u00a0\u044d\u0437\u0430\u0440}"_s,
				u"{one:0\u00a0\u043c\u043b\u043d other:0\u00a0\u043c\u043b\u043d}"_s,
				u"{one:00\u00a0\u043c\u043b\u043d other:00\u00a0\u043c\u043b\u043d}"_s,
				u"{one:000\u00a0\u043c\u043b\u043d other:000\u00a0\u043c\u043b\u043d}"_s,
				u"{one:0\u00a0\u043c\u043b\u0440\u0434 other:0\u00a0\u043c\u043b\u0440\u0434}"_s,
				u"{one:00\u00a0\u043c\u043b\u0440\u0434 other:00\u00a0\u043c\u043b\u0440\u0434}"_s,
				u"{one:000\u00a0\u043c\u043b\u0440\u0434 other:000\u00a0\u043c\u043b\u0440\u0434}"_s,
				u"{one:0\u00a0\u0442\u0440\u043b\u043d other:0\u00a0\u0442\u0440\u043b\u043d}"_s,
				u"{one:00\u00a0\u0442\u0440\u043b\u043d other:00\u00a0\u0442\u0440\u043b\u043d}"_s,
				u"{one:000\u00a0\u0442\u0440\u043b\u043d other:000\u00a0\u0442\u0440\u043b\u043d}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of(u"\u0441\u0430\u0445\u044c\u0442"_s)
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
				u"#,##0\u00a0%"_s,
				u"#,##0.00\u00a0\u00a4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u044d\u0437\u0430\u0440 other:0\' \'\u044d\u0437\u0430\u0440}"_s,
				u"{one:00\' \'\u044d\u0437\u0430\u0440 other:00\' \'\u044d\u0437\u0430\u0440}"_s,
				u"{one:000\' \'\u044d\u0437\u0430\u0440 other:000\' \'\u044d\u0437\u0430\u0440}"_s,
				u"{one:0\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d other:0\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:00\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d other:00\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:000\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d other:000\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:0\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434 other:0\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{one:00\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434 other:00\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{one:000\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434 other:000\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{one:0\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d other:0\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:00\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d other:00\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:000\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d other:000\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
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

FormatData_ce::FormatData_ce() {
}

$Class* FormatData_ce::load$($String* name, bool initialize) {
	$loadClass(FormatData_ce, name, initialize, &_FormatData_ce_ClassInfo_, allocate$FormatData_ce);
	return class$;
}

$Class* FormatData_ce::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun