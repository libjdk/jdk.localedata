#include <sun/text/resources/ext/FormatData_ja.h>

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

$MethodInfo _FormatData_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ja::*)()>(&FormatData_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ja",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ja_MethodInfo_
};

$Object* allocate$FormatData_ja($Class* clazz) {
	return $of($alloc(FormatData_ja));
}

void FormatData_ja::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ja::getContents() {
	$var($StringArray, japaneseEras, $new($StringArray, {
		u"\u897f\u66a6"_s,
		u"\u660e\u6cbb"_s,
		u"\u5927\u6b63"_s,
		u"\u662d\u548c"_s,
		u"\u5e73\u6210"_s,
		u"\u4ee4\u548c"_s
	}));
	$var($StringArray, rocEras, $new($StringArray, {
		u"\u6c11\u56fd\u524d"_s,
		u"\u6c11\u56fd"_s
	}));
	$var($StringArray, gregoryEras, $new($StringArray, {
		u"\u7d00\u5143\u524d"_s,
		u"\u897f\u66a6"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"1\u6708"_s,
				u"2\u6708"_s,
				u"3\u6708"_s,
				u"4\u6708"_s,
				u"5\u6708"_s,
				u"6\u6708"_s,
				u"7\u6708"_s,
				u"8\u6708"_s,
				u"9\u6708"_s,
				u"10\u6708"_s,
				u"11\u6708"_s,
				u"12\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"1"_s,
				"2"_s,
				"3"_s,
				"4"_s,
				"5"_s,
				"6"_s,
				"7"_s,
				"8"_s,
				"9"_s,
				"10"_s,
				"11"_s,
				"12"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u65e5\u66dc\u65e5"_s,
				u"\u6708\u66dc\u65e5"_s,
				u"\u706b\u66dc\u65e5"_s,
				u"\u6c34\u66dc\u65e5"_s,
				u"\u6728\u66dc\u65e5"_s,
				u"\u91d1\u66dc\u65e5"_s,
				u"\u571f\u66dc\u65e5"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u65e5"_s,
				u"\u6708"_s,
				u"\u706b"_s,
				u"\u6c34"_s,
				u"\u6728"_s,
				u"\u91d1"_s,
				u"\u571f"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u65e5"_s,
				u"\u6708"_s,
				u"\u706b"_s,
				u"\u6c34"_s,
				u"\u6728"_s,
				u"\u91d1"_s,
				u"\u571f"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\u5348\u524d"_s,
				u"\u5348\u5f8c"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(gregoryEras)
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of(gregoryEras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				u"\u7d00\u5143\u524d"_s,
				u"\u4ecf\u66a6"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of(japaneseEras)
		}),
		$$new($ObjectArray, {
			$of("japanese.FirstYear"_s),
			$of($$new($StringArray, {u"\u5143"_s}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
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
				u"\ufffd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"H\'\u6642\'mm\'\u5206\'ss\'\u79d2\' z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"yyyy\'\u5e74\'M\'\u6708\'d\'\u65e5\'"_s,
				"yyyy/MM/dd"_s,
				"yyyy/MM/dd"_s,
				"yy/MM/dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGyyyy\'\u5e74\'M\'\u6708\'d\'\u65e5\'"_s,
				"Gy.MM.dd"_s,
				"Gy.MM.dd"_s,
				"Gy.MM.dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of($$new($StringArray, {
				u"H\'\u6642\'mm\'\u5206\'ss\'\u79d2\' z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_ja::FormatData_ja() {
}

$Class* FormatData_ja::load$($String* name, bool initialize) {
	$loadClass(FormatData_ja, name, initialize, &_FormatData_ja_ClassInfo_, allocate$FormatData_ja);
	return class$;
}

$Class* FormatData_ja::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun