#include <sun/text/resources/ext/FormatData_pt_BR.h>

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

$MethodInfo _FormatData_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_pt_BR::*)()>(&FormatData_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_pt_BR",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pt_BR_MethodInfo_
};

$Object* allocate$FormatData_pt_BR($Class* clazz) {
	return $of($alloc(FormatData_pt_BR));
}

void FormatData_pt_BR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_pt_BR::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"\u00a4 #,##0.00;-\u00a4 #,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH\'h\'mm\'min\'ss\'s\' z"_s,
				"H\'h\'m\'min\'s\'s\' z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d\' de \'MMMM\' de \'yyyy"_s,
				"d\' de \'MMMM\' de \'yyyy"_s,
				"dd/MM/yyyy"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_pt_BR::FormatData_pt_BR() {
}

$Class* FormatData_pt_BR::load$($String* name, bool initialize) {
	$loadClass(FormatData_pt_BR, name, initialize, &_FormatData_pt_BR_ClassInfo_, allocate$FormatData_pt_BR);
	return class$;
}

$Class* FormatData_pt_BR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun