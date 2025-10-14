#include <sun/text/resources/ext/FormatData_ru.h>

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

$MethodInfo _FormatData_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ru::*)()>(&FormatData_ru::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ru_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ru",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ru_MethodInfo_
};

$Object* allocate$FormatData_ru($Class* clazz) {
	return $of($alloc(FormatData_ru));
}

void FormatData_ru::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ru::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u044f\u043d\u0432\u0430\u0440\u044f"_s,
				u"\u0444\u0435\u0432\u0440\u0430\u043b\u044f"_s,
				u"\u043c\u0430\u0440\u0442\u0430"_s,
				u"\u0430\u043f\u0440\u0435\u043b\u044f"_s,
				u"\u043c\u0430\u044f"_s,
				u"\u0438\u044e\u043d\u044f"_s,
				u"\u0438\u044e\u043b\u044f"_s,
				u"\u0430\u0432\u0433\u0443\u0441\u0442\u0430"_s,
				u"\u0441\u0435\u043d\u0442\u044f\u0431\u0440\u044f"_s,
				u"\u043e\u043a\u0442\u044f\u0431\u0440\u044f"_s,
				u"\u043d\u043e\u044f\u0431\u0440\u044f"_s,
				u"\u0434\u0435\u043a\u0430\u0431\u0440\u044f"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u042f\u043d\u0432\u0430\u0440\u044c"_s,
				u"\u0424\u0435\u0432\u0440\u0430\u043b\u044c"_s,
				u"\u041c\u0430\u0440\u0442"_s,
				u"\u0410\u043f\u0440\u0435\u043b\u044c"_s,
				u"\u041c\u0430\u0439"_s,
				u"\u0418\u044e\u043d\u044c"_s,
				u"\u0418\u044e\u043b\u044c"_s,
				u"\u0410\u0432\u0433\u0443\u0441\u0442"_s,
				u"\u0421\u0435\u043d\u0442\u044f\u0431\u0440\u044c"_s,
				u"\u041e\u043a\u0442\u044f\u0431\u0440\u044c"_s,
				u"\u041d\u043e\u044f\u0431\u0440\u044c"_s,
				u"\u0414\u0435\u043a\u0430\u0431\u0440\u044c"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u044f\u043d\u0432"_s,
				u"\u0444\u0435\u0432"_s,
				u"\u043c\u0430\u0440"_s,
				u"\u0430\u043f\u0440"_s,
				u"\u043c\u0430\u044f"_s,
				u"\u0438\u044e\u043d"_s,
				u"\u0438\u044e\u043b"_s,
				u"\u0430\u0432\u0433"_s,
				u"\u0441\u0435\u043d"_s,
				u"\u043e\u043a\u0442"_s,
				u"\u043d\u043e\u044f"_s,
				u"\u0434\u0435\u043a"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u042f\u043d\u0432."_s,
				u"\u0424\u0435\u0432\u0440."_s,
				u"\u041c\u0430\u0440\u0442"_s,
				u"\u0410\u043f\u0440."_s,
				u"\u041c\u0430\u0439"_s,
				u"\u0418\u044e\u043d\u044c"_s,
				u"\u0418\u044e\u043b\u044c"_s,
				u"\u0410\u0432\u0433."_s,
				u"\u0421\u0435\u043d\u0442."_s,
				u"\u041e\u043a\u0442."_s,
				u"\u041d\u043e\u044f\u0431."_s,
				u"\u0414\u0435\u043a."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u042f"_s,
				u"\u0424"_s,
				u"\u041c"_s,
				u"\u0410"_s,
				u"\u041c"_s,
				u"\u0418"_s,
				u"\u0418"_s,
				u"\u0410"_s,
				u"\u0421"_s,
				u"\u041e"_s,
				u"\u041d"_s,
				u"\u0414"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u042f"_s,
				u"\u0424"_s,
				u"\u041c"_s,
				u"\u0410"_s,
				u"\u041c"_s,
				u"\u0418"_s,
				u"\u0418"_s,
				u"\u0410"_s,
				u"\u0421"_s,
				u"\u041e"_s,
				u"\u041d"_s,
				u"\u0414"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u0432\u043e\u0441\u043a\u0440\u0435\u0441\u0435\u043d\u044c\u0435"_s,
				u"\u043f\u043e\u043d\u0435\u0434\u0435\u043b\u044c\u043d\u0438\u043a"_s,
				u"\u0432\u0442\u043e\u0440\u043d\u0438\u043a"_s,
				u"\u0441\u0440\u0435\u0434\u0430"_s,
				u"\u0447\u0435\u0442\u0432\u0435\u0440\u0433"_s,
				u"\u043f\u044f\u0442\u043d\u0438\u0446\u0430"_s,
				u"\u0441\u0443\u0431\u0431\u043e\u0442\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"\u0412\u043e\u0441\u043a\u0440\u0435\u0441\u0435\u043d\u044c\u0435"_s,
				u"\u041f\u043e\u043d\u0435\u0434\u0435\u043b\u044c\u043d\u0438\u043a"_s,
				u"\u0412\u0442\u043e\u0440\u043d\u0438\u043a"_s,
				u"\u0421\u0440\u0435\u0434\u0430"_s,
				u"\u0427\u0435\u0442\u0432\u0435\u0440\u0433"_s,
				u"\u041f\u044f\u0442\u043d\u0438\u0446\u0430"_s,
				u"\u0421\u0443\u0431\u0431\u043e\u0442\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0412\u0441"_s,
				u"\u041f\u043d"_s,
				u"\u0412\u0442"_s,
				u"\u0421\u0440"_s,
				u"\u0427\u0442"_s,
				u"\u041f\u0442"_s,
				u"\u0421\u0431"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0412\u0441"_s,
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
				u"\u0412"_s,
				u"\u041f\u043d"_s,
				u"\u0412\u0442"_s,
				u"\u0421"_s,
				u"\u0427"_s,
				u"\u041f"_s,
				u"\u0421"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u0412"_s,
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
				u"\u0434\u043e \u043d.\u044d."_s,
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
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"d MMMM yyyy \'\u0433.\'"_s,
				u"d MMMM yyyy \'\u0433.\'"_s,
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

FormatData_ru::FormatData_ru() {
}

$Class* FormatData_ru::load$($String* name, bool initialize) {
	$loadClass(FormatData_ru, name, initialize, &_FormatData_ru_ClassInfo_, allocate$FormatData_ru);
	return class$;
}

$Class* FormatData_ru::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun