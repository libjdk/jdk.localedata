#include <sun/text/resources/cldr/ext/FormatData_ar_MR.h>

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

$MethodInfo _FormatData_ar_MR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar_MR::*)()>(&FormatData_ar_MR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_MR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_MR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_MR_MethodInfo_
};

$Object* allocate$FormatData_ar_MR($Class* clazz) {
	return $of($alloc(FormatData_ar_MR));
}

void FormatData_ar_MR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_MR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u064a\u0646\u0627\u064a\u0631"_s,
		u"\u0641\u0628\u0631\u0627\u064a\u0631"_s,
		u"\u0645\u0627\u0631\u0633"_s,
		u"\u0625\u0628\u0631\u064a\u0644"_s,
		u"\u0645\u0627\u064a\u0648"_s,
		u"\u064a\u0648\u0646\u064a\u0648"_s,
		u"\u064a\u0648\u0644\u064a\u0648"_s,
		u"\u0623\u063a\u0634\u062a"_s,
		u"\u0634\u062a\u0645\u0628\u0631"_s,
		u"\u0623\u0643\u062a\u0648\u0628\u0631"_s,
		u"\u0646\u0648\u0641\u0645\u0628\u0631"_s,
		u"\u062f\u062c\u0645\u0628\u0631"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u064a"_s,
		u"\u0641"_s,
		u"\u0645"_s,
		u"\u0625"_s,
		u"\u0648"_s,
		u"\u0646"_s,
		u"\u0644"_s,
		u"\u063a"_s,
		u"\u0634"_s,
		u"\u0643"_s,
		u"\u0628"_s,
		u"\u062f"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
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
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				u"\u200e%\u200e"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u0644\u064a\u0633\u00a0\u0631\u0642\u0645\u064b\u0627"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		})
	}));
	return data;
}

FormatData_ar_MR::FormatData_ar_MR() {
}

$Class* FormatData_ar_MR::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_MR, name, initialize, &_FormatData_ar_MR_ClassInfo_, allocate$FormatData_ar_MR);
	return class$;
}

$Class* FormatData_ar_MR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun