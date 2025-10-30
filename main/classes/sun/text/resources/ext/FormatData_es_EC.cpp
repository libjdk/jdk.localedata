#include <sun/text/resources/ext/FormatData_es_EC.h>

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

$MethodInfo _FormatData_es_EC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_es_EC::*)()>(&FormatData_es_EC::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_es_EC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_es_EC",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_EC_MethodInfo_
};

$Object* allocate$FormatData_es_EC($Class* clazz) {
	return $of($alloc(FormatData_es_EC));
}

void FormatData_es_EC::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_EC::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"\u00a4#,##0.00;\u00a4-#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\ufffd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss zzzz"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
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

FormatData_es_EC::FormatData_es_EC() {
}

$Class* FormatData_es_EC::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_EC, name, initialize, &_FormatData_es_EC_ClassInfo_, allocate$FormatData_es_EC);
	return class$;
}

$Class* FormatData_es_EC::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun