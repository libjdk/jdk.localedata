#include <sun/text/resources/cldr/ext/FormatData_lv.h>

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

$MethodInfo _FormatData_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_lv::*)()>(&FormatData_lv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_lv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lv_MethodInfo_
};

$Object* allocate$FormatData_lv($Class* clazz) {
	return $of($alloc(FormatData_lv));
}

void FormatData_lv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_lv::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"janv\u0101ris"_s,
		u"febru\u0101ris"_s,
		"marts"_s,
		u"apr\u012blis"_s,
		"maijs"_s,
		u"j\u016bnijs"_s,
		u"j\u016blijs"_s,
		"augusts"_s,
		"septembris"_s,
		"oktobris"_s,
		"novembris"_s,
		"decembris"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"janv."_s,
		"febr."_s,
		"marts"_s,
		"apr."_s,
		"maijs"_s,
		u"j\u016bn."_s,
		u"j\u016bl."_s,
		"aug."_s,
		"sept."_s,
		"okt."_s,
		"nov."_s,
		"dec."_s,
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
		"A"_s,
		"S"_s,
		"O"_s,
		"N"_s,
		"D"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"sv\u0113tdiena"_s,
		"pirmdiena"_s,
		"otrdiena"_s,
		u"tre\u0161diena"_s,
		"ceturtdiena"_s,
		"piektdiena"_s,
		"sestdiena"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"sv\u0113td."_s,
		"pirmd."_s,
		"otrd."_s,
		u"tre\u0161d."_s,
		"ceturtd."_s,
		"piektd."_s,
		"sestd."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"S"_s,
		"P"_s,
		"O"_s,
		"T"_s,
		"C"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"1. ceturksnis"_s,
		"2. ceturksnis"_s,
		"3. ceturksnis"_s,
		"4. ceturksnis"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1.\u00a0cet."_s,
		u"2.\u00a0cet."_s,
		u"3.\u00a0cet."_s,
		u"4.\u00a0cet."_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"priek\u0161pusdien\u0101"_s,
		u"p\u0113cpusdien\u0101"_s,
		u"pusnakt\u012b"_s,
		u"pusdienlaik\u0101"_s,
		u"no r\u012bta"_s,
		""_s,
		u"p\u0113cpusdien\u0101"_s,
		""_s,
		u"vakar\u0101"_s,
		""_s,
		u"nakt\u012b"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"priek\u0161p."_s,
		u"p\u0113cp."_s,
		u"pusnakt\u012b"_s,
		"pusd."_s,
		u"no r\u012bta"_s,
		""_s,
		u"p\u0113cpusd."_s,
		""_s,
		u"vakar\u0101"_s,
		""_s,
		u"nakt\u012b"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"p.m.\u0113."_s,
		u"m.\u0113."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"budistu \u0113ra"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"B.E."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, y. \'gada\' d. MMMM G"_s,
		"y. \'gada\' d. MMMM G"_s,
		"y. \'gada\' d. MMM G"_s,
		"dd.MM.y. GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, y. \'gada\' d. MMMM GGGG"_s,
		"y. \'gada\' d. MMMM GGGG"_s,
		"y. \'gada\' d. MMM GGGG"_s,
		"dd.MM.y. G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"pirms \u0136\u012bnas Republikas dibin\u0101\u0161anas"_s,
		u"Mi\u0146go"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		"pirms republikas"_s,
		u"Mi\u0146go"_s
	}));
	$var($StringArray, metaValue_java_time_roc_narrow_Eras, $new($StringArray, {
		"pirms rep."_s,
		u"Mi\u0146go"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"p\u0113c hid\u017eras"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Gregora kalend\u0101rs"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("gads"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"isl\u0101ma kalend\u0101rs (Umm al-kura)"_s)
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
			$of(u"isl\u0101ma pilso\u0146u kalend\u0101rs"_s)
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
			$of("{0}: standarta laiks"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"jap\u0101\u0146u kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"Sv\u0113td."_s,
				"Pirmd."_s,
				"Otrd."_s,
				u"Tre\u0161d."_s,
				"Ceturtd."_s,
				"Piektd."_s,
				"Sestd."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"pirms m\u016bsu \u0113ras"_s,
				u"m\u016bsu \u0113r\u0101"_s
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
				"NS"_s,
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
			$of(u"min\u016btes"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0113ra"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"priek\u0161pusdien\u0101/p\u0113cpusdien\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"muharams"_s,
				"safars"_s,
				u"1. rab\u012b"_s,
				u"2. rab\u012b"_s,
				u"1. d\u017eum\u0101d\u0101"_s,
				u"2. d\u017eum\u0101d\u0101"_s,
				u"rad\u017eabs"_s,
				u"\u0161abans"_s,
				u"ramad\u0101ns"_s,
				u"\u0161auvals"_s,
				u"du al-kid\u0101"_s,
				u"du al-hid\u017e\u0101"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0136\u012bnas Republikas kalend\u0101rs"_s)
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
			$of("field.month"_s),
			$of(u"m\u0113nesis"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekundes"_s)
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
			$of(u"isl\u0101ma kalend\u0101rs"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:23:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-23:00"_s)
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
			$of("timezone.regionFormat"_s),
			$of("Laika josla: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{zero:0\' \'t\u016bksto\u0161u one:0\' \'t\u016bkstotis other:0\' \'t\u016bksto\u0161i}"_s,
				u"{zero:00\' \'t\u016bksto\u0161i one:00\' \'t\u016bkstotis other:00\' \'t\u016bksto\u0161i}"_s,
				u"{zero:000\' \'t\u016bksto\u0161i one:000\' \'t\u016bkstotis other:000\' \'t\u016bksto\u0161i}"_s,
				"{zero:0\' \'miljonu one:0\' \'miljons other:0\' \'miljoni}"_s,
				"{zero:00\' \'miljoni one:00\' \'miljons other:00\' \'miljoni}"_s,
				"{zero:000\' \'miljoni one:000\' \'miljons other:000\' \'miljoni}"_s,
				"{zero:0\' \'miljardu one:0\' \'miljards other:0\' \'miljardi}"_s,
				"{zero:00\' \'miljardi one:00\' \'miljards other:00\' \'miljardi}"_s,
				"{zero:000\' \'miljardi one:000\' \'miljards other:000\' \'miljardi}"_s,
				"{zero:0\' \'triljonu one:0\' \'triljons other:0\' \'triljoni}"_s,
				"{zero:00\' \'triljoni one:00\' \'triljons other:00\' \'triljoni}"_s,
				"{zero:000\' \'triljoni one:000\' \'triljons other:000\' \'triljoni}"_s
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
			$of("laika josla"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_narrow_Eras)
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
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of(u"ned\u0113\u013cas diena"_s)
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
			$of(u"ned\u0113\u013ca"_s)
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
				u"{zero:0\u00a0t\u016bkst\'.\' one:0\u00a0t\u016bkst\'.\' other:0\u00a0t\u016bkst\'.\'}"_s,
				u"{zero:00\u00a0t\u016bkst\'.\' one:00\u00a0t\u016bkst\'.\' other:00\u00a0t\u016bkst\'.\'}"_s,
				u"{zero:000\u00a0t\u016bkst\'.\' one:000\u00a0t\u016bkst\'.\' other:000\u00a0t\u016bkst\'.\'}"_s,
				u"{zero:0\u00a0milj\'.\' one:0\u00a0milj\'.\' other:0\u00a0milj\'.\'}"_s,
				u"{zero:00\u00a0milj\'.\' one:00\u00a0milj\'.\' other:00\u00a0milj\'.\'}"_s,
				u"{zero:000\u00a0milj\'.\' one:000\u00a0milj\'.\' other:000\u00a0milj\'.\'}"_s,
				u"{zero:0\u00a0mljrd\'.\' one:0\u00a0mljrd\'.\' other:0\u00a0mljrd\'.\'}"_s,
				u"{zero:00\u00a0mljrd\'.\' one:00\u00a0mljrd\'.\' other:00\u00a0mljrd\'.\'}"_s,
				u"{zero:000\u00a0mljrd\'.\' one:000\u00a0mljrd\'.\' other:000\u00a0mljrd\'.\'}"_s,
				u"{zero:0\u00a0trilj\'.\' one:0\u00a0trilj\'.\' other:0\u00a0trilj\'.\'}"_s,
				u"{zero:00\u00a0trilj\'.\' one:00\u00a0trilj\'.\' other:00\u00a0trilj\'.\'}"_s,
				u"{zero:000\u00a0trilj\'.\' one:000\u00a0trilj\'.\' other:000\u00a0trilj\'.\'}"_s
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
			$of("{0}: vasaras laiks"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, y. \'gada\' d. MMMM"_s,
				"y. \'gada\' d. MMMM"_s,
				"y. \'gada\' d. MMM"_s,
				"dd.MM.yy"_s
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
			$of($$new($StringArray, {
				u"Sv\u0113tdiena"_s,
				"Pirmdiena"_s,
				"Otrdiena"_s,
				u"Tre\u0161diena"_s,
				"Ceturtdiena"_s,
				"Piektdiena"_s,
				"Sestdiena"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("zero:n % 10 = 0 or n % 100 = 11..19 or v = 2 and f % 100 = 11..19;one:n % 10 = 1 and n % 100 != 11 or v = 2 and f % 10 = 1 and f % 100 != 11 or v != 2 and f % 10 = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("stundas"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"budistu kalend\u0101rs"_s)
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

FormatData_lv::FormatData_lv() {
}

$Class* FormatData_lv::load$($String* name, bool initialize) {
	$loadClass(FormatData_lv, name, initialize, &_FormatData_lv_ClassInfo_, allocate$FormatData_lv);
	return class$;
}

$Class* FormatData_lv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun