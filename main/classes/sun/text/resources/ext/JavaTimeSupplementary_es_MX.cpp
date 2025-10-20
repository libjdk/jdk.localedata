#include <sun/text/resources/ext/JavaTimeSupplementary_es_MX.h>

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

$MethodInfo _JavaTimeSupplementary_es_MX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_es_MX::*)()>(&JavaTimeSupplementary_es_MX::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_es_MX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_es_MX",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_es_MX_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_es_MX($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_es_MX));
}

void JavaTimeSupplementary_es_MX::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_es_MX::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"1er. trim."_s,
		u"2\u00ba. trim."_s,
		"3er. trim."_s,
		u"4\u00ba trim."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1er. trimestre"_s,
		u"2\u00ba. trimestre"_s,
		"3er. trimestre"_s,
		u"4\u00ba trimestre"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1T"_s,
		"2T"_s,
		"3T"_s,
		"4T"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"d MMM, y GGGG"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"M"_s,
		"J"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"d MMM, y G"_s,
		"GGGGG y-MM-dd"_s
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
			$of("calendarname.gregorian"_s),
			$of("Calendario gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Calendario gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("calendario minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("a.m./p.m."_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Zona horaria"_s)
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
			$of($$new($StringArray, {
				"EEEE, d \'de\' MMMM \'de\' y G"_s,
				"d \'de\' MMMM \'de\' y G"_s,
				"d MMM, y G"_s,
				"dd/MM/yy GGGGG"_s
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
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"ene"_s,
				"feb"_s,
				"mar"_s,
				"abr"_s,
				"may"_s,
				"jun"_s,
				"jul"_s,
				"ago"_s,
				"sep"_s,
				"oct"_s,
				"nov"_s,
				"dic"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"e"_s,
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
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_es_MX::JavaTimeSupplementary_es_MX() {
}

$Class* JavaTimeSupplementary_es_MX::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_es_MX, name, initialize, &_JavaTimeSupplementary_es_MX_ClassInfo_, allocate$JavaTimeSupplementary_es_MX);
	return class$;
}

$Class* JavaTimeSupplementary_es_MX::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun