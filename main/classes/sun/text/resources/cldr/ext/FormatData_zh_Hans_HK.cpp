#include <sun/text/resources/cldr/ext/FormatData_zh_Hans_HK.h>

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

$MethodInfo _FormatData_zh_Hans_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_zh_Hans_HK::*)()>(&FormatData_zh_Hans_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_zh_Hans_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_zh_Hans_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zh_Hans_HK_MethodInfo_
};

$Object* allocate$FormatData_zh_Hans_HK($Class* clazz) {
	return $of($alloc(FormatData_zh_Hans_HK));
}

void FormatData_zh_Hans_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh_Hans_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
		u"Gy\u5e74M\u6708d\u65e5"_s,
		u"Gy\u5e74M\u6708d\u65e5"_s,
		"Gd/M/yy"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"GGGGy\u5e74M\u6708d\u65e5EEEE"_s,
		u"GGGGy\u5e74M\u6708d\u65e5"_s,
		u"GGGGy\u5e74M\u6708d\u65e5"_s,
		"GGGGd/M/yy"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
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
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y\u5e74M\u6708d\u65e5EEEE"_s,
				u"y\u5e74M\u6708d\u65e5"_s,
				u"y\u5e74M\u6708d\u65e5"_s,
				"d/M/yy"_s
			}))
		})
	}));
	return data;
}

FormatData_zh_Hans_HK::FormatData_zh_Hans_HK() {
}

$Class* FormatData_zh_Hans_HK::load$($String* name, bool initialize) {
	$loadClass(FormatData_zh_Hans_HK, name, initialize, &_FormatData_zh_Hans_HK_ClassInfo_, allocate$FormatData_zh_Hans_HK);
	return class$;
}

$Class* FormatData_zh_Hans_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun