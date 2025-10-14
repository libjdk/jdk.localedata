#include <sun/text/resources/ext/JavaTimeSupplementary_lt.h>

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

$MethodInfo _JavaTimeSupplementary_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_lt::*)()>(&JavaTimeSupplementary_lt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_lt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_lt_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_lt($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_lt));
}

void JavaTimeSupplementary_lt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_lt::getContents() {
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"I k."_s,
		"II k."_s,
		"III k."_s,
		"IV k."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"I ketvirtis"_s,
		"II ketvirtis"_s,
		"III ketvirtis"_s,
		"IV ketvirtis"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"prie\u0161piet"_s,
		"popiet"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"y MMMM d GGGG, EEEE"_s,
		"y MMMM d GGGG"_s,
		"y MMM d GGGG"_s,
		"y-MM-dd GGGG"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"sk"_s,
		"pr"_s,
		"an"_s,
		"tr"_s,
		"kt"_s,
		"pn"_s,
		u"\u0161t"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"sekmadienis"_s,
		"pirmadienis"_s,
		"antradienis"_s,
		u"tre\u010diadienis"_s,
		"ketvirtadienis"_s,
		"penktadienis"_s,
		u"\u0161e\u0161tadienis"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"P"_s,
		"A"_s,
		"T"_s,
		"K"_s,
		"P"_s,
		u"\u0160"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"pr. p."_s,
		"pop."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"y MMMM d G, EEEE"_s,
		"y MMMM d G"_s,
		"y MMM d G"_s,
		"y-MM-dd G"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"Prie\u0161 R.O.C."_s,
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
			$of(u"budist\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Grigaliaus kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Grigaliaus kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("islamo kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Islamo kalendorius (lentelinis, pilietin\u0117 era)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("Islamo kalendorius (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"japon\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Kinijos Respublikos kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"iki piet\u0173 / po piet\u0173"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("valanda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"minut\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"m\u0117nuo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"sekund\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"savait\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"savait\u0117s diena"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("metai"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("laiko juosta"_s)
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
				"po Kristaus"_s,
				u"Meid\u017ei"_s,
				u"Tai\u0161o"_s,
				u"\u0160ova"_s,
				"Heisei"_s,
				"Reiwa"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of($$new($StringArray, {
				"po Kr."_s,
				u"Meid\u017ei"_s,
				u"Tai\u0161o"_s,
				u"\u0160ova"_s,
				"Heisei"_s,
				"Reiwa"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"prie\u0161 Krist\u0173"_s,
				"po Kristaus"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"pr.Kr."_s,
				"po.Kr."_s
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
				"saus."_s,
				"vas."_s,
				"kov."_s,
				"bal."_s,
				"geg."_s,
				u"bir\u017e."_s,
				"liep."_s,
				"rugp."_s,
				"rugs."_s,
				"spal."_s,
				"lapkr."_s,
				"gruod."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"sausio"_s,
				"vasario"_s,
				"kovo"_s,
				u"baland\u017eio"_s,
				u"gegu\u017e\u0117s"_s,
				u"bir\u017eelio"_s,
				"liepos"_s,
				u"rugpj\u016b\u010dio"_s,
				u"rugs\u0117jo"_s,
				"spalio"_s,
				u"lapkri\u010dio"_s,
				u"gruod\u017eio"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"V"_s,
				"K"_s,
				"B"_s,
				"G"_s,
				"B"_s,
				"L"_s,
				"R"_s,
				"R"_s,
				"S"_s,
				"L"_s,
				"G"_s,
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
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of(u"+HH:mm;\u2212HH:mm"_s)
		})
	});
}

JavaTimeSupplementary_lt::JavaTimeSupplementary_lt() {
}

$Class* JavaTimeSupplementary_lt::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_lt, name, initialize, &_JavaTimeSupplementary_lt_ClassInfo_, allocate$JavaTimeSupplementary_lt);
	return class$;
}

$Class* JavaTimeSupplementary_lt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun