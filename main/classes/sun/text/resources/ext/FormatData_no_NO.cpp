#include <sun/text/resources/ext/FormatData_no_NO.h>

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

$MethodInfo _FormatData_no_NO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_no_NO::*)()>(&FormatData_no_NO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_no_NO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_no_NO",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_no_NO_MethodInfo_
};

$Object* allocate$FormatData_no_NO($Class* clazz) {
	return $of($alloc(FormatData_no_NO));
}

void FormatData_no_NO::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_no_NO::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"\u00a4 #,##0.00;\u00a4 -#,##0.00"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_no_NO::FormatData_no_NO() {
}

$Class* FormatData_no_NO::load$($String* name, bool initialize) {
	$loadClass(FormatData_no_NO, name, initialize, &_FormatData_no_NO_ClassInfo_, allocate$FormatData_no_NO);
	return class$;
}

$Class* FormatData_no_NO::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun