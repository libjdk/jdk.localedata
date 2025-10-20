#include <sun/text/resources/ext/FormatData_th.h>

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

$MethodInfo _FormatData_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_th::*)()>(&FormatData_th::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_th",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_th_MethodInfo_
};

$Object* allocate$FormatData_th($Class* clazz) {
	return $of($alloc(FormatData_th));
}

void FormatData_th::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_th::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, timePatterns, $new($StringArray, {
		u"H\' \u0e19\u0e32\u0e2c\u0e34\u0e01\u0e32 \'m\' \u0e19\u0e32\u0e17\u0e35 \'ss\' \u0e27\u0e34\u0e19\u0e32\u0e17\u0e35\'"_s,
		u"H\' \u0e19\u0e32\u0e2c\u0e34\u0e01\u0e32 \'m\' \u0e19\u0e32\u0e17\u0e35\'"_s,
		"H:mm:ss"_s,
		u"H:mm\' \u0e19.\'"_s
	}));
	$var($StringArray, datePatterns, $new($StringArray, {
		u"EEEE\'\u0e17\u0e35\u0e48 \'d MMMM G yyyy"_s,
		"d MMMM yyyy"_s,
		"d MMM yyyy"_s,
		"d/M/yyyy"_s
	}));
	$var($StringArray, dateTimePatterns, $new($StringArray, {"{1}, {0}"_s}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0e21\u0e01\u0e23\u0e32\u0e04\u0e21"_s,
				u"\u0e01\u0e38\u0e21\u0e20\u0e32\u0e1e\u0e31\u0e19\u0e18\u0e4c"_s,
				u"\u0e21\u0e35\u0e19\u0e32\u0e04\u0e21"_s,
				u"\u0e40\u0e21\u0e29\u0e32\u0e22\u0e19"_s,
				u"\u0e1e\u0e24\u0e29\u0e20\u0e32\u0e04\u0e21"_s,
				u"\u0e21\u0e34\u0e16\u0e38\u0e19\u0e32\u0e22\u0e19"_s,
				u"\u0e01\u0e23\u0e01\u0e0e\u0e32\u0e04\u0e21"_s,
				u"\u0e2a\u0e34\u0e07\u0e2b\u0e32\u0e04\u0e21"_s,
				u"\u0e01\u0e31\u0e19\u0e22\u0e32\u0e22\u0e19"_s,
				u"\u0e15\u0e38\u0e25\u0e32\u0e04\u0e21"_s,
				u"\u0e1e\u0e24\u0e28\u0e08\u0e34\u0e01\u0e32\u0e22\u0e19"_s,
				u"\u0e18\u0e31\u0e19\u0e27\u0e32\u0e04\u0e21"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0e21.\u0e04."_s,
				u"\u0e01.\u0e1e."_s,
				u"\u0e21\u0e35.\u0e04."_s,
				u"\u0e40\u0e21.\u0e22."_s,
				u"\u0e1e.\u0e04."_s,
				u"\u0e21\u0e34.\u0e22."_s,
				u"\u0e01.\u0e04."_s,
				u"\u0e2a.\u0e04."_s,
				u"\u0e01.\u0e22."_s,
				u"\u0e15.\u0e04."_s,
				u"\u0e1e.\u0e22."_s,
				u"\u0e18.\u0e04."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0e21.\u0e04."_s,
				u"\u0e01.\u0e1e."_s,
				u"\u0e21\u0e35.\u0e04."_s,
				u"\u0e40\u0e21.\u0e22."_s,
				u"\u0e1e.\u0e04."_s,
				u"\u0e21\u0e34.\u0e22"_s,
				u"\u0e01.\u0e04."_s,
				u"\u0e2a.\u0e04."_s,
				u"\u0e01.\u0e22."_s,
				u"\u0e15.\u0e04."_s,
				u"\u0e1e.\u0e22."_s,
				u"\u0e18.\u0e04."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0e21.\u0e04."_s,
				u"\u0e01.\u0e1e."_s,
				u"\u0e21\u0e35.\u0e04."_s,
				u"\u0e40\u0e21.\u0e22."_s,
				u"\u0e1e.\u0e04."_s,
				u"\u0e21\u0e34.\u0e22."_s,
				u"\u0e01.\u0e04."_s,
				u"\u0e2a.\u0e04."_s,
				u"\u0e01.\u0e22."_s,
				u"\u0e15.\u0e04."_s,
				u"\u0e1e.\u0e22."_s,
				u"\u0e18.\u0e04."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u0e27\u0e31\u0e19\u0e2d\u0e32\u0e17\u0e34\u0e15\u0e22\u0e4c"_s,
				u"\u0e27\u0e31\u0e19\u0e08\u0e31\u0e19\u0e17\u0e23\u0e4c"_s,
				u"\u0e27\u0e31\u0e19\u0e2d\u0e31\u0e07\u0e04\u0e32\u0e23"_s,
				u"\u0e27\u0e31\u0e19\u0e1e\u0e38\u0e18"_s,
				u"\u0e27\u0e31\u0e19\u0e1e\u0e24\u0e2b\u0e31\u0e2a\u0e1a\u0e14\u0e35"_s,
				u"\u0e27\u0e31\u0e19\u0e28\u0e38\u0e01\u0e23\u0e4c"_s,
				u"\u0e27\u0e31\u0e19\u0e40\u0e2a\u0e32\u0e23\u0e4c"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0e2d\u0e32."_s,
				u"\u0e08."_s,
				u"\u0e2d."_s,
				u"\u0e1e."_s,
				u"\u0e1e\u0e24."_s,
				u"\u0e28."_s,
				u"\u0e2a."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u0e2d"_s,
				u"\u0e08"_s,
				u"\u0e2d"_s,
				u"\u0e1e"_s,
				u"\u0e1e"_s,
				u"\u0e28"_s,
				u"\u0e2a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\u0e01\u0e48\u0e2d\u0e19\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s,
				u"\u0e2b\u0e25\u0e31\u0e07\u0e40\u0e17\u0e35\u0e48\u0e22\u0e07"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e01\u0e32\u0e25\u0e17\u0e35\u0e48"_s,
				u"\u0e1e.\u0e28."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e01\u0e32\u0e25\u0e17\u0e35\u0e48"_s,
				u"\u0e1e.\u0e28."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u0e1b\u0e35\u0e01\u0e48\u0e2d\u0e19\u0e04\u0e23\u0e34\u0e2a\u0e15\u0e4c\u0e01\u0e32\u0e25\u0e17\u0e35\u0e48"_s,
				u"\u0e04.\u0e28."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e01\u0e48\u0e2d\u0e19 \u0e04.\u0e28."_s,
				u"\u0e04.\u0e28."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e01\u0e48\u0e2d\u0e19 \u0e04.\u0e28."_s,
				u"\u0e04.\u0e28."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e04.\u0e28."_s,
				u"\u0e40\u0e21\u0e08\u0e34"_s,
				u"\u0e17\u0e30\u0e2d\u0e34\u0e42\u0e0a"_s,
				u"\u0e42\u0e0a\u0e27\u0e30"_s,
				u"\u0e40\u0e2e\u0e40\u0e0b"_s,
				u"\u0e40\u0e23\u0e27\u0e30"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0e04.\u0e28."_s,
				u"\u0e21"_s,
				u"\u0e17"_s,
				u"\u0e0a"_s,
				u"\u0e2e"_s,
				"R"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(timePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(datePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of(dateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(timePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of(datePatterns)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of(dateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_th::FormatData_th() {
}

$Class* FormatData_th::load$($String* name, bool initialize) {
	$loadClass(FormatData_th, name, initialize, &_FormatData_th_ClassInfo_, allocate$FormatData_th);
	return class$;
}

$Class* FormatData_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun