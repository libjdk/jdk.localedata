#include <sun/text/resources/cldr/ext/FormatData_gu.h>

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

$MethodInfo _FormatData_gu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_gu::*)()>(&FormatData_gu::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_gu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_gu",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_gu_MethodInfo_
};

$Object* allocate$FormatData_gu($Class* clazz) {
	return $of($alloc(FormatData_gu));
}

void FormatData_gu::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_gu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0a9c\u0abe\u0aa8\u0acd\u0aaf\u0ac1\u0a86\u0ab0\u0ac0"_s,
		u"\u0aab\u0ac7\u0aac\u0acd\u0ab0\u0ac1\u0a86\u0ab0\u0ac0"_s,
		u"\u0aae\u0abe\u0ab0\u0acd\u0a9a"_s,
		u"\u0a8f\u0aaa\u0acd\u0ab0\u0abf\u0ab2"_s,
		u"\u0aae\u0ac7"_s,
		u"\u0a9c\u0ac2\u0aa8"_s,
		u"\u0a9c\u0ac1\u0ab2\u0abe\u0a88"_s,
		u"\u0a91\u0a97\u0ab8\u0acd\u0a9f"_s,
		u"\u0ab8\u0aaa\u0acd\u0a9f\u0ac7\u0aae\u0acd\u0aac\u0ab0"_s,
		u"\u0a91\u0a95\u0acd\u0a9f\u0acb\u0aac\u0ab0"_s,
		u"\u0aa8\u0ab5\u0ac7\u0aae\u0acd\u0aac\u0ab0"_s,
		u"\u0aa1\u0abf\u0ab8\u0ac7\u0aae\u0acd\u0aac\u0ab0"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0a9c\u0abe\u0aa8\u0acd\u0aaf\u0ac1"_s,
		u"\u0aab\u0ac7\u0aac\u0acd\u0ab0\u0ac1"_s,
		u"\u0aae\u0abe\u0ab0\u0acd\u0a9a"_s,
		u"\u0a8f\u0aaa\u0acd\u0ab0\u0abf\u0ab2"_s,
		u"\u0aae\u0ac7"_s,
		u"\u0a9c\u0ac2\u0aa8"_s,
		u"\u0a9c\u0ac1\u0ab2\u0abe\u0a88"_s,
		u"\u0a91\u0a97\u0ab8\u0acd\u0a9f"_s,
		u"\u0ab8\u0aaa\u0acd\u0a9f\u0ac7"_s,
		u"\u0a91\u0a95\u0acd\u0a9f\u0acb"_s,
		u"\u0aa8\u0ab5\u0ac7"_s,
		u"\u0aa1\u0abf\u0ab8\u0ac7"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0a9c\u0abe"_s,
		u"\u0aab\u0ac7"_s,
		u"\u0aae\u0abe"_s,
		u"\u0a8f"_s,
		u"\u0aae\u0ac7"_s,
		u"\u0a9c\u0ac2"_s,
		u"\u0a9c\u0ac1"_s,
		u"\u0a91"_s,
		u"\u0ab8"_s,
		u"\u0a91"_s,
		u"\u0aa8"_s,
		u"\u0aa1\u0abf"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0ab0\u0ab5\u0abf\u0ab5\u0abe\u0ab0"_s,
		u"\u0ab8\u0acb\u0aae\u0ab5\u0abe\u0ab0"_s,
		u"\u0aae\u0a82\u0a97\u0ab3\u0ab5\u0abe\u0ab0"_s,
		u"\u0aac\u0ac1\u0aa7\u0ab5\u0abe\u0ab0"_s,
		u"\u0a97\u0ac1\u0ab0\u0ac1\u0ab5\u0abe\u0ab0"_s,
		u"\u0ab6\u0ac1\u0a95\u0acd\u0ab0\u0ab5\u0abe\u0ab0"_s,
		u"\u0ab6\u0aa8\u0abf\u0ab5\u0abe\u0ab0"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0ab0\u0ab5\u0abf"_s,
		u"\u0ab8\u0acb\u0aae"_s,
		u"\u0aae\u0a82\u0a97\u0ab3"_s,
		u"\u0aac\u0ac1\u0aa7"_s,
		u"\u0a97\u0ac1\u0ab0\u0ac1"_s,
		u"\u0ab6\u0ac1\u0a95\u0acd\u0ab0"_s,
		u"\u0ab6\u0aa8\u0abf"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0ab0"_s,
		u"\u0ab8\u0acb"_s,
		u"\u0aae\u0a82"_s,
		u"\u0aac\u0ac1"_s,
		u"\u0a97\u0ac1"_s,
		u"\u0ab6\u0ac1"_s,
		u"\u0ab6"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1\u0ab2\u0acb \u0aa4\u0acd\u0ab0\u0abf\u0aae\u0abe\u0ab8"_s,
		u"2\u0a9c\u0acb \u0aa4\u0acd\u0ab0\u0abf\u0aae\u0abe\u0ab8"_s,
		u"3\u0a9c\u0acb \u0aa4\u0acd\u0ab0\u0abf\u0aae\u0abe\u0ab8"_s,
		u"4\u0aa5\u0acb \u0aa4\u0acd\u0ab0\u0abf\u0aae\u0abe\u0ab8"_s
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0aae\u0aa7\u0acd\u0aaf\u0ab0\u0abe\u0aa4\u0acd\u0ab0\u0abf"_s,
		""_s,
		u"\u0ab8\u0ab5\u0abe\u0ab0\u0ac7"_s,
		""_s,
		u"\u0aac\u0aaa\u0acb\u0ab0\u0ac7"_s,
		""_s,
		u"\u0ab8\u0abe\u0a82\u0a9c\u0ac7"_s,
		""_s,
		u"\u0ab0\u0abe\u0aa4\u0acd\u0ab0\u0ac7"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0aae.\u0ab0\u0abe\u0aa4\u0acd\u0ab0\u0abf"_s,
		""_s,
		u"\u0ab8\u0ab5\u0abe\u0ab0\u0ac7"_s,
		""_s,
		u"\u0aac\u0aaa\u0acb\u0ab0\u0ac7"_s,
		""_s,
		u"\u0ab8\u0abe\u0a82\u0a9c\u0ac7"_s,
		""_s,
		u"\u0ab0\u0abe\u0aa4\u0acd\u0ab0\u0ac7"_s,
		""_s
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
		"EEEE, d MMMM, G y"_s,
		"d MMMM, G y"_s,
		"d MMM, G y"_s,
		"d-MM- GGGGG y"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, GGGG y"_s,
		"d MMMM, GGGG y"_s,
		"d MMM, GGGG y"_s,
		"d-MM- G y"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0a86\u0ab0.\u0a93.\u0ab8\u0ac0. \u0aaa\u0ab9\u0ac7\u0ab2\u0abe\u0a82"_s,
		u"\u0a86\u0ab0.\u0a93.\u0ab8\u0ac0."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0a97\u0acd\u0ab0\u0ac7\u0a97\u0acb\u0ab0\u0abf\u0a85\u0aa8 \u0a95\u0ac7\u0ab2\u0ac7\u0aa8\u0acd\u0aa1\u0ab0"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0ab5\u0ab0\u0acd\u0ab7"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0a87\u0ab8\u0acd\u0ab2\u0abe\u0aae\u0abf\u0a95 \u0a95\u0ac7\u0ab2\u0ac7\u0aa8\u0acd\u0aa1\u0ab0 (\u0a89\u0aae\u0aae \u0a85\u0ab2-\u0a95\u0ac1\u0ab0\u0abe)"_s)
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
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of(u"\u0a87\u0ab8\u0acd\u0ab2\u0abe\u0aae\u0abf\u0a95-\u0aa8\u0abe\u0a97\u0ab0\u0abf\u0a95 \u0a95\u0ac7\u0ab2\u0ac7\u0aa8\u0acd\u0aa1\u0ab0"_s)
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
				u"\u0a87 \u0ab8 \u0aaa\u0ac1"_s,
				u"\u0a87\u0ab8"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u0aae\u0abe\u0aa8\u0a95 \u0ab8\u0aae\u0aaf"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0a9c\u0abe\u0aaa\u0abe\u0aa8\u0ac0\u0a9d \u0a95\u0ac7\u0ab2\u0ac7\u0aa8\u0acd\u0aa1\u0ab0"_s)
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
				u"\u0a88\u0ab8\u0ab5\u0ac0\u0ab8\u0aa8 \u0aaa\u0ac2\u0ab0\u0acd\u0ab5\u0ac7"_s,
				u"\u0a87\u0ab8\u0ab5\u0ac0\u0ab8\u0aa8"_s
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
				u"{1} \u0a8f {0} \u0ab5\u0abe\u0a97\u0acd\u0aaf\u0ac7"_s,
				u"{1} \u0a8f {0} \u0ab5\u0abe\u0a97\u0acd\u0aaf\u0ac7"_s,
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
			$of(u"\u0aae\u0abf\u0aa8\u0abf\u0a9f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0aaf\u0ac1\u0a97"_s)
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
				u"\u0aae\u0ac1\u0ab9\u0ab0\u0acd\u0ab0\u0aae"_s,
				u"\u0ab8\u0aab\u0ab0"_s,
				u"\u0ab0\u0abe\u0aac\u0ac0\u02bb I"_s,
				u"\u0ab0\u0abe\u0aac\u0ac0\u02bb II"_s,
				u"\u0a9c\u0ac1\u0aae\u0abe\u0aa6\u0abe I"_s,
				u"\u0a9c\u0ac1\u0aae\u0abe\u0aa6\u0abe II"_s,
				u"\u0ab0\u0a9c\u0aac"_s,
				u"\u0ab6\u0abe\u02bb\u0aac\u0abe\u0aa8"_s,
				u"\u0ab0\u0aae\u0aa6\u0abe\u0aa8"_s,
				u"\u0ab6\u0abe\u0ab5\u0acd\u0ab5\u0ab2"_s,
				u"\u0aa7\u0ac1\u02bb\u0ab2-\u0a95\u0acd\u0ab5\u0ac0\u02bb\u0aa1\u0abe\u0ab9"_s,
				u"\u0aa7\u0ac1\u02bb\u0ab2-\u0ab9\u0abf\u0a9c\u0acd\u0a9c\u0abe\u0ab9"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("arab.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a\u061c"_s,
				u"\u0660"_s,
				"#"_s,
				u"\u061c-"_s,
				u"\u0627\u0633"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0aae\u0abf\u0a82\u0a97\u0ac1\u0a93 \u0a95\u0ac7\u0ab2\u0ac7\u0aa8\u0acd\u0aa1\u0ab0"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0aae\u0ab9\u0abf\u0aa8\u0acb"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0ab8\u0ac7\u0a95\u0aa8\u0acd\u0aa1"_s)
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
			$of(u"\u0a87\u0ab8\u0acd\u0ab2\u0abe\u0aae\u0abf\u0a95 \u0a95\u0ac7\u0ab2\u0ac7\u0aa8\u0acd\u0aa1\u0ab0"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:20:00-04:00;afternoon1:12:00-16:00;morning1:04:00-12:00;evening1:16:00-20:00"_s)
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
			$of(u"{0} \u0ab8\u0aae\u0aaf"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0ab9\u0a9c\u0abe\u0ab0 other:0\' \'\u0ab9\u0a9c\u0abe\u0ab0}"_s,
				u"{one:00\' \'\u0ab9\u0a9c\u0abe\u0ab0 other:00\' \'\u0ab9\u0a9c\u0abe\u0ab0}"_s,
				u"{one:0\' \'\u0ab2\u0abe\u0a96 other:0\' \'\u0ab2\u0abe\u0a96}"_s,
				u"{one:00\' \'\u0ab2\u0abe\u0a96 other:00\' \'\u0ab2\u0abe\u0a96}"_s,
				u"{one:0\' \'\u0a95\u0ab0\u0acb\u0aa1 other:0\' \'\u0a95\u0ab0\u0acb\u0aa1}"_s,
				u"{one:00\' \'\u0a95\u0ab0\u0acb\u0aa1 other:00\' \'\u0a95\u0ab0\u0acb\u0aa1}"_s,
				u"{one:0\' \'\u0a85\u0aac\u0a9c other:0\' \'\u0a85\u0aac\u0a9c}"_s,
				u"{one:00\' \'\u0a85\u0aac\u0a9c other:00\' \'\u0a85\u0aac\u0a9c}"_s,
				u"{one:0\' \'\u0aa8\u0abf\u0a96\u0ab0\u0acd\u0ab5 other:0\' \'\u0aa8\u0abf\u0a96\u0ab0\u0acd\u0ab5}"_s,
				u"{one:0\' \'\u0aae\u0ab9\u0abe\u0aaa\u0aa6\u0acd\u0aae other:0\' \'\u0aae\u0ab9\u0abe\u0aaa\u0aa6\u0acd\u0aae}"_s,
				u"{one:0\' \'\u0ab6\u0a82\u0a95\u0ac1 other:0\' \'\u0ab6\u0a82\u0a95\u0ac1}"_s,
				u"{one:0\' \'\u0a9c\u0ab2\u0aa7\u0abf other:0\' \'\u0a9c\u0ab2\u0aa7\u0abf}"_s
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
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of("gujr.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
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
			$of(u"\u0ab8\u0aae\u0aaf \u0a9d\u0acb\u0aa8"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("arab.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
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
			$of($$new($StringArray, {
				u"\u0a88.\u0ab8.\u0aaa\u0ac2\u0ab0\u0acd\u0ab5\u0ac7"_s,
				u"\u0a88.\u0ab8."_s
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
			$of(u"\u0a85\u0aa0\u0ab5\u0abe\u0aa1\u0abf\u0aaf\u0abe\u0aa8\u0acb \u0aa6\u0abf\u0ab5\u0ab8"_s)
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
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of(u"\u0a85\u0aa0\u0ab5\u0abe\u0aa1\u0abf\u0aaf\u0ac1\u0a82"_s)
		}),
		$$new($ObjectArray, {
			$of("gujr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ae6"_s,
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
				u"{one:0\u00a0\u0ab9\u0a9c\u0abe\u0ab0 other:0\u00a0\u0ab9\u0a9c\u0abe\u0ab0}"_s,
				u"{one:00\u00a0\u0ab9\u0a9c\u0abe\u0ab0 other:00\u00a0\u0ab9\u0a9c\u0abe\u0ab0}"_s,
				u"{one:0\u00a0\u0ab2\u0abe\u0a96 other:0\u00a0\u0ab2\u0abe\u0a96}"_s,
				u"{one:00\u00a0\u0ab2\u0abe\u0a96 other:00\u00a0\u0ab2\u0abe\u0a96}"_s,
				u"{one:0\u00a0\u0a95\u0ab0\u0acb\u0aa1 other:0\u00a0\u0a95\u0ab0\u0acb\u0aa1}"_s,
				u"{one:00\u00a0\u0a95\u0ab0\u0acb\u0aa1 other:00\u00a0\u0a95\u0ab0\u0acb\u0aa1}"_s,
				u"{one:0\u00a0\u0a85\u0aac\u0a9c other:0\u00a0\u0a85\u0aac\u0a9c}"_s,
				u"{one:00\u00a0\u0a85\u0aac\u0a9c other:00\u00a0\u0a85\u0aac\u0a9c}"_s,
				u"{one:0\u00a0\u0aa8\u0abf\u0a96\u0ab0\u0acd\u0ab5 other:0\u00a0\u0aa8\u0abf\u0a96\u0ab0\u0acd\u0ab5}"_s,
				u"{one:0\u00a0\u0aae\u0ab9\u0abe\u0aaa\u0aa6\u0acd\u0aae other:0\u00a0\u0aae\u0ab9\u0abe\u0aaa\u0aa6\u0acd\u0aae}"_s,
				u"{one:0\u00a0\u0ab6\u0a82\u0a95\u0ac1 other:0\u00a0\u0ab6\u0a82\u0a95\u0ac1}"_s,
				u"{one:0\u00a0\u0a9c\u0ab2\u0aa7\u0abf other:0\u00a0\u0a9c\u0ab2\u0aa7\u0abf}"_s
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
			$of(u"{0} \u0aa6\u0abf\u0ab5\u0ab8 \u0ab8\u0aae\u0aaf"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
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
			$of(u"\u0a95\u0ab2\u0abe\u0a95"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0aae\u0ac1\u0ab9."_s,
				u"\u0ab8\u0aab."_s,
				u"\u0ab0\u0aac.I"_s,
				u"\u0ab0\u0aac. II"_s,
				u"\u0a9c\u0ac1\u0aae. I"_s,
				u"\u0a9c\u0ac1\u0aae. II"_s,
				u"\u0ab0\u0abe\u0a9c."_s,
				u"\u0ab6\u0abe."_s,
				u"\u0ab0\u0abe\u0aae."_s,
				u"\u0ab6\u0abe\u0ab5."_s,
				u"\u0aa7\u0ac1\u02bb\u0ab2-\u0a95\u0acd\u0aaf\u0ac1."_s,
				u"\u0aa7\u0ac1\u02bb\u0ab2-\u0a8f\u0a9a."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0aac\u0ac1\u0aa6\u0acd\u0aa7\u0abf\u0ab8\u0acd\u0a9f \u0a95\u0ac7\u0ab2\u0ac7\u0aa8\u0acd\u0aa1\u0ab0"_s)
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
				"#,##,##0%"_s,
				u"\u00a4#,##,##0.00;(\u00a4#,##,##0.00)"_s
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

FormatData_gu::FormatData_gu() {
}

$Class* FormatData_gu::load$($String* name, bool initialize) {
	$loadClass(FormatData_gu, name, initialize, &_FormatData_gu_ClassInfo_, allocate$FormatData_gu);
	return class$;
}

$Class* FormatData_gu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun