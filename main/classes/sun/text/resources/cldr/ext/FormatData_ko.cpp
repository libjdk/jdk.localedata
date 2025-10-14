#include <sun/text/resources/cldr/ext/FormatData_ko.h>

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

$MethodInfo _FormatData_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ko::*)()>(&FormatData_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ko_MethodInfo_
};

$Object* allocate$FormatData_ko($Class* clazz) {
	return $of($alloc(FormatData_ko));
}

void FormatData_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ko::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"1\uc6d4"_s,
		u"2\uc6d4"_s,
		u"3\uc6d4"_s,
		u"4\uc6d4"_s,
		u"5\uc6d4"_s,
		u"6\uc6d4"_s,
		u"7\uc6d4"_s,
		u"8\uc6d4"_s,
		u"9\uc6d4"_s,
		u"10\uc6d4"_s,
		u"11\uc6d4"_s,
		u"12\uc6d4"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\uc77c\uc694\uc77c"_s,
		u"\uc6d4\uc694\uc77c"_s,
		u"\ud654\uc694\uc77c"_s,
		u"\uc218\uc694\uc77c"_s,
		u"\ubaa9\uc694\uc77c"_s,
		u"\uae08\uc694\uc77c"_s,
		u"\ud1a0\uc694\uc77c"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\uc77c"_s,
		u"\uc6d4"_s,
		u"\ud654"_s,
		u"\uc218"_s,
		u"\ubaa9"_s,
		u"\uae08"_s,
		u"\ud1a0"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\uc81c 1/4\ubd84\uae30"_s,
		u"\uc81c 2/4\ubd84\uae30"_s,
		u"\uc81c 3/4\ubd84\uae30"_s,
		u"\uc81c 4/4\ubd84\uae30"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1\ubd84\uae30"_s,
		u"2\ubd84\uae30"_s,
		u"3\ubd84\uae30"_s,
		u"4\ubd84\uae30"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\uc624\uc804"_s,
		u"\uc624\ud6c4"_s,
		u"\uc790\uc815"_s,
		u"\uc815\uc624"_s,
		u"\uc0c8\ubcbd"_s,
		u"\uc624\uc804"_s,
		u"\uc624\ud6c4"_s,
		""_s,
		u"\uc800\ub141"_s,
		""_s,
		u"\ubc24"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\uc790\uc815"_s,
		u"\uc815\uc624"_s,
		u"\uc0c8\ubcbd"_s,
		u"\uc624\uc804"_s,
		u"\uc624\ud6c4"_s,
		""_s,
		u"\uc800\ub141"_s,
		""_s,
		u"\ubc24"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"BC"_s,
		"AD"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		u"a h\uc2dc m\ubd84 s\ucd08 zzzz"_s,
		u"a h\uc2dc m\ubd84 s\ucd08 z"_s,
		"a h:mm:ss"_s,
		"a h:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\ubd88\uae30"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"G y\ub144 M\uc6d4 d\uc77c EEEE"_s,
		u"G y\ub144 M\uc6d4 d\uc77c"_s,
		"G y. M. d."_s,
		"G y. M. d."_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"GGGG y\ub144 M\uc6d4 d\uc77c EEEE"_s,
		u"GGGG y\ub144 M\uc6d4 d\uc77c"_s,
		"GGGG y. M. d."_s,
		"GGGG y. M. d."_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"\uc11c\uae30"_s,
		u"\uba54\uc774\uc9c0"_s,
		u"\ub2e4\uc774\uc1fc"_s,
		u"\uc1fc\uc640"_s,
		u"\ud5e4\uc774\uc138\uc774"_s,
		u"\ub808\uc774\uc640"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		"AD"_s,
		u"\uba54\uc774\uc9c0"_s,
		u"\ub2e4\uc774\uc1fc"_s,
		u"\uc1fc\uc640"_s,
		u"\ud5e4\uc774\uc138\uc774"_s,
		u"\ub808\uc774\uc640"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\uc911\ud654\ubbfc\uad6d\uc804"_s,
		u"\uc911\ud654\ubbfc\uad6d"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\ud788\uc988\ub77c\ub825"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\uc591\ub825"_s);
	$var($StringArray, metaValue_short_CompactNumberPatterns, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		u"{other:0\ucc9c}"_s,
		u"{other:0\ub9cc}"_s,
		u"{other:00\ub9cc}"_s,
		u"{other:000\ub9cc}"_s,
		u"{other:0000\ub9cc}"_s,
		u"{other:0\uc5b5}"_s,
		u"{other:00\uc5b5}"_s,
		u"{other:000\uc5b5}"_s,
		u"{other:0000\uc5b5}"_s,
		u"{other:0\uc870}"_s,
		u"{other:00\uc870}"_s,
		u"{other:000\uc870}"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\ub144"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\uc774\uc2ac\ub78c\ub825(\uc6c0 \uc54c \ucfe0\ub77c)"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\uc774\uc2ac\ub78c \uc0c1\uc6a9\ub825"_s)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \ud45c\uc900\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\uc77c\ubcf8\ub825"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\uae30\uc6d0\uc804"_s,
				u"\uc11c\uae30"_s
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
			$of(metaValue_MonthNames)
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
			$of(metaValue_MonthNames)
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
			$of(u"\ubd84"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\uc5f0\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\uc624\uc804/\uc624\ud6c4"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\ubb34\ud558\ub78c"_s,
				u"\uc0ac\ud30c\ub974"_s,
				u"\ub77c\ube44 \uc54c \uc544\uc648"_s,
				u"\ub77c\ube44 \uc54c \uc384\ub2c8"_s,
				u"\uc8fc\ub9c8\ub2e4 \uc54c \uc544\uc648"_s,
				u"\uc8fc\ub9c8\ub2e4 \uc54c \uc384\ub2c8"_s,
				u"\ub77c\uc7a1"_s,
				u"\uc250\uc544\ubc18"_s,
				u"\ub77c\ub9c8\ub2e8"_s,
				u"\uc250\uc648"_s,
				u"\ub4c0 \uc54c \uae4c\ub2e4"_s,
				u"\ub4c0 \uc54c \ud788\uc790"_s,
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
				u"\u200f-"_s,
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
			$of(u"\ub300\ub9cc\ub825"_s)
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
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\uc6d4"_s)
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
			$of(u"\ucd08"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\uc774\uc2ac\ub78c\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:21:00-03:00;morning2:06:00-12:00;afternoon1:12:00-18:00;morning1:03:00-06:00;evening1:18:00-21:00"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of(metaValue_short_CompactNumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \uc2dc\uac04"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\uc2dc\uac04\ub300"_s)
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
			$of(metaValue_narrow_AmPmMarkers)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\uc694\uc77c"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
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
			$of(metaValue_java_time_islamic_Eras)
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
			$of("java.time.japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
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
			$of(u"\uc8fc"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNames)
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
			$of(metaValue_DayAbbreviations)
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
			$of(metaValue_short_CompactNumberPatterns)
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
			$of(u"{0} \ud558\uacc4 \ud45c\uc900\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y\ub144 M\uc6d4 d\uc77c EEEE"_s,
				u"y\ub144 M\uc6d4 d\uc77c"_s,
				"y. M. d."_s,
				"yy. M. d."_s
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\ubd88\uad50\ub825"_s)
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
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_ko::FormatData_ko() {
}

$Class* FormatData_ko::load$($String* name, bool initialize) {
	$loadClass(FormatData_ko, name, initialize, &_FormatData_ko_ClassInfo_, allocate$FormatData_ko);
	return class$;
}

$Class* FormatData_ko::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun