#include <sun/text/resources/cldr/ext/FormatData_hy.h>

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

$MethodInfo _FormatData_hy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_hy::*)()>(&FormatData_hy::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_hy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_hy",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hy_MethodInfo_
};

$Object* allocate$FormatData_hy($Class* clazz) {
	return $of($alloc(FormatData_hy));
}

void FormatData_hy::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_hy::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0570\u0578\u0582\u0576\u057e\u0561\u0580\u056b"_s,
		u"\u0583\u0565\u057f\u0580\u057e\u0561\u0580\u056b"_s,
		u"\u0574\u0561\u0580\u057f\u056b"_s,
		u"\u0561\u057a\u0580\u056b\u056c\u056b"_s,
		u"\u0574\u0561\u0575\u056b\u057d\u056b"_s,
		u"\u0570\u0578\u0582\u0576\u056b\u057d\u056b"_s,
		u"\u0570\u0578\u0582\u056c\u056b\u057d\u056b"_s,
		u"\u0585\u0563\u0578\u057d\u057f\u0578\u057d\u056b"_s,
		u"\u057d\u0565\u057a\u057f\u0565\u0574\u0562\u0565\u0580\u056b"_s,
		u"\u0570\u0578\u056f\u057f\u0565\u0574\u0562\u0565\u0580\u056b"_s,
		u"\u0576\u0578\u0575\u0565\u0574\u0562\u0565\u0580\u056b"_s,
		u"\u0564\u0565\u056f\u057f\u0565\u0574\u0562\u0565\u0580\u056b"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0570\u0576\u057e"_s,
		u"\u0583\u057f\u057e"_s,
		u"\u0574\u0580\u057f"_s,
		u"\u0561\u057a\u0580"_s,
		u"\u0574\u0575\u057d"_s,
		u"\u0570\u0576\u057d"_s,
		u"\u0570\u056c\u057d"_s,
		u"\u0585\u0563\u057d"_s,
		u"\u057d\u0565\u057a"_s,
		u"\u0570\u0578\u056f"_s,
		u"\u0576\u0578\u0575"_s,
		u"\u0564\u0565\u056f"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0540"_s,
		u"\u0553"_s,
		u"\u0544"_s,
		u"\u0531"_s,
		u"\u0544"_s,
		u"\u0540"_s,
		u"\u0540"_s,
		u"\u0555"_s,
		u"\u054d"_s,
		u"\u0540"_s,
		u"\u0546"_s,
		u"\u0534"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u056f\u056b\u0580\u0561\u056f\u056b"_s,
		u"\u0565\u0580\u056f\u0578\u0582\u0577\u0561\u0562\u0569\u056b"_s,
		u"\u0565\u0580\u0565\u0584\u0577\u0561\u0562\u0569\u056b"_s,
		u"\u0579\u0578\u0580\u0565\u0584\u0577\u0561\u0562\u0569\u056b"_s,
		u"\u0570\u056b\u0576\u0563\u0577\u0561\u0562\u0569\u056b"_s,
		u"\u0578\u0582\u0580\u0562\u0561\u0569"_s,
		u"\u0577\u0561\u0562\u0561\u0569"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u056f\u056b\u0580"_s,
		u"\u0565\u0580\u056f"_s,
		u"\u0565\u0580\u0584"_s,
		u"\u0579\u0580\u0584"_s,
		u"\u0570\u0576\u0563"_s,
		u"\u0578\u0582\u0580"_s,
		u"\u0577\u0562\u0569"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u053f"_s,
		u"\u0535"_s,
		u"\u0535"_s,
		u"\u0549"_s,
		u"\u0540"_s,
		u"\u0548"_s,
		u"\u0547"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u056b\u0576 \u0565\u057c\u0561\u0574\u057d\u0575\u0561\u056f"_s,
		u"2-\u0580\u0564 \u0565\u057c\u0561\u0574\u057d\u0575\u0561\u056f"_s,
		u"3-\u0580\u0564 \u0565\u057c\u0561\u0574\u057d\u0575\u0561\u056f"_s,
		u"4-\u0580\u0564 \u0565\u057c\u0561\u0574\u057d\u0575\u0561\u056f"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u056b\u0576 \u0565\u057c\u0574\u057d."_s,
		u"2-\u0580\u0564 \u0565\u057c\u0574\u057d."_s,
		u"3-\u0580\u0564 \u0565\u057c\u0574\u057d."_s,
		u"4-\u0580\u0564 \u0565\u057c\u0574\u057d."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u056f\u0565\u057d\u0563\u056b\u0577\u0565\u0580\u056b\u0576"_s,
		u"\u056f\u0565\u057d\u0585\u0580\u056b\u0576"_s,
		u"\u0561\u057c\u0561\u057e\u0578\u057f\u0575\u0561\u0576"_s,
		""_s,
		u"\u0581\u0565\u0580\u0565\u056f\u057e\u0561"_s,
		""_s,
		u"\u0565\u0580\u0565\u056f\u0578\u0575\u0561\u0576"_s,
		""_s,
		u"\u0563\u056b\u0577\u0565\u0580\u057e\u0561"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0561"_s,
		u"\u0570"_s,
		u"\u056f\u0563\u2024"_s,
		u"\u056f\u0585\u2024"_s,
		u"\u0561\u057c\u057e"_s,
		""_s,
		u"\u0581\u0580\u056f"_s,
		""_s,
		u"\u0565\u0580\u056f"_s,
		""_s,
		u"\u0563\u0577\u0580"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u056f\u0565\u057d\u0563\u056b\u0577\u0565\u0580"_s,
		u"\u056f\u0565\u057d\u0585\u0580"_s,
		u"\u0561\u057c\u0561\u057e\u0578\u057f\u0575\u0561\u0576"_s,
		""_s,
		u"\u0581\u0565\u0580\u0565\u056f\u0568"_s,
		""_s,
		u"\u0565\u0580\u0565\u056f\u0578\u0575\u0561\u0576"_s,
		""_s,
		u"\u0563\u056b\u0577\u0565\u0580\u0568"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0574.\u0569.\u0561."_s,
		u"\u0574.\u0569."_s
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
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"d MMMM, y \u0569. G, EEEE"_s,
		u"dd MMMM, y \u0569. G"_s,
		u"dd MMM, y \u0569. G"_s,
		"dd.MM.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"d MMMM, y \u0569. GGGG, EEEE"_s,
		u"dd MMMM, y \u0569. GGGG"_s,
		u"dd MMM, y \u0569. GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0563\u0580\u056b\u0563\u0578\u0580\u0575\u0561\u0576 \u0585\u0580\u0561\u0581\u0578\u0582\u0575\u0581"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u057f\u0561\u0580\u056b"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0573\u0561\u057a\u0578\u0576\u0561\u056f\u0561\u0576 \u0585\u0580\u0561\u0581\u0578\u0582\u0575\u0581"_s)
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
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0554\u0580\u056b\u057d\u057f\u0578\u057d\u056b\u0581 \u0561\u057c\u0561\u057b"_s,
				u"\u0554\u0580\u056b\u057d\u057f\u0578\u057d\u056b\u0581 \u0570\u0565\u057f\u0578"_s
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
				u"\u0548\u0579\u0539"_s,
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
			$of(u"\u0580\u0578\u057a\u0565"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0569\u057e\u0561\u0580\u056f\u0578\u0582\u0569\u0575\u0578\u0582\u0576"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u053f\u0531/\u053f\u0540"_s)
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
			$of(u"\u0574\u056b\u0576\u0563\u0578\u0582\u0578 \u0585\u0580\u0561\u0581\u0578\u0582\u0575\u0581"_s)
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
			$of(u"\u0561\u0574\u056b\u057d"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u057e\u0561\u0575\u0580\u056f\u0575\u0561\u0576"_s)
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
			$of(u"\u056b\u057d\u056c\u0561\u0574\u0561\u056f\u0561\u0576 \u0585\u0580\u0561\u0581\u0578\u0582\u0575\u0581"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:00:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-24:00"_s)
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
				u"{one:0\' \'\u0570\u0561\u0566\u0561\u0580 other:0\' \'\u0570\u0561\u0566\u0561\u0580}"_s,
				u"{one:00\' \'\u0570\u0561\u0566\u0561\u0580 other:00\' \'\u0570\u0561\u0566\u0561\u0580}"_s,
				u"{one:000\' \'\u0570\u0561\u0566\u0561\u0580 other:000\' \'\u0570\u0561\u0566\u0561\u0580}"_s,
				u"{one:0\' \'\u0574\u056b\u056c\u056b\u0578\u0576 other:0\' \'\u0574\u056b\u056c\u056b\u0578\u0576}"_s,
				u"{one:00\' \'\u0574\u056b\u056c\u056b\u0578\u0576 other:00\' \'\u0574\u056b\u056c\u056b\u0578\u0576}"_s,
				u"{one:000\' \'\u0574\u056b\u056c\u056b\u0578\u0576 other:000\' \'\u0574\u056b\u056c\u056b\u0578\u0576}"_s,
				u"{one:0\' \'\u0574\u056b\u056c\u056b\u0561\u0580\u0564 other:0\' \'\u0574\u056b\u056c\u056b\u0561\u0580\u0564}"_s,
				u"{one:00\' \'\u0574\u056b\u056c\u056b\u0561\u0580\u0564 other:00\' \'\u0574\u056b\u056c\u056b\u0561\u0580\u0564}"_s,
				u"{one:000\' \'\u0574\u056b\u056c\u056b\u0561\u0580\u0564 other:000\' \'\u0574\u056b\u056c\u056b\u0561\u0580\u0564}"_s,
				u"{one:0\' \'\u057f\u0580\u056b\u056c\u056b\u0578\u0576 other:0\' \'\u057f\u0580\u056b\u056c\u056b\u0578\u0576}"_s,
				u"{one:00\' \'\u057f\u0580\u056b\u056c\u056b\u0578\u0576 other:00\' \'\u057f\u0580\u056b\u056c\u056b\u0578\u0576}"_s,
				u"{one:000\' \'\u057f\u0580\u056b\u056c\u056b\u0578\u0576 other:000\' \'\u057f\u0580\u056b\u056c\u056b\u0578\u0576}"_s
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
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("field.zone"_s),
			$of(u"\u056a\u0561\u0574\u0561\u0575\u056b\u0576 \u0563\u0578\u057f\u056b"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of(u"\u0577\u0561\u0562\u0561\u0569\u057e\u0561 \u0585\u0580"_s)
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
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0577\u0561\u0562\u0561\u0569"_s)
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
				u"{one:0\u00a0\u0570\u0566\u0580 other:0\u00a0\u0570\u0566\u0580}"_s,
				u"{one:00\u00a0\u0570\u0566\u0580 other:00\u00a0\u0570\u0566\u0580}"_s,
				u"{one:000\u00a0\u0570\u0566\u0580 other:000\u00a0\u0570\u0566\u0580}"_s,
				u"{one:0\u00a0\u0574\u056c\u0576 other:0\u00a0\u0574\u056c\u0576}"_s,
				u"{one:00\u00a0\u0574\u056c\u0576 other:00\u00a0\u0574\u056c\u0576}"_s,
				u"{one:000\u00a0\u0574\u056c\u0576 other:000\u00a0\u0574\u056c\u0576}"_s,
				u"{one:0\u00a0\u0574\u056c\u0580\u0564 other:0\u00a0\u0574\u056c\u0580\u0564}"_s,
				u"{one:00\u00a0\u0574\u056c\u0580\u0564 other:00\u00a0\u0574\u056c\u0580\u0564}"_s,
				u"{one:000\u00a0\u0574\u056c\u0580\u0564 other:000\u00a0\u0574\u056c\u0580\u0564}"_s,
				u"{one:0\u00a0\u057f\u0580\u056c\u0576 other:0\u00a0\u057f\u0580\u056c\u0576}"_s,
				u"{one:00\u00a0\u057f\u0580\u056c\u0576 other:00\u00a0\u057f\u0580\u056c\u0576}"_s,
				u"{one:000\u00a0\u057f\u0580\u056c\u0576 other:000\u00a0\u057f\u0580\u056c\u0576}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y \u0569. MMMM d, EEEE"_s,
				u"dd MMMM, y \u0569."_s,
				u"dd MMM, y \u0569."_s,
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
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:i = 0,1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u056a\u0561\u0574"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0562\u0578\u0582\u0564\u0564\u0561\u0575\u0561\u056f\u0561\u0576 \u0585\u0580\u0561\u0581\u0578\u0582\u0575\u0581"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0570\u0578\u0582\u0576\u057e\u0561\u0580"_s,
				u"\u0583\u0565\u057f\u0580\u057e\u0561\u0580"_s,
				u"\u0574\u0561\u0580\u057f"_s,
				u"\u0561\u057a\u0580\u056b\u056c"_s,
				u"\u0574\u0561\u0575\u056b\u057d"_s,
				u"\u0570\u0578\u0582\u0576\u056b\u057d"_s,
				u"\u0570\u0578\u0582\u056c\u056b\u057d"_s,
				u"\u0585\u0563\u0578\u057d\u057f\u0578\u057d"_s,
				u"\u057d\u0565\u057a\u057f\u0565\u0574\u0562\u0565\u0580"_s,
				u"\u0570\u0578\u056f\u057f\u0565\u0574\u0562\u0565\u0580"_s,
				u"\u0576\u0578\u0575\u0565\u0574\u0562\u0565\u0580"_s,
				u"\u0564\u0565\u056f\u057f\u0565\u0574\u0562\u0565\u0580"_s,
				""_s
			}))
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
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_hy::FormatData_hy() {
}

$Class* FormatData_hy::load$($String* name, bool initialize) {
	$loadClass(FormatData_hy, name, initialize, &_FormatData_hy_ClassInfo_, allocate$FormatData_hy);
	return class$;
}

$Class* FormatData_hy::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun