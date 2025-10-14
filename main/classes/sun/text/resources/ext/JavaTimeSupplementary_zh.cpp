#include <sun/text/resources/ext/JavaTimeSupplementary_zh.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _JavaTimeSupplementary_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_zh::*)()>(&JavaTimeSupplementary_zh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_zh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_zh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_zh_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_zh($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_zh));
}

void JavaTimeSupplementary_zh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh::getContents() {
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1\u5b63\u5ea6"_s,
		u"2\u5b63\u5ea6"_s,
		u"3\u5b63\u5ea6"_s,
		u"4\u5b63\u5ea6"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\u7b2c\u4e00\u5b63\u5ea6"_s,
		u"\u7b2c\u4e8c\u5b63\u5ea6"_s,
		u"\u7b2c\u4e09\u5b63\u5ea6"_s,
		u"\u7b2c\u56db\u5b63\u5ea6"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u4e0a\u5348"_s,
		u"\u4e0b\u5348"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u5468\u65e5"_s,
		u"\u5468\u4e00"_s,
		u"\u5468\u4e8c"_s,
		u"\u5468\u4e09"_s,
		u"\u5468\u56db"_s,
		u"\u5468\u4e94"_s,
		u"\u5468\u516d"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u661f\u671f\u65e5"_s,
		u"\u661f\u671f\u4e00"_s,
		u"\u661f\u671f\u4e8c"_s,
		u"\u661f\u671f\u4e09"_s,
		u"\u661f\u671f\u56db"_s,
		u"\u661f\u671f\u4e94"_s,
		u"\u661f\u671f\u516d"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u65e5"_s,
		u"\u4e00"_s,
		u"\u4e8c"_s,
		u"\u4e09"_s,
		u"\u56db"_s,
		u"\u4e94"_s,
		u"\u516d"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"\u4f0a\u65af\u5170\u5386"_s
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
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"\u4e00\u6708"_s,
		u"\u4e8c\u6708"_s,
		u"\u4e09\u6708"_s,
		u"\u56db\u6708"_s,
		u"\u4e94\u6708"_s,
		u"\u516d\u6708"_s,
		u"\u4e03\u6708"_s,
		u"\u516b\u6708"_s,
		u"\u4e5d\u6708"_s,
		u"\u5341\u6708"_s,
		u"\u5341\u4e00\u6708"_s,
		u"\u5341\u4e8c\u6708"_s,
		""_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"zzzz ah:mm:ss"_s,
		"z ah:mm:ss"_s,
		"ah:mm:ss"_s,
		"ah:mm"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"\u4f5b\u5386"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"\u516c\u5143"_s,
		u"\u660e\u6cbb"_s,
		u"\u5927\u6b63"_s,
		u"\u662d\u548c"_s,
		u"\u5e73\u6210"_s,
		u"\u4ee4\u548c"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras2, $new($StringArray, {
		u"\u516c\u5143\u524d"_s,
		u"\u516c\u5143"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"\u6c11\u56fd\u524d"_s,
		u"\u6c11\u56fd"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u4f5b\u6559\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u516c\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u516c\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u4f0a\u65af\u5170\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u4f0a\u65af\u5170\u5e0c\u5409\u6765\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u65e5\u672c\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u6c11\u56fd\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u4e0a\u5348/\u4e0b\u5348"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u7eaa\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u5c0f\u65f6"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u5206\u949f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u6708"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u79d2\u949f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u5468"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u5de5\u4f5c\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u5e74"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u65f6\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
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
			$of("islamic.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(sharedMonthAbbreviations)
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
			$of("islamic.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gy-M-d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gyy-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeShortEras2)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gyy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeShortEras2)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGyy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
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
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthNames)
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
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedShortEras)
		})
	});
}

JavaTimeSupplementary_zh::JavaTimeSupplementary_zh() {
}

$Class* JavaTimeSupplementary_zh::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_zh, name, initialize, &_JavaTimeSupplementary_zh_ClassInfo_, allocate$JavaTimeSupplementary_zh);
	return class$;
}

$Class* JavaTimeSupplementary_zh::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun