#include <sun/text/resources/ext/FormatData_be.h>

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

$MethodInfo _FormatData_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_be::*)()>(&FormatData_be::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_be_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_be",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_be_MethodInfo_
};

$Object* allocate$FormatData_be($Class* clazz) {
	return $of($alloc(FormatData_be));
}

void FormatData_be::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_be::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0441\u0442\u0443\u0434\u0437\u0435\u043d\u044f"_s,
				u"\u043b\u044e\u0442\u0430\u0433\u0430"_s,
				u"\u0441\u0430\u043a\u0430\u0432\u0456\u043a\u0430"_s,
				u"\u043a\u0440\u0430\u0441\u0430\u0432\u0456\u043a\u0430"_s,
				u"\u043c\u0430\u044f"_s,
				u"\u0447\u0440\u0432\u0435\u043d\u044f"_s,
				u"\u043b\u0456\u043f\u0435\u043d\u044f"_s,
				u"\u0436\u043d\u0456\u045e\u043d\u044f"_s,
				u"\u0432\u0435\u0440\u0430\u0441\u043d\u044f"_s,
				u"\u043a\u0430\u0441\u0442\u0440\u044b\u0447\u043d\u0456\u043a\u0430"_s,
				u"\u043b\u0456\u0441\u0442\u0430\u043f\u0430\u0434\u0430"_s,
				u"\u0441\u043d\u0435\u0436\u043d\u044f"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0441\u0442\u0434"_s,
				u"\u043b\u044e\u0442"_s,
				u"\u0441\u043a\u0432"_s,
				u"\u043a\u0440\u0441"_s,
				u"\u043c\u0430\u0439"_s,
				u"\u0447\u0440\u0432"_s,
				u"\u043b\u043f\u043d"_s,
				u"\u0436\u043d\u0432"_s,
				u"\u0432\u0440\u0441"_s,
				u"\u043a\u0441\u0442"_s,
				u"\u043b\u0456\u0441"_s,
				u"\u0441\u043d\u0436"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0441"_s,
				u"\u043b"_s,
				u"\u0441"_s,
				u"\u043a"_s,
				u"\u043c"_s,
				u"\u0447"_s,
				u"\u043b"_s,
				u"\u0436"_s,
				u"\u0432"_s,
				u"\u043a"_s,
				u"\u043b"_s,
				u"\u0441"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u043d\u044f\u0434\u0437\u0435\u043b\u044f"_s,
				u"\u043f\u0430\u043d\u044f\u0434\u0437\u0435\u043b\u0430\u043a"_s,
				u"\u0430\u045e\u0442\u043e\u0440\u0430\u043a"_s,
				u"\u0441\u0435\u0440\u0430\u0434\u0430"_s,
				u"\u0447\u0430\u0446\u0432\u0435\u0440"_s,
				u"\u043f\u044f\u0442\u043d\u0456\u0446\u0430"_s,
				u"\u0441\u0443\u0431\u043e\u0442\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u043d\u0434"_s,
				u"\u043f\u043d"_s,
				u"\u0430\u0442"_s,
				u"\u0441\u0440"_s,
				u"\u0447\u0446"_s,
				u"\u043f\u0442"_s,
				u"\u0441\u0431"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u043d"_s,
				u"\u043f"_s,
				u"\u0430"_s,
				u"\u0441"_s,
				u"\u0447"_s,
				u"\u043f"_s,
				u"\u0441"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u0430 \u043d.\u0435."_s,
				u"\u043d.\u0435."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u0430 \u043d.\u044d."_s,
				u"\u043d.\u044d."_s
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
				"H.mm.ss z"_s,
				"H.mm.ss z"_s,
				"H.mm.ss"_s,
				"H.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d, MMMM yyyy"_s,
				"EEEE, d, MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yy"_s
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

FormatData_be::FormatData_be() {
}

$Class* FormatData_be::load$($String* name, bool initialize) {
	$loadClass(FormatData_be, name, initialize, &_FormatData_be_ClassInfo_, allocate$FormatData_be);
	return class$;
}

$Class* FormatData_be::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun