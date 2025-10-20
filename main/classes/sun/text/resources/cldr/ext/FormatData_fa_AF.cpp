#include <sun/text/resources/cldr/ext/FormatData_fa_AF.h>

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

$MethodInfo _FormatData_fa_AF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_fa_AF::*)()>(&FormatData_fa_AF::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_fa_AF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fa_AF",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fa_AF_MethodInfo_
};

$Object* allocate$FormatData_fa_AF($Class* clazz) {
	return $of($alloc(FormatData_fa_AF));
}

void FormatData_fa_AF::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fa_AF::getContents() {
	$useLocalCurrentObjectStackCache();
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
		u"\u0641\u0628\u0631\u0648\u0631\u06cc"_s,
		u"\u0645\u0627\u0631\u0686"_s,
		u"\u0627\u067e\u0631\u06cc\u0644"_s,
		u"\u0645\u06cc"_s,
		u"\u062c\u0648\u0646"_s,
		u"\u062c\u0648\u0644"_s,
		u"\u0627\u06af\u0633\u062a"_s,
		u"\u0633\u067e\u062a\u0645\u0628\u0631"_s,
		u"\u0627\u06a9\u062a\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0645\u0628\u0631"_s,
		u"\u062f\u0633\u0645"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u062c"_s,
		u"\u0641"_s,
		u"\u0645"_s,
		u"\u0627"_s,
		u"\u0645"_s,
		u"\u062c"_s,
		u"\u062c"_s,
		u"\u0627"_s,
		u"\u0633"_s,
		u"\u0627"_s,
		u"\u0646"_s,
		u"\u062f"_s,
		""_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0631\u0628\u0639 \u0627\u0648\u0644"_s,
		u"\u0631\u0628\u0639 \u062f\u0648\u0645"_s,
		u"\u0631\u0628\u0639 \u0633\u0648\u0645"_s,
		u"\u0631\u0628\u0639 \u0686\u0647\u0627\u0631\u0645"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0631\u06f1"_s,
		u"\u0631\u06f2"_s,
		u"\u0631\u06f3"_s,
		u"\u0631\u06f4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0642\u0628\u0644\u200c\u0627\u0632\u0638\u0647\u0631"_s,
		u"\u0628\u0639\u062f\u0627\u0632\u0638\u0647\u0631"_s,
		""_s,
		""_s,
		u"\u0628\u0627\u0645\u062f\u0627\u062f"_s,
		u"\u0635\u0628\u062d"_s,
		u"\u0638\u0647\u0631"_s,
		u"\u0628\u0639\u062f\u0627\u0632\u0686\u0627\u0634\u062a"_s,
		""_s,
		""_s,
		u"\u0634\u0628"_s,
		u"\u0646\u06cc\u0645\u0647\u200c\u0634\u0628"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0642"_s,
		u"\u0628"_s,
		""_s,
		""_s,
		u"\u0628\u0627\u0645\u062f\u0627\u062f"_s,
		u"\u0635\u0628\u062d"_s,
		u"\u0638\u0647\u0631"_s,
		u"\u0628\u0639\u062f\u0627\u0632\u0686\u0627\u0634\u062a"_s,
		""_s,
		""_s,
		u"\u0634\u0628"_s,
		u"\u0646\u06cc\u0645\u0647\u200c\u0634\u0628"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
				u"\u200e\u2212"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				u"\u0646\u0627\u0639\u062f\u062f"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				u"\u200e\u00a4\u00a0#,##0.00;\u200e(\u00a4\u00a0#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				u"\u200e\u2212"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u0646\u0627\u0639\u062f\u062f"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4\u00a0#,##0.00;\u200e(\u00a4\u00a0#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_fa_AF::FormatData_fa_AF() {
}

$Class* FormatData_fa_AF::load$($String* name, bool initialize) {
	$loadClass(FormatData_fa_AF, name, initialize, &_FormatData_fa_AF_ClassInfo_, allocate$FormatData_fa_AF);
	return class$;
}

$Class* FormatData_fa_AF::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun