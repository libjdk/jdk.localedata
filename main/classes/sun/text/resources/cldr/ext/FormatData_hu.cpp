#include <sun/text/resources/cldr/ext/FormatData_hu.h>

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

$MethodInfo _FormatData_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_hu::*)()>(&FormatData_hu::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_hu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_hu",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hu_MethodInfo_
};

$Object* allocate$FormatData_hu($Class* clazz) {
	return $of($alloc(FormatData_hu));
}

void FormatData_hu::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_hu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"janu\u00e1r"_s,
		u"febru\u00e1r"_s,
		u"m\u00e1rcius"_s,
		u"\u00e1prilis"_s,
		u"m\u00e1jus"_s,
		u"j\u00fanius"_s,
		u"j\u00falius"_s,
		"augusztus"_s,
		"szeptember"_s,
		u"okt\u00f3ber"_s,
		"november"_s,
		"december"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"jan."_s,
		"febr."_s,
		u"m\u00e1rc."_s,
		u"\u00e1pr."_s,
		u"m\u00e1j."_s,
		u"j\u00fan."_s,
		u"j\u00fal."_s,
		"aug."_s,
		"szept."_s,
		"okt."_s,
		"nov."_s,
		"dec."_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"J"_s,
		"F"_s,
		"M"_s,
		u"\u00c1"_s,
		"M"_s,
		"J"_s,
		"J"_s,
		"A"_s,
		"Sz"_s,
		"O"_s,
		"N"_s,
		"D"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"vas\u00e1rnap"_s,
		u"h\u00e9tf\u0151"_s,
		"kedd"_s,
		"szerda"_s,
		u"cs\u00fct\u00f6rt\u00f6k"_s,
		u"p\u00e9ntek"_s,
		"szombat"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"V"_s,
		"H"_s,
		"K"_s,
		"Sze"_s,
		"Cs"_s,
		"P"_s,
		"Szo"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"V"_s,
		"H"_s,
		"K"_s,
		"Sz"_s,
		"Cs"_s,
		"P"_s,
		"Sz"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"I. negyed\u00e9v"_s,
		u"II. negyed\u00e9v"_s,
		u"III. negyed\u00e9v"_s,
		u"IV. negyed\u00e9v"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"I. n.\u00e9v"_s,
		u"II. n.\u00e9v"_s,
		u"III. n.\u00e9v"_s,
		u"IV. n.\u00e9v"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		"I."_s,
		"II."_s,
		"III."_s,
		"IV."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"de."_s,
		"du."_s,
		u"\u00e9jf\u00e9l"_s,
		u"d\u00e9l"_s,
		"reggel"_s,
		u"d\u00e9lel\u0151tt"_s,
		u"d\u00e9lut\u00e1n"_s,
		""_s,
		"este"_s,
		""_s,
		u"\u00e9jjel"_s,
		"hajnal"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"de."_s,
		"du."_s,
		u"\u00e9jf\u00e9l"_s,
		u"d\u00e9l"_s,
		"reggel"_s,
		"de."_s,
		"du."_s,
		""_s,
		"este"_s,
		""_s,
		u"\u00e9jjel"_s,
		"hajnal"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		"BK"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G y. MMMM d., EEEE"_s,
		"G y. MMMM d."_s,
		"G y. MMM d."_s,
		"GGGGG y. M. d."_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG y. MMMM d., EEEE"_s,
		"GGGG y. MMMM d."_s,
		"GGGG y. MMM d."_s,
		"G y. M. d."_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"R.O.C. el\u0151tt"_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"MF"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Gergely-napt\u00e1r"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u00e9v"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"Iszl\u00e1m Umm al-Qura napt\u00e1r"_s)
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
			$of($$new($StringArray, {
				"G y. MMMM d., EEEE"_s,
				"G y. MMMM d."_s,
				"G y.MM.dd."_s,
				"GGGGG y.MM.dd."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of($$new($StringArray, {
				u"1. n.\u00e9v"_s,
				u"2. n.\u00e9v"_s,
				u"3. n.\u00e9v"_s,
				u"4. n.\u00e9v"_s
			}))
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
			$of(u"Iszl\u00e1m civil napt\u00e1r"_s)
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
				"ie."_s,
				"isz."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} z\u00f3naid\u0151"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Jap\u00e1n napt\u00e1r"_s)
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
				u"Krisztus el\u0151tt"_s,
				u"id\u0151sz\u00e1m\u00edt\u00e1sunk szerint"_s
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u"\u00a0"_s,
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
			$of($$new($StringArray, {
				"GGGG y. MMMM d., EEEE"_s,
				"GGGG y. MMMM d."_s,
				"GGGG y.MM.dd."_s,
				"G y.MM.dd."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("perc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u00e9ra"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("napszak"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"Moharrem"_s,
				"Safar"_s,
				u"R\u00e9bi el avvel"_s,
				u"R\u00e9bi el accher"_s,
				u"Dsem\u00e1di el avvel"_s,
				u"Dsem\u00e1di el accher"_s,
				"Redseb"_s,
				u"Sab\u00e1n"_s,
				u"Ramad\u00e1n"_s,
				u"Sevv\u00e1l"_s,
				u"Ds\u00fcl kade"_s,
				u"Ds\u00fcl hedse"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"K\u00ednai k\u00f6zt\u00e1rsas\u00e1gi napt\u00e1r"_s)
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
			$of(u"h\u00f3nap"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"m\u00e1sodperc"_s)
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
			$of(u"Iszl\u00e1m napt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:21:00-04:00;morning2:09:00-12:00;afternoon1:12:00-18:00;morning1:06:00-09:00;evening1:18:00-21:00;night2:04:00-06:00"_s)
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
			$of(u"{0} id\u0151"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:0\' \'ezer other:0\' \'ezer}"_s,
				"{one:00\' \'ezer other:00\' \'ezer}"_s,
				"{one:000\' \'ezer other:000\' \'ezer}"_s,
				u"{one:0\' \'milli\u00f3 other:0\' \'milli\u00f3}"_s,
				u"{one:00\' \'milli\u00f3 other:00\' \'milli\u00f3}"_s,
				u"{one:000\' \'milli\u00f3 other:000\' \'milli\u00f3}"_s,
				u"{one:0\' \'milli\u00e1rd other:0\' \'milli\u00e1rd}"_s,
				u"{one:00\' \'milli\u00e1rd other:00\' \'milli\u00e1rd}"_s,
				u"{one:000\' \'milli\u00e1rd other:000\' \'milli\u00e1rd}"_s,
				u"{one:0\' \'billi\u00f3 other:0\' \'billi\u00f3}"_s,
				u"{one:00\' \'billi\u00f3 other:00\' \'billi\u00f3}"_s,
				u"{one:000\' \'billi\u00f3 other:000\' \'billi\u00f3}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				u"1. negyed\u00e9v"_s,
				u"2. negyed\u00e9v"_s,
				u"3. negyed\u00e9v"_s,
				u"4. negyed\u00e9v"_s
			}))
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
			$of(u"id\u0151z\u00f3na"_s)
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
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"i. e."_s,
				"i. sz."_s
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
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of($$new($StringArray, {
				"1."_s,
				"2."_s,
				"3."_s,
				"4."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"h\u00e9t napja"_s)
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
			$of(u"h\u00e9t"_s)
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
				u"{one:0\u00a0E other:0\u00a0E}"_s,
				u"{one:00\u00a0E other:00\u00a0E}"_s,
				u"{one:000\u00a0E other:000\u00a0E}"_s,
				u"{one:0\u00a0M other:0\u00a0M}"_s,
				u"{one:00\u00a0M other:00\u00a0M}"_s,
				u"{one:000\u00a0M other:000\u00a0M}"_s,
				u"{one:0\u00a0Mrd other:0\u00a0Mrd}"_s,
				u"{one:00\u00a0Mrd other:00\u00a0Mrd}"_s,
				u"{one:000\u00a0Mrd other:000\u00a0Mrd}"_s,
				u"{one:0\u00a0B other:0\u00a0B}"_s,
				u"{one:00\u00a0B other:00\u00a0B}"_s,
				u"{one:000\u00a0B other:000\u00a0B}"_s
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
			$of(u"{0} ny\u00e1ri id\u0151"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y. MMMM d., EEEE"_s,
				"y. MMMM d."_s,
				"y. MMM d."_s,
				"y. MM. dd."_s
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
			$of(u"\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Moh."_s,
				"Saf."_s,
				u"R\u00e9b. 1"_s,
				u"R\u00e9b. 2"_s,
				"Dsem. I"_s,
				"Dsem. II"_s,
				"Red."_s,
				"Sab."_s,
				"Ram."_s,
				"Sev."_s,
				u"Ds\u00fcl k."_s,
				u"Ds\u00fcl h."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Buddhista napt\u00e1r"_s)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_hu::FormatData_hu() {
}

$Class* FormatData_hu::load$($String* name, bool initialize) {
	$loadClass(FormatData_hu, name, initialize, &_FormatData_hu_ClassInfo_, allocate$FormatData_hu);
	return class$;
}

$Class* FormatData_hu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun