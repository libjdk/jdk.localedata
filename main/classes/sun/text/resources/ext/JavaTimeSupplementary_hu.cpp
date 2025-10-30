#include <sun/text/resources/ext/JavaTimeSupplementary_hu.h>

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

$MethodInfo _JavaTimeSupplementary_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_hu::*)()>(&JavaTimeSupplementary_hu::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_hu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_hu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_hu_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_hu($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_hu));
}

void JavaTimeSupplementary_hu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_hu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"N1"_s,
		"N2"_s,
		"N3"_s,
		"N4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"I. negyed\u00e9v"_s,
		u"II. negyed\u00e9v"_s,
		u"III. negyed\u00e9v"_s,
		u"IV. negyed\u00e9v"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"de."_s,
		"du."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG y. MMMM d., EEEE"_s,
		"GGGG y. MMMM d."_s,
		"GGGG y. MMM d."_s,
		"G y. M. d."_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"V"_s,
		"H"_s,
		"K"_s,
		"Sze"_s,
		"Cs"_s,
		"P"_s,
		"Szo"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"vas\u00e1rnap"_s,
		u"h\u00e9tf\u0151"_s,
		"kedd"_s,
		"szerda"_s,
		u"cs\u00fct\u00f6rt\u00f6k"_s,
		u"p\u00e9ntek"_s,
		"szombat"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"V"_s,
		"H"_s,
		"K"_s,
		"Sz"_s,
		"Cs"_s,
		"P"_s,
		"Sz"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		"MF"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G y. MMMM d., EEEE"_s,
		"G y. MMMM d."_s,
		"G y. MMM d."_s,
		"GGGGG y. M. d."_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		"BK"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"R.O.C. el\u0151tt"_s,
		""_s
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
			$of(u"Buddhista napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Gergely-napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Gergely-napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Iszl\u00e1m napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Iszl\u00e1m civil napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Jap\u00e1n napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"K\u00ednai k\u00f6zt\u00e1rsas\u00e1gi napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("napszak"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u00e9ra"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("perc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"h\u00f3nap"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"m\u00e1sodperc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"h\u00e9t"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"h\u00e9t napja"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u00e9v"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"id\u0151z\u00f3na"_s)
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
			$of("islamic.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Moh."_s,
				"Saf."_s,
				u"R\u00e9b. 1"_s,
				u"R\u00e9b. 2"_s,
				"Dsem. I"_s,
				"Dsem. II"_s,
				"Red."_s,
				"Sab."_s,
				"Ram."_s,
				"Sev."_s,
				u"Ds\u00fcl k."_s,
				u"Ds\u00fcl h."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"Moharrem"_s,
				"Safar"_s,
				u"R\u00e9bi el avvel"_s,
				u"R\u00e9bi el accher"_s,
				u"Dsem\u00e1di el avvel"_s,
				u"Dsem\u00e1di el accher"_s,
				"Redseb"_s,
				u"Sab\u00e1n"_s,
				u"Ramad\u00e1n"_s,
				u"Sevv\u00e1l"_s,
				u"Ds\u00fcl kade"_s,
				u"Ds\u00fcl hedse"_s,
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
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"G y. MMMM d., EEEE"_s,
				"G y. MMMM d."_s,
				"G y.MM.dd."_s,
				"GGGGG y.MM.dd."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"id\u0151sz\u00e1m\u00edt\u00e1sunk el\u0151tt"_s,
				u"id\u0151sz\u00e1m\u00edt\u00e1sunk szerint"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"i.e."_s,
				"i.u."_s
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
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan."_s,
				"febr."_s,
				u"m\u00e1rc."_s,
				u"\u00e1pr."_s,
				u"m\u00e1j."_s,
				u"j\u00fan."_s,
				u"j\u00fal."_s,
				"aug."_s,
				"szept."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"janu\u00e1r"_s,
				u"febru\u00e1r"_s,
				u"m\u00e1rcius"_s,
				u"\u00e1prilis"_s,
				u"m\u00e1jus"_s,
				u"j\u00fanius"_s,
				u"j\u00falius"_s,
				"augusztus"_s,
				"szeptember"_s,
				u"okt\u00f3ber"_s,
				"november"_s,
				"december"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				u"\u00c1"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"Sz"_s,
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
		})
	});
}

JavaTimeSupplementary_hu::JavaTimeSupplementary_hu() {
}

$Class* JavaTimeSupplementary_hu::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_hu, name, initialize, &_JavaTimeSupplementary_hu_ClassInfo_, allocate$JavaTimeSupplementary_hu);
	return class$;
}

$Class* JavaTimeSupplementary_hu::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun