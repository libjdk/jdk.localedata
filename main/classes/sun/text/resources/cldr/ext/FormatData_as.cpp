#include <sun/text/resources/cldr/ext/FormatData_as.h>

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

$MethodInfo _FormatData_as_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_as::*)()>(&FormatData_as::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_as_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_as",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_as_MethodInfo_
};

$Object* allocate$FormatData_as($Class* clazz) {
	return $of($alloc(FormatData_as));
}

void FormatData_as::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_as::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u099c\u09be\u09a8\u09c1\u09f1\u09be\u09f0\u09c0"_s,
		u"\u09ab\u09c7\u09ac\u09cd\u09f0\u09c1\u09f1\u09be\u09f0\u09c0"_s,
		u"\u09ae\u09be\u09f0\u09cd\u099a"_s,
		u"\u098f\u09aa\u09cd\u09f0\u09bf\u09b2"_s,
		u"\u09ae\u09c7\u2019"_s,
		u"\u099c\u09c1\u09a8"_s,
		u"\u099c\u09c1\u09b2\u09be\u0987"_s,
		u"\u0986\u0997\u09b7\u09cd\u099f"_s,
		u"\u099b\u09c7\u09aa\u09cd\u09a4\u09c7\u09ae\u09cd\u09ac\u09f0"_s,
		u"\u0985\u0995\u09cd\u099f\u09cb\u09ac\u09f0"_s,
		u"\u09a8\u09f1\u09c7\u09ae\u09cd\u09ac\u09f0"_s,
		u"\u09a1\u09bf\u099a\u09c7\u09ae\u09cd\u09ac\u09f0"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u099c\u09be\u09a8\u09c1"_s,
		u"\u09ab\u09c7\u09ac\u09cd\u09f0\u09c1"_s,
		u"\u09ae\u09be\u09f0\u09cd\u099a"_s,
		u"\u098f\u09aa\u09cd\u09f0\u09bf\u09b2"_s,
		u"\u09ae\u09c7\u2019"_s,
		u"\u099c\u09c1\u09a8"_s,
		u"\u099c\u09c1\u09b2\u09be\u0987"_s,
		u"\u0986\u0997"_s,
		u"\u099b\u09c7\u09aa\u09cd\u09a4\u09c7"_s,
		u"\u0985\u0995\u09cd\u099f\u09cb"_s,
		u"\u09a8\u09f1\u09c7"_s,
		u"\u09a1\u09bf\u099a\u09c7"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u099c"_s,
		u"\u09ab"_s,
		u"\u09ae"_s,
		u"\u098f"_s,
		u"\u09ae"_s,
		u"\u099c"_s,
		u"\u099c"_s,
		u"\u0986"_s,
		u"\u099b"_s,
		u"\u0985"_s,
		u"\u09a8"_s,
		u"\u09a1"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u09a6\u09c7\u0993\u09ac\u09be\u09f0"_s,
		u"\u09b8\u09cb\u09ae\u09ac\u09be\u09f0"_s,
		u"\u09ae\u0999\u09cd\u0997\u09b2\u09ac\u09be\u09f0"_s,
		u"\u09ac\u09c1\u09a7\u09ac\u09be\u09f0"_s,
		u"\u09ac\u09c3\u09b9\u09b8\u09cd\u09aa\u09a4\u09bf\u09ac\u09be\u09f0"_s,
		u"\u09b6\u09c1\u0995\u09cd\u09f0\u09ac\u09be\u09f0"_s,
		u"\u09b6\u09a8\u09bf\u09ac\u09be\u09f0"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u09a6\u09c7\u0993"_s,
		u"\u09b8\u09cb\u09ae"_s,
		u"\u09ae\u0999\u09cd\u0997\u09b2"_s,
		u"\u09ac\u09c1\u09a7"_s,
		u"\u09ac\u09c3\u09b9"_s,
		u"\u09b6\u09c1\u0995\u09cd\u09f0"_s,
		u"\u09b6\u09a8\u09bf"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u09a6"_s,
		u"\u09b8"_s,
		u"\u09ae"_s,
		u"\u09ac"_s,
		u"\u09ac"_s,
		u"\u09b6"_s,
		u"\u09b6"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u09aa\u09cd\u09f0\u09a5\u09ae \u09a4\u09bf\u09a8\u09bf\u09ae\u09be\u09b9"_s,
		u"\u09a6\u09cd\u09ac\u09bf\u09a4\u09c0\u09af\u09bc \u09a4\u09bf\u09a8\u09bf\u09ae\u09be\u09b9"_s,
		u"\u09a4\u09c3\u09a4\u09c0\u09af\u09bc \u09a4\u09bf\u09a8\u09bf\u09ae\u09be\u09b9"_s,
		u"\u099a\u09a4\u09c1\u09f0\u09cd\u09a5 \u09a4\u09bf\u09a8\u09bf\u09ae\u09be\u09b9"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u09e7\u09ae\u0983 \u09a4\u09bf\u0983"_s,
		u"\u09e8\u09af\u09bc\u0983 \u09a4\u09bf\u0983"_s,
		u"\u09e9\u09af\u09bc\u0983 \u09a4\u09bf\u0983"_s,
		u"\u09ea\u09f0\u09cd\u09a5\u0983 \u09a4\u09bf\u0983"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u09e7"_s,
		u"\u09e8"_s,
		u"\u09e9"_s,
		u"\u09ea"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u09aa\u09c2\u09f0\u09cd\u09ac\u09be\u09b9\u09cd\u09a8"_s,
		u"\u0985\u09aa\u09f0\u09be\u09b9\u09cd\u09a8"_s,
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
		u"\u0996\u09cd\u09f0\u09c0\u0983 \u09aa\u09c2\u0983"_s,
		u"\u0996\u09cd\u09f0\u09c0\u0983"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"a h.mm.ss zzzz"_s,
		"a h.mm.ss z"_s,
		"a h.mm.ss"_s,
		"a h.mm"_s
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
	$var($String, metaValue_calendarname_gregorian, u"\u0997\u09cd\u09f0\u09c7\u0997\u09cb\u09f0\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09c7\u09b2\u09c7\u09a3\u09cd\u09a1\u09be\u09f0"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u09ac\u099b\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
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
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0987\u099a\u09b2\u09be\u09ae\u09c0-\u09a8\u09be\u0997\u09f0\u09bf\u0995\u09f0 \u09aa\u099e\u09cd\u099c\u09bf\u0995\u09be"_s)
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
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} (+0) \u09ae\u09be\u09a8 \u09b8\u09ae\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("beng"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u099c\u09be\u09aa\u09be\u09a8\u09c0 \u0995\u09c7\u09b2\u09c7\u09a3\u09cd\u09a1\u09be\u09f0"_s)
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
			$of("beng.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u09e6"_s,
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
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0996\u09cd\u09f0\u09c0\u09b7\u09cd\u099f\u09aa\u09c2\u09f0\u09cd\u09ac"_s,
				u"\u0996\u09cd\u09f0\u09c0\u09b7\u09cd\u099f\u09be\u09ac\u09cd\u09a6"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
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
			$of(metaValue_AmPmMarkers)
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
			$of(u"\u09ae\u09bf\u09a8\u09bf\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u09af\u09c1\u0997"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u09aa\u09c2\u09f0\u09cd\u09ac\u09be\u09b9\u09cd\u09a8/\u0985\u09aa\u09f0\u09be\u09b9\u09cd\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("beng.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u099a\u09c0\u09a8\u09be \u09aa\u09cd\u09f0\u099c\u09be\u09a4\u09a8\u09cd\u09a4\u09cd\u09f0\u09f0 \u0995\u09c7\u09b2\u09c7\u09a3\u09cd\u09a1\u09be\u09f0"_s)
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
			$of("field.month"_s),
			$of(u"\u09ae\u09be\u09b9"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u099b\u09c7\u0995\u09c7\u09a3\u09cd\u09a1"_s)
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
			$of(u"\u0987\u099b\u09b2\u09be\u09ae\u09c0 \u0995\u09c7\u09b2\u09c7\u09a3\u09cd\u09a1\u09be\u09f0"_s)
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
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u09b8\u09ae\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u09b9\u09be\u099c\u09be\u09f0 other:0\' \'\u09b9\u09be\u099c\u09be\u09f0}"_s,
				u"{one:00\' \'\u09b9\u09be\u099c\u09be\u09f0 other:00\' \'\u09b9\u09be\u099c\u09be\u09f0}"_s,
				u"{one:0\' \'\u09b2\u09be\u0996 other:0\' \'\u09b2\u09be\u0996}"_s,
				u"{one:0\' \'\u09a8\u09bf\u09af\u09c1\u09a4 other:0\' \'\u09a8\u09bf\u09af\u09c1\u09a4}"_s,
				u"{one:00\' \'\u09a8\u09bf\u09af\u09c1\u09a4 other:00\' \'\u09a8\u09bf\u09af\u09c1\u09a4}"_s,
				u"{one:000\' \'\u09a8\u09bf\u09af\u09c1\u09a4 other:000\' \'\u09a8\u09bf\u09af\u09c1\u09a4}"_s,
				u"{one:0\' \'\u09b6\u09a4\' \'\u0995\u09cb\u099f\u09bf other:0\' \'\u09b6\u09a4\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:00\' \'\u09b6\u09a4\' \'\u0995\u09cb\u099f\u09bf other:00\' \'\u09b6\u09a4\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:000\' \'\u09b6\u09a4\' \'\u0995\u09cb\u099f\u09bf other:000\' \'\u09b6\u09a4\' \'\u0995\u09cb\u099f\u09bf}"_s,
				u"{one:0\' \'\u09b6\u09a4\' \'\u09aa\u09f0\u09be\u09f0\u09cd\u09a6\u09cd\u09a7 other:0\' \'\u09b6\u09a4\' \'\u09aa\u09f0\u09be\u09f0\u09cd\u09a6\u09cd\u09a7}"_s,
				u"{one:00\' \'\u09b6\u09a4\' \'\u09aa\u09f0\u09be\u09f0\u09cd\u09a6\u09cd\u09a7 other:00\' \'\u09b6\u09a4\' \'\u09aa\u09f0\u09be\u09f0\u09cd\u09a6\u09cd\u09a7}"_s,
				u"{one:000\' \'\u09b6\u09a4\' \'\u09aa\u09f0\u09be\u09f0\u09cd\u09a6\u09cd\u09a7 other:000\' \'\u09b6\u09a4\' \'\u09aa\u09f0\u09be\u09f0\u09cd\u09a6\u09cd\u09a7}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("field.zone"_s),
			$of(u"\u09b8\u09ae\u09af\u09bc \u0995\u09cd\u09b7\u09c7\u09a4\u09cd\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u09b8\u09aa\u09cd\u09a4\u09be\u09b9\u09f0 \u09a6\u09bf\u09a8"_s)
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
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u09b8\u09aa\u09cd\u09a4\u09be\u09b9"_s)
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
			$of(metaValue_QuarterNarrows)
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
				u"{one:0\u00a0\u09b9\u09be\u099c\u09be\u09f0 other:0\u00a0\u09b9\u09be\u099c\u09be\u09f0}"_s,
				u"{one:00\u00a0\u09b9\u09be\u099c\u09be\u09f0 other:00\u00a0\u09b9\u09be\u099c\u09be\u09f0}"_s,
				u"{one:0\u00a0\u09b2\u09be\u0996 other:0\u00a0\u09b2\u09be\u0996}"_s,
				u"{one:0\u00a0\u09a8\u09bf\u09af\u09c1\u09a4 other:0\u00a0\u09a8\u09bf\u09af\u09c1\u09a4}"_s,
				u"{one:00\u00a0\u09a8\u09bf\u09af\u09c1\u09a4 other:00\u00a0\u09a8\u09bf\u09af\u09c1\u09a4}"_s,
				u"{one:000\u00a0\u09a8\u09bf\u0983 other:000\u00a0\u09a8\u09bf\u0983}"_s,
				u"{one:0\u00a0\u09b6\u0983\u00a0\u0995\u09cb\u0983 other:0\u00a0\u09b6\u0983\u00a0\u0995\u09cb\u0983}"_s,
				u"{one:00\u00a0\u09b6\u0983\u00a0\u0995\u09cb\u0983 other:00\u00a0\u09b6\u0983\u00a0\u0995\u09cb\u0983}"_s,
				u"{one:000\u00a0\u09b6\u0983\u00a0\u0995\u0983 other:000\u00a0\u09b6\u0983\u00a0\u0995\u0983}"_s,
				u"{one:0\u00a0\u09b6\u0983\u00a0\u09aa\u0983 other:0\u00a0\u09b6\u0983\u00a0\u09aa\u0983}"_s,
				u"{one:00\u00a0\u09b6\u0983\u00a0\u09aa\u0983 other:00\u00a0\u09b6\u0983\u00a0\u09aa\u0983}"_s,
				u"{one:000\u00a0\u09b6\u0983\u00a0\u09aa\u0983 other:000\u00a0\u09b6\u0983\u00a0\u09aa\u0983}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} (+1) \u09a1\u09c7\u09b2\u09be\u0987\u099f \u09b8\u09ae\u09af\u09bc"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, y"_s,
				"d MMMM, y"_s,
				"dd-MM-y"_s,
				"d-M-y"_s
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
			$of(u"\u0998\u09a3\u09cd\u099f\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u09ac\u09cc\u09a6\u09cd\u09a7 \u0995\u09c7\u09b2\u09c7\u09a3\u09cd\u09a1\u09be\u09f0"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##,##0%"_s,
				u"\u00a4\u00a0#,##,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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

FormatData_as::FormatData_as() {
}

$Class* FormatData_as::load$($String* name, bool initialize) {
	$loadClass(FormatData_as, name, initialize, &_FormatData_as_ClassInfo_, allocate$FormatData_as);
	return class$;
}

$Class* FormatData_as::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun