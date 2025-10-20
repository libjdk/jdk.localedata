#include <sun/text/resources/cldr/ext/FormatData_ml.h>

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

$MethodInfo _FormatData_ml_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ml::*)()>(&FormatData_ml::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ml_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ml",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ml_MethodInfo_
};

$Object* allocate$FormatData_ml($Class* clazz) {
	return $of($alloc(FormatData_ml));
}

void FormatData_ml::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ml::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0d1c\u0d28\u0d41\u0d35\u0d30\u0d3f"_s,
		u"\u0d2b\u0d46\u0d2c\u0d4d\u0d30\u0d41\u0d35\u0d30\u0d3f"_s,
		u"\u0d2e\u0d3e\u0d7c\u0d1a\u0d4d\u0d1a\u0d4d"_s,
		u"\u0d0f\u0d2a\u0d4d\u0d30\u0d3f\u0d7d"_s,
		u"\u0d2e\u0d47\u0d2f\u0d4d"_s,
		u"\u0d1c\u0d42\u0d7a"_s,
		u"\u0d1c\u0d42\u0d32\u0d48"_s,
		u"\u0d13\u0d17\u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d4d"_s,
		u"\u0d38\u0d46\u0d2a\u0d4d\u0d31\u0d4d\u0d31\u0d02\u0d2c\u0d7c"_s,
		u"\u0d12\u0d15\u0d4d\u200c\u0d1f\u0d4b\u0d2c\u0d7c"_s,
		u"\u0d28\u0d35\u0d02\u0d2c\u0d7c"_s,
		u"\u0d21\u0d3f\u0d38\u0d02\u0d2c\u0d7c"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0d1c\u0d28\u0d41"_s,
		u"\u0d2b\u0d46\u0d2c\u0d4d\u0d30\u0d41"_s,
		u"\u0d2e\u0d3e\u0d7c"_s,
		u"\u0d0f\u0d2a\u0d4d\u0d30\u0d3f"_s,
		u"\u0d2e\u0d47\u0d2f\u0d4d"_s,
		u"\u0d1c\u0d42\u0d7a"_s,
		u"\u0d1c\u0d42\u0d32\u0d48"_s,
		u"\u0d13\u0d17"_s,
		u"\u0d38\u0d46\u0d2a\u0d4d\u0d31\u0d4d\u0d31\u0d02"_s,
		u"\u0d12\u0d15\u0d4d\u0d1f\u0d4b"_s,
		u"\u0d28\u0d35\u0d02"_s,
		u"\u0d21\u0d3f\u0d38\u0d02"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0d1c"_s,
		u"\u0d2b\u0d46"_s,
		u"\u0d2e\u0d3e"_s,
		u"\u0d0f"_s,
		u"\u0d2e\u0d46"_s,
		u"\u0d1c\u0d42\u0d7a"_s,
		u"\u0d1c\u0d42"_s,
		u"\u0d13"_s,
		u"\u0d38\u0d46"_s,
		u"\u0d12"_s,
		u"\u0d28"_s,
		u"\u0d21\u0d3f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0d1e\u0d3e\u0d2f\u0d31\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
		u"\u0d24\u0d3f\u0d19\u0d4d\u0d15\u0d33\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
		u"\u0d1a\u0d4a\u0d35\u0d4d\u0d35\u0d3e\u0d34\u0d4d\u0d1a"_s,
		u"\u0d2c\u0d41\u0d27\u0d28\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
		u"\u0d35\u0d4d\u0d2f\u0d3e\u0d34\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
		u"\u0d35\u0d46\u0d33\u0d4d\u0d33\u0d3f\u0d2f\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
		u"\u0d36\u0d28\u0d3f\u0d2f\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0d1e\u0d3e\u0d2f\u0d7c"_s,
		u"\u0d24\u0d3f\u0d19\u0d4d\u0d15\u0d7e"_s,
		u"\u0d1a\u0d4a\u0d35\u0d4d\u0d35"_s,
		u"\u0d2c\u0d41\u0d27\u0d7b"_s,
		u"\u0d35\u0d4d\u0d2f\u0d3e\u0d34\u0d02"_s,
		u"\u0d35\u0d46\u0d33\u0d4d\u0d33\u0d3f"_s,
		u"\u0d36\u0d28\u0d3f"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0d1e"_s,
		u"\u0d24\u0d3f"_s,
		u"\u0d1a\u0d4a"_s,
		u"\u0d2c\u0d41"_s,
		u"\u0d35\u0d4d\u0d2f\u0d3e"_s,
		u"\u0d35\u0d46"_s,
		u"\u0d36"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0d12\u0d28\u0d4d\u0d28\u0d3e\u0d02 \u0d2a\u0d3e\u0d26\u0d02"_s,
		u"\u0d30\u0d23\u0d4d\u0d1f\u0d3e\u0d02 \u0d2a\u0d3e\u0d26\u0d02"_s,
		u"\u0d2e\u0d42\u0d28\u0d4d\u0d28\u0d3e\u0d02 \u0d2a\u0d3e\u0d26\u0d02"_s,
		u"\u0d28\u0d3e\u0d32\u0d3e\u0d02 \u0d2a\u0d3e\u0d26\u0d02"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0d05\u0d7c\u0d26\u0d4d\u0d27\u0d30\u0d3e\u0d24\u0d4d\u0d30\u0d3f"_s,
		u"\u0d09\u0d1a\u0d4d\u0d1a"_s,
		u"\u0d2a\u0d41\u0d32\u0d7c\u0d1a\u0d4d\u0d1a\u0d46"_s,
		u"\u0d30\u0d3e\u0d35\u0d3f\u0d32\u0d46"_s,
		u"\u0d09\u0d1a\u0d4d\u0d1a\u0d2f\u0d4d\u0d15\u0d4d\u0d15\u0d4d"_s,
		u"\u0d09\u0d1a\u0d4d\u0d1a\u0d24\u0d3f\u0d30\u0d3f\u0d1e\u0d4d\u0d1e\u0d4d"_s,
		u"\u0d35\u0d48\u0d15\u0d41\u0d28\u0d4d\u0d28\u0d47\u0d30\u0d02"_s,
		u"\u0d38\u0d28\u0d4d\u0d27\u0d4d\u0d2f"_s,
		u"\u0d30\u0d3e\u0d24\u0d4d\u0d30\u0d3f"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"\u0d05"_s,
		u"\u0d09\u0d1a\u0d4d\u0d1a"_s,
		u"\u0d2a\u0d41\u0d32\u0d7c\u0d1a\u0d4d\u0d1a\u0d46"_s,
		u"\u0d30\u0d3e\u0d35\u0d3f\u0d32\u0d46"_s,
		u"\u0d09\u0d1a\u0d4d\u0d1a\u0d2f\u0d4d\u0d15\u0d4d\u0d15\u0d4d"_s,
		u"\u0d09\u0d1a\u0d4d\u0d1a\u0d24\u0d3f\u0d30\u0d3f\u0d1e\u0d4d\u0d1e\u0d4d"_s,
		u"\u0d35\u0d48\u0d15\u0d41\u0d28\u0d4d\u0d28\u0d47\u0d30\u0d02"_s,
		u"\u0d38\u0d28\u0d4d\u0d27\u0d4d\u0d2f"_s,
		u"\u0d30\u0d3e\u0d24\u0d4d\u0d30\u0d3f"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0d15\u0d4d\u0d30\u0d3f.\u0d2e\u0d41."_s,
		u"\u0d0e\u0d21\u0d3f"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
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
		"G y, MMMM d, EEEE"_s,
		"G y, MMMM d"_s,
		"G y, MMM d"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG y, MMMM d, EEEE"_s,
		"GGGG y, MMMM d"_s,
		"GGGG y, MMM d"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"R.O.C-\u0d2f\u0d4d\u200c\u0d15\u0d4d\u0d15\u0d4d \u0d2e\u0d41\u0d2e\u0d4d\u0d2a\u0d4d"_s,
		u"\u0d2e\u0d3f\u0d02\u0d17\u0d4d\u0d35\u0d4b"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		u"R.O.C-\u0d2f\u0d4d\u200c\u0d15\u0d4d\u0d15\u0d4d \u0d2e\u0d41."_s,
		u"\u0d2e\u0d3f\u0d02\u0d17\u0d4d\u0d35\u0d4b"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"\u0d39\u0d3f\u0d1c\u0d31"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0d07\u0d02\u0d17\u0d4d\u0d32\u0d40\u0d37\u0d4d \u0d15\u0d32\u0d23\u0d4d\u0d1f\u0d7c"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0d35\u0d7c\u0d37\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u0d07\u0d38\u0d4d\u200c\u0d32\u0d3e\u0d2e\u0d3f\u0d15\u0d4d \u0d15\u0d32\u0d23\u0d4d\u0d1f\u0d7c (\u0d09\u0d02 \u0d05\u0d7d \u0d16\u0d41\u0d31)"_s)
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
			$of("timezone.gmtFormat"_s),
			$of(u"\u0d1c\u0d3f\u0d0e\u0d02\u0d1f\u0d3f {0}"_s)
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
			$of(u"\u0d07\u0d38\u0d4d\u0d32\u0d3e\u0d02-\u0d38\u0d3f\u0d35\u0d3f\u0d7d \u0d15\u0d32\u0d23\u0d4d\u0d1f\u0d7c"_s)
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
			$of(u"{0} \u0d38\u0d4d\u0d31\u0d4d\u0d31\u0d3e\u0d7b\u0d21\u0d47\u0d7c\u0d21\u0d4d \u0d38\u0d2e\u0d2f\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0d1c\u0d3e\u0d2a\u0d4d\u0d2a\u0d28\u0d40\u0d38\u0d4d \u0d15\u0d32\u0d23\u0d4d\u0d1f\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u0d1c\u0d3f\u0d0e\u0d02\u0d1f\u0d3f"_s)
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
				u"\u0d15\u0d4d\u0d30\u0d3f\u0d38\u0d4d\u200c\u0d24\u0d41\u0d35\u0d3f\u0d28\u0d4d \u0d2e\u0d41\u0d2e\u0d4d\u0d2a\u0d4d"_s,
				u"\u0d06\u0d28\u0d4d\u0d28\u0d4b \u0d21\u0d4a\u0d2e\u0d3f\u0d28\u0d3f"_s
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
			$of(u"\u0d2e\u0d3f\u0d28\u0d3f\u0d31\u0d4d\u0d31\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0d15\u0d3e\u0d32\u0d18\u0d1f\u0d4d\u0d1f\u0d02"_s)
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
				u"\u0d2e\u0d41\u0d39\u0d31\u0d02"_s,
				u"\u0d38\u0d2b\u0d7c"_s,
				u"\u0d31\u0d2c\u0d40\u0d39\u0d41\u0d7d \u0d05\u0d35\u0d4d\u0d35\u0d7d"_s,
				u"\u0d31\u0d2c\u0d40\u0d39\u0d41\u0d7d \u0d06\u0d16\u0d3f\u0d7c"_s,
				u"\u0d1c\u0d2e\u0d3e\u0d26\u0d41\u0d7d \u0d05\u0d35\u0d4d\u0d35\u0d7d"_s,
				u"\u0d1c\u0d2e\u0d3e\u0d26\u0d41\u0d7d \u0d06\u0d16\u0d3f\u0d7c"_s,
				u"\u0d31\u0d1c\u0d2c\u0d4d"_s,
				u"\u0d36\u0d39\u0d2c\u0d3e\u0d7b"_s,
				u"\u0d31\u0d2e\u0d33\u0d3e\u0d7b"_s,
				u"\u0d36\u0d35\u0d4d\u0d35\u0d3e\u0d7d"_s,
				u"\u0d26\u0d41\u0d7d \u0d16\u0d39\u0d26\u0d4d"_s,
				u"\u0d26\u0d41\u0d7d \u0d39\u0d3f\u0d1c\u0d4d\u0d1c"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u0d2e\u0d3f\u0d02\u0d17\u0d4d\u0d35\u0d4b \u0d15\u0d32\u0d23\u0d4d\u0d1f\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
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
			$of(u"\u0d2e\u0d3e\u0d38\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0d38\u0d46\u0d15\u0d4d\u0d15\u0d7b\u0d21\u0d4d"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0d2e\u0d41"_s,
				u"\u0d38"_s,
				u"\u0d31"_s,
				u"\u0d31"_s,
				u"\u0d1c"_s,
				u"\u0d1c"_s,
				u"\u0d31"_s,
				u"\u0d36"_s,
				u"\u0d31"_s,
				u"\u0d36"_s,
				u"\u0d26\u0d41"_s,
				u"\u0d26\u0d41"_s,
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
			$of(u"\u0d07\u0d38\u0d4d\u200c\u0d32\u0d3e\u0d2e\u0d3f\u0d15\u0d4d \u0d15\u0d32\u0d23\u0d4d\u0d1f\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;evening2:18:00-19:00;night1:19:00-03:00;morning2:06:00-12:00;afternoon1:12:00-14:00;morning1:03:00-06:00;afternoon2:14:00-15:00;evening1:15:00-18:00"_s)
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
			$of(u"{0} \u0d38\u0d2e\u0d2f\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'\u0d06\u0d2f\u0d3f\u0d30\u0d02 other:0\' \'\u0d06\u0d2f\u0d3f\u0d30\u0d02}"_s,
				u"{one:00\' \'\u0d06\u0d2f\u0d3f\u0d30\u0d02 other:00\' \'\u0d06\u0d2f\u0d3f\u0d30\u0d02}"_s,
				u"{one:000\' \'\u0d06\u0d2f\u0d3f\u0d30\u0d02 other:000\' \'\u0d06\u0d2f\u0d3f\u0d30\u0d02}"_s,
				u"{one:0\' \'\u0d26\u0d36\u0d32\u0d15\u0d4d\u0d37\u0d02 other:0\' \'\u0d26\u0d36\u0d32\u0d15\u0d4d\u0d37\u0d02}"_s,
				u"{one:00\' \'\u0d26\u0d36\u0d32\u0d15\u0d4d\u0d37\u0d02 other:00\' \'\u0d26\u0d36\u0d32\u0d15\u0d4d\u0d37\u0d02}"_s,
				u"{one:000\' \'\u0d26\u0d36\u0d32\u0d15\u0d4d\u0d37\u0d02 other:000\' \'\u0d26\u0d36\u0d32\u0d15\u0d4d\u0d37\u0d02}"_s,
				u"{one:0\' \'\u0d32\u0d15\u0d4d\u0d37\u0d02\' \'\u0d15\u0d4b\u0d1f\u0d3f other:0\' \'\u0d32\u0d15\u0d4d\u0d37\u0d02\' \'\u0d15\u0d4b\u0d1f\u0d3f}"_s,
				u"{one:00\' \'\u0d32\u0d15\u0d4d\u0d37\u0d02\' \'\u0d15\u0d4b\u0d1f\u0d3f other:00\' \'\u0d32\u0d15\u0d4d\u0d37\u0d02\' \'\u0d15\u0d4b\u0d1f\u0d3f}"_s,
				u"{one:000\' \'\u0d32\u0d15\u0d4d\u0d37\u0d02\' \'\u0d15\u0d4b\u0d1f\u0d3f other:000\' \'\u0d32\u0d15\u0d4d\u0d37\u0d02\' \'\u0d15\u0d4b\u0d1f\u0d3f}"_s,
				u"{one:0\' \'\u0d1f\u0d4d\u0d30\u0d3f\u0d32\u0d4d\u0d2f\u0d7a other:0\' \'\u0d1f\u0d4d\u0d30\u0d3f\u0d32\u0d4d\u0d2f\u0d7a}"_s,
				u"{one:00\' \'\u0d1f\u0d4d\u0d30\u0d3f\u0d32\u0d4d\u0d2f\u0d7a other:00\' \'\u0d1f\u0d4d\u0d30\u0d3f\u0d32\u0d4d\u0d2f\u0d7a}"_s,
				u"{one:000\' \'\u0d1f\u0d4d\u0d30\u0d3f\u0d32\u0d4d\u0d2f\u0d7a other:000\' \'\u0d1f\u0d4d\u0d30\u0d3f\u0d32\u0d4d\u0d2f\u0d7a}"_s
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
			$of(metaValue_QuarterNames)
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
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u0d1e\u0d3e"_s,
				u"\u0d24\u0d3f"_s,
				u"\u0d1a\u0d4a"_s,
				u"\u0d2c\u0d41"_s,
				u"\u0d35\u0d4d\u0d2f\u0d3e"_s,
				u"\u0d35\u0d46"_s,
				u"\u0d36"_s
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
			$of(u"\u0d38\u0d2e\u0d2f \u0d2e\u0d47\u0d16\u0d32"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
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
			$of(u"\u0d06\u0d34\u0d4d\u0d1a\u0d2f\u0d3f\u0d32\u0d46 \u0d26\u0d3f\u0d35\u0d38\u0d02"_s)
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
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
			$of(u"\u0d06\u0d34\u0d4d\u0d1a"_s)
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
			$of("mlym.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:0K other:0K}"_s,
				"{one:00K other:00K}"_s,
				"{one:000K other:000K}"_s,
				"{one:0M other:0M}"_s,
				"{one:00M other:00M}"_s,
				"{one:000M other:000M}"_s,
				"{one:0B other:0B}"_s,
				"{one:00B other:00B}"_s,
				"{one:000B other:000B}"_s,
				"{one:0T other:0T}"_s,
				"{one:00T other:00T}"_s,
				"{one:000T other:000T}"_s
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
			$of(u"{0} \u0d21\u0d47\u0d32\u0d48\u0d31\u0d4d\u0d31\u0d4d \u0d38\u0d2e\u0d2f\u0d02"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y, MMMM d, EEEE"_s,
				"y, MMMM d"_s,
				"y, MMM d"_s,
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
			$of($$new($StringArray, {
				u"\u0d1e\u0d3e\u0d2f\u0d31\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
				u"\u0d24\u0d3f\u0d19\u0d4d\u0d15\u0d33\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
				u"\u0d1a\u0d4a\u0d35\u0d4d\u0d35\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
				u"\u0d2c\u0d41\u0d27\u0d28\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
				u"\u0d35\u0d4d\u0d2f\u0d3e\u0d34\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
				u"\u0d35\u0d46\u0d33\u0d4d\u0d33\u0d3f\u0d2f\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s,
				u"\u0d36\u0d28\u0d3f\u0d2f\u0d3e\u0d34\u0d4d\u200c\u0d1a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0d2e\u0d23\u0d3f\u0d15\u0d4d\u0d15\u0d42\u0d7c"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0d2e\u0d41\u0d39."_s,
				u"\u0d38\u0d2b."_s,
				u"\u0d31\u0d2c\u0d40\u0d39\u0d41\u0d7d \u0d05\u0d35\u0d4d\u0d35."_s,
				u"\u0d31\u0d2c\u0d40\u0d39\u0d41\u0d7d \u0d06\u0d16\u0d3f."_s,
				u"\u0d1c\u0d2e\u0d3e\u0d26\u0d41\u0d7d \u0d05\u0d35\u0d4d\u0d35."_s,
				u"\u0d1c\u0d2e\u0d3e\u0d26\u0d41\u0d7d \u0d06\u0d16\u0d3f."_s,
				u"\u0d31\u0d1c."_s,
				u"\u0d36\u0d39\u0d2c\u0d3e."_s,
				u"\u0d31\u0d2e\u0d26\u0d3e."_s,
				u"\u0d36\u0d35\u0d4d\u0d35\u0d3e."_s,
				u"\u0d26\u0d41\u0d7d \u0d16\u0d39."_s,
				u"\u0d26\u0d41\u0d7d \u0d39\u0d3f."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0d2c\u0d41\u0d26\u0d4d\u0d27\u0d2e\u0d24\u0d15\u0d32\u0d23\u0d4d\u0d1f\u0d7c"_s)
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
			$of(metaValue_QuarterNames)
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

FormatData_ml::FormatData_ml() {
}

$Class* FormatData_ml::load$($String* name, bool initialize) {
	$loadClass(FormatData_ml, name, initialize, &_FormatData_ml_ClassInfo_, allocate$FormatData_ml);
	return class$;
}

$Class* FormatData_ml::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun