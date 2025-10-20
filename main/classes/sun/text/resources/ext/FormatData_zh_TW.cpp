#include <sun/text/resources/ext/FormatData_zh_TW.h>

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

$MethodInfo _FormatData_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_zh_TW::*)()>(&FormatData_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_zh_TW",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zh_TW_MethodInfo_
};

$Object* allocate$FormatData_zh_TW($Class* clazz) {
	return $of($alloc(FormatData_zh_TW));
}

void FormatData_zh_TW::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"\u6c11\u570b\u524d"_s,
		u"\u6c11\u570b"_s
	}));
	$var($StringArray, gregoryEras, $new($StringArray, {
		u"\u897f\u5143\u524d"_s,
		u"\u897f\u5143"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(gregoryEras)
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of(gregoryEras)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
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
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"\u00a4#,##0.00;-\u00a4#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"ahh\'\u6642\'mm\'\u5206\'ss\'\u79d2\' z"_s,
				u"ahh\'\u6642\'mm\'\u5206\'ss\'\u79d2\'"_s,
				"a hh:mm:ss"_s,
				"a h:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"yyyy\'\u5e74\'M\'\u6708\'d\'\u65e5\' EEEE"_s,
				u"yyyy\'\u5e74\'M\'\u6708\'d\'\u65e5\'"_s,
				"yyyy/M/d"_s,
				"yyyy/M/d"_s
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
				"GGGGy/M/d"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGy/M/d"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_zh_TW::FormatData_zh_TW() {
}

$Class* FormatData_zh_TW::load$($String* name, bool initialize) {
	$loadClass(FormatData_zh_TW, name, initialize, &_FormatData_zh_TW_ClassInfo_, allocate$FormatData_zh_TW);
	return class$;
}

$Class* FormatData_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun