#include <sun/text/resources/cldr/ext/FormatData_ne.h>

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

$MethodInfo _FormatData_ne_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ne::*)()>(&FormatData_ne::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ne_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ne",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ne_MethodInfo_
};

$Object* allocate$FormatData_ne($Class* clazz) {
	return $of($alloc(FormatData_ne));
}

void FormatData_ne::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ne::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u091c\u0928\u0935\u0930\u0940"_s,
		u"\u092b\u0947\u092c\u094d\u0930\u0941\u0905\u0930\u0940"_s,
		u"\u092e\u093e\u0930\u094d\u091a"_s,
		u"\u0905\u092a\u094d\u0930\u093f\u0932"_s,
		u"\u092e\u0947"_s,
		u"\u091c\u0941\u0928"_s,
		u"\u091c\u0941\u0932\u093e\u0908"_s,
		u"\u0905\u0917\u0938\u094d\u091f"_s,
		u"\u0938\u0947\u092a\u094d\u091f\u0947\u092e\u094d\u092c\u0930"_s,
		u"\u0905\u0915\u094d\u091f\u094b\u092c\u0930"_s,
		u"\u0928\u094b\u092d\u0947\u092e\u094d\u092c\u0930"_s,
		u"\u0921\u093f\u0938\u0947\u092e\u094d\u092c\u0930"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u091c\u0928"_s,
		u"\u092b\u0947\u092c"_s,
		u"\u092e\u093e\u0930\u094d\u091a"_s,
		u"\u0905\u092a\u094d\u0930"_s,
		u"\u092e\u0947"_s,
		u"\u091c\u0941\u0928"_s,
		u"\u091c\u0941\u0932"_s,
		u"\u0905\u0917"_s,
		u"\u0938\u0947\u092a"_s,
		u"\u0905\u0915\u094d\u091f\u094b"_s,
		u"\u0928\u094b\u092d\u0947"_s,
		u"\u0921\u093f\u0938\u0947"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0906\u0907\u0924\u092c\u093e\u0930"_s,
		u"\u0938\u094b\u092e\u092c\u093e\u0930"_s,
		u"\u092e\u0919\u094d\u0917\u0932\u092c\u093e\u0930"_s,
		u"\u092c\u0941\u0927\u092c\u093e\u0930"_s,
		u"\u092c\u093f\u0939\u093f\u092c\u093e\u0930"_s,
		u"\u0936\u0941\u0915\u094d\u0930\u092c\u093e\u0930"_s,
		u"\u0936\u0928\u093f\u092c\u093e\u0930"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0906\u0907\u0924"_s,
		u"\u0938\u094b\u092e"_s,
		u"\u092e\u0919\u094d\u0917\u0932"_s,
		u"\u092c\u0941\u0927"_s,
		u"\u092c\u093f\u0939\u093f"_s,
		u"\u0936\u0941\u0915\u094d\u0930"_s,
		u"\u0936\u0928\u093f"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0906"_s,
		u"\u0938\u094b"_s,
		u"\u092e"_s,
		u"\u092c\u0941"_s,
		u"\u092c\u093f"_s,
		u"\u0936\u0941"_s,
		u"\u0936"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u092a\u0939\u093f\u0932\u094b \u0938\u0924\u094d\u0930"_s,
		u"\u0926\u094b\u0938\u094d\u0930\u094b \u0938\u0924\u094d\u0930"_s,
		u"\u0924\u0947\u0938\u094d\u0930\u094b \u0938\u0924\u094d\u0930"_s,
		u"\u091a\u094c\u0925\u094b \u0938\u0924\u094d\u0930"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u0967"_s,
		u"\u0968"_s,
		u"\u0969"_s,
		u"\u096a"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935\u093e\u0939\u094d\u0928"_s,
		u"\u0905\u092a\u0930\u093e\u0939\u094d\u0928"_s,
		u"\u092e\u0927\u094d\u092f\u0930\u093e\u0924"_s,
		u"\u092e\u0927\u094d\u092f\u093e\u0928\u094d\u0939"_s,
		u"\u092c\u093f\u0939\u093e\u0928"_s,
		""_s,
		u"\u0905\u092a\u0930\u093e\u0928\u094d\u0939"_s,
		u"\u0938\u093e\u0901\u091d"_s,
		u"\u092c\u0947\u0932\u0941\u0915\u0940"_s,
		""_s,
		u"\u0930\u093e\u0924"_s,
		""_s
	}));
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		u"\u0908\u0938\u093e \u092a\u0942\u0930\u094d\u0935"_s,
		u"\u0938\u0928\u094d"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y-MM-dd"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0917\u094d\u0930\u0947\u0917\u094b\u0930\u093f\u092f\u0928 \u092a\u093e\u0924\u094d\u0930\u094b"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0935\u0930\u094d\u0937"_s)
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
			$of(u"\u0907\u0938\u094d\u0932\u093e\u092e\u0940 \u0928\u093e\u0917\u0930\u093f\u0915 \u092a\u093e\u0924\u094d\u0930\u094b"_s)
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
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} (+\u0966)"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("deva"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928\u0940 \u092a\u093e\u0924\u094d\u0930\u094b"_s)
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
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
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
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			}))
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
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u092e\u093f\u0928\u0947\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0915\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u092a\u0942\u0930\u094d\u0935\u093e\u0939\u094d\u0928 / \u0905\u092a\u0930\u093e\u0939\u094d\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u091c\u0928"_s,
				u"\u092b\u0947\u0947\u092c"_s,
				u"\u092e\u093e\u0930\u094d\u091a"_s,
				u"\u0905\u092a\u094d\u0930"_s,
				u"\u092e\u0947"_s,
				u"\u091c\u0941\u0928"_s,
				u"\u091c\u0941\u0932"_s,
				u"\u0905\u0917"_s,
				u"\u0938\u0947\u092a"_s,
				u"\u0905\u0915\u094d\u091f\u094b"_s,
				u"\u0928\u094b\u092d\u0947"_s,
				u"\u0921\u093f\u0938\u0947"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u091a\u093f\u0928\u093f\u092f\u093e\u0901 \u0917\u0923\u0924\u0928\u094d\u0924\u094d\u0930\u0915\u094b \u092a\u093e\u0924\u094d\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u092e\u0939\u093f\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0938\u0947\u0915\u0947\u0928\u094d\u0921"_s)
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
			$of(u"\u0907\u0938\u094d\u0932\u093e\u092e\u0940 \u092a\u093e\u0924\u094d\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:22:00-04:00;afternoon1:12:00-16:00;morning1:04:00-12:00;afternoon2:16:00-19:00;evening1:19:00-22:00"_s)
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
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0938\u092e\u092f"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0939\u091c\u093e\u0930 other:0\' \'\u0939\u091c\u093e\u0930}"_s,
				u"{one:00\' \'\u0939\u091c\u093e\u0930 other:00\' \'\u0939\u091c\u093e\u0930}"_s,
				u"{one:0\' \'\u0932\u093e\u0916 other:0\' \'\u0932\u093e\u0916}"_s,
				u"{one:0\' \'\u0915\u0930\u094b\u0921 other:0\' \'\u0915\u0930\u094b\u0921}"_s,
				u"{one:00\' \'\u0915\u0930\u094b\u0921 other:00\' \'\u0915\u0930\u094b\u0921}"_s,
				u"{one:000\' \'\u0915\u0930\u094b\u0921 other:000\' \'\u0915\u0930\u094b\u0921}"_s,
				u"{one:0\' \'\u0905\u0930\u092c other:0\' \'\u0905\u0930\u092c}"_s,
				u"{one:00\' \'\u0905\u0930\u092c other:00\' \'\u0905\u0930\u092c}"_s,
				u"{one:000\' \'\u0905\u0930\u092c other:000\' \'\u0905\u0930\u092c}"_s,
				u"{one:00\' \'\u0916\u0930\u092c other:00\' \'\u0916\u0930\u092c}"_s,
				u"{one:0\' \'\u0936\u0902\u0916 other:0\' \'\u0936\u0902\u0916}"_s,
				u"{one:00\' \'\u0936\u0902\u0916 other:00\' \'\u0936\u0902\u0916}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(u"\u0915\u094d\u0937\u0947\u0924\u094d\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
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
			$of(metaValue_long_Eras)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0939\u092a\u094d\u0924\u093e\u0915\u094b \u092c\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
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
			$of(metaValue_QuarterNames)
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
			$of(u"\u0939\u092a\u094d\u0924\u093e"_s)
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
				u"{one:0\u00a0\u0939\u091c\u093e\u0930 other:0\u00a0\u0939\u091c\u093e\u0930}"_s,
				u"{one:00\u00a0\u0939\u091c\u093e\u0930 other:00\u00a0\u0939\u091c\u093e\u0930}"_s,
				u"{one:0\u00a0\u0932\u093e\u0916 other:0\u00a0\u0932\u093e\u0916}"_s,
				u"{one:00\u00a0\u0932\u093e\u0916 other:00\u00a0\u0932\u093e\u0916}"_s,
				u"{one:0\u00a0\u0915\u0930\u094b\u0921 other:0\u00a0\u0915\u0930\u094b\u0921}"_s,
				u"{one:00\u00a0\u0915\u0930\u094b\u0921 other:00\u00a0\u0915\u0930\u094b\u0921}"_s,
				u"{one:0\u00a0\u0905\u0930\u092c other:0\u00a0\u0905\u0930\u092c}"_s,
				u"{one:00\u00a0\u0905\u0930\u092c other:00\u00a0\u0905\u0930\u092c}"_s,
				u"{one:0\u00a0\u0916\u0930\u092c other:0\u00a0\u0916\u0930\u092c}"_s,
				u"{one:00\u00a0\u0916\u0930\u092c other:00\u00a0\u0916\u0930\u092c}"_s,
				u"{one:0\u00a0\u0936\u0902\u0916 other:0\u00a0\u0936\u0902\u0916}"_s,
				u"{one:00\u00a0\u0936\u0902\u0916 other:00\u00a0\u0936\u0902\u0916}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} (+\u0967)"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y MMMM d, EEEE"_s,
				"y MMMM d"_s,
				"y MMM d"_s,
				"yy/M/d"_s
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
			$of(u"\u0918\u0923\u094d\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u092c\u0941\u0926\u094d\u0927\u093f\u0937\u094d\u091f \u092a\u093e\u0924\u094d\u0930\u094b"_s)
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
				u"\u00a4\u00a0#,##,##0.00"_s
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("deva.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
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

FormatData_ne::FormatData_ne() {
}

$Class* FormatData_ne::load$($String* name, bool initialize) {
	$loadClass(FormatData_ne, name, initialize, &_FormatData_ne_ClassInfo_, allocate$FormatData_ne);
	return class$;
}

$Class* FormatData_ne::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun