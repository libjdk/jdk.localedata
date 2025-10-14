#include <sun/text/resources/cldr/ext/FormatData_mzn.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _FormatData_mzn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_mzn::*)()>(&FormatData_mzn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_mzn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_mzn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mzn_MethodInfo_
};

$Object* allocate$FormatData_mzn($Class* clazz) {
	return $of($alloc(FormatData_mzn));
}

void FormatData_mzn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_mzn::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0698\u0627\u0646\u0648\u06cc\u0647"_s,
		u"\u0641\u0648\u0631\u06cc\u0647"_s,
		u"\u0645\u0627\u0631\u0633"_s,
		u"\u0622\u0648\u0631\u06cc\u0644"_s,
		u"\u0645\u0647"_s,
		u"\u0698\u0648\u0626\u0646"_s,
		u"\u0698\u0648\u0626\u06cc\u0647"_s,
		u"\u0627\u0648\u062a"_s,
		u"\u0633\u067e\u062a\u0627\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0628\u0631"_s,
		u"\u0646\u0648\u0627\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0627\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u067e.\u0645"_s,
		u"\u0645."_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0633\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a"_s,
				u"\u06f0"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u0632\u0645\u0648\u0646\u06cc \u0645\u0646\u0642\u0637\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0645\u0627\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u062b\u0627\u0646\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0647\u0641\u062a\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arabext"_s)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u0642\u0628\u0644 \u0645\u06cc\u0644\u0627\u062f"_s,
				u"\u0628\u0639\u062f \u0645\u06cc\u0644\u0627\u062f"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0647\u0641\u062a\u0647\u200c\u06cc \u0650\u0631\u0648\u0632"_s)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0633\u0627\u0639\u0650\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u062f\u0642\u06cc\u0642\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u062a\u0642\u0648\u06cc\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0635\u0648\u0627\u062d\u06cc/\u0638\u064f\u0631"_s)
		})
	}));
	return data;
}

FormatData_mzn::FormatData_mzn() {
}

$Class* FormatData_mzn::load$($String* name, bool initialize) {
	$loadClass(FormatData_mzn, name, initialize, &_FormatData_mzn_ClassInfo_, allocate$FormatData_mzn);
	return class$;
}

$Class* FormatData_mzn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun