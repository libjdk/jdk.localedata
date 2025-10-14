#include <sun/text/resources/ext/JavaTimeSupplementary_el.h>

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

$MethodInfo _JavaTimeSupplementary_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_el::*)()>(&JavaTimeSupplementary_el::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_el",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_el_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_el($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_el));
}

void JavaTimeSupplementary_el::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_el::getContents() {
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"\u03a41"_s,
		u"\u03a42"_s,
		u"\u03a43"_s,
		u"\u03a44"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s,
		u"2\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s,
		u"3\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s,
		u"4\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u03c0.\u03bc."_s,
		u"\u03bc.\u03bc."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u039a\u03c5\u03c1"_s,
		u"\u0394\u03b5\u03c5"_s,
		u"\u03a4\u03c1\u03af"_s,
		u"\u03a4\u03b5\u03c4"_s,
		u"\u03a0\u03ad\u03bc"_s,
		u"\u03a0\u03b1\u03c1"_s,
		u"\u03a3\u03ac\u03b2"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u039a\u03c5\u03c1\u03b9\u03b1\u03ba\u03ae"_s,
		u"\u0394\u03b5\u03c5\u03c4\u03ad\u03c1\u03b1"_s,
		u"\u03a4\u03c1\u03af\u03c4\u03b7"_s,
		u"\u03a4\u03b5\u03c4\u03ac\u03c1\u03c4\u03b7"_s,
		u"\u03a0\u03ad\u03bc\u03c0\u03c4\u03b7"_s,
		u"\u03a0\u03b1\u03c1\u03b1\u03c3\u03ba\u03b5\u03c5\u03ae"_s,
		u"\u03a3\u03ac\u03b2\u03b2\u03b1\u03c4\u03bf"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u039a"_s,
		u"\u0394"_s,
		u"\u03a4"_s,
		u"\u03a4"_s,
		u"\u03a0"_s,
		u"\u03a0"_s,
		u"\u03a3"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"\u03c0\u03bc"_s,
		u"\u03bc\u03bc"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"\u03a0\u03c1\u03b9\u03bd R.O.C."_s,
		"R.O.C."_s
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
			$of(u"\u0392\u03bf\u03c5\u03b4\u03b9\u03c3\u03c4\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u0393\u03c1\u03b7\u03b3\u03bf\u03c1\u03b9\u03b1\u03bd\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u0393\u03c1\u03b7\u03b3\u03bf\u03c1\u03b9\u03b1\u03bd\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0399\u03c3\u03bb\u03b1\u03bc\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0399\u03c3\u03bb\u03b1\u03bc\u03b9\u03ba\u03cc \u03b1\u03c3\u03c4\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0399\u03b1\u03c0\u03c9\u03bd\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0397\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf \u03c4\u03b7\u03c2 \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1\u03c2 \u03c4\u03b7\u03c2 \u039a\u03af\u03bd\u03b1\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u03c0.\u03bc./\u03bc.\u03bc."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u03c0\u03b5\u03c1\u03af\u03bf\u03b4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u03ce\u03c1\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u03bb\u03b5\u03c0\u03c4\u03cc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u03bc\u03ae\u03bd\u03b1\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u03b4\u03b5\u03c5\u03c4\u03b5\u03c1\u03cc\u03bb\u03b5\u03c0\u03c4\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u03b5\u03b2\u03b4\u03bf\u03bc\u03ac\u03b4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u03ba\u03b1\u03b8\u03b7\u03bc\u03b5\u03c1\u03b9\u03bd\u03ae"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u03ad\u03c4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u03b6\u03ce\u03bd\u03b7 \u03ce\u03c1\u03b1\u03c2"_s)
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
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, y G"_s,
				"d MMMM, y G"_s,
				"d MMM, y G"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"\u03c0\u03c1\u03bf \u03a7\u03c1\u03b9\u03c3\u03c4\u03bf\u03cd"_s,
				u"\u03bc\u03b5\u03c4\u03ac \u03a7\u03c1\u03b9\u03c3\u03c4\u03cc\u03bd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u03c0.\u03a7."_s,
				u"\u03bc.\u03a7."_s
			}))
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
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd"_s,
				u"\u03a6\u03b5\u03b2"_s,
				u"\u039c\u03b1\u03c1"_s,
				u"\u0391\u03c0\u03c1"_s,
				u"\u039c\u03b1\u0390"_s,
				u"\u0399\u03bf\u03c5\u03bd"_s,
				u"\u0399\u03bf\u03c5\u03bb"_s,
				u"\u0391\u03c5\u03b3"_s,
				u"\u03a3\u03b5\u03c0"_s,
				u"\u039f\u03ba\u03c4"_s,
				u"\u039d\u03bf\u03b5"_s,
				u"\u0394\u03b5\u03ba"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd\u03bf\u03c5\u03b1\u03c1\u03af\u03bf\u03c5"_s,
				u"\u03a6\u03b5\u03b2\u03c1\u03bf\u03c5\u03b1\u03c1\u03af\u03bf\u03c5"_s,
				u"\u039c\u03b1\u03c1\u03c4\u03af\u03bf\u03c5"_s,
				u"\u0391\u03c0\u03c1\u03b9\u03bb\u03af\u03bf\u03c5"_s,
				u"\u039c\u03b1\u0390\u03bf\u03c5"_s,
				u"\u0399\u03bf\u03c5\u03bd\u03af\u03bf\u03c5"_s,
				u"\u0399\u03bf\u03c5\u03bb\u03af\u03bf\u03c5"_s,
				u"\u0391\u03c5\u03b3\u03bf\u03cd\u03c3\u03c4\u03bf\u03c5"_s,
				u"\u03a3\u03b5\u03c0\u03c4\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				u"\u039f\u03ba\u03c4\u03c9\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				u"\u039d\u03bf\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				u"\u0394\u03b5\u03ba\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0399"_s,
				u"\u03a6"_s,
				u"\u039c"_s,
				u"\u0391"_s,
				u"\u039c"_s,
				u"\u0399"_s,
				u"\u0399"_s,
				u"\u0391"_s,
				u"\u03a3"_s,
				u"\u039f"_s,
				u"\u039d"_s,
				u"\u0394"_s,
				""_s
			}))
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
			$of(sharedNarrowAmPmMarkers)
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

JavaTimeSupplementary_el::JavaTimeSupplementary_el() {
}

$Class* JavaTimeSupplementary_el::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_el, name, initialize, &_JavaTimeSupplementary_el_ClassInfo_, allocate$JavaTimeSupplementary_el);
	return class$;
}

$Class* JavaTimeSupplementary_el::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun