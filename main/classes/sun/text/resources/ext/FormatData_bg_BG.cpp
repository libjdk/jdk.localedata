#include <sun/text/resources/ext/FormatData_bg_BG.h>

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

$MethodInfo _FormatData_bg_BG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_bg_BG::*)()>(&FormatData_bg_BG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_bg_BG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_bg_BG",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_bg_BG_MethodInfo_
};

$Object* allocate$FormatData_bg_BG($Class* clazz) {
	return $of($alloc(FormatData_bg_BG));
}

void FormatData_bg_BG::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_bg_BG::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"\u00a4#,##0.##;-\u00a4#,##0.##"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_bg_BG::FormatData_bg_BG() {
}

$Class* FormatData_bg_BG::load$($String* name, bool initialize) {
	$loadClass(FormatData_bg_BG, name, initialize, &_FormatData_bg_BG_ClassInfo_, allocate$FormatData_bg_BG);
	return class$;
}

$Class* FormatData_bg_BG::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun