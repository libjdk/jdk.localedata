#include <sun/text/resources/cldr/ext/FormatData_mn.h>

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

$MethodInfo _FormatData_mn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_mn::*)()>(&FormatData_mn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_mn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_mn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mn_MethodInfo_
};

$Object* allocate$FormatData_mn($Class* clazz) {
	return $of($alloc(FormatData_mn));
}

void FormatData_mn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_mn::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u043d\u044d\u0433\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
		u"\u0445\u043e\u0451\u0440\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		u"\u0433\u0443\u0440\u0430\u0432\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		u"\u0434\u04e9\u0440\u04e9\u0432\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
		u"\u0442\u0430\u0432\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		u"\u0437\u0443\u0440\u0433\u0430\u0430\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		u"\u0434\u043e\u043b\u043e\u043e\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		u"\u043d\u0430\u0439\u043c\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		u"\u0435\u0441\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
		u"\u0430\u0440\u0430\u0432\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		u"\u0430\u0440\u0432\u0430\u043d \u043d\u044d\u0433\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
		u"\u0430\u0440\u0432\u0430\u043d \u0445\u043e\u0451\u0440\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"1-\u0440 \u0441\u0430\u0440"_s,
		u"2-\u0440 \u0441\u0430\u0440"_s,
		u"3-\u0440 \u0441\u0430\u0440"_s,
		u"4-\u0440 \u0441\u0430\u0440"_s,
		u"5-\u0440 \u0441\u0430\u0440"_s,
		u"6-\u0440 \u0441\u0430\u0440"_s,
		u"7-\u0440 \u0441\u0430\u0440"_s,
		u"8-\u0440 \u0441\u0430\u0440"_s,
		u"9-\u0440 \u0441\u0430\u0440"_s,
		u"10-\u0440 \u0441\u0430\u0440"_s,
		u"11-\u0440 \u0441\u0430\u0440"_s,
		u"12-\u0440 \u0441\u0430\u0440"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"I"_s,
		"II"_s,
		"III"_s,
		"IV"_s,
		"V"_s,
		"VI"_s,
		"VII"_s,
		"VIII"_s,
		"IX"_s,
		"X"_s,
		"XI"_s,
		"XII"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u043d\u044f\u043c"_s,
		u"\u0434\u0430\u0432\u0430\u0430"_s,
		u"\u043c\u044f\u0433\u043c\u0430\u0440"_s,
		u"\u043b\u0445\u0430\u0433\u0432\u0430"_s,
		u"\u043f\u04af\u0440\u044d\u0432"_s,
		u"\u0431\u0430\u0430\u0441\u0430\u043d"_s,
		u"\u0431\u044f\u043c\u0431\u0430"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u041d\u044f"_s,
		u"\u0414\u0430"_s,
		u"\u041c\u044f"_s,
		u"\u041b\u0445"_s,
		u"\u041f\u04af"_s,
		u"\u0411\u0430"_s,
		u"\u0411\u044f"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u0440 \u0443\u043b\u0438\u0440\u0430\u043b"_s,
		u"2-\u0440 \u0443\u043b\u0438\u0440\u0430\u043b"_s,
		u"3-\u0440 \u0443\u043b\u0438\u0440\u0430\u043b"_s,
		u"4-\u0440 \u0443\u043b\u0438\u0440\u0430\u043b"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"I \u0443\u043b\u0438\u0440\u0430\u043b"_s,
		u"II \u0443\u043b\u0438\u0440\u0430\u043b"_s,
		u"III \u0443\u043b\u0438\u0440\u0430\u043b"_s,
		u"IV \u0443\u043b\u0438\u0440\u0430\u043b"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		"I"_s,
		"II"_s,
		"III"_s,
		"IV"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u04af.\u04e9."_s,
		u"\u04af.\u0445."_s,
		u"\u0448\u04e9\u043d\u04e9 \u0434\u0443\u043d\u0434"_s,
		u"\u04af\u0434 \u0434\u0443\u043d\u0434"_s,
		u"\u04e9\u0433\u043b\u04e9\u04e9"_s,
		""_s,
		u"\u04e9\u0434\u04e9\u0440"_s,
		""_s,
		u"\u043e\u0440\u043e\u0439"_s,
		""_s,
		u"\u0448\u04e9\u043d\u04e9"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u041c\u042d\u04e8"_s,
		u"\u041c\u042d"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss (zzzz)"_s,
		"HH:mm:ss (z)"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"G y \'\u043e\u043d\u044b\' MMMM\'\u044b\u043d\' d. cccc \'\u0433\u0430\u0440\u0430\u0433\'"_s,
		u"G y \'\u043e\u043d\u044b\' MM \'\u0441\u0430\u0440\u044b\u043d\' dd"_s,
		u"G y \'\u043e\u043d\u044b\' MMM\'\u044b\u043d\' d"_s,
		"GGGGG y.MM.dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"GGGG y \'\u043e\u043d\u044b\' MMMM\'\u044b\u043d\' d. EEEE \'\u0433\u0430\u0440\u0430\u0433\'"_s,
		u"GGGG y \'\u043e\u043d\u044b\' MM \'\u0441\u0430\u0440\u044b\u043d\' dd"_s,
		u"GGGG y \'\u043e\u043d\u044b\' MMM\'\u044b\u043d\' d"_s,
		"G y.MM.dd"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0433\u0440\u0435\u0433\u043e\u0440\u0438\u0439\u043d \u0446\u0430\u0433\u043b\u0430\u0432\u0430\u0440"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0436\u0438\u043b"_s)
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
			$of(u"{0}-\u043d \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442 \u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u044f\u043f\u043e\u043d \u0446\u0430\u0433\u043b\u0430\u0432\u0430\u0440"_s)
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
				u"\u043c\u0430\u043d\u0430\u0439 \u044d\u0440\u0438\u043d\u0438\u0439 \u04e9\u043c\u043d\u04e9\u0445"_s,
				u"\u043c\u0430\u043d\u0430\u0439 \u044d\u0440\u0438\u043d\u0438\u0439"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
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
			$of(u"\u043c\u0438\u043d\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u044d\u0440\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u04af.\u04e9./\u04af.\u0445."_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u043c\u0438\u043d\u0433\u043e \u0446\u0430\u0433\u043b\u0430\u0432\u0430\u0440"_s)
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
			$of(u"\u0441\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0441\u0435\u043a\u0443\u043d\u0434"_s)
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
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0438\u0441\u043b\u0430\u043c\u044b\u043d \u0446\u0430\u0433\u043b\u0430\u0432\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:21:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-21:00"_s)
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
			$of(u"{0}-\u043d \u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u043c\u044f\u043d\u0433\u0430 other:0\' \'\u043c\u044f\u043d\u0433\u0430}"_s,
				u"{one:00\' \'\u043c\u044f\u043d\u0433\u0430 other:00\' \'\u043c\u044f\u043d\u0433\u0430}"_s,
				u"{one:000\' \'\u043c\u044f\u043d\u0433\u0430 other:000\' \'\u043c\u044f\u043d\u0433\u0430}"_s,
				u"{one:0\' \'\u0441\u0430\u044f other:0\' \'\u0441\u0430\u044f}"_s,
				u"{one:00\' \'\u0441\u0430\u044f other:00\' \'\u0441\u0430\u044f}"_s,
				u"{one:000\' \'\u0441\u0430\u044f other:000\' \'\u0441\u0430\u044f}"_s,
				u"{one:0\' \'\u0442\u044d\u0440\u0431\u0443\u043c other:0\' \'\u0442\u044d\u0440\u0431\u0443\u043c}"_s,
				u"{one:00\' \'\u0442\u044d\u0440\u0431\u0443\u043c other:00\' \'\u0442\u044d\u0440\u0431\u0443\u043c}"_s,
				u"{one:000\' \'\u0442\u044d\u0440\u0431\u0443\u043c other:000\' \'\u0442\u044d\u0440\u0431\u0443\u043c}"_s,
				u"{one:0\' \'\u0438\u0445\' \'\u043d\u0430\u044f\u0434 other:0\' \'\u0438\u0445\' \'\u043d\u0430\u044f\u0434}"_s,
				u"{one:00\' \'\u0438\u0445\' \'\u043d\u0430\u044f\u0434 other:00\' \'\u0438\u0445\' \'\u043d\u0430\u044f\u0434}"_s,
				u"{one:000\' \'\u0438\u0445\' \'\u043d\u0430\u044f\u0434 other:000\' \'\u0438\u0445\' \'\u043d\u0430\u044f\u0434}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0446\u0430\u0433\u0438\u0439\u043d \u0431\u04af\u0441"_s)
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
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0433\u0430\u0440\u0430\u0433"_s)
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
			$of(u"\u0434\u043e\u043b\u043e\u043e \u0445\u043e\u043d\u043e\u0433"_s)
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
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
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
				u"{one:0\u00a0\u043c\u044f\u043d\u0433\u0430 other:0\u00a0\u043c\u044f\u043d\u0433\u0430}"_s,
				u"{one:00\u00a0\u043c\u044f\u043d\u0433\u0430 other:00\u00a0\u043c\u044f\u043d\u0433\u0430}"_s,
				u"{one:000\u00a0\u043c\u044f\u043d\u0433\u0430 other:000\u00a0\u043c\u044f\u043d\u0433\u0430}"_s,
				u"{one:0\u00a0\u0441\u0430\u044f other:0\u00a0\u0441\u0430\u044f}"_s,
				u"{one:00\u00a0\u0441\u0430\u044f other:00\u00a0\u0441\u0430\u044f}"_s,
				u"{one:000\u00a0\u0441\u0430\u044f other:000\u00a0\u0441\u0430\u044f}"_s,
				u"{one:0\u00a0\u0442\u044d\u0440\u0431\u0443\u043c other:0\u00a0\u0442\u044d\u0440\u0431\u0443\u043c}"_s,
				u"{one:00\u00a0\u0442\u044d\u0440\u0431\u0443\u043c other:00\u00a0\u0442\u044d\u0440\u0431\u0443\u043c}"_s,
				u"{one:000\u0422 other:000\u0422}"_s,
				u"{one:0\u0418\u041d other:0\u0418\u041d}"_s,
				u"{one:00\u0418\u041d other:00\u0418\u041d}"_s,
				u"{one:000\u0418\u041d other:000\u0418\u041d}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0}-\u043d \u0437\u0443\u043d\u044b \u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y \'\u043e\u043d\u044b\' MMMM\'\u044b\u043d\' d, EEEE \'\u0433\u0430\u0440\u0430\u0433\'"_s,
				u"y \'\u043e\u043d\u044b\' MMMM\'\u044b\u043d\' d"_s,
				u"y \'\u043e\u043d\u044b\' MMM\'\u044b\u043d\' d"_s,
				"y.MM.dd"_s
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
				u"\u041d\u044f\u043c"_s,
				u"\u0414\u0430\u0432\u0430\u0430"_s,
				u"\u041c\u044f\u0433\u043c\u0430\u0440"_s,
				u"\u041b\u0445\u0430\u0433\u0432\u0430"_s,
				u"\u041f\u04af\u0440\u044d\u0432"_s,
				u"\u0411\u0430\u0430\u0441\u0430\u043d"_s,
				u"\u0411\u044f\u043c\u0431\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0446\u0430\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0431\u0443\u0434\u0434\u044b\u043d \u0446\u0430\u0433\u043b\u0430\u0432\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u041d\u044d\u0433\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
				u"\u0425\u043e\u0451\u0440\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				u"\u0413\u0443\u0440\u0430\u0432\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				u"\u0414\u04e9\u0440\u04e9\u0432\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
				u"\u0422\u0430\u0432\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				u"\u0417\u0443\u0440\u0433\u0430\u0430\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				u"\u0414\u043e\u043b\u043e\u043e\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				u"\u041d\u0430\u0439\u043c\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				u"\u0415\u0441\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
				u"\u0410\u0440\u0430\u0432\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				u"\u0410\u0440\u0432\u0430\u043d \u043d\u044d\u0433\u0434\u04af\u0433\u044d\u044d\u0440 \u0441\u0430\u0440"_s,
				u"\u0410\u0440\u0432\u0430\u043d \u0445\u043e\u0451\u0440\u0434\u0443\u0433\u0430\u0430\u0440 \u0441\u0430\u0440"_s,
				""_s
			}))
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
			$of(metaValue_DayAbbreviations)
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

FormatData_mn::FormatData_mn() {
}

$Class* FormatData_mn::load$($String* name, bool initialize) {
	$loadClass(FormatData_mn, name, initialize, &_FormatData_mn_ClassInfo_, allocate$FormatData_mn);
	return class$;
}

$Class* FormatData_mn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun