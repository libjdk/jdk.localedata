#include <sun/text/resources/cldr/ext/FormatData_bg.h>

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

$MethodInfo _FormatData_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_bg::*)()>(&FormatData_bg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_bg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_bg",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_bg_MethodInfo_
};

$Object* allocate$FormatData_bg($Class* clazz) {
	return $of($alloc(FormatData_bg));
}

void FormatData_bg::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_bg::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u044f\u043d\u0443\u0430\u0440\u0438"_s,
		u"\u0444\u0435\u0432\u0440\u0443\u0430\u0440\u0438"_s,
		u"\u043c\u0430\u0440\u0442"_s,
		u"\u0430\u043f\u0440\u0438\u043b"_s,
		u"\u043c\u0430\u0439"_s,
		u"\u044e\u043d\u0438"_s,
		u"\u044e\u043b\u0438"_s,
		u"\u0430\u0432\u0433\u0443\u0441\u0442"_s,
		u"\u0441\u0435\u043f\u0442\u0435\u043c\u0432\u0440\u0438"_s,
		u"\u043e\u043a\u0442\u043e\u043c\u0432\u0440\u0438"_s,
		u"\u043d\u043e\u0435\u043c\u0432\u0440\u0438"_s,
		u"\u0434\u0435\u043a\u0435\u043c\u0432\u0440\u0438"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u044f\u043d\u0443"_s,
		u"\u0444\u0435\u0432"_s,
		u"\u043c\u0430\u0440\u0442"_s,
		u"\u0430\u043f\u0440"_s,
		u"\u043c\u0430\u0439"_s,
		u"\u044e\u043d\u0438"_s,
		u"\u044e\u043b\u0438"_s,
		u"\u0430\u0432\u0433"_s,
		u"\u0441\u0435\u043f"_s,
		u"\u043e\u043a\u0442"_s,
		u"\u043d\u043e\u0435"_s,
		u"\u0434\u0435\u043a"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u044f"_s,
		u"\u0444"_s,
		u"\u043c"_s,
		u"\u0430"_s,
		u"\u043c"_s,
		u"\u044e"_s,
		u"\u044e"_s,
		u"\u0430"_s,
		u"\u0441"_s,
		u"\u043e"_s,
		u"\u043d"_s,
		u"\u0434"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u043d\u0435\u0434\u0435\u043b\u044f"_s,
		u"\u043f\u043e\u043d\u0435\u0434\u0435\u043b\u043d\u0438\u043a"_s,
		u"\u0432\u0442\u043e\u0440\u043d\u0438\u043a"_s,
		u"\u0441\u0440\u044f\u0434\u0430"_s,
		u"\u0447\u0435\u0442\u0432\u044a\u0440\u0442\u044a\u043a"_s,
		u"\u043f\u0435\u0442\u044a\u043a"_s,
		u"\u0441\u044a\u0431\u043e\u0442\u0430"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u043d\u0434"_s,
		u"\u043f\u043d"_s,
		u"\u0432\u0442"_s,
		u"\u0441\u0440"_s,
		u"\u0447\u0442"_s,
		u"\u043f\u0442"_s,
		u"\u0441\u0431"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u043d"_s,
		u"\u043f"_s,
		u"\u0432"_s,
		u"\u0441"_s,
		u"\u0447"_s,
		u"\u043f"_s,
		u"\u0441"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1. \u0442\u0440\u0438\u043c\u0435\u0441\u0435\u0447\u0438\u0435"_s,
		u"2. \u0442\u0440\u0438\u043c\u0435\u0441\u0435\u0447\u0438\u0435"_s,
		u"3. \u0442\u0440\u0438\u043c\u0435\u0441\u0435\u0447\u0438\u0435"_s,
		u"4. \u0442\u0440\u0438\u043c\u0435\u0441\u0435\u0447\u0438\u0435"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1. \u0442\u0440\u0438\u043c."_s,
		u"2. \u0442\u0440\u0438\u043c."_s,
		u"3. \u0442\u0440\u0438\u043c."_s,
		u"4. \u0442\u0440\u0438\u043c."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u043f\u0440.\u043e\u0431."_s,
		u"\u0441\u043b.\u043e\u0431."_s,
		u"\u043f\u043e\u043b\u0443\u043d\u043e\u0449"_s,
		""_s,
		u"\u0441\u0443\u0442\u0440\u0438\u043d\u0442\u0430"_s,
		u"\u043d\u0430 \u043e\u0431\u044f\u0434"_s,
		u"\u0441\u043b\u0435\u0434\u043e\u0431\u0435\u0434"_s,
		""_s,
		u"\u0432\u0435\u0447\u0435\u0440\u0442\u0430"_s,
		""_s,
		u"\u043f\u0440\u0435\u0437 \u043d\u043e\u0449\u0442\u0430"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"am"_s,
		"pm"_s,
		u"\u043f\u043e\u043b\u0443\u043d\u043e\u0449"_s,
		""_s,
		u"\u0441\u0443\u0442\u0440\u0438\u043d\u0442\u0430"_s,
		u"\u043d\u0430 \u043e\u0431\u044f\u0434"_s,
		u"\u0441\u043b\u0435\u0434\u043e\u0431\u0435\u0434"_s,
		""_s,
		u"\u0432\u0435\u0447\u0435\u0440\u0442\u0430"_s,
		""_s,
		u"\u043f\u0440\u0435\u0437 \u043d\u043e\u0449\u0442\u0430"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u043f\u0440.\u0425\u0440."_s,
		u"\u0441\u043b.\u0425\u0440."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		u"H:mm:ss \'\u0447\'. zzzz"_s,
		u"H:mm:ss \'\u0447\'. z"_s,
		u"H:mm:ss \'\u0447\'."_s,
		u"H:mm \'\u0447\'."_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'\u0433\'. G"_s,
		u"d MMMM y \'\u0433\'. G"_s,
		u"d.MM.y \'\u0433\'. G"_s,
		"d.MM.yy G"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'\u0433\'. GGGG"_s,
		u"d MMMM y \'\u0433\'. GGGG"_s,
		u"d.MM.y \'\u0433\'. GGGG"_s,
		"d.MM.yy GGGG"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0433\u0440\u0438\u0433\u043e\u0440\u0438\u0430\u043d\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0433\u043e\u0434\u0438\u043d\u0430"_s)
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
			$of("timezone.gmtFormat"_s),
			$of(u"\u0413\u0440\u0438\u043d\u0443\u0438\u0447{0}"_s)
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
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0418\u0441\u043b\u044f\u043c\u0441\u043a\u0438 \u0446\u0438\u0432\u0438\u043b\u0435\u043d \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u2013 \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043d\u043e \u0432\u0440\u0435\u043c\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u0413\u0440\u0438\u043d\u0443\u0438\u0447"_s)
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
				u"\u043f\u0440\u0435\u0434\u0438 \u0425\u0440\u0438\u0441\u0442\u0430"_s,
				u"\u0441\u043b\u0435\u0434 \u0425\u0440\u0438\u0441\u0442\u0430"_s
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
				"{1}, {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u043c\u0438\u043d\u0443\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0435\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u043f\u0440.\u043e\u0431./\u0441\u043b.\u043e\u0431."_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u043c\u0443\u0445\u0430\u0440\u0430\u043c"_s,
				u"\u0441\u0430\u0444\u0430\u0440"_s,
				u"\u0440\u0430\u0431\u0438-1"_s,
				u"\u0440\u0430\u0431\u0438-2"_s,
				u"\u0434\u0436\u0443\u043c\u0430\u0434\u0430-1"_s,
				u"\u0434\u0436\u0443\u043c\u0430\u0434\u0430-2"_s,
				u"\u0440\u0430\u0434\u0436\u0430\u0431"_s,
				u"\u0448\u0430\u0431\u0430\u043d"_s,
				u"\u0440\u0430\u043c\u0430\u0437\u0430\u043d"_s,
				u"\u0428\u0430\u0432\u0430\u043b"_s,
				u"\u0414\u0445\u0443\u043b-\u041a\u0430\u0430\u0434\u0430"_s,
				u"\u0414\u0445\u0443\u043b-\u0445\u0438\u0434\u0436\u0430"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440 \u043d\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430 \u041a\u0438\u0442\u0430\u0439"_s)
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
			$of(u"\u043c\u0435\u0441\u0435\u0446"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0441\u0435\u043a\u0443\u043d\u0434\u0430"_s)
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
			$of("calendarname.islamic"_s),
			$of(u"\u0438\u0441\u043b\u044f\u043c\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:22:00-04:00;morning2:11:00-14:00;afternoon1:14:00-18:00;morning1:04:00-11:00;evening1:18:00-22:00"_s)
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
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0445\u0438\u043b\'.\' other:0\' \'\u0445\u0438\u043b\u044f\u0434\u0438}"_s,
				u"{one:00\' \'\u0445\u0438\u043b\u044f\u0434\u0438 other:00\' \'\u0445\u0438\u043b\u044f\u0434\u0438}"_s,
				u"{one:000\' \'\u0445\u0438\u043b\u044f\u0434\u0438 other:000\' \'\u0445\u0438\u043b\u044f\u0434\u0438}"_s,
				u"{one:0\' \'\u043c\u0438\u043b\u0438\u043e\u043d other:0\' \'\u043c\u0438\u043b\u0438\u043e\u043d\u0430}"_s,
				u"{one:00\' \'\u043c\u0438\u043b\u0438\u043e\u043d\u0430 other:00\' \'\u043c\u0438\u043b\u0438\u043e\u043d\u0430}"_s,
				u"{one:000\' \'\u043c\u0438\u043b\u0438\u043e\u043d\u0430 other:000\' \'\u043c\u0438\u043b\u0438\u043e\u043d\u0430}"_s,
				u"{one:0\' \'\u043c\u0438\u043b\u0438\u0430\u0440\u0434 other:0\' \'\u043c\u0438\u043b\u0438\u0430\u0440\u0434\u0430}"_s,
				u"{one:00\' \'\u043c\u0438\u043b\u0438\u0430\u0440\u0434\u0430 other:00\' \'\u043c\u0438\u043b\u0438\u0430\u0440\u0434\u0430}"_s,
				u"{one:000\' \'\u043c\u0438\u043b\u0438\u0430\u0440\u0434\u0430 other:000\' \'\u043c\u0438\u043b\u0438\u0430\u0440\u0434\u0430}"_s,
				u"{one:0\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d other:0\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d\u0430}"_s,
				u"{one:00\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d\u0430 other:00\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d\u0430}"_s,
				u"{one:000\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d\u0430 other:000\' \'\u0442\u0440\u0438\u043b\u0438\u043e\u043d\u0430}"_s
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
			$of(u"\u0447\u0430\u0441\u043e\u0432\u0430 \u0437\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0434\u0435\u043d \u043e\u0442 \u0441\u0435\u0434\u043c\u0438\u0446\u0430\u0442\u0430"_s)
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
			$of(u"\u0441\u0435\u0434\u043c\u0438\u0446\u0430"_s)
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
				u"{one:0\u00a0\u0445\u0438\u043b\'.\' other:0\u00a0\u0445\u0438\u043b\'.\'}"_s,
				u"{one:00\u00a0\u0445\u0438\u043b\'.\' other:00\u00a0\u0445\u0438\u043b\'.\'}"_s,
				u"{one:000\u00a0\u0445\u0438\u043b\'.\' other:000\u00a0\u0445\u0438\u043b\'.\'}"_s,
				u"{one:0\u00a0\u043c\u043b\u043d\'.\' other:0\u00a0\u043c\u043b\u043d\'.\'}"_s,
				u"{one:00\u00a0\u043c\u043b\u043d\'.\' other:00\u00a0\u043c\u043b\u043d\'.\'}"_s,
				u"{one:000\u00a0\u043c\u043b\u043d\'.\' other:000\u00a0\u043c\u043b\u043d\'.\'}"_s,
				u"{one:0\u00a0\u043c\u043b\u0440\u0434\'.\' other:0\u00a0\u043c\u043b\u0440\u0434\'.\'}"_s,
				u"{one:00\u00a0\u043c\u043b\u0440\u0434\'.\' other:00\u00a0\u043c\u043b\u0440\u0434\'.\'}"_s,
				u"{one:000\u00a0\u043c\u043b\u0440\u0434\'.\' other:000\u00a0\u043c\u043b\u0440\u0434\'.\'}"_s,
				u"{one:0\u00a0\u0442\u0440\u043b\u043d\'.\' other:0\u00a0\u0442\u0440\u043b\u043d\'.\'}"_s,
				u"{one:00\u00a0\u0442\u0440\u043b\u043d\'.\' other:00\u00a0\u0442\u0440\u043b\u043d\'.\'}"_s,
				u"{one:000\u00a0\u0442\u0440\u043b\u043d\'.\' other:000\u00a0\u0442\u0440\u043b\u043d\'.\'}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u2013 \u043b\u044f\u0442\u043d\u043e \u0447\u0430\u0441\u043e\u0432\u043e \u0432\u0440\u0435\u043c\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d MMMM y \'\u0433\'."_s,
				u"d MMMM y \'\u0433\'."_s,
				u"d.MM.y \'\u0433\'."_s,
				u"d.MM.yy \'\u0433\'."_s
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
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0447\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0431\u0443\u0434\u0438\u0441\u0442\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				u"0.00\u00a0\u00a4;(0.00\u00a0\u00a4)"_s
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_bg::FormatData_bg() {
}

$Class* FormatData_bg::load$($String* name, bool initialize) {
	$loadClass(FormatData_bg, name, initialize, &_FormatData_bg_ClassInfo_, allocate$FormatData_bg);
	return class$;
}

$Class* FormatData_bg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun