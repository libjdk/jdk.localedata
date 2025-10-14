#include <sun/text/resources/ext/JavaTimeSupplementary_he.h>

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

$MethodInfo _JavaTimeSupplementary_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_he::*)()>(&JavaTimeSupplementary_he::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_he_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_he",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_he_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_he($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_he));
}

void JavaTimeSupplementary_he::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_he::getContents() {
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\u05e8\u05d1\u05e2\u05d5\u05df 1"_s,
		u"\u05e8\u05d1\u05e2\u05d5\u05df 2"_s,
		u"\u05e8\u05d1\u05e2\u05d5\u05df 3"_s,
		u"\u05e8\u05d1\u05e2\u05d5\u05df 4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u05dc\u05e4\u05e0\u05d4\u05f4\u05e6"_s,
		u"\u05d0\u05d7\u05d4\u05f4\u05e6"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u05d9\u05d5\u05dd \u05d0\u05f3"_s,
		u"\u05d9\u05d5\u05dd \u05d1\u05f3"_s,
		u"\u05d9\u05d5\u05dd \u05d2\u05f3"_s,
		u"\u05d9\u05d5\u05dd \u05d3\u05f3"_s,
		u"\u05d9\u05d5\u05dd \u05d4\u05f3"_s,
		u"\u05d9\u05d5\u05dd \u05d5\u05f3"_s,
		u"\u05e9\u05d1\u05ea"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u05d9\u05d5\u05dd \u05e8\u05d0\u05e9\u05d5\u05df"_s,
		u"\u05d9\u05d5\u05dd \u05e9\u05e0\u05d9"_s,
		u"\u05d9\u05d5\u05dd \u05e9\u05dc\u05d9\u05e9\u05d9"_s,
		u"\u05d9\u05d5\u05dd \u05e8\u05d1\u05d9\u05e2\u05d9"_s,
		u"\u05d9\u05d5\u05dd \u05d7\u05de\u05d9\u05e9\u05d9"_s,
		u"\u05d9\u05d5\u05dd \u05e9\u05d9\u05e9\u05d9"_s,
		u"\u05d9\u05d5\u05dd \u05e9\u05d1\u05ea"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u05d0\u05f3"_s,
		u"\u05d1\u05f3"_s,
		u"\u05d2\u05f3"_s,
		u"\u05d3\u05f3"_s,
		u"\u05d4\u05f3"_s,
		u"\u05d5\u05f3"_s,
		u"\u05e9\u05f3"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"\u05e9\u05e0\u05ea \u05d4\u05d9\u05d2\u05f3\u05e8\u05d4"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d \u05d1MMMM y G"_s,
		u"d \u05d1MMMM y G"_s,
		u"d \u05d1MMM y G"_s,
		"d.M.y GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u05dc\u05d5\u05d7 \u05e9\u05e0\u05d4 \u05d1\u05d5\u05d3\u05d4\u05d9\u05e1\u05d8\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u05dc\u05d5\u05d7 \u05e9\u05e0\u05d4 \u05d2\u05e8\u05d2\u05d5\u05e8\u05d9\u05d0\u05e0\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u05dc\u05d5\u05d7 \u05e9\u05e0\u05d4 \u05d2\u05e8\u05d2\u05d5\u05e8\u05d9\u05d0\u05e0\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u05dc\u05d5\u05d7 \u05e9\u05e0\u05d4 \u05de\u05d5\u05e1\u05dc\u05de\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u05dc\u05d5\u05d7 \u05e9\u05e0\u05d4 \u05de\u05d5\u05e1\u05dc\u05de\u05d9-\u05d0\u05d6\u05e8\u05d7\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u05dc\u05d5\u05d7 \u05e9\u05e0\u05d4 \u05d9\u05e4\u05e0\u05d9"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u05dc\u05d5\u05d7 \u05d4\u05e9\u05e0\u05d4 \u05d4\u05e1\u05d9\u05e0\u05d9 Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u05dc\u05e4\u05e0\u05d4\u05f4\u05e6/\u05d0\u05d7\u05d4\u05f4\u05e6"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u05ea\u05e7\u05d5\u05e4\u05d4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u05e9\u05e2\u05d4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u05d3\u05e7\u05d4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u05d7\u05d5\u05d3\u05e9"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u05e9\u05e0\u05d9\u05d9\u05d4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u05e9\u05d1\u05d5\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u05d9\u05d5\u05dd \u05d1\u05e9\u05d1\u05d5\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u05e9\u05e0\u05d4"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u05d0\u05d6\u05d5\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d \u05d1MMMM y GGGG"_s,
				u"d \u05d1MMMM y GGGG"_s,
				u"d \u05d1MMM y GGGG"_s,
				"dd/MM/yy G"_s
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
			$of($$new($StringArray, {
				u"\u05de\u05d5\u05d7\u05e8\u05dd"_s,
				u"\u05e6\u05e4\u05e8"_s,
				u"\u05e8\u05d1\u05d9\u05e2 \u05d0\u05f3"_s,
				u"\u05e8\u05d1\u05d9\u05e2 \u05d1\u05f3"_s,
				u"\u05d2\u05f3\u05d5\u05de\u05d0\u05d3\u05d0 \u05d0\u05f3"_s,
				u"\u05d2\u05f3\u05d5\u05de\u05d0\u05d3\u05d0 \u05d1\u05f3"_s,
				u"\u05e8\u05d2\u05f3\u05d1"_s,
				u"\u05e9\u05e2\u05d1\u05d0\u05df"_s,
				u"\u05e8\u05de\u05d3\u05d0\u05df"_s,
				u"\u05e9\u05d5\u05d5\u05d0\u05dc"_s,
				u"\u05d3\u05f3\u05d5 \u05d0\u05dc\u05be\u05e7\u05e2\u05d3\u05d4"_s,
				u"\u05d3\u05f3\u05d5 \u05d0\u05dc\u05be\u05d7\u05d9\u05d2\u05f3\u05d4"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u05de\u05d5\u05d7\u05e8\u05dd"_s,
				u"\u05e6\u05e4\u05e8"_s,
				u"\u05e8\u05d1\u05d9\u05e2 \u05d0\u05dc-\u05d0\u05d5\u05d5\u05dc"_s,
				u"\u05e8\u05d1\u05d9\u05e2 \u05d0-\u05ea\u05f3\u05d0\u05e0\u05d9"_s,
				u"\u05d2\u05f3\u05d5\u05de\u05d0\u05d3\u05d0 \u05d0\u05dc-\u05d0\u05d5\u05dc\u05d0"_s,
				u"\u05d2\u05f3\u05d5\u05de\u05d0\u05d3\u05d0 \u05d0-\u05ea\u05f3\u05d0\u05e0\u05d9\u05d4"_s,
				u"\u05e8\u05d2\u05f3\u05d1"_s,
				u"\u05e9\u05e2\u05d1\u05d0\u05df"_s,
				u"\u05e8\u05de\u05d3\u05d0\u05df"_s,
				u"\u05e9\u05d5\u05d5\u05d0\u05dc"_s,
				u"\u05d3\u05f3\u05d5 \u05d0\u05dc\u05be\u05e7\u05e2\u05d3\u05d4"_s,
				u"\u05d3\u05f3\u05d5 \u05d0\u05dc\u05be\u05d7\u05d9\u05d2\u05f3\u05d4"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of("islamic.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d \u05d1MMMM y G"_s,
				u"d \u05d1MMMM y G"_s,
				u"d \u05d1MMM y G"_s,
				"dd/MM/yy GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"\u05dc\u05e4\u05e0\u05d9 \u05d4\u05e1\u05e4\u05d9\u05e8\u05d4"_s,
				u"\u05dc\u05e1\u05e4\u05d9\u05e8\u05d4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u05dc\u05e1\u05d4\"\u05e0"_s,
				u"\u05dc\u05e4\u05e1\u05d4\"\u05e0"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d \u05d1MMMM y GGGG"_s,
				u"d \u05d1MMMM y GGGG"_s,
				u"d \u05d1MMM y GGGG"_s,
				"d.M.y G"_s
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
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u05d9\u05e0\u05d5\u05f3"_s,
				u"\u05e4\u05d1\u05e8\u05f3"_s,
				u"\u05de\u05e8\u05e5"_s,
				u"\u05d0\u05e4\u05e8\u05f3"_s,
				u"\u05de\u05d0\u05d9"_s,
				u"\u05d9\u05d5\u05e0\u05d9"_s,
				u"\u05d9\u05d5\u05dc\u05d9"_s,
				u"\u05d0\u05d5\u05d2\u05f3"_s,
				u"\u05e1\u05e4\u05d8\u05f3"_s,
				u"\u05d0\u05d5\u05e7\u05f3"_s,
				u"\u05e0\u05d5\u05d1\u05f3"_s,
				u"\u05d3\u05e6\u05de\u05f3"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u05d9\u05e0\u05d5\u05d0\u05e8"_s,
				u"\u05e4\u05d1\u05e8\u05d5\u05d0\u05e8"_s,
				u"\u05de\u05e8\u05e5"_s,
				u"\u05d0\u05e4\u05e8\u05d9\u05dc"_s,
				u"\u05de\u05d0\u05d9"_s,
				u"\u05d9\u05d5\u05e0\u05d9"_s,
				u"\u05d9\u05d5\u05dc\u05d9"_s,
				u"\u05d0\u05d5\u05d2\u05d5\u05e1\u05d8"_s,
				u"\u05e1\u05e4\u05d8\u05de\u05d1\u05e8"_s,
				u"\u05d0\u05d5\u05e7\u05d8\u05d5\u05d1\u05e8"_s,
				u"\u05e0\u05d5\u05d1\u05de\u05d1\u05e8"_s,
				u"\u05d3\u05e6\u05de\u05d1\u05e8"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"GMT{0}\u200e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of(u"\u200e+HH:mm;-HH:mm\u200e"_s)
		})
	});
}

JavaTimeSupplementary_he::JavaTimeSupplementary_he() {
}

$Class* JavaTimeSupplementary_he::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_he, name, initialize, &_JavaTimeSupplementary_he_ClassInfo_, allocate$JavaTimeSupplementary_he);
	return class$;
}

$Class* JavaTimeSupplementary_he::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun