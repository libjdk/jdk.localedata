#include <sun/text/resources/ext/FormatData_sr.h>

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

$MethodInfo _FormatData_sr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sr::*)()>(&FormatData_sr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_MethodInfo_
};

$Object* allocate$FormatData_sr($Class* clazz) {
	return $of($alloc(FormatData_sr));
}

void FormatData_sr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"\u041f\u0440\u0435 \u0420\u041a"_s,
		u"\u0420\u041a"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0458\u0430\u043d\u0443\u0430\u0440"_s,
				u"\u0444\u0435\u0431\u0440\u0443\u0430\u0440"_s,
				u"\u043c\u0430\u0440\u0442"_s,
				u"\u0430\u043f\u0440\u0438\u043b"_s,
				u"\u043c\u0430\u0458"_s,
				u"\u0458\u0443\u043d"_s,
				u"\u0458\u0443\u043b"_s,
				u"\u0430\u0432\u0433\u0443\u0441\u0442"_s,
				u"\u0441\u0435\u043f\u0442\u0435\u043c\u0431\u0430\u0440"_s,
				u"\u043e\u043a\u0442\u043e\u0431\u0430\u0440"_s,
				u"\u043d\u043e\u0432\u0435\u043c\u0431\u0430\u0440"_s,
				u"\u0434\u0435\u0446\u0435\u043c\u0431\u0430\u0440"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0458\u0430\u043d"_s,
				u"\u0444\u0435\u0431"_s,
				u"\u043c\u0430\u0440"_s,
				u"\u0430\u043f\u0440"_s,
				u"\u043c\u0430\u0458"_s,
				u"\u0458\u0443\u043d"_s,
				u"\u0458\u0443\u043b"_s,
				u"\u0430\u0432\u0433"_s,
				u"\u0441\u0435\u043f"_s,
				u"\u043e\u043a\u0442"_s,
				u"\u043d\u043e\u0432"_s,
				u"\u0434\u0435\u0446"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0458"_s,
				u"\u0444"_s,
				u"\u043c"_s,
				u"\u0430"_s,
				u"\u043c"_s,
				u"\u0458"_s,
				u"\u0458"_s,
				u"\u0430"_s,
				u"\u0441"_s,
				u"\u043e"_s,
				u"\u043d"_s,
				u"\u0434"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0458"_s,
				u"\u0444"_s,
				u"\u043c"_s,
				u"\u0430"_s,
				u"\u043c"_s,
				u"\u0458"_s,
				u"\u0458"_s,
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
				u"\u043d\u0435\u0434\u0435\u0459\u0430"_s,
				u"\u043f\u043e\u043d\u0435\u0434\u0435\u0459\u0430\u043a"_s,
				u"\u0443\u0442\u043e\u0440\u0430\u043a"_s,
				u"\u0441\u0440\u0435\u0434\u0430"_s,
				u"\u0447\u0435\u0442\u0432\u0440\u0442\u0430\u043a"_s,
				u"\u043f\u0435\u0442\u0430\u043a"_s,
				u"\u0441\u0443\u0431\u043e\u0442\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u043d\u0435\u0434"_s,
				u"\u043f\u043e\u043d"_s,
				u"\u0443\u0442\u043e"_s,
				u"\u0441\u0440\u0435"_s,
				u"\u0447\u0435\u0442"_s,
				u"\u043f\u0435\u0442"_s,
				u"\u0441\u0443\u0431"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u043d"_s,
				u"\u043f"_s,
				u"\u0443"_s,
				u"\u0441"_s,
				u"\u0447"_s,
				u"\u043f"_s,
				u"\u0441"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u043f. \u043d. \u0435."_s,
				u"\u043d. \u0435"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u043f. \u043d. \u0435."_s,
				u"\u043d. \u0435."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"\u043f.\u043d.\u0435."_s,
				u"\u043d.\u0435."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4 #,##0.00"_s,
				"#,##0%"_s
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
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH.mm.ss z"_s,
				"HH.mm.ss z"_s,
				"HH.mm.ss"_s,
				"HH.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd.MMMM.yyyy."_s,
				"dd.MM.yyyy."_s,
				"dd.MM.yyyy."_s,
				"d.M.yy."_s
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

FormatData_sr::FormatData_sr() {
}

$Class* FormatData_sr::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr, name, initialize, &_FormatData_sr_ClassInfo_, allocate$FormatData_sr);
	return class$;
}

$Class* FormatData_sr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun