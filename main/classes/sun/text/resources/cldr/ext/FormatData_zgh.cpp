#include <sun/text/resources/cldr/ext/FormatData_zgh.h>

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

$MethodInfo _FormatData_zgh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_zgh::*)()>(&FormatData_zgh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_zgh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_zgh",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zgh_MethodInfo_
};

$Object* allocate$FormatData_zgh($Class* clazz) {
	return $of($alloc(FormatData_zgh));
}

void FormatData_zgh::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_zgh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u2d49\u2d4f\u2d4f\u2d30\u2d62\u2d54"_s,
		u"\u2d31\u2d55\u2d30\u2d62\u2d55"_s,
		u"\u2d4e\u2d30\u2d55\u2d5a"_s,
		u"\u2d49\u2d31\u2d54\u2d49\u2d54"_s,
		u"\u2d4e\u2d30\u2d62\u2d62\u2d53"_s,
		u"\u2d62\u2d53\u2d4f\u2d62\u2d53"_s,
		u"\u2d62\u2d53\u2d4d\u2d62\u2d53\u2d63"_s,
		u"\u2d56\u2d53\u2d5b\u2d5c"_s,
		u"\u2d5b\u2d53\u2d5c\u2d30\u2d4f\u2d31\u2d49\u2d54"_s,
		u"\u2d3d\u2d5c\u2d53\u2d31\u2d54"_s,
		u"\u2d4f\u2d53\u2d61\u2d30\u2d4f\u2d31\u2d49\u2d54"_s,
		u"\u2d37\u2d53\u2d4a\u2d30\u2d4f\u2d31\u2d49\u2d54"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u2d49\u2d4f\u2d4f"_s,
		u"\u2d31\u2d55\u2d30"_s,
		u"\u2d4e\u2d30\u2d55"_s,
		u"\u2d49\u2d31\u2d54"_s,
		u"\u2d4e\u2d30\u2d62"_s,
		u"\u2d62\u2d53\u2d4f"_s,
		u"\u2d62\u2d53\u2d4d"_s,
		u"\u2d56\u2d53\u2d5b"_s,
		u"\u2d5b\u2d53\u2d5c"_s,
		u"\u2d3d\u2d5c\u2d53"_s,
		u"\u2d4f\u2d53\u2d61"_s,
		u"\u2d37\u2d53\u2d4a"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u2d49"_s,
		u"\u2d31"_s,
		u"\u2d4e"_s,
		u"\u2d49"_s,
		u"\u2d4e"_s,
		u"\u2d62"_s,
		u"\u2d62"_s,
		u"\u2d56"_s,
		u"\u2d5b"_s,
		u"\u2d3d"_s,
		u"\u2d4f"_s,
		u"\u2d37"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u2d30\u2d59\u2d30\u2d4e\u2d30\u2d59"_s,
		u"\u2d30\u2d62\u2d4f\u2d30\u2d59"_s,
		u"\u2d30\u2d59\u2d49\u2d4f\u2d30\u2d59"_s,
		u"\u2d30\u2d3d\u2d55\u2d30\u2d59"_s,
		u"\u2d30\u2d3d\u2d61\u2d30\u2d59"_s,
		u"\u2d30\u2d59\u2d49\u2d4e\u2d61\u2d30\u2d59"_s,
		u"\u2d30\u2d59\u2d49\u2d39\u2d62\u2d30\u2d59"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u2d30\u2d59\u2d30"_s,
		u"\u2d30\u2d62\u2d4f"_s,
		u"\u2d30\u2d59\u2d49"_s,
		u"\u2d30\u2d3d\u2d55"_s,
		u"\u2d30\u2d3d\u2d61"_s,
		u"\u2d30\u2d59\u2d49\u2d4e"_s,
		u"\u2d30\u2d59\u2d49\u2d39"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u2d30\u2d3d\u2d55\u2d30\u2d39\u2d62\u2d53\u2d54 1"_s,
		u"\u2d30\u2d3d\u2d55\u2d30\u2d39\u2d62\u2d53\u2d54 2"_s,
		u"\u2d30\u2d3d\u2d55\u2d30\u2d39\u2d62\u2d53\u2d54 3"_s,
		u"\u2d30\u2d3d\u2d55\u2d30\u2d39\u2d62\u2d53\u2d54 4"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u2d30\u2d3d 1"_s,
		u"\u2d30\u2d3d 2"_s,
		u"\u2d30\u2d3d 3"_s,
		u"\u2d30\u2d3d 4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u2d5c\u2d49\u2d3c\u2d30\u2d61\u2d5c"_s,
		u"\u2d5c\u2d30\u2d37\u2d33\u2d33\u2d6f\u2d30\u2d5c"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u2d37\u2d30\u2d44"_s,
		u"\u2d37\u2d3c\u2d44"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_DayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		"T"_s,
		"W"_s,
		"T"_s,
		"F"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM, y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM, y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u2d30\u2d59\u2d4e\u2d4d\u2d53\u2d59\u2d59\u2d30\u2d4f \u2d30\u2d33\u2d54\u2d49\u2d33\u2d53\u2d54"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u2d30\u2d59\u2d33\u2d33\u2d6f\u2d30\u2d59"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u2d30\u2d3d\u2d53\u2d37 \u2d4f \u2d53\u2d33\u2d4e\u2d4e\u2d30\u2d39"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u2d37\u2d30\u2d5c \u2d4f \u2d44\u2d49\u2d59\u2d30"_s,
				u"\u2d37\u2d3c\u2d3c\u2d49\u2d54 \u2d4f \u2d44\u2d49\u2d59\u2d30"_s
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u2d30\u2d59\u2d59 \u2d33 \u2d49\u2d4e\u2d30\u2d4d\u2d30\u2d59\u2d59"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u"\u00a0"_s,
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
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u2d5c\u2d53\u2d59\u2d37\u2d49\u2d37\u2d5c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u2d5c\u2d30\u2d59\u2d53\u2d5c"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u2d5c\u2d49\u2d63\u2d49 \u2d33 \u2d61\u2d30\u2d59\u2d59: \u2d5c\u2d49\u2d3c\u2d30\u2d61\u2d5c/\u2d5c\u2d30\u2d37\u2d33\u2d33\u2d6f\u2d30\u2d5c"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("field.month"_s),
			$of(u"\u2d30\u2d62\u2d62\u2d53\u2d54"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u2d5c\u2d30\u2d59\u2d49\u2d4f\u2d5c"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u2d49\u2d4e\u2d30\u2d4d\u2d30\u2d59\u2d59"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of("calendarname.islamic"_s),
			$of(u"\u2d30\u2d59\u2d4e\u2d4d\u2d53\u2d59\u2d59\u2d30\u2d4f \u2d4f \u2d4d\u2d49\u2d59\u2d4d\u2d30\u2d4e"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM, y"_s,
				"d/M/y"_s
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
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u2d5c\u2d30\u2d59\u2d54\u2d30\u2d33\u2d5c"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a4"_s,
				u"#,##0\u00a0%"_s,
				u"#,##0.00\u00a4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of("japanese.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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

FormatData_zgh::FormatData_zgh() {
}

$Class* FormatData_zgh::load$($String* name, bool initialize) {
	$loadClass(FormatData_zgh, name, initialize, &_FormatData_zgh_ClassInfo_, allocate$FormatData_zgh);
	return class$;
}

$Class* FormatData_zgh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun