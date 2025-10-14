#include <sun/text/resources/cldr/ext/FormatData_nus.h>

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

$MethodInfo _FormatData_nus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_nus::*)()>(&FormatData_nus::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_nus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_nus",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_nus_MethodInfo_
};

$Object* allocate$FormatData_nus($Class* clazz) {
	return $of($alloc(FormatData_nus));
}

void FormatData_nus::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_nus::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"Tiop thar p\u025bt"_s,
		u"P\u025bt"_s,
		u"Du\u0254\u0331\u0254\u0331\u014b"_s,
		"Guak"_s,
		u"Du\u00e4t"_s,
		"Kornyoot"_s,
		u"Pay yie\u0331tni"_s,
		u"Tho\u0331o\u0331r"_s,
		u"T\u025b\u025br"_s,
		"Laath"_s,
		"Kur"_s,
		u"Tio\u0331p in di\u0331i\u0331t"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"Tiop"_s,
		u"P\u025bt"_s,
		u"Du\u0254\u0331\u0254\u0331"_s,
		"Guak"_s,
		u"Du\u00e4"_s,
		"Kor"_s,
		"Pay"_s,
		"Thoo"_s,
		u"T\u025b\u025b"_s,
		"Laa"_s,
		"Kur"_s,
		"Tid"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"T"_s,
		"P"_s,
		"D"_s,
		"G"_s,
		"D"_s,
		"K"_s,
		"P"_s,
		"T"_s,
		"T"_s,
		"L"_s,
		"K"_s,
		"T"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"C\u00e4\u014b ku\u0254th"_s,
		u"Jiec la\u0331t"_s,
		u"R\u025bw l\u00e4tni"_s,
		u"Di\u0254\u0331k l\u00e4tni"_s,
		u"\u014auaan l\u00e4tni"_s,
		u"Dhieec l\u00e4tni"_s,
		u"B\u00e4k\u025bl l\u00e4tni"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"C\u00e4\u014b"_s,
		"Jiec"_s,
		u"R\u025bw"_s,
		u"Di\u0254\u0331k"_s,
		u"\u014auaan"_s,
		"Dhieec"_s,
		u"B\u00e4k\u025bl"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"C"_s,
		"J"_s,
		"R"_s,
		"D"_s,
		u"\u014a"_s,
		"D"_s,
		"B"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"P\u00e4th di\u0254k tin nhiam"_s,
		u"P\u00e4th di\u0254k tin guur\u025b"_s,
		u"P\u00e4th di\u0254k tin w\u00e4 k\u0254\u0254ri\u025bn"_s,
		u"P\u00e4th di\u0254k tin ji\u0254akdi\u025bn"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"P1"_s,
		"P2"_s,
		"P3"_s,
		"P4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"RW"_s,
		u"T\u014a"_s,
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
		"AY"_s,
		u"\u0190Y"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"zzzz h:mm:ss a"_s,
		"z h:mm:ss a"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/MM/y G"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"Ru\u0254\u0331n"_s)
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
				u"A ka\u0331n Yecu ni dap"_s,
				u"\u0190 ca Yecu dap"_s
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
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"Ni\u0331n jok\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("Minit"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"Gua\u0331a\u0331th Ru\u00ebc"_s)
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
			$of("Pay"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"Th\u025bk\u025bni"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"Ji\u0254k"_s)
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
				"EEEE d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/MM/y"_s
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
			$of("field.hour"_s),
			$of("Thaak"_s)
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
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_nus::FormatData_nus() {
}

$Class* FormatData_nus::load$($String* name, bool initialize) {
	$loadClass(FormatData_nus, name, initialize, &_FormatData_nus_ClassInfo_, allocate$FormatData_nus);
	return class$;
}

$Class* FormatData_nus::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun