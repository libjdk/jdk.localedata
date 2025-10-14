#include <sun/text/resources/cldr/ext/FormatData_se.h>

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

$MethodInfo _FormatData_se_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_se::*)()>(&FormatData_se::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_se_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_se",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_se_MethodInfo_
};

$Object* allocate$FormatData_se($Class* clazz) {
	return $of($alloc(FormatData_se));
}

void FormatData_se::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_se::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"o\u0111\u0111ajagem\u00e1nnu"_s,
		u"guovvam\u00e1nnu"_s,
		u"njuk\u010dam\u00e1nnu"_s,
		u"cuo\u014bom\u00e1nnu"_s,
		u"miessem\u00e1nnu"_s,
		u"geassem\u00e1nnu"_s,
		u"suoidnem\u00e1nnu"_s,
		u"borgem\u00e1nnu"_s,
		u"\u010dak\u010dam\u00e1nnu"_s,
		u"golggotm\u00e1nnu"_s,
		u"sk\u00e1bmam\u00e1nnu"_s,
		u"juovlam\u00e1nnu"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"o\u0111\u0111j"_s,
		"guov"_s,
		"njuk"_s,
		"cuo"_s,
		"mies"_s,
		"geas"_s,
		"suoi"_s,
		"borg"_s,
		u"\u010dak\u010d"_s,
		"golg"_s,
		u"sk\u00e1b"_s,
		"juov"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"O"_s,
		"G"_s,
		"N"_s,
		"C"_s,
		"M"_s,
		"G"_s,
		"S"_s,
		"B"_s,
		u"\u010c"_s,
		"G"_s,
		"S"_s,
		"J"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"sotnabeaivi"_s,
		u"vuoss\u00e1rga"_s,
		u"ma\u014b\u014beb\u00e1rga"_s,
		"gaskavahkku"_s,
		"duorasdat"_s,
		"bearjadat"_s,
		u"l\u00e1vvardat"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"sotn"_s,
		"vuos"_s,
		u"ma\u014b"_s,
		"gask"_s,
		"duor"_s,
		"bear"_s,
		u"l\u00e1v"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"S"_s,
		"V"_s,
		"M"_s,
		"G"_s,
		"D"_s,
		"B"_s,
		"L"_s
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"i\u0111itbeaivet"_s,
		"eahketbeaivet"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"i.b."_s,
		"e.b."_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"o.Kr."_s,
		"m.Kr."_s
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
	$var($String, metaValue_calendarname_gregorian, "gregoria kaleander"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"j\u00e1hki"_s)
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
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of("UTC{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of(u"\u00e1igeav\u00e1dat"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of("timezone.gmtZeroFormat"_s),
			$of("UTC"_s)
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				"ovdal Kristtusa"_s,
				u"ma\u014b\u014bel Kristtusa"_s
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
			$of("field.weekday"_s),
			$of(u"v\u00e1hkkubeaivi"_s)
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
				u"\u00b710^"_s,
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuhtta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u00e9ra"_s)
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
			$of(u"beaivi r\u00e1idod\u00e1ssi"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of(u"+HH:mm;\u2212HH:mm"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of(u"m\u00e1nnu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunda"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"v\u00e1hkku"_s)
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
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\u00a0dt two:0\u00a0dt other:0\u00a0dt}"_s,
				u"{one:00\u00a0dt two:00\u00a0dt other:00\u00a0dt}"_s,
				u"{one:000\u00a0dt two:000\u00a0dt other:000\u00a0dt}"_s,
				u"{one:0\u00a0mn two:0\u00a0mn other:0\u00a0mn}"_s,
				u"{one:00\u00a0mn two:00\u00a0mn other:00\u00a0mn}"_s,
				u"{one:000\u00a0mn two:000\u00a0mn other:000\u00a0mn}"_s,
				u"{one:0\u00a0md two:0\u00a0md other:0\u00a0md}"_s,
				u"{one:00\u00a0md two:00\u00a0md other:00\u00a0md}"_s,
				u"{one:000\u00a0md two:000\u00a0md other:000\u00a0md}"_s,
				u"{one:0\u00a0bn two:0\u00a0bn other:0\u00a0bn}"_s,
				u"{one:00\u00a0bn two:00\u00a0bn other:00\u00a0bn}"_s,
				u"{one:000\u00a0bn two:000\u00a0bn other:000\u00a0bn}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y MMMM d, EEEE"_s,
				"y MMMM d"_s,
				"y MMM d"_s,
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
			$of("one:n = 1;two:n = 2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("diibmu"_s)
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
			$of("buddhista kaleander"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u00e1igi"_s)
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
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'duh\u00e1t two:0\' \'duh\u00e1hat other:0\' \'duh\u00e1hat}"_s,
				u"{one:00\' \'duh\u00e1t two:00\' \'duh\u00e1hat other:00\' \'duh\u00e1hat}"_s,
				u"{one:000\' \'duh\u00e1t two:000\' \'duh\u00e1hat other:000\' \'duh\u00e1hat}"_s,
				"{one:0\' \'miljona two:0\' \'miljonat other:0\' \'miljonat}"_s,
				"{one:00\' \'miljona two:00\' \'miljonat other:00\' \'miljonat}"_s,
				"{one:000\' \'miljona two:000\' \'miljonat other:000\' \'miljonat}"_s,
				"{one:0\' \'miljardi two:0\' \'miljardit other:0\' \'miljardit}"_s,
				"{one:00\' \'miljardi two:00\' \'miljardit other:00\' \'miljardit}"_s,
				"{one:000\' \'miljardi two:000\' \'miljardit other:000\' \'miljardit}"_s,
				"{one:0\' \'biljona two:0\' \'biljonat other:0\' \'biljonat}"_s,
				"{one:00\' \'biljona two:00\' \'biljonat other:00\' \'biljonat}"_s,
				"{one:000\' \'biljona two:000\' \'biljonat other:000\' \'biljonat}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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

FormatData_se::FormatData_se() {
}

$Class* FormatData_se::load$($String* name, bool initialize) {
	$loadClass(FormatData_se, name, initialize, &_FormatData_se_ClassInfo_, allocate$FormatData_se);
	return class$;
}

$Class* FormatData_se::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun