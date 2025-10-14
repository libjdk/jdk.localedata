#include <sun/text/resources/cldr/ext/FormatData_uz_Arab.h>

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

$MethodInfo _FormatData_uz_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_uz_Arab::*)()>(&FormatData_uz_Arab::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_uz_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_uz_Arab",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_uz_Arab_MethodInfo_
};

$Object* allocate$FormatData_uz_Arab($Class* clazz) {
	return $of($alloc(FormatData_uz_Arab));
}

void FormatData_uz_Arab::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_uz_Arab::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u062c\u0646\u0648\u0631\u06cc"_s,
		u"\u0641\u0628\u0631\u0648\u0631\u06cc"_s,
		u"\u0645\u0627\u0631\u0686"_s,
		u"\u0627\u067e\u0631\u06cc\u0644"_s,
		u"\u0645\u06cc"_s,
		u"\u062c\u0648\u0646"_s,
		u"\u062c\u0648\u0644\u0627\u06cc"_s,
		u"\u0627\u06af\u0633\u062a"_s,
		u"\u0633\u067e\u062a\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u062c\u0646\u0648"_s,
		u"\u0641\u0628\u0631"_s,
		u"\u0645\u0627\u0631"_s,
		u"\u0627\u067e\u0631"_s,
		u"\u0645\u06cc"_s,
		u"\u062c\u0648\u0646"_s,
		u"\u062c\u0648\u0644"_s,
		u"\u0627\u06af\u0633"_s,
		u"\u0633\u067e\u062a"_s,
		u"\u0627\u06a9\u062a"_s,
		u"\u0646\u0648\u0645"_s,
		u"\u062f\u0633\u0645"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u06cc\u06a9\u0634\u0646\u0628\u0647"_s,
		u"\u062f\u0648\u0634\u0646\u0628\u0647"_s,
		u"\u0633\u0647\u200c\u0634\u0646\u0628\u0647"_s,
		u"\u0686\u0647\u0627\u0631\u0634\u0646\u0628\u0647"_s,
		u"\u067e\u0646\u062c\u0634\u0646\u0628\u0647"_s,
		u"\u062c\u0645\u0639\u0647"_s,
		u"\u0634\u0646\u0628\u0647"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u06cc."_s,
		u"\u062f."_s,
		u"\u0633."_s,
		u"\u0686."_s,
		u"\u067e."_s,
		u"\u062c."_s,
		u"\u0634."_s
	}));
	$var($StringArray, metaValue_arabext_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"\u00a4\u00a0#,##0.00"_s,
		"#,##0%"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arabext"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				u"\u200e\u2212"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of(metaValue_arabext_NumberPatterns)
		})
	}));
	return data;
}

FormatData_uz_Arab::FormatData_uz_Arab() {
}

$Class* FormatData_uz_Arab::load$($String* name, bool initialize) {
	$loadClass(FormatData_uz_Arab, name, initialize, &_FormatData_uz_Arab_ClassInfo_, allocate$FormatData_uz_Arab);
	return class$;
}

$Class* FormatData_uz_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun