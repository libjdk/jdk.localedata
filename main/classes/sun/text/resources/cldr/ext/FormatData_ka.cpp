#include <sun/text/resources/cldr/ext/FormatData_ka.h>

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

$MethodInfo _FormatData_ka_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ka::*)()>(&FormatData_ka::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ka_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ka",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ka_MethodInfo_
};

$Object* allocate$FormatData_ka($Class* clazz) {
	return $of($alloc(FormatData_ka));
}

void FormatData_ka::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ka::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u10d8\u10d0\u10dc\u10d5\u10d0\u10e0\u10d8"_s,
		u"\u10d7\u10d4\u10d1\u10d4\u10e0\u10d5\u10d0\u10da\u10d8"_s,
		u"\u10db\u10d0\u10e0\u10e2\u10d8"_s,
		u"\u10d0\u10de\u10e0\u10d8\u10da\u10d8"_s,
		u"\u10db\u10d0\u10d8\u10e1\u10d8"_s,
		u"\u10d8\u10d5\u10dc\u10d8\u10e1\u10d8"_s,
		u"\u10d8\u10d5\u10da\u10d8\u10e1\u10d8"_s,
		u"\u10d0\u10d2\u10d5\u10d8\u10e1\u10e2\u10dd"_s,
		u"\u10e1\u10d4\u10e5\u10e2\u10d4\u10db\u10d1\u10d4\u10e0\u10d8"_s,
		u"\u10dd\u10e5\u10e2\u10dd\u10db\u10d1\u10d4\u10e0\u10d8"_s,
		u"\u10dc\u10dd\u10d4\u10db\u10d1\u10d4\u10e0\u10d8"_s,
		u"\u10d3\u10d4\u10d9\u10d4\u10db\u10d1\u10d4\u10e0\u10d8"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u10d8\u10d0\u10dc"_s,
		u"\u10d7\u10d4\u10d1"_s,
		u"\u10db\u10d0\u10e0"_s,
		u"\u10d0\u10de\u10e0"_s,
		u"\u10db\u10d0\u10d8"_s,
		u"\u10d8\u10d5\u10dc"_s,
		u"\u10d8\u10d5\u10da"_s,
		u"\u10d0\u10d2\u10d5"_s,
		u"\u10e1\u10d4\u10e5"_s,
		u"\u10dd\u10e5\u10e2"_s,
		u"\u10dc\u10dd\u10d4"_s,
		u"\u10d3\u10d4\u10d9"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u10d8"_s,
		u"\u10d7"_s,
		u"\u10db"_s,
		u"\u10d0"_s,
		u"\u10db"_s,
		u"\u10d8"_s,
		u"\u10d8"_s,
		u"\u10d0"_s,
		u"\u10e1"_s,
		u"\u10dd"_s,
		u"\u10dc"_s,
		u"\u10d3"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u10d9\u10d5\u10d8\u10e0\u10d0"_s,
		u"\u10dd\u10e0\u10e8\u10d0\u10d1\u10d0\u10d7\u10d8"_s,
		u"\u10e1\u10d0\u10db\u10e8\u10d0\u10d1\u10d0\u10d7\u10d8"_s,
		u"\u10dd\u10d7\u10ee\u10e8\u10d0\u10d1\u10d0\u10d7\u10d8"_s,
		u"\u10ee\u10e3\u10d7\u10e8\u10d0\u10d1\u10d0\u10d7\u10d8"_s,
		u"\u10de\u10d0\u10e0\u10d0\u10e1\u10d9\u10d4\u10d5\u10d8"_s,
		u"\u10e8\u10d0\u10d1\u10d0\u10d7\u10d8"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u10d9\u10d5\u10d8"_s,
		u"\u10dd\u10e0\u10e8"_s,
		u"\u10e1\u10d0\u10db"_s,
		u"\u10dd\u10d7\u10ee"_s,
		u"\u10ee\u10e3\u10d7"_s,
		u"\u10de\u10d0\u10e0"_s,
		u"\u10e8\u10d0\u10d1"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u10d9"_s,
		u"\u10dd"_s,
		u"\u10e1"_s,
		u"\u10dd"_s,
		u"\u10ee"_s,
		u"\u10de"_s,
		u"\u10e8"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"I \u10d9\u10d5\u10d0\u10e0\u10e2\u10d0\u10da\u10d8"_s,
		u"II \u10d9\u10d5\u10d0\u10e0\u10e2\u10d0\u10da\u10d8"_s,
		u"III \u10d9\u10d5\u10d0\u10e0\u10e2\u10d0\u10da\u10d8"_s,
		u"IV \u10d9\u10d5\u10d0\u10e0\u10e2\u10d0\u10da\u10d8"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"I \u10d9\u10d5."_s,
		u"II \u10d9\u10d5."_s,
		u"III \u10d9\u10d5."_s,
		u"IV \u10d9\u10d5."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u10e8\u10e3\u10d0\u10e6\u10d0\u10db\u10d4\u10e1"_s,
		u"\u10e8\u10e3\u10d0\u10d3\u10e6\u10d4\u10e1"_s,
		u"\u10d3\u10d8\u10da\u10d8\u10d7"_s,
		""_s,
		u"\u10dc\u10d0\u10e8\u10e3\u10d0\u10d3\u10e6\u10d4\u10d5\u10e1"_s,
		""_s,
		u"\u10e1\u10d0\u10e6\u10d0\u10db\u10dd\u10e1"_s,
		""_s,
		u"\u10e6\u10d0\u10db\u10d8\u10d7"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"\u10e8\u10e3\u10d0\u10e6\u10d0\u10db\u10d4\u10e1"_s,
		u"\u10e8\u10e3\u10d0\u10d3\u10e6."_s,
		u"\u10d3\u10d8\u10da."_s,
		""_s,
		u"\u10dc\u10d0\u10e8\u10e3\u10d0\u10d3\u10e6."_s,
		""_s,
		u"\u10e1\u10d0\u10e6."_s,
		""_s,
		u"\u10e6\u10d0\u10db."_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u10e8\u10e3\u10d0\u10e6\u10d0\u10db\u10d4\u10e1"_s,
		u"\u10e8\u10e3\u10d0\u10d3\u10e6."_s,
		u"\u10d3\u10d8\u10da."_s,
		""_s,
		u"\u10dc\u10d0\u10e8\u10e3\u10d0\u10d3\u10e6."_s,
		""_s,
		u"\u10e1\u10d0\u10e6."_s,
		""_s,
		u"\u10e6\u10d0\u10db."_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u10eb\u10d5. \u10ec."_s,
		u"\u10d0\u10ee. \u10ec."_s
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
		"EEEE, dd MMMM, y G"_s,
		"d MMMM, y G"_s,
		"d MMM, y G"_s,
		"dd.MM.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM, y GGGG"_s,
		"d MMMM, y GGGG"_s,
		"d MMM, y GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u10d2\u10e0\u10d8\u10d2\u10dd\u10e0\u10d8\u10d0\u10dc\u10e3\u10da\u10d8 \u10d9\u10d0\u10da\u10d4\u10dc\u10d3\u10d0\u10e0\u10d8"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u10ec\u10d4\u10da\u10d8"_s)
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
			$of("calendarname.islamic-civil"_s),
			$of(u"\u10d8\u10e1\u10da\u10d0\u10db\u10e3\u10e0\u10d8 \u10e1\u10d0\u10db\u10dd\u10e5\u10d0\u10da\u10d0\u10e5\u10dd \u10d9\u10d0\u10da\u10d4\u10dc\u10d3\u10d0\u10e0\u10d8"_s)
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
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u10e1\u10e2\u10d0\u10dc\u10d3\u10d0\u10e0\u10e2\u10e3\u10da\u10d8 \u10d3\u10e0\u10dd"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u10d8\u10d0\u10de\u10dd\u10dc\u10e3\u10e0\u10d8 \u10d9\u10d0\u10da\u10d4\u10dc\u10d3\u10d0\u10e0\u10d8"_s)
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
				u"\u10eb\u10d5\u10d4\u10da\u10d8 \u10ec\u10d4\u10da\u10d7\u10d0\u10e6\u10e0\u10d8\u10ea\u10ee\u10d5\u10d8\u10d7"_s,
				u"\u10d0\u10ee\u10d0\u10da\u10d8 \u10ec\u10d4\u10da\u10d7\u10d0\u10e6\u10e0\u10d8\u10ea\u10ee\u10d5\u10d8\u10d7"_s
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
				u"\u10d0\u10e0\u00a0\u10d0\u10e0\u10d8\u10e1\u00a0\u10e0\u10d8\u10ea\u10ee\u10d5\u10d8"_s,
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
			$of(u"\u10ec\u10e3\u10d7\u10d8"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u10d4\u10de\u10dd\u10e5\u10d0"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u10d3\u10e6\u10d8\u10e1 \u10dc\u10d0\u10ee\u10d4\u10d5\u10d0\u10e0\u10d8"_s)
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
			$of(u"\u10e9\u10d8\u10dc\u10d4\u10d7\u10d8\u10e1 \u10e0\u10d4\u10e1\u10de\u10e3\u10d1\u10da\u10d8\u10d9\u10d8\u10e1 \u10d9\u10d0\u10da\u10d4\u10dc\u10d3\u10d0\u10e0\u10d8"_s)
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
			$of(u"\u10d7\u10d5\u10d4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u10ec\u10d0\u10db\u10d8"_s)
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
			$of(u"\u10d8\u10e1\u10da\u10d0\u10db\u10e3\u10e0\u10d8 \u10d9\u10d0\u10da\u10d4\u10dc\u10d3\u10d0\u10e0\u10d8"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:21:00-05:00;afternoon1:12:00-18:00;morning1:05:00-12:00;evening1:18:00-21:00"_s)
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
			$of("timezone.regionFormat"_s),
			$of(u"\u10d3\u10e0\u10dd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u10d0\u10d7\u10d0\u10e1\u10d8 other:0\' \'\u10d0\u10d7\u10d0\u10e1\u10d8}"_s,
				u"{one:00\' \'\u10d0\u10d7\u10d0\u10e1\u10d8 other:00\' \'\u10d0\u10d7\u10d0\u10e1\u10d8}"_s,
				u"{one:000\' \'\u10d0\u10d7\u10d0\u10e1\u10d8 other:000\' \'\u10d0\u10d7\u10d0\u10e1\u10d8}"_s,
				u"{one:0\' \'\u10db\u10d8\u10da\u10d8\u10dd\u10dc\u10d8 other:0\' \'\u10db\u10d8\u10da\u10d8\u10dd\u10dc\u10d8}"_s,
				u"{one:00\' \'\u10db\u10d8\u10da\u10d8\u10dd\u10dc\u10d8 other:00\' \'\u10db\u10d8\u10da\u10d8\u10dd\u10dc\u10d8}"_s,
				u"{one:000\' \'\u10db\u10d8\u10da\u10d8\u10dd\u10dc\u10d8 other:000\' \'\u10db\u10d8\u10da\u10d8\u10dd\u10dc\u10d8}"_s,
				u"{one:0\' \'\u10db\u10d8\u10da\u10d8\u10d0\u10e0\u10d3\u10d8 other:0\' \'\u10db\u10d8\u10da\u10d8\u10d0\u10e0\u10d3\u10d8}"_s,
				u"{one:00\' \'\u10db\u10d8\u10da\u10d8\u10d0\u10e0\u10d3\u10d8 other:00\' \'\u10db\u10d8\u10da\u10d8\u10d0\u10e0\u10d3\u10d8}"_s,
				u"{one:000\' \'\u10db\u10d8\u10da\u10d8\u10d0\u10e0\u10d3\u10d8 other:000\' \'\u10db\u10d8\u10da\u10d8\u10d0\u10e0\u10d3\u10d8}"_s,
				u"{one:0\' \'\u10e2\u10e0\u10d8\u10da\u10d8\u10dd\u10dc\u10d8 other:0\' \'\u10e2\u10e0\u10d8\u10da\u10d8\u10dd\u10dc\u10d8}"_s,
				u"{one:00\' \'\u10e2\u10e0\u10d8\u10da\u10d8\u10dd\u10dc\u10d8 other:00\' \'\u10e2\u10e0\u10d8\u10da\u10d8\u10dd\u10dc\u10d8}"_s,
				u"{one:000\' \'\u10e2\u10e0\u10d8\u10da\u10d8\u10dd\u10dc\u10d8 other:000\' \'\u10e2\u10e0\u10d8\u10da\u10d8\u10dd\u10dc\u10d8}"_s
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
			$of(u"\u10d3\u10e0\u10dd\u10d8\u10e1 \u10e1\u10d0\u10e0\u10e2\u10e7\u10d4\u10da\u10d8"_s)
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
			$of(u"\u10d9\u10d5\u10d8\u10e0\u10d8\u10e1 \u10d3\u10e6\u10d4"_s)
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
			$of(u"\u10d9\u10d5\u10d8\u10e0\u10d0"_s)
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
				u"{one:0\u00a0\u10d0\u10d7\'.\' other:0\u00a0\u10d0\u10d7\'.\'}"_s,
				u"{one:00\u00a0\u10d0\u10d7\'.\' other:00\u00a0\u10d0\u10d7\'.\'}"_s,
				u"{one:000\u00a0\u10d0\u10d7\'.\' other:000\u00a0\u10d0\u10d7\'.\'}"_s,
				u"{one:0\u00a0\u10db\u10da\u10dc\'.\' other:0\u00a0\u10db\u10da\u10dc\'.\'}"_s,
				u"{one:00\u00a0\u10db\u10da\u10dc\'.\' other:00\u00a0\u10db\u10da\u10dc\'.\'}"_s,
				u"{one:000\u00a0\u10db\u10da\u10dc\'.\' other:000\u00a0\u10db\u10da\u10dc\'.\'}"_s,
				u"{one:0\u00a0\u10db\u10da\u10e0\u10d3\'.\' other:0\u00a0\u10db\u10da\u10e0\u10d3\'.\'}"_s,
				u"{one:00\u00a0\u10db\u10da\u10e0\u10d3\'.\' other:00\u00a0\u10db\u10da\u10e0\u10d3\'.\'}"_s,
				u"{one:000\u00a0\u10db\u10da\u10e0\'.\' other:000\u00a0\u10db\u10da\u10e0\'.\'}"_s,
				u"{one:0\u00a0\u10e2\u10e0\u10da\'.\' other:0\u00a0\u10e2\u10e0\u10da\'.\'}"_s,
				u"{one:00\u00a0\u10e2\u10e0\u10da\'.\' other:00\u00a0\u10e2\u10e0\u10da\'.\'}"_s,
				u"{one:000\u00a0\u10e2\u10e0\u10da\'.\' other:000\u00a0\u10e2\u10e0\u10da\'.\'}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u10d6\u10d0\u10e4\u10ee\u10e3\u10da\u10d8\u10e1 \u10d3\u10e0\u10dd"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM. y"_s,
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
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u10e1\u10d0\u10d0\u10d7\u10d8"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u10d1\u10e3\u10d3\u10d8\u10e1\u10e2\u10e3\u10e0\u10d8 \u10d9\u10d0\u10da\u10d4\u10dc\u10d3\u10d0\u10e0\u10d8"_s)
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_ka::FormatData_ka() {
}

$Class* FormatData_ka::load$($String* name, bool initialize) {
	$loadClass(FormatData_ka, name, initialize, &_FormatData_ka_ClassInfo_, allocate$FormatData_ka);
	return class$;
}

$Class* FormatData_ka::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun