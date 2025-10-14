#include <sun/text/resources/cldr/ext/FormatData_es_US.h>

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

$MethodInfo _FormatData_es_US_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_es_US::*)()>(&FormatData_es_US::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_es_US_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_es_US",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_US_MethodInfo_
};

$Object* allocate$FormatData_es_US($Class* clazz) {
	return $of($alloc(FormatData_es_US));
}

void FormatData_es_US::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_US::getContents() {
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"M"_s,
		"J"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"1.er trimestre"_s,
		u"2.\u00ba trimestre"_s,
		"3.er trimestre"_s,
		u"4.\u00ba trimestre"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\u00a0K other:0\u00a0K}"_s,
				u"{one:00\u00a0K other:00\u00a0K}"_s,
				u"{one:000\u00a0K other:000\u00a0K}"_s,
				""_s,
				""_s,
				""_s,
				u"{one:0\u00a0B other:0\u00a0B}"_s,
				u"{one:00\u00a0B other:00\u00a0B}"_s,
				u"{one:000\u00a0B other:000\u00a0B}"_s,
				u"{one:0\u00a0T other:0\u00a0T}"_s,
				u"{one:00\u00a0T other:00\u00a0T}"_s,
				u"{one:000\u00a0T other:000\u00a0T}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d \'de\' MMMM \'de\' y"_s,
				"d \'de\' MMMM \'de\' y"_s,
				"d MMM y"_s,
				"d/M/y"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				"{1}, {0}"_s,
				"{1}, {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
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
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				u"#,##0\u00a0%"_s,
				u"\u00a4#,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				""_s,
				""_s,
				""_s,
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'bill\u00f3n other:0\' \'billones}"_s,
				"{one:00\' \'billones other:00\' \'billones}"_s,
				"{one:000\' \'billones other:000\' \'billones}"_s,
				u"{one:0\' \'trill\u00f3n other:0\' \'trillones}"_s,
				"{one:00\' \'trillones other:00\' \'trillones}"_s,
				"{one:000\' \'trillones other:000\' \'trillones}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				"1.er trimestre"_s,
				u"2\u00ba. trimestre"_s,
				"3.er trimestre"_s,
				u"4.\u00ba trimestre"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		})
	}));
	return data;
}

FormatData_es_US::FormatData_es_US() {
}

$Class* FormatData_es_US::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_US, name, initialize, &_FormatData_es_US_ClassInfo_, allocate$FormatData_es_US);
	return class$;
}

$Class* FormatData_es_US::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun