#include <sun/text/resources/cldr/ext/FormatData_zh.h>

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

$MethodInfo _FormatData_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_zh::*)()>(&FormatData_zh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_zh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_zh",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zh_MethodInfo_
};

$Object* allocate$FormatData_zh($Class* clazz) {
	return $of($alloc(FormatData_zh));
}

void FormatData_zh::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u4e00\u6708"_s,
		u"\u4e8c\u6708"_s,
		u"\u4e09\u6708"_s,
		u"\u56db\u6708"_s,
		u"\u4e94\u6708"_s,
		u"\u516d\u6708"_s,
		u"\u4e03\u6708"_s,
		u"\u516b\u6708"_s,
		u"\u4e5d\u6708"_s,
		u"\u5341\u6708"_s,
		u"\u5341\u4e00\u6708"_s,
		u"\u5341\u4e8c\u6708"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"1\u6708"_s,
		u"2\u6708"_s,
		u"3\u6708"_s,
		u"4\u6708"_s,
		u"5\u6708"_s,
		u"6\u6708"_s,
		u"7\u6708"_s,
		u"8\u6708"_s,
		u"9\u6708"_s,
		u"10\u6708"_s,
		u"11\u6708"_s,
		u"12\u6708"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u661f\u671f\u65e5"_s,
		u"\u661f\u671f\u4e00"_s,
		u"\u661f\u671f\u4e8c"_s,
		u"\u661f\u671f\u4e09"_s,
		u"\u661f\u671f\u56db"_s,
		u"\u661f\u671f\u4e94"_s,
		u"\u661f\u671f\u516d"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u5468\u65e5"_s,
		u"\u5468\u4e00"_s,
		u"\u5468\u4e8c"_s,
		u"\u5468\u4e09"_s,
		u"\u5468\u56db"_s,
		u"\u5468\u4e94"_s,
		u"\u5468\u516d"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u65e5"_s,
		u"\u4e00"_s,
		u"\u4e8c"_s,
		u"\u4e09"_s,
		u"\u56db"_s,
		u"\u4e94"_s,
		u"\u516d"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u7b2c\u4e00\u5b63\u5ea6"_s,
		u"\u7b2c\u4e8c\u5b63\u5ea6"_s,
		u"\u7b2c\u4e09\u5b63\u5ea6"_s,
		u"\u7b2c\u56db\u5b63\u5ea6"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1\u5b63\u5ea6"_s,
		u"2\u5b63\u5ea6"_s,
		u"3\u5b63\u5ea6"_s,
		u"4\u5b63\u5ea6"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u4e0a\u5348"_s,
		u"\u4e0b\u5348"_s,
		u"\u5348\u591c"_s,
		""_s,
		u"\u6e05\u6668"_s,
		u"\u4e0a\u5348"_s,
		u"\u4e2d\u5348"_s,
		u"\u4e0b\u5348"_s,
		u"\u665a\u4e0a"_s,
		""_s,
		u"\u51cc\u6668"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u4e0a\u5348"_s,
		u"\u4e0b\u5348"_s,
		u"\u5348\u591c"_s,
		""_s,
		u"\u65e9\u4e0a"_s,
		u"\u4e0a\u5348"_s,
		u"\u4e2d\u5348"_s,
		u"\u4e0b\u5348"_s,
		u"\u665a\u4e0a"_s,
		""_s,
		u"\u51cc\u6668"_s,
		""_s
	}));
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		u"\u516c\u5143\u524d"_s,
		u"\u516c\u5143"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"zzzz ah:mm:ss"_s,
		"z ah:mm:ss"_s,
		"ah:mm:ss"_s,
		"ah:mm"_s
	}));
	$var($StringArray, metaValue_DateTimePatterns, $new($StringArray, {
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s
	}));
	$var($StringArray, metaValue_buddhist_MonthNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s,
		"7"_s,
		"8"_s,
		"9"_s,
		"10"_s,
		"11"_s,
		"12"_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u4f5b\u5386"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"\u516c\u5143"_s,
		u"\u660e\u6cbb"_s,
		u"\u5927\u6b63"_s,
		u"\u662d\u548c"_s,
		u"\u5e73\u6210"_s,
		u"\u4ee4\u548c"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"\u6c11\u56fd\u524d"_s,
		u"\u6c11\u56fd"_s
	}));
	$var($StringArray, metaValue_java_time_roc_DatePatterns, $new($StringArray, {
		u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
		u"Gy\u5e74M\u6708d\u65e5"_s,
		u"Gy\u5e74M\u6708d\u65e5"_s,
		"Gy/M/d"_s
	}));
	$var($StringArray, metaValue_roc_DatePatterns, $new($StringArray, {
		u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
		u"GGGGy\u5e74M\u6708d\u65e5"_s,
		u"GGGGy\u5e74M\u6708d\u65e5"_s,
		"GGGGy/M/d"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u4f0a\u65af\u5170\u5386"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u516c\u5386"_s);
	$var($StringArray, metaValue_arabext_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"\u00a4#,##0.00"_s,
		"#,##0%"_s,
		u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
	}));
	$var($StringArray, metaValue_latn_NumberElements, $new($StringArray, {
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
	}));
	$var($StringArray, metaValue_short_CompactNumberPatterns, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		"{other:0}"_s,
		u"{other:0\u4e07}"_s,
		u"{other:00\u4e07}"_s,
		u"{other:000\u4e07}"_s,
		u"{other:0000\u4e07}"_s,
		u"{other:0\u4ebf}"_s,
		u"{other:00\u4ebf}"_s,
		u"{other:000\u4ebf}"_s,
		u"{other:0000\u4ebf}"_s,
		u"{other:0\u4e07\u4ebf}"_s,
		u"{other:00\u4e07\u4ebf}"_s,
		u"{other:000\u4e07\u4ebf}"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u4f0a\u65af\u5170\u5386\uff08\u4e4c\u59c6\u5e93\u62c9\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("osma.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("lana.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1a80"_s,
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
			$of("calendarname.islamic-civil"_s),
			$of(u"\u4f0a\u65af\u5170\u5e0c\u5409\u6765\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("talu.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u19d0"_s,
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
			$of("gonm.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("mtei.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\uabf0"_s,
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
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("cakm.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("guru.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0a66"_s,
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
			$of("field.minute"_s),
			$of(u"\u5206\u949f"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("bali.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("cham.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\uaa50"_s,
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
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u4e00\u6708"_s,
				u"\u4e8c\u6708"_s,
				u"\u4e09\u6708"_s,
				u"\u56db\u6708"_s,
				u"\u4e94\u6708"_s,
				u"\u516d\u6708"_s,
				u"\u4e03\u6708"_s,
				u"\u516b\u6708"_s,
				u"\u4e5d\u6708"_s,
				u"\u5341\u6708"_s,
				u"\u5341\u4e00\u6708"_s,
				u"\u5341\u4e8c\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("saur.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
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
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("beng.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("shrd.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("takr.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_roc_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("deva.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0966"_s,
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
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("sund.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u79d2"_s)
		}),
		$$new($ObjectArray, {
			$of("vaii.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_roc_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u4f0a\u65af\u5170\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:00:00-05:00;morning2:08:00-12:00;afternoon1:12:00-13:00;morning1:05:00-08:00;afternoon2:13:00-19:00;evening1:19:00-24:00"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("brah.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0}\u65f6\u95f4"_s)
		}),
		$$new($ObjectArray, {
			$of("olck.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1c50"_s,
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
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("tibt.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("khmr.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
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
			$of("java.time.buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("orya.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("mymrshan.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1090"_s,
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
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua9d0"_s,
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
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("hanidec.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("laoo.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ed0"_s,
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
			$of("sund.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1bb0"_s,
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
			$of("telu.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("kali.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua900"_s,
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
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("lanatham.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
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
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("mong.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("tamldec.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("mymr.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("nkoo.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u07c0"_s,
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
			$of("cakm.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("tibt.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0f20"_s,
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
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGy-M-d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("sora.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("gujr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ae6"_s,
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
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("limb.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1946"_s,
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
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("shrd.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("mlym.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gy-M-d"_s
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
			$of(u"{0}\u590f\u4ee4\u65f6\u95f4"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y\u5e74M\u6708d\u65e5EEEE"_s,
				u"y\u5e74M\u6708d\u65e5"_s,
				u"y\u5e74M\u6708d\u65e5"_s,
				"y/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.DateTimePatterns"_s),
			$of(metaValue_DateTimePatterns)
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
			$of("vaii.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua620"_s,
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
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u5e74"_s)
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
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gy-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("mtei.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("takr.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("mymr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1040"_s,
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
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0}\u6807\u51c6\u65f6\u95f4"_s)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u548c\u5386"_s)
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
			$of("beng.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u09e6"_s,
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
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("saur.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua8d0"_s,
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
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGy-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.long.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u7eaa\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u4e0a\u5348/\u4e0b\u5348"_s)
		}),
		$$new($ObjectArray, {
			$of("lana.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u6c11\u56fd\u7eaa\u5e74"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u6708"_s)
		}),
		$$new($ObjectArray, {
			$of("osma.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
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
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("gonm.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("guru.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("knda.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ce6"_s,
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
			$of("bali.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1b50"_s,
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
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("sora.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of(metaValue_short_CompactNumberPatterns)
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
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("mlym.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0d66"_s,
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
			$of("lepc.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1c40"_s,
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
			$of("gujr.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("fullwide.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\uff10"_s,
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
			$of("limb.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("khmr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u17e0"_s,
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
			$of("field.zone"_s),
			$of(u"\u65f6\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("arab.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("thai.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0e50"_s,
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
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("hanidec.NumberElements"_s),
			$of(metaValue_latn_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("lepc.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("mymrshan.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("nkoo.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("mong.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1810"_s,
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_roc_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u5de5\u4f5c\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of("brah.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("java.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("thai.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("fullwide.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("telu.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0c66"_s,
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
			$of("olck.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("knda.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("lanatham.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1a90"_s,
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
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("laoo.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("talu.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u5468"_s)
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
			$of("orya.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0b66"_s,
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
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_roc_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of(metaValue_short_CompactNumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("cham.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u5c0f\u65f6"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"1\u6708"_s,
				u"2\u6708"_s,
				u"3\u6708"_s,
				u"4\u6708"_s,
				u"5\u6708"_s,
				u"6\u6708"_s,
				u"7\u6708"_s,
				u"8\u6708"_s,
				u"9\u6708"_s,
				u"10\u6708"_s,
				u"11\u6708"_s,
				u"12\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u4f5b\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("kali.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
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
			$of("japanese.Eras"_s),
			$of(metaValue_java_time_japanese_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("deva.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_zh::FormatData_zh() {
}

$Class* FormatData_zh::load$($String* name, bool initialize) {
	$loadClass(FormatData_zh, name, initialize, &_FormatData_zh_ClassInfo_, allocate$FormatData_zh);
	return class$;
}

$Class* FormatData_zh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun