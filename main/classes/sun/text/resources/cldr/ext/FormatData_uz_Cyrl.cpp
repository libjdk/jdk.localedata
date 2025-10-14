#include <sun/text/resources/cldr/ext/FormatData_uz_Cyrl.h>

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

$MethodInfo _FormatData_uz_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_uz_Cyrl::*)()>(&FormatData_uz_Cyrl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_uz_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_uz_Cyrl",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_uz_Cyrl_MethodInfo_
};

$Object* allocate$FormatData_uz_Cyrl($Class* clazz) {
	return $of($alloc(FormatData_uz_Cyrl));
}

void FormatData_uz_Cyrl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_uz_Cyrl::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u044f\u043d\u0432\u0430\u0440"_s,
		u"\u0444\u0435\u0432\u0440\u0430\u043b"_s,
		u"\u043c\u0430\u0440\u0442"_s,
		u"\u0430\u043f\u0440\u0435\u043b"_s,
		u"\u043c\u0430\u0439"_s,
		u"\u0438\u044e\u043d"_s,
		u"\u0438\u044e\u043b"_s,
		u"\u0430\u0432\u0433\u0443\u0441\u0442"_s,
		u"\u0441\u0435\u043d\u0442\u044f\u0431\u0440"_s,
		u"\u043e\u043a\u0442\u044f\u0431\u0440"_s,
		u"\u043d\u043e\u044f\u0431\u0440"_s,
		u"\u0434\u0435\u043a\u0430\u0431\u0440"_s,
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
		u"\u044f\u043a\u0448\u0430\u043d\u0431\u0430"_s,
		u"\u0434\u0443\u0448\u0430\u043d\u0431\u0430"_s,
		u"\u0441\u0435\u0448\u0430\u043d\u0431\u0430"_s,
		u"\u0447\u043e\u0440\u0448\u0430\u043d\u0431\u0430"_s,
		u"\u043f\u0430\u0439\u0448\u0430\u043d\u0431\u0430"_s,
		u"\u0436\u0443\u043c\u0430"_s,
		u"\u0448\u0430\u043d\u0431\u0430"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u044f\u043a\u0448"_s,
		u"\u0434\u0443\u0448"_s,
		u"\u0441\u0435\u0448"_s,
		u"\u0447\u043e\u0440"_s,
		u"\u043f\u0430\u0439"_s,
		u"\u0436\u0443\u043c"_s,
		u"\u0448\u0430\u043d"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u042f"_s,
		u"\u0414"_s,
		u"\u0421"_s,
		u"\u0427"_s,
		u"\u041f"_s,
		u"\u0416"_s,
		u"\u0428"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u0447\u043e\u0440\u0430\u043a"_s,
		u"2-\u0447\u043e\u0440\u0430\u043a"_s,
		u"3-\u0447\u043e\u0440\u0430\u043a"_s,
		u"4-\u0447\u043e\u0440\u0430\u043a"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u0447"_s,
		u"2-\u0447"_s,
		u"3-\u0447"_s,
		u"4-\u0447"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0422\u041e"_s,
		u"\u0422\u041a"_s,
		u"\u044f\u0440\u0438\u043c \u0442\u0443\u043d"_s,
		u"\u0442\u0443\u0448 \u043f\u0430\u0439\u0442\u0438"_s,
		u"\u044d\u0440\u0442\u0430\u043b\u0430\u0431"_s,
		""_s,
		u"\u043a\u0443\u043d\u0434\u0443\u0437\u0438"_s,
		""_s,
		u"\u043a\u0435\u0447\u049b\u0443\u0440\u0443\u043d"_s,
		""_s,
		u"\u043a\u0435\u0447\u0430\u0441\u0438"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u043c.\u0430."_s,
		u"\u043c\u0438\u043b\u043e\u0434\u0438\u0439"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss (zzzz)"_s,
		"HH:mm:ss (z)"_s,
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
		"EEEE, G y MMMM dd"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y/MM/dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, GGGG y MMMM dd"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y/MM/dd"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0413\u0440\u0438\u0433\u043e\u0440\u0438\u0430\u043d \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u0438"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0419\u0438\u043b"_s)
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
				"-"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				u"\u04b3\u0430\u049b\u0438\u049b\u0438\u0439\u00a0\u0441\u043e\u043d\u00a0\u044d\u043c\u0430\u0441"_s,
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
			$of(metaValue_QuarterAbbreviations)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442 \u0432\u0430\u049b\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
				u"\u043c\u0438\u043b\u043e\u0434\u0434\u0430\u043d \u0430\u0432\u0432\u0430\u043b\u0433\u0438"_s,
				u"\u043c\u0438\u043b\u043e\u0434\u0438\u0439"_s
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
				u"\u00a0"_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u04b3\u0430\u049b\u0438\u049b\u0438\u0439\u00a0\u0441\u043e\u043d\u00a0\u044d\u043c\u0430\u0441"_s,
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
			$of(u"\u0414\u0430\u049b\u0438\u049b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u042d\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u041a\u0443\u043d \u0432\u0430\u049b\u0442\u0438"_s)
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
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u041e\u0439"_s)
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
			$of(u"\u0421\u043e\u043d\u0438\u044f"_s)
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
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(u"{0} \u0432\u0430\u049b\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u043c\u0438\u043d\u0433 other:0\' \'\u043c\u0438\u043d\u0433}"_s,
				u"{one:00\' \'\u043c\u0438\u043d\u0433 other:00\' \'\u043c\u0438\u043d\u0433}"_s,
				u"{one:000\' \'\u043c\u0438\u043d\u0433 other:000\' \'\u043c\u0438\u043d\u0433}"_s,
				u"{one:0\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d other:0\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:00\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d other:00\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:000\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d other:000\' \'\u043c\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{one:0\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434 other:0\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{one:00\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434 other:00\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{one:000\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434 other:000\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{one:0\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d other:0\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d}"_s,
				u"{one:00\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d other:00\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d}"_s,
				u"{one:000\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d other:000\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d}"_s
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
			$of(u"\u041c\u0438\u043d\u0442\u0430\u049b\u0430"_s)
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
			$of(metaValue_AmPmMarkers)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u04b2\u0430\u0444\u0442\u0430 \u043a\u0443\u043d\u0438"_s)
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
			$of("field.week"_s),
			$of(u"\u04b2\u0430\u0444\u0442\u0430"_s)
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
				u"{one:0\u043c\u0438\u043d\u0433 other:0\u043c\u0438\u043d\u0433}"_s,
				u"{one:00\u043c\u0438\u043d\u0433 other:00\u043c\u0438\u043d\u0433}"_s,
				u"{one:000\u043c\u0438\u043d\u0433 other:000\u043c\u0438\u043d\u0433}"_s,
				u"{one:0\u043c\u043b\u043d other:0\u043c\u043b\u043d}"_s,
				u"{one:00\u043c\u043b\u043d other:00\u043c\u043b\u043d}"_s,
				u"{one:000\u043c\u043b\u043d other:000\u043c\u043b\u043d}"_s,
				u"{one:0\u043c\u043b\u0440\u0434 other:0\u043c\u043b\u0440\u0434}"_s,
				u"{one:00\u043c\u043b\u0440\u0434 other:00\u043c\u043b\u0440\u0434}"_s,
				u"{one:000\u043c\u043b\u0440\u0434 other:000\u043c\u043b\u0440\u0434}"_s,
				u"{one:0\u0442\u0440\u043b\u043d other:0\u0442\u0440\u043b\u043d}"_s,
				u"{one:00\u0442\u0440\u043b\u043d other:00\u0442\u0440\u043b\u043d}"_s,
				u"{one:000\u0442\u0440\u043b\u043d other:000\u0442\u0440\u043b\u043d}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u043a\u0443\u043d\u0434\u0443\u0437\u0433\u0438 \u0432\u0430\u049b\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
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
			$of(u"\u0421\u043e\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_uz_Cyrl::FormatData_uz_Cyrl() {
}

$Class* FormatData_uz_Cyrl::load$($String* name, bool initialize) {
	$loadClass(FormatData_uz_Cyrl, name, initialize, &_FormatData_uz_Cyrl_ClassInfo_, allocate$FormatData_uz_Cyrl);
	return class$;
}

$Class* FormatData_uz_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun