#include <sun/text/resources/ext/JavaTimeSupplementary_ar.h>

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

$MethodInfo _JavaTimeSupplementary_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_ar::*)()>(&JavaTimeSupplementary_ar::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_ar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ar",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ar_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ar($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ar));
}

void JavaTimeSupplementary_ar::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ar::getContents() {
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u0623\u0648\u0644"_s,
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u062b\u0627\u0646\u064a"_s,
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u062b\u0627\u0644\u062b"_s,
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u0631\u0627\u0628\u0639"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		u"\u0661"_s,
		u"\u0662"_s,
		u"\u0663"_s,
		u"\u0664"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u0635"_s,
		u"\u0645"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u0627\u0644\u0623\u062d\u062f"_s,
		u"\u0627\u0644\u0627\u062b\u0646\u064a\u0646"_s,
		u"\u0627\u0644\u062b\u0644\u0627\u062b\u0627\u0621"_s,
		u"\u0627\u0644\u0623\u0631\u0628\u0639\u0627\u0621"_s,
		u"\u0627\u0644\u062e\u0645\u064a\u0633"_s,
		u"\u0627\u0644\u062c\u0645\u0639\u0629"_s,
		u"\u0627\u0644\u0633\u0628\u062a"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u062d"_s,
		u"\u0646"_s,
		u"\u062b"_s,
		u"\u0631"_s,
		u"\u062e"_s,
		u"\u062c"_s,
		u"\u0633"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"\u0647\u0640"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"\u0645\u062d\u0631\u0645"_s,
		u"\u0635\u0641\u0631"_s,
		u"\u0631\u0628\u064a\u0639 \u0627\u0644\u0623\u0648\u0644"_s,
		u"\u0631\u0628\u064a\u0639 \u0627\u0644\u0622\u062e\u0631"_s,
		u"\u062c\u0645\u0627\u062f\u0649 \u0627\u0644\u0623\u0648\u0644\u0649"_s,
		u"\u062c\u0645\u0627\u062f\u0649 \u0627\u0644\u0622\u062e\u0631\u0629"_s,
		u"\u0631\u062c\u0628"_s,
		u"\u0634\u0639\u0628\u0627\u0646"_s,
		u"\u0631\u0645\u0636\u0627\u0646"_s,
		u"\u0634\u0648\u0627\u0644"_s,
		u"\u0630\u0648 \u0627\u0644\u0642\u0639\u062f\u0629"_s,
		u"\u0630\u0648 \u0627\u0644\u062d\u062c\u0629"_s,
		""_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE\u060c d MMMM\u060c y G"_s,
		u"d MMMM\u060c y G"_s,
		u"dd\u200f/MM\u200f/y G"_s,
		u"d\u200f/M\u200f/y GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0628\u0648\u0630\u064a"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"\u0645"_s,
		u"\u0645\u064a\u062c\u064a"_s,
		u"\u062a\u064a\u0634\u0648"_s,
		u"\u0634\u0648\u0648\u0627"_s,
		u"\u0647\u064a\u0633\u064a"_s,
		u"\u0631\u064a\u0648\u0627"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		"Before R.O.C."_s,
		u"\u062c\u0645\u0647\u0648\u0631\u064a\u0629 \u0627\u0644\u0635\u064a"_s
	}));
	$var($StringArray, sharedMonthAbbreviations, $new($StringArray, {
		u"\u064a\u0646\u0627\u064a\u0631"_s,
		u"\u0641\u0628\u0631\u0627\u064a\u0631"_s,
		u"\u0645\u0627\u0631\u0633"_s,
		u"\u0623\u0628\u0631\u064a\u0644"_s,
		u"\u0645\u0627\u064a\u0648"_s,
		u"\u064a\u0648\u0646\u064a\u0648"_s,
		u"\u064a\u0648\u0644\u064a\u0648"_s,
		u"\u0623\u063a\u0633\u0637\u0633"_s,
		u"\u0633\u0628\u062a\u0645\u0628\u0631"_s,
		u"\u0623\u0643\u062a\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0641\u0645\u0628\u0631"_s,
		u"\u062f\u064a\u0633\u0645\u0628\u0631"_s,
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
			$of("QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0628\u0648\u0630\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0645\u064a\u0644\u0627\u062f\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0645\u064a\u0644\u0627\u062f\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0647\u062c\u0631\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0625\u0633\u0644\u0627\u0645\u064a \u0627\u0644\u0645\u062f\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0625\u0633\u0644\u0627\u0645\u064a (\u0623\u0645 \u0627\u0644\u0642\u0631\u0649)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u064a\u0627\u0628\u0627\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u062a\u0642\u0648\u064a\u0645 \u0645\u064a\u0646\u062c\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0635/\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0627\u0644\u0639\u0635\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0627\u0644\u0633\u0627\u0639\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0627\u0644\u062f\u0642\u0627\u0626\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0627\u0644\u0634\u0647\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0627\u0644\u062b\u0648\u0627\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0627\u0644\u0623\u0633\u0628\u0648\u0639"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0627\u0644\u064a\u0648\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0627\u0644\u0633\u0646\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0627\u0644\u062a\u0648\u0642\u064a\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM\u060c y GGGG"_s,
				u"d MMMM\u060c y GGGG"_s,
				u"d MMM\u060c y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayNames)
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
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0661"_s,
				u"\u0662"_s,
				u"\u0663"_s,
				u"\u0664"_s,
				u"\u0665"_s,
				u"\u0666"_s,
				u"\u0667"_s,
				u"\u0668"_s,
				u"\u0669"_s,
				u"\u0661\u0660"_s,
				u"\u0661\u0661"_s,
				u"\u0661\u0662"_s,
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
			$of("islamic.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
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
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM\u060c y G"_s,
				u"d MMMM\u060c y G"_s,
				u"d MMM\u060c y G"_s,
				u"d\u200f/M\u200f/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
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
			$of($$new($StringArray, {
				u"\u0642\u0628\u0644 \u0627\u0644\u0645\u064a\u0644\u0627\u062f"_s,
				u"\u0645\u064a\u0644\u0627\u062f\u064a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0642.\u0645"_s,
				u"\u0645"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM\u060c y GGGG"_s,
				u"d MMMM\u060c y GGGG"_s,
				u"dd\u200f/MM\u200f/y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayNames)
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
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u064a"_s,
				u"\u0641"_s,
				u"\u0645"_s,
				u"\u0623"_s,
				u"\u0648"_s,
				u"\u0646"_s,
				u"\u0644"_s,
				u"\u063a"_s,
				u"\u0633"_s,
				u"\u0643"_s,
				u"\u0628"_s,
				u"\u062f"_s,
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
			$of("roc.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
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
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"\u062c\u0631\u064a\u0646\u062a\u0634{0}"_s)
		})
	});
}

JavaTimeSupplementary_ar::JavaTimeSupplementary_ar() {
}

$Class* JavaTimeSupplementary_ar::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ar, name, initialize, &_JavaTimeSupplementary_ar_ClassInfo_, allocate$JavaTimeSupplementary_ar);
	return class$;
}

$Class* JavaTimeSupplementary_ar::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun