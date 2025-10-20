#include <sun/text/resources/cldr/ext/FormatData_kn.h>

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

$MethodInfo _FormatData_kn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_kn::*)()>(&FormatData_kn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_kn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_kn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_kn_MethodInfo_
};

$Object* allocate$FormatData_kn($Class* clazz) {
	return $of($alloc(FormatData_kn));
}

void FormatData_kn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_kn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0c9c\u0ca8\u0cb5\u0cb0\u0cbf"_s,
		u"\u0cab\u0cc6\u0cac\u0ccd\u0cb0\u0cb5\u0cb0\u0cbf"_s,
		u"\u0cae\u0cbe\u0cb0\u0ccd\u0c9a\u0ccd"_s,
		u"\u0c8f\u0caa\u0ccd\u0cb0\u0cbf\u0cb2\u0ccd"_s,
		u"\u0cae\u0cc7"_s,
		u"\u0c9c\u0cc2\u0ca8\u0ccd"_s,
		u"\u0c9c\u0cc1\u0cb2\u0cc8"_s,
		u"\u0c86\u0c97\u0cb8\u0ccd\u0c9f\u0ccd"_s,
		u"\u0cb8\u0cc6\u0caa\u0ccd\u0c9f\u0cc6\u0c82\u0cac\u0cb0\u0ccd"_s,
		u"\u0c85\u0c95\u0ccd\u0c9f\u0ccb\u0cac\u0cb0\u0ccd"_s,
		u"\u0ca8\u0cb5\u0cc6\u0c82\u0cac\u0cb0\u0ccd"_s,
		u"\u0ca1\u0cbf\u0cb8\u0cc6\u0c82\u0cac\u0cb0\u0ccd"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0c9c\u0ca8\u0cb5\u0cb0\u0cbf"_s,
		u"\u0cab\u0cc6\u0cac\u0ccd\u0cb0\u0cb5\u0cb0\u0cbf"_s,
		u"\u0cae\u0cbe\u0cb0\u0ccd\u0c9a\u0ccd"_s,
		u"\u0c8f\u0caa\u0ccd\u0cb0\u0cbf"_s,
		u"\u0cae\u0cc7"_s,
		u"\u0c9c\u0cc2\u0ca8\u0ccd"_s,
		u"\u0c9c\u0cc1\u0cb2\u0cc8"_s,
		u"\u0c86\u0c97"_s,
		u"\u0cb8\u0cc6\u0caa\u0ccd\u0c9f\u0cc6\u0c82"_s,
		u"\u0c85\u0c95\u0ccd\u0c9f\u0ccb"_s,
		u"\u0ca8\u0cb5\u0cc6\u0c82"_s,
		u"\u0ca1\u0cbf\u0cb8\u0cc6\u0c82"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0c9c"_s,
		u"\u0cab\u0cc6"_s,
		u"\u0cae\u0cbe"_s,
		u"\u0c8f"_s,
		u"\u0cae\u0cc7"_s,
		u"\u0c9c\u0cc2"_s,
		u"\u0c9c\u0cc1"_s,
		u"\u0c86"_s,
		u"\u0cb8\u0cc6"_s,
		u"\u0c85"_s,
		u"\u0ca8"_s,
		u"\u0ca1\u0cbf"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0cad\u0cbe\u0ca8\u0cc1\u0cb5\u0cbe\u0cb0"_s,
		u"\u0cb8\u0ccb\u0cae\u0cb5\u0cbe\u0cb0"_s,
		u"\u0cae\u0c82\u0c97\u0cb3\u0cb5\u0cbe\u0cb0"_s,
		u"\u0cac\u0cc1\u0ca7\u0cb5\u0cbe\u0cb0"_s,
		u"\u0c97\u0cc1\u0cb0\u0cc1\u0cb5\u0cbe\u0cb0"_s,
		u"\u0cb6\u0cc1\u0c95\u0ccd\u0cb0\u0cb5\u0cbe\u0cb0"_s,
		u"\u0cb6\u0ca8\u0cbf\u0cb5\u0cbe\u0cb0"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0cad\u0cbe\u0ca8\u0cc1"_s,
		u"\u0cb8\u0ccb\u0cae"_s,
		u"\u0cae\u0c82\u0c97\u0cb3"_s,
		u"\u0cac\u0cc1\u0ca7"_s,
		u"\u0c97\u0cc1\u0cb0\u0cc1"_s,
		u"\u0cb6\u0cc1\u0c95\u0ccd\u0cb0"_s,
		u"\u0cb6\u0ca8\u0cbf"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0cad\u0cbe"_s,
		u"\u0cb8\u0ccb"_s,
		u"\u0cae\u0c82"_s,
		u"\u0cac\u0cc1"_s,
		u"\u0c97\u0cc1"_s,
		u"\u0cb6\u0cc1"_s,
		u"\u0cb6"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1\u0ca8\u0cc7 \u0ca4\u0ccd\u0cb0\u0cc8\u0cae\u0cbe\u0cb8\u0cbf\u0c95"_s,
		u"2\u0ca8\u0cc7 \u0ca4\u0ccd\u0cb0\u0cc8\u0cae\u0cbe\u0cb8\u0cbf\u0c95"_s,
		u"3\u0ca8\u0cc7 \u0ca4\u0ccd\u0cb0\u0cc8\u0cae\u0cbe\u0cb8\u0cbf\u0c95"_s,
		u"4\u0ca8\u0cc7 \u0ca4\u0ccd\u0cb0\u0cc8\u0cae\u0cbe\u0cb8\u0cbf\u0c95"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0ca4\u0ccd\u0cb0\u0cc8 1"_s,
		u"\u0ca4\u0ccd\u0cb0\u0cc8 2"_s,
		u"\u0ca4\u0ccd\u0cb0\u0cc8 3"_s,
		u"\u0ca4\u0ccd\u0cb0\u0cc8 4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0caa\u0cc2\u0cb0\u0ccd\u0cb5\u0cbe\u0cb9\u0ccd\u0ca8"_s,
		u"\u0c85\u0caa\u0cb0\u0cbe\u0cb9\u0ccd\u0ca8"_s,
		u"\u0cae\u0ca7\u0ccd\u0caf \u0cb0\u0cbe\u0ca4\u0ccd\u0cb0\u0cbf"_s,
		""_s,
		u"\u0cac\u0cc6\u0cb3\u0c97\u0ccd\u0c97\u0cc6"_s,
		""_s,
		u"\u0cae\u0ca7\u0ccd\u0caf\u0cbe\u0cb9\u0ccd\u0ca8"_s,
		""_s,
		u"\u0cb8\u0c82\u0c9c\u0cc6"_s,
		""_s,
		u"\u0cb0\u0cbe\u0ca4\u0ccd\u0cb0\u0cbf"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0caa\u0cc2"_s,
		u"\u0c85"_s,
		u"\u0cae\u0ca7\u0ccd\u0caf\u0cb0\u0cbe\u0ca4\u0ccd\u0cb0\u0cbf"_s,
		""_s,
		u"\u0cac\u0cc6\u0cb3\u0c97\u0ccd\u0c97\u0cc6"_s,
		""_s,
		u"\u0cae\u0ca7\u0ccd\u0caf\u0cbe\u0cb9\u0ccd\u0ca8"_s,
		""_s,
		u"\u0cb8\u0c82\u0c9c\u0cc6"_s,
		""_s,
		u"\u0cb0\u0cbe\u0ca4\u0ccd\u0cb0\u0cbf"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0c95\u0ccd\u0cb0\u0cbf.\u0caa\u0cc2"_s,
		u"\u0c95\u0ccd\u0cb0\u0cbf.\u0cb6"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"hh:mm:ss a zzzz"_s,
		"hh:mm:ss a z"_s,
		"hh:mm:ss a"_s,
		"hh:mm a"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0c86\u0cb0\u0ccd.\u0c93.\u0cb8\u0cbf.\u0c97\u0cc6 \u0cae\u0cc1\u0c82\u0c9a\u0cc6"_s,
		u"\u0cae\u0cbf\u0c82\u0c97\u0ccb"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0c97\u0ccd\u0cb0\u0cc6\u0c97\u0ccb\u0cb0\u0cbf\u0caf\u0ca8\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0cb5\u0cb0\u0ccd\u0cb7"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbf\u0c95\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd (\u0c89\u0cae\u0ccd \u0c85\u0cb2\u0ccd-\u0c96\u0cc1\u0cb0\u0cbe)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
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
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbf\u0c95\u0ccd-\u0cb8\u0cbf\u0cb5\u0cbf\u0cb2\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
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
			$of(u"{0} \u0caa\u0ccd\u0cb0\u0cae\u0cbe\u0ca3\u0cbf\u0ca4 \u0cb8\u0cae\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0c9c\u0caa\u0cbe\u0ca8\u0cc0\u0cb8\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
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
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0c95\u0ccd\u0cb0\u0cbf\u0cb8\u0ccd\u0ca4 \u0caa\u0cc2\u0cb0\u0ccd\u0cb5"_s,
				u"\u0c95\u0ccd\u0cb0\u0cbf\u0cb8\u0ccd\u0ca4 \u0cb6\u0c95"_s
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
			$of($$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
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
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0ca8\u0cbf\u0cae\u0cbf\u0cb7"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0caf\u0cc1\u0c97"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0cae\u0cc1\u0cb9\u0cb0\u0cae\u0ccd"_s,
				u"\u0cb8\u0cab\u0cbe\u0cb0\u0ccd"_s,
				u"\u0cb0\u0cac\u0cbf\u2018 I"_s,
				u"\u0cb0\u0cac\u0cbf\u2018 II"_s,
				u"\u0c9c\u0cc1\u0cae\u0cbe\u0ca6\u0cbe I"_s,
				u"\u0c9c\u0cc1\u0cae\u0cbe\u0ca6\u0cbe II"_s,
				u"\u0cb0\u0c9c\u0cac\u0ccd"_s,
				u"\u0cb6\u2019\u0cac\u0cbe\u0ca8\u0ccd"_s,
				u"\u0cb0\u0cae\u0ca6\u0cbe\u0ca8\u0ccd"_s,
				u"\u0cb6\u0cb5\u0ccd\u0cb5\u0cbe\u0cb2\u0ccd"_s,
				u"\u0ca7\u0cc1\u2018\u0cb2\u0ccd-\u0c95\u0cbf\u2018\u0ca1\u0cbe\u0cb9\u0ccd"_s,
				u"\u0ca7\u0cc1\u2018\u0cb2\u0ccd-\u0cb9\u0cbf\u0c9c\u0cbe\u0cb9\u0ccd"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0cae\u0cbf\u0c82\u0c97\u0ccb \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
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
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0ca4\u0cbf\u0c82\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0cb8\u0cc6\u0c95\u0cc6\u0c82\u0ca1\u0ccd"_s)
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
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbf\u0c95\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:21:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-21:00"_s)
		}),
		$$new($ObjectArray, {
			$of("knda.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ce6"_s,
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
			$of($$new($StringArray, {
				u"\u0c9c\u0ca8"_s,
				u"\u0cab\u0cc6\u0cac\u0ccd\u0cb0"_s,
				u"\u0cae\u0cbe\u0cb0\u0ccd\u0c9a\u0ccd"_s,
				u"\u0c8f\u0caa\u0ccd\u0cb0\u0cbf"_s,
				u"\u0cae\u0cc7"_s,
				u"\u0c9c\u0cc2\u0ca8\u0ccd"_s,
				u"\u0c9c\u0cc1\u0cb2\u0cc8"_s,
				u"\u0c86\u0c97"_s,
				u"\u0cb8\u0cc6\u0caa\u0ccd\u0c9f\u0cc6\u0c82"_s,
				u"\u0c85\u0c95\u0ccd\u0c9f\u0ccb"_s,
				u"\u0ca8\u0cb5\u0cc6\u0c82"_s,
				u"\u0ca1\u0cbf\u0cb8\u0cc6\u0c82"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0cb8\u0cae\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0cb8\u0cbe\u0cb5\u0cbf\u0cb0 other:0\' \'\u0cb8\u0cbe\u0cb5\u0cbf\u0cb0}"_s,
				u"{one:00\' \'\u0cb8\u0cbe\u0cb5\u0cbf\u0cb0 other:00\' \'\u0cb8\u0cbe\u0cb5\u0cbf\u0cb0}"_s,
				u"{one:000\' \'\u0cb8\u0cbe\u0cb5\u0cbf\u0cb0 other:000\' \'\u0cb8\u0cbe\u0cb5\u0cbf\u0cb0}"_s,
				u"{one:0\' \'\u0cae\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd other:0\' \'\u0cae\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd}"_s,
				u"{one:00\' \'\u0cae\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd other:00\' \'\u0cae\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd}"_s,
				u"{one:000\' \'\u0cae\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd other:000\' \'\u0cae\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd}"_s,
				u"{one:0\' \'\u0cac\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd other:0\' \'\u0cac\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd}"_s,
				u"{one:00\' \'\u0cac\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd other:00\' \'\u0cac\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd}"_s,
				u"{one:000\' \'\u0cac\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd other:000\' \'\u0cac\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd}"_s,
				u"{one:0\' \'\u0c9f\u0ccd\u0cb0\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd\u200c other:0\' \'\u0c9f\u0ccd\u0cb0\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd\u200c}"_s,
				u"{one:00\' \'\u0c9f\u0ccd\u0cb0\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd\u200c other:00\' \'\u0c9f\u0ccd\u0cb0\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd\u200c}"_s,
				u"{one:000\' \'\u0c9f\u0ccd\u0cb0\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd\u200c other:000\' \'\u0c9f\u0ccd\u0cb0\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd\u200c}"_s
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
			$of(metaValue_MonthNarrows)
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
			$of(u"\u0cb8\u0cae\u0caf \u0cb5\u0cb2\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0cb5\u0cbe\u0cb0\u0ca6 \u0ca6\u0cbf\u0ca8"_s)
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
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("knda.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0cb5\u0cbe\u0cb0"_s)
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
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\u0cb8\u0cbe other:0\u0cb8\u0cbe}"_s,
				u"{one:00\u0cb8\u0cbe other:00\u0cb8\u0cbe}"_s,
				u"{one:000\u0cb8\u0cbe other:000\u0cb8\u0cbe}"_s,
				u"{one:0\u0cae\u0cbf other:0\u0cae\u0cbf}"_s,
				u"{one:00\u0cae\u0cbf other:00\u0cae\u0cbf}"_s,
				u"{one:000\u0cae\u0cbf other:000\u0cae\u0cbf}"_s,
				u"{one:0\u0cac\u0cbf other:0\u0cac\u0cbf}"_s,
				u"{one:00\u0cac\u0cbf other:00\u0cac\u0cbf}"_s,
				u"{one:000\u0cac\u0cbf other:000\u0cac\u0cbf}"_s,
				u"{one:0\u0c9f\u0ccd\u0cb0\u0cbf other:0\u0c9f\u0ccd\u0cb0\u0cbf}"_s,
				u"{one:00\u0c9f\u0ccd\u0cb0\u0cbf other:00\u0c9f\u0ccd\u0cb0\u0cbf}"_s,
				u"{one:000\u0c9f\u0ccd\u0cb0\u0cbf other:000\u0c9f\u0ccd\u0cb0\u0cbf}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u0ca6\u0cbf\u0ca8\u0ca6 \u0cb8\u0cae\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, y"_s,
				"MMMM d, y"_s,
				"MMM d, y"_s,
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
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:i = 0 or n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0c97\u0c82\u0c9f\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0cae\u0cc1\u0cb9\u0ccd."_s,
				u"\u0cb8\u0cab\u0cbe."_s,
				u"\u0cb0\u0cac\u0cbf\u2018 I"_s,
				u"\u0cb0\u0cac\u0cbf\u2018 II"_s,
				u"\u0c9c\u0cc1\u0cae\u0ccd. I"_s,
				u"\u0c9c\u0cc1\u0cae\u0ccd. II"_s,
				u"\u0cb0\u0c9c\u0ccd."_s,
				u"\u0cb6."_s,
				u"\u0cb0\u0cae\u0ccd."_s,
				u"\u0cb6\u0cb5\u0ccd."_s,
				u"\u0ca7\u0cc1\u2018\u0cb2\u0ccd-\u0c95\u0cbf."_s,
				u"\u0ca7\u0cc1\u2018\u0cb2\u0ccd-\u0cb9."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0cac\u0ccc\u0ca6\u0ccd\u0ca7\u0cb0 \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
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
			$of(metaValue_QuarterAbbreviations)
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

FormatData_kn::FormatData_kn() {
}

$Class* FormatData_kn::load$($String* name, bool initialize) {
	$loadClass(FormatData_kn, name, initialize, &_FormatData_kn_ClassInfo_, allocate$FormatData_kn);
	return class$;
}

$Class* FormatData_kn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun