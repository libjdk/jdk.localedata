#include <sun/text/resources/ext/FormatData_ga_IE.h>

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

$MethodInfo _FormatData_ga_IE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ga_IE::*)()>(&FormatData_ga_IE::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ga_IE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ga_IE",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ga_IE_MethodInfo_
};

$Object* allocate$FormatData_ga_IE($Class* clazz) {
	return $of($alloc(FormatData_ga_IE));
}

void FormatData_ga_IE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ga_IE::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"dd/MM/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_ga_IE::FormatData_ga_IE() {
}

$Class* FormatData_ga_IE::load$($String* name, bool initialize) {
	$loadClass(FormatData_ga_IE, name, initialize, &_FormatData_ga_IE_ClassInfo_, allocate$FormatData_ga_IE);
	return class$;
}

$Class* FormatData_ga_IE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun