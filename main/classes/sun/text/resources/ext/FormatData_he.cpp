#include <sun/text/resources/ext/FormatData_he.h>

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

$MethodInfo _FormatData_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_he::*)()>(&FormatData_he::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_he_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_he",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_he_MethodInfo_
};

$Object* allocate$FormatData_he($Class* clazz) {
	return $of($alloc(FormatData_he));
}

void FormatData_he::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_he::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u05d9\u05e0\u05d5\u05d0\u05e8"_s,
				u"\u05e4\u05d1\u05e8\u05d5\u05d0\u05e8"_s,
				u"\u05de\u05e8\u05e5"_s,
				u"\u05d0\u05e4\u05e8\u05d9\u05dc"_s,
				u"\u05de\u05d0\u05d9"_s,
				u"\u05d9\u05d5\u05e0\u05d9"_s,
				u"\u05d9\u05d5\u05dc\u05d9"_s,
				u"\u05d0\u05d5\u05d2\u05d5\u05e1\u05d8"_s,
				u"\u05e1\u05e4\u05d8\u05de\u05d1\u05e8"_s,
				u"\u05d0\u05d5\u05e7\u05d8\u05d5\u05d1\u05e8"_s,
				u"\u05e0\u05d5\u05d1\u05de\u05d1\u05e8"_s,
				u"\u05d3\u05e6\u05de\u05d1\u05e8"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u05d9\u05e0\u05d5"_s,
				u"\u05e4\u05d1\u05e8"_s,
				u"\u05de\u05e8\u05e5"_s,
				u"\u05d0\u05e4\u05e8"_s,
				u"\u05de\u05d0\u05d9"_s,
				u"\u05d9\u05d5\u05e0"_s,
				u"\u05d9\u05d5\u05dc"_s,
				u"\u05d0\u05d5\u05d2"_s,
				u"\u05e1\u05e4\u05d8"_s,
				u"\u05d0\u05d5\u05e7"_s,
				u"\u05e0\u05d5\u05d1"_s,
				u"\u05d3\u05e6\u05de"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u05d9\u05e0\u05d5\u05f3"_s,
				u"\u05e4\u05d1\u05e8\u05f3"_s,
				u"\u05de\u05e8\u05e5"_s,
				u"\u05d0\u05e4\u05e8\u05f3"_s,
				u"\u05de\u05d0\u05d9"_s,
				u"\u05d9\u05d5\u05e0\u05f3"_s,
				u"\u05d9\u05d5\u05dc\u05f3"_s,
				u"\u05d0\u05d5\u05d2\u05f3"_s,
				u"\u05e1\u05e4\u05d8\u05f3"_s,
				u"\u05d0\u05d5\u05e7\u05f3"_s,
				u"\u05e0\u05d5\u05d1\u05f3"_s,
				u"\u05d3\u05e6\u05de\u05f3"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u05d9\u05d5\u05dd \u05e8\u05d0\u05e9\u05d5\u05df"_s,
				u"\u05d9\u05d5\u05dd \u05e9\u05e0\u05d9"_s,
				u"\u05d9\u05d5\u05dd \u05e9\u05dc\u05d9\u05e9\u05d9"_s,
				u"\u05d9\u05d5\u05dd \u05e8\u05d1\u05d9\u05e2\u05d9"_s,
				u"\u05d9\u05d5\u05dd \u05d7\u05de\u05d9\u05e9\u05d9"_s,
				u"\u05d9\u05d5\u05dd \u05e9\u05d9\u05e9\u05d9"_s,
				u"\u05e9\u05d1\u05ea"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u05d0"_s,
				u"\u05d1"_s,
				u"\u05d2"_s,
				u"\u05d3"_s,
				u"\u05d4"_s,
				u"\u05d5"_s,
				u"\u05e9"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u05d0"_s,
				u"\u05d1"_s,
				u"\u05d2"_s,
				u"\u05d3"_s,
				u"\u05d4"_s,
				u"\u05d5"_s,
				u"\u05e9"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u05d0"_s,
				u"\u05d1"_s,
				u"\u05d2"_s,
				u"\u05d3"_s,
				u"\u05d4"_s,
				u"\u05d5"_s,
				u"\u05e9"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u05dc\u05e1\u05d4\"\u05e0"_s,
				u"\u05dc\u05e4\u05e1\u05d4\"\u05e0"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u05dc\u05e4\u05e0\u05d4\u05f4\u05e1"_s,
				u"\u05dc\u05e1\u05d4\u05f4\u05e0"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"dd/MM/yyyy"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{0} {1}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_he::FormatData_he() {
}

$Class* FormatData_he::load$($String* name, bool initialize) {
	$loadClass(FormatData_he, name, initialize, &_FormatData_he_ClassInfo_, allocate$FormatData_he);
	return class$;
}

$Class* FormatData_he::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun