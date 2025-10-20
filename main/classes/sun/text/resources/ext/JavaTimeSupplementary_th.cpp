#include <sun/text/resources/ext/JavaTimeSupplementary_th.h>

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

$MethodInfo _JavaTimeSupplementary_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_th::*)()>(&JavaTimeSupplementary_th::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_th",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_th_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_th($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_th));
}

void JavaTimeSupplementary_th::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_th::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 1"_s,
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 2"_s,
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 3"_s,
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u0e01\u0e48\u0e2d\u0e19\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s,
		u"\u0e2b\u0e25\u0e31\u0e07\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u0e2d\u0e32."_s,
		u"\u0e08."_s,
		u"\u0e2d."_s,
		u"\u0e1e."_s,
		u"\u0e1e\u0e24."_s,
		u"\u0e28."_s,
		u"\u0e2a."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u0e27\u0e31\u0e19\u0e2d\u0e32\u0e17\u0e34\u0e15\u0e22\u0e4c"_s,
		u"\u0e27\u0e31\u0e19\u0e08\u0e31\u0e19\u0e17\u0e23\u0e4c"_s,
		u"\u0e27\u0e31\u0e19\u0e2d\u0e31\u0e07\u0e04\u0e32\u0e23"_s,
		u"\u0e27\u0e31\u0e19\u0e1e\u0e38\u0e18"_s,
		u"\u0e27\u0e31\u0e19\u0e1e\u0e24\u0e2b\u0e31\u0e2a\u0e1a\u0e14\u0e35"_s,
		u"\u0e27\u0e31\u0e19\u0e28\u0e38\u0e01\u0e23\u0e4c"_s,
		u"\u0e27\u0e31\u0e19\u0e40\u0e2a\u0e32\u0e23\u0e4c"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u0e2d\u0e32"_s,
		u"\u0e08"_s,
		u"\u0e2d"_s,
		u"\u0e1e"_s,
		u"\u0e1e\u0e24"_s,
		u"\u0e28"_s,
		u"\u0e2a"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"\u0e2e.\u0e28."_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		u"H \u0e19\u0e32\u0e2c\u0e34\u0e01\u0e32 mm \u0e19\u0e32\u0e17\u0e35 ss \u0e27\u0e34\u0e19\u0e32\u0e17\u0e35 zzzz"_s,
		u"H \u0e19\u0e32\u0e2c\u0e34\u0e01\u0e32 mm \u0e19\u0e32\u0e17\u0e35 ss \u0e27\u0e34\u0e19\u0e32\u0e17\u0e35 z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		u"\u0e04.\u0e28."_s,
		u"\u0e40\u0e21\u0e08\u0e34"_s,
		u"\u0e17\u0e30\u0e2d\u0e34\u0e42\u0e0a"_s,
		u"\u0e42\u0e0a\u0e27\u0e30"_s,
		u"\u0e40\u0e2e\u0e40\u0e0b"_s,
		u"\u0e40\u0e23\u0e27\u0e30"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e44\u0e15\u0e49\u0e2b\u0e27\u0e31\u0e19"_s,
		u"\u0e44\u0e15\u0e49\u0e2b\u0e27\u0e31\u0e19"_s
	}));
	$var($StringArray, sharedMonthNarrows, $new($StringArray, {
		u"\u0e21.\u0e04."_s,
		u"\u0e01.\u0e1e."_s,
		u"\u0e21\u0e35.\u0e04."_s,
		u"\u0e40\u0e21.\u0e22."_s,
		u"\u0e1e.\u0e04."_s,
		u"\u0e21\u0e34.\u0e22."_s,
		u"\u0e01.\u0e04."_s,
		u"\u0e2a.\u0e04."_s,
		u"\u0e01.\u0e22."_s,
		u"\u0e15.\u0e04."_s,
		u"\u0e1e.\u0e22."_s,
		u"\u0e18.\u0e04."_s,
		""_s
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
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e1e\u0e38\u0e17\u0e18"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e40\u0e01\u0e23\u0e01\u0e2d\u0e40\u0e23\u0e35\u0e22\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e40\u0e01\u0e23\u0e01\u0e2d\u0e40\u0e23\u0e35\u0e22\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e2d\u0e34\u0e2a\u0e25\u0e32\u0e21"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e2d\u0e34\u0e2a\u0e25\u0e32\u0e21\u0e0b\u0e35\u0e27\u0e34\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e2d\u0e34\u0e2a\u0e25\u0e32\u0e21 (\u0e2d\u0e38\u0e21\u0e21\u0e4c\u0e2d\u0e31\u0e25\u0e01\u0e38\u0e23\u0e32)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e0d\u0e35\u0e48\u0e1b\u0e38\u0e48\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e44\u0e15\u0e49\u0e2b\u0e27\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0e0a\u0e48\u0e27\u0e07\u0e27\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0e2a\u0e21\u0e31\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0e0a\u0e31\u0e48\u0e27\u0e42\u0e21\u0e07"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0e19\u0e32\u0e17\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0e40\u0e14\u0e37\u0e2d\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0e27\u0e34\u0e19\u0e32\u0e17\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0e2a\u0e31\u0e1b\u0e14\u0e32\u0e2b\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0e27\u0e31\u0e19\u0e43\u0e19\u0e2a\u0e31\u0e1b\u0e14\u0e32\u0e2b\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0e1b\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0e40\u0e02\u0e15\u0e40\u0e27\u0e25\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM GGGG y"_s,
				"d MMMM GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
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
				u"\u0e21\u0e38\u0e2e\u0e31\u0e23."_s,
				u"\u0e40\u0e28\u0e32\u0e30."_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 I"_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 II"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 I"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 II"_s,
				u"\u0e40\u0e23\u0e32\u0e30."_s,
				u"\u0e0a\u0e30\u0e2d\u0e4c."_s,
				u"\u0e40\u0e23\u0e32\u0e30\u0e21\u0e30."_s,
				u"\u0e40\u0e0a\u0e32\u0e27."_s,
				u"\u0e0b\u0e38\u0e25\u0e01\u0e34\u0e2d\u0e3a."_s,
				u"\u0e0b\u0e38\u0e25\u0e2b\u0e34\u0e08."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0e21\u0e38\u0e2e\u0e30\u0e23\u0e4c\u0e23\u0e2d\u0e21"_s,
				u"\u0e0b\u0e2d\u0e1f\u0e32\u0e23\u0e4c"_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 I"_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 II"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 I"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 II"_s,
				u"\u0e23\u0e2d\u0e08\u0e31\u0e1a"_s,
				u"\u0e0a\u0e30\u0e2d\u0e30\u0e1a\u0e32\u0e19"_s,
				u"\u0e23\u0e2d\u0e21\u0e30\u0e14\u0e2d\u0e19"_s,
				u"\u0e40\u0e0a\u0e32\u0e27\u0e31\u0e25"_s,
				u"\u0e0b\u0e38\u0e25\u0e01\u0e34\u0e2d\u0e3a\u0e14\u0e30\u0e2e\u0e3a"_s,
				u"\u0e0b\u0e38\u0e25\u0e2b\u0e34\u0e08\u0e0d\u0e30\u0e2e\u0e3a"_s,
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
			$of($$new($StringArray, {
				""_s,
				u"\u0e2e\u0e34\u0e08\u0e40\u0e23\u0e32\u0e30\u0e2b\u0e4c\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
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
				u"EEEE\u0e17\u0e35\u0e48 d MMMM G y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"\u0e1e\u0e38\u0e17\u0e18\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e01\u0e32\u0e25\u0e17\u0e35\u0e48"_s,
				u"\u0e1e.\u0e28."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM G y"_s,
				"d MMMM G y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM \u0e1b\u0e35G\u0e17\u0e35\u0e48 y"_s,
				u"d MMMM \u0e1b\u0e35G y"_s,
				"d MMM G y"_s,
				"d/M/yy G"_s
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
			$of($$new($StringArray, {
				u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s,
				u"\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM \u0e1b\u0e35G\u0e17\u0e35\u0e48 y"_s,
				u"d MMMM \u0e1b\u0e35G y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e01\u0e32\u0e25\u0e17\u0e35\u0e48"_s,
				u"\u0e04.\u0e28."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM \u0e1b\u0e35GGGG\u0e17\u0e35\u0e48 y"_s,
				u"d MMMM \u0e1b\u0e35GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
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
			$of(sharedMonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0e21\u0e01\u0e23\u0e32\u0e04\u0e21"_s,
				u"\u0e01\u0e38\u0e21\u0e20\u0e32\u0e1e\u0e31\u0e19\u0e18\u0e4c"_s,
				u"\u0e21\u0e35\u0e19\u0e32\u0e04\u0e21"_s,
				u"\u0e40\u0e21\u0e29\u0e32\u0e22\u0e19"_s,
				u"\u0e1e\u0e24\u0e29\u0e20\u0e32\u0e04\u0e21"_s,
				u"\u0e21\u0e34\u0e16\u0e38\u0e19\u0e32\u0e22\u0e19"_s,
				u"\u0e01\u0e23\u0e01\u0e0e\u0e32\u0e04\u0e21"_s,
				u"\u0e2a\u0e34\u0e07\u0e2b\u0e32\u0e04\u0e21"_s,
				u"\u0e01\u0e31\u0e19\u0e22\u0e32\u0e22\u0e19"_s,
				u"\u0e15\u0e38\u0e25\u0e32\u0e04\u0e21"_s,
				u"\u0e1e\u0e24\u0e28\u0e08\u0e34\u0e01\u0e32\u0e22\u0e19"_s,
				u"\u0e18\u0e31\u0e19\u0e27\u0e32\u0e04\u0e21"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(sharedMonthNarrows)
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
			$of("roc.long.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
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

JavaTimeSupplementary_th::JavaTimeSupplementary_th() {
}

$Class* JavaTimeSupplementary_th::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_th, name, initialize, &_JavaTimeSupplementary_th_ClassInfo_, allocate$JavaTimeSupplementary_th);
	return class$;
}

$Class* JavaTimeSupplementary_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun