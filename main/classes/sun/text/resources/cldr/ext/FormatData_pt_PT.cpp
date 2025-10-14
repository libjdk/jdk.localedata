#include <sun/text/resources/cldr/ext/FormatData_pt_PT.h>

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

$MethodInfo _FormatData_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_pt_PT::*)()>(&FormatData_pt_PT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_pt_PT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_pt_PT",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pt_PT_MethodInfo_
};

$Object* allocate$FormatData_pt_PT($Class* clazz) {
	return $of($alloc(FormatData_pt_PT));
}

void FormatData_pt_PT::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_pt_PT::getContents() {
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"domingo"_s,
		"segunda"_s,
		u"ter\u00e7a"_s,
		"quarta"_s,
		"quinta"_s,
		"sexta"_s,
		u"s\u00e1bado"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1.\u00ba trimestre"_s,
		u"2.\u00ba trimestre"_s,
		u"3.\u00ba trimestre"_s,
		u"4.\u00ba trimestre"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"da manh\u00e3"_s,
		"da tarde"_s,
		"meia-noite"_s,
		"meio-dia"_s,
		u"da manh\u00e3"_s,
		""_s,
		"da tarde"_s,
		""_s,
		"da noite"_s,
		""_s,
		"da madrugada"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s,
		"meia-noite"_s,
		"meio-dia"_s,
		u"manh\u00e3"_s,
		""_s,
		"tarde"_s,
		""_s,
		"noite"_s,
		""_s,
		"madrugada"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s,
		"meia-noite"_s,
		"meio-dia"_s,
		u"da manh\u00e3"_s,
		""_s,
		"da tarde"_s,
		""_s,
		"da noite"_s,
		""_s,
		"da madrugada"_s,
		""_s
	}));
	$var($String, metaValue_timezone_regionFormat_daylight, u"Hora padr\u00e3o de {0}"_s);
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d \'de\' MMMM \'de\' y G"_s,
		"d \'de\' MMMM \'de\' y G"_s,
		"d MMM y G"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d \'de\' MMMM \'de\' y GGGG"_s,
		"d \'de\' MMMM \'de\' y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y GGGG"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Calend\u00e1rio gregoriano"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"Calend\u00e1rio isl\u00e2mico (Umm al-Qura)"_s)
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
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
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
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Calend\u00e1rio isl\u00e2mico (civil)"_s)
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
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(metaValue_timezone_regionFormat_daylight)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Calend\u00e1rio japon\u00eas"_s)
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
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1} \'\u00e0s\' {0}"_s,
				u"{1} \'\u00e0s\' {0}"_s,
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
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("am/pm"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Calend\u00e1rio isl\u00e2mico"_s)
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
				u"{one:0\u00a0mil other:0\u00a0mil}"_s,
				u"{one:00\u00a0mil other:00\u00a0mil}"_s,
				u"{one:000\u00a0mil other:000\u00a0mil}"_s,
				u"{one:0\u00a0M other:0\u00a0M}"_s,
				u"{one:00\u00a0M other:00\u00a0M}"_s,
				u"{one:000\u00a0M other:000\u00a0M}"_s,
				u"{one:0\u00a0mM other:0\u00a0mM}"_s,
				u"{one:00\u00a0mM other:00\u00a0mM}"_s,
				u"{one:000\u00a0mM other:000\u00a0mM}"_s,
				u"{one:0\u00a0Bi other:0\u00a0Bi}"_s,
				u"{one:00\u00a0Bi other:00\u00a0Bi}"_s,
				u"{one:000\u00a0Bi other:000\u00a0Bi}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(metaValue_timezone_regionFormat_daylight)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d \'de\' MMMM \'de\' y"_s,
				"d \'de\' MMMM \'de\' y"_s,
				"dd/MM/y"_s,
				"dd/MM/yy"_s
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
			$of("PluralRules"_s),
			$of("one:i = 1 and v = 0"_s)
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
			$of("calendarname.buddhist"_s),
			$of(u"Calend\u00e1rio budista"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of("Hora de {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				u"#,##0.00\u00a0\u00a4;(#,##0.00\u00a0\u00a4)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:0\' \'mil other:0\' \'mil}"_s,
				"{one:00\' \'mil other:00\' \'mil}"_s,
				"{one:000\' \'mil other:000\' \'mil}"_s,
				u"{one:0\' \'milh\u00e3o other:0\' \'milh\u00f5es}"_s,
				u"{one:00\' \'milh\u00f5es other:00\' \'milh\u00f5es}"_s,
				u"{one:000\' \'milh\u00f5es other:000\' \'milh\u00f5es}"_s,
				u"{one:0\' \'mil\' \'milh\u00f5es other:0\' \'mil\' \'milh\u00f5es}"_s,
				u"{one:00\' \'mil\' \'milh\u00f5es other:00\' \'mil\' \'milh\u00f5es}"_s,
				u"{one:000\' \'mil\' \'milh\u00f5es other:000\' \'mil\' \'milh\u00f5es}"_s,
				u"{one:0\' \'bili\u00e3o other:0\' \'bili\u00f5es}"_s,
				u"{one:00\' \'bili\u00f5es other:00\' \'bili\u00f5es}"_s,
				u"{one:000\' \'bili\u00f5es other:000\' \'bili\u00f5es}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
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

FormatData_pt_PT::FormatData_pt_PT() {
}

$Class* FormatData_pt_PT::load$($String* name, bool initialize) {
	$loadClass(FormatData_pt_PT, name, initialize, &_FormatData_pt_PT_ClassInfo_, allocate$FormatData_pt_PT);
	return class$;
}

$Class* FormatData_pt_PT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun