#include <sun/text/resources/cldr/ext/FormatData_ky.h>

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

$MethodInfo _FormatData_ky_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ky::*)()>(&FormatData_ky::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ky_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ky",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ky_MethodInfo_
};

$Object* allocate$FormatData_ky($Class* clazz) {
	return $of($alloc(FormatData_ky));
}

void FormatData_ky::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ky::getContents() {
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
		u"\u044f\u043d\u0432."_s,
		u"\u0444\u0435\u0432."_s,
		u"\u043c\u0430\u0440."_s,
		u"\u0430\u043f\u0440."_s,
		u"\u043c\u0430\u0439"_s,
		u"\u0438\u044e\u043d."_s,
		u"\u0438\u044e\u043b."_s,
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
		u"\u0436\u0435\u043a\u0448\u0435\u043c\u0431\u0438"_s,
		u"\u0434\u04af\u0439\u0448\u04e9\u043c\u0431\u04af"_s,
		u"\u0448\u0435\u0439\u0448\u0435\u043c\u0431\u0438"_s,
		u"\u0448\u0430\u0440\u0448\u0435\u043c\u0431\u0438"_s,
		u"\u0431\u0435\u0439\u0448\u0435\u043c\u0431\u0438"_s,
		u"\u0436\u0443\u043c\u0430"_s,
		u"\u0438\u0448\u0435\u043c\u0431\u0438"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0436\u0435\u043a."_s,
		u"\u0434\u04af\u0439."_s,
		u"\u0448\u0435\u0439\u0448."_s,
		u"\u0448\u0430\u0440\u0448."_s,
		u"\u0431\u0435\u0439\u0448."_s,
		u"\u0436\u0443\u043c\u0430"_s,
		u"\u0438\u0448\u043c."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0416"_s,
		u"\u0414"_s,
		u"\u0428"_s,
		u"\u0428"_s,
		u"\u0411"_s,
		u"\u0416"_s,
		u"\u0418"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u0447\u0435\u0439\u0440\u0435\u043a"_s,
		u"2-\u0447\u0435\u0439\u0440\u0435\u043a"_s,
		u"3-\u0447\u0435\u0439\u0440\u0435\u043a"_s,
		u"4-\u0447\u0435\u0439\u0440\u0435\u043a"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u0447\u0435\u0439."_s,
		u"2-\u0447\u0435\u0439."_s,
		u"3-\u0447\u0435\u0439."_s,
		u"4-\u0447\u0435\u0439."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0442\u0430\u04a3\u043a\u044b"_s,
		u"\u0442\u04af\u0448\u0442\u04e9\u043d \u043a\u0438\u0439\u0438\u043d\u043a\u0438"_s,
		u"\u0442\u04af\u043d \u043e\u0440\u0442\u043e\u0441\u0443"_s,
		u"\u0447\u0430\u043a \u0442\u04af\u0448"_s,
		u"\u044d\u0440\u0442\u0435\u04a3 \u043c\u0435\u043d\u0435\u043d"_s,
		""_s,
		u"\u0442\u04af\u0448\u0442\u04e9\u043d \u043a\u0438\u0439\u0438\u043d"_s,
		""_s,
		u"\u043a\u0435\u0447\u0438\u043d\u0434\u0435"_s,
		""_s,
		u"\u0442\u04af\u043d \u0438\u0447\u0438\u043d\u0434\u0435"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0442\u04a3"_s,
		u"\u0442\u043a"_s,
		u"\u0442\u04af\u043d \u043e\u0440\u0442"_s,
		u"\u0447\u0442"_s,
		u"\u044d\u0440\u0442\u04a3 \u043c\u043d"_s,
		""_s,
		u"\u0442\u04af\u0448\u0442 \u043a\u0439\u043d"_s,
		""_s,
		u"\u043a\u0435\u0447\u043a"_s,
		""_s,
		u"\u0442\u04af\u043d"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u0442\u04a3"_s,
		u"\u0442\u043a"_s,
		u"\u0442\u04af\u043d \u043e\u0440\u0442\u043e\u0441\u0443"_s,
		u"\u0447\u0430\u043a \u0442\u04af\u0448"_s,
		u"\u044d\u0440\u0442\u0435\u04a3 \u043c\u0435\u043d\u0435\u043d"_s,
		""_s,
		u"\u0442\u04af\u0448\u0442\u04e9\u043d \u043a\u0438\u0439\u0438\u043d"_s,
		""_s,
		u"\u043a\u0435\u0447\u0438\u043d\u0434\u0435"_s,
		""_s,
		u"\u0442\u04af\u043d \u0438\u0447\u0438\u043d\u0434\u0435"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0431.\u0437.\u0447."_s,
		u"\u0431.\u0437."_s
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
		u"EEEE, G d-MMMM y-\'\u0436\'."_s,
		u"d-MMMM G y-\'\u0436\'."_s,
		"dd.MM.y G"_s,
		"dd.MM.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, GGGG d-MMMM y-\'\u0436\'."_s,
		u"d-MMMM GGGG y-\'\u0436\'."_s,
		"dd.MM.y GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0413\u0440\u0438\u0433\u043e\u0440\u0438\u0430\u043d \u0436\u044b\u043b\u043d\u0430\u0430\u043c\u0430\u0441\u044b"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0436\u044b\u043b"_s)
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
			$of($$new($StringArray, {
				u"1-\u0447."_s,
				u"2-\u0447."_s,
				u"3-\u0447."_s,
				u"4-\u0447."_s
			}))
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0416\u0430\u043f\u043e\u043d \u0436\u044b\u043b\u043d\u0430\u0430\u043c\u0430\u0441\u044b"_s)
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
				u"\u0431\u0438\u0437\u0434\u0438\u043d \u0437\u0430\u043c\u0430\u043d\u0433\u0430 \u0447\u0435\u0439\u0438\u043d"_s,
				u"\u0431\u0438\u0437\u0434\u0438\u043d \u0437\u0430\u043c\u0430\u043d"_s
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
				u"\u0441\u0430\u043d\u00a0\u044d\u043c\u0435\u0441"_s,
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
			$of(u"\u043c\u04af\u043d\u04e9\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0437\u0430\u043c\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0422\u0427/\u0422\u041a"_s)
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
			$of("calendarname.roc"_s),
			$of(u"\u041c\u0438\u043d\u0433\u0443\u043e \u0436\u044b\u043b\u043d\u0430\u0430\u043c\u0430\u0441\u044b"_s)
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
			$of(u"\u0430\u0439"_s)
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
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043c \u0436\u044b\u043b\u043d\u0430\u0430\u043c\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:21:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-21:00"_s)
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
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0443\u0431\u0430\u043a\u0442\u044b\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u043c\u0438\u04a3 other:0\' \'\u043c\u0438\u04a3}"_s,
				u"{one:00\' \'\u043c\u0438\u04a3 other:00\' \'\u043c\u0438\u04a3}"_s,
				u"{one:000\' \'\u043c\u0438\u04a3 other:000\' \'\u043c\u0438\u04a3}"_s,
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
			$of(u"\u0443\u0431\u0430\u043a\u044b\u0442 \u0430\u043b\u043a\u0430\u0433\u044b"_s)
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
			$of(metaValue_abbreviated_AmPmMarkers)
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0430\u043f\u0442\u0430\u043d\u044b\u043d \u043a\u04af\u043d\u04af"_s)
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
			$of(u"\u0430\u043f\u0442\u0430"_s)
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
				u"{one:0\u00a0\u043c\u0438\u04a3 other:0\u00a0\u043c\u0438\u04a3}"_s,
				u"{one:00\u00a0\u043c\u0438\u04a3 other:00\u00a0\u043c\u0438\u04a3}"_s,
				u"{one:000\u00a0\u043c\u0438\u04a3 other:000\u00a0\u043c\u0438\u04a3}"_s,
				u"{one:0\u00a0\u043c\u043b\u043d other:0\u00a0\u043c\u043b\u043d}"_s,
				u"{one:00\u00a0\u043c\u043b\u043d other:00\u00a0\u043c\u043b\u043d}"_s,
				u"{one:000\u00a0\u043c\u043b\u043d other:000\u00a0\u043c\u043b\u043d}"_s,
				u"{one:0\u00a0\u043c\u043b\u0434 other:0\u00a0\u043c\u043b\u0434}"_s,
				u"{one:00\u00a0\u043c\u043b\u0434 other:00\u00a0\u043c\u043b\u0434}"_s,
				u"{one:000\u00a0\u043c\u043b\u0434 other:000\u00a0\u043c\u043b\u0434}"_s,
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
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y-\'\u0436\'., d-MMMM, EEEE"_s,
				u"y-\'\u0436\'., d-MMMM"_s,
				u"y-\'\u0436\'., d-MMM"_s,
				"d/M/yy"_s
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
			$of(u"\u0441\u0430\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0411\u0443\u0434\u0434\u0430 \u0436\u044b\u043b\u043d\u0430\u0430\u043c\u0430\u0441\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u042f\u043d\u0432\u0430\u0440\u044c"_s,
				u"\u0424\u0435\u0432\u0440\u0430\u043b\u044c"_s,
				u"\u041c\u0430\u0440\u0442"_s,
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_ky::FormatData_ky() {
}

$Class* FormatData_ky::load$($String* name, bool initialize) {
	$loadClass(FormatData_ky, name, initialize, &_FormatData_ky_ClassInfo_, allocate$FormatData_ky);
	return class$;
}

$Class* FormatData_ky::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun