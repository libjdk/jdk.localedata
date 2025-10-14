#include <sun/text/resources/ext/JavaTimeSupplementary_uk.h>

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

$MethodInfo _JavaTimeSupplementary_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_uk::*)()>(&JavaTimeSupplementary_uk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_uk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_uk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_uk_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_uk($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_uk));
}

void JavaTimeSupplementary_uk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_uk::getContents() {
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
		u"\u0434\u043f"_s,
		u"\u043f\u043f"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'\u0440\'. GGGG"_s,
		u"d MMMM y \'\u0440\'. GGGG"_s,
		"d MMM y GGGG"_s,
		"dd.MM.yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u041d\u0434"_s,
		u"\u041f\u043d"_s,
		u"\u0412\u0442"_s,
		u"\u0421\u0440"_s,
		u"\u0427\u0442"_s,
		u"\u041f\u0442"_s,
		u"\u0421\u0431"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u043d\u0435\u0434\u0456\u043b\u044f"_s,
		u"\u043f\u043e\u043d\u0435\u0434\u0456\u043b\u043e\u043a"_s,
		u"\u0432\u0456\u0432\u0442\u043e\u0440\u043e\u043a"_s,
		u"\u0441\u0435\u0440\u0435\u0434\u0430"_s,
		u"\u0447\u0435\u0442\u0432\u0435\u0440"_s,
		u"\u043f\u02bc\u044f\u0442\u043d\u0438\u0446\u044f"_s,
		u"\u0441\u0443\u0431\u043e\u0442\u0430"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u041d"_s,
		u"\u041f"_s,
		u"\u0412"_s,
		u"\u0421"_s,
		u"\u0427"_s,
		u"\u041f"_s,
		u"\u0421"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'\u0440\'. G"_s,
		u"d MMMM y \'\u0440\'. G"_s,
		"d MMM y G"_s,
		"dd.MM.yy GGGGG"_s
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
			$of(u"\u0431\u0443\u0434\u0434\u0456\u0439\u0441\u044c\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u0433\u0440\u0438\u0433\u043e\u0440\u0456\u0430\u043d\u0441\u044c\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u0433\u0440\u0438\u0433\u043e\u0440\u0456\u0430\u043d\u0441\u044c\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u043c\u0443\u0441\u0443\u043b\u044c\u043c\u0430\u043d\u0441\u044c\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u043c\u0443\u0441\u0443\u043b\u044c\u043c\u0430\u043d\u0441\u044c\u043a\u0438\u0439 \u0441\u0432\u0456\u0442\u0441\u044c\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u044c\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u043a\u0438\u0442\u0430\u0439\u0441\u044c\u043a\u0438\u0439 \u0433\u0440\u0438\u0433\u043e\u0440\u0456\u0430\u043d\u0441\u044c\u043a\u0438\u0439 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0447\u0430\u0441\u0442\u0438\u043d\u0430 \u0434\u043e\u0431\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0435\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0433\u043e\u0434\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0445\u0432\u0438\u043b\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u043c\u0456\u0441\u044f\u0446\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0441\u0435\u043a\u0443\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0442\u0438\u0436\u0434\u0435\u043d\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0434\u0435\u043d\u044c \u0442\u0438\u0436\u043d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0440\u0456\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0447\u0430\u0441\u043e\u0432\u0438\u0439 \u043f\u043e\u044f\u0441"_s)
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
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u041c\u0443\u0445\u0430\u0440\u0440\u0430\u043c"_s,
				u"\u0421\u0430\u0444\u0430\u0440"_s,
				u"\u0420\u0430\u0431\u0456 I"_s,
				u"\u0420\u0430\u0431\u0456 II"_s,
				u"\u0414\u0436\u0443\u043c\u0430\u0434\u0430 I"_s,
				u"\u0414\u0436\u0443\u043c\u0430\u0434\u0430 II"_s,
				u"\u0420\u0430\u0434\u0436\u0430\u0431"_s,
				u"\u0428\u0430\u0430\u0431\u0430\u043d"_s,
				u"\u0420\u0430\u043c\u0430\u0434\u0430\u043d"_s,
				u"\u0414\u0430\u0432\u0432\u0430\u043b"_s,
				u"\u0417\u0443-\u043b\u044c-\u043a\u0430\u0430\u0434\u0430"_s,
				u"\u0417\u0443-\u043b\u044c-\u0445\u0456\u0434\u0436\u0430"_s,
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
				u"\u0434\u043e \u043d\u0430\u0448\u043e\u0457 \u0435\u0440\u0438"_s,
				u"\u043d\u0430\u0448\u043e\u0457 \u0435\u0440\u0438"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u043e \u043d.\u0435."_s,
				u"\u043f\u0456\u0441\u043b\u044f \u043d.\u0435."_s
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
				u"\u0441\u0456\u0447."_s,
				u"\u043b\u044e\u0442."_s,
				u"\u0431\u0435\u0440."_s,
				u"\u043a\u0432\u0456\u0442."_s,
				u"\u0442\u0440\u0430\u0432."_s,
				u"\u0447\u0435\u0440\u0432."_s,
				u"\u043b\u0438\u043f."_s,
				u"\u0441\u0435\u0440\u043f."_s,
				u"\u0432\u0435\u0440."_s,
				u"\u0436\u043e\u0432\u0442."_s,
				u"\u043b\u0438\u0441\u0442."_s,
				u"\u0433\u0440\u0443\u0434."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0441\u0456\u0447\u043d\u044f"_s,
				u"\u043b\u044e\u0442\u043e\u0433\u043e"_s,
				u"\u0431\u0435\u0440\u0435\u0437\u043d\u044f"_s,
				u"\u043a\u0432\u0456\u0442\u043d\u044f"_s,
				u"\u0442\u0440\u0430\u0432\u043d\u044f"_s,
				u"\u0447\u0435\u0440\u0432\u043d\u044f"_s,
				u"\u043b\u0438\u043f\u043d\u044f"_s,
				u"\u0441\u0435\u0440\u043f\u043d\u044f"_s,
				u"\u0432\u0435\u0440\u0435\u0441\u043d\u044f"_s,
				u"\u0436\u043e\u0432\u0442\u043d\u044f"_s,
				u"\u043b\u0438\u0441\u0442\u043e\u043f\u0430\u0434\u0430"_s,
				u"\u0433\u0440\u0443\u0434\u043d\u044f"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0421"_s,
				u"\u041b"_s,
				u"\u0411"_s,
				u"\u041a"_s,
				u"\u0422"_s,
				u"\u0427"_s,
				u"\u041b"_s,
				u"\u0421"_s,
				u"\u0412"_s,
				u"\u0416"_s,
				u"\u041b"_s,
				u"\u0413"_s,
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_uk::JavaTimeSupplementary_uk() {
}

$Class* JavaTimeSupplementary_uk::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_uk, name, initialize, &_JavaTimeSupplementary_uk_ClassInfo_, allocate$JavaTimeSupplementary_uk);
	return class$;
}

$Class* JavaTimeSupplementary_uk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun