#include <sun/text/resources/cldr/ext/FormatData_mai.h>

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

$MethodInfo _FormatData_mai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_mai::*)()>(&FormatData_mai::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_mai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_mai",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mai_MethodInfo_
};

$Object* allocate$FormatData_mai($Class* clazz) {
	return $of($alloc(FormatData_mai));
}

void FormatData_mai::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_mai::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u091c\u0928\u0935\u0930\u0940"_s,
		u"\u092b\u093c\u0930\u0935\u0930\u0940"_s,
		u"\u092e\u093e\u0930\u094d\u091a"_s,
		u"\u0905\u092a\u094d\u0930\u0948\u0932"_s,
		u"\u092e\u0908"_s,
		u"\u091c\u0942\u0928"_s,
		u"\u091c\u0941\u0932\u093e\u0908"_s,
		u"\u0905\u0917\u0938\u094d\u0924"_s,
		u"\u0938\u093f\u0924\u0902\u092c\u0930"_s,
		u"\u0905\u0915\u094d\u0924\u0942\u092c\u0930"_s,
		u"\u0928\u0935\u0902\u092c\u0930"_s,
		u"\u0926\u093f\u0938\u0902\u092c\u0930"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u091c\u0928\u0970"_s,
		u"\u092b\u093c\u0930\u0970"_s,
		u"\u092e\u093e\u0930\u094d\u091a"_s,
		u"\u0905\u092a\u094d\u0930\u0948\u0932"_s,
		u"\u092e\u0908"_s,
		u"\u091c\u0942\u0928"_s,
		u"\u091c\u0941\u0932\u0970"_s,
		u"\u0905\u0917\u0970"_s,
		u"\u0938\u093f\u0924\u0970"_s,
		u"\u0905\u0915\u094d\u0924\u0942\u0970"_s,
		u"\u0928\u0935\u0970"_s,
		u"\u0926\u093f\u0938\u0970"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u091c"_s,
		u"\u092b\u093c"_s,
		u"\u092e\u093e"_s,
		u"\u0905"_s,
		u"\u092e"_s,
		u"\u091c\u0942"_s,
		u"\u091c\u0941"_s,
		u"\u0905"_s,
		u"\u0938\u093f"_s,
		u"\u0905"_s,
		u"\u0928"_s,
		u"\u0926\u093f"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0930\u0935\u093f\u0935\u093e\u0930"_s,
		u"\u0938\u094b\u092e\u0935\u093e\u0930"_s,
		u"\u092e\u0902\u0917\u0932\u0935\u093e\u0930"_s,
		u"\u092c\u0941\u0927\u0935\u093e\u0930"_s,
		u"\u0917\u0941\u0930\u0941\u0935\u093e\u0930"_s,
		u"\u0936\u0941\u0915\u094d\u0930\u0935\u093e\u0930"_s,
		u"\u0936\u0928\u093f\u0935\u093e\u0930"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0930\u0935\u093f"_s,
		u"\u0938\u094b\u092e"_s,
		u"\u092e\u0902\u0917\u0932"_s,
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
		u"\u092a\u0939\u0932\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u0926\u0942\u0938\u0930\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u0924\u0940\u0938\u0930\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u091a\u094c\u0925\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0924\u093f1"_s,
		u"\u0924\u093f2"_s,
		u"\u0924\u093f3"_s,
		u"\u0924\u093f4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"am"_s,
		"pm"_s,
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
		u"\u0908\u0938\u093e-\u092a\u0942\u0930\u094d\u0935"_s,
		u"\u0908\u0938\u094d\u0935\u0940"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G EEEE, d MMMM y"_s,
		"G d MMMM y"_s,
		"G d MMM y"_s,
		"G d/M/y"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG EEEE, d MMMM y"_s,
		"GGGG d MMMM y"_s,
		"GGGG d MMM y"_s,
		"GGGG d/M/y"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0917\u094d\u0930\u0947\u0917\u094b\u0930\u093f\u092f\u0928 \u0915\u0948\u0932\u0947\u0902\u0921\u0930"_s);
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
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0938\u092e\u092f \u0915\u094d\u0937\u0947\u0924\u094d\u0930"_s)
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
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u092e\u093e\u0928\u0915 \u0938\u092e\u092f"_s)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
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
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
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
			$of(u"\u0938\u092a\u094d\u0924\u093e\u0939 \u0915\u0947 \u0926\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1} \u0915\u0947 {0}"_s,
				u"{1} \u0915\u0947 {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
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
			$of(u"\u092e\u093f\u0928\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u092f\u0941\u0917"_s)
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
			$of(u"\u092a\u0942\u0930\u094d\u0935\u093e\u0939\u094d\u0928/\u0905\u092a\u0930\u093e\u0939\u094d\u0928"_s)
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
			$of(u"\u092e\u0939\u0940\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0938\u0947\u0915\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0938\u092a\u094d\u0924\u093e\u0939"_s)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u0921\u0947\u0932\u093e\u0907\u091f \u0938\u092e\u092f"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
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
			$of("field.hour"_s),
			$of(u"\u0918\u0902\u091f\u093e"_s)
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
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0938\u092e\u092f"_s)
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
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_mai::FormatData_mai() {
}

$Class* FormatData_mai::load$($String* name, bool initialize) {
	$loadClass(FormatData_mai, name, initialize, &_FormatData_mai_ClassInfo_, allocate$FormatData_mai);
	return class$;
}

$Class* FormatData_mai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun