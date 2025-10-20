#include <sun/text/resources/cldr/ext/FormatData_el.h>

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

$MethodInfo _FormatData_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_el::*)()>(&FormatData_el::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_el",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_el_MethodInfo_
};

$Object* allocate$FormatData_el($Class* clazz) {
	return $of($alloc(FormatData_el));
}

void FormatData_el::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_el::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0399\u03b1\u03bd\u03bf\u03c5\u03b1\u03c1\u03af\u03bf\u03c5"_s,
		u"\u03a6\u03b5\u03b2\u03c1\u03bf\u03c5\u03b1\u03c1\u03af\u03bf\u03c5"_s,
		u"\u039c\u03b1\u03c1\u03c4\u03af\u03bf\u03c5"_s,
		u"\u0391\u03c0\u03c1\u03b9\u03bb\u03af\u03bf\u03c5"_s,
		u"\u039c\u03b1\u0390\u03bf\u03c5"_s,
		u"\u0399\u03bf\u03c5\u03bd\u03af\u03bf\u03c5"_s,
		u"\u0399\u03bf\u03c5\u03bb\u03af\u03bf\u03c5"_s,
		u"\u0391\u03c5\u03b3\u03bf\u03cd\u03c3\u03c4\u03bf\u03c5"_s,
		u"\u03a3\u03b5\u03c0\u03c4\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
		u"\u039f\u03ba\u03c4\u03c9\u03b2\u03c1\u03af\u03bf\u03c5"_s,
		u"\u039d\u03bf\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
		u"\u0394\u03b5\u03ba\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0399\u03b1\u03bd"_s,
		u"\u03a6\u03b5\u03b2"_s,
		u"\u039c\u03b1\u03c1"_s,
		u"\u0391\u03c0\u03c1"_s,
		u"\u039c\u03b1\u0390"_s,
		u"\u0399\u03bf\u03c5\u03bd"_s,
		u"\u0399\u03bf\u03c5\u03bb"_s,
		u"\u0391\u03c5\u03b3"_s,
		u"\u03a3\u03b5\u03c0"_s,
		u"\u039f\u03ba\u03c4"_s,
		u"\u039d\u03bf\u03b5"_s,
		u"\u0394\u03b5\u03ba"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0399"_s,
		u"\u03a6"_s,
		u"\u039c"_s,
		u"\u0391"_s,
		u"\u039c"_s,
		u"\u0399"_s,
		u"\u0399"_s,
		u"\u0391"_s,
		u"\u03a3"_s,
		u"\u039f"_s,
		u"\u039d"_s,
		u"\u0394"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u039a\u03c5\u03c1\u03b9\u03b1\u03ba\u03ae"_s,
		u"\u0394\u03b5\u03c5\u03c4\u03ad\u03c1\u03b1"_s,
		u"\u03a4\u03c1\u03af\u03c4\u03b7"_s,
		u"\u03a4\u03b5\u03c4\u03ac\u03c1\u03c4\u03b7"_s,
		u"\u03a0\u03ad\u03bc\u03c0\u03c4\u03b7"_s,
		u"\u03a0\u03b1\u03c1\u03b1\u03c3\u03ba\u03b5\u03c5\u03ae"_s,
		u"\u03a3\u03ac\u03b2\u03b2\u03b1\u03c4\u03bf"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u039a\u03c5\u03c1"_s,
		u"\u0394\u03b5\u03c5"_s,
		u"\u03a4\u03c1\u03af"_s,
		u"\u03a4\u03b5\u03c4"_s,
		u"\u03a0\u03ad\u03bc"_s,
		u"\u03a0\u03b1\u03c1"_s,
		u"\u03a3\u03ac\u03b2"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u039a"_s,
		u"\u0394"_s,
		u"\u03a4"_s,
		u"\u03a4"_s,
		u"\u03a0"_s,
		u"\u03a0"_s,
		u"\u03a3"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s,
		u"2\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s,
		u"3\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s,
		u"4\u03bf \u03c4\u03c1\u03af\u03bc\u03b7\u03bd\u03bf"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u03a41"_s,
		u"\u03a42"_s,
		u"\u03a43"_s,
		u"\u03a44"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u03c0.\u03bc."_s,
		u"\u03bc.\u03bc."_s,
		""_s,
		""_s,
		u"\u03c4\u03bf \u03c0\u03c1\u03c9\u03af"_s,
		""_s,
		u"\u03c4\u03bf \u03bc\u03b5\u03c3\u03b7\u03bc\u03ad\u03c1\u03b9"_s,
		""_s,
		u"\u03c4\u03bf \u03b1\u03c0\u03cc\u03b3\u03b5\u03c5\u03bc\u03b1"_s,
		""_s,
		u"\u03c4\u03bf \u03b2\u03c1\u03ac\u03b4\u03c5"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u03c0\u03bc"_s,
		u"\u03bc\u03bc"_s,
		""_s,
		""_s,
		u"\u03c0\u03c1\u03c9\u03af"_s,
		""_s,
		u"\u03bc\u03b5\u03c3\u03b7\u03bc."_s,
		""_s,
		u"\u03b1\u03c0\u03cc\u03b3."_s,
		""_s,
		u"\u03b2\u03c1\u03ac\u03b4\u03c5"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u03c0.\u03bc."_s,
		u"\u03bc.\u03bc."_s,
		""_s,
		""_s,
		u"\u03c0\u03c1\u03c9\u03af"_s,
		""_s,
		u"\u03bc\u03b5\u03c3\u03b7\u03bc."_s,
		""_s,
		u"\u03b1\u03c0\u03cc\u03b3."_s,
		""_s,
		u"\u03b2\u03c1\u03ac\u03b4\u03c5"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u03c0.\u03a7."_s,
		u"\u03bc.\u03a7."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_DateTimePatterns, $new($StringArray, {
		"{1} - {0}"_s,
		"{1} - {0}"_s,
		"{1}, {0}"_s,
		"{1}, {0}"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0392.\u0395."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"\u03bc\u03b5\u03c4\u03ac \u03a7\u03c1\u03b9\u03c3\u03c4\u03cc\u03bd"_s,
		"Meiji"_s,
		u"Taish\u014d"_s,
		u"Sh\u014dwa"_s,
		u"\u03a7\u03b5\u03ca\u03c3\u03ad\u03b9"_s,
		u"\u03a1\u03ad\u03b9\u03b2\u03b1"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		u"\u03bc.\u03a7."_s,
		"Meiji"_s,
		u"Taish\u014d"_s,
		u"Sh\u014dwa"_s,
		u"\u03a7\u03b5\u03ca\u03c3\u03ad\u03b9"_s,
		u"\u03a1\u03ad\u03b9\u03b2\u03b1"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u03c0\u03c1\u03bf R.O.C."_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u0395.\u0395."_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0393\u03c1\u03b7\u03b3\u03bf\u03c1\u03b9\u03b1\u03bd\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u03ad\u03c4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0399\u03c3\u03bb\u03b1\u03bc\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf (Umm al-Qura)"_s)
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
				"EEEE, d MMMM, y G"_s,
				"d MMMM, y G"_s,
				"d MMM, y G"_s,
				"d/M/yy"_s
			}))
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
			$of(u"\u0399\u03c3\u03bb\u03b1\u03bc\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf (\u03c3\u03b5 \u03bc\u03bf\u03c1\u03c6\u03ae \u03c0\u03af\u03bd\u03b1\u03ba\u03b1, \u03b1\u03c3\u03c4\u03b9\u03ba\u03cc \u03b5\u03c0\u03bf\u03c7\u03ae\u03c2)"_s)
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"\u03a7\u03b5\u03b9\u03bc\u03b5\u03c1\u03b9\u03bd\u03ae \u03ce\u03c1\u03b1 ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0399\u03b1\u03c0\u03c9\u03bd\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
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
				u"\u03c0\u03c1\u03bf \u03a7\u03c1\u03b9\u03c3\u03c4\u03bf\u03cd"_s,
				u"\u03bc\u03b5\u03c4\u03ac \u03a7\u03c1\u03b9\u03c3\u03c4\u03cc\u03bd"_s
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
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"e"_s,
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
			$of($$new($StringArray, {
				"EEEE, d MMMM, y GGGG"_s,
				"d MMMM, y GGGG"_s,
				"d MMM, y GGGG"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u03bb\u03b5\u03c0\u03c4\u03cc"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u03c0\u03b5\u03c1\u03af\u03bf\u03b4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u03c0.\u03bc./\u03bc.\u03bc."_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0397\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf \u03c4\u03b7\u03c2 \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1\u03c2 \u03c4\u03b7\u03c2 \u039a\u03af\u03bd\u03b1\u03c2"_s)
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
			$of(u"\u03bc\u03ae\u03bd\u03b1\u03c2"_s)
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
			$of(u"\u03b4\u03b5\u03c5\u03c4\u03b5\u03c1\u03cc\u03bb\u03b5\u03c0\u03c4\u03bf"_s)
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
			$of(u"\u0399\u03c3\u03bb\u03b1\u03bc\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("night1:20:00-04:00;afternoon1:12:00-17:00;morning1:04:00-12:00;evening1:17:00-20:00"_s)
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
				u"\u0399\u03b1\u03bd"_s,
				u"\u03a6\u03b5\u03b2"_s,
				u"\u039c\u03ac\u03c1"_s,
				u"\u0391\u03c0\u03c1"_s,
				u"\u039c\u03ac\u03b9"_s,
				u"\u0399\u03bf\u03cd\u03bd"_s,
				u"\u0399\u03bf\u03cd\u03bb"_s,
				u"\u0391\u03cd\u03b3"_s,
				u"\u03a3\u03b5\u03c0"_s,
				u"\u039f\u03ba\u03c4"_s,
				u"\u039d\u03bf\u03ad"_s,
				u"\u0394\u03b5\u03ba"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"\u038f\u03c1\u03b1 ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u03c7\u03b9\u03bb\u03b9\u03ac\u03b4\u03b1 other:0\' \'\u03c7\u03b9\u03bb\u03b9\u03ac\u03b4\u03b5\u03c2}"_s,
				u"{one:00\' \'\u03c7\u03b9\u03bb\u03b9\u03ac\u03b4\u03b5\u03c2 other:00\' \'\u03c7\u03b9\u03bb\u03b9\u03ac\u03b4\u03b5\u03c2}"_s,
				u"{one:000\' \'\u03c7\u03b9\u03bb\u03b9\u03ac\u03b4\u03b5\u03c2 other:000\' \'\u03c7\u03b9\u03bb\u03b9\u03ac\u03b4\u03b5\u03c2}"_s,
				u"{one:0\' \'\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03bf other:0\' \'\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:00\' \'\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1 other:00\' \'\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:000\' \'\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1 other:000\' \'\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:0\' \'\u03b4\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03bf other:0\' \'\u03b4\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:00\' \'\u03b4\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1 other:00\' \'\u03b4\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:000\' \'\u03b4\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1 other:000\' \'\u03b4\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:0\' \'\u03c4\u03c1\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03bf other:0\' \'\u03c4\u03c1\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:00\' \'\u03c4\u03c1\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1 other:00\' \'\u03c4\u03c1\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s,
				u"{one:000\' \'\u03c4\u03c1\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1 other:000\' \'\u03c4\u03c1\u03b9\u03c3\u03b5\u03ba\u03b1\u03c4\u03bf\u03bc\u03bc\u03cd\u03c1\u03b9\u03b1}"_s
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
			$of(u"\u03b6\u03ce\u03bd\u03b7 \u03ce\u03c1\u03b1\u03c2"_s)
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
			$of(metaValue_abbreviated_AmPmMarkers)
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u03ba\u03b1\u03b8\u03b7\u03bc\u03b5\u03c1\u03b9\u03bd\u03ae"_s)
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
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
			$of(u"\u03b5\u03b2\u03b4\u03bf\u03bc\u03ac\u03b4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
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
				u"{one:0\u00a0\u03c7\u03b9\u03bb\'.\' other:0\u00a0\u03c7\u03b9\u03bb\'.\'}"_s,
				u"{one:00\u00a0\u03c7\u03b9\u03bb\'.\' other:00\u00a0\u03c7\u03b9\u03bb\'.\'}"_s,
				u"{one:000\u00a0\u03c7\u03b9\u03bb\'.\' other:000\u00a0\u03c7\u03b9\u03bb\'.\'}"_s,
				u"{one:0\u00a0\u03b5\u03ba\'.\' other:0\u00a0\u03b5\u03ba\'.\'}"_s,
				u"{one:00\u00a0\u03b5\u03ba\'.\' other:00\u00a0\u03b5\u03ba\'.\'}"_s,
				u"{one:000\u00a0\u03b5\u03ba\'.\' other:000\u00a0\u03b5\u03ba\'.\'}"_s,
				u"{one:0\u00a0\u03b4\u03b9\u03c3\'.\' other:0\u00a0\u03b4\u03b9\u03c3\'.\'}"_s,
				u"{one:00\u00a0\u03b4\u03b9\u03c3\'.\' other:00\u00a0\u03b4\u03b9\u03c3\'.\'}"_s,
				u"{one:000\u00a0\u03b4\u03b9\u03c3\'.\' other:000\u00a0\u03b4\u03b9\u03c3\'.\'}"_s,
				u"{one:0\u00a0\u03c4\u03c1\u03b9\u03c3\'.\' other:0\u00a0\u03c4\u03c1\u03b9\u03c3\'.\'}"_s,
				u"{one:00\u00a0\u03c4\u03c1\u03b9\u03c3\'.\' other:00\u00a0\u03c4\u03c1\u03b9\u03c3\'.\'}"_s,
				u"{one:000\u00a0\u03c4\u03c1\u03b9\u03c3\'.\' other:000\u00a0\u03c4\u03c1\u03b9\u03c3\'.\'}"_s
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
			$of(u"\u0398\u03b5\u03c1\u03b9\u03bd\u03ae \u03ce\u03c1\u03b1 ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
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
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u03ce\u03c1\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0392\u03bf\u03c5\u03b4\u03b9\u03c3\u03c4\u03b9\u03ba\u03cc \u03b7\u03bc\u03b5\u03c1\u03bf\u03bb\u03cc\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd\u03bf\u03c5\u03ac\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u03a6\u03b5\u03b2\u03c1\u03bf\u03c5\u03ac\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u039c\u03ac\u03c1\u03c4\u03b9\u03bf\u03c2"_s,
				u"\u0391\u03c0\u03c1\u03af\u03bb\u03b9\u03bf\u03c2"_s,
				u"\u039c\u03ac\u03b9\u03bf\u03c2"_s,
				u"\u0399\u03bf\u03cd\u03bd\u03b9\u03bf\u03c2"_s,
				u"\u0399\u03bf\u03cd\u03bb\u03b9\u03bf\u03c2"_s,
				u"\u0391\u03cd\u03b3\u03bf\u03c5\u03c3\u03c4\u03bf\u03c2"_s,
				u"\u03a3\u03b5\u03c0\u03c4\u03ad\u03bc\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u039f\u03ba\u03c4\u03ce\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u039d\u03bf\u03ad\u03bc\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u0394\u03b5\u03ba\u03ad\u03bc\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				u"#,##0.00\u00a0\u00a4"_s
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
			$of("japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_el::FormatData_el() {
}

$Class* FormatData_el::load$($String* name, bool initialize) {
	$loadClass(FormatData_el, name, initialize, &_FormatData_el_ClassInfo_, allocate$FormatData_el);
	return class$;
}

$Class* FormatData_el::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun