#include <sun/text/resources/ext/JavaTimeSupplementary_pl.h>

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

$MethodInfo _JavaTimeSupplementary_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_pl::*)()>(&JavaTimeSupplementary_pl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_pl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_pl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_pl_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_pl($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_pl));
}

void JavaTimeSupplementary_pl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_pl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"I kwarta\u0142"_s,
		u"II kwarta\u0142"_s,
		u"III kwarta\u0142"_s,
		u"IV kwarta\u0142"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd.MM.y GGGG"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"niedz."_s,
		"pon."_s,
		"wt."_s,
		u"\u015br."_s,
		"czw."_s,
		"pt."_s,
		"sob."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"niedziela"_s,
		u"poniedzia\u0142ek"_s,
		"wtorek"_s,
		u"\u015broda"_s,
		"czwartek"_s,
		u"pi\u0105tek"_s,
		"sobota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"N"_s,
		"P"_s,
		"W"_s,
		u"\u015a"_s,
		"C"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"p.n.e."_s,
		"n.e."_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Przed ROC"_s,
		"ROC"_s
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
			$of("kalendarz buddyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"kalendarz gregoria\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"kalendarz gregoria\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("kalendarz islamski (metoda wzrokowa)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("kalendarz islamski (metoda obliczeniowa)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("kalendarz islamski (Umm al-Kura)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"kalendarz japo\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"kalendarz Republiki Chi\u0144skiej"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"rano / po po\u0142udniu / wieczorem"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("godzina"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"miesi\u0105c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"tydzie\u0144"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"dzie\u0144 tygodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("rok"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("strefa czasowa"_s)
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
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Muh."_s,
				"Saf."_s,
				"Rab. I"_s,
				"Rab. II"_s,
				u"D\u017cu. I"_s,
				u"D\u017cu. II"_s,
				"Ra."_s,
				"Sza."_s,
				"Ram."_s,
				"Szaw."_s,
				"Zu al-k."_s,
				"Zu al-h."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"Muharram"_s,
				"Safar"_s,
				u"Rabi\u02bb I"_s,
				u"Rabi\u02bb II"_s,
				u"D\u017cumada I"_s,
				u"D\u017cumada II"_s,
				u"Rad\u017cab"_s,
				"Szaban"_s,
				"Ramadan"_s,
				"Szawwal"_s,
				"Zu al-kada"_s,
				u"Zu al-hid\u017cd\u017ca"_s,
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
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
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
				"sty"_s,
				"lut"_s,
				"mar"_s,
				"kwi"_s,
				"maj"_s,
				"cze"_s,
				"lip"_s,
				"sie"_s,
				"wrz"_s,
				u"pa\u017a"_s,
				"lis"_s,
				"gru"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"stycznia"_s,
				"lutego"_s,
				"marca"_s,
				"kwietnia"_s,
				"maja"_s,
				"czerwca"_s,
				"lipca"_s,
				"sierpnia"_s,
				u"wrze\u015bnia"_s,
				u"pa\u017adziernika"_s,
				"listopada"_s,
				"grudnia"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"s"_s,
				"l"_s,
				"m"_s,
				"k"_s,
				"m"_s,
				"c"_s,
				"l"_s,
				"s"_s,
				"w"_s,
				"p"_s,
				"l"_s,
				"g"_s,
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

JavaTimeSupplementary_pl::JavaTimeSupplementary_pl() {
}

$Class* JavaTimeSupplementary_pl::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_pl, name, initialize, &_JavaTimeSupplementary_pl_ClassInfo_, allocate$JavaTimeSupplementary_pl);
	return class$;
}

$Class* JavaTimeSupplementary_pl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun