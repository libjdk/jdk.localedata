#include <sun/text/resources/cldr/ext/FormatData_ks.h>

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

$MethodInfo _FormatData_ks_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ks::*)()>(&FormatData_ks::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ks_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ks",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ks_MethodInfo_
};

$Object* allocate$FormatData_ks($Class* clazz) {
	return $of($alloc(FormatData_ks));
}

void FormatData_ks::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ks::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u062c\u0646\u0624\u0631\u06cc"_s,
		u"\u0641\u0631\u0624\u0631\u06cc"_s,
		u"\u0645\u0627\u0631\u0655\u0686"_s,
		u"\u0627\u067e\u0631\u06cc\u0644"_s,
		u"\u0645\u06cc\u0654"_s,
		u"\u062c\u0648\u0657\u0646"_s,
		u"\u062c\u0648\u0657\u0644\u0627\u06cc\u06cc"_s,
		u"\u0627\u06af\u0633\u062a"_s,
		u"\u0633\u062a\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0648\u0657\u0628\u0631"_s,
		u"\u0646\u0648\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u062c"_s,
		u"\u0641"_s,
		u"\u0645"_s,
		u"\u0627"_s,
		u"\u0645"_s,
		u"\u062c"_s,
		u"\u062c"_s,
		u"\u0627"_s,
		u"\u0633"_s,
		u"\u0633"_s,
		u"\u0627"_s,
		u"\u0646"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0627\u064e\u062a\u06be\u0648\u0627\u0631"_s,
		u"\u0698\u0654\u0646\u062f\u0631\u0655\u0631\u0648\u0627\u0631"_s,
		u"\u0628\u06c6\u0645\u0648\u0627\u0631"_s,
		u"\u0628\u0648\u062f\u0648\u0627\u0631"_s,
		u"\u0628\u0631\u0620\u0633\u0648\u0627\u0631"_s,
		u"\u062c\u064f\u0645\u06c1"_s,
		u"\u0628\u0679\u0648\u0627\u0631"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0622\u062a\u06be\u0648\u0627\u0631"_s,
		u"\u0698\u0654\u0646\u062f\u0655\u0631\u0648\u0627\u0631"_s,
		u"\u0628\u06c6\u0645\u0648\u0627\u0631"_s,
		u"\u0628\u0648\u062f\u0648\u0627\u0631"_s,
		u"\u0628\u0631\u0620\u0633\u0648\u0627\u0631"_s,
		u"\u062c\u064f\u0645\u06c1"_s,
		u"\u0628\u0679\u0648\u0627\u0631"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0627"_s,
		u"\u0698"_s,
		u"\u0628"_s,
		u"\u0628"_s,
		u"\u0628"_s,
		u"\u062c"_s,
		u"\u0628"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u06af\u06c4\u0691\u0646\u06cc\u064f\u06a9 \u0698\u06c4\u0628\u0627\u06af"_s,
		u"\u062f\u06c6\u06cc\u0650\u0645 \u0698\u06c4\u0628\u0627\u06af"_s,
		u"\u062a\u0631\u06cc\u0650\u0645 \u0698\u06c4\u0628\u0627\u06af"_s,
		u"\u0698\u0648\u0657\u0631\u0650\u0645 \u0698\u06c4\u0628\u0627\u06af"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0698\u06c4\u0628\u0627\u06af"_s,
		u"\u062f\u06c6\u06cc\u0650\u0645 \u0698\u06c4\u0628\u0627\u06af"_s,
		u"\u062a\u0631\u06cc\u0650\u0645 \u0698\u06c4\u0628\u0627\u06af"_s,
		u"\u0698\u0648\u0657\u0631\u0650\u0645 \u0698\u06c4\u0628\u0627\u06af"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0628\u06cc \u0633\u06cc"_s,
		u"\u0627\u06d2 \u0688\u06cc"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, MMMM d, Gy"_s,
		"MMMM d, Gy"_s,
		"MMM d, Gy"_s,
		"M/d/Gy"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, MMMM d, GGGGy"_s,
		"MMMM d, GGGGy"_s,
		"MMM d, GGGGy"_s,
		"M/d/GGGGy"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u06af\u0631\u06af\u0648\u0631\u06cc\u064e\u0646 \u06a9\u06cc\u0644\u0646\u0691\u064e\u0631"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0624\u0631\u06cc"_s)
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
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a"_s,
				u"\u06f0"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
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
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0632\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0627\u0650\u0633\u0644\u0672\u0645\u06cc \u0627\u0650\u062c\u062a\u0645\u0672\u06cc\u06cc \u06a9\u06cc\u0644\u0646\u0691\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("DefaultNumberingSystem"_s),
			$of("arabext"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u062c\u0627\u067e\u0672\u0646\u06cd \u06a9\u06cc\u0644\u0646\u0691\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0642\u0628\u0655\u0644 \u0645\u0633\u06cc\u0656\u062d"_s,
				u"\u0639\u06cc\u0656\u0633\u0648\u06cc \u0633\u0646\u06c1\u0655"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u06c1\u0641\u062a\u064f\u06a9 \u062f\u06c4\u06c1"_s)
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
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0645\u0650\u0646\u064e\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u062f\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0635\u0628\u062d/\u0631\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of("calendarname.roc"_s),
			$of(u"\u062c\u0645\u0648\u0657\u0631\u06cc\u0672\u062a\u06cc \u0686\u06cc\u0656\u0646\u06cc \u06a9\u06cc\u0644\u064e\u0646\u0691\u064e\u0631"_s)
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
			$of("field.month"_s),
			$of(u"\u0631\u0620\u062a\u06be"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0633\u0620\u06a9\u064e\u0646\u0691"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u06c1\u0641\u062a\u06c1\u0655"_s)
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
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0627\u0650\u0633\u0644\u0672\u0645\u06cc \u06a9\u06cc\u0644\u0646\u0691\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, y"_s,
				"MMMM d, y"_s,
				"MMM d, y"_s,
				"M/d/yy"_s
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
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u06af\u0672\u0646\u0679\u06c1\u0655"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0628\u064f\u062f\u064e\u0646 \u06c1\u064f\u0646\u062f \u06a9\u06cc\u0644\u0646\u0691\u064e\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
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
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_ks::FormatData_ks() {
}

$Class* FormatData_ks::load$($String* name, bool initialize) {
	$loadClass(FormatData_ks, name, initialize, &_FormatData_ks_ClassInfo_, allocate$FormatData_ks);
	return class$;
}

$Class* FormatData_ks::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun