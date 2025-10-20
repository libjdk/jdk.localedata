#include <sun/text/resources/cldr/ext/FormatData_kok.h>

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

$MethodInfo _FormatData_kok_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_kok::*)()>(&FormatData_kok::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_kok_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_kok",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_kok_MethodInfo_
};

$Object* allocate$FormatData_kok($Class* clazz) {
	return $of($alloc(FormatData_kok));
}

void FormatData_kok::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_kok::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u091c\u093e\u0928\u0947\u0935\u093e\u0930\u0940"_s,
		u"\u092b\u0947\u092c\u094d\u0930\u0941\u0935\u093e\u0930\u0940"_s,
		u"\u092e\u093e\u0930\u094d\u091a"_s,
		u"\u090f\u092a\u094d\u0930\u0940\u0932"_s,
		u"\u092e\u0947"_s,
		u"\u091c\u0942\u0928"_s,
		u"\u091c\u0941\u0932\u092f"_s,
		u"\u0911\u0917\u0938\u094d\u091f"_s,
		u"\u0938\u092a\u094d\u091f\u0947\u0902\u092c\u0930"_s,
		u"\u0911\u0915\u094d\u091f\u094b\u092c\u0930"_s,
		u"\u0928\u094b\u0935\u094d\u0939\u0947\u0902\u092c\u0930"_s,
		u"\u0921\u093f\u0938\u0947\u0902\u092c\u0930"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0906\u092f\u0924\u093e\u0930"_s,
		u"\u0938\u094b\u092e\u093e\u0930"_s,
		u"\u092e\u0902\u0917\u0933\u093e\u0930"_s,
		u"\u092c\u0941\u0927\u0935\u093e\u0930"_s,
		u"\u092c\u093f\u0930\u0947\u0938\u094d\u0924\u093e\u0930"_s,
		u"\u0936\u0941\u0915\u094d\u0930\u093e\u0930"_s,
		u"\u0936\u0947\u0928\u0935\u093e\u0930"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0906"_s,
		u"\u0938\u094b"_s,
		u"\u092e\u0902"_s,
		u"\u092c\u0941"_s,
		u"\u092c\u093f"_s,
		u"\u0936\u0941"_s,
		u"\u0936\u0947"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1\u0932\u0947\u0902 \u0924\u094d\u0930\u0948\u092e\u093e\u0938\u0940\u0915"_s,
		u"2\u0930\u0947\u0902 \u0924\u094d\u0930\u0948\u092e\u093e\u0938\u0940\u0915"_s,
		u"3\u0930\u0947\u0902 \u0924\u094d\u0930\u0948\u092e\u093e\u0938\u0940\u0915"_s,
		u"4\u0925\u0947\u0902 \u0924\u094d\u0930\u0948\u092e\u093e\u0938\u0940\u0915"_s
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
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
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		u"\u0915\u094d\u0930\u093f\u0938\u094d\u0924\u092a\u0942\u0930\u094d\u0935"_s,
		u"\u0915\u094d\u0930\u093f\u0938\u094d\u0924\u0936\u0916\u093e"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
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
	$var($StringArray, metaValue_buddhist_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
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
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d-M-y G"_s,
		"d-M-y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d-M-y GGGG"_s,
		"d-M-y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0917\u094d\u0930\u0947\u0917\u094b\u0930\u093f\u092f\u0928 \u0915\u0945\u0932\u0945\u0923\u094d\u0921\u0930"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0935\u0930\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
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
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u092a\u094d\u0930\u092e\u093e\u0923\u093f\u0924 \u0935\u0947\u0933"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u091c\u092a\u093e\u0928\u0940 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
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
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
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
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u092e\u093f\u0928\u0940\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0936\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u092e\u093f\u0902\u0917\u0941\u0906 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e (\u0905\u0923\u0915\u093e\u0930\u093e\u091a\u0940 \u0915\u0941\u0930\u0942: \u091c\u093e\u0915\u093e \u091a\u093f\u0928\u0940 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u0947\u091a\u0947\u0902 \u092a\u094d\u0930\u091c\u093e\u0938\u0924\u094d\u0924\u093e\u0915\", \"\u0930\u093f\u092a\u092c\u094d\u0932\u093f\u0915\u0928 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e\")"_s)
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
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u092e\u094d\u0939\u092f\u0928\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0938\u0947\u0915\u0902\u0926"_s)
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
			$of(u"\u0908\u0938\u094d\u0932\u093e\u092e\u0940\u0915 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
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
			$of($$new($StringArray, {
				u"\u091c\u093e\u0928\u0947"_s,
				u"\u092b\u0947\u092c\u094d\u0930\u0941"_s,
				u"\u092e\u093e\u0930\u094d\u091a"_s,
				u"\u090f\u092a\u094d\u0930\u0940"_s,
				u"\u092e\u0947"_s,
				u"\u091c\u0942\u0928"_s,
				u"\u091c\u0941\u0932"_s,
				u"\u0911\u0917"_s,
				u"\u0938\u092a\u094d\u091f\u0947\u0902"_s,
				u"\u0911\u0915\u094d\u091f\u094b"_s,
				u"\u0928\u094b"_s,
				u"\u0921\u093f\u0938\u0947"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0935\u0947\u0933"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u0939\u091c\u093e\u0930}"_s,
				u"{other:00\' \'\u0939\u091c\u093e\u0930}"_s,
				u"{other:000\' \'\u0939\u091c\u093e\u0930}"_s,
				u"{other:0\' \'\u0926\u0936\u0932\u0915\u094d\u0937}"_s,
				u"{other:00\' \'\u0926\u0936\u0932\u0915\u094d\u0937}"_s,
				u"{other:000\' \'\u0926\u0936\u0932\u0915\u094d\u0937}"_s,
				u"{other:0\' \'\u0905\u092c\u094d\u091c}"_s,
				u"{other:00\' \'\u0905\u092c\u094d\u091c}"_s,
				u"{other:000\' \'\u0905\u092c\u094d\u091c}"_s,
				u"{other:0\' \'\u091f\u094d\u0930\u093f\u0932\u093f\u092f\u0928}"_s,
				u"{other:00\' \'\u091f\u094d\u0930\u093f\u0932\u093f\u092f\u0928}"_s,
				u"{other:000\' \'\u091f\u094d\u0930\u093f\u0932\u093f\u092f\u0928}"_s
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
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u0906"_s,
				u"\u0938\u094b"_s,
				u"\u092e\u0902"_s,
				u"\u092c\u0941"_s,
				u"\u092c"_s,
				u"\u0936\u0941"_s,
				u"\u0936\u0947"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_buddhist_AmPmMarkers)
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
			$of(u"\u0935\u0947\u0933 \u091d\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0938\u092a\u094d\u0924\u0915\u093e\u091a\u094b \u0926\u0940\u0938"_s)
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
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0938\u092a\u094d\u0924\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
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
			$of(metaValue_buddhist_AmPmMarkers)
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
				"{other:0K}"_s,
				"{other:00K}"_s,
				"{other:000K}"_s,
				"{other:0M}"_s,
				"{other:00M}"_s,
				"{other:000M}"_s,
				"{other:0B}"_s,
				"{other:00B}"_s,
				"{other:000B}"_s,
				"{other:0T}"_s,
				"{other:00T}"_s,
				"{other:000T}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u0921\u0947\u0932\u093e\u092f\u091f \u0935\u0947\u0933"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y"_s,
				"d MMMM y"_s,
				"d-MMM-y"_s,
				"d-M-yy"_s
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
			$of("field.hour"_s),
			$of(u"\u0935\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u092c\u0941\u0927\u094d\u0926\u0940\u0936\u094d\u091f \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
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
			$of("deva.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_kok::FormatData_kok() {
}

$Class* FormatData_kok::load$($String* name, bool initialize) {
	$loadClass(FormatData_kok, name, initialize, &_FormatData_kok_ClassInfo_, allocate$FormatData_kok);
	return class$;
}

$Class* FormatData_kok::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun