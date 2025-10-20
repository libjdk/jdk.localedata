#include <sun/text/resources/cldr/ext/FormatData_th.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_th::*)()>(&FormatData_th::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_th",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_th_MethodInfo_
};

$Object* allocate$FormatData_th($Class* clazz) {
	return $of($alloc(FormatData_th));
}

void FormatData_th::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_th::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0e21\u0e01\u0e23\u0e32\u0e04\u0e21"_s,
		u"\u0e01\u0e38\u0e21\u0e20\u0e32\u0e1e\u0e31\u0e19\u0e18\u0e4c"_s,
		u"\u0e21\u0e35\u0e19\u0e32\u0e04\u0e21"_s,
		u"\u0e40\u0e21\u0e29\u0e32\u0e22\u0e19"_s,
		u"\u0e1e\u0e24\u0e29\u0e20\u0e32\u0e04\u0e21"_s,
		u"\u0e21\u0e34\u0e16\u0e38\u0e19\u0e32\u0e22\u0e19"_s,
		u"\u0e01\u0e23\u0e01\u0e0e\u0e32\u0e04\u0e21"_s,
		u"\u0e2a\u0e34\u0e07\u0e2b\u0e32\u0e04\u0e21"_s,
		u"\u0e01\u0e31\u0e19\u0e22\u0e32\u0e22\u0e19"_s,
		u"\u0e15\u0e38\u0e25\u0e32\u0e04\u0e21"_s,
		u"\u0e1e\u0e24\u0e28\u0e08\u0e34\u0e01\u0e32\u0e22\u0e19"_s,
		u"\u0e18\u0e31\u0e19\u0e27\u0e32\u0e04\u0e21"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0e21.\u0e04."_s,
		u"\u0e01.\u0e1e."_s,
		u"\u0e21\u0e35.\u0e04."_s,
		u"\u0e40\u0e21.\u0e22."_s,
		u"\u0e1e.\u0e04."_s,
		u"\u0e21\u0e34.\u0e22."_s,
		u"\u0e01.\u0e04."_s,
		u"\u0e2a.\u0e04."_s,
		u"\u0e01.\u0e22."_s,
		u"\u0e15.\u0e04."_s,
		u"\u0e1e.\u0e22."_s,
		u"\u0e18.\u0e04."_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0e27\u0e31\u0e19\u0e2d\u0e32\u0e17\u0e34\u0e15\u0e22\u0e4c"_s,
		u"\u0e27\u0e31\u0e19\u0e08\u0e31\u0e19\u0e17\u0e23\u0e4c"_s,
		u"\u0e27\u0e31\u0e19\u0e2d\u0e31\u0e07\u0e04\u0e32\u0e23"_s,
		u"\u0e27\u0e31\u0e19\u0e1e\u0e38\u0e18"_s,
		u"\u0e27\u0e31\u0e19\u0e1e\u0e24\u0e2b\u0e31\u0e2a\u0e1a\u0e14\u0e35"_s,
		u"\u0e27\u0e31\u0e19\u0e28\u0e38\u0e01\u0e23\u0e4c"_s,
		u"\u0e27\u0e31\u0e19\u0e40\u0e2a\u0e32\u0e23\u0e4c"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0e2d\u0e32."_s,
		u"\u0e08."_s,
		u"\u0e2d."_s,
		u"\u0e1e."_s,
		u"\u0e1e\u0e24."_s,
		u"\u0e28."_s,
		u"\u0e2a."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0e2d\u0e32"_s,
		u"\u0e08"_s,
		u"\u0e2d"_s,
		u"\u0e1e"_s,
		u"\u0e1e\u0e24"_s,
		u"\u0e28"_s,
		u"\u0e2a"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 1"_s,
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 2"_s,
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 3"_s,
		u"\u0e44\u0e15\u0e23\u0e21\u0e32\u0e2a 4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0e01\u0e48\u0e2d\u0e19\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s,
		u"\u0e2b\u0e25\u0e31\u0e07\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s,
		u"\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07\u0e04\u0e37\u0e19"_s,
		u"\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s,
		u"\u0e43\u0e19\u0e15\u0e2d\u0e19\u0e40\u0e0a\u0e49\u0e32"_s,
		""_s,
		u"\u0e43\u0e19\u0e15\u0e2d\u0e19\u0e1a\u0e48\u0e32\u0e22"_s,
		u"\u0e1a\u0e48\u0e32\u0e22"_s,
		u"\u0e43\u0e19\u0e15\u0e2d\u0e19\u0e40\u0e22\u0e47\u0e19"_s,
		u"\u0e04\u0e48\u0e33"_s,
		u"\u0e01\u0e25\u0e32\u0e07\u0e04\u0e37\u0e19"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07\u0e04\u0e37\u0e19"_s,
		u"\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s,
		u"\u0e40\u0e0a\u0e49\u0e32"_s,
		""_s,
		u"\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s,
		u"\u0e1a\u0e48\u0e32\u0e22"_s,
		u"\u0e40\u0e22\u0e47\u0e19"_s,
		u"\u0e04\u0e48\u0e33"_s,
		u"\u0e01\u0e25\u0e32\u0e07\u0e04\u0e37\u0e19"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0e01\u0e48\u0e2d\u0e19 \u0e04.\u0e28."_s,
		u"\u0e04.\u0e28."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		u"H \u0e19\u0e32\u0e2c\u0e34\u0e01\u0e32 mm \u0e19\u0e32\u0e17\u0e35 ss \u0e27\u0e34\u0e19\u0e32\u0e17\u0e35 zzzz"_s,
		u"H \u0e19\u0e32\u0e2c\u0e34\u0e01\u0e32 mm \u0e19\u0e32\u0e17\u0e35 ss \u0e27\u0e34\u0e19\u0e32\u0e17\u0e35 z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_DateTimePatterns, $new($StringArray, {
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0e1e\u0e38\u0e17\u0e18\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0e1e.\u0e28."_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s,
		u"\u0e40\u0e21\u0e08\u0e34"_s,
		u"\u0e17\u0e30\u0e2d\u0e34\u0e42\u0e0a"_s,
		u"\u0e42\u0e0a\u0e27\u0e30"_s,
		u"\u0e40\u0e2e\u0e40\u0e0b"_s,
		u"\u0e40\u0e23\u0e27\u0e30"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		u"\u0e04.\u0e28."_s,
		u"\u0e40\u0e21\u0e08\u0e34"_s,
		u"\u0e17\u0e30\u0e2d\u0e34\u0e42\u0e0a"_s,
		u"\u0e42\u0e0a\u0e27\u0e30"_s,
		u"\u0e40\u0e2e\u0e40\u0e0b"_s,
		u"\u0e40\u0e23\u0e27\u0e30"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e44\u0e15\u0e49\u0e2b\u0e27\u0e31\u0e19"_s,
		u"\u0e44\u0e15\u0e49\u0e2b\u0e27\u0e31\u0e19"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u0e2e\u0e34\u0e08\u0e40\u0e23\u0e32\u0e30\u0e2b\u0e4c\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_Eras, $new($StringArray, {
		""_s,
		u"\u0e2e.\u0e28."_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e40\u0e01\u0e23\u0e01\u0e2d\u0e40\u0e23\u0e35\u0e22\u0e19"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0e1b\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e2d\u0e34\u0e2a\u0e25\u0e32\u0e21 (\u0e2d\u0e38\u0e21\u0e21\u0e4c\u0e2d\u0e31\u0e25\u0e01\u0e38\u0e23\u0e32)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM \u0e1b\u0e35G\u0e17\u0e35\u0e48 y"_s,
				u"d MMMM \u0e1b\u0e35G y"_s,
				"d MMM G y"_s,
				"d/M/yy G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e2d\u0e34\u0e2a\u0e25\u0e32\u0e21\u0e0b\u0e35\u0e27\u0e34\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"\u0e40\u0e27\u0e25\u0e32\u0e21\u0e32\u0e15\u0e23\u0e10\u0e32\u0e19{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e0d\u0e35\u0e48\u0e1b\u0e38\u0e48\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e01\u0e32\u0e25"_s,
				u"\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e28\u0e31\u0e01\u0e23\u0e32\u0e0a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM \u0e1b\u0e35GGGG\u0e17\u0e35\u0e48 y"_s,
				u"d MMMM \u0e1b\u0e35GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/yy GGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0e19\u0e32\u0e17\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0e2a\u0e21\u0e31\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0e0a\u0e48\u0e27\u0e07\u0e27\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0e21\u0e38\u0e2e\u0e30\u0e23\u0e4c\u0e23\u0e2d\u0e21"_s,
				u"\u0e0b\u0e2d\u0e1f\u0e32\u0e23\u0e4c"_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 I"_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 II"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 I"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 II"_s,
				u"\u0e23\u0e2d\u0e08\u0e31\u0e1a"_s,
				u"\u0e0a\u0e30\u0e2d\u0e30\u0e1a\u0e32\u0e19"_s,
				u"\u0e23\u0e2d\u0e21\u0e30\u0e14\u0e2d\u0e19"_s,
				u"\u0e40\u0e0a\u0e32\u0e27\u0e31\u0e25"_s,
				u"\u0e0b\u0e38\u0e25\u0e01\u0e34\u0e2d\u0e3a\u0e14\u0e30\u0e2e\u0e3a"_s,
				u"\u0e0b\u0e38\u0e25\u0e2b\u0e34\u0e08\u0e0d\u0e30\u0e2e\u0e3a"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e44\u0e15\u0e49\u0e2b\u0e27\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM GGGG y"_s,
				"d MMMM GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0e40\u0e14\u0e37\u0e2d\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0e27\u0e34\u0e19\u0e32\u0e17\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM \u0e1b\u0e35GGGG\u0e17\u0e35\u0e48 y"_s,
				u"d MMMM \u0e1b\u0e35GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e2d\u0e34\u0e2a\u0e25\u0e32\u0e21"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;evening2:18:00-21:00;night1:21:00-06:00;afternoon1:12:00-13:00;morning1:06:00-12:00;afternoon2:13:00-16:00;evening1:16:00-18:00"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"\u0e40\u0e27\u0e25\u0e32{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u0e1e\u0e31\u0e19}"_s,
				u"{other:0\' \'\u0e2b\u0e21\u0e37\u0e48\u0e19}"_s,
				u"{other:0\' \'\u0e41\u0e2a\u0e19}"_s,
				u"{other:0\' \'\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:00\' \'\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:000\' \'\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:0\' \'\u0e1e\u0e31\u0e19\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:0\' \'\u0e2b\u0e21\u0e37\u0e48\u0e19\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:0\' \'\u0e41\u0e2a\u0e19\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:0\' \'\u0e25\u0e49\u0e32\u0e19\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:00\' \'\u0e25\u0e49\u0e32\u0e19\u0e25\u0e49\u0e32\u0e19}"_s,
				u"{other:000\' \'\u0e25\u0e49\u0e32\u0e19\u0e25\u0e49\u0e32\u0e19}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0e40\u0e02\u0e15\u0e40\u0e27\u0e25\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM G y"_s,
				"d MMMM G y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0e27\u0e31\u0e19\u0e02\u0e2d\u0e07\u0e2a\u0e31\u0e1b\u0e14\u0e32\u0e2b\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM GGGG y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0e2a\u0e31\u0e1b\u0e14\u0e32\u0e2b\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM G y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM \u0e1b\u0e35G\u0e17\u0e35\u0e48 y"_s,
				u"d MMMM \u0e1b\u0e35G y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{other:0K}"_s,
				"{other:00K}"_s,
				"{other:000K}"_s,
				"{other:0M}"_s,
				"{other:00M}"_s,
				"{other:000M}"_s,
				"{other:0B}"_s,
				"{other:00B}"_s,
				"{other:000B}"_s,
				"{other:0T}"_s,
				"{other:00T}"_s,
				"{other:000T}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"\u0e40\u0e27\u0e25\u0e32\u0e2d\u0e2d\u0e21\u0e41\u0e2a\u0e07{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u0e17\u0e35\u0e48 d MMMM G y"_s,
				"d MMMM G y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0e0a\u0e31\u0e48\u0e27\u0e42\u0e21\u0e07"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0e21\u0e38\u0e2e\u0e31\u0e23."_s,
				u"\u0e40\u0e28\u0e32\u0e30."_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 I"_s,
				u"\u0e23\u0e2d\u0e1a\u0e35 II"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 I"_s,
				u"\u0e08\u0e38\u0e21\u0e32\u0e14\u0e32 II"_s,
				u"\u0e40\u0e23\u0e32\u0e30."_s,
				u"\u0e0a\u0e30\u0e2d\u0e4c."_s,
				u"\u0e40\u0e23\u0e32\u0e30\u0e21\u0e30."_s,
				u"\u0e40\u0e0a\u0e32\u0e27."_s,
				u"\u0e0b\u0e38\u0e25\u0e01\u0e34\u0e2d\u0e3a."_s,
				u"\u0e0b\u0e38\u0e25\u0e2b\u0e34\u0e08."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0e1b\u0e0f\u0e34\u0e17\u0e34\u0e19\u0e1e\u0e38\u0e17\u0e18"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_th::FormatData_th() {
}

$Class* FormatData_th::load$($String* name, bool initialize) {
	$loadClass(FormatData_th, name, initialize, &_FormatData_th_ClassInfo_, allocate$FormatData_th);
	return class$;
}

$Class* FormatData_th::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun