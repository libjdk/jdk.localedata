#include <sun/text/resources/ext/FormatData_bg.h>

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

$MethodInfo _FormatData_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_bg::*)()>(&FormatData_bg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_bg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_bg",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_bg_MethodInfo_
};

$Object* allocate$FormatData_bg($Class* clazz) {
	return $of($alloc(FormatData_bg));
}

void FormatData_bg::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_bg::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u042f\u043d\u0443\u0430\u0440\u0438"_s,
				u"\u0424\u0435\u0432\u0440\u0443\u0430\u0440\u0438"_s,
				u"\u041c\u0430\u0440\u0442"_s,
				u"\u0410\u043f\u0440\u0438\u043b"_s,
				u"\u041c\u0430\u0439"_s,
				u"\u042e\u043d\u0438"_s,
				u"\u042e\u043b\u0438"_s,
				u"\u0410\u0432\u0433\u0443\u0441\u0442"_s,
				u"\u0421\u0435\u043f\u0442\u0435\u043c\u0432\u0440\u0438"_s,
				u"\u041e\u043a\u0442\u043e\u043c\u0432\u0440\u0438"_s,
				u"\u041d\u043e\u0435\u043c\u0432\u0440\u0438"_s,
				u"\u0414\u0435\u043a\u0435\u043c\u0432\u0440\u0438"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"I"_s,
				"II"_s,
				"III"_s,
				"IV"_s,
				"V"_s,
				"VI"_s,
				"VII"_s,
				"VIII"_s,
				"IX"_s,
				"X"_s,
				"XI"_s,
				"XII"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u044f"_s,
				u"\u0444"_s,
				u"\u043c"_s,
				u"\u0430"_s,
				u"\u043c"_s,
				u"\u044e"_s,
				u"\u044e"_s,
				u"\u0430"_s,
				u"\u0441"_s,
				u"\u043e"_s,
				u"\u043d"_s,
				u"\u0434"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u041d\u0435\u0434\u0435\u043b\u044f"_s,
				u"\u041f\u043e\u043d\u0435\u0434\u0435\u043b\u043d\u0438\u043a"_s,
				u"\u0412\u0442\u043e\u0440\u043d\u0438\u043a"_s,
				u"\u0421\u0440\u044f\u0434\u0430"_s,
				u"\u0427\u0435\u0442\u0432\u044a\u0440\u0442\u044a\u043a"_s,
				u"\u041f\u0435\u0442\u044a\u043a"_s,
				u"\u0421\u044a\u0431\u043e\u0442\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u041d\u0434"_s,
				u"\u041f\u043d"_s,
				u"\u0412\u0442"_s,
				u"\u0421\u0440"_s,
				u"\u0427\u0442"_s,
				u"\u041f\u0442"_s,
				u"\u0421\u0431"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u043d"_s,
				u"\u043f"_s,
				u"\u0432"_s,
				u"\u0441"_s,
				u"\u0447"_s,
				u"\u043f"_s,
				u"\u0441"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u043f\u0440.\u043d.\u0435."_s,
				u"\u043d.\u0435."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u043f\u0440. \u043d. \u0435."_s,
				u"\u043e\u0442 \u043d. \u0435."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u"\u00a0"_s,
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
				"HH:mm:ss zzzz"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM y, EEEE"_s,
				"dd MMMM y"_s,
				"dd.MM.yyyy"_s,
				"dd.MM.yy"_s
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

FormatData_bg::FormatData_bg() {
}

$Class* FormatData_bg::load$($String* name, bool initialize) {
	$loadClass(FormatData_bg, name, initialize, &_FormatData_bg_ClassInfo_, allocate$FormatData_bg);
	return class$;
}

$Class* FormatData_bg::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun