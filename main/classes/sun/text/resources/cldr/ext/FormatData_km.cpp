#include <sun/text/resources/cldr/ext/FormatData_km.h>

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

$MethodInfo _FormatData_km_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_km::*)()>(&FormatData_km::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_km_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_km",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_km_MethodInfo_
};

$Object* allocate$FormatData_km($Class* clazz) {
	return $of($alloc(FormatData_km));
}

void FormatData_km::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_km::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u1798\u1780\u179a\u17b6"_s,
		u"\u1780\u17bb\u1798\u17d2\u1797\u17c8"_s,
		u"\u1798\u17b8\u1793\u17b6"_s,
		u"\u1798\u17c1\u179f\u17b6"_s,
		u"\u17a7\u179f\u1797\u17b6"_s,
		u"\u1798\u17b7\u1790\u17bb\u1793\u17b6"_s,
		u"\u1780\u1780\u17d2\u1780\u178a\u17b6"_s,
		u"\u179f\u17b8\u17a0\u17b6"_s,
		u"\u1780\u1789\u17d2\u1789\u17b6"_s,
		u"\u178f\u17bb\u179b\u17b6"_s,
		u"\u179c\u17b7\u1785\u17d2\u1786\u17b7\u1780\u17b6"_s,
		u"\u1792\u17d2\u1793\u17bc"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u1798"_s,
		u"\u1780"_s,
		u"\u1798"_s,
		u"\u1798"_s,
		u"\u17a7"_s,
		u"\u1798"_s,
		u"\u1780"_s,
		u"\u179f"_s,
		u"\u1780"_s,
		u"\u178f"_s,
		u"\u179c"_s,
		u"\u1792"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u17a2\u17b6\u1791\u17b7\u178f\u17d2\u1799"_s,
		u"\u1785\u17d0\u1793\u17d2\u1791"_s,
		u"\u17a2\u1784\u17d2\u1782\u17b6\u179a"_s,
		u"\u1796\u17bb\u1792"_s,
		u"\u1796\u17d2\u179a\u17a0\u179f\u17d2\u1794\u178f\u17b7\u17cd"_s,
		u"\u179f\u17bb\u1780\u17d2\u179a"_s,
		u"\u179f\u17c5\u179a\u17cd"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u17a2\u17b6\u1791\u17b7\u178f\u17d2\u1799"_s,
		u"\u1785\u1793\u17d2\u1791"_s,
		u"\u17a2\u1784\u17d2\u1782\u17b6\u179a"_s,
		u"\u1796\u17bb\u1792"_s,
		u"\u1796\u17d2\u179a\u17a0"_s,
		u"\u179f\u17bb\u1780\u17d2\u179a"_s,
		u"\u179f\u17c5\u179a\u17cd"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u17a2"_s,
		u"\u1785"_s,
		u"\u17a2"_s,
		u"\u1796"_s,
		u"\u1796"_s,
		u"\u179f"_s,
		u"\u179f"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u178f\u17d2\u179a\u17b8\u1798\u17b6\u179f\u1791\u17b8 1"_s,
		u"\u178f\u17d2\u179a\u17b8\u1798\u17b6\u179f\u1791\u17b8 2"_s,
		u"\u178f\u17d2\u179a\u17b8\u1798\u17b6\u179f\u1791\u17b8 3"_s,
		u"\u178f\u17d2\u179a\u17b8\u1798\u17b6\u179f\u1791\u17b8 4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u17a2\u1792\u17d2\u179a\u17b6\u178f\u17d2\u179a"_s,
		u"\u1790\u17d2\u1784\u17c3\u178f\u17d2\u179a\u1784\u17cb"_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u200b\u1796\u17d2\u179a\u17b9\u1780"_s,
		""_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u179a\u179f\u17c0\u179b"_s,
		""_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u200b\u179b\u17d2\u1784\u17b6\u1785"_s,
		""_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u200b\u1799\u1794\u17cb"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"\u17a2\u1792\u17d2\u179a\u17b6\u178f\u17d2\u179a"_s,
		u"\u1790\u17d2\u1784\u17c3\u178f\u17d2\u179a\u1784\u17cb"_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u200b\u1796\u17d2\u179a\u17b9\u1780"_s,
		""_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u179a\u179f\u17c0\u179b"_s,
		""_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u200b\u179b\u17d2\u1784\u17b6\u1785"_s,
		""_s,
		u"\u1793\u17c5\u1796\u17c1\u179b\u200b\u1799\u1794\u17cb"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u1798\u17bb\u1793 \u1782.\u179f."_s,
		u"\u1782.\u179f."_s
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
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u1794\u17d2\u179a\u178f\u17b7\u1791\u17b7\u1793\u200b\u17a0\u17d2\u179f\u1780\u17a0\u17d2\u179f\u17ca\u17b8"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u1786\u17d2\u1793\u17b6\u17c6"_s)
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
			$of("timezone.gmtFormat"_s),
			$of(u"\u1798\u17c9\u17c4\u1784\u200b\u179f\u1780\u179b {0}"_s)
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
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"\u1798\u17c9\u17c4\u1784\u200b\u179f\u17d2\u178f\u1784\u17cb\u178a\u17b6\u179a\u200b\u1793\u17c5 \u200b{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u1794\u17d2\u179a\u178f\u17b7\u1791\u17b7\u1793\u200b\u1787\u1794\u17c9\u17bb\u1793"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u1798\u17c9\u17c4\u1784\u200b\u179f\u1780\u179b"_s)
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
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u1798\u17bb\u1793\u200b\u1782\u17d2\u179a\u17b7\u179f\u17d2\u178f\u179f\u1780\u179a\u17b6\u1787"_s,
				u"\u1782\u17d2\u179a\u17b7\u179f\u17d2\u178f\u179f\u1780\u179a\u17b6\u1787"_s
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
				u"{1} \u1793\u17c5\u200b\u1798\u17c9\u17c4\u1784 {0}"_s,
				u"{1} \u1793\u17c5\u200b\u1798\u17c9\u17c4\u1784 {0}"_s,
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
				","_s,
				"."_s,
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
			$of(u"\u1793\u17b6\u1791\u17b8"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u179f\u1780\u179a\u17b6\u1787"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u1796\u17d2\u179a\u17b9\u1780/\u179b\u17d2\u1784\u17b6\u1785"_s)
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
			$of(u"\u1794\u17d2\u179a\u178f\u17b7\u1791\u17b7\u1793\u1798\u17b8\u1784\u1782\u17d0\u179a"_s)
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
			$of(u"\u1781\u17c2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u179c\u17b7\u1793\u17b6\u1791\u17b8"_s)
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
			$of(u"\u1794\u17d2\u179a\u178f\u17b7\u1791\u17b7\u1793\u17a2\u17ca\u17b8\u179f\u17d2\u179b\u17b6\u1798"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:21:00-24:00;afternoon1:12:00-18:00;morning1:00:00-12:00;evening1:18:00-21:00"_s)
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
			$of("timezone.regionFormat"_s),
			$of(u"\u1798\u17c9\u17c4\u1784\u200b\u1793\u17c5\u200b {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u1796\u17b6\u1793\u17cb}"_s,
				u"{other:00\' \'\u1796\u17b6\u1793\u17cb}"_s,
				u"{other:000\u1796\u17b6\u1793\u17cb}"_s,
				u"{other:0\' \'\u179b\u17b6\u1793}"_s,
				u"{other:00\' \'\u179b\u17b6\u1793}"_s,
				u"{other:000\' \'\u179b\u17b6\u1793}"_s,
				u"{other:0\' \'\u1794\u17ca\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:00\' \'\u1794\u17ca\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:000\' \'\u1794\u17ca\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:0\' \'\u1791\u17d2\u179a\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:00\' \'\u1791\u17d2\u179a\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:000\' \'\u1791\u17d2\u179a\u17b8\u179b\u17b6\u1793}"_s
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
			$of(u"\u179b\u17d2\u179c\u17c2\u1784\u1798\u17c9\u17c4\u1784"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
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
			$of(u"\u1790\u17d2\u1784\u17c3\u200b\u1793\u17c3\u200b\u179f\u1794\u17d2\u178a\u17b6\u17a0\u17cd"_s)
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
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u179f\u1794\u17d2\u178a\u17b6\u17a0\u17cd"_s)
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
				u"{other:0\u1796\u17b6\u1793\u17cb}"_s,
				u"{other:00\u00a0\u1796\u17b6\u1793\u17cb}"_s,
				u"{other:000\u00a0\u1796\u17b6\u1793\u17cb}"_s,
				u"{other:0\u00a0\u179b\u17b6\u1793}"_s,
				u"{other:00\u00a0\u179b\u17b6\u1793}"_s,
				u"{other:000\u00a0\u179b\u17b6\u1793}"_s,
				u"{other:0\u00a0\u1794\u17ca\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:00\u00a0\u1794\u17ca\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:000\u00a0\u1794\u17ca\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:0\u00a0\u1791\u17d2\u179a\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:00\u00a0\u1791\u17d2\u179a\u17b8\u179b\u17b6\u1793}"_s,
				u"{other:000\u00a0\u1791\u17d2\u179a\u17b8\u179b\u17b6\u1793}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"\u1798\u17c9\u17c4\u1784\u200b\u1796\u17c1\u179b\u200b\u1790\u17d2\u1784\u17c3\u200b\u1793\u17c5\u200b {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y"_s,
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"\u17a2\u17b6\u1791\u17b7\u178f\u17d2\u1799"_s,
				u"\u1785\u1793\u17d2\u1791"_s,
				u"\u17a2\u1784\u17d2\u1782\u17b6\u179a"_s,
				u"\u1796\u17bb\u1792"_s,
				u"\u1796\u17d2\u179a\u17a0\u179f\u17d2\u1794\u178f\u17b7\u17cd"_s,
				u"\u179f\u17bb\u1780\u17d2\u179a"_s,
				u"\u179f\u17c5\u179a\u17cd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u1798\u17c9\u17c4\u1784"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u1794\u17d2\u179a\u178f\u17b7\u1791\u17b7\u1793\u1796\u17bb\u1791\u17d2\u1792\u179f\u17b6\u179f\u1793\u17b6"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a4"_s,
				"#,##0%"_s,
				u"#,##0.00\u00a4;(#,##0.00\u00a4)"_s
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

FormatData_km::FormatData_km() {
}

$Class* FormatData_km::load$($String* name, bool initialize) {
	$loadClass(FormatData_km, name, initialize, &_FormatData_km_ClassInfo_, allocate$FormatData_km);
	return class$;
}

$Class* FormatData_km::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun