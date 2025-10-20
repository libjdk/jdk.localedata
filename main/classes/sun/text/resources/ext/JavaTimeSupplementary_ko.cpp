#include <sun/text/resources/ext/JavaTimeSupplementary_ko.h>

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

$MethodInfo _JavaTimeSupplementary_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_ko::*)()>(&JavaTimeSupplementary_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ko",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ko_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ko($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ko));
}

void JavaTimeSupplementary_ko::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1\ubd84\uae30"_s,
		u"2\ubd84\uae30"_s,
		u"3\ubd84\uae30"_s,
		u"4\ubd84\uae30"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\uc81c 1/4\ubd84\uae30"_s,
		u"\uc81c 2/4\ubd84\uae30"_s,
		u"\uc81c 3/4\ubd84\uae30"_s,
		u"\uc81c 4/4\ubd84\uae30"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\uc624\uc804"_s,
		u"\uc624\ud6c4"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"GGGG y\ub144 M\uc6d4 d\uc77c EEEE"_s,
		u"GGGG y\ub144 M\uc6d4 d\uc77c"_s,
		"GGGG y. M. d."_s,
		"GGGG y. M. d."_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\uc77c"_s,
		u"\uc6d4"_s,
		u"\ud654"_s,
		u"\uc218"_s,
		u"\ubaa9"_s,
		u"\uae08"_s,
		u"\ud1a0"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\uc77c\uc694\uc77c"_s,
		u"\uc6d4\uc694\uc77c"_s,
		u"\ud654\uc694\uc77c"_s,
		u"\uc218\uc694\uc77c"_s,
		u"\ubaa9\uc694\uc77c"_s,
		u"\uae08\uc694\uc77c"_s,
		u"\ud1a0\uc694\uc77c"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		u"a h\uc2dc m\ubd84 s\ucd08 zzzz"_s,
		u"a h\uc2dc m\ubd84 s\ucd08 z"_s,
		"a h:mm:ss"_s,
		"a h:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"G y\ub144 M\uc6d4 d\uc77c EEEE"_s,
		u"G y\ub144 M\uc6d4 d\uc77c"_s,
		"G y. M. d."_s,
		"G y. M. d."_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"\ubd88\uae30"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"\uc11c\uae30"_s,
		u"\uba54\uc774\uc9c0"_s,
		u"\ub2e4\uc774\uc1fc"_s,
		u"\uc1fc\uc640"_s,
		u"\ud5e4\uc774\uc138\uc774"_s,
		u"\ub808\uc774\uc640"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras2, $new($StringArray, {
		u"\uae30\uc6d0\uc804"_s,
		u"\uc11c\uae30"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"\uc911\ud654\ubbfc\uad6d\uc804"_s,
		u"\uc911\ud654\ubbfc\uad6d"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"1\uc6d4"_s,
		u"2\uc6d4"_s,
		u"3\uc6d4"_s,
		u"4\uc6d4"_s,
		u"5\uc6d4"_s,
		u"6\uc6d4"_s,
		u"7\uc6d4"_s,
		u"8\uc6d4"_s,
		u"9\uc6d4"_s,
		u"10\uc6d4"_s,
		u"11\uc6d4"_s,
		u"12\uc6d4"_s,
		""_s
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
			$of(u"\ubd88\uad50\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\ud0dc\uc591\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\ud0dc\uc591\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\uc774\uc2ac\ub78c\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\uc774\uc2ac\ub78c \uc0c1\uc6a9\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\uc77c\ubcf8\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\ub300\ub9cc\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\uc624\uc804/\uc624\ud6c4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\uc5f0\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\ubd84"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\uc6d4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\ucd08"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\uc8fc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\uc694\uc77c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\ub144"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\uc2dc\uac04\ub300"_s)
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
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\ubb34\ud558\ub78c"_s,
				u"\uc0ac\ud30c\ub974"_s,
				u"\ub77c\ube44 \uc54c \uc544\uc648"_s,
				u"\ub77c\ube44 \uc54c \uc384\ub2c8"_s,
				u"\uc8fc\ub9c8\ub2e4 \uc54c \uc544\uc648"_s,
				u"\uc8fc\ub9c8\ub2e4 \uc54c \uc384\ub2c8"_s,
				u"\ub77c\uc7a1"_s,
				u"\uc250\uc544\ubc18"_s,
				u"\ub77c\ub9c8\ub2e8"_s,
				u"\uc250\uc648"_s,
				u"\ub4c0 \uc54c \uae4c\ub2e4"_s,
				u"\ub4c0 \uc54c \ud788\uc790"_s,
				""_s
			}))
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"AM"_s,
				"PM"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
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
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"G y\ub144 M\uc6d4 d\uc77c EEEE"_s,
				u"G y\ub144 M\uc6d4 d\uc77c"_s,
				"G y. M. d"_s,
				"G y. M. d"_s
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
			$of(sharedJavaTimeDatePatterns)
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
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
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
			$of("roc.long.Eras"_s),
			$of(sharedEras)
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

JavaTimeSupplementary_ko::JavaTimeSupplementary_ko() {
}

$Class* JavaTimeSupplementary_ko::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ko, name, initialize, &_JavaTimeSupplementary_ko_ClassInfo_, allocate$JavaTimeSupplementary_ko);
	return class$;
}

$Class* JavaTimeSupplementary_ko::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun