#include <sun/text/resources/cldr/ext/FormatData_smn.h>

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

$MethodInfo _FormatData_smn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_smn::*)()>(&FormatData_smn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_smn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_smn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_smn_MethodInfo_
};

$Object* allocate$FormatData_smn($Class* clazz) {
	return $of($alloc(FormatData_smn));
}

void FormatData_smn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_smn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"u\u0111\u0111\u00e2ivem\u00e1\u00e1nu"_s,
		u"kuov\u00e2m\u00e1\u00e1nu"_s,
		u"njuh\u010d\u00e2m\u00e1\u00e1nu"_s,
		u"cu\u00e1\u014buim\u00e1\u00e1nu"_s,
		u"vyesim\u00e1\u00e1nu"_s,
		u"kesim\u00e1\u00e1nu"_s,
		u"syeinim\u00e1\u00e1nu"_s,
		u"porgem\u00e1\u00e1nu"_s,
		u"\u010doh\u010d\u00e2m\u00e1\u00e1nu"_s,
		u"roovv\u00e2dm\u00e1\u00e1nu"_s,
		u"skamm\u00e2m\u00e1\u00e1nu"_s,
		u"juovl\u00e2m\u00e1\u00e1nu"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"u\u0111iv"_s,
		u"kuov\u00e2"_s,
		u"njuh\u010d\u00e2"_s,
		u"cu\u00e1\u014bui"_s,
		"vyesi"_s,
		"kesi"_s,
		"syeini"_s,
		"porge"_s,
		u"\u010doh\u010d\u00e2"_s,
		u"roovv\u00e2d"_s,
		u"skamm\u00e2"_s,
		u"juovl\u00e2"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"U"_s,
		"K"_s,
		"NJ"_s,
		"C"_s,
		"V"_s,
		"K"_s,
		"S"_s,
		"P"_s,
		u"\u010c"_s,
		"R"_s,
		"S"_s,
		"J"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"pasepeeivi"_s,
		u"vuossaarg\u00e2"_s,
		u"majebaarg\u00e2"_s,
		"koskoho"_s,
		u"tuor\u00e2stuv"_s,
		u"v\u00e1stuppeeivi"_s,
		u"l\u00e1vurduv"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"pas"_s,
		"vuo"_s,
		"maj"_s,
		"kos"_s,
		"tuo"_s,
		u"v\u00e1s"_s,
		u"l\u00e1v"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"p"_s,
		"V"_s,
		"M"_s,
		"K"_s,
		"T"_s,
		"V"_s,
		"L"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1. ni\u00e4lj\u00e1d\u00e2s"_s,
		u"2. ni\u00e4lj\u00e1d\u00e2s"_s,
		u"3. ni\u00e4lj\u00e1d\u00e2s"_s,
		u"4. ni\u00e4lj\u00e1d\u00e2s"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1. ni\u00e4lj."_s,
		u"2. ni\u00e4lj."_s,
		u"3. ni\u00e4lj."_s,
		u"4. ni\u00e4lj."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"ip."_s,
		"ep."_s,
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
		"oKr."_s,
		"mKr."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H.mm.ss zzzz"_s,
		"H.mm.ss z"_s,
		"H.mm.ss"_s,
		"H.mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"cccc MMMM d. y G"_s,
		"MMMM d. y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE MMMM d. y GGGG"_s,
		"MMMM d. y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"Ovdil Kristus \u0161odd\u00e2m"_s,
				u"ma\u014ba Kristus \u0161odd\u00e2m"_s
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
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
				"{1} \'tme\' {0}"_s,
				"{1} \'tme\' {0}"_s,
				"{1} \'tme\' {0}"_s,
				"{1} {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
				"epiloho"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.DatePatterns"_s),
			$of($$new($StringArray, {
				"cccc, MMMM d. y"_s,
				"MMMM d. y"_s,
				"MMM d. y"_s,
				"d.M.y"_s
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d. y"_s,
				"MMMM d. y"_s,
				"MMM d. y"_s,
				"d.M.y"_s
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
			$of($$new($StringArray, {
				"pasepeivi"_s,
				u"vuossarg\u00e2"_s,
				u"majebarg\u00e2"_s,
				"koskokko"_s,
				u"tuor\u00e2st\u00e2h"_s,
				u"v\u00e1stuppeivi"_s,
				u"l\u00e1vurd\u00e2h"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:n = 1;two:n = 2"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
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
				u"{one:0\' \'tuhh\u00e1\u00e1t two:0\' \'tuhh\u00e1\u00e1t other:0\' \'tuhh\u00e1\u00e1t}"_s,
				u"{one:00\' \'tuhh\u00e1\u00e1t two:00\' \'tuhh\u00e1\u00e1t other:00\' \'tuhh\u00e1\u00e1t}"_s,
				u"{one:000\' \'tuhh\u00e1\u00e1t two:000\' \'tuhh\u00e1\u00e1t other:000\' \'tuhh\u00e1\u00e1t}"_s,
				"{one:0\' \'miljovn two:0\' \'miljovn other:0\' \'miljovn}"_s,
				"{one:00\' \'miljovn two:00\' \'miljovn other:00\' \'miljovn}"_s,
				"{one:000\' \'miljovn two:000\' \'miljovn other:000\' \'miljovn}"_s,
				"{one:0\' \'miljard two:0\' \'miljard other:0\' \'miljard}"_s,
				"{one:00\' \'miljard two:00\' \'miljard other:00\' \'miljard}"_s,
				"{one:000\' \'miljard two:000\' \'miljard other:000\' \'miljard}"_s,
				"{one:0\' \'biljovn two:0\' \'biljovn other:0\' \'biljovn}"_s,
				"{one:00\' \'biljovn two:00\' \'biljovn other:00\' \'biljovn}"_s,
				"{one:000\' \'biljovn two:000\' \'biljovn other:000\' \'biljovn}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_smn::FormatData_smn() {
}

$Class* FormatData_smn::load$($String* name, bool initialize) {
	$loadClass(FormatData_smn, name, initialize, &_FormatData_smn_ClassInfo_, allocate$FormatData_smn);
	return class$;
}

$Class* FormatData_smn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun