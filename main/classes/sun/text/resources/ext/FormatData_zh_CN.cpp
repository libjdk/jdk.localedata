#include <sun/text/resources/ext/FormatData_zh_CN.h>

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

$MethodInfo _FormatData_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_zh_CN::*)()>(&FormatData_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_zh_CN",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zh_CN_MethodInfo_
};

$Object* allocate$FormatData_zh_CN($Class* clazz) {
	return $of($alloc(FormatData_zh_CN));
}

void FormatData_zh_CN::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh_CN::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"\u00a4#,##0.00;-\u00a4#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_zh_CN::FormatData_zh_CN() {
}

$Class* FormatData_zh_CN::load$($String* name, bool initialize) {
	$loadClass(FormatData_zh_CN, name, initialize, &_FormatData_zh_CN_ClassInfo_, allocate$FormatData_zh_CN);
	return class$;
}

$Class* FormatData_zh_CN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun