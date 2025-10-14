#include <sun/text/resources/ext/JavaTimeSupplementary_be.h>

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

$MethodInfo _JavaTimeSupplementary_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_be::*)()>(&JavaTimeSupplementary_be::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_be_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_be",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_be_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_be($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_be));
}

void JavaTimeSupplementary_be::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_be::getContents() {
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1-\u0448\u044b \u043a\u0432."_s,
		u"2-\u0433\u0456 \u043a\u0432."_s,
		u"3-\u0446\u0456 \u043a\u0432."_s,
		u"4-\u0442\u044b \u043a\u0432."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1-\u0448\u044b \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"2-\u0433\u0456 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"3-\u0446\u0456 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"4-\u0442\u044b \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u0434\u0430 \u043f\u0430\u045e\u0434\u043d\u044f"_s,
		u"\u043f\u0430\u0441\u043b\u044f \u043f\u0430\u045e\u0434\u043d\u044f"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u043d\u0434"_s,
		u"\u043f\u043d"_s,
		u"\u0430\u045e"_s,
		u"\u0441\u0440"_s,
		u"\u0447\u0446"_s,
		u"\u043f\u0442"_s,
		u"\u0441\u0431"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u043d\u044f\u0434\u0437\u0435\u043b\u044f"_s,
		u"\u043f\u0430\u043d\u044f\u0434\u0437\u0435\u043b\u0430\u043a"_s,
		u"\u0430\u045e\u0442\u043e\u0440\u0430\u043a"_s,
		u"\u0441\u0435\u0440\u0430\u0434\u0430"_s,
		u"\u0447\u0430\u0446\u0432\u0435\u0440"_s,
		u"\u043f\u044f\u0442\u043d\u0456\u0446\u0430"_s,
		u"\u0441\u0443\u0431\u043e\u0442\u0430"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u043d"_s,
		u"\u043f"_s,
		u"\u0430"_s,
		u"\u0441"_s,
		u"\u0447"_s,
		u"\u043f"_s,
		u"\u0441"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH.mm.ss zzzz"_s,
		"HH.mm.ss z"_s,
		"HH.mm.ss"_s,
		"HH.mm"_s
	}));
	$var($StringArray, sharedAbbreviatedAmPmMarkers, $new($StringArray, {
		u"\u0440\u0430\u043d\u0456\u0446\u044b"_s,
		u"\u0432\u0435\u0447\u0430\u0440\u0430"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"\u0440\u0430\u043d."_s,
		u"\u0432\u0435\u0447."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
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
			$of(u"\u0431\u0443\u0434\u044b\u0439\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u0433\u0440\u044b\u0433\u0430\u0440\u044b\u044f\u043d\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u0433\u0440\u044b\u0433\u0430\u0440\u044b\u044f\u043d\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u043c\u0443\u0441\u0443\u043b\u044c\u043c\u0430\u043d\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u043c\u0443\u0441\u0443\u043b\u044c\u043c\u0430\u043d\u0441\u043a\u0456 \u0441\u0432\u0435\u0446\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440 \u041c\u0456\u043d\u044c\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0414\u041f/\u041f\u041f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u044d\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0433\u0430\u0434\u0437\u0456\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0445\u0432\u0456\u043b\u0456\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u043c\u0435\u0441\u044f\u0446"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0441\u0435\u043a\u0443\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0442\u044b\u0434\u0437\u0435\u043d\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0434\u0437\u0435\u043d\u044c \u0442\u044b\u0434\u043d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0433\u043e\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0447\u0430\u0441\u0430\u0432\u044b \u043f\u043e\u044f\u0441"_s)
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
			$of(sharedAbbreviatedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"d.M.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u0430 \u043d\u0430\u0448\u0430\u0439 \u044d\u0440\u044b"_s,
				u"\u043d\u0430\u0448\u0430\u0439 \u044d\u0440\u044b"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u0430 \u043d.\u0435."_s,
				u"\u043d.\u0435."_s
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
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0441\u0442\u0443"_s,
				u"\u043b\u044e\u0442"_s,
				u"\u0441\u0430\u043a"_s,
				u"\u043a\u0440\u0430"_s,
				u"\u043c\u0430\u044f"_s,
				u"\u0447\u044d\u0440"_s,
				u"\u043b\u0456\u043f"_s,
				u"\u0436\u043d\u0456"_s,
				u"\u0432\u0435\u0440"_s,
				u"\u043a\u0430\u0441"_s,
				u"\u043b\u0456\u0441"_s,
				u"\u0441\u043d\u0435"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0441\u0442\u0443\u0434\u0437\u0435\u043d\u044f"_s,
				u"\u043b\u044e\u0442\u0430\u0433\u0430"_s,
				u"\u0441\u0430\u043a\u0430\u0432\u0456\u043a\u0430"_s,
				u"\u043a\u0440\u0430\u0441\u0430\u0432\u0456\u043a\u0430"_s,
				u"\u043c\u0430\u044f"_s,
				u"\u0447\u044d\u0440\u0432\u0435\u043d\u044f"_s,
				u"\u043b\u0456\u043f\u0435\u043d\u044f"_s,
				u"\u0436\u043d\u0456\u045e\u043d\u044f"_s,
				u"\u0432\u0435\u0440\u0430\u0441\u043d\u044f"_s,
				u"\u043a\u0430\u0441\u0442\u0440\u044b\u0447\u043d\u0456\u043a\u0430"_s,
				u"\u043b\u0456\u0441\u0442\u0430\u043f\u0430\u0434\u0430"_s,
				u"\u0441\u043d\u0435\u0436\u043d\u044f"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0441"_s,
				u"\u043b"_s,
				u"\u0441"_s,
				u"\u043a"_s,
				u"\u043c"_s,
				u"\u0447"_s,
				u"\u043b"_s,
				u"\u0436"_s,
				u"\u0432"_s,
				u"\u043a"_s,
				u"\u043b"_s,
				u"\u0441"_s,
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
			$of(sharedAbbreviatedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of("+HH.mm;-HH.mm"_s)
		})
	});
}

JavaTimeSupplementary_be::JavaTimeSupplementary_be() {
}

$Class* JavaTimeSupplementary_be::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_be, name, initialize, &_JavaTimeSupplementary_be_ClassInfo_, allocate$JavaTimeSupplementary_be);
	return class$;
}

$Class* JavaTimeSupplementary_be::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun