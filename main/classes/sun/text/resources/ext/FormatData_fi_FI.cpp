#include <sun/text/resources/ext/FormatData_fi_FI.h>

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

$MethodInfo _FormatData_fi_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_fi_FI::*)()>(&FormatData_fi_FI::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_fi_FI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_fi_FI",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fi_FI_MethodInfo_
};

$Object* allocate$FormatData_fi_FI($Class* clazz) {
	return $of($alloc(FormatData_fi_FI));
}

void FormatData_fi_FI::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fi_FI::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.00 \u00a4;-#,##0.00 \u00a4"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_fi_FI::FormatData_fi_FI() {
}

$Class* FormatData_fi_FI::load$($String* name, bool initialize) {
	$loadClass(FormatData_fi_FI, name, initialize, &_FormatData_fi_FI_ClassInfo_, allocate$FormatData_fi_FI);
	return class$;
}

$Class* FormatData_fi_FI::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun