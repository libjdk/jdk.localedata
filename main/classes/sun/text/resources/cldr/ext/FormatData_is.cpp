#include <sun/text/resources/cldr/ext/FormatData_is.h>

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

$MethodInfo _FormatData_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_is::*)()>(&FormatData_is::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_is",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_is_MethodInfo_
};

$Object* allocate$FormatData_is($Class* clazz) {
	return $of($alloc(FormatData_is));
}

void FormatData_is::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_is::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"jan\u00faar"_s,
		u"febr\u00faar"_s,
		"mars"_s,
		u"apr\u00edl"_s,
		u"ma\u00ed"_s,
		u"j\u00fan\u00ed"_s,
		u"j\u00fal\u00ed"_s,
		u"\u00e1g\u00fast"_s,
		"september"_s,
		u"okt\u00f3ber"_s,
		u"n\u00f3vember"_s,
		"desember"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"jan."_s,
		"feb."_s,
		"mar."_s,
		"apr."_s,
		u"ma\u00ed"_s,
		u"j\u00fan."_s,
		u"j\u00fal."_s,
		u"\u00e1g\u00fa."_s,
		"sep."_s,
		"okt."_s,
		u"n\u00f3v."_s,
		"des."_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"J"_s,
		"F"_s,
		"M"_s,
		"A"_s,
		"M"_s,
		"J"_s,
		"J"_s,
		u"\u00c1"_s,
		"S"_s,
		"O"_s,
		"N"_s,
		"D"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"sunnudagur"_s,
		u"m\u00e1nudagur"_s,
		u"\u00feri\u00f0judagur"_s,
		u"mi\u00f0vikudagur"_s,
		"fimmtudagur"_s,
		u"f\u00f6studagur"_s,
		"laugardagur"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"sun."_s,
		u"m\u00e1n."_s,
		u"\u00feri."_s,
		u"mi\u00f0."_s,
		"fim."_s,
		u"f\u00f6s."_s,
		"lau."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		u"\u00de"_s,
		"M"_s,
		"F"_s,
		"F"_s,
		"L"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1. fj\u00f3r\u00f0ungur"_s,
		u"2. fj\u00f3r\u00f0ungur"_s,
		u"3. fj\u00f3r\u00f0ungur"_s,
		u"4. fj\u00f3r\u00f0ungur"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"F1"_s,
		"F2"_s,
		"F3"_s,
		"F4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"f.h."_s,
		"e.h."_s,
		u"mi\u00f0n\u00e6tti"_s,
		u"h\u00e1degi"_s,
		u"a\u00f0 morgni"_s,
		""_s,
		u"s\u00ed\u00f0degis"_s,
		""_s,
		u"a\u00f0 kv\u00f6ldi"_s,
		""_s,
		u"a\u00f0 n\u00f3ttu"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"f."_s,
		"e."_s,
		"mn."_s,
		"h."_s,
		"mrg."_s,
		""_s,
		"sd."_s,
		""_s,
		"kv."_s,
		""_s,
		"n."_s,
		""_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_DateTimePatterns, $new($StringArray, {
		"{1} \'kl\'. {0}"_s,
		"{1} \'kl\'. {0}"_s,
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
		u"b\u00faddhadagatal"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"BD"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"fyrir l\u00fd\u00f0veldi K\u00edna"_s,
		"Minguo"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		u"fyrir l\u00fd\u00f0v. K\u00edna"_s,
		"Minguo"_s
	}));
	$var($StringArray, metaValue_java_time_roc_narrow_Eras, $new($StringArray, {
		"fyrir lv.K."_s,
		"Minguo"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"eftir Hijra"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_Eras, $new($StringArray, {
		""_s,
		"EH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Gregor\u00edskt t\u00edmatal"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u00cdslamskt dagatal (Umm al-Qura)"_s)
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
			$of(u"\u00cdslamskt borgaradagatal"_s)
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
				"f.k."_s,
				"e.k."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} (sta\u00f0alt\u00edmi)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Japanskt t\u00edmatal"_s)
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
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				"fyrir Krist"_s,
				"eftir Krist"_s
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
			$of(u"m\u00edn\u00fata"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"t\u00edmabil"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("f.h./e.h."_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"muharram"_s,
				"safar"_s,
				u"rabi\u02bb I"_s,
				u"rabi\u02bb II"_s,
				"jumada I"_s,
				"jumada II"_s,
				"rajab"_s,
				u"sha\u02bbban"_s,
				"ramadan"_s,
				"shawwal"_s,
				u"dhu\u02bbl-Qi\u02bbdah"_s,
				u"dhu\u02bbl-Hijjah"_s,
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
			$of(u"Minguo t\u00edmatal"_s)
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
			$of(u"m\u00e1nu\u00f0ur"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"sek\u00fanda"_s)
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
			$of(u"\u00cdslamskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:00:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-24:00"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_narrow_Eras)
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
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u00fe\u00fasund other:0\' \'\u00fe\u00fasund}"_s,
				u"{one:00\' \'\u00fe\u00fasund other:00\' \'\u00fe\u00fasund}"_s,
				u"{one:000\' \'\u00fe\u00fasund other:000\' \'\u00fe\u00fasund}"_s,
				u"{one:0\' \'millj\u00f3n other:0\' \'millj\u00f3nir}"_s,
				u"{one:00\' \'millj\u00f3n other:00\' \'millj\u00f3nir}"_s,
				u"{one:000\' \'millj\u00f3n other:000\' \'millj\u00f3nir}"_s,
				u"{one:0\' \'milljar\u00f0ur other:0\' \'milljar\u00f0ar}"_s,
				u"{one:00\' \'milljar\u00f0ur other:00\' \'milljar\u00f0ar}"_s,
				u"{one:000\' \'milljar\u00f0ur other:000\' \'milljar\u00f0ar}"_s,
				u"{one:0\' \'billj\u00f3n other:0\' \'billj\u00f3nir}"_s,
				u"{one:00\' \'billj\u00f3n other:00\' \'billj\u00f3nir}"_s,
				u"{one:000\' \'billj\u00f3n other:000\' \'billj\u00f3nir}"_s
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
			$of(u"t\u00edmabelti"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_narrow_Eras)
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
				"f.Kr."_s,
				"e.Kr."_s
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
			$of("vikudagur"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
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
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("vika"_s)
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
				u"{one:0\u00a0\u00fe\'.\' other:0\u00a0\u00fe\'.\'}"_s,
				u"{one:00\u00a0\u00fe\'.\' other:00\u00a0\u00fe\'.\'}"_s,
				u"{one:000\u00a0\u00fe\'.\' other:000\u00a0\u00fe\'.\'}"_s,
				u"{one:0\u00a0m\'.\' other:0\u00a0m\'.\'}"_s,
				u"{one:00\u00a0m\'.\' other:00\u00a0m\'.\'}"_s,
				u"{one:000\u00a0m\'.\' other:000\u00a0m\'.\'}"_s,
				u"{one:0\u00a0ma\'.\' other:0\u00a0ma\'.\'}"_s,
				u"{one:00\u00a0ma\'.\' other:00\u00a0ma\'.\'}"_s,
				u"{one:000\u00a0ma\'.\' other:000\u00a0ma\'.\'}"_s,
				u"{one:0\u00a0bn other:0\u00a0bn}"_s,
				u"{one:00\u00a0bn other:00\u00a0bn}"_s,
				u"{one:000\u00a0bn other:000\u00a0bn}"_s
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
			$of(u"{0} (sumart\u00edmi)"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM y"_s,
				"d. MMMM y"_s,
				"d. MMM y"_s,
				"d.M.y"_s
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
			$of("japanese.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
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
			$of("one:t = 0 and i % 10 = 1 and i % 100 != 11 or t != 0"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("klukkustund"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"muh."_s,
				"saf."_s,
				"rab. I"_s,
				"rab. II"_s,
				"jum. I"_s,
				"jum. II"_s,
				"raj."_s,
				"sha."_s,
				"ram."_s,
				"shaw."_s,
				u"dhu\u02bbl-Q."_s,
				u"dhu\u02bbl-H."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"B\u00fadd\u00edskt t\u00edmatal"_s)
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

FormatData_is::FormatData_is() {
}

$Class* FormatData_is::load$($String* name, bool initialize) {
	$loadClass(FormatData_is, name, initialize, &_FormatData_is_ClassInfo_, allocate$FormatData_is);
	return class$;
}

$Class* FormatData_is::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun