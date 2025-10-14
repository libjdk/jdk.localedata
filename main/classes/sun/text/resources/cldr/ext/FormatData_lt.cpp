#include <sun/text/resources/cldr/ext/FormatData_lt.h>

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

$MethodInfo _FormatData_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_lt::*)()>(&FormatData_lt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_lt",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lt_MethodInfo_
};

$Object* allocate$FormatData_lt($Class* clazz) {
	return $of($alloc(FormatData_lt));
}

void FormatData_lt::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_lt::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"sausio"_s,
		"vasario"_s,
		"kovo"_s,
		u"baland\u017eio"_s,
		u"gegu\u017e\u0117s"_s,
		u"bir\u017eelio"_s,
		"liepos"_s,
		u"rugpj\u016b\u010dio"_s,
		u"rugs\u0117jo"_s,
		"spalio"_s,
		u"lapkri\u010dio"_s,
		u"gruod\u017eio"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"saus."_s,
		"vas."_s,
		"kov."_s,
		"bal."_s,
		"geg."_s,
		u"bir\u017e."_s,
		"liep."_s,
		"rugp."_s,
		"rugs."_s,
		"spal."_s,
		"lapkr."_s,
		"gruod."_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"S"_s,
		"V"_s,
		"K"_s,
		"B"_s,
		"G"_s,
		"B"_s,
		"L"_s,
		"R"_s,
		"R"_s,
		"S"_s,
		"L"_s,
		"G"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"sekmadienis"_s,
		"pirmadienis"_s,
		"antradienis"_s,
		u"tre\u010diadienis"_s,
		"ketvirtadienis"_s,
		"penktadienis"_s,
		u"\u0161e\u0161tadienis"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"sk"_s,
		"pr"_s,
		"an"_s,
		"tr"_s,
		"kt"_s,
		"pn"_s,
		u"\u0161t"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"S"_s,
		"P"_s,
		"A"_s,
		"T"_s,
		"K"_s,
		"P"_s,
		u"\u0160"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"I ketvirtis"_s,
		"II ketvirtis"_s,
		"III ketvirtis"_s,
		"IV ketvirtis"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"I k."_s,
		"II k."_s,
		"III k."_s,
		"IV k."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"prie\u0161piet"_s,
		"popiet"_s,
		"vidurnaktis"_s,
		"perpiet"_s,
		"rytas"_s,
		""_s,
		u"popiet\u0117"_s,
		""_s,
		"vakaras"_s,
		""_s,
		"naktis"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"pr.\u00a0p."_s,
		"pop."_s,
		"vidurnaktis"_s,
		"perpiet"_s,
		"rytas"_s,
		""_s,
		u"popiet\u0117"_s,
		""_s,
		"vakaras"_s,
		""_s,
		"naktis"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"pr. Kr."_s,
		"po Kr."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
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
		"y MMMM d G, EEEE"_s,
		"y MMMM d G"_s,
		"y MMM d G"_s,
		"y-MM-dd G"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"y MMMM d GGGG, EEEE"_s,
		"y MMMM d GGGG"_s,
		"y MMM d GGGG"_s,
		"y-MM-dd GGGG"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		"po Kristaus"_s,
		u"Meid\u017ei"_s,
		u"Tai\u0161o"_s,
		u"\u0160ova"_s,
		"Heisei"_s,
		"Reiwa"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		"po Kr."_s,
		u"Meid\u017ei"_s,
		u"Tai\u0161o"_s,
		u"\u0160ova"_s,
		"Heisei"_s,
		"Reiwa"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"Prie\u0161 R.O.C."_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, "Grigaliaus kalendorius"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("metai"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("Islamo kalendorius (Umm al-Qura)"_s)
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
			$of($$new($StringArray, {
				"I ketv."_s,
				"II ketv."_s,
				"III ketv."_s,
				"IV ketv."_s
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
			$of(u"Islamo kalendorius (lentelinis, pilietin\u0117 era)"_s)
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
			$of(u"\u017diemos laikas: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"japon\u0173 kalendorius"_s)
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
				u"prie\u0161 Krist\u0173"_s,
				"po Kristaus"_s
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
				u"\u2212"_s,
				u"\u00d710^"_s,
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
			$of(u"minut\u0117"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"iki piet\u0173 / po piet\u0173"_s)
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
			$of("Kinijos Respublikos kalendorius"_s)
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
			$of(u"m\u0117nuo"_s)
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
			$of(u"sekund\u0117"_s)
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
			$of("islamo kalendorius"_s)
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
			$of("Laikas: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'t\u016bkstantis few:0\' \'t\u016bkstan\u010diai many:0\' \'t\u016bkstan\u010dio other:0\' \'t\u016bkstan\u010di\u0173}"_s,
				u"{one:00\' \'t\u016bkstantis few:00\' \'t\u016bkstan\u010diai many:00\' \'t\u016bkstan\u010dio other:00\' \'t\u016bkstan\u010di\u0173}"_s,
				u"{one:000\' \'t\u016bkstantis few:000\' \'t\u016bkstan\u010diai many:000\' \'t\u016bkstan\u010dio other:000\' \'t\u016bkstan\u010di\u0173}"_s,
				u"{one:0\' \'milijonas few:0\' \'milijonai many:0\' \'milijono other:0\' \'milijon\u0173}"_s,
				u"{one:00\' \'milijonas few:00\' \'milijonai many:00\' \'milijono other:00\' \'milijon\u0173}"_s,
				u"{one:000\' \'milijonas few:000\' \'milijonai many:000\' \'milijono other:000\' \'milijon\u0173}"_s,
				u"{one:0\' \'milijardas few:0\' \'milijardai many:0\' \'milijardo other:0\' \'milijard\u0173}"_s,
				u"{one:00\' \'milijardas few:00\' \'milijardai many:00\' \'milijardo other:00\' \'milijard\u0173}"_s,
				u"{one:000\' \'milijardas few:000\' \'milijardai many:000\' \'milijardo other:000\' \'milijard\u0173}"_s,
				u"{one:0\' \'trilijonas few:0\' \'trilijonai many:0\' \'trilijono other:0\' \'trilijon\u0173}"_s,
				u"{one:00\' \'trilijonas few:00\' \'trilijonai many:00\' \'trilijono other:00\' \'trilijon\u0173}"_s,
				u"{one:000\' \'trilijonas few:000\' \'trilijonai many:000\' \'trilijono other:000\' \'trilijon\u0173}"_s
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
			$of("laiko juosta"_s)
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
			$of(u"savait\u0117s diena"_s)
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
			$of("timezone.hourFormat"_s),
			$of(u"+HH:mm;\u2212HH:mm"_s)
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
			$of(u"savait\u0117"_s)
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
				u"{one:0\u00a0t\u016bkst\'.\' few:0\u00a0t\u016bkst\'.\' many:0\u00a0t\u016bkst\'.\' other:0\u00a0t\u016bkst\'.\'}"_s,
				u"{one:00\u00a0t\u016bkst\'.\' few:00\u00a0t\u016bkst\'.\' many:00\u00a0t\u016bkst\'.\' other:00\u00a0t\u016bkst\'.\'}"_s,
				u"{one:000\u00a0t\u016bkst\'.\' few:000\u00a0t\u016bkst\'.\' many:000\u00a0t\u016bkst\'.\' other:000\u00a0t\u016bkst\'.\'}"_s,
				u"{one:0\u00a0mln\'.\' few:0\u00a0mln\'.\' many:0\u00a0mln\'.\' other:0\u00a0mln\'.\'}"_s,
				u"{one:00\u00a0mln\'.\' few:00\u00a0mln\'.\' many:00\u00a0mln\'.\' other:00\u00a0mln\'.\'}"_s,
				u"{one:000\u00a0mln\'.\' few:000\u00a0mln\'.\' many:000\u00a0mln\'.\' other:000\u00a0mln\'.\'}"_s,
				u"{one:0\u00a0mlrd\'.\' few:0\u00a0mlrd\'.\' many:0\u00a0mlrd\'.\' other:0\u00a0mlrd\'.\'}"_s,
				u"{one:00\u00a0mlrd\'.\' few:00\u00a0mlrd\'.\' many:00\u00a0mlrd\'.\' other:00\u00a0mlrd\'.\'}"_s,
				u"{one:000\u00a0mlrd\'.\' few:000\u00a0mlrd\'.\' many:000\u00a0mlrd\'.\' other:000\u00a0mlrd\'.\'}"_s,
				u"{one:0\u00a0trln\'.\' few:0\u00a0trln\'.\' many:0\u00a0trln\'.\' other:0\u00a0trln\'.\'}"_s,
				u"{one:00\u00a0trln\'.\' few:00\u00a0trln\'.\' many:00\u00a0trln\'.\' other:00\u00a0trln\'.\'}"_s,
				u"{one:000\u00a0trln\'.\' few:000\u00a0trln\'.\' many:000\u00a0trln\'.\' other:000\u00a0trln\'.\'}"_s
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
			$of("Vasaros laikas: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y \'m\'. MMMM d \'d\'., EEEE"_s,
				"y \'m\'. MMMM d \'d\'."_s,
				"y-MM-dd"_s,
				"y-MM-dd"_s
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
			$of("one:n % 10 = 1 and n % 100 != 11..19;few:n % 10 = 2..9 and n % 100 != 11..19;many:f != 0"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("valanda"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"budist\u0173 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"sausis"_s,
				"vasaris"_s,
				"kovas"_s,
				"balandis"_s,
				u"gegu\u017e\u0117"_s,
				u"bir\u017eelis"_s,
				"liepa"_s,
				u"rugpj\u016btis"_s,
				u"rugs\u0117jis"_s,
				"spalis"_s,
				"lapkritis"_s,
				"gruodis"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				u"#,##0\u00a0%"_s,
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
			$of("japanese.Eras"_s),
			$of(metaValue_java_time_japanese_Eras)
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

FormatData_lt::FormatData_lt() {
}

$Class* FormatData_lt::load$($String* name, bool initialize) {
	$loadClass(FormatData_lt, name, initialize, &_FormatData_lt_ClassInfo_, allocate$FormatData_lt);
	return class$;
}

$Class* FormatData_lt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun