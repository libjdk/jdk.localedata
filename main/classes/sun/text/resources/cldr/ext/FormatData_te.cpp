#include <sun/text/resources/cldr/ext/FormatData_te.h>

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

$MethodInfo _FormatData_te_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_te::*)()>(&FormatData_te::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_te_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_te",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_te_MethodInfo_
};

$Object* allocate$FormatData_te($Class* clazz) {
	return $of($alloc(FormatData_te));
}

void FormatData_te::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_te::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0c1c\u0c28\u0c35\u0c30\u0c3f"_s,
		u"\u0c2b\u0c3f\u0c2c\u0c4d\u0c30\u0c35\u0c30\u0c3f"_s,
		u"\u0c2e\u0c3e\u0c30\u0c4d\u0c1a\u0c3f"_s,
		u"\u0c0f\u0c2a\u0c4d\u0c30\u0c3f\u0c32\u0c4d"_s,
		u"\u0c2e\u0c47"_s,
		u"\u0c1c\u0c42\u0c28\u0c4d"_s,
		u"\u0c1c\u0c41\u0c32\u0c48"_s,
		u"\u0c06\u0c17\u0c38\u0c4d\u0c1f\u0c41"_s,
		u"\u0c38\u0c46\u0c2a\u0c4d\u0c1f\u0c46\u0c02\u0c2c\u0c30\u0c4d"_s,
		u"\u0c05\u0c15\u0c4d\u0c1f\u0c4b\u0c2c\u0c30\u0c4d"_s,
		u"\u0c28\u0c35\u0c02\u0c2c\u0c30\u0c4d"_s,
		u"\u0c21\u0c3f\u0c38\u0c46\u0c02\u0c2c\u0c30\u0c4d"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0c1c\u0c28"_s,
		u"\u0c2b\u0c3f\u0c2c\u0c4d\u0c30"_s,
		u"\u0c2e\u0c3e\u0c30\u0c4d\u0c1a\u0c3f"_s,
		u"\u0c0f\u0c2a\u0c4d\u0c30\u0c3f"_s,
		u"\u0c2e\u0c47"_s,
		u"\u0c1c\u0c42\u0c28\u0c4d"_s,
		u"\u0c1c\u0c41\u0c32\u0c48"_s,
		u"\u0c06\u0c17"_s,
		u"\u0c38\u0c46\u0c2a\u0c4d\u0c1f\u0c46\u0c02"_s,
		u"\u0c05\u0c15\u0c4d\u0c1f\u0c4b"_s,
		u"\u0c28\u0c35\u0c02"_s,
		u"\u0c21\u0c3f\u0c38\u0c46\u0c02"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0c1c"_s,
		u"\u0c2b\u0c3f"_s,
		u"\u0c2e\u0c3e"_s,
		u"\u0c0f"_s,
		u"\u0c2e\u0c47"_s,
		u"\u0c1c\u0c42"_s,
		u"\u0c1c\u0c41"_s,
		u"\u0c06"_s,
		u"\u0c38\u0c46"_s,
		u"\u0c05"_s,
		u"\u0c28"_s,
		u"\u0c21\u0c3f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0c06\u0c26\u0c3f\u0c35\u0c3e\u0c30\u0c02"_s,
		u"\u0c38\u0c4b\u0c2e\u0c35\u0c3e\u0c30\u0c02"_s,
		u"\u0c2e\u0c02\u0c17\u0c33\u0c35\u0c3e\u0c30\u0c02"_s,
		u"\u0c2c\u0c41\u0c27\u0c35\u0c3e\u0c30\u0c02"_s,
		u"\u0c17\u0c41\u0c30\u0c41\u0c35\u0c3e\u0c30\u0c02"_s,
		u"\u0c36\u0c41\u0c15\u0c4d\u0c30\u0c35\u0c3e\u0c30\u0c02"_s,
		u"\u0c36\u0c28\u0c3f\u0c35\u0c3e\u0c30\u0c02"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0c06\u0c26\u0c3f"_s,
		u"\u0c38\u0c4b\u0c2e"_s,
		u"\u0c2e\u0c02\u0c17\u0c33"_s,
		u"\u0c2c\u0c41\u0c27"_s,
		u"\u0c17\u0c41\u0c30\u0c41"_s,
		u"\u0c36\u0c41\u0c15\u0c4d\u0c30"_s,
		u"\u0c36\u0c28\u0c3f"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0c06"_s,
		u"\u0c38\u0c4b"_s,
		u"\u0c2e"_s,
		u"\u0c2c\u0c41"_s,
		u"\u0c17\u0c41"_s,
		u"\u0c36\u0c41"_s,
		u"\u0c36"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1\u0c35 \u0c24\u0c4d\u0c30\u0c48\u0c2e\u0c3e\u0c38\u0c3f\u0c15\u0c02"_s,
		u"2\u0c35 \u0c24\u0c4d\u0c30\u0c48\u0c2e\u0c3e\u0c38\u0c3f\u0c15\u0c02"_s,
		u"3\u0c35 \u0c24\u0c4d\u0c30\u0c48\u0c2e\u0c3e\u0c38\u0c3f\u0c15\u0c02"_s,
		u"4\u0c35 \u0c24\u0c4d\u0c30\u0c48\u0c2e\u0c3e\u0c38\u0c3f\u0c15\u0c02"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0c24\u0c4d\u0c30\u0c481"_s,
		u"\u0c24\u0c4d\u0c30\u0c482"_s,
		u"\u0c24\u0c4d\u0c30\u0c483"_s,
		u"\u0c24\u0c4d\u0c30\u0c484"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0c05\u0c30\u0c4d\u0c27\u0c30\u0c3e\u0c24\u0c4d\u0c30\u0c3f"_s,
		""_s,
		u"\u0c09\u0c26\u0c2f\u0c02"_s,
		""_s,
		u"\u0c2e\u0c27\u0c4d\u0c2f\u0c3e\u0c39\u0c4d\u0c28\u0c02"_s,
		""_s,
		u"\u0c38\u0c3e\u0c2f\u0c02\u0c24\u0c4d\u0c30\u0c02"_s,
		""_s,
		u"\u0c30\u0c3e\u0c24\u0c4d\u0c30\u0c3f"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0c09"_s,
		u"\u0c38\u0c3e"_s,
		u"\u0c05\u0c30\u0c4d\u0c27\u0c30\u0c3e\u0c24\u0c4d\u0c30\u0c3f"_s,
		""_s,
		u"\u0c09\u0c26\u0c2f\u0c02"_s,
		""_s,
		u"\u0c2e\u0c27\u0c4d\u0c2f\u0c3e\u0c39\u0c4d\u0c28\u0c02"_s,
		""_s,
		u"\u0c38\u0c3e\u0c2f\u0c02\u0c24\u0c4d\u0c30\u0c02"_s,
		""_s,
		u"\u0c30\u0c3e\u0c24\u0c4d\u0c30\u0c3f"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0c15\u0c4d\u0c30\u0c40\u0c2a\u0c42"_s,
		u"\u0c15\u0c4d\u0c30\u0c40\u0c36"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
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
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd-MM-y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd-MM-y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"R.O.C. \u0c2a\u0c42\u0c30\u0c4d\u0c35\u0c02"_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0c17\u0c4d\u0c30\u0c47\u0c17\u0c4b\u0c30\u0c3f\u0c2f\u0c28\u0c4d \u0c15\u0c4d\u0c2f\u0c3e\u0c32\u0c46\u0c02\u0c21\u0c30\u0c4d"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0c38\u0c02\u0c35\u0c24\u0c4d\u0c38\u0c30\u0c02"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0c07\u0c38\u0c4d\u0c32\u0c3e\u0c2e\u0c3f\u0c15\u0c4d \u0c15\u0c4d\u0c2f\u0c3e\u0c32\u0c46\u0c02\u0c21\u0c30\u0c4d (\u0c09\u0c2e\u0c4d \u0c05\u0c32\u0c4d-\u0c16\u0c41\u0c30\u0c3e)"_s)
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
			$of(u"\u0c07\u0c38\u0c4d\u0c32\u0c3e\u0c2e\u0c3f\u0c15\u0c4d-\u0c38\u0c3f\u0c35\u0c3f\u0c32\u0c4d \u0c15\u0c4d\u0c2f\u0c3e\u0c32\u0c46\u0c02\u0c21\u0c30\u0c4d"_s)
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
			$of(u"{0} \u0c2a\u0c4d\u0c30\u0c3e\u0c2e\u0c3e\u0c23\u0c3f\u0c15 \u0c38\u0c2e\u0c2f\u0c02"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0c1c\u0c2a\u0c3e\u0c28\u0c40\u0c2f\u0c41\u0c32 \u0c15\u0c4d\u0c2f\u0c3e\u0c32\u0c46\u0c02\u0c21\u0c30\u0c4d"_s)
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
				u"\u0c15\u0c4d\u0c30\u0c40\u0c38\u0c4d\u0c24\u0c41 \u0c2a\u0c42\u0c30\u0c4d\u0c35\u0c02"_s,
				u"\u0c15\u0c4d\u0c30\u0c40\u0c38\u0c4d\u0c24\u0c41 \u0c36\u0c15\u0c02"_s
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
				u"{1} {0}\u0c15\u0c3f"_s,
				u"{1} {0}\u0c15\u0c3f"_s,
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
			$of(u"\u0c28\u0c3f\u0c2e\u0c3f\u0c37\u0c2e\u0c41"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0c2f\u0c41\u0c17\u0c02"_s)
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
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0c2e\u0c3f\u0c02\u0c17\u0c4d\u0c2f\u0c42 \u0c15\u0c4d\u0c2f\u0c3e\u0c32\u0c46\u0c02\u0c21\u0c30\u0c4d"_s)
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
			$of(u"\u0c28\u0c46\u0c32"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0c38\u0c46\u0c15\u0c28\u0c41"_s)
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
			$of(u"\u0c07\u0c38\u0c4d\u0c32\u0c3e\u0c2e\u0c3f\u0c15\u0c4d \u0c15\u0c4d\u0c2f\u0c3e\u0c32\u0c46\u0c02\u0c21\u0c30\u0c4d"_s)
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
			$of(u"{0} \u0c38\u0c2e\u0c2f\u0c02"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0c35\u0c47\u0c2f\u0c3f other:0\' \'\u0c35\u0c47\u0c32\u0c41}"_s,
				u"{one:00\' \'\u0c35\u0c47\u0c32\u0c41 other:00\' \'\u0c35\u0c47\u0c32\u0c41}"_s,
				u"{one:000\' \'\u0c35\u0c47\u0c32\u0c41 other:000\' \'\u0c35\u0c47\u0c32\u0c41}"_s,
				u"{one:0\' \'\u0c2e\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d other:0\' \'\u0c2e\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:00\' \'\u0c2e\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41 other:00\' \'\u0c2e\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:000\' \'\u0c2e\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41 other:000\' \'\u0c2e\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:0\' \'\u0c2c\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d other:0\' \'\u0c2c\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:00\' \'\u0c2c\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41 other:00\' \'\u0c2c\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:000\' \'\u0c2c\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41 other:000\' \'\u0c2c\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:0\' \'\u0c1f\u0c4d\u0c30\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d other:0\' \'\u0c1f\u0c4d\u0c30\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:00\' \'\u0c1f\u0c4d\u0c30\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41 other:00\' \'\u0c1f\u0c4d\u0c30\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s,
				u"{one:000\' \'\u0c1f\u0c4d\u0c30\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41 other:000\' \'\u0c1f\u0c4d\u0c30\u0c3f\u0c32\u0c3f\u0c2f\u0c28\u0c4d\u0c32\u0c41}"_s
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
			$of(u"\u0c38\u0c2e\u0c2f \u0c2e\u0c02\u0c21\u0c32\u0c3f"_s)
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
			$of("telu.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
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
			$of(u"\u0c35\u0c3e\u0c30\u0c02\u0c32\u0c4b \u0c30\u0c4b\u0c1c\u0c41"_s)
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
			$of("telu.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0c66"_s,
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
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0c35\u0c3e\u0c30\u0c2e\u0c41"_s)
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
				u"{one:0\u0c35\u0c47 other:0\u0c35\u0c47}"_s,
				u"{one:00\u0c35\u0c47 other:00\u0c35\u0c47}"_s,
				u"{one:000\u0c35\u0c47 other:000\u0c35\u0c47}"_s,
				u"{one:0\u0c2e\u0c3f other:0\u0c2e\u0c3f}"_s,
				u"{one:00\u0c2e\u0c3f other:00\u0c2e\u0c3f}"_s,
				u"{one:000\u0c2e\u0c3f other:000\u0c2e\u0c3f}"_s,
				u"{one:0\u0c2c\u0c3f other:0\u0c2c\u0c3f}"_s,
				u"{one:00\u0c2c\u0c3f other:00\u0c2c\u0c3f}"_s,
				u"{one:000\u0c2c\u0c3f other:000\u0c2c\u0c3f}"_s,
				u"{one:0\u0c1f\u0c4d\u0c30\u0c3f other:0\u0c1f\u0c4d\u0c30\u0c3f}"_s,
				u"{one:00\u0c1f\u0c4d\u0c30\u0c3f other:00\u0c1f\u0c4d\u0c30\u0c3f}"_s,
				u"{one:000\u0c1f\u0c4d\u0c30\u0c3f other:000\u0c1f\u0c4d\u0c30\u0c3f}"_s
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
			$of(u"{0} \u0c2a\u0c17\u0c1f\u0c3f \u0c35\u0c46\u0c32\u0c41\u0c24\u0c41\u0c30\u0c41 \u0c38\u0c2e\u0c2f\u0c02"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"d, MMMM y, EEEE"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
				"dd-MM-yy"_s
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
			$of(u"\u0c17\u0c02\u0c1f"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0c2e\u0c41\u0c39."_s,
				u"\u0c38\u0c2b."_s,
				u"\u0c30. I"_s,
				u"\u0c30. II"_s,
				u"\u0c1c\u0c41\u0c2e. I"_s,
				u"\u0c1c\u0c41\u0c2e. II"_s,
				u"\u0c30\u0c1c."_s,
				u"\u0c37\u0c2c\u0c3e."_s,
				u"\u0c30\u0c02\u0c1c\u0c3e."_s,
				u"\u0c37\u0c35\u0c4d\u0c35\u0c3e."_s,
				u"\u0c27\u0c41\u0c32\u0c4d-\u0c15\u0c3f."_s,
				u"\u0c27\u0c41\u0c32\u0c4d-\u0c39\u0c3f."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0c2c\u0c41\u0c26\u0c4d\u0c27\u0c41\u0c32 \u0c15\u0c4d\u0c2f\u0c3e\u0c32\u0c46\u0c02\u0c21\u0c30\u0c4d\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##,##0.00"_s,
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

FormatData_te::FormatData_te() {
}

$Class* FormatData_te::load$($String* name, bool initialize) {
	$loadClass(FormatData_te, name, initialize, &_FormatData_te_ClassInfo_, allocate$FormatData_te);
	return class$;
}

$Class* FormatData_te::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun