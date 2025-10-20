#include <sun/text/resources/ext/JavaTimeSupplementary_mt.h>

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

$MethodInfo _JavaTimeSupplementary_mt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_mt::*)()>(&JavaTimeSupplementary_mt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_mt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_mt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_mt_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_mt($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_mt));
}

void JavaTimeSupplementary_mt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_mt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1el kwart"_s,
		"2ni kwart"_s,
		"3et kwart"_s,
		u"4ba\u2019 kwart"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, d \'ta\'\u2019 MMMM y GGGG"_s,
		u"d \'ta\'\u2019 MMMM y GGGG"_s,
		"dd MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u0126ad"_s,
		"Tne"_s,
		"Tli"_s,
		"Erb"_s,
		u"\u0126am"_s,
		u"\u0120im"_s,
		"Sib"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"Il-\u0126add"_s,
		"It-Tnejn"_s,
		"It-Tlieta"_s,
		u"L-Erbg\u0127a"_s,
		u"Il-\u0126amis"_s,
		u"Il-\u0120img\u0127a"_s,
		"Is-Sibt"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u0126"_s,
		"T"_s,
		"T"_s,
		"E"_s,
		u"\u0126"_s,
		u"\u0120"_s,
		"S"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d \'ta\'\u2019 MMMM y G"_s,
		u"d \'ta\'\u2019 MMMM y G"_s,
		"dd MMM y G"_s,
		"dd/MM/y GGGGG"_s
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
			$of("Kalendarju Buddist"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Kalendarju Gregorjan"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Kalendarju Gregorjan"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Kalendarju I\u017clamiku"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Kalendarju Islamiku-\u010aivili"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Kalendarju \u0120appuni\u017c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("Epoka"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"Sieg\u0127a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("Minuta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("Xahar"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("Sekonda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0120img\u0127a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"Jum tal-\u0120img\u0127a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u017bona"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"AM"_s,
				"PM"_s
			}))
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
				"Qabel Kristu"_s,
				"Wara Kristu"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"QK"_s,
				"WK"_s
			}))
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
				"Jan"_s,
				"Fra"_s,
				"Mar"_s,
				"Apr"_s,
				"Mej"_s,
				u"\u0120un"_s,
				"Lul"_s,
				"Aww"_s,
				"Set"_s,
				"Ott"_s,
				"Nov"_s,
				u"Di\u010b"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"Jannar"_s,
				"Frar"_s,
				"Marzu"_s,
				"April"_s,
				"Mejju"_s,
				u"\u0120unju"_s,
				"Lulju"_s,
				"Awwissu"_s,
				"Settembru"_s,
				"Ottubru"_s,
				"Novembru"_s,
				u"Di\u010bembru"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				u"\u0120"_s,
				"L"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
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
		})
	});
}

JavaTimeSupplementary_mt::JavaTimeSupplementary_mt() {
}

$Class* JavaTimeSupplementary_mt::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_mt, name, initialize, &_JavaTimeSupplementary_mt_ClassInfo_, allocate$JavaTimeSupplementary_mt);
	return class$;
}

$Class* JavaTimeSupplementary_mt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun