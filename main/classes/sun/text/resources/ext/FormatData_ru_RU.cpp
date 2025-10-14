#include <sun/text/resources/ext/FormatData_ru_RU.h>

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

$MethodInfo _FormatData_ru_RU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ru_RU::*)()>(&FormatData_ru_RU::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ru_RU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ru_RU",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ru_RU_MethodInfo_
};

$Object* allocate$FormatData_ru_RU($Class* clazz) {
	return $of($alloc(FormatData_ru_RU));
}

void FormatData_ru_RU::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ru_RU::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.## \u00a4;-#,##0.## \u00a4"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_ru_RU::FormatData_ru_RU() {
}

$Class* FormatData_ru_RU::load$($String* name, bool initialize) {
	$loadClass(FormatData_ru_RU, name, initialize, &_FormatData_ru_RU_ClassInfo_, allocate$FormatData_ru_RU);
	return class$;
}

$Class* FormatData_ru_RU::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun