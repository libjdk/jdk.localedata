#include <sun/text/resources/cldr/ext/FormatData_mr.h>

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

$MethodInfo _FormatData_mr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_mr::*)()>(&FormatData_mr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_mr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_mr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mr_MethodInfo_
};

$Object* allocate$FormatData_mr($Class* clazz) {
	return $of($alloc(FormatData_mr));
}

void FormatData_mr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_mr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u091c\u093e\u0928\u0947\u0935\u093e\u0930\u0940"_s,
		u"\u092b\u0947\u092c\u094d\u0930\u0941\u0935\u093e\u0930\u0940"_s,
		u"\u092e\u093e\u0930\u094d\u091a"_s,
		u"\u090f\u092a\u094d\u0930\u093f\u0932"_s,
		u"\u092e\u0947"_s,
		u"\u091c\u0942\u0928"_s,
		u"\u091c\u0941\u0932\u0948"_s,
		u"\u0911\u0917\u0938\u094d\u091f"_s,
		u"\u0938\u092a\u094d\u091f\u0947\u0902\u092c\u0930"_s,
		u"\u0911\u0915\u094d\u091f\u094b\u092c\u0930"_s,
		u"\u0928\u094b\u0935\u094d\u0939\u0947\u0902\u092c\u0930"_s,
		u"\u0921\u093f\u0938\u0947\u0902\u092c\u0930"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u091c\u093e\u0928\u0947"_s,
		u"\u092b\u0947\u092c\u094d\u0930\u0941"_s,
		u"\u092e\u093e\u0930\u094d\u091a"_s,
		u"\u090f\u092a\u094d\u0930\u093f"_s,
		u"\u092e\u0947"_s,
		u"\u091c\u0942\u0928"_s,
		u"\u091c\u0941\u0932\u0948"_s,
		u"\u0911\u0917"_s,
		u"\u0938\u092a\u094d\u091f\u0947\u0902"_s,
		u"\u0911\u0915\u094d\u091f\u094b"_s,
		u"\u0928\u094b\u0935\u094d\u0939\u0947\u0902"_s,
		u"\u0921\u093f\u0938\u0947\u0902"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u091c\u093e"_s,
		u"\u092b\u0947"_s,
		u"\u092e\u093e"_s,
		u"\u090f"_s,
		u"\u092e\u0947"_s,
		u"\u091c\u0942"_s,
		u"\u091c\u0941"_s,
		u"\u0911"_s,
		u"\u0938"_s,
		u"\u0911"_s,
		u"\u0928\u094b"_s,
		u"\u0921\u093f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0930\u0935\u093f\u0935\u093e\u0930"_s,
		u"\u0938\u094b\u092e\u0935\u093e\u0930"_s,
		u"\u092e\u0902\u0917\u0933\u0935\u093e\u0930"_s,
		u"\u092c\u0941\u0927\u0935\u093e\u0930"_s,
		u"\u0917\u0941\u0930\u0941\u0935\u093e\u0930"_s,
		u"\u0936\u0941\u0915\u094d\u0930\u0935\u093e\u0930"_s,
		u"\u0936\u0928\u093f\u0935\u093e\u0930"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0930\u0935\u093f"_s,
		u"\u0938\u094b\u092e"_s,
		u"\u092e\u0902\u0917\u0933"_s,
		u"\u092c\u0941\u0927"_s,
		u"\u0917\u0941\u0930\u0941"_s,
		u"\u0936\u0941\u0915\u094d\u0930"_s,
		u"\u0936\u0928\u093f"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0930"_s,
		u"\u0938\u094b"_s,
		u"\u092e\u0902"_s,
		u"\u092c\u0941"_s,
		u"\u0917\u0941"_s,
		u"\u0936\u0941"_s,
		u"\u0936"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u092a\u094d\u0930\u0925\u092e \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u0926\u094d\u0935\u093f\u0924\u0940\u092f \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u0924\u0943\u0924\u0940\u092f \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u091a\u0924\u0941\u0930\u094d\u0925 \u0924\u093f\u092e\u093e\u0939\u0940"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0924\u093f\u0967"_s,
		u"\u0924\u093f\u0968"_s,
		u"\u0924\u093f\u0969"_s,
		u"\u0924\u093f\u096a"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u0967"_s,
		u"\u0968"_s,
		u"\u0969"_s,
		u"\u096a"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u092e\u0927\u094d\u092f\u0930\u093e\u0924\u094d\u0930"_s,
		u"\u092e\u0927\u094d\u092f\u093e\u0928\u094d\u0939"_s,
		u"\u092a\u0939\u093e\u091f"_s,
		u"\u0938\u0915\u093e\u0933"_s,
		u"\u0926\u0941\u092a\u093e\u0930"_s,
		""_s,
		u"\u0938\u0902\u0927\u094d\u092f\u093e\u0915\u093e\u0933"_s,
		u"\u0938\u093e\u092f\u0902\u0915\u093e\u0933"_s,
		u"\u0930\u093e\u0924\u094d\u0930"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"\u092e.\u0930\u093e."_s,
		u"\u0926\u0941"_s,
		u"\u092a"_s,
		u"\u0938"_s,
		u"\u0926\u0941"_s,
		""_s,
		u"\u0938\u0902"_s,
		u"\u0938\u093e"_s,
		u"\u0930\u093e"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0907. \u0938. \u092a\u0942."_s,
		u"\u0907. \u0938."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0907\u0938\u0935\u0940\u0938\u0928 \u092a\u0942\u0930\u094d\u0935"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		u"\u0907\u0938\u092a\u0942."_s
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
		u"\u0906\u0930.\u0913.\u0938\u0940. \u0906\u0927\u0940"_s,
		u"\u092e\u093f\u0902\u0917\u0942"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u0939\u093f\u091c\u0930\u0940 \u0935\u0930\u094d\u0937"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_Eras, $new($StringArray, {
		""_s,
		u"\u0939\u093f.\u0935."_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0917\u094d\u0930\u0947\u0917\u094b\u0930\u093f\u092f\u0928 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s);
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
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u092e\u0941\u0938\u094d\u0932\u093f\u092e \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e \u0909\u092e-\u0905\u0932-\u0915\u0941\u0930\u093e"_s)
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
			$of("[GMT]{0}"_s)
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
			$of(u"\u092e\u0941\u0938\u094d\u0932\u093f\u092e- \u0928\u093e\u0917\u0930\u0940 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
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
			$of(u"{0} \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s)
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
			$of(u"\u091c\u092a\u093e\u0928\u0940 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of("[GMT]"_s)
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
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0908\u0938\u0935\u0940\u0938\u0928\u092a\u0942\u0930\u094d\u0935"_s,
				u"\u0908\u0938\u0935\u0940\u0938\u0928"_s
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1} \u0930\u094b\u091c\u0940 {0}"_s,
				u"{1} \u0930\u094b\u091c\u0940 {0}"_s,
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
			$of(u"\u092e\u093f\u0928\u093f\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u092f\u0941\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u092e\u094b\u0939\u0930\u092e"_s,
				u"\u0938\u092b\u0930"_s,
				u"\u0930\u093e\u092c\u0940 I"_s,
				u"\u0930\u093e\u092c\u0940 II"_s,
				u"\u091c\u0941\u092e\u093e\u0926\u093e I"_s,
				u"\u091c\u0941\u092e\u093e\u0926\u093e II"_s,
				u"\u0930\u091d\u093e\u092c"_s,
				u"\u0936\u093e\u092c\u093e\u0928"_s,
				u"\u0930\u092e\u091c\u093e\u0928"_s,
				u"\u0936\u0935\u094d\u0935\u093e\u0932"_s,
				u"\u0927\u0941\u0932-\u0915\u0940\u0926\u093e\u0939"_s,
				u"\u0927\u0941\u0932-\u0939\u093f\u091c\u093e\u0939"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u092e\u093f\u0928\u0917\u0941\u0913 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
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
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u092e\u0939\u093f\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0938\u0947\u0915\u0902\u0926"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0967"_s,
				u"\u0968"_s,
				u"\u0969"_s,
				u"\u096a"_s,
				u"\u096b"_s,
				u"\u096c"_s,
				u"\u096d"_s,
				u"\u096e"_s,
				u"\u096f"_s,
				u"\u0967\u0966"_s,
				u"\u0967\u0967"_s,
				u"\u0967\u0968"_s,
				""_s
			}))
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
			$of(u"\u092e\u0941\u0938\u094d\u0932\u093f\u092e \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;evening2:18:00-21:00;night1:21:00-04:00;morning2:06:00-12:00;afternoon1:12:00-16:00;morning1:04:00-06:00;evening1:16:00-18:00"_s)
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
			$of(metaValue_MonthAbbreviations)
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
				u"{one:0\' \'\u0939\u091c\u093e\u0930 other:0\' \'\u0939\u091c\u093e\u0930}"_s,
				u"{one:00\' \'\u0939\u091c\u093e\u0930 other:00\' \'\u0939\u091c\u093e\u0930}"_s,
				u"{one:0\' \'\u0932\u093e\u0916 other:0\' \'\u0932\u093e\u0916}"_s,
				u"{one:00\' \'\u0932\u093e\u0916 other:00\' \'\u0932\u093e\u0916}"_s,
				u"{one:0\' \'\u0915\u094b\u091f\u0940 other:0\' \'\u0915\u094b\u091f\u0940}"_s,
				u"{one:00\' \'\u0915\u094b\u091f\u0940 other:00\' \'\u0915\u094b\u091f\u0940}"_s,
				u"{one:0\' \'\u0905\u092c\u094d\u091c other:0\' \'\u0905\u092c\u094d\u091c}"_s,
				u"{one:00\' \'\u0905\u092c\u094d\u091c other:00\' \'\u0905\u092c\u094d\u091c}"_s,
				u"{one:0\' \'\u0916\u0930\u094d\u0935 other:0\' \'\u0916\u0930\u094d\u0935}"_s,
				u"{one:00\' \'\u0916\u0930\u094d\u0935 other:00\' \'\u0916\u0930\u094d\u0935}"_s,
				u"{one:0\' \'\u092a\u0926\u094d\u092e other:0\' \'\u092a\u0926\u094d\u092e}"_s,
				u"{one:00\' \'\u092a\u0926\u094d\u092e other:00\' \'\u092a\u0926\u094d\u092e}"_s
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
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0935\u0947\u0933 \u0915\u094d\u0937\u0947\u0924\u094d\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
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
			$of(u"\u0906\u0920\u0935\u0921\u094d\u092f\u093e\u091a\u093e \u0926\u093f\u0935\u0938"_s)
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
			$of(metaValue_java_time_islamic_Eras)
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
			$of(metaValue_java_time_buddhist_Eras)
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
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0906\u0920\u0935\u0921\u093e"_s)
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
				u"{one:0\u00a0\u0939 other:0\u00a0\u0939}"_s,
				u"{one:00\u00a0\u0939 other:00\u00a0\u0939}"_s,
				u"{one:0\u00a0\u0932\u093e\u0916 other:0\u00a0\u0932\u093e\u0916}"_s,
				u"{one:00\u00a0\u0932\u093e\u0916 other:00\u00a0\u0932\u093e\u0916}"_s,
				u"{one:0\u00a0\u0915\u094b\u091f\u0940 other:0\u00a0\u0915\u094b\u091f\u0940}"_s,
				u"{one:00\u00a0\u0915\u094b\u091f\u0940 other:00\u00a0\u0915\u094b\u091f\u0940}"_s,
				u"{one:0\u00a0\u0905\u092c\u094d\u091c other:0\u00a0\u0905\u092c\u094d\u091c}"_s,
				u"{one:00\u00a0\u0905\u092c\u094d\u091c other:00\u00a0\u0905\u092c\u094d\u091c}"_s,
				u"{one:0\u00a0\u0916\u0930\u094d\u0935 other:0\u00a0\u0916\u0930\u094d\u0935}"_s,
				u"{one:00\u00a0\u0916\u0930\u094d\u0935 other:00\u00a0\u0916\u0930\u094d\u0935}"_s,
				u"{one:0\u00a0\u092a\u0926\u094d\u092e other:0\u00a0\u092a\u0926\u094d\u092e}"_s,
				u"{one:00\u00a0\u092a\u0926\u094d\u092e other:00\u00a0\u092a\u0926\u094d\u092e}"_s
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
			$of(u"{0} \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s)
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
			$of(u"\u0924\u093e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u092e\u094b\u0939."_s,
				u"\u0938\u092b."_s,
				u"\u0930\u093e\u092c\u0940 I"_s,
				u"\u0930\u093e\u092c\u0940 II"_s,
				u"\u091c\u0941\u092e\u093e. I"_s,
				u"\u091c\u0941\u092e\u093e. II"_s,
				u"\u0930\u091d\u093e."_s,
				u"\u0936\u093e\u092c\u093e."_s,
				u"\u0930\u092e."_s,
				u"\u0936\u0935\u094d\u0935\u093e."_s,
				u"\u0927\u0941\u0932-\u0915\u0940."_s,
				u"\u0927\u0941\u0932-\u0939\u093f."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u092c\u094c\u0926\u094d\u0927 \u0926\u093f\u0928\u0926\u0930\u094d\u0936\u093f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##0.00"_s,
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
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("deva.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
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

FormatData_mr::FormatData_mr() {
}

$Class* FormatData_mr::load$($String* name, bool initialize) {
	$loadClass(FormatData_mr, name, initialize, &_FormatData_mr_ClassInfo_, allocate$FormatData_mr);
	return class$;
}

$Class* FormatData_mr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun