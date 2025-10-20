#include <sun/text/resources/cldr/ext/FormatData_ar.h>

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

$MethodInfo _FormatData_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar::*)()>(&FormatData_ar::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_MethodInfo_
};

$Object* allocate$FormatData_ar($Class* clazz) {
	return $of($alloc(FormatData_ar));
}

void FormatData_ar::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u064a\u0646\u0627\u064a\u0631"_s,
		u"\u0641\u0628\u0631\u0627\u064a\u0631"_s,
		u"\u0645\u0627\u0631\u0633"_s,
		u"\u0623\u0628\u0631\u064a\u0644"_s,
		u"\u0645\u0627\u064a\u0648"_s,
		u"\u064a\u0648\u0646\u064a\u0648"_s,
		u"\u064a\u0648\u0644\u064a\u0648"_s,
		u"\u0623\u063a\u0633\u0637\u0633"_s,
		u"\u0633\u0628\u062a\u0645\u0628\u0631"_s,
		u"\u0623\u0643\u062a\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0641\u0645\u0628\u0631"_s,
		u"\u062f\u064a\u0633\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u064a"_s,
		u"\u0641"_s,
		u"\u0645"_s,
		u"\u0623"_s,
		u"\u0648"_s,
		u"\u0646"_s,
		u"\u0644"_s,
		u"\u063a"_s,
		u"\u0633"_s,
		u"\u0643"_s,
		u"\u0628"_s,
		u"\u062f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0627\u0644\u0623\u062d\u062f"_s,
		u"\u0627\u0644\u0627\u062b\u0646\u064a\u0646"_s,
		u"\u0627\u0644\u062b\u0644\u0627\u062b\u0627\u0621"_s,
		u"\u0627\u0644\u0623\u0631\u0628\u0639\u0627\u0621"_s,
		u"\u0627\u0644\u062e\u0645\u064a\u0633"_s,
		u"\u0627\u0644\u062c\u0645\u0639\u0629"_s,
		u"\u0627\u0644\u0633\u0628\u062a"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u062d"_s,
		u"\u0646"_s,
		u"\u062b"_s,
		u"\u0631"_s,
		u"\u062e"_s,
		u"\u062c"_s,
		u"\u0633"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u0623\u0648\u0644"_s,
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u062b\u0627\u0646\u064a"_s,
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u062b\u0627\u0644\u062b"_s,
		u"\u0627\u0644\u0631\u0628\u0639 \u0627\u0644\u0631\u0627\u0628\u0639"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u0661"_s,
		u"\u0662"_s,
		u"\u0663"_s,
		u"\u0664"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0635"_s,
		u"\u0645"_s,
		""_s,
		""_s,
		u"\u0641\u064a \u0627\u0644\u0635\u0628\u0627\u062d"_s,
		u"\u0635\u0628\u0627\u062d\u064b\u0627"_s,
		u"\u0638\u0647\u0631\u064b\u0627"_s,
		u"\u0628\u0639\u062f \u0627\u0644\u0638\u0647\u0631"_s,
		u"\u0645\u0633\u0627\u0621\u064b"_s,
		""_s,
		u"\u0641\u064a \u0627\u0644\u0645\u0633\u0627\u0621"_s,
		u"\u0644\u064a\u0644\u0627\u064b"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0635"_s,
		u"\u0645"_s,
		""_s,
		""_s,
		u"\u0641\u062c\u0631\u064b\u0627"_s,
		u"\u0635\u0628\u0627\u062d\u064b\u0627"_s,
		u"\u0638\u0647\u0631\u064b\u0627"_s,
		u"\u0628\u0639\u062f \u0627\u0644\u0638\u0647\u0631"_s,
		u"\u0645\u0633\u0627\u0621\u064b"_s,
		""_s,
		u"\u0645\u0646\u062a\u0635\u0641 \u0627\u0644\u0644\u064a\u0644"_s,
		u"\u0644\u064a\u0644\u0627\u064b"_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"\u0635"_s,
		u"\u0645"_s,
		""_s,
		""_s,
		u"\u0641\u062c\u0631\u064b\u0627"_s,
		u"\u0635"_s,
		u"\u0638\u0647\u0631\u064b\u0627"_s,
		u"\u0628\u0639\u062f \u0627\u0644\u0638\u0647\u0631"_s,
		u"\u0645\u0633\u0627\u0621\u064b"_s,
		""_s,
		u"\u0641\u064a \u0627\u0644\u0645\u0633\u0627\u0621"_s,
		u"\u0644\u064a\u0644\u0627\u064b"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0642.\u0645"_s,
		u"\u0645"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0628\u0648\u0630\u064a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u060c d MMMM y G"_s,
		"d MMMM y G"_s,
		u"dd\u200f/MM\u200f/y G"_s,
		u"d\u200f/M\u200f/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u060c d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		u"dd\u200f/MM\u200f/y GGGG"_s,
		u"d\u200f/M\u200f/y G"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"\u0645\u064a\u0644\u0627\u062f\u064a"_s,
		u"\u0645\u064a\u062c\u064a"_s,
		u"\u062a\u064a\u0634\u0648"_s,
		u"\u0634\u0648\u0648\u0627"_s,
		u"\u0647\u064a\u0633\u064a"_s,
		u"\u0631\u064a\u0648\u0627"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		u"\u0645"_s,
		u"\u0645\u064a\u062c\u064a"_s,
		u"\u062a\u064a\u0634\u0648"_s,
		u"\u0634\u0648\u0648\u0627"_s,
		u"\u0647\u064a\u0633\u064a"_s,
		u"\u0631\u064a\u0648\u0627"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		"Before R.O.C."_s,
		u"\u062c\u0645\u0647\u0648\u0631\u064a\u0629 \u0627\u0644\u0635\u064a"_s
	}));
	$var($StringArray, metaValue_islamic_MonthNames, $new($StringArray, {
		u"\u0645\u062d\u0631\u0645"_s,
		u"\u0635\u0641\u0631"_s,
		u"\u0631\u0628\u064a\u0639 \u0627\u0644\u0623\u0648\u0644"_s,
		u"\u0631\u0628\u064a\u0639 \u0627\u0644\u0622\u062e\u0631"_s,
		u"\u062c\u0645\u0627\u062f\u0649 \u0627\u0644\u0623\u0648\u0644\u0649"_s,
		u"\u062c\u0645\u0627\u062f\u0649 \u0627\u0644\u0622\u062e\u0631\u0629"_s,
		u"\u0631\u062c\u0628"_s,
		u"\u0634\u0639\u0628\u0627\u0646"_s,
		u"\u0631\u0645\u0636\u0627\u0646"_s,
		u"\u0634\u0648\u0627\u0644"_s,
		u"\u0630\u0648 \u0627\u0644\u0642\u0639\u062f\u0629"_s,
		u"\u0630\u0648 \u0627\u0644\u062d\u062c\u0629"_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u0647\u0640"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0645\u064a\u0644\u0627\u062f\u064a"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0627\u0644\u0633\u0646\u0629"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0625\u0633\u0644\u0627\u0645\u064a (\u0623\u0645 \u0627\u0644\u0642\u0631\u0649)"_s)
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
			$of("timezone.gmtFormat"_s),
			$of(u"\u063a\u0631\u064a\u0646\u062a\u0634{0}"_s)
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
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0625\u0633\u0644\u0627\u0645\u064a \u0627\u0644\u0645\u062f\u0646\u064a"_s)
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
			$of("timezone.regionFormat.standard"_s),
			$of(u"\u062a\u0648\u0642\u064a\u062a {0} \u0627\u0644\u0631\u0633\u0645\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arab"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u064a\u0627\u0628\u0627\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u063a\u0631\u064a\u0646\u062a\u0634"_s)
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
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0642\u0628\u0644 \u0627\u0644\u0645\u064a\u0644\u0627\u062f"_s,
				u"\u0645\u064a\u0644\u0627\u062f\u064a"_s
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
				u"{1} \u0641\u064a {0}"_s,
				u"{1} \u0641\u064a {0}"_s,
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
				"."_s,
				","_s,
				";"_s,
				u"\u200e%\u200e"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u0644\u064a\u0633\u00a0\u0631\u0642\u0645\u064b\u0627"_s,
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
			$of(u"\u0627\u0644\u062f\u0642\u0627\u0626\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0627\u0644\u0639\u0635\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0635/\u0645"_s)
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
				u"\u066a\u061c"_s,
				u"\u0660"_s,
				"#"_s,
				u"\u061c-"_s,
				u"\u0627\u0633"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				u"\u0644\u064a\u0633\u00a0\u0631\u0642\u0645"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u062a\u0642\u0648\u064a\u0645 \u0645\u064a\u0646\u062c\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0627\u0644\u0634\u0647\u0631"_s)
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
			$of(u"\u0627\u0644\u062b\u0648\u0627\u0646\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0661"_s,
				u"\u0662"_s,
				u"\u0663"_s,
				u"\u0664"_s,
				u"\u0665"_s,
				u"\u0666"_s,
				u"\u0667"_s,
				u"\u0668"_s,
				u"\u0669"_s,
				u"\u0661\u0660"_s,
				u"\u0661\u0661"_s,
				u"\u0661\u0662"_s,
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
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0647\u062c\u0631\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("night1:00:00-01:00;morning2:06:00-12:00;afternoon1:12:00-13:00;morning1:03:00-06:00;afternoon2:13:00-18:00;evening1:18:00-24:00;night2:01:00-03:00"_s)
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
			$of("timezone.regionFormat"_s),
			$of(u"\u062a\u0648\u0642\u064a\u062a {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{zero:0\' \'\u0623\u0644\u0641 one:0\' \'\u0623\u0644\u0641 two:0\' \'\u0623\u0644\u0641 few:0\' \'\u0622\u0644\u0627\u0641 many:0\' \'\u0623\u0644\u0641 other:0\' \'\u0623\u0644\u0641}"_s,
				u"{zero:00\' \'\u0623\u0644\u0641 one:00\' \'\u0623\u0644\u0641 two:00\' \'\u0623\u0644\u0641 few:00\' \'\u0623\u0644\u0641 many:00\' \'\u0623\u0644\u0641 other:00\' \'\u0623\u0644\u0641}"_s,
				u"{zero:000\' \'\u0623\u0644\u0641 one:000\' \'\u0623\u0644\u0641 two:000\' \'\u0623\u0644\u0641 few:000\' \'\u0623\u0644\u0641 many:000\' \'\u0623\u0644\u0641 other:000\' \'\u0623\u0644\u0641}"_s,
				u"{zero:0\' \'\u0645\u0644\u064a\u0648\u0646 one:0\' \'\u0645\u0644\u064a\u0648\u0646 two:0\' \'\u0645\u0644\u064a\u0648\u0646 few:0\' \'\u0645\u0644\u0627\u064a\u064a\u0646 many:0\' \'\u0645\u0644\u064a\u0648\u0646 other:0\' \'\u0645\u0644\u064a\u0648\u0646}"_s,
				u"{zero:00\' \'\u0645\u0644\u064a\u0648\u0646 one:00\' \'\u0645\u0644\u064a\u0648\u0646 two:00\' \'\u0645\u0644\u064a\u0648\u0646 few:00\' \'\u0645\u0644\u0627\u064a\u064a\u0646 many:00\' \'\u0645\u0644\u064a\u0648\u0646 other:00\' \'\u0645\u0644\u064a\u0648\u0646}"_s,
				u"{zero:000\' \'\u0645\u0644\u064a\u0648\u0646 one:000\' \'\u0645\u0644\u064a\u0648\u0646 two:000\' \'\u0645\u0644\u064a\u0648\u0646 few:000\' \'\u0645\u0644\u064a\u0648\u0646 many:000\' \'\u0645\u0644\u064a\u0648\u0646 other:000\' \'\u0645\u0644\u064a\u0648\u0646}"_s,
				u"{zero:0\' \'\u0645\u0644\u064a\u0627\u0631 one:0\' \'\u0645\u0644\u064a\u0627\u0631 two:0\' \'\u0645\u0644\u064a\u0627\u0631 few:0\' \'\u0645\u0644\u064a\u0627\u0631 many:0\' \'\u0645\u0644\u064a\u0627\u0631 other:0\' \'\u0645\u0644\u064a\u0627\u0631}"_s,
				u"{zero:00\' \'\u0645\u0644\u064a\u0627\u0631 one:00\' \'\u0645\u0644\u064a\u0627\u0631 two:00\' \'\u0645\u0644\u064a\u0627\u0631 few:00\' \'\u0645\u0644\u064a\u0627\u0631 many:00\' \'\u0645\u0644\u064a\u0627\u0631 other:00\' \'\u0645\u0644\u064a\u0627\u0631}"_s,
				u"{zero:000\' \'\u0645\u0644\u064a\u0627\u0631 one:000\' \'\u0645\u0644\u064a\u0627\u0631 two:000\' \'\u0645\u0644\u064a\u0627\u0631 few:000\' \'\u0645\u0644\u064a\u0627\u0631 many:000\' \'\u0645\u0644\u064a\u0627\u0631 other:000\' \'\u0645\u0644\u064a\u0627\u0631}"_s,
				u"{zero:0\' \'\u062a\u0631\u0644\u064a\u0648\u0646 one:0\' \'\u062a\u0631\u0644\u064a\u0648\u0646 two:0\' \'\u062a\u0631\u0644\u064a\u0648\u0646 few:0\' \'\u062a\u0631\u0644\u064a\u0648\u0646 many:0\' \'\u062a\u0631\u0644\u064a\u0648\u0646 other:0\' \'\u062a\u0631\u0644\u064a\u0648\u0646}"_s,
				u"{zero:00\' \'\u062a\u0631\u0644\u064a\u0648\u0646 one:00\' \'\u062a\u0631\u0644\u064a\u0648\u0646 two:00\' \'\u062a\u0631\u0644\u064a\u0648\u0646 few:00\' \'\u062a\u0631\u0644\u064a\u0648\u0646 many:00\' \'\u062a\u0631\u0644\u064a\u0648\u0646 other:00\' \'\u062a\u0631\u0644\u064a\u0648\u0646}"_s,
				u"{zero:000\' \'\u062a\u0631\u0644\u064a\u0648\u0646 one:000\' \'\u062a\u0631\u0644\u064a\u0648\u0646 two:000\' \'\u062a\u0631\u0644\u064a\u0648\u0646 few:000\' \'\u062a\u0631\u0644\u064a\u0648\u0646 many:000\' \'\u062a\u0631\u0644\u064a\u0648\u0646 other:000\' \'\u062a\u0631\u0644\u064a\u0648\u0646}"_s
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
			$of(metaValue_QuarterNames)
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
			$of(u"\u0627\u0644\u062a\u0648\u0642\u064a\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
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
				u"EEEE\u060c d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				u"d\u200f/M\u200f/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0627\u0644\u064a\u0648\u0645"_s)
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
			$of(metaValue_java_time_islamic_long_Eras)
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
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
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
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0627\u0644\u0623\u0633\u0628\u0648\u0639"_s)
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
				u"{zero:0\u00a0\u0623\u0644\u0641 one:0\u00a0\u0623\u0644\u0641 two:0\u00a0\u0623\u0644\u0641 few:0\u00a0\u0622\u0644\u0627\u0641 many:0\u00a0\u0623\u0644\u0641 other:0\u00a0\u0623\u0644\u0641}"_s,
				u"{zero:00\u00a0\u0623\u0644\u0641 one:00\u00a0\u0623\u0644\u0641 two:00\u00a0\u0623\u0644\u0641 few:00\u00a0\u0623\u0644\u0641 many:00\u00a0\u0623\u0644\u0641 other:00\u00a0\u0623\u0644\u0641}"_s,
				u"{zero:000\u00a0\u0623\u0644\u0641 one:000\u00a0\u0623\u0644\u0641 two:000\u00a0\u0623\u0644\u0641 few:000\u00a0\u0623\u0644\u0641 many:000\u00a0\u0623\u0644\u0641 other:000\u00a0\u0623\u0644\u0641}"_s,
				u"{zero:0\u00a0\u0645\u0644\u064a\u0648\u0646 one:0\u00a0\u0645\u0644\u064a\u0648\u0646 two:0\u00a0\u0645\u0644\u064a\u0648\u0646 few:0\u00a0\u0645\u0644\u064a\u0648\u0646 many:0\u00a0\u0645\u0644\u064a\u0648\u0646 other:0\u00a0\u0645\u0644\u064a\u0648\u0646}"_s,
				u"{zero:00\u00a0\u0645\u0644\u064a\u0648\u0646 one:00\u00a0\u0645\u0644\u064a\u0648\u0646 two:00\u00a0\u0645\u0644\u064a\u0648\u0646 few:00\u00a0\u0645\u0644\u064a\u0648\u0646 many:00\u00a0\u0645\u0644\u064a\u0648\u0646 other:00\u00a0\u0645\u0644\u064a\u0648\u0646}"_s,
				u"{zero:000\u00a0\u0645\u0644\u064a\u0648\u0646 one:000\u00a0\u0645\u0644\u064a\u0648\u0646 two:000\u00a0\u0645\u0644\u064a\u0648\u0646 few:000\u00a0\u0645\u0644\u064a\u0648\u0646 many:000\u00a0\u0645\u0644\u064a\u0648\u0646 other:000\u00a0\u0645\u0644\u064a\u0648\u0646}"_s,
				u"{zero:0\u00a0\u0645\u0644\u064a\u0627\u0631 one:0\u00a0\u0645\u0644\u064a\u0627\u0631 two:0\u00a0\u0645\u0644\u064a\u0627\u0631 few:0\u00a0\u0645\u0644\u064a\u0627\u0631 many:0\u00a0\u0645\u0644\u064a\u0627\u0631 other:0\u00a0\u0645\u0644\u064a\u0627\u0631}"_s,
				u"{zero:00\u00a0\u0645\u0644\u064a\u0627\u0631 one:00\u00a0\u0645\u0644\u064a\u0627\u0631 two:00\u00a0\u0645\u0644\u064a\u0627\u0631 few:00\u00a0\u0645\u0644\u064a\u0627\u0631 many:00\u00a0\u0645\u0644\u064a\u0627\u0631 other:00\u00a0\u0645\u0644\u064a\u0627\u0631}"_s,
				u"{zero:000\u00a0\u0645\u0644\u064a\u0627\u0631 one:000\u00a0\u0645\u0644\u064a\u0627\u0631 two:000\u00a0\u0645\u0644\u064a\u0627\u0631 few:000\u00a0\u0645\u0644\u064a\u0627\u0631 many:000\u00a0\u0645\u0644\u064a\u0627\u0631 other:000\u00a0\u0645\u0644\u064a\u0627\u0631}"_s,
				u"{zero:0\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 one:0\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 two:0\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 few:0\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 many:0\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 other:0\u00a0\u062a\u0631\u0644\u064a\u0648\u0646}"_s,
				u"{zero:00\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 one:00\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 two:00\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 few:00\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 many:00\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 other:00\u00a0\u062a\u0631\u0644\u064a\u0648\u0646}"_s,
				u"{zero:000\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 one:000\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 two:000\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 few:000\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 many:000\u00a0\u062a\u0631\u0644\u064a\u0648\u0646 other:000\u00a0\u062a\u0631\u0644\u064a\u0648\u0646}"_s
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
			$of(u"\u062a\u0648\u0642\u064a\u062a {0} \u0627\u0644\u0635\u064a\u0641\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE\u060c d MMMM y"_s,
				"d MMMM y"_s,
				u"dd\u200f/MM\u200f/y"_s,
				u"d\u200f/M\u200f/y"_s
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
			$of("zero:n = 0;one:n = 1;few:n % 100 = 3..10;many:n % 100 = 11..99;two:n = 2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0627\u0644\u0633\u0627\u0639\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(metaValue_islamic_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0628\u0648\u0630\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
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
			$of(metaValue_QuarterNames)
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

FormatData_ar::FormatData_ar() {
}

$Class* FormatData_ar::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar, name, initialize, &_FormatData_ar_ClassInfo_, allocate$FormatData_ar);
	return class$;
}

$Class* FormatData_ar::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun