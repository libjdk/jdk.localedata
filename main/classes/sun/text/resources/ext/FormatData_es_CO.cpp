#include <sun/text/resources/ext/FormatData_es_CO.h>

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

$MethodInfo _FormatData_es_CO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_es_CO::*)()>(&FormatData_es_CO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_es_CO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_es_CO",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_CO_MethodInfo_
};

$Object* allocate$FormatData_es_CO($Class* clazz) {
	return $of($alloc(FormatData_es_CO));
}

void FormatData_es_CO::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_CO::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
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
				"d/MM/yyyy"_s,
				"d/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_es_CO::FormatData_es_CO() {
}

$Class* FormatData_es_CO::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_CO, name, initialize, &_FormatData_es_CO_ClassInfo_, allocate$FormatData_es_CO);
	return class$;
}

$Class* FormatData_es_CO::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun