#include <sun/text/resources/ext/FormatData_et.h>

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

$MethodInfo _FormatData_et_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_et::*)()>(&FormatData_et::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_et_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_et",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_et_MethodInfo_
};

$Object* allocate$FormatData_et($Class* clazz) {
	return $of($alloc(FormatData_et));
}

void FormatData_et::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_et::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"jaanuar"_s,
				"veebruar"_s,
				u"m\u00e4rts"_s,
				"aprill"_s,
				"mai"_s,
				"juuni"_s,
				"juuli"_s,
				"august"_s,
				"september"_s,
				"oktoober"_s,
				"november"_s,
				"detsember"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jaan"_s,
				"veebr"_s,
				u"m\u00e4rts"_s,
				"apr"_s,
				"mai"_s,
				"juuni"_s,
				"juuli"_s,
				"aug"_s,
				"sept"_s,
				"okt"_s,
				"nov"_s,
				"dets"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"V"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"p\u00fchap\u00e4ev"_s,
				u"esmasp\u00e4ev"_s,
				u"teisip\u00e4ev"_s,
				u"kolmap\u00e4ev"_s,
				u"neljap\u00e4ev"_s,
				"reede"_s,
				u"laup\u00e4ev"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"P"_s,
				"E"_s,
				"T"_s,
				"K"_s,
				"N"_s,
				"R"_s,
				"L"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"P"_s,
				"E"_s,
				"T"_s,
				"K"_s,
				"N"_s,
				"R"_s,
				"L"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"e.m.a."_s,
				"m.a.j."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"e.m.a."_s,
				"m.a.j."_s
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
				"EEEE, d. MMMM yyyy"_s,
				"EEEE, d. MMMM yyyy. \'a\'"_s,
				"d.MM.yyyy"_s,
				"d.MM.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_et::FormatData_et() {
}

$Class* FormatData_et::load$($String* name, bool initialize) {
	$loadClass(FormatData_et, name, initialize, &_FormatData_et_ClassInfo_, allocate$FormatData_et);
	return class$;
}

$Class* FormatData_et::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun