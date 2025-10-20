#include <sun/text/resources/cldr/ext/FormatData_pa.h>

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

$MethodInfo _FormatData_pa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_pa::*)()>(&FormatData_pa::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_pa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_pa",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pa_MethodInfo_
};

$Object* allocate$FormatData_pa($Class* clazz) {
	return $of($alloc(FormatData_pa));
}

void FormatData_pa::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_pa::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0a1c\u0a28\u0a35\u0a30\u0a40"_s,
		u"\u0a2b\u0a3c\u0a30\u0a35\u0a30\u0a40"_s,
		u"\u0a2e\u0a3e\u0a30\u0a1a"_s,
		u"\u0a05\u0a2a\u0a4d\u0a30\u0a48\u0a32"_s,
		u"\u0a2e\u0a08"_s,
		u"\u0a1c\u0a42\u0a28"_s,
		u"\u0a1c\u0a41\u0a32\u0a3e\u0a08"_s,
		u"\u0a05\u0a17\u0a38\u0a24"_s,
		u"\u0a38\u0a24\u0a70\u0a2c\u0a30"_s,
		u"\u0a05\u0a15\u0a24\u0a42\u0a2c\u0a30"_s,
		u"\u0a28\u0a35\u0a70\u0a2c\u0a30"_s,
		u"\u0a26\u0a38\u0a70\u0a2c\u0a30"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0a1c\u0a28"_s,
		u"\u0a2b\u0a3c\u0a30"_s,
		u"\u0a2e\u0a3e\u0a30\u0a1a"_s,
		u"\u0a05\u0a2a\u0a4d\u0a30\u0a48"_s,
		u"\u0a2e\u0a08"_s,
		u"\u0a1c\u0a42\u0a28"_s,
		u"\u0a1c\u0a41\u0a32\u0a3e"_s,
		u"\u0a05\u0a17"_s,
		u"\u0a38\u0a24\u0a70"_s,
		u"\u0a05\u0a15\u0a24\u0a42"_s,
		u"\u0a28\u0a35\u0a70"_s,
		u"\u0a26\u0a38\u0a70"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0a1c"_s,
		u"\u0a2b\u0a3c"_s,
		u"\u0a2e\u0a3e"_s,
		u"\u0a05"_s,
		u"\u0a2e"_s,
		u"\u0a1c\u0a42"_s,
		u"\u0a1c\u0a41"_s,
		u"\u0a05"_s,
		u"\u0a38"_s,
		u"\u0a05"_s,
		u"\u0a28"_s,
		u"\u0a26"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0a10\u0a24\u0a35\u0a3e\u0a30"_s,
		u"\u0a38\u0a4b\u0a2e\u0a35\u0a3e\u0a30"_s,
		u"\u0a2e\u0a70\u0a17\u0a32\u0a35\u0a3e\u0a30"_s,
		u"\u0a2c\u0a41\u0a71\u0a27\u0a35\u0a3e\u0a30"_s,
		u"\u0a35\u0a40\u0a30\u0a35\u0a3e\u0a30"_s,
		u"\u0a38\u0a3c\u0a41\u0a71\u0a15\u0a30\u0a35\u0a3e\u0a30"_s,
		u"\u0a38\u0a3c\u0a28\u0a3f\u0a71\u0a1a\u0a30\u0a35\u0a3e\u0a30"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0a10\u0a24"_s,
		u"\u0a38\u0a4b\u0a2e"_s,
		u"\u0a2e\u0a70\u0a17\u0a32"_s,
		u"\u0a2c\u0a41\u0a71\u0a27"_s,
		u"\u0a35\u0a40\u0a30"_s,
		u"\u0a38\u0a3c\u0a41\u0a71\u0a15\u0a30"_s,
		u"\u0a38\u0a3c\u0a28\u0a3f\u0a71\u0a1a\u0a30"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0a10"_s,
		u"\u0a38\u0a4b"_s,
		u"\u0a2e\u0a70"_s,
		u"\u0a2c\u0a41\u0a71"_s,
		u"\u0a35\u0a40"_s,
		u"\u0a38\u0a3c\u0a41\u0a71"_s,
		u"\u0a38\u0a3c"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0a2a\u0a39\u0a3f\u0a32\u0a40 \u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a40"_s,
		u"\u0a26\u0a42\u0a1c\u0a40 \u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a40"_s,
		u"\u0a24\u0a40\u0a1c\u0a40 \u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a40"_s,
		u"\u0a1a\u0a4c\u0a25\u0a40 \u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a40"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a401"_s,
		u"\u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a402"_s,
		u"\u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a403"_s,
		u"\u0a24\u0a3f\u0a2e\u0a3e\u0a39\u0a404"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0a2a\u0a42.\u0a26\u0a41."_s,
		u"\u0a2c\u0a3e.\u0a26\u0a41."_s,
		u"\u0a05\u0a71\u0a27\u0a40 \u0a30\u0a3e\u0a24"_s,
		""_s,
		u"\u0a38\u0a35\u0a47\u0a30\u0a47"_s,
		""_s,
		u"\u0a26\u0a41\u0a2a\u0a39\u0a3f\u0a30\u0a47"_s,
		""_s,
		u"\u0a38\u0a3c\u0a3e\u0a2e\u0a40\u0a02"_s,
		""_s,
		u"\u0a30\u0a3e\u0a24\u0a40\u0a02"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0a38."_s,
		u"\u0a38\u0a3c."_s,
		u"\u0a05\u0a71\u0a27\u0a40 \u0a30\u0a3e\u0a24"_s,
		""_s,
		u"\u0a38\u0a35\u0a47\u0a30\u0a47"_s,
		""_s,
		u"\u0a26\u0a41\u0a2a\u0a39\u0a3f\u0a30\u0a47"_s,
		""_s,
		u"\u0a38\u0a3c\u0a3e\u0a2e\u0a40\u0a02"_s,
		""_s,
		u"\u0a30\u0a3e\u0a24\u0a40\u0a02"_s,
		""_s
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
		u"\u0a08\u0a38\u0a35\u0a40 \u0a2a\u0a42\u0a30\u0a35"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_narrow_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0a08. \u0a2a\u0a42."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0a1a\u0a40\u0a28 \u0a26\u0a47 \u0a17\u0a23\u0a30\u0a3e\u0a1c \u0a24\u0a4b\u0a02 \u0a2a\u0a39\u0a3f\u0a32\u0a3e\u0a02"_s,
		u"\u0a2e\u0a3f\u0a70\u0a17"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		u"\u0a06\u0a30.\u0a13.\u0a38\u0a40 \u0a24\u0a4b\u0a02 \u0a2a\u0a39\u0a3f\u0a32\u0a3e\u0a02"_s,
		u"\u0a2e\u0a3f\u0a70\u0a17"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0a17\u0a30\u0a47\u0a17\u0a4b\u0a30\u0a40\u0a05\u0a28 \u0a15\u0a48\u0a32\u0a70\u0a21\u0a30"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0a38\u0a3e\u0a32"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0a07\u0a38\u0a32\u0a3e\u0a2e\u0a40 \u0a15\u0a48\u0a32\u0a70\u0a21\u0a30 (\u0a05\u0a2e \u0a05\u0a32-\u0a15\u0a41\u0a30\u0a3e)"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				","_s,
				u"\u061b"_s,
				u"\u066a"_s,
				u"\u06f0"_s,
				"#"_s,
				"-"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_narrow_Eras)
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
			$of(u"\u0a07\u0a38\u0a32\u0a3e\u0a2e\u0a40 \u0a15\u0a48\u0a32\u0a70\u0a21\u0a30 (\u0a38\u0a3e\u0a30\u0a28\u0a40\u0a2c\u0a71\u0a27, \u0a38\u0a2e\u0a3e\u0a1c\u0a3f\u0a15 \u0a2f\u0a41\u0a71\u0a17)"_s)
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
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"\u0a08.\u0a2a\u0a42."_s,
				u"\u0a38\u0a70\u0a28"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u0a2e\u0a3f\u0a06\u0a30\u0a40 \u0a35\u0a47\u0a32\u0a3e"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0a1c\u0a2a\u0a3e\u0a28\u0a40 \u0a15\u0a48\u0a32\u0a70\u0a21\u0a30"_s)
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
				u"\u0a08\u0a38\u0a35\u0a40 \u0a2a\u0a42\u0a30\u0a35"_s,
				u"\u0a08\u0a38\u0a35\u0a40 \u0a38\u0a70\u0a28"_s
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
			$of("guru.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0a66"_s,
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
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0a2e\u0a3f\u0a70\u0a1f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0a38\u0a70\u0a2e\u0a24"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0a2a\u0a42.\u0a26\u0a41./\u0a2c\u0a3e.\u0a26\u0a41."_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0a2e\u0a41\u0a39\u0a71\u0a30\u0a2e"_s,
				u"\u0a38\u0a2b\u0a30"_s,
				u"\u0a30\u0a2c\u0a40 \u02bb I"_s,
				u"\u0a30\u0a2c\u0a40 \u02bb II"_s,
				u"\u0a1c\u0a41\u0a2e\u0a3e\u0a26\u0a3e I"_s,
				u"\u0a1c\u0a41\u0a2e\u0a3e\u0a26\u0a3e II"_s,
				u"\u0a30\u0a1c\u0a2c"_s,
				u"\u0a38\u0a3c\u0a2c\u0a3e\u0a28"_s,
				u"\u0a30\u0a2e\u0a1c\u0a3c\u0a3e\u0a28"_s,
				u"\u0a38\u0a3c\u0a35\u0a3e\u0a32"_s,
				u"\u0a26\u0a42-\u0a05\u0a32-\u0a15\u0a40\u0a26\u0a3e\u0a39"_s,
				u"\u0a26\u0a42-\u0a05\u0a32-\u0a39\u0a3f\u0a1c\u0a4d\u0a39\u0a3e"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0a2e\u0a3f\u0a70\u0a17\u0a42\u0a13 \u0a15\u0a48\u0a32\u0a70\u0a21\u0a30"_s)
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
			$of(u"\u0a2e\u0a39\u0a40\u0a28\u0a3e"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0a38\u0a15\u0a3f\u0a70\u0a1f"_s)
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
			$of(u"\u0a07\u0a38\u0a32\u0a3e\u0a2e\u0a40 \u0a15\u0a48\u0a32\u0a70\u0a21\u0a30"_s)
		}),
		$$new($ObjectArray, {
			$of("guru.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:21:00-04:00;afternoon1:12:00-16:00;morning1:04:00-12:00;evening1:16:00-21:00"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
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
			$of(u"{0} \u0a35\u0a47\u0a32\u0a3e"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0a39\u0a1c\u0a3c\u0a3e\u0a30 other:0\' \'\u0a39\u0a1c\u0a3c\u0a3e\u0a30}"_s,
				u"{one:00\' \'\u0a39\u0a1c\u0a3c\u0a3e\u0a30 other:00\' \'\u0a39\u0a1c\u0a3c\u0a3e\u0a30}"_s,
				u"{one:0\' \'\u0a32\u0a71\u0a16 other:0\' \'\u0a32\u0a71\u0a16}"_s,
				u"{one:00\' \'\u0a32\u0a71\u0a16 other:00\' \'\u0a32\u0a71\u0a16}"_s,
				u"{one:0\' \'\u0a15\u0a30\u0a4b\u0a5c other:0\' \'\u0a15\u0a30\u0a4b\u0a5c}"_s,
				u"{one:00\' \'\u0a15\u0a30\u0a4b\u0a5c other:00\' \'\u0a15\u0a30\u0a4b\u0a5c}"_s,
				u"{one:0\' \'\u0a05\u0a30\u0a2c other:0\' \'\u0a05\u0a30\u0a2c}"_s,
				u"{one:00\' \'\u0a05\u0a30\u0a2c other:00\' \'\u0a05\u0a30\u0a2c}"_s,
				u"{one:0\' \'\u0a16\u0a30\u0a2c other:0\' \'\u0a16\u0a30\u0a2c}"_s,
				u"{one:00\' \'\u0a16\u0a30\u0a2c other:00\' \'\u0a16\u0a30\u0a2c}"_s,
				u"{one:0\' \'\u0a28\u0a40\u0a32 other:0\' \'\u0a28\u0a40\u0a32}"_s,
				u"{one:00\' \'\u0a28\u0a40\u0a32 other:00\' \'\u0a28\u0a40\u0a32}"_s
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
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0a07\u0a32\u0a3e\u0a15\u0a3e\u0a08 \u0a35\u0a47\u0a32\u0a3e"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
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
			$of($$new($StringArray, {
				u"\u0a08. \u0a2a\u0a42."_s,
				u"\u0a38\u0a70\u0a28"_s
			}))
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
			$of(u"\u0a39\u0a2b\u0a3c\u0a24\u0a47 \u0a26\u0a3e \u0a26\u0a3f\u0a28"_s)
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
			$of(u"\u0a39\u0a2b\u0a3c\u0a24\u0a3e"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{0} \u0a35\u0a3f\u0a16\u0a47 {1}"_s,
				u"{0} \u0a35\u0a3f\u0a16\u0a47 {1}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			}))
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
				u"{one:0\u00a0\u0a39\u0a1c\u0a3c\u0a3e\u0a30 other:0\u00a0\u0a39\u0a1c\u0a3c\u0a3e\u0a30}"_s,
				u"{one:00\u00a0\u0a39\u0a1c\u0a3c\u0a3e\u0a30 other:00\u00a0\u0a39\u0a1c\u0a3c\u0a3e\u0a30}"_s,
				u"{one:0\u00a0\u0a32\u0a71\u0a16 other:0\u00a0\u0a32\u0a71\u0a16}"_s,
				u"{one:00\u00a0\u0a32\u0a71\u0a16 other:00\u00a0\u0a32\u0a71\u0a16}"_s,
				u"{one:0\u00a0\u0a15\u0a30\u0a4b\u0a5c other:0\u00a0\u0a15\u0a30\u0a4b\u0a5c}"_s,
				u"{one:00\u00a0\u0a15\u0a30\u0a4b\u0a5c other:00\u00a0\u0a15\u0a30\u0a4b\u0a5c}"_s,
				u"{one:0\u00a0\u0a05\u0a30\u0a2c other:0\u00a0\u0a05\u0a30\u0a2c}"_s,
				u"{one:00\u00a0\u0a05\u0a30\u0a2c other:00\u00a0\u0a05\u0a30\u0a2c}"_s,
				u"{one:0\u00a0\u0a16\u0a30\u0a2c other:0\u00a0\u0a16\u0a30\u0a2c}"_s,
				u"{one:00\u00a0\u0a16\u0a30\u0a2c other:00\u00a0\u0a16\u0a30\u0a2c}"_s,
				u"{one:0\u00a0\u0a28\u0a40\u0a32 other:0\u00a0\u0a28\u0a40\u0a32}"_s,
				u"{one:00\u00a0\u0a28\u0a40\u0a32 other:00\u00a0\u0a28\u0a40\u0a32}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_narrow_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u0a2a\u0a4d\u0a30\u0a15\u0a3e\u0a38\u0a3c \u0a35\u0a47\u0a32\u0a3e"_s)
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
			$of("one:n = 0..1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0a18\u0a70\u0a1f\u0a3e"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0a2e\u0a41\u0a39\u0a71."_s,
				u"\u0a38\u0a2b."_s,
				u"\u0a30\u0a2c. I"_s,
				u"\u0a30\u0a2c. II"_s,
				u"\u0a1c\u0a41\u0a2e. I"_s,
				u"\u0a1c\u0a41\u0a2e. II"_s,
				u"\u0a30\u0a3e\u0a1c."_s,
				u"\u0a38\u0a3c\u0a3e."_s,
				u"\u0a30\u0a3e\u0a2e."_s,
				u"\u0a38\u0a3c\u0a05."_s,
				u"\u0a26\u0a42-\u0a05\u0a32-\u0a15\u0a40."_s,
				u"\u0a26\u0a42-\u0a05\u0a32-\u0a39\u0a3f."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0a2c\u0a4b\u0a27\u0a40 \u0a15\u0a48\u0a32\u0a70\u0a21\u0a30"_s)
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
				u"\u00a4\u00a0#,##0.00"_s
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

FormatData_pa::FormatData_pa() {
}

$Class* FormatData_pa::load$($String* name, bool initialize) {
	$loadClass(FormatData_pa, name, initialize, &_FormatData_pa_ClassInfo_, allocate$FormatData_pa);
	return class$;
}

$Class* FormatData_pa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun