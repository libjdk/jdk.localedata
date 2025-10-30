#include <sun/text/resources/ext/FormatData_es_UY.h>

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

$MethodInfo _FormatData_es_UY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_es_UY::*)()>(&FormatData_es_UY::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_es_UY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_es_UY",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_UY_MethodInfo_
};

$Object* allocate$FormatData_es_UY($Class* clazz) {
	return $of($alloc(FormatData_es_UY));
}

void FormatData_es_UY::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_UY::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"\u00a4 #,##0.00;(\u00a4#,##0.00)"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"hh:mm:ss a z"_s,
				"hh:mm:ss a z"_s,
				"hh:mm:ss a"_s,
				"hh:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d\' de \'MMMM\' de \'yyyy"_s,
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

FormatData_es_UY::FormatData_es_UY() {
}

$Class* FormatData_es_UY::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_UY, name, initialize, &_FormatData_es_UY_ClassInfo_, allocate$FormatData_es_UY);
	return class$;
}

$Class* FormatData_es_UY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun