#include <sun/text/resources/cldr/ext/FormatData_my.h>

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

$MethodInfo _FormatData_my_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_my::*)()>(&FormatData_my::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_my_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_my",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_my_MethodInfo_
};

$Object* allocate$FormatData_my($Class* clazz) {
	return $of($alloc(FormatData_my));
}

void FormatData_my::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_my::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u1007\u1014\u103a\u1014\u101d\u102b\u101b\u102e"_s,
		u"\u1016\u1031\u1016\u1031\u102c\u103a\u101d\u102b\u101b\u102e"_s,
		u"\u1019\u1010\u103a"_s,
		u"\u1027\u1015\u103c\u102e"_s,
		u"\u1019\u1031"_s,
		u"\u1007\u103d\u1014\u103a"_s,
		u"\u1007\u1030\u101c\u102d\u102f\u1004\u103a"_s,
		u"\u1029\u1002\u102f\u1010\u103a"_s,
		u"\u1005\u1000\u103a\u1010\u1004\u103a\u1018\u102c"_s,
		u"\u1021\u1031\u102c\u1000\u103a\u1010\u102d\u102f\u1018\u102c"_s,
		u"\u1014\u102d\u102f\u101d\u1004\u103a\u1018\u102c"_s,
		u"\u1012\u102e\u1007\u1004\u103a\u1018\u102c"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u1007\u1014\u103a"_s,
		u"\u1016\u1031"_s,
		u"\u1019\u1010\u103a"_s,
		u"\u1027"_s,
		u"\u1019\u1031"_s,
		u"\u1007\u103d\u1014\u103a"_s,
		u"\u1007\u1030"_s,
		u"\u1029"_s,
		u"\u1005\u1000\u103a"_s,
		u"\u1021\u1031\u102c\u1000\u103a"_s,
		u"\u1014\u102d\u102f"_s,
		u"\u1012\u102e"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u1007"_s,
		u"\u1016"_s,
		u"\u1019"_s,
		u"\u1027"_s,
		u"\u1019"_s,
		u"\u1007"_s,
		u"\u1007"_s,
		u"\u1029"_s,
		u"\u1005"_s,
		u"\u1021"_s,
		u"\u1014"_s,
		u"\u1012"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u1010\u1014\u1004\u103a\u1039\u1002\u1014\u103d\u1031"_s,
		u"\u1010\u1014\u1004\u103a\u1039\u101c\u102c"_s,
		u"\u1021\u1004\u103a\u1039\u1002\u102b"_s,
		u"\u1017\u102f\u1012\u1039\u1013\u101f\u1030\u1038"_s,
		u"\u1000\u103c\u102c\u101e\u1015\u1010\u1031\u1038"_s,
		u"\u101e\u1031\u102c\u1000\u103c\u102c"_s,
		u"\u1005\u1014\u1031"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u1010"_s,
		u"\u1010"_s,
		u"\u1021"_s,
		u"\u1017"_s,
		u"\u1000"_s,
		u"\u101e"_s,
		u"\u1005"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u1015\u1011\u1019 \u101e\u102f\u1036\u1038\u101c\u1015\u1010\u103a"_s,
		u"\u1012\u102f\u1010\u102d\u101a \u101e\u102f\u1036\u1038\u101c\u1015\u1010\u103a"_s,
		u"\u1010\u1010\u102d\u101a \u101e\u102f\u1036\u1038\u101c\u1015\u1010\u103a"_s,
		u"\u1005\u1010\u102f\u1010\u1039\u1011 \u101e\u102f\u1036\u1038\u101c\u1015\u1010\u103a"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u1015"_s,
		u"\u1012\u102f"_s,
		u"\u1010"_s,
		u"\u1005"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u1014\u1036\u1014\u1000\u103a"_s,
		u"\u100a\u1014\u1031"_s,
		u"\u101e\u1014\u103a\u1038\u1001\u1031\u102b\u1004\u103a\u101a\u1036"_s,
		u"\u1019\u103d\u1014\u103a\u1038\u1010\u100a\u1037\u103a"_s,
		u"\u1014\u1036\u1014\u1000\u103a"_s,
		""_s,
		u"\u1014\u1031\u1037\u101c\u101a\u103a"_s,
		""_s,
		u"\u100a\u1014\u1031"_s,
		""_s,
		u"\u100a"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u1018\u102e\u1005\u102e"_s,
		u"\u1021\u1012\u1031\u102e"_s
	}));
	$var($StringArray, metaValue_java_time_TimePatterns, $new($StringArray, {
		"zzzz HH:mm:ss"_s,
		"z HH:mm:ss"_s,
		"B HH:mm:ss"_s,
		"B H:mm"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"zzzz HH:mm:ss"_s,
		"z HH:mm:ss"_s,
		"a HH:mm:ss"_s,
		"a H:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE G dd MMMM y"_s,
		"G dd MMMM y"_s,
		"G d MMM y"_s,
		"GGGGG dd-MM-yy"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE GGGG dd MMMM y"_s,
		"GGGG dd MMMM y"_s,
		"GGGG d MMM y"_s,
		"G dd-MM-yy"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u1014\u102d\u102f\u1004\u103a\u1004\u1036\u1010\u1000\u102c\u101e\u102f\u1036\u1038 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u1014\u103e\u1005\u103a"_s)
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
			$of(metaValue_QuarterNames)
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("mymr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				u"\u104a"_s,
				"%"_s,
				u"\u1040"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u1002\u100f\u1014\u103a\u1038\u1019\u101f\u102f\u1010\u103a\u101e\u1031\u102c"_s,
				""_s,
				""_s
			}))
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
			$of(u"{0} \u1005\u1036\u1010\u1031\u102c\u103a\u1001\u103b\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("mymr"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u1002\u103b\u1015\u1014\u103a \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u1001\u101b\u1005\u103a\u1010\u1031\u102c\u103a \u1019\u1015\u1031\u102b\u103a\u1019\u102e\u1014\u103e\u1005\u103a"_s,
				u"\u1001\u101b\u1005\u103a\u1014\u103e\u1005\u103a"_s
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
				u"\u1002\u100f\u1014\u103a\u1038\u1019\u101f\u102f\u1010\u103a\u101e\u1031\u102c"_s,
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
			$of(u"\u1019\u102d\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u1001\u1031\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u1014\u1036\u1014\u1000\u103a/\u100a\u1014\u1031"_s)
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
			$of("java.time.roc.TimePatterns"_s),
			$of(metaValue_java_time_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u1019\u1004\u103a\u1002\u102f\u1021\u102d\u102f \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
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
			$of("field.month"_s),
			$of(u"\u101c"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u1005\u1000\u1039\u1000\u1014\u1037\u103a"_s)
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
			$of("calendarname.islamic"_s),
			$of(u"\u1021\u1005\u1039\u1005\u101c\u102c\u1019\u103a \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:19:00-24:00;afternoon1:12:00-16:00;morning1:00:00-12:00;evening1:16:00-19:00"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.TimePatterns"_s),
			$of(metaValue_java_time_TimePatterns)
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
			$of(u"{0} \u1021\u1001\u103b\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\u1011\u1031\u102c\u1004\u103a}"_s,
				u"{other:0\u101e\u1031\u102c\u1004\u103a\u1038}"_s,
				u"{other:0\u101e\u102d\u1014\u103a\u1038}"_s,
				u"{other:0\u101e\u1014\u103a\u1038}"_s,
				u"{other:0\u1000\u102f\u100b\u1031}"_s,
				u"{other:00\u1000\u102f\u100b\u1031}"_s,
				u"{other:\u1000\u102f\u100b\u1031000}"_s,
				u"{other:\u1000\u102f\u100b\u10310000}"_s,
				u"{other:\u1000\u102f\u100b\u10310\u101e\u1031\u102c\u1004\u103a\u1038}"_s,
				u"{other:\u1000\u102f\u100b\u10310\u101e\u102d\u1014\u103a\u1038}"_s,
				u"{other:\u1000\u102f\u100b\u10310\u101e\u1014\u103a\u1038}"_s,
				u"{other:0\u1000\u1031\u102c\u100b\u102d}"_s
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.TimePatterns"_s),
			$of(metaValue_java_time_TimePatterns)
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
			$of(u"\u1007\u102f\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
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
			$of(u"\u1014\u1031\u1037"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of("mymr.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				""_s
			}))
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.TimePatterns"_s),
			$of(metaValue_java_time_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u1015\u1010\u103a"_s)
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
				u"{other:0\u1011\u1031\u102c\u1004\u103a}"_s,
				u"{other:0\u101e\u1031\u102c\u1004\u103a\u1038}"_s,
				u"{other:0\u101e\u102d\u1014\u103a\u1038}"_s,
				u"{other:0\u101e\u1014\u103a\u1038}"_s,
				u"{other:0\u1000\u102f\u100b\u1031}"_s,
				u"{other:00\u1000\u102f\u100b\u1031}"_s,
				u"{other:\u1000\u102f\u100b\u1031000}"_s,
				u"{other:\u1000\u102f\u100b\u10310\u1011}"_s,
				u"{other:\u1000\u102f\u100b\u10310\u101e}"_s,
				u"{other:\u100b\u10310\u101e\u102d\u1014\u103a\u1038}"_s,
				u"{other:\u100b\u10310\u101e\u1014\u103a\u1038}"_s,
				u"{other:0\u1000\u1031\u102c\u100b\u102d}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u1014\u103d\u1031\u101b\u102c\u101e\u102e \u1005\u1036\u1010\u1031\u102c\u103a\u1001\u103b\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y\u104a MMMM d\u104a EEEE"_s,
				u"y\u104a d MMMM"_s,
				u"y\u104a MMM d"_s,
				"dd-MM-yy"_s
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u1014\u102c\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u1017\u102f\u1012\u1039\u1013 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.TimePatterns"_s),
			$of(metaValue_java_time_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				u"\u00a4\u00a0#,##0.00"_s
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

FormatData_my::FormatData_my() {
}

$Class* FormatData_my::load$($String* name, bool initialize) {
	$loadClass(FormatData_my, name, initialize, &_FormatData_my_ClassInfo_, allocate$FormatData_my);
	return class$;
}

$Class* FormatData_my::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun