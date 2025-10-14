#include <sun/text/resources/ext/JavaTimeSupplementary_pt_PT.h>

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

$MethodInfo _JavaTimeSupplementary_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_pt_PT::*)()>(&JavaTimeSupplementary_pt_PT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_pt_PT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_pt_PT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_pt_PT_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_pt_PT($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_pt_PT));
}

void JavaTimeSupplementary_pt_PT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_pt_PT::getContents() {
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1.\u00ba trimestre"_s,
		u"2.\u00ba trimestre"_s,
		u"3.\u00ba trimestre"_s,
		u"4.\u00ba trimestre"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"da manh\u00e3"_s,
		"da tarde"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"d/M/y GGGG"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"domingo"_s,
		"segunda"_s,
		u"ter\u00e7a"_s,
		"quarta"_s,
		"quinta"_s,
		"sexta"_s,
		u"s\u00e1bado"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"d/M/y G"_s
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
			$of("calendarname.buddhist"_s),
			$of(u"Calend\u00e1rio budista"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Calend\u00e1rio gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Calend\u00e1rio gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Calend\u00e1rio isl\u00e2mico"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Calend\u00e1rio japon\u00eas"_s)
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
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
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
			$of($$new($StringArray, {
				"EEEE, d \'de\' MMMM \'de\' y G"_s,
				"d \'de\' MMMM \'de\' y G"_s,
				"dd/MM/y G"_s,
				"d/M/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
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
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
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

JavaTimeSupplementary_pt_PT::JavaTimeSupplementary_pt_PT() {
}

$Class* JavaTimeSupplementary_pt_PT::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_pt_PT, name, initialize, &_JavaTimeSupplementary_pt_PT_ClassInfo_, allocate$JavaTimeSupplementary_pt_PT);
	return class$;
}

$Class* JavaTimeSupplementary_pt_PT::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun