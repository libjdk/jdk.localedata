#include <sun/text/resources/ext/FormatData_hi_IN.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_hi_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_hi_IN::*)()>(&FormatData_hi_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_hi_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_hi_IN",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hi_IN_MethodInfo_
};

$Object* allocate$FormatData_hi_IN($Class* clazz) {
	return $of($alloc(FormatData_hi_IN));
}

void FormatData_hi_IN::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_hi_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
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
				u"\u0905\u0915\u094d\u200d\u0924\u0942\u092c\u0930"_s,
				u"\u0928\u0935\u0902\u092c\u0930"_s,
				u"\u0926\u093f\u0938\u0902\u092c\u0930"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
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
				u"\u0905\u0915\u094d\u200d\u0924\u0942\u092c\u0930"_s,
				u"\u0928\u0935\u0902\u092c\u0930"_s,
				u"\u0926\u093f\u0938\u0902\u092c\u0930"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
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
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u0930\u0935\u093f\u0935\u093e\u0930"_s,
				u"\u0938\u094b\u092e\u0935\u093e\u0930"_s,
				u"\u092e\u0902\u0917\u0932\u0935\u093e\u0930"_s,
				u"\u092c\u0941\u0927\u0935\u093e\u0930"_s,
				u"\u0917\u0941\u0930\u0941\u0935\u093e\u0930"_s,
				u"\u0936\u0941\u0915\u094d\u0930\u0935\u093e\u0930"_s,
				u"\u0936\u0928\u093f\u0935\u093e\u0930"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0930\u0935\u093f"_s,
				u"\u0938\u094b\u092e"_s,
				u"\u092e\u0902\u0917\u0932"_s,
				u"\u092c\u0941\u0927"_s,
				u"\u0917\u0941\u0930\u0941"_s,
				u"\u0936\u0941\u0915\u094d\u0930"_s,
				u"\u0936\u0928\u093f"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u0930"_s,
				u"\u0938\u094b"_s,
				u"\u092e\u0902"_s,
				u"\u092c\u0941"_s,
				u"\u0917\u0941"_s,
				u"\u0936\u0941"_s,
				u"\u0936"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\u092a\u0942\u0930\u094d\u0935\u093e\u0939\u094d\u0928"_s,
				u"\u0905\u092a\u0930\u093e\u0939\u094d\u0928"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u0908\u0938\u093e\u092a\u0942\u0930\u094d\u0935"_s,
				u"\u0938\u0928"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0908\u0938\u093e\u092a\u0942\u0930\u094d\u0935"_s,
				u"\u0938\u0928"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
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
				u"\ufffd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, yyyy"_s,
				"d MMMM, yyyy"_s,
				"d MMM, yyyy"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_hi_IN::FormatData_hi_IN() {
}

$Class* FormatData_hi_IN::load$($String* name, bool initialize) {
	$loadClass(FormatData_hi_IN, name, initialize, &_FormatData_hi_IN_ClassInfo_, allocate$FormatData_hi_IN);
	return class$;
}

$Class* FormatData_hi_IN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun