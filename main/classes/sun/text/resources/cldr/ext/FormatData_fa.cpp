#include <sun/text/resources/cldr/ext/FormatData_fa.h>

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

$MethodInfo _FormatData_fa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_fa::*)()>(&FormatData_fa::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_fa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fa",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fa_MethodInfo_
};

$Object* allocate$FormatData_fa($Class* clazz) {
	return $of($alloc(FormatData_fa));
}

void FormatData_fa::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fa::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0698\u0627\u0646\u0648\u06cc\u0647\u0654"_s,
		u"\u0641\u0648\u0631\u06cc\u0647\u0654"_s,
		u"\u0645\u0627\u0631\u0633"_s,
		u"\u0622\u0648\u0631\u06cc\u0644"_s,
		u"\u0645\u0647\u0654"_s,
		u"\u0698\u0648\u0626\u0646"_s,
		u"\u0698\u0648\u0626\u06cc\u0647\u0654"_s,
		u"\u0627\u0648\u062a"_s,
		u"\u0633\u067e\u062a\u0627\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0628\u0631"_s,
		u"\u0646\u0648\u0627\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0627\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_standalone_MonthNames, $new($StringArray, {
		u"\u0698\u0627\u0646\u0648\u06cc\u0647"_s,
		u"\u0641\u0648\u0631\u06cc\u0647"_s,
		u"\u0645\u0627\u0631\u0633"_s,
		u"\u0622\u0648\u0631\u06cc\u0644"_s,
		u"\u0645\u0647"_s,
		u"\u0698\u0648\u0626\u0646"_s,
		u"\u0698\u0648\u0626\u06cc\u0647"_s,
		u"\u0627\u0648\u062a"_s,
		u"\u0633\u067e\u062a\u0627\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0628\u0631"_s,
		u"\u0646\u0648\u0627\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0627\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0698"_s,
		u"\u0641"_s,
		u"\u0645"_s,
		u"\u0622"_s,
		u"\u0645"_s,
		u"\u0698"_s,
		u"\u0698"_s,
		u"\u0627"_s,
		u"\u0633"_s,
		u"\u0627"_s,
		u"\u0646"_s,
		u"\u062f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u06cc\u06a9\u0634\u0646\u0628\u0647"_s,
		u"\u062f\u0648\u0634\u0646\u0628\u0647"_s,
		u"\u0633\u0647\u200c\u0634\u0646\u0628\u0647"_s,
		u"\u0686\u0647\u0627\u0631\u0634\u0646\u0628\u0647"_s,
		u"\u067e\u0646\u062c\u0634\u0646\u0628\u0647"_s,
		u"\u062c\u0645\u0639\u0647"_s,
		u"\u0634\u0646\u0628\u0647"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u06cc"_s,
		u"\u062f"_s,
		u"\u0633"_s,
		u"\u0686"_s,
		u"\u067e"_s,
		u"\u062c"_s,
		u"\u0634"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0633\u0647\u200c\u0645\u0627\u0647\u0647\u0654 \u0627\u0648\u0644"_s,
		u"\u0633\u0647\u200c\u0645\u0627\u0647\u0647\u0654 \u062f\u0648\u0645"_s,
		u"\u0633\u0647\u200c\u0645\u0627\u0647\u0647\u0654 \u0633\u0648\u0645"_s,
		u"\u0633\u0647\u200c\u0645\u0627\u0647\u0647\u0654 \u0686\u0647\u0627\u0631\u0645"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0633\u200c\u0645\u06f1"_s,
		u"\u0633\u200c\u0645\u06f2"_s,
		u"\u0633\u200c\u0645\u06f3"_s,
		u"\u0633\u200c\u0645\u06f4"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u06f1"_s,
		u"\u06f2"_s,
		u"\u06f3"_s,
		u"\u06f4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0642\u0628\u0644\u200c\u0627\u0632\u0638\u0647\u0631"_s,
		u"\u0628\u0639\u062f\u0627\u0632\u0638\u0647\u0631"_s,
		""_s,
		""_s,
		u"\u0628\u0627\u0645\u062f\u0627\u062f"_s,
		u"\u0635\u0628\u062d"_s,
		u"\u0638\u0647\u0631"_s,
		u"\u0639\u0635\u0631"_s,
		""_s,
		""_s,
		u"\u0634\u0628"_s,
		u"\u0646\u06cc\u0645\u0647\u200c\u0634\u0628"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0642"_s,
		u"\u0628"_s,
		""_s,
		""_s,
		u"\u0628"_s,
		u"\u0635"_s,
		u"\u0638"_s,
		u"\u0639"_s,
		""_s,
		""_s,
		u"\u0634"_s,
		u"\u0646"_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u0642.\u0638."_s,
		u"\u0628.\u0638."_s,
		""_s,
		""_s,
		u"\u0628\u0627\u0645\u062f\u0627\u062f"_s,
		u"\u0635\u0628\u062d"_s,
		u"\u0638\u0647\u0631"_s,
		u"\u0639\u0635\u0631"_s,
		""_s,
		""_s,
		u"\u0634\u0628"_s,
		u"\u0646\u06cc\u0645\u0647\u200c\u0634\u0628"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H:mm:ss (zzzz)"_s,
		"H:mm:ss (z)"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u062a\u0642\u0648\u06cc\u0645 \u0628\u0648\u062f\u0627\u06cc\u06cc"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"y/M/d GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"y/M/d G"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"\u0645\u06cc\u0644\u0627\u062f\u06cc"_s,
		"Meiji"_s,
		u"Taish\u014d"_s,
		u"Sh\u014dwa"_s,
		u"\u0647\u06cc\u0633\u06cc"_s,
		"Reiwa"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		u"\u0645."_s,
		"Meiji"_s,
		u"Taish\u014d"_s,
		u"Sh\u014dwa"_s,
		u"\u0647\u06cc\u0633\u06cc"_s,
		u"\u0631\u06cc\u0648\u0627"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_narrow_Eras, $new($StringArray, {
		u"\u0645"_s,
		"M"_s,
		"T"_s,
		"S"_s,
		u"\u0647\u200d"_s,
		u"\u0631"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u0642\u0628\u0644 \u0627\u0632 R.O.C."_s,
		u"\u062a\u0642\u0648\u06cc\u0645 \u0645\u06cc\u0646\u06af\u0648"_s
	}));
	$var($StringArray, metaValue_islamic_MonthNames, $new($StringArray, {
		u"\u0645\u062d\u0631\u0645"_s,
		u"\u0635\u0641\u0631"_s,
		u"\u0631\u0628\u06cc\u0639\u200c\u0627\u0644\u0627\u0648\u0644"_s,
		u"\u0631\u0628\u06cc\u0639\u200c\u0627\u0644\u062b\u0627\u0646\u06cc"_s,
		u"\u062c\u0645\u0627\u062f\u06cc\u200c\u0627\u0644\u0627\u0648\u0644"_s,
		u"\u062c\u0645\u0627\u062f\u06cc\u200c\u0627\u0644\u062b\u0627\u0646\u06cc"_s,
		u"\u0631\u062c\u0628"_s,
		u"\u0634\u0639\u0628\u0627\u0646"_s,
		u"\u0631\u0645\u0636\u0627\u0646"_s,
		u"\u0634\u0648\u0627\u0644"_s,
		u"\u0630\u06cc\u0642\u0639\u062f\u0647\u0654"_s,
		u"\u0630\u06cc\u062d\u062c\u0647\u0654"_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u0647\u062c\u0631\u06cc \u0642\u0645\u0631\u06cc"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_Eras, $new($StringArray, {
		""_s,
		u"\u0647\u200d.\u0642."_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u062a\u0642\u0648\u06cc\u0645 \u0645\u06cc\u0644\u0627\u062f\u06cc"_s);
	$var($StringArray, metaValue_arab_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"\u200e\u00a4#,##0.00"_s,
		"#,##0%"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.narrow.Eras"_s),
			$of(metaValue_java_time_japanese_narrow_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0633\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u062a\u0642\u0648\u06cc\u0645 \u0647\u062c\u0631\u06cc \u0642\u0645\u0631\u06cc \u0627\u0645\u200c\u0627\u0644\u0642\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a"_s,
				u"\u06f0"_s,
				"#"_s,
				u"\u200e\u2212"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				u"\u0646\u0627\u0639\u062f\u062f"_s,
				""_s,
				""_s
			}))
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
			$of("timezone.gmtFormat"_s),
			$of(u"{0} \u06af\u0631\u06cc\u0646\u0648\u06cc\u0686"_s)
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
			$of("japanese.narrow.Eras"_s),
			$of(metaValue_java_time_japanese_narrow_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u062a\u0642\u0648\u06cc\u0645 \u0647\u062c\u0631\u06cc \u0642\u0645\u0631\u06cc \u062c\u062f\u0648\u0644\u06cc \u0645\u062f\u0646\u06cc"_s)
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
				u"\u0642"_s,
				u"\u0645"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"\u0648\u0642\u062a \u0639\u0627\u062f\u06cc {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arabext"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u062a\u0642\u0648\u06cc\u0645 \u0698\u0627\u067e\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u06af\u0631\u06cc\u0646\u0648\u06cc\u0686"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0642\u0628\u0644 \u0627\u0632 \u0645\u06cc\u0644\u0627\u062f"_s,
				u"\u0645\u06cc\u0644\u0627\u062f\u06cc"_s
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1}\u060c \u0633\u0627\u0639\u062a {0}"_s,
				u"{1}\u060c \u0633\u0627\u0639\u062a {0}"_s,
				u"{1}\u060c\u200f {0}"_s,
				u"{1}\u060c\u200f {0}"_s
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
				u"\u200e\u2212"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u0646\u0627\u0639\u062f\u062f"_s,
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
			$of(u"\u062f\u0642\u06cc\u0642\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u062f\u0648\u0631\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0642.\u0638/\u0628.\u0638"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(metaValue_islamic_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("arab.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a"_s,
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
			$of(u"\u062a\u0642\u0648\u06cc\u0645 \u062c\u0645\u0647\u0648\u0631\u06cc \u0686\u06cc\u0646 (\u062a\u0627\u06cc\u0648\u0627\u0646)"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				"y/M/d GGGG"_s
			}))
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
			$of(u"\u0645\u0627\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of(metaValue_arab_NumberPatterns)
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
			$of(u"\u062b\u0627\u0646\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0645"_s,
				u"\u0635"_s,
				u"\u0631"_s,
				u"\u0631"_s,
				u"\u062c"_s,
				u"\u062c"_s,
				u"\u0631"_s,
				u"\u0634"_s,
				u"\u0631"_s,
				u"\u0634"_s,
				u"\u0630"_s,
				u"\u0630"_s,
				""_s
			}))
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
			$of(u"\u062a\u0642\u0648\u06cc\u0645 \u0647\u062c\u0631\u06cc \u0642\u0645\u0631\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("night1:19:00-24:00;morning2:04:00-12:00;afternoon1:12:00-13:00;morning1:01:00-04:00;afternoon2:13:00-19:00;night2:00:00-01:00"_s)
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
			$of(metaValue_standalone_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"\u0648\u0642\u062a {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0647\u0632\u0627\u0631 other:0\' \'\u0647\u0632\u0627\u0631}"_s,
				u"{one:00\' \'\u0647\u0632\u0627\u0631 other:00\' \'\u0647\u0632\u0627\u0631}"_s,
				u"{one:000\' \'\u0647\u0632\u0627\u0631 other:000\' \'\u0647\u0632\u0627\u0631}"_s,
				u"{one:0\' \'\u0645\u06cc\u0644\u06cc\u0648\u0646 other:0\' \'\u0645\u06cc\u0644\u06cc\u0648\u0646}"_s,
				u"{one:00\' \'\u0645\u06cc\u0644\u06cc\u0648\u0646 other:00\' \'\u0645\u06cc\u0644\u06cc\u0648\u0646}"_s,
				u"{one:000\' \'\u0645\u06cc\u0644\u06cc\u0648\u0646 other:000\' \'\u0645\u06cc\u0644\u06cc\u0648\u0646}"_s,
				u"{one:0\' \'\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f other:0\' \'\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f}"_s,
				u"{one:00\' \'\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f other:00\' \'\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f}"_s,
				u"{one:000\' \'\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f other:000\' \'\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f}"_s,
				u"{one:0\' \'\u0647\u0632\u0627\u0631\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f other:0\' \'\u0647\u0632\u0627\u0631\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f}"_s,
				u"{one:00\' \'\u0647\u0632\u0627\u0631\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f other:00\' \'\u0647\u0632\u0627\u0631\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f}"_s,
				u"{one:000\' \'\u0647\u0632\u0627\u0631\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f other:000\' \'\u0647\u0632\u0627\u0631\u0645\u06cc\u0644\u06cc\u0627\u0631\u062f}"_s
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
			$of(metaValue_DayNames)
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
			$of(u"\u0645\u0646\u0637\u0642\u0647\u0654 \u0632\u0645\u0627\u0646\u06cc"_s)
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
			$of(metaValue_arab_NumberPatterns)
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
			$of($$new($StringArray, {
				u"\u0642.\u0645."_s,
				u"\u0645."_s
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"y/M/d G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0631\u0648\u0632 \u0647\u0641\u062a\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1}\u060c \u0633\u0627\u0639\u062a {0}"_s,
				u"{1}\u060c \u0633\u0627\u0639\u062a {0}"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of("timezone.hourFormat"_s),
			$of(u"\u200e+HH:mm;\u200e\u2212HH:mm"_s)
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
			$of(u"\u0647\u0641\u062a\u0647"_s)
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
				u"{one:0\u00a0\u0647\u0632\u0627\u0631 other:0\u00a0\u0647\u0632\u0627\u0631}"_s,
				u"{one:00\u00a0\u0647\u0632\u0627\u0631 other:00\u00a0\u0647\u0632\u0627\u0631}"_s,
				u"{one:000\u00a0\u0647\u0632\u0627\u0631 other:000\u00a0\u0647\u0632\u0627\u0631}"_s,
				u"{one:0\u00a0\u0645\u06cc\u0644\u06cc\u0648\u0646 other:0\u00a0\u0645\u06cc\u0644\u06cc\u0648\u0646}"_s,
				u"{one:00\u00a0\u0645\u06cc\u0644\u06cc\u0648\u0646 other:00\u00a0\u0645\u06cc\u0644\u06cc\u0648\u0646}"_s,
				u"{one:000\u00a0\u0645 other:000\u00a0\u0645}"_s,
				u"{one:0\u00a0\u0645 other:0\u00a0\u0645}"_s,
				u"{one:00\u00a0\u0645 other:00\u00a0\u0645}"_s,
				u"{one:000\u00a0\u0628 other:000B}"_s,
				u"{one:0\u00a0\u062a other:0\u00a0\u062a\u0631\u06cc\u0644\u06cc\u0648\u0646}"_s,
				u"{one:00\u00a0\u062a other:00\u00a0\u062a}"_s,
				u"{one:000\u00a0\u062a other:000\u00a0\u062a}"_s
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
			$of(u"\u0648\u0642\u062a \u062a\u0627\u0628\u0633\u062a\u0627\u0646\u06cc {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"y/M/d"_s
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
			$of(metaValue_MonthNames)
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
			$of(u"\u0633\u0627\u0639\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(metaValue_islamic_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u062a\u0642\u0648\u06cc\u0645 \u0628\u0648\u062f\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_standalone_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u200e\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				u"\u200e\u00a4\u00a0#,##0.00;\u200e(\u00a4\u00a0#,##0.00)"_s
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_fa::FormatData_fa() {
}

$Class* FormatData_fa::load$($String* name, bool initialize) {
	$loadClass(FormatData_fa, name, initialize, &_FormatData_fa_ClassInfo_, allocate$FormatData_fa);
	return class$;
}

$Class* FormatData_fa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun