#include <sun/text/resources/cldr/ext/FormatData_ta.h>

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

$MethodInfo _FormatData_ta_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ta::*)()>(&FormatData_ta::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ta_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ta",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ta_MethodInfo_
};

$Object* allocate$FormatData_ta($Class* clazz) {
	return $of($alloc(FormatData_ta));
}

void FormatData_ta::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ta::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0b9c\u0ba9\u0bb5\u0bb0\u0bbf"_s,
		u"\u0baa\u0bbf\u0baa\u0bcd\u0bb0\u0bb5\u0bb0\u0bbf"_s,
		u"\u0bae\u0bbe\u0bb0\u0bcd\u0b9a\u0bcd"_s,
		u"\u0b8f\u0baa\u0bcd\u0bb0\u0bb2\u0bcd"_s,
		u"\u0bae\u0bc7"_s,
		u"\u0b9c\u0bc2\u0ba9\u0bcd"_s,
		u"\u0b9c\u0bc2\u0bb2\u0bc8"_s,
		u"\u0b86\u0b95\u0bb8\u0bcd\u0b9f\u0bcd"_s,
		u"\u0b9a\u0bc6\u0baa\u0bcd\u0b9f\u0bae\u0bcd\u0baa\u0bb0\u0bcd"_s,
		u"\u0b85\u0b95\u0bcd\u0b9f\u0bcb\u0baa\u0bb0\u0bcd"_s,
		u"\u0ba8\u0bb5\u0bae\u0bcd\u0baa\u0bb0\u0bcd"_s,
		u"\u0b9f\u0bbf\u0b9a\u0bae\u0bcd\u0baa\u0bb0\u0bcd"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0b9c\u0ba9."_s,
		u"\u0baa\u0bbf\u0baa\u0bcd."_s,
		u"\u0bae\u0bbe\u0bb0\u0bcd."_s,
		u"\u0b8f\u0baa\u0bcd."_s,
		u"\u0bae\u0bc7"_s,
		u"\u0b9c\u0bc2\u0ba9\u0bcd"_s,
		u"\u0b9c\u0bc2\u0bb2\u0bc8"_s,
		u"\u0b86\u0b95."_s,
		u"\u0b9a\u0bc6\u0baa\u0bcd."_s,
		u"\u0b85\u0b95\u0bcd."_s,
		u"\u0ba8\u0bb5."_s,
		u"\u0b9f\u0bbf\u0b9a."_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0b9c"_s,
		u"\u0baa\u0bbf"_s,
		u"\u0bae\u0bbe"_s,
		u"\u0b8f"_s,
		u"\u0bae\u0bc7"_s,
		u"\u0b9c\u0bc2"_s,
		u"\u0b9c\u0bc2"_s,
		u"\u0b86"_s,
		u"\u0b9a\u0bc6"_s,
		u"\u0b85"_s,
		u"\u0ba8"_s,
		u"\u0b9f\u0bbf"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0b9e\u0bbe\u0baf\u0bbf\u0bb1\u0bc1"_s,
		u"\u0ba4\u0bbf\u0b99\u0bcd\u0b95\u0bb3\u0bcd"_s,
		u"\u0b9a\u0bc6\u0bb5\u0bcd\u0bb5\u0bbe\u0baf\u0bcd"_s,
		u"\u0baa\u0bc1\u0ba4\u0ba9\u0bcd"_s,
		u"\u0bb5\u0bbf\u0baf\u0bbe\u0bb4\u0ba9\u0bcd"_s,
		u"\u0bb5\u0bc6\u0bb3\u0bcd\u0bb3\u0bbf"_s,
		u"\u0b9a\u0ba9\u0bbf"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0b9e\u0bbe\u0baf\u0bbf."_s,
		u"\u0ba4\u0bbf\u0b99\u0bcd."_s,
		u"\u0b9a\u0bc6\u0bb5\u0bcd."_s,
		u"\u0baa\u0bc1\u0ba4."_s,
		u"\u0bb5\u0bbf\u0baf\u0bbe."_s,
		u"\u0bb5\u0bc6\u0bb3\u0bcd."_s,
		u"\u0b9a\u0ba9\u0bbf"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0b9e\u0bbe"_s,
		u"\u0ba4\u0bbf"_s,
		u"\u0b9a\u0bc6"_s,
		u"\u0baa\u0bc1"_s,
		u"\u0bb5\u0bbf"_s,
		u"\u0bb5\u0bc6"_s,
		u"\u0b9a"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0b92\u0ba9\u0bcd\u0bb1\u0bbe\u0bae\u0bcd \u0b95\u0bbe\u0bb2\u0bbe\u0ba3\u0bcd\u0b9f\u0bc1"_s,
		u"\u0b87\u0bb0\u0ba3\u0bcd\u0b9f\u0bbe\u0bae\u0bcd \u0b95\u0bbe\u0bb2\u0bbe\u0ba3\u0bcd\u0b9f\u0bc1"_s,
		u"\u0bae\u0bc2\u0ba9\u0bcd\u0bb1\u0bbe\u0bae\u0bcd \u0b95\u0bbe\u0bb2\u0bbe\u0ba3\u0bcd\u0b9f\u0bc1"_s,
		u"\u0ba8\u0bbe\u0ba9\u0bcd\u0b95\u0bbe\u0bae\u0bcd \u0b95\u0bbe\u0bb2\u0bbe\u0ba3\u0bcd\u0b9f\u0bc1"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0b95\u0bbe\u0bb2\u0bbe.1"_s,
		u"\u0b95\u0bbe\u0bb2\u0bbe.2"_s,
		u"\u0b95\u0bbe\u0bb2\u0bbe.3"_s,
		u"\u0b95\u0bbe\u0bb2\u0bbe.4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0bae\u0bc1\u0bb1\u0bcd\u0baa\u0b95\u0bb2\u0bcd"_s,
		u"\u0baa\u0bbf\u0bb1\u0bcd\u0baa\u0b95\u0bb2\u0bcd"_s,
		u"\u0ba8\u0bb3\u0bcd\u0bb3\u0bbf\u0bb0\u0bb5\u0bc1"_s,
		u"\u0ba8\u0ba3\u0bcd\u0baa\u0b95\u0bb2\u0bcd"_s,
		u"\u0b85\u0ba4\u0bbf\u0b95\u0bbe\u0bb2\u0bc8"_s,
		u"\u0b95\u0bbe\u0bb2\u0bc8"_s,
		u"\u0bae\u0ba4\u0bbf\u0baf\u0bae\u0bcd"_s,
		u"\u0baa\u0bbf\u0bb1\u0bcd\u0baa\u0b95\u0bb2\u0bcd"_s,
		u"\u0bae\u0bbe\u0bb2\u0bc8"_s,
		u"\u0b85\u0ba8\u0bcd\u0ba4\u0bbf \u0bae\u0bbe\u0bb2\u0bc8"_s,
		u"\u0b87\u0bb0\u0bb5\u0bc1"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0bae\u0bc1.\u0baa"_s,
		u"\u0baa\u0bbf.\u0baa"_s,
		u"\u0ba8\u0bb3\u0bcd."_s,
		u"\u0ba8\u0ba3\u0bcd."_s,
		u"\u0b85\u0ba4\u0bbf."_s,
		u"\u0b95\u0bbe."_s,
		u"\u0bae\u0ba4\u0bbf."_s,
		u"\u0baa\u0bbf\u0bb1\u0bcd."_s,
		u"\u0bae\u0bbe."_s,
		u"\u0b85\u0ba8\u0bcd\u0ba4\u0bbf \u0bae\u0bbe."_s,
		u"\u0b87\u0bb0."_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0b95\u0bbf.\u0bae\u0bc1."_s,
		u"\u0b95\u0bbf.\u0baa\u0bbf."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"a h:mm:ss zzzz"_s,
		"a h:mm:ss z"_s,
		"a h:mm:ss"_s,
		"a h:mm"_s
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
		"EEEE, d MMMM, y G"_s,
		"d MMMM, y G"_s,
		"d MMM, y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, y GGGG"_s,
		"d MMMM, y GGGG"_s,
		"d MMM, y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"R.O.C. -\u0b95\u0bcd\u0b95\u0bc1 \u0bae\u0bc1\u0ba9\u0bcd\u0baa\u0bc1"_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		u"ROC\u0b95\u0bcd\u0b95\u0bc1 \u0bae\u0bc1\u0ba9\u0bcd"_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0b95\u0bbf\u0bb0\u0bbf\u0b95\u0bcb\u0bb0\u0bbf\u0baf\u0ba9\u0bcd \u0ba8\u0bbe\u0bb3\u0bcd\u0b95\u0bbe\u0b9f\u0bcd\u0b9f\u0bbf"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0b86\u0ba3\u0bcd\u0b9f\u0bc1"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0b87\u0bb8\u0bcd\u0bb2\u0bbe\u0bae\u0bbf\u0baf \u0ba8\u0bbe\u0bb3\u0bcd\u0b95\u0bbe\u0b9f\u0bcd\u0b9f\u0bbf (\u0b89\u0bae\u0bcd-\u0b85\u0bb2\u0bcd-\u0b95\u0bc1\u0bb0\u0bbe)"_s)
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
			$of(u"\u0b87\u0bb8\u0bcd\u0bb2\u0bbe\u0bae\u0bbf\u0baf \u0b9a\u0bbf\u0bb5\u0bbf\u0bb2\u0bcd \u0ba8\u0bbe\u0bb3\u0bcd\u0b95\u0bbe\u0b9f\u0bcd\u0b9f\u0bbf"_s)
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
			$of(u"{0} \u0ba8\u0bbf\u0bb2\u0bc8\u0baf\u0bbe\u0ba9 \u0ba8\u0bc7\u0bb0\u0bae\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("tamldec.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0be6"_s,
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
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0b9c\u0baa\u0bcd\u0baa\u0bbe\u0ba9\u0bbf\u0baf \u0ba8\u0bbe\u0bb3\u0bcd\u0b95\u0bbe\u0b9f\u0bcd\u0b9f\u0bbf"_s)
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
				u"\u0b95\u0bbf\u0bb1\u0bbf\u0bb8\u0bcd\u0ba4\u0bc1\u0bb5\u0bc1\u0b95\u0bcd\u0b95\u0bc1 \u0bae\u0bc1\u0ba9\u0bcd"_s,
				u"\u0b85\u0ba9\u0bcd\u0ba9\u0bcb \u0b9f\u0bcb\u0bae\u0bbf\u0ba9\u0bbf"_s
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
				u"{1} \u2019\u0b85\u0ba9\u0bcd\u0bb1\u0bc1\u2019 {0}"_s,
				u"{1} \u2019\u0b85\u0ba9\u0bcd\u0bb1\u0bc1\u2019 {0}"_s,
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
			$of(u"\u0ba8\u0bbf\u0bae\u0bbf\u0b9f\u0bae\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0b95\u0bbe\u0bb2\u0bae\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0bae\u0bc1\u0bb1\u0bcd\u0baa\u0b95\u0bb2\u0bcd/\u0baa\u0bbf\u0bb1\u0bcd\u0baa\u0b95\u0bb2\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0bae\u0bc1\u0bb9\u0bb0\u0bcd\u0bb0\u0bae\u0bcd"_s,
				u"\u0b9a\u0b83\u0baa\u0bb0\u0bcd"_s,
				u"\u0bb0\u0baa\u0bbf 1"_s,
				u"\u0bb0\u0baa\u0bbf 2"_s,
				u"\u0b9c\u0bc1\u0bae\u0ba4\u0bbe 1"_s,
				u"\u0b9c\u0bc1\u0bae\u0ba4\u0bbe 2"_s,
				u"\u0bb0\u0b9c\u0baa\u0bcd"_s,
				u"\u0bb7\u0b83\u0baa\u0bbe\u0ba9\u0bcd"_s,
				u"\u0bb0\u0bae\u0bb2\u0bbe\u0ba9\u0bcd"_s,
				u"\u0bb7\u0bb5\u0bcd\u0bb5\u0bbe\u0bb2\u0bcd"_s,
				u"\u0ba4\u0bc1\u0bb2\u0bcd \u0b95\u0b83\u0ba4\u0bbe"_s,
				u"\u0ba4\u0bc1\u0bb2\u0bcd \u0bb9\u0bbf\u0b9c\u0bcd\u0b9c\u0bbe"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0bae\u0bbf\u0ba9\u0bcd\u0b95\u0bcb \u0ba8\u0bbe\u0bb3\u0bcd\u0b95\u0bbe\u0b9f\u0bcd\u0b9f\u0bbf"_s)
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
			$of(u"\u0bae\u0bbe\u0ba4\u0bae\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0bb5\u0bbf\u0ba8\u0bbe\u0b9f\u0bbf"_s)
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
			$of(u"\u0b87\u0bb8\u0bcd\u0bb2\u0bbe\u0bae\u0bbf\u0baf \u0ba8\u0bbe\u0bb3\u0bcd\u0b95\u0bbe\u0b9f\u0bcd\u0b9f\u0bbf"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;evening2:18:00-21:00;night1:21:00-03:00;morning2:05:00-12:00;afternoon1:12:00-14:00;morning1:03:00-05:00;afternoon2:14:00-16:00;evening1:16:00-18:00"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
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
			$of(u"{0} \u0ba8\u0bc7\u0bb0\u0bae\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0b86\u0baf\u0bbf\u0bb0\u0bae\u0bcd other:0\' \'\u0b86\u0baf\u0bbf\u0bb0\u0bae\u0bcd}"_s,
				u"{one:00\' \'\u0b86\u0baf\u0bbf\u0bb0\u0bae\u0bcd other:00\' \'\u0b86\u0baf\u0bbf\u0bb0\u0bae\u0bcd}"_s,
				u"{one:000\' \'\u0b86\u0baf\u0bbf\u0bb0\u0bae\u0bcd other:000\' \'\u0b86\u0baf\u0bbf\u0bb0\u0bae\u0bcd}"_s,
				u"{one:0\' \'\u0bae\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:0\' \'\u0bae\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:00\' \'\u0bae\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:00\' \'\u0bae\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:000\' \'\u0bae\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:000\' \'\u0bae\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:0\' \'\u0baa\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:0\' \'\u0baa\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:00\' \'\u0baa\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:00\' \'\u0baa\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:000\' \'\u0baa\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:000\' \'\u0baa\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:0\' \'\u0b9f\u0bbf\u0bb0\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:0\' \'\u0b9f\u0bbf\u0bb0\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:00\' \'\u0b9f\u0bbf\u0bb0\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:00\' \'\u0b9f\u0bbf\u0bb0\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s,
				u"{one:000\' \'\u0b9f\u0bbf\u0bb0\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd other:000\' \'\u0b9f\u0bbf\u0bb0\u0bbf\u0bb2\u0bcd\u0bb2\u0bbf\u0baf\u0ba9\u0bcd}"_s
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
			$of(u"\u0ba8\u0bc7\u0bb0 \u0bae\u0ba3\u0bcd\u0b9f\u0bb2\u0bae\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
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
			$of(u"\u0bb5\u0bbe\u0bb0\u0ba4\u0bcd\u0ba4\u0bbf\u0ba9\u0bcd \u0ba8\u0bbe\u0bb3\u0bcd"_s)
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
			$of("tamldec.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
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
			$of(u"\u0bb5\u0bbe\u0bb0\u0bae\u0bcd"_s)
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
				u"{one:0\u0b86 other:0\u0b86}"_s,
				u"{one:00\u0b86 other:00\u0b86}"_s,
				u"{one:000\u0b86 other:000\u0b86}"_s,
				u"{one:0\u0bae\u0bbf other:0\u0bae\u0bbf}"_s,
				u"{one:00\u0bae\u0bbf other:00\u0bae\u0bbf}"_s,
				u"{one:000\u0bae\u0bbf other:000\u0bae\u0bbf}"_s,
				u"{one:0\u0baa\u0bbf other:0\u0baa\u0bbf}"_s,
				u"{one:00\u0baa\u0bbf other:00\u0baa\u0bbf}"_s,
				u"{one:000\u0baa\u0bbf other:000\u0baa\u0bbf}"_s,
				u"{one:0\u0b9f\u0bbf other:0\u0b9f\u0bbf}"_s,
				u"{one:00\u0b9f\u0bbf other:00\u0b9f\u0bbf}"_s,
				u"{one:000\u0b9f\u0bbf other:000\u0b9f\u0bbf}"_s
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
			$of(u"{0} \u0baa\u0b95\u0bb2\u0bca\u0bb3\u0bbf \u0ba8\u0bc7\u0bb0\u0bae\u0bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
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
			$of(u"\u0bae\u0ba3\u0bbf"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0bae\u0bc1\u0bb9."_s,
				u"\u0b9a\u0b83\u0baa."_s,
				u"\u0bb0\u0baa\u0bbf 1"_s,
				u"\u0bb0\u0baa\u0bbf 2"_s,
				u"\u0b9c\u0bc1\u0bae. 1"_s,
				u"\u0b9c\u0bc1\u0bae. 2"_s,
				u"\u0bb0\u0b9c."_s,
				u"\u0bb7\u0b83."_s,
				u"\u0bb0\u0bae."_s,
				u"\u0bb7\u0bb5\u0bcd."_s,
				u"\u0ba4\u0bc1\u0bb2\u0bcd \u0b95\u0b83."_s,
				u"\u0ba4\u0bc1\u0bb2\u0bcd \u0bb9\u0bbf\u0b9c\u0bcd."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0baa\u0bc1\u0ba4\u0bcd\u0ba4 \u0ba8\u0bbe\u0bb3\u0bcd\u0b95\u0bbe\u0b9f\u0bcd\u0b9f\u0bbf"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##,##0%"_s,
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

FormatData_ta::FormatData_ta() {
}

$Class* FormatData_ta::load$($String* name, bool initialize) {
	$loadClass(FormatData_ta, name, initialize, &_FormatData_ta_ClassInfo_, allocate$FormatData_ta);
	return class$;
}

$Class* FormatData_ta::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun