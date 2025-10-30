#include <sun/text/resources/ext/JavaTimeSupplementary_ja.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_ja::*)()>(&JavaTimeSupplementary_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ja",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ja_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ja($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ja));
}

void JavaTimeSupplementary_ja::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\u7b2c1\u56db\u534a\u671f"_s,
		u"\u7b2c2\u56db\u534a\u671f"_s,
		u"\u7b2c3\u56db\u534a\u671f"_s,
		u"\u7b2c4\u56db\u534a\u671f"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u5348\u524d"_s,
		u"\u5348\u5f8c"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
		u"GGGGy\u5e74M\u6708d\u65e5"_s,
		"GGGGy/MM/dd"_s,
		"GGGGy/MM/dd"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u65e5"_s,
		u"\u6708"_s,
		u"\u706b"_s,
		u"\u6c34"_s,
		u"\u6728"_s,
		u"\u91d1"_s,
		u"\u571f"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u65e5\u66dc\u65e5"_s,
		u"\u6708\u66dc\u65e5"_s,
		u"\u706b\u66dc\u65e5"_s,
		u"\u6c34\u66dc\u65e5"_s,
		u"\u6728\u66dc\u65e5"_s,
		u"\u91d1\u66dc\u65e5"_s,
		u"\u571f\u66dc\u65e5"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"\u30e0\u30cf\u30c3\u30e9\u30e0"_s,
		u"\u30b5\u30d5\u30a2\u30eb"_s,
		u"\u30e9\u30d3\u30fc\u30fb\u30a6\u30eb\u30fb\u30a2\u30a6\u30ef\u30eb"_s,
		u"\u30e9\u30d3\u30fc\u30fb\u30a6\u30c3\u30fb\u30b5\u30fc\u30cb\u30fc"_s,
		u"\u30b8\u30e5\u30de\u30fc\u30c0\u30eb\u30fb\u30a2\u30a6\u30ef\u30eb"_s,
		u"\u30b8\u30e5\u30de\u30fc\u30c0\u30c3\u30b5\u30fc\u30cb\u30fc"_s,
		u"\u30e9\u30b8\u30e3\u30d6"_s,
		u"\u30b7\u30e3\u30a2\u30d0\u30fc\u30f3"_s,
		u"\u30e9\u30de\u30c0\u30fc\u30f3"_s,
		u"\u30b7\u30e3\u30a6\u30ef\u30fc\u30eb"_s,
		u"\u30ba\u30eb\u30fb\u30ab\u30a4\u30c0"_s,
		u"\u30ba\u30eb\u30fb\u30d2\u30c3\u30b8\u30e3"_s,
		""_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		u"H\u6642mm\u5206ss\u79d2 zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
		u"Gy\u5e74M\u6708d\u65e5"_s,
		"Gy/MM/dd"_s,
		"Gy/MM/dd"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		u"\u897f\u66a6"_s,
		u"\u660e\u6cbb"_s,
		u"\u5927\u6b63"_s,
		u"\u662d\u548c"_s,
		u"\u5e73\u6210"_s,
		u"\u4ee4\u548c"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"\u7d00\u5143\u524d"_s,
		u"\u897f\u66a6"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"\u6c11\u56fd\u524d"_s,
		u"\u6c11\u56fd"_s
	}));
	$var($StringArray, sharedMonthAbbreviations, $new($StringArray, {
		u"1\u6708"_s,
		u"2\u6708"_s,
		u"3\u6708"_s,
		u"4\u6708"_s,
		u"5\u6708"_s,
		u"6\u6708"_s,
		u"7\u6708"_s,
		u"8\u6708"_s,
		u"9\u6708"_s,
		u"10\u6708"_s,
		u"11\u6708"_s,
		u"12\u6708"_s,
		""_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u30bf\u30a4\u4ecf\u6559\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u897f\u66a6(\u30b0\u30ec\u30b4\u30ea\u30aa\u66a6)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u897f\u66a6(\u30b0\u30ec\u30b4\u30ea\u30aa\u66a6)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u6b74(\u5b9a\u5468\u671f\u3001\u516c\u6c11\u7d00\u5143)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u30a4\u30b9\u30e9\u30e0\u66a6(\u30a6\u30f3\u30e0\u30fb\u30a2\u30eb\u30af\u30e9\u30fc)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u548c\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u4e2d\u83ef\u6c11\u56fd\u66a6"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u5348\u524d/\u5348\u5f8c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u6642\u4ee3"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u6642"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u5206"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u6708"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u79d2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u9031"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u66dc\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u5e74"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u30bf\u30a4\u30e0\u30be\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"Gy/MM/dd"_s,
				"Gy/MM/dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"\u4ecf\u66a6"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u7d00\u5143\u524d"_s,
				u"\u4ecf\u66a6"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\'\u5e74\'M\'\u6708\'d\'\u65e5\'"_s,
				"GGGGGy.MM.dd"_s,
				"GGGGGy.MM.dd"_s,
				"GGGGGy.MM.dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		})
	});
}

JavaTimeSupplementary_ja::JavaTimeSupplementary_ja() {
}

$Class* JavaTimeSupplementary_ja::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ja, name, initialize, &_JavaTimeSupplementary_ja_ClassInfo_, allocate$JavaTimeSupplementary_ja);
	return class$;
}

$Class* JavaTimeSupplementary_ja::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun