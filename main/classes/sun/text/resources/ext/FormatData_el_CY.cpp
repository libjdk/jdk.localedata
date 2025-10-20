#include <sun/text/resources/ext/FormatData_el_CY.h>

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

$MethodInfo _FormatData_el_CY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_el_CY::*)()>(&FormatData_el_CY::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_el_CY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_el_CY",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_el_CY_MethodInfo_
};

$Object* allocate$FormatData_el_CY($Class* clazz) {
	return $of($alloc(FormatData_el_CY));
}

void FormatData_el_CY::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_el_CY::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0399\u03b1\u03bd\u03bf\u03c5\u03ac\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u03a6\u03b5\u03b2\u03c1\u03bf\u03c5\u03ac\u03c1\u03b9\u03bf\u03c2"_s,
				u"\u039c\u03ac\u03c1\u03c4\u03b9\u03bf\u03c2"_s,
				u"\u0391\u03c0\u03c1\u03af\u03bb\u03b9\u03bf\u03c2"_s,
				u"\u039c\u03ac\u03b9\u03bf\u03c2"_s,
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
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\u03a0\u039c"_s,
				u"\u039c\u039c"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u03c0.\u03a7."_s,
				u"\u03bc.\u03a7."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
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
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd MMM yyyy"_s,
				"dd/MM/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_el_CY::FormatData_el_CY() {
}

$Class* FormatData_el_CY::load$($String* name, bool initialize) {
	$loadClass(FormatData_el_CY, name, initialize, &_FormatData_el_CY_ClassInfo_, allocate$FormatData_el_CY);
	return class$;
}

$Class* FormatData_el_CY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun