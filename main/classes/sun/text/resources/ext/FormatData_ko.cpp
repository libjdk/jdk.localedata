#include <sun/text/resources/ext/FormatData_ko.h>

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

$MethodInfo _FormatData_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ko::*)()>(&FormatData_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ko",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ko_MethodInfo_
};

$Object* allocate$FormatData_ko($Class* clazz) {
	return $of($alloc(FormatData_ko));
}

void FormatData_ko::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"\uc911\ud654\ubbfc\uad6d\uc804"_s,
		u"\uc911\ud654\ubbfc\uad6d"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"1\uc6d4"_s,
				u"2\uc6d4"_s,
				u"3\uc6d4"_s,
				u"4\uc6d4"_s,
				u"5\uc6d4"_s,
				u"6\uc6d4"_s,
				u"7\uc6d4"_s,
				u"8\uc6d4"_s,
				u"9\uc6d4"_s,
				u"10\uc6d4"_s,
				u"11\uc6d4"_s,
				u"12\uc6d4"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"1\uc6d4"_s,
				u"2\uc6d4"_s,
				u"3\uc6d4"_s,
				u"4\uc6d4"_s,
				u"5\uc6d4"_s,
				u"6\uc6d4"_s,
				u"7\uc6d4"_s,
				u"8\uc6d4"_s,
				u"9\uc6d4"_s,
				u"10\uc6d4"_s,
				u"11\uc6d4"_s,
				u"12\uc6d4"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"1\uc6d4"_s,
				u"2\uc6d4"_s,
				u"3\uc6d4"_s,
				u"4\uc6d4"_s,
				u"5\uc6d4"_s,
				u"6\uc6d4"_s,
				u"7\uc6d4"_s,
				u"8\uc6d4"_s,
				u"9\uc6d4"_s,
				u"10\uc6d4"_s,
				u"11\uc6d4"_s,
				u"12\uc6d4"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\uc77c\uc694\uc77c"_s,
				u"\uc6d4\uc694\uc77c"_s,
				u"\ud654\uc694\uc77c"_s,
				u"\uc218\uc694\uc77c"_s,
				u"\ubaa9\uc694\uc77c"_s,
				u"\uae08\uc694\uc77c"_s,
				u"\ud1a0\uc694\uc77c"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\uc77c"_s,
				u"\uc6d4"_s,
				u"\ud654"_s,
				u"\uc218"_s,
				u"\ubaa9"_s,
				u"\uae08"_s,
				u"\ud1a0"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\uc77c"_s,
				u"\uc6d4"_s,
				u"\ud654"_s,
				u"\uc218"_s,
				u"\ubaa9"_s,
				u"\uae08"_s,
				u"\ud1a0"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\uae30\uc6d0\uc804"_s,
				u"\uc11c\uae30"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"\ubd88\uae30"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of($$new($StringArray, {
				u"\uc11c\uae30"_s,
				u"\uba54\uc774\uc9c0"_s,
				u"\ub2e4\uc774\uc1fc"_s,
				u"\uc1fc\uc640"_s,
				u"\ud5e4\uc774\uc138\uc774"_s,
				u"\ub808\uc774\uc640"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\uc624\uc804"_s,
				u"\uc624\ud6c4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"a h\'\uc2dc\' mm\'\ubd84\' ss\'\ucd08\' z"_s,
				u"a h\'\uc2dc\' mm\'\ubd84\' ss\'\ucd08\'"_s,
				"a h:mm:ss"_s,
				"a h:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"yyyy\'\ub144\' M\'\uc6d4\' d\'\uc77c\' EEEE"_s,
				u"yyyy\'\ub144\' M\'\uc6d4\' d\'\uc77c\' \'(\'EE\')\'"_s,
				"yyyy. M. d"_s,
				"yy. M. d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGG y\ub144 M\uc6d4 d\uc77c EEEE"_s,
				u"GGGG y\ub144 M\uc6d4 d\uc77c"_s,
				"GGGG y. M. d"_s,
				"GGGG y. M. d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGG y\ub144 M\uc6d4 d\uc77c EEEE"_s,
				u"GGGG y\ub144 M\uc6d4 d\uc77c"_s,
				"GGGG y. M. d"_s,
				"GGGG y. M. d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_ko::FormatData_ko() {
}

$Class* FormatData_ko::load$($String* name, bool initialize) {
	$loadClass(FormatData_ko, name, initialize, &_FormatData_ko_ClassInfo_, allocate$FormatData_ko);
	return class$;
}

$Class* FormatData_ko::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun