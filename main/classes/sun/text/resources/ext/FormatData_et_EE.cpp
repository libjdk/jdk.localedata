#include <sun/text/resources/ext/FormatData_et_EE.h>

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

$MethodInfo _FormatData_et_EE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_et_EE::*)()>(&FormatData_et_EE::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_et_EE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_et_EE",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_et_EE_MethodInfo_
};

$Object* allocate$FormatData_et_EE($Class* clazz) {
	return $of($alloc(FormatData_et_EE));
}

void FormatData_et_EE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_et_EE::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.## \u00a4;-#,##0.## \u00a4"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_et_EE::FormatData_et_EE() {
}

$Class* FormatData_et_EE::load$($String* name, bool initialize) {
	$loadClass(FormatData_et_EE, name, initialize, &_FormatData_et_EE_ClassInfo_, allocate$FormatData_et_EE);
	return class$;
}

$Class* FormatData_et_EE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun