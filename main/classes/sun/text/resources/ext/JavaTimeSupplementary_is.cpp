#include <sun/text/resources/ext/JavaTimeSupplementary_is.h>

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

$MethodInfo _JavaTimeSupplementary_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_is::*)()>(&JavaTimeSupplementary_is::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_is",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_is_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_is($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_is));
}

void JavaTimeSupplementary_is::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_is::getContents() {
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"F1"_s,
		"F2"_s,
		"F3"_s,
		"F4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. fj\u00f3r\u00f0ungur"_s,
		u"2. fj\u00f3r\u00f0ungur"_s,
		u"3. fj\u00f3r\u00f0ungur"_s,
		u"4. fj\u00f3r\u00f0ungur"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"f.h."_s,
		"e.h."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"sun."_s,
		u"m\u00e1n."_s,
		u"\u00feri."_s,
		u"mi\u00f0."_s,
		"fim."_s,
		u"f\u00f6s."_s,
		"lau."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"sunnudagur"_s,
		u"m\u00e1nudagur"_s,
		u"\u00feri\u00f0judagur"_s,
		u"mi\u00f0vikudagur"_s,
		"fimmtudagur"_s,
		u"f\u00f6studagur"_s,
		"laugardagur"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		u"\u00de"_s,
		"M"_s,
		"F"_s,
		"F"_s,
		"L"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"f."_s,
		"e."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y G"_s,
		"d. MMMM y G"_s,
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
			$of(u"B\u00fadd\u00edskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Gregor\u00edskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Gregor\u00edskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u00cdslamskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u00cdslamskt borgaradagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Japanskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Minguo dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("f.h./e.h."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"t\u00edmabil"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("klukkustund"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"m\u00edn\u00fata"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"m\u00e1nu\u00f0ur"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"sek\u00fanda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("vika"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("vikudagur"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"t\u00edmabelti"_s)
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
				"fyrir Krist"_s,
				"eftir Krist"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"f.Kr."_s,
				"e.Kr."_s
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
				"jan."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				u"ma\u00ed"_s,
				u"j\u00fan."_s,
				u"j\u00fal."_s,
				u"\u00e1g\u00fa."_s,
				"sep."_s,
				"okt."_s,
				u"n\u00f3v."_s,
				"des."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"jan\u00faar"_s,
				u"febr\u00faar"_s,
				"mars"_s,
				u"apr\u00edl"_s,
				u"ma\u00ed"_s,
				u"j\u00fan\u00ed"_s,
				u"j\u00fal\u00ed"_s,
				u"\u00e1g\u00fast"_s,
				"september"_s,
				u"okt\u00f3ber"_s,
				u"n\u00f3vember"_s,
				"desember"_s,
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
				"J"_s,
				"J"_s,
				u"\u00c1"_s,
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
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_is::JavaTimeSupplementary_is() {
}

$Class* JavaTimeSupplementary_is::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_is, name, initialize, &_JavaTimeSupplementary_is_ClassInfo_, allocate$JavaTimeSupplementary_is);
	return class$;
}

$Class* JavaTimeSupplementary_is::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun