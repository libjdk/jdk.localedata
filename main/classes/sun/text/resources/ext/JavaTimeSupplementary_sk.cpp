#include <sun/text/resources/ext/JavaTimeSupplementary_sk.h>

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

$MethodInfo _JavaTimeSupplementary_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_sk::*)()>(&JavaTimeSupplementary_sk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_sk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_sk_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_sk($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_sk));
}

void JavaTimeSupplementary_sk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sk::getContents() {
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. \u0161tvr\u0165rok"_s,
		u"2. \u0161tvr\u0165rok"_s,
		u"3. \u0161tvr\u0165rok"_s,
		u"4. \u0161tvr\u0165rok"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d. M. y GGGG"_s,
		"d. M. y GGGG"_s,
		"d. M. y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"ne"_s,
		"po"_s,
		"ut"_s,
		"st"_s,
		u"\u0161t"_s,
		"pi"_s,
		"so"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"nede\u013ea"_s,
		"pondelok"_s,
		"utorok"_s,
		"streda"_s,
		u"\u0161tvrtok"_s,
		"piatok"_s,
		"sobota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"n"_s,
		"p"_s,
		"u"_s,
		"s"_s,
		u"\u0161"_s,
		"p"_s,
		"s"_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d. M. y G"_s,
		"d. M. y G"_s,
		"d. M. y G"_s,
		"d.M.y GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"buddhistick\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"gregori\u00e1nsky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"gregori\u00e1nsky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"islamsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Islamsk\u00fd ob\u010diansky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"japonsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u010d\u00ednsky republik\u00e1nsky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u010das\u0165 d\u0148a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"letopo\u010det"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("hodina"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"min\u00fata"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mesiac"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"t\u00fd\u017ede\u0148"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"de\u0148 v t\u00fd\u017edni"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("rok"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u010dasov\u00e9 p\u00e1smo"_s)
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
				"pred Kristom"_s,
				"po Kristovi"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"pred n.l."_s,
				"n.l."_s
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
				"jan"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				u"m\u00e1j"_s,
				u"j\u00fan"_s,
				u"j\u00fal"_s,
				"aug"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"dec"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"janu\u00e1ra"_s,
				u"febru\u00e1ra"_s,
				"marca"_s,
				u"apr\u00edla"_s,
				u"m\u00e1ja"_s,
				u"j\u00fana"_s,
				u"j\u00fala"_s,
				"augusta"_s,
				"septembra"_s,
				u"okt\u00f3bra"_s,
				"novembra"_s,
				"decembra"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"j"_s,
				"f"_s,
				"m"_s,
				"a"_s,
				"m"_s,
				"j"_s,
				"j"_s,
				"a"_s,
				"s"_s,
				"o"_s,
				"n"_s,
				"d"_s,
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
		})
	});
}

JavaTimeSupplementary_sk::JavaTimeSupplementary_sk() {
}

$Class* JavaTimeSupplementary_sk::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_sk, name, initialize, &_JavaTimeSupplementary_sk_ClassInfo_, allocate$JavaTimeSupplementary_sk);
	return class$;
}

$Class* JavaTimeSupplementary_sk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun