#include <sun/text/resources/ext/FormatData_zh.h>

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

$MethodInfo _FormatData_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_zh::*)()>(&FormatData_zh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_zh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_zh",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zh_MethodInfo_
};

$Object* allocate$FormatData_zh($Class* clazz) {
	return $of($alloc(FormatData_zh));
}

void FormatData_zh::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh::getContents() {
	$var($StringArray, rocEras, $new($StringArray, {
		u"\u6c11\u56fd\u524d"_s,
		u"\u6c11\u56fd"_s
	}));
	$var($StringArray, gregoryEras, $new($StringArray, {
		u"\u516c\u5143\u524d"_s,
		u"\u516c\u5143"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u4e00\u6708"_s,
				u"\u4e8c\u6708"_s,
				u"\u4e09\u6708"_s,
				u"\u56db\u6708"_s,
				u"\u4e94\u6708"_s,
				u"\u516d\u6708"_s,
				u"\u4e03\u6708"_s,
				u"\u516b\u6708"_s,
				u"\u4e5d\u6708"_s,
				u"\u5341\u6708"_s,
				u"\u5341\u4e00\u6708"_s,
				u"\u5341\u4e8c\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u4e00\u6708"_s,
				u"\u4e8c\u6708"_s,
				u"\u4e09\u6708"_s,
				u"\u56db\u6708"_s,
				u"\u4e94\u6708"_s,
				u"\u516d\u6708"_s,
				u"\u4e03\u6708"_s,
				u"\u516b\u6708"_s,
				u"\u4e5d\u6708"_s,
				u"\u5341\u6708"_s,
				u"\u5341\u4e00\u6708"_s,
				u"\u5341\u4e8c\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u4e00\u6708"_s,
				u"\u4e8c\u6708"_s,
				u"\u4e09\u6708"_s,
				u"\u56db\u6708"_s,
				u"\u4e94\u6708"_s,
				u"\u516d\u6708"_s,
				u"\u4e03\u6708"_s,
				u"\u516b\u6708"_s,
				u"\u4e5d\u6708"_s,
				u"\u5341\u6708"_s,
				u"\u5341\u4e00\u6708"_s,
				u"\u5341\u4e8c\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u4e00\u6708"_s,
				u"\u4e8c\u6708"_s,
				u"\u4e09\u6708"_s,
				u"\u56db\u6708"_s,
				u"\u4e94\u6708"_s,
				u"\u516d\u6708"_s,
				u"\u4e03\u6708"_s,
				u"\u516b\u6708"_s,
				u"\u4e5d\u6708"_s,
				u"\u5341\u6708"_s,
				u"\u5341\u4e00\u6708"_s,
				u"\u5341\u4e8c\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
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
			$of("standalone.MonthNarrows"_s),
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
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u661f\u671f\u65e5"_s,
				u"\u661f\u671f\u4e00"_s,
				u"\u661f\u671f\u4e8c"_s,
				u"\u661f\u671f\u4e09"_s,
				u"\u661f\u671f\u56db"_s,
				u"\u661f\u671f\u4e94"_s,
				u"\u661f\u671f\u516d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"\u661f\u671f\u65e5"_s,
				u"\u661f\u671f\u4e00"_s,
				u"\u661f\u671f\u4e8c"_s,
				u"\u661f\u671f\u4e09"_s,
				u"\u661f\u671f\u56db"_s,
				u"\u661f\u671f\u4e94"_s,
				u"\u661f\u671f\u516d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u661f\u671f\u65e5"_s,
				u"\u661f\u671f\u4e00"_s,
				u"\u661f\u671f\u4e8c"_s,
				u"\u661f\u671f\u4e09"_s,
				u"\u661f\u671f\u56db"_s,
				u"\u661f\u671f\u4e94"_s,
				u"\u661f\u671f\u516d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u5468\u65e5"_s,
				u"\u5468\u4e00"_s,
				u"\u5468\u4e8c"_s,
				u"\u5468\u4e09"_s,
				u"\u5468\u56db"_s,
				u"\u5468\u4e94"_s,
				u"\u5468\u516d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u65e5"_s,
				u"\u4e00"_s,
				u"\u4e8c"_s,
				u"\u4e09"_s,
				u"\u56db"_s,
				u"\u4e94"_s,
				u"\u516d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u65e5"_s,
				u"\u4e00"_s,
				u"\u4e8c"_s,
				u"\u4e09"_s,
				u"\u56db"_s,
				u"\u4e94"_s,
				u"\u516d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"\u4e0a\u5348"_s,
				u"\u4e0b\u5348"_s
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
				"BC"_s,
				u"\u4f5b\u5386"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of($$new($StringArray, {
				u"\u516c\u5143"_s,
				u"\u660e\u6cbb"_s,
				u"\u5927\u6b63"_s,
				u"\u662d\u548c"_s,
				u"\u5e73\u6210"_s,
				u"\u4ee4\u548c"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"ahh\'\u65f6\'mm\'\u5206\'ss\'\u79d2\' z"_s,
				u"ahh\'\u65f6\'mm\'\u5206\'ss\'\u79d2\'"_s,
				"H:mm:ss"_s,
				"ah:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"yyyy\'\u5e74\'M\'\u6708\'d\'\u65e5\' EEEE"_s,
				u"yyyy\'\u5e74\'M\'\u6708\'d\'\u65e5\'"_s,
				"yyyy-M-d"_s,
				"yy-M-d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGyyyy-M-d"_s,
				"GGGGy-M-d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGyy-MM-dd"_s
			}))
		})
	});
}

FormatData_zh::FormatData_zh() {
}

$Class* FormatData_zh::load$($String* name, bool initialize) {
	$loadClass(FormatData_zh, name, initialize, &_FormatData_zh_ClassInfo_, allocate$FormatData_zh);
	return class$;
}

$Class* FormatData_zh::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun