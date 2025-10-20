#include <sun/text/resources/ext/FormatData_nl_NL.h>

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

$MethodInfo _FormatData_nl_NL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_nl_NL::*)()>(&FormatData_nl_NL::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_nl_NL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_nl_NL",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_nl_NL_MethodInfo_
};

$Object* allocate$FormatData_nl_NL($Class* clazz) {
	return $of($alloc(FormatData_nl_NL));
}

void FormatData_nl_NL::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_nl_NL::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"\u00a4 #,##0.00;\u00a4 #,##0.00-"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_nl_NL::FormatData_nl_NL() {
}

$Class* FormatData_nl_NL::load$($String* name, bool initialize) {
	$loadClass(FormatData_nl_NL, name, initialize, &_FormatData_nl_NL_ClassInfo_, allocate$FormatData_nl_NL);
	return class$;
}

$Class* FormatData_nl_NL::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun