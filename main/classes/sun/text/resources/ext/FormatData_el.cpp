#include <sun/text/resources/ext/FormatData_el.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _FormatData_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_el::*)()>(&FormatData_el::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_el",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_el_MethodInfo_
};

$Object* allocate$FormatData_el($Class* clazz) {
	return $of($alloc(FormatData_el));
}

void FormatData_el::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_el::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"\u03a0\u03c1\u03b9\u03bd R.O.C."_s,
		"R.O.C."_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd\u03bf\u03c5\u03b1\u03c1\u03af\u03bf\u03c5"_s,
				u"\u03a6\u03b5\u03b2\u03c1\u03bf\u03c5\u03b1\u03c1\u03af\u03bf\u03c5"_s,
				u"\u039c\u03b1\u03c1\u03c4\u03af\u03bf\u03c5"_s,
				u"\u0391\u03c0\u03c1\u03b9\u03bb\u03af\u03bf\u03c5"_s,
				u"\u039c\u03b1\u0390\u03bf\u03c5"_s,
				u"\u0399\u03bf\u03c5\u03bd\u03af\u03bf\u03c5"_s,
				u"\u0399\u03bf\u03c5\u03bb\u03af\u03bf\u03c5"_s,
				u"\u0391\u03c5\u03b3\u03bf\u03cd\u03c3\u03c4\u03bf\u03c5"_s,
				u"\u03a3\u03b5\u03c0\u03c4\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				u"\u039f\u03ba\u03c4\u03c9\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				u"\u039d\u03bf\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				u"\u0394\u03b5\u03ba\u03b5\u03bc\u03b2\u03c1\u03af\u03bf\u03c5"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd\u03bf\u03c5\u03ac\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u03a6\u03b5\u03b2\u03c1\u03bf\u03c5\u03ac\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u039c\u03ac\u03c1\u03c4\u03b9\u03bf\u03c2"_s,
				u"\u0391\u03c0\u03c1\u03af\u03bb\u03b9\u03bf\u03c2"_s,
				u"\u039c\u03ac\u03ca\u03bf\u03c2"_s,
				u"\u0399\u03bf\u03cd\u03bd\u03b9\u03bf\u03c2"_s,
				u"\u0399\u03bf\u03cd\u03bb\u03b9\u03bf\u03c2"_s,
				u"\u0391\u03cd\u03b3\u03bf\u03c5\u03c3\u03c4\u03bf\u03c2"_s,
				u"\u03a3\u03b5\u03c0\u03c4\u03ad\u03bc\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u039f\u03ba\u03c4\u03ce\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u039d\u03bf\u03ad\u03bc\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u0394\u03b5\u03ba\u03ad\u03bc\u03b2\u03c1\u03b9\u03bf\u03c2"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd"_s,
				u"\u03a6\u03b5\u03b2"_s,
				u"\u039c\u03b1\u03c1"_s,
				u"\u0391\u03c0\u03c1"_s,
				u"\u039c\u03b1\u03ca"_s,
				u"\u0399\u03bf\u03c5\u03bd"_s,
				u"\u0399\u03bf\u03c5\u03bb"_s,
				u"\u0391\u03c5\u03b3"_s,
				u"\u03a3\u03b5\u03c0"_s,
				u"\u039f\u03ba\u03c4"_s,
				u"\u039d\u03bf\u03b5"_s,
				u"\u0394\u03b5\u03ba"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd"_s,
				u"\u03a6\u03b5\u03b2"_s,
				u"\u039c\u03ac\u03c1"_s,
				u"\u0391\u03c0\u03c1"_s,
				u"\u039c\u03ac\u03b9"_s,
				u"\u0399\u03bf\u03cd\u03bd"_s,
				u"\u0399\u03bf\u03cd\u03bb"_s,
				u"\u0391\u03c5\u03b3"_s,
				u"\u03a3\u03b5\u03c0"_s,
				u"\u039f\u03ba\u03c4"_s,
				u"\u039d\u03bf\u03ad"_s,
				u"\u0394\u03b5\u03ba"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0399"_s,
				u"\u03a6"_s,
				u"\u039c"_s,
				u"\u0391"_s,
				u"\u039c"_s,
				u"\u0399"_s,
				u"\u0399"_s,
				u"\u0391"_s,
				u"\u03a3"_s,
				u"\u039f"_s,
				u"\u039d"_s,
				u"\u0394"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0399"_s,
				u"\u03a6"_s,
				u"\u039c"_s,
				u"\u0391"_s,
				u"\u039c"_s,
				u"\u0399"_s,
				u"\u0399"_s,
				u"\u0391"_s,
				u"\u03a3"_s,
				u"\u039f"_s,
				u"\u039d"_s,
				u"\u0394"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u039a\u03c5\u03c1\u03b9\u03b1\u03ba\u03ae"_s,
				u"\u0394\u03b5\u03c5\u03c4\u03ad\u03c1\u03b1"_s,
				u"\u03a4\u03c1\u03af\u03c4\u03b7"_s,
				u"\u03a4\u03b5\u03c4\u03ac\u03c1\u03c4\u03b7"_s,
				u"\u03a0\u03ad\u03bc\u03c0\u03c4\u03b7"_s,
				u"\u03a0\u03b1\u03c1\u03b1\u03c3\u03ba\u03b5\u03c5\u03ae"_s,
				u"\u03a3\u03ac\u03b2\u03b2\u03b1\u03c4\u03bf"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"\u039a\u03c5\u03c1\u03b9\u03b1\u03ba\u03ae"_s,
				u"\u0394\u03b5\u03c5\u03c4\u03ad\u03c1\u03b1"_s,
				u"\u03a4\u03c1\u03af\u03c4\u03b7"_s,
				u"\u03a4\u03b5\u03c4\u03ac\u03c1\u03c4\u03b7"_s,
				u"\u03a0\u03ad\u03bc\u03c0\u03c4\u03b7"_s,
				u"\u03a0\u03b1\u03c1\u03b1\u03c3\u03ba\u03b5\u03c5\u03ae"_s,
				u"\u03a3\u03ac\u03b2\u03b2\u03b1\u03c4\u03bf"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u039a\u03c5\u03c1"_s,
				u"\u0394\u03b5\u03c5"_s,
				u"\u03a4\u03c1\u03b9"_s,
				u"\u03a4\u03b5\u03c4"_s,
				u"\u03a0\u03b5\u03bc"_s,
				u"\u03a0\u03b1\u03c1"_s,
				u"\u03a3\u03b1\u03b2"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u039a\u03c5\u03c1"_s,
				u"\u0394\u03b5\u03c5"_s,
				u"\u03a4\u03c1\u03af"_s,
				u"\u03a4\u03b5\u03c4"_s,
				u"\u03a0\u03ad\u03bc"_s,
				u"\u03a0\u03b1\u03c1"_s,
				u"\u03a3\u03ac\u03b2"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u039a"_s,
				u"\u0394"_s,
				u"\u03a4"_s,
				u"\u03a4"_s,
				u"\u03a0"_s,
				u"\u03a0"_s,
				u"\u03a3"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u039a"_s,
				u"\u0394"_s,
				u"\u03a4"_s,
				u"\u03a4"_s,
				u"\u03a0"_s,
				u"\u03a0"_s,
				u"\u03a3"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u03c0.\u03a7."_s,
				u"\u03bc.\u03a7."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\u03c0\u03bc"_s,
				u"\u03bc\u03bc"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
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
				"EEEE, d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"d/M/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_el::FormatData_el() {
}

$Class* FormatData_el::load$($String* name, bool initialize) {
	$loadClass(FormatData_el, name, initialize, &_FormatData_el_ClassInfo_, allocate$FormatData_el);
	return class$;
}

$Class* FormatData_el::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun