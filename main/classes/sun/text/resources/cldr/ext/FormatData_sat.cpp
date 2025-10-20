#include <sun/text/resources/cldr/ext/FormatData_sat.h>

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

$MethodInfo _FormatData_sat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sat::*)()>(&FormatData_sat::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sat",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sat_MethodInfo_
};

$Object* allocate$FormatData_sat($Class* clazz) {
	return $of($alloc(FormatData_sat));
}

void FormatData_sat::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sat::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u1c61\u1c5f\u1c71\u1c63\u1c5f\u1c68\u1c64"_s,
		u"\u1c6f\u1c77\u1c5f\u1c68\u1c63\u1c5f\u1c68\u1c64"_s,
		u"\u1c62\u1c5f\u1c68\u1c6a"_s,
		u"\u1c5f\u1c6f\u1c68\u1c6e\u1c5e"_s,
		u"\u1c62\u1c6e"_s,
		u"\u1c61\u1c69\u1c71"_s,
		u"\u1c61\u1c69\u1c5e\u1c5f\u1c6d"_s,
		u"\u1c5f\u1c5c\u1c5f\u1c65\u1c5b"_s,
		u"\u1c65\u1c6e\u1c6f\u1c74\u1c6e\u1c62\u1c75\u1c5f\u1c68"_s,
		u"\u1c5a\u1c60\u1c74\u1c5a\u1c75\u1c5f\u1c68"_s,
		u"\u1c71\u1c5f\u1c63\u1c5f\u1c62\u1c75\u1c5f\u1c68"_s,
		u"\u1c6b\u1c64\u1c65\u1c5f\u1c62\u1c75\u1c5f\u1c68"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u1c61\u1c5f\u1c71"_s,
		u"\u1c6f\u1c77\u1c5f"_s,
		u"\u1c62\u1c5f\u1c68"_s,
		u"\u1c5f\u1c6f\u1c68"_s,
		u"\u1c62\u1c6e"_s,
		u"\u1c61\u1c69\u1c71"_s,
		u"\u1c61\u1c69\u1c5e"_s,
		u"\u1c5f\u1c5c\u1c5f"_s,
		u"\u1c65\u1c6e\u1c6f"_s,
		u"\u1c5a\u1c60\u1c74"_s,
		u"\u1c71\u1c5f\u1c63"_s,
		u"\u1c6b\u1c64\u1c65"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u1c61"_s,
		u"\u1c6f"_s,
		u"\u1c62"_s,
		u"\u1c5f"_s,
		u"\u1c62"_s,
		u"\u1c61"_s,
		u"\u1c61"_s,
		u"\u1c5f"_s,
		u"\u1c65"_s,
		u"\u1c5a"_s,
		u"\u1c71"_s,
		u"\u1c6b"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u1c65\u1c64\u1c78\u1c5c\u1c6e"_s,
		u"\u1c5a\u1c5b\u1c6e"_s,
		u"\u1c75\u1c5f\u1c5e\u1c6e"_s,
		u"\u1c65\u1c5f\u1c79\u1c5c\u1c69\u1c71"_s,
		u"\u1c65\u1c5f\u1c79\u1c68\u1c6b\u1c64"_s,
		u"\u1c61\u1c5f\u1c79\u1c68\u1c69\u1c62"_s,
		u"\u1c67\u1c69\u1c66\u1c69\u1c62"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u1c65\u1c64\u1c78"_s,
		u"\u1c5a\u1c5b"_s,
		u"\u1c75\u1c5f"_s,
		u"\u1c65\u1c5f\u1c79"_s,
		u"\u1c65\u1c5f\u1c79\u1c68"_s,
		u"\u1c61\u1c5f\u1c79"_s,
		u"\u1c67\u1c69"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u1c65"_s,
		u"\u1c5a"_s,
		u"\u1c75"_s,
		u"\u1c65"_s,
		u"\u1c65"_s,
		u"\u1c61"_s,
		u"\u1c67"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u1c51\u1c5f\u1c5c \u1c6f\u1c6e \u1c6a\u1c5f\u1c78\u1c6b\u1c5a\u1c60\u1c64\u1c6d\u1c5f\u1c79"_s,
		u"\u1c52\u1c5f\u1c5c \u1c6f\u1c6e \u1c6a\u1c5f\u1c78\u1c6b\u1c5a\u1c60\u1c64\u1c6d\u1c5f\u1c79"_s,
		u"\u1c53\u1c6d\u1c5f\u1c5c \u1c6f\u1c6e \u1c6a\u1c5f\u1c78\u1c6b\u1c5a\u1c60\u1c64\u1c6d\u1c5f\u1c79"_s,
		u"\u1c54\u1c5f\u1c5c \u1c6f\u1c6e \u1c6a\u1c5f\u1c78\u1c6b\u1c5a\u1c60\u1c64\u1c6d\u1c5f\u1c79"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u1c51"_s,
		u"\u1c52"_s,
		u"\u1c53"_s,
		u"\u1c54"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u1c65\u1c6e\u1c5b\u1c5f\u1c5c"_s,
		u"\u1c67\u1c64\u1c6b\u1c5f\u1c79"_s,
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
		u"\u1c65\u1c6e\u1c68\u1c62\u1c5f \u1c5e\u1c5f\u1c66\u1c5f"_s,
		u"\u1c64\u1c65\u1c63\u1c64"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
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
	$var($String, metaValue_calendarname_gregorian, u"\u1c5c\u1c68\u1c6e\u1c5c\u1c5a\u1c68\u1c64\u1c6d\u1c5f\u1c71 \u1c60\u1c5f\u1c5e\u1c6e\u1c71\u1c70\u1c5f\u1c68"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u1c65\u1c6e\u1c68\u1c62\u1c5f/\u1c75\u1c5a\u1c6a\u1c77\u1c5a\u1c5e\u1c68"_s)
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
			$of(u"\u1c61\u1c64\u1c6e\u1c62\u1c74\u1c64{0}"_s)
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
			$of(u"\u1c74\u1c5a\u1c74\u1c77\u1c5f"_s)
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
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u1c6e\u1c74\u1c6e\u1c71\u1c70\u1c5f\u1c68\u1c70 \u1c5a\u1c60\u1c5b\u1c5a"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("olck"_s)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u1c61\u1c64\u1c6e\u1c62\u1c74\u1c64"_s)
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
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u1c66\u1c5f\u1c6f\u1c5b\u1c5f \u1c68\u1c6e\u1c6d\u1c5f\u1c5c \u1c62\u1c5f\u1c66\u1c5f"_s)
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u1c74\u1c64\u1c6f\u1c64\u1c61"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u1c61\u1c69\u1c5c\u1c7d"_s)
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
			$of(u"\u1c65\u1c6e\u1c5b\u1c5f\u1c5c/\u1c5f\u1c79\u1c6d\u1c69\u1c75"_s)
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
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
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u1c6a\u1c5f\u1c78\u1c6b\u1c5a"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u1c74\u1c64\u1c61"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u1c66\u1c5f\u1c6f\u1c5b\u1c5f/\u1c6e\u1c62\u1c66\u1c5f"_s)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u1c6b\u1c64\u1c71\u1c75\u1c6e\u1c72\u1c5f \u1c5a\u1c60\u1c5b\u1c5a"_s)
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
			$of("one:n = 1;two:n = 2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u1c74\u1c5f\u1c72\u1c5f\u1c5d"_s)
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
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u1c5a\u1c60\u1c5b\u1c5a"_s)
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
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
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
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_sat::FormatData_sat() {
}

$Class* FormatData_sat::load$($String* name, bool initialize) {
	$loadClass(FormatData_sat, name, initialize, &_FormatData_sat_ClassInfo_, allocate$FormatData_sat);
	return class$;
}

$Class* FormatData_sat::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun