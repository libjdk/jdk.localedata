#include <sun/text/resources/ext/FormatData_ko_KR.h>

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

$MethodInfo _FormatData_ko_KR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ko_KR::*)()>(&FormatData_ko_KR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ko_KR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ko_KR",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ko_KR_MethodInfo_
};

$Object* allocate$FormatData_ko_KR($Class* clazz) {
	return $of($alloc(FormatData_ko_KR));
}

void FormatData_ko_KR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ko_KR::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"\u00a4#,##0;-\u00a4#,##0"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_ko_KR::FormatData_ko_KR() {
}

$Class* FormatData_ko_KR::load$($String* name, bool initialize) {
	$loadClass(FormatData_ko_KR, name, initialize, &_FormatData_ko_KR_ClassInfo_, allocate$FormatData_ko_KR);
	return class$;
}

$Class* FormatData_ko_KR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun