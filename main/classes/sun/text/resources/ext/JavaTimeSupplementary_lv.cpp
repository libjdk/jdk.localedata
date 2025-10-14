#include <sun/text/resources/ext/JavaTimeSupplementary_lv.h>

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

$MethodInfo _JavaTimeSupplementary_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_lv::*)()>(&JavaTimeSupplementary_lv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_lv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_lv_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_lv($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_lv));
}

void JavaTimeSupplementary_lv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_lv::getContents() {
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1.\u00a0cet."_s,
		u"2.\u00a0cet."_s,
		u"3.\u00a0cet."_s,
		u"4.\u00a0cet."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1. ceturksnis"_s,
		"2. ceturksnis"_s,
		"3. ceturksnis"_s,
		"4. ceturksnis"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"priek\u0161pusdien\u0101"_s,
		u"p\u0113cpusdien\u0101"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, y. \'gada\' d. MMMM GGGG"_s,
		"y. \'gada\' d. MMMM GGGG"_s,
		"y. \'gada\' d. MMM GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Sv"_s,
		"Pr"_s,
		"Ot"_s,
		"Tr"_s,
		"Ce"_s,
		"Pk"_s,
		"Se"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"sv\u0113tdiena"_s,
		"pirmdiena"_s,
		"otrdiena"_s,
		u"tre\u0161diena"_s,
		"ceturtdiena"_s,
		"piektdiena"_s,
		"sestdiena"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"P"_s,
		"O"_s,
		"T"_s,
		"C"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"priek\u0161p."_s,
		u"p\u0113cp."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, y. \'gada\' d. MMMM G"_s,
		"y. \'gada\' d. MMMM G"_s,
		"y. \'gada\' d. MMM G"_s,
		"dd.MM.y GGGGG"_s
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
			$of("QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"budistu kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Gregora kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Gregora kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"isl\u0101ma kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"isl\u0101ma pilso\u0146u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"jap\u0101\u0146u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0136\u012bnas Republikas kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"priek\u0161pusdien\u0101/p\u0113cpusdien\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0113ra"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("stundas"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"min\u016btes"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"m\u0113nesis"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekundes"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"ned\u0113\u013ca"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"ned\u0113\u013cas diena"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("gads"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("laika josla"_s)
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
				"muharams"_s,
				"safars"_s,
				u"1. rab\u012b"_s,
				u"2. rab\u012b"_s,
				u"1. d\u017eum\u0101d\u0101"_s,
				u"2. d\u017eum\u0101d\u0101"_s,
				u"rad\u017eabs"_s,
				u"\u0161abans"_s,
				u"ramad\u0101ns"_s,
				u"\u0161auvals"_s,
				u"du al-kid\u0101"_s,
				u"du al-hid\u017e\u0101"_s,
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
			$of("islamic.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
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
				u"pirms m\u016bsu \u0113ras"_s,
				u"m\u016bsu \u0113r\u0101"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"pm\u0113"_s,
				u"m\u0113"_s
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
				"janv."_s,
				"febr."_s,
				"marts"_s,
				"apr."_s,
				"maijs"_s,
				u"j\u016bn."_s,
				u"j\u016bl."_s,
				"aug."_s,
				"sept."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"janv\u0101ris"_s,
				u"febru\u0101ris"_s,
				"marts"_s,
				u"apr\u012blis"_s,
				"maijs"_s,
				u"j\u016bnijs"_s,
				u"j\u016blijs"_s,
				"augusts"_s,
				"septembris"_s,
				"oktobris"_s,
				"novembris"_s,
				"decembris"_s,
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
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_lv::JavaTimeSupplementary_lv() {
}

$Class* JavaTimeSupplementary_lv::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_lv, name, initialize, &_JavaTimeSupplementary_lv_ClassInfo_, allocate$JavaTimeSupplementary_lv);
	return class$;
}

$Class* JavaTimeSupplementary_lv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun