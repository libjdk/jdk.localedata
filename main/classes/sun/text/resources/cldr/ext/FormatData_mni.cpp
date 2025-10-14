#include <sun/text/resources/cldr/ext/FormatData_mni.h>

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

$MethodInfo _FormatData_mni_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_mni::*)()>(&FormatData_mni::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_mni_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_mni",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mni_MethodInfo_
};

$Object* allocate$FormatData_mni($Class* clazz) {
	return $of($alloc(FormatData_mni));
}

void FormatData_mni::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_mni::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u099c\u09be\u09a8\u09c1\u09f1\u09be\u09b0\u09bf"_s,
		u"\u09ab\u09c7\u09ac\u09cd\u09b0\u09c1\u09f1\u09be\u09b0\u09bf"_s,
		u"\u09ae\u09be\u09b0\u09cd\u099a"_s,
		u"\u098f\u09aa\u09cd\u09b0\u09bf\u09b2"_s,
		u"\u09ae\u09c7"_s,
		u"\u099c\u09c1\u09a8"_s,
		u"\u099c\u09c1\u09b2\u09be\u0987"_s,
		u"\u0986\u0997\u09b8\u09cd\u099f"_s,
		u"\u09b8\u09c7\u09aa\u09cd\u099f\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		u"\u0993\u0995\u09cd\u099f\u09cb\u09ac\u09b0"_s,
		u"\u09a8\u09ad\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		u"\u09a1\u09bf\u09b8\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u099c\u09be"_s,
		u"\u09ab\u09c7"_s,
		u"\u09ae\u09be\u09b0"_s,
		u"\u098f\u09aa"_s,
		u"\u09ae\u09c7"_s,
		u"\u099c\u09c1\u09a8"_s,
		u"\u099c\u09c1\u09b2"_s,
		u"\u0986"_s,
		u"\u09b8\u09c7"_s,
		u"\u0993\u0995"_s,
		u"\u09a8\u09ac"_s,
		u"\u09a1\u09bf"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u09a8\u09cb\u0982\u09ae\u09be\u0987\u099c\u09bf\u0982"_s,
		u"\u09a8\u09bf\u0982\u09a5\u09cc\u0995\u09be\u09ac\u09be"_s,
		u"\u09b2\u09c8\u09ac\u09be\u0995\u09aa\u09cb\u0995\u09aa\u09be"_s,
		u"\u09af\u09bc\u09c1\u09ae\u09b6\u0995\u09c8\u09b6\u09be"_s,
		u"\u09b6\u0997\u09cb\u09b2\u09b6\u09c7\u09a8"_s,
		u"\u0987\u09b0\u09be\u0987"_s,
		u"\u09a5\u09be\u0982\u099c"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u09a8\u09cb\u0982"_s,
		u"\u09a8\u09bf\u0982"_s,
		u"\u09b2\u09c8"_s,
		u"\u09af\u09bc\u09c1\u09ae"_s,
		u"\u09b6\u0997"_s,
		u"\u0987\u09b0\u09be"_s,
		u"\u09a5\u09be\u0982"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0985\u09b9\u09be\u09a8\u09ac\u09be \u09ae\u09b8\u09c1\u0982"_s,
		u"\u0985\u09a8\u09c0\u09b6\u09c1\u09ac\u09be \u09ae\u09b8\u09c1\u0982"_s,
		u"\u0985\u09b9\u09c1\u09ae\u09b6\u09c1\u09ac\u09be \u09ae\u09b8\u09c1\u0982"_s,
		u"\u09ae\u09b0\u09c0\u09b6\u09c1\u09ac\u09be \u09ae\u09b8\u09c1\u0982"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u098f \u098f\u09ae"_s,
		u"\u09aa\u09bf \u098f\u09ae"_s,
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
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u09a8\u09c1\u09ae\u09be\u0982"_s,
		"PM"_s,
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
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		u"\u0996\u09c3: \u09ae\u09ae\u09be\u0982"_s,
		u"\u0996\u09c3: \u09ae\u09a4\u09c1\u0982"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"MMMM d, y G, EEEE"_s,
		"MMMM d, y G"_s,
		"MMM d, y G"_s,
		"M/d/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"MMMM d, y GGGG, EEEE"_s,
		"MMMM d, y GGGG"_s,
		"MMM d, y GGGG"_s,
		"M/d/y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0997\u09cd\u09b0\u09bf\u0997\u09cb\u09b0\u09bf\u09af\u09bc\u09be\u09a8 \u0995\u09c7\u09b2\u09c7\u09a8\u09cd\u09a6\u09b0"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u099a\u09b9\u09c0"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u09a8\u09cb"_s,
				u"\u09a8\u09bf\u0982"_s,
				u"\u09b2\u09c8"_s,
				u"\u09af\u09bc\u09c1\u09ae"_s,
				u"\u09b6\u0997"_s,
				u"\u0987\u09b0\u09be"_s,
				u"\u09a5\u09be\u0982"_s
			}))
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
			$of("timezone.gmtFormat"_s),
			$of(u"\u099c\u09bf \u098f\u09ae \u099f\u09bf {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
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
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u099c\u09cb\u09a8"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} (+0) \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("beng"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u099c\u09bf \u098f\u09ae \u099f\u09bf"_s)
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
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u099a\u09af\u09bc\u09cb\u09b2\u0997\u09c0 \u09a8\u09c1\u09ae\u09bf\u09ce"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1} \u0997\u09c0 {0} \u09a6\u09be"_s,
				u"{1} \u0997\u09c0 {0} \u09a6\u09be"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u09ae\u09bf\u09a8\u099f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u099a\u0995"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u098f \u098f\u09ae/\u09aa\u09bf \u098f\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u099c\u09be"_s,
				u"\u09ab\u09c7"_s,
				u"\u09ae\u09be\u09b0"_s,
				u"\u098f\u09aa"_s,
				u"\u09ae\u09c7"_s,
				u"\u099c\u09c1\u09a8"_s,
				u"\u099c\u09c1\u09b2"_s,
				u"\u0986"_s,
				u"\u09b8\u09c7"_s,
				u"\u0993"_s,
				u"\u09a8\u09ac"_s,
				u"\u09a1\u09bf"_s,
				""_s
			}))
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
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u09a5\u09be"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u09b8\u09c7\u0995\u09c7\u09a3\u09cd\u09a1"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u099a\u09af\u09bc\u09cb\u09b2"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} (+1) \u09a6\u09c7\u09b2\u09be\u0987\u099f \u099f\u09be\u0987\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"MMMM d, y, EEEE"_s,
				"MMMM d, y"_s,
				"MMM d, y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u09aa\u09c1\u0982"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u099c\u09be\u09a8\u09c1\u09f1\u09be\u09b0\u09bf"_s,
				u"\u09ab\u09c7\u09ac\u09cd\u09b0\u09c1\u09f1\u09be\u09b0\u09bf"_s,
				u"\u09ae\u09be\u09b0\u09cd\u099a"_s,
				u"\u098f\u09aa\u09cd\u09b0\u09bf\u09b2"_s,
				u"\u09ae\u09c7"_s,
				u"\u099c\u09c1\u09a8"_s,
				u"\u099c\u09c1\u09b2\u09be\u0987"_s,
				u"\u0993\u0997\u09b7\u09cd\u099f"_s,
				u"\u09b8\u09c7\u09aa\u09cd\u099f\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
				u"\u0993\u0995\u09cd\u099f\u09cb\u09ac\u09b0"_s,
				u"\u09a8\u09ac\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
				u"\u09a1\u09bf\u09b8\u09c7\u09ae\u09cd\u09ac\u09b0"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u099c\u09be\u09a8\u09c1"_s,
				u"\u09ab\u09c7\u09ac\u09cd\u09b0\u09c1"_s,
				u"\u09ae\u09be\u09b0"_s,
				u"\u098f\u09aa\u09cd\u09b0\u09bf"_s,
				u"\u09ae\u09c7"_s,
				u"\u099c\u09c1\u09a8"_s,
				u"\u099c\u09c1\u09b2\u09be"_s,
				u"\u0986\u0997"_s,
				u"\u09b8\u09c7\u09aa\u09cd\u099f"_s,
				u"\u0993\u0995\u09cd\u099f\u09cb"_s,
				u"\u09a8\u09ad\u09c7"_s,
				u"\u09a1\u09bf\u09b8\u09c7"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u099f\u09be\u0987\u09ae"_s)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				""_s
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
			$of(metaValue_QuarterNames)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_mni::FormatData_mni() {
}

$Class* FormatData_mni::load$($String* name, bool initialize) {
	$loadClass(FormatData_mni, name, initialize, &_FormatData_mni_ClassInfo_, allocate$FormatData_mni);
	return class$;
}

$Class* FormatData_mni::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun