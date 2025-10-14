#include <sun/text/resources/ext/FormatData_uk.h>

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

$MethodInfo _FormatData_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_uk::*)()>(&FormatData_uk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_uk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_uk",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_uk_MethodInfo_
};

$Object* allocate$FormatData_uk($Class* clazz) {
	return $of($alloc(FormatData_uk));
}

void FormatData_uk::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_uk::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0441\u0456\u0447\u043d\u044f"_s,
				u"\u043b\u044e\u0442\u043e\u0433\u043e"_s,
				u"\u0431\u0435\u0440\u0435\u0437\u043d\u044f"_s,
				u"\u043a\u0432\u0456\u0442\u043d\u044f"_s,
				u"\u0442\u0440\u0430\u0432\u043d\u044f"_s,
				u"\u0447\u0435\u0440\u0432\u043d\u044f"_s,
				u"\u043b\u0438\u043f\u043d\u044f"_s,
				u"\u0441\u0435\u0440\u043f\u043d\u044f"_s,
				u"\u0432\u0435\u0440\u0435\u0441\u043d\u044f"_s,
				u"\u0436\u043e\u0432\u0442\u043d\u044f"_s,
				u"\u043b\u0438\u0441\u0442\u043e\u043f\u0430\u0434\u0430"_s,
				u"\u0433\u0440\u0443\u0434\u043d\u044f"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0421\u0456\u0447\u0435\u043d\u044c"_s,
				u"\u041b\u044e\u0442\u0438\u0439"_s,
				u"\u0411\u0435\u0440\u0435\u0437\u0435\u043d\u044c"_s,
				u"\u041a\u0432\u0456\u0442\u0435\u043d\u044c"_s,
				u"\u0422\u0440\u0430\u0432\u0435\u043d\u044c"_s,
				u"\u0427\u0435\u0440\u0432\u0435\u043d\u044c"_s,
				u"\u041b\u0438\u043f\u0435\u043d\u044c"_s,
				u"\u0421\u0435\u0440\u043f\u0435\u043d\u044c"_s,
				u"\u0412\u0435\u0440\u0435\u0441\u0435\u043d\u044c"_s,
				u"\u0416\u043e\u0432\u0442\u0435\u043d\u044c"_s,
				u"\u041b\u0438\u0441\u0442\u043e\u043f\u0430\u0434"_s,
				u"\u0413\u0440\u0443\u0434\u0435\u043d\u044c"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0441\u0456\u0447."_s,
				u"\u043b\u044e\u0442."_s,
				u"\u0431\u0435\u0440."_s,
				u"\u043a\u0432\u0456\u0442."_s,
				u"\u0442\u0440\u0430\u0432."_s,
				u"\u0447\u0435\u0440\u0432."_s,
				u"\u043b\u0438\u043f."_s,
				u"\u0441\u0435\u0440\u043f."_s,
				u"\u0432\u0435\u0440."_s,
				u"\u0436\u043e\u0432\u0442."_s,
				u"\u043b\u0438\u0441\u0442."_s,
				u"\u0433\u0440\u0443\u0434."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0441\u0456\u0447"_s,
				u"\u043b\u044e\u0442"_s,
				u"\u0431\u0435\u0440"_s,
				u"\u043a\u0432\u0456\u0442"_s,
				u"\u0442\u0440\u0430\u0432"_s,
				u"\u0447\u0435\u0440\u0432"_s,
				u"\u043b\u0438\u043f"_s,
				u"\u0441\u0435\u0440\u043f"_s,
				u"\u0432\u0435\u0440"_s,
				u"\u0436\u043e\u0432\u0442"_s,
				u"\u043b\u0438\u0441\u0442"_s,
				u"\u0433\u0440\u0443\u0434"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0421"_s,
				u"\u041b"_s,
				u"\u0411"_s,
				u"\u041a"_s,
				u"\u0422"_s,
				u"\u0427"_s,
				u"\u041b"_s,
				u"\u0421"_s,
				u"\u0412"_s,
				u"\u0416"_s,
				u"\u041b"_s,
				u"\u0413"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u043d\u0435\u0434\u0456\u043b\u044f"_s,
				u"\u043f\u043e\u043d\u0435\u0434\u0456\u043b\u043e\u043a"_s,
				u"\u0432\u0456\u0432\u0442\u043e\u0440\u043e\u043a"_s,
				u"\u0441\u0435\u0440\u0435\u0434\u0430"_s,
				u"\u0447\u0435\u0442\u0432\u0435\u0440"_s,
				u"\u043f\'\u044f\u0442\u043d\u0438\u0446\u044f"_s,
				u"\u0441\u0443\u0431\u043e\u0442\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u043d\u0434"_s,
				u"\u043f\u043d"_s,
				u"\u0432\u0442"_s,
				u"\u0441\u0440"_s,
				u"\u0447\u0442"_s,
				u"\u043f\u0442"_s,
				u"\u0441\u0431"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u041d"_s,
				u"\u041f"_s,
				u"\u0412"_s,
				u"\u0421"_s,
				u"\u0427"_s,
				u"\u041f"_s,
				u"\u0421"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u0434\u043e \u043d.\u0435."_s,
				u"\u043f\u0456\u0441\u043b\u044f \u043d.\u0435."_s
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
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d MMMM yyyy \u0440."_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
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

FormatData_uk::FormatData_uk() {
}

$Class* FormatData_uk::load$($String* name, bool initialize) {
	$loadClass(FormatData_uk, name, initialize, &_FormatData_uk_ClassInfo_, allocate$FormatData_uk);
	return class$;
}

$Class* FormatData_uk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun