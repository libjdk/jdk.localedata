#include <sun/text/resources/ext/JavaTimeSupplementary_ru.h>

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

$MethodInfo _JavaTimeSupplementary_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_ru::*)()>(&JavaTimeSupplementary_ru::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_ru_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ru",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ru_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ru($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ru));
}

void JavaTimeSupplementary_ru::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ru::getContents() {
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1-\u0439 \u043a\u0432."_s,
		u"2-\u0439 \u043a\u0432."_s,
		u"3-\u0439 \u043a\u0432."_s,
		u"4-\u0439 \u043a\u0432."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1-\u0439 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"2-\u0439 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"3-\u0439 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s,
		u"4-\u0439 \u043a\u0432\u0430\u0440\u0442\u0430\u043b"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u0414\u041f"_s,
		u"\u041f\u041f"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'\u0433\'. GGGG"_s,
		u"d MMMM y \'\u0433\'. GGGG"_s,
		u"d MMM y \'\u0433\'. GGGG"_s,
		"dd.MM.y GGGG"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u0432\u0441"_s,
		u"\u043f\u043d"_s,
		u"\u0432\u0442"_s,
		u"\u0441\u0440"_s,
		u"\u0447\u0442"_s,
		u"\u043f\u0442"_s,
		u"\u0441\u0431"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u0432\u043e\u0441\u043a\u0440\u0435\u0441\u0435\u043d\u044c\u0435"_s,
		u"\u043f\u043e\u043d\u0435\u0434\u0435\u043b\u044c\u043d\u0438\u043a"_s,
		u"\u0432\u0442\u043e\u0440\u043d\u0438\u043a"_s,
		u"\u0441\u0440\u0435\u0434\u0430"_s,
		u"\u0447\u0435\u0442\u0432\u0435\u0440\u0433"_s,
		u"\u043f\u044f\u0442\u043d\u0438\u0446\u0430"_s,
		u"\u0441\u0443\u0431\u0431\u043e\u0442\u0430"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"\u041c\u0443\u0445\u0430\u0440\u0440\u0430\u043c"_s,
		u"\u0421\u0430\u0444\u0430\u0440"_s,
		u"\u0420\u0430\u0431\u0438-\u0443\u043b\u044c-\u0430\u0432\u0432\u0430\u043b\u044c"_s,
		u"\u0420\u0430\u0431\u0438-\u0443\u043b\u044c-\u0430\u0445\u0438\u0440"_s,
		u"\u0414\u0436\u0443\u043c\u0430\u0434-\u0443\u043b\u044c-\u0430\u0432\u0432\u0430\u043b\u044c"_s,
		u"\u0414\u0436\u0443\u043c\u0430\u0434-\u0443\u043b\u044c-\u0430\u0445\u0438\u0440"_s,
		u"\u0420\u0430\u0434\u0436\u0430\u0431"_s,
		u"\u0428\u0430\u0430\u0431\u0430\u043d"_s,
		u"\u0420\u0430\u043c\u0430\u0434\u0430\u043d"_s,
		u"\u0428\u0430\u0432\u0432\u0430\u043b\u044c"_s,
		u"\u0417\u0443\u043b\u044c-\u041a\u0430\u0430\u0434\u0430"_s,
		u"\u0417\u0443\u043b\u044c-\u0425\u0438\u0434\u0436\u0436\u0430"_s,
		""_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'\u0433\'. G"_s,
		u"d MMMM y \'\u0433\'. G"_s,
		u"d MMM y \'\u0433\'. G"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Before R.O.C."_s,
		"Minguo"_s
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
			$of(u"\u0431\u0443\u0434\u0434\u0438\u0439\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u0433\u0440\u0438\u0433\u043e\u0440\u0438\u0430\u043d\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u0433\u0440\u0438\u0433\u043e\u0440\u0438\u0430\u043d\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0438\u0441\u043b\u0430\u043c\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043c\u0441\u043a\u0438\u0439 \u0433\u0440\u0430\u0436\u0434\u0430\u043d\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0438\u0441\u043b\u0430\u043c\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c (\u0423\u043c\u043c \u0430\u043b\u044c-\u041a\u0443\u0440\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u043a\u0438\u0442\u0430\u0439\u0441\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440\u044c"_s)
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
			$of(u"\u0447\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u043c\u0438\u043d\u0443\u0442\u0430"_s)
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
			$of(u"\u043d\u0435\u0434\u0435\u043b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0434\u0435\u043d\u044c \u043d\u0435\u0434\u0435\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0433\u043e\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0447\u0430\u0441\u043e\u0432\u043e\u0439 \u043f\u043e\u044f\u0441"_s)
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
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of($$new($StringArray, {
				u"\u043e\u0442 \u0420\u043e\u0436\u0434\u0435\u0441\u0442\u0432\u0430 \u0425\u0440\u0438\u0441\u0442\u043e\u0432\u0430"_s,
				u"\u042d\u043f\u043e\u0445\u0430 \u041c\u044d\u0439\u0434\u0437\u0438"_s,
				u"\u042d\u043f\u043e\u0445\u0430 \u0422\u0430\u0439\u0441\u044c\u043e"_s,
				u"\u0421\u044c\u043e\u0432\u0430"_s,
				u"\u042d\u043f\u043e\u0445\u0430 \u0425\u044d\u0439\u0441\u044d\u0439"_s,
				u"\u0420\u044d\u0439\u0432\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u043d. \u044d."_s,
				u"\u042d\u043f\u043e\u0445\u0430 \u041c\u044d\u0439\u0434\u0437\u0438"_s,
				u"\u042d\u043f\u043e\u0445\u0430 \u0422\u0430\u0439\u0441\u044c\u043e"_s,
				u"\u0421\u044c\u043e\u0432\u0430"_s,
				u"\u042d\u043f\u043e\u0445\u0430 \u0425\u044d\u0439\u0441\u044d\u0439"_s,
				u"\u0420\u044d\u0439\u0432\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u043e \u0420\u043e\u0436\u0434\u0435\u0441\u0442\u0432\u0430 \u0425\u0440\u0438\u0441\u0442\u043e\u0432\u0430"_s,
				u"\u043e\u0442 \u0420\u043e\u0436\u0434\u0435\u0441\u0442\u0432\u0430 \u0425\u0440\u0438\u0441\u0442\u043e\u0432\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u043e \u043d.\u044d."_s,
				u"\u043d.\u044d."_s
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
			$of($$new($StringArray, {
				u"\u044f\u043d\u0432."_s,
				u"\u0444\u0435\u0432\u0440."_s,
				u"\u043c\u0430\u0440."_s,
				u"\u0430\u043f\u0440."_s,
				u"\u043c\u0430\u044f"_s,
				u"\u0438\u044e\u043d."_s,
				u"\u0438\u044e\u043b."_s,
				u"\u0430\u0432\u0433."_s,
				u"\u0441\u0435\u043d\u0442."_s,
				u"\u043e\u043a\u0442."_s,
				u"\u043d\u043e\u044f\u0431."_s,
				u"\u0434\u0435\u043a."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u044f\u043d\u0432\u0430\u0440\u044f"_s,
				u"\u0444\u0435\u0432\u0440\u0430\u043b\u044f"_s,
				u"\u043c\u0430\u0440\u0442\u0430"_s,
				u"\u0430\u043f\u0440\u0435\u043b\u044f"_s,
				u"\u043c\u0430\u044f"_s,
				u"\u0438\u044e\u043d\u044f"_s,
				u"\u0438\u044e\u043b\u044f"_s,
				u"\u0430\u0432\u0433\u0443\u0441\u0442\u0430"_s,
				u"\u0441\u0435\u043d\u0442\u044f\u0431\u0440\u044f"_s,
				u"\u043e\u043a\u0442\u044f\u0431\u0440\u044f"_s,
				u"\u043d\u043e\u044f\u0431\u0440\u044f"_s,
				u"\u0434\u0435\u043a\u0430\u0431\u0440\u044f"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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

JavaTimeSupplementary_ru::JavaTimeSupplementary_ru() {
}

$Class* JavaTimeSupplementary_ru::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ru, name, initialize, &_JavaTimeSupplementary_ru_ClassInfo_, allocate$JavaTimeSupplementary_ru);
	return class$;
}

$Class* JavaTimeSupplementary_ru::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun