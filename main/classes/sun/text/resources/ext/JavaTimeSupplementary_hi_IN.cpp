#include <sun/text/resources/ext/JavaTimeSupplementary_hi_IN.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_hi_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_hi_IN::*)()>(&JavaTimeSupplementary_hi_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_hi_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_hi_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_hi_IN_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_hi_IN($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_hi_IN));
}

void JavaTimeSupplementary_hi_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_hi_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"\u0924\u093f1"_s,
		u"\u0924\u093f2"_s,
		u"\u0924\u093f3"_s,
		u"\u0924\u093f4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\u092a\u0939\u0932\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u0926\u0942\u0938\u0930\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u0924\u0940\u0938\u0930\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s,
		u"\u091a\u094c\u0925\u0940 \u0924\u093f\u092e\u093e\u0939\u0940"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935\u093e\u0939\u094d\u0928"_s,
		u"\u0905\u092a\u0930\u093e\u0939\u094d\u0928"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG EEEE, d MMMM y"_s,
		"GGGG d MMMM y"_s,
		"GGGG d MMM y"_s,
		"GGGG d/M/y"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u0930\u0935\u093f"_s,
		u"\u0938\u094b\u092e"_s,
		u"\u092e\u0902\u0917\u0932"_s,
		u"\u092c\u0941\u0927"_s,
		u"\u0917\u0941\u0930\u0941"_s,
		u"\u0936\u0941\u0915\u094d\u0930"_s,
		u"\u0936\u0928\u093f"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"\u0930\u0935\u093f\u0935\u093e\u0930"_s,
		u"\u0938\u094b\u092e\u0935\u093e\u0930"_s,
		u"\u092e\u0902\u0917\u0932\u0935\u093e\u0930"_s,
		u"\u092c\u0941\u0927\u0935\u093e\u0930"_s,
		u"\u0917\u0941\u0930\u0941\u0935\u093e\u0930"_s,
		u"\u0936\u0941\u0915\u094d\u0930\u0935\u093e\u0930"_s,
		u"\u0936\u0928\u093f\u0935\u093e\u0930"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"\u0930"_s,
		u"\u0938\u094b"_s,
		u"\u092e\u0902"_s,
		u"\u092c\u0941"_s,
		u"\u0917\u0941"_s,
		u"\u0936\u0941"_s,
		u"\u0936"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedAbbreviatedAmPmMarkers, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935"_s,
		u"\u0905\u092a\u0930"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"\u092a\u0942"_s,
		u"\u0905"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G EEEE, d MMMM y"_s,
		"G d MMMM y"_s,
		"G d MMM y"_s,
		"G d/M/y"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u092c\u094c\u0926\u094d\u0927 \u092a\u0902\u091a\u093e\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u0917\u094d\u0930\u0947\u0917\u094b\u0930\u093f\u092f\u0928 \u0915\u0948\u0932\u0947\u0902\u0921\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u0917\u094d\u0930\u0947\u0917\u094b\u0930\u093f\u092f\u0928 \u0915\u0948\u0932\u0947\u0902\u0921\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u0907\u0938\u094d\u0932\u093e\u092e\u0940 \u092a\u0902\u091a\u093e\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u0907\u0938\u094d\u0932\u093e\u092e\u0940 \u0928\u093e\u0917\u0930\u093f\u0915 \u092a\u0902\u091a\u093e\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928\u0940 \u092a\u0902\u091a\u093e\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u091a\u0940\u0928\u0940 \u0917\u0923\u0924\u0902\u0924\u094d\u0930 \u092a\u0902\u091a\u093e\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u092a\u0942\u0930\u094d\u0935\u093e\u0939\u094d\u0928/\u0905\u092a\u0930\u093e\u0939\u094d\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u092f\u0941\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0918\u0902\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u092e\u093f\u0928\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u092e\u093e\u0939"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0938\u0947\u0915\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0938\u092a\u094d\u0924\u093e\u0939"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0938\u092a\u094d\u0924\u093e\u0939 \u0915\u093e \u0926\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0935\u0930\u094d\u0937"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0938\u092e\u092f \u0915\u094d\u0937\u0947\u0924\u094d\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u092e\u0941\u0939\u0930\u094d\u0930\u092e"_s,
				u"\u0938\u092b\u0930"_s,
				u"\u0930\u093e\u092c\u0940 \u092a\u094d\u0930\u0925\u092e"_s,
				u"\u0930\u093e\u092c\u0940 \u0926\u094d\u0935\u093f\u0924\u0940\u092f"_s,
				u"\u091c\u0941\u092e\u094d\u0921\u093e \u092a\u094d\u0930\u0925\u092e"_s,
				u"\u091c\u0941\u092e\u094d\u0921\u093e \u0926\u094d\u0935\u093f\u0924\u0940\u092f"_s,
				u"\u0930\u091c\u092c"_s,
				u"\u0936\u093e\u0935\u0928"_s,
				u"\u0930\u092e\u091c\u093e\u0928"_s,
				u"\u0936\u0935\u094d\u0935\u094d\u0932"_s,
				u"\u091c\u093f\u0932-\u0915\u094d\u0926\u093e\u0939"_s,
				u"\u091c\u093f\u0932\u094d-\u0939\u093f\u091c\u094d\u091c\u093e\u0939"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAbbreviatedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0908\u0938\u0935\u0940 \u0938\u0928"_s,
				u"\u092e\u0947\u091c\u0940"_s,
				u"\u0924\u093e\u0908\u0936\u094b"_s,
				u"\u0936\u094b\u0935\u093e"_s,
				u"\u0939\u0947\u0908\u0938\u0947\u0908"_s,
				u"\u0930\u0947\u0907\u0935\u093e"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0908\u0938\u094d\u0935\u0940"_s,
				u"\u092e\u0947\u091c\u0940"_s,
				u"\u0924\u093e\u0908\u0936\u094b"_s,
				u"\u0936\u094b\u0935\u093e"_s,
				u"\u0939\u0947\u0908\u0938\u0947\u0908"_s,
				u"\u0930\u0947\u0907\u0935\u093e"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0908\u0938\u093e-\u092a\u0942\u0930\u094d\u0935"_s,
				u"\u0908\u0938\u0935\u0940 \u0938\u0928"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0908\u0938\u093e\u092a\u0942\u0930\u094d\u0935"_s,
				u"\u0938\u0928"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAbbreviatedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_hi_IN::JavaTimeSupplementary_hi_IN() {
}

$Class* JavaTimeSupplementary_hi_IN::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_hi_IN, name, initialize, &_JavaTimeSupplementary_hi_IN_ClassInfo_, allocate$JavaTimeSupplementary_hi_IN);
	return class$;
}

$Class* JavaTimeSupplementary_hi_IN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun