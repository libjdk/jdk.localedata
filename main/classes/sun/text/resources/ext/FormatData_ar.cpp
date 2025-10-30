#include <sun/text/resources/ext/FormatData_ar.h>

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

$MethodInfo _FormatData_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar::*)()>(&FormatData_ar::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ar",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_MethodInfo_
};

$Object* allocate$FormatData_ar($Class* clazz) {
	return $of($alloc(FormatData_ar));
}

void FormatData_ar::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		"Before R.O.C."_s,
		u"\u062c\u0645\u0647\u0648\u0631\u064a\u0629 \u0627\u0644\u0635\u064a"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u064a\u0646\u0627\u064a\u0631"_s,
				u"\u0641\u0628\u0631\u0627\u064a\u0631"_s,
				u"\u0645\u0627\u0631\u0633"_s,
				u"\u0623\u0628\u0631\u064a\u0644"_s,
				u"\u0645\u0627\u064a\u0648"_s,
				u"\u064a\u0648\u0646\u064a\u0648"_s,
				u"\u064a\u0648\u0644\u064a\u0648"_s,
				u"\u0623\u063a\u0633\u0637\u0633"_s,
				u"\u0633\u0628\u062a\u0645\u0628\u0631"_s,
				u"\u0623\u0643\u062a\u0648\u0628\u0631"_s,
				u"\u0646\u0648\u0641\u0645\u0628\u0631"_s,
				u"\u062f\u064a\u0633\u0645\u0628\u0631"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u064a\u0646\u0627"_s,
				u"\u0641\u0628\u0631"_s,
				u"\u0645\u0627\u0631"_s,
				u"\u0623\u0628\u0631"_s,
				u"\u0645\u0627\u064a"_s,
				u"\u064a\u0648\u0646"_s,
				u"\u064a\u0648\u0644"_s,
				u"\u0623\u063a\u0633"_s,
				u"\u0633\u0628\u062a"_s,
				u"\u0623\u0643\u062a"_s,
				u"\u0646\u0648\u0641"_s,
				u"\u062f\u064a\u0633"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u064a"_s,
				u"\u0641"_s,
				u"\u0645"_s,
				u"\u0623"_s,
				u"\u0648"_s,
				u"\u0646"_s,
				u"\u0644"_s,
				u"\u063a"_s,
				u"\u0633"_s,
				u"\u0643"_s,
				u"\u0628"_s,
				u"\u062f"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u0627\u0644\u0623\u062d\u062f"_s,
				u"\u0627\u0644\u0627\u062b\u0646\u064a\u0646"_s,
				u"\u0627\u0644\u062b\u0644\u0627\u062b\u0627\u0621"_s,
				u"\u0627\u0644\u0623\u0631\u0628\u0639\u0627\u0621"_s,
				u"\u0627\u0644\u062e\u0645\u064a\u0633"_s,
				u"\u0627\u0644\u062c\u0645\u0639\u0629"_s,
				u"\u0627\u0644\u0633\u0628\u062a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u062d"_s,
				u"\u0646"_s,
				u"\u062b"_s,
				u"\u0631"_s,
				u"\u062e"_s,
				u"\u062c"_s,
				u"\u0633"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0627\u0644\u0623\u062d\u062f"_s,
				u"\u0627\u0644\u0627\u062b\u0646\u064a\u0646"_s,
				u"\u0627\u0644\u062b\u0644\u0627\u062b\u0627\u0621"_s,
				u"\u0627\u0644\u0623\u0631\u0628\u0639\u0627\u0621"_s,
				u"\u0627\u0644\u062e\u0645\u064a\u0633"_s,
				u"\u0627\u0644\u062c\u0645\u0639\u0629"_s,
				u"\u0627\u0644\u0633\u0628\u062a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u062d"_s,
				u"\u0646"_s,
				u"\u062b"_s,
				u"\u0631"_s,
				u"\u062e"_s,
				u"\u062c"_s,
				u"\u0633"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\u0635"_s,
				u"\u0645"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"\u0642.\u0645"_s,
				u"\u0645"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0642.\u0645"_s,
				u"\u0645"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of($$new($StringArray, {
				u"\u0645"_s,
				u"\u0645\u064a\u062c\u064a"_s,
				u"\u062a\u064a\u0634\u0648"_s,
				u"\u0634\u0648\u0648\u0627"_s,
				u"\u0647\u064a\u0633\u064a"_s,
				u"\u0631\u064a\u0648\u0627"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.short.Eras"_s),
			$of($$new($StringArray, {
				u"\u0645"_s,
				u"\u0645\u064a\u062c\u064a"_s,
				u"\u062a\u064a\u0634\u0648"_s,
				u"\u0634\u0648\u0648\u0627"_s,
				u"\u0647\u064a\u0633\u064a"_s,
				u"\u0631\u064a\u0648\u0627"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0628\u0648\u0630\u064a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"\u0627\u0644\u062a\u0642\u0648\u064a\u0645 \u0627\u0644\u0628\u0648\u0630\u064a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;#,##0.###-"_s,
				u"\u00a4 #,##0.###;\u00a4 #,##0.###-"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"z hh:mm:ss a"_s,
				"z hh:mm:ss a"_s,
				"hh:mm:ss a"_s,
				"hh:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM, yyyy"_s,
				"dd MMMM, yyyy"_s,
				"dd/MM/yyyy"_s,
				"dd/MM/yy"_s
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

FormatData_ar::FormatData_ar() {
}

$Class* FormatData_ar::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar, name, initialize, &_FormatData_ar_ClassInfo_, allocate$FormatData_ar);
	return class$;
}

$Class* FormatData_ar::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun