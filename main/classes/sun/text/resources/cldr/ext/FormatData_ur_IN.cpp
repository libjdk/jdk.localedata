#include <sun/text/resources/cldr/ext/FormatData_ur_IN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_ur_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ur_IN::*)()>(&FormatData_ur_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ur_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ur_IN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ur_IN_MethodInfo_
};

$Object* allocate$FormatData_ur_IN($Class* clazz) {
	return $of($alloc(FormatData_ur_IN));
}

void FormatData_ur_IN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ur_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u062f\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of("GMT{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u062f\u0646 \u06a9\u0627 \u0648\u0642\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arabext"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				";"_s,
				"%"_s,
				u"\u06f0"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		})
	}));
	return data;
}

FormatData_ur_IN::FormatData_ur_IN() {
}

$Class* FormatData_ur_IN::load$($String* name, bool initialize) {
	$loadClass(FormatData_ur_IN, name, initialize, &_FormatData_ur_IN_ClassInfo_, allocate$FormatData_ur_IN);
	return class$;
}

$Class* FormatData_ur_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun