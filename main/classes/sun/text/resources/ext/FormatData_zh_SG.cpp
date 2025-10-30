#include <sun/text/resources/ext/FormatData_zh_SG.h>

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

$MethodInfo _FormatData_zh_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_zh_SG::*)()>(&FormatData_zh_SG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_zh_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_zh_SG",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zh_SG_MethodInfo_
};

$Object* allocate$FormatData_zh_SG($Class* clazz) {
	return $of($alloc(FormatData_zh_SG));
}

void FormatData_zh_SG::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
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
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s
			}))
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
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"a hh:mm:ss"_s,
				"a hh:mm:ss"_s,
				"a hh:mm"_s,
				"a hh:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM yyyy"_s,
				"dd MMM yyyy"_s,
				"dd-MMM-yy"_s,
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

FormatData_zh_SG::FormatData_zh_SG() {
}

$Class* FormatData_zh_SG::load$($String* name, bool initialize) {
	$loadClass(FormatData_zh_SG, name, initialize, &_FormatData_zh_SG_ClassInfo_, allocate$FormatData_zh_SG);
	return class$;
}

$Class* FormatData_zh_SG::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun