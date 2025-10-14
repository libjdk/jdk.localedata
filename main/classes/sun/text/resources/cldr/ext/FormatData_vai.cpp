#include <sun/text/resources/cldr/ext/FormatData_vai.h>

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

$MethodInfo _FormatData_vai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_vai::*)()>(&FormatData_vai::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_vai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_vai",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_vai_MethodInfo_
};

$Object* allocate$FormatData_vai($Class* clazz) {
	return $of($alloc(FormatData_vai));
}

void FormatData_vai::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_vai::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\ua5a8\ua595 \ua56a\ua574 \ua51e\ua500\ua56e\ua54a"_s,
		u"\ua552\ua561\ua59d\ua595"_s,
		u"\ua57e\ua5ba"_s,
		u"\ua5a2\ua595"_s,
		u"\ua591\ua571"_s,
		u"\ua5b1\ua60b"_s,
		u"\ua5b1\ua55e\ua524"_s,
		u"\ua5db\ua515"_s,
		u"\ua562\ua54c"_s,
		u"\ua56d\ua583"_s,
		u"\ua51e\ua60b\ua554\ua57f \ua578\ua583\ua5cf"_s,
		u"\ua5a8\ua595 \ua56a\ua574 \ua5cf\ua5ba\ua56e\ua54a"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\ua5a8\ua595\ua51e"_s,
		u"\ua552\ua561"_s,
		u"\ua57e\ua5ba"_s,
		u"\ua5a2\ua595"_s,
		u"\ua591\ua571"_s,
		u"\ua5b1\ua60b"_s,
		u"\ua5b1\ua55e"_s,
		u"\ua5db\ua515"_s,
		u"\ua562\ua54c"_s,
		u"\ua56d\ua583"_s,
		u"\ua51e\ua60b"_s,
		u"\ua5a8\ua595\ua5cf"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\ua55e\ua54c\ua535"_s,
		u"\ua5f3\ua5e1\ua609"_s,
		u"\ua55a\ua55e\ua55a"_s,
		u"\ua549\ua55e\ua552"_s,
		u"\ua549\ua524\ua546\ua562"_s,
		u"\ua549\ua524\ua540\ua56e"_s,
		u"\ua53b\ua52c\ua533"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\ua562\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\ua56a\ua583"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\ua567\ua543\ua567\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\ua528\ua524\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
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
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"dd/MM/y"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\ua528\ua543\ua56e \ua50e\ua512"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
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
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\ua54c\ua54e"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
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
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\ua546\ua547"_s)
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
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		})
	}));
	return data;
}

FormatData_vai::FormatData_vai() {
}

$Class* FormatData_vai::load$($String* name, bool initialize) {
	$loadClass(FormatData_vai, name, initialize, &_FormatData_vai_ClassInfo_, allocate$FormatData_vai);
	return class$;
}

$Class* FormatData_vai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun