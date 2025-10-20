#include <sun/text/resources/ext/FormatData_sl_SI.h>

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

$MethodInfo _FormatData_sl_SI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sl_SI::*)()>(&FormatData_sl_SI::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sl_SI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sl_SI",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sl_SI_MethodInfo_
};

$Object* allocate$FormatData_sl_SI($Class* clazz) {
	return $of($alloc(FormatData_sl_SI));
}

void FormatData_sl_SI::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sl_SI::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"\u00a4 #,##0.##;-\u00a4 #,##0.##"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_sl_SI::FormatData_sl_SI() {
}

$Class* FormatData_sl_SI::load$($String* name, bool initialize) {
	$loadClass(FormatData_sl_SI, name, initialize, &_FormatData_sl_SI_ClassInfo_, allocate$FormatData_sl_SI);
	return class$;
}

$Class* FormatData_sl_SI::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun