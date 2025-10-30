#include <sun/text/resources/cldr/ext/FormatData_sk.h>

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

$MethodInfo _FormatData_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sk::*)()>(&FormatData_sk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sk",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sk_MethodInfo_
};

$Object* allocate$FormatData_sk($Class* clazz) {
	return $of($alloc(FormatData_sk));
}

void FormatData_sk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sk::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"janu\u00e1ra"_s,
		u"febru\u00e1ra"_s,
		"marca"_s,
		u"apr\u00edla"_s,
		u"m\u00e1ja"_s,
		u"j\u00fana"_s,
		u"j\u00fala"_s,
		"augusta"_s,
		"septembra"_s,
		u"okt\u00f3bra"_s,
		"novembra"_s,
		"decembra"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"jan"_s,
		"feb"_s,
		"mar"_s,
		"apr"_s,
		u"m\u00e1j"_s,
		u"j\u00fan"_s,
		u"j\u00fal"_s,
		"aug"_s,
		"sep"_s,
		"okt"_s,
		"nov"_s,
		"dec"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"j"_s,
		"f"_s,
		"m"_s,
		"a"_s,
		"m"_s,
		"j"_s,
		"j"_s,
		"a"_s,
		"s"_s,
		"o"_s,
		"n"_s,
		"d"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"nede\u013ea"_s,
		"pondelok"_s,
		"utorok"_s,
		"streda"_s,
		u"\u0161tvrtok"_s,
		"piatok"_s,
		"sobota"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"ne"_s,
		"po"_s,
		"ut"_s,
		"st"_s,
		u"\u0161t"_s,
		"pi"_s,
		"so"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"n"_s,
		"p"_s,
		"u"_s,
		"s"_s,
		u"\u0161"_s,
		"p"_s,
		"s"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1. \u0161tvr\u0165rok"_s,
		u"2. \u0161tvr\u0165rok"_s,
		u"3. \u0161tvr\u0165rok"_s,
		u"4. \u0161tvr\u0165rok"_s
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
		"o polnoci"_s,
		"napoludnie"_s,
		u"r\u00e1no"_s,
		"dopoludnia"_s,
		u"popoludn\u00ed"_s,
		""_s,
		u"ve\u010der"_s,
		""_s,
		"v noci"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		"o poln."_s,
		"nap."_s,
		u"r\u00e1no"_s,
		"dop."_s,
		"pop."_s,
		""_s,
		u"ve\u010d."_s,
		""_s,
		"v n."_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		"o poln."_s,
		"napol."_s,
		u"r\u00e1no"_s,
		"dopol."_s,
		"popol."_s,
		""_s,
		u"ve\u010der"_s,
		""_s,
		"v noci"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"pred Kr."_s,
		"po Kr."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
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
		"EEEE, d. M. y G"_s,
		"d. M. y G"_s,
		"d. M. y G"_s,
		"d.M.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d. M. y GGGG"_s,
		"d. M. y GGGG"_s,
		"d. M. y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		"pred ROC"_s,
		"ROC"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"gregori\u00e1nsky kalend\u00e1r"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("rok"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"islamsk\u00fd kalend\u00e1r (Umm al-Qura)"_s)
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
			$of(u"Islamsk\u00fd ob\u010diansky kalend\u00e1r"_s)
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"japonsk\u00fd kalend\u00e1r"_s)
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
				"pred Kristom"_s,
				"po Kristovi"_s
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
				"{1}, {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s,
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
				"e"_s,
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
			$of(u"min\u00fata"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"letopo\u010det"_s)
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
				"al-muharram"_s,
				"safar"_s,
				u"rab\u00ed\u00b4 al-avval"_s,
				u"rab\u00ed\u00b4ath-th\u00e1n\u00ed"_s,
				u"d\u017eum\u00e1d\u00e1 l-\u00fal\u00e1"_s,
				u"d\u017eum\u00e1d\u00e1 l-\u00e1chira"_s,
				u"rad\u017eab"_s,
				u"\u0161a\u00b4 b\u00e1n"_s,
				u"ramad\u00e1n"_s,
				u"\u0161auv\u00e1l"_s,
				u"dh\u00fa l-ka\u00b4 da"_s,
				u"dh\u00fa l-hid\u017ed\u017ea"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u010d\u00ednsky republik\u00e1nsky kalend\u00e1r"_s)
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
			$of("mesiac"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunda"_s)
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
			$of(u"islamsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:22:00-04:00;morning2:09:00-12:00;afternoon1:12:00-18:00;morning1:04:00-09:00;evening1:18:00-22:00"_s)
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
			$of(u"\u010dasov\u00e9 p\u00e1smo {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'tis\u00edc few:0\' \'tis\u00edce many:0\' \'tis\u00edca other:0\' \'tis\u00edc}"_s,
				u"{one:00\' \'tis\u00edc few:00\' \'tis\u00edc many:00\' \'tis\u00edca other:00\' \'tis\u00edc}"_s,
				u"{one:000\' \'tis\u00edc few:000\' \'tis\u00edc many:000\' \'tis\u00edca other:000\' \'tis\u00edc}"_s,
				u"{one:0\' \'mili\u00f3n few:0\' \'mili\u00f3ny many:0\' \'mili\u00f3na other:0\' \'mili\u00f3nov}"_s,
				u"{one:00\' \'mili\u00f3nov few:00\' \'mili\u00f3nov many:00\' \'mili\u00f3na other:00\' \'mili\u00f3nov}"_s,
				u"{one:000\' \'mili\u00f3nov few:000\' \'mili\u00f3nov many:000\' \'mili\u00f3na other:000\' \'mili\u00f3nov}"_s,
				u"{one:0\' \'miliarda few:0\' \'miliardy many:0\' \'miliardy other:0\' \'mili\u00e1rd}"_s,
				u"{one:00\' \'mili\u00e1rd few:00\' \'mili\u00e1rd many:00\' \'miliardy other:00\' \'mili\u00e1rd}"_s,
				u"{one:000\' \'mili\u00e1rd few:000\' \'mili\u00e1rd many:000\' \'miliardy other:000\' \'mili\u00e1rd}"_s,
				u"{one:0\' \'bili\u00f3n few:0\' \'bili\u00f3ny many:0\' \'bili\u00f3na other:0\' \'bili\u00f3nov}"_s,
				u"{one:00\' \'bili\u00f3nov few:00\' \'bili\u00f3nov many:00\' \'bili\u00f3na other:00\' \'bili\u00f3nov}"_s,
				u"{one:000\' \'bili\u00f3nov few:000\' \'bili\u00f3nov many:000\' \'bili\u00f3na other:000\' \'bili\u00f3nov}"_s
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
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u010dasov\u00e9 p\u00e1smo"_s)
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
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"de\u0148 t\u00fd\u017ed\u0148a"_s)
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
			$of(u"t\u00fd\u017ede\u0148"_s)
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
				u"{one:0\u00a0tis\'.\' few:0\u00a0tis\'.\' many:0\u00a0tis\'.\' other:0\u00a0tis\'.\'}"_s,
				u"{one:00\u00a0tis\'.\' few:00\u00a0tis\'.\' many:00\u00a0tis\'.\' other:00\u00a0tis\'.\'}"_s,
				u"{one:000\u00a0tis\'.\' few:000\u00a0tis\'.\' many:000\u00a0tis\'.\' other:000\u00a0tis\'.\'}"_s,
				u"{one:0\u00a0mil\'.\' few:0\u00a0mil\'.\' many:0\u00a0mil\'.\' other:0\u00a0mil\'.\'}"_s,
				u"{one:00\u00a0mil\'.\' few:00\u00a0mil\'.\' many:00\u00a0mil\'.\' other:00\u00a0mil\'.\'}"_s,
				u"{one:000\u00a0mil\'.\' few:000\u00a0mil\'.\' many:000\u00a0mil\'.\' other:000\u00a0mil\'.\'}"_s,
				u"{one:0\u00a0mld\'.\' few:0\u00a0mld\'.\' many:0\u00a0mld\'.\' other:0\u00a0mld\'.\'}"_s,
				u"{one:00\u00a0mld\'.\' few:00\u00a0mld\'.\' many:00\u00a0mld\'.\' other:00\u00a0mld\'.\'}"_s,
				u"{one:000\u00a0mld\'.\' few:000\u00a0mld\'.\' many:000\u00a0mld\'.\' other:000\u00a0mld\'.\'}"_s,
				u"{one:0\u00a0bil\'.\' few:0\u00a0bil\'.\' many:0\u00a0bil\'.\' other:0\u00a0bil\'.\'}"_s,
				u"{one:00\u00a0bil\'.\' few:00\u00a0bil\'.\' many:00\u00a0bil\'.\' other:00\u00a0bil\'.\'}"_s,
				u"{one:000\u00a0bil\'.\' few:000\u00a0bil\'.\' many:000\u00a0bil\'.\' other:000\u00a0bil\'.\'}"_s
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
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d. MMMM y"_s,
				"d. MMMM y"_s,
				"d. M. y"_s,
				"d. M. y"_s
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
			$of("one:i = 1 and v = 0;few:i = 2..4 and v = 0;many:v != 0"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("hodina"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"muh."_s,
				"saf."_s,
				"rab. I"_s,
				"rab. II"_s,
				u"d\u017eum. I"_s,
				u"d\u017eum. II"_s,
				"rad."_s,
				u"\u0161a."_s,
				"ram."_s,
				u"\u0161au."_s,
				u"dh\u00fa l-k."_s,
				u"dh\u00fa l-h."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"buddhistick\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"janu\u00e1r"_s,
				u"febru\u00e1r"_s,
				"marec"_s,
				u"apr\u00edl"_s,
				u"m\u00e1j"_s,
				u"j\u00fan"_s,
				u"j\u00fal"_s,
				"august"_s,
				"september"_s,
				u"okt\u00f3ber"_s,
				"november"_s,
				"december"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				u"#,##0\u00a0%"_s,
				u"#,##0.00\u00a0\u00a4;(#,##0.00\u00a0\u00a4)"_s
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_sk::FormatData_sk() {
}

$Class* FormatData_sk::load$($String* name, bool initialize) {
	$loadClass(FormatData_sk, name, initialize, &_FormatData_sk_ClassInfo_, allocate$FormatData_sk);
	return class$;
}

$Class* FormatData_sk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun