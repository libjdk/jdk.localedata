#include <sun/text/resources/cldr/ext/FormatData_ar_IL.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_ar_IL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar_IL::*)()>(&FormatData_ar_IL::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_IL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_IL",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_IL_MethodInfo_
};

$Object* allocate$FormatData_ar_IL($Class* clazz) {
	return $of($alloc(FormatData_ar_IL));
}

void FormatData_ar_IL::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_IL::getContents() {
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		})
	}));
	return data;
}

FormatData_ar_IL::FormatData_ar_IL() {
}

$Class* FormatData_ar_IL::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_IL, name, initialize, &_FormatData_ar_IL_ClassInfo_, allocate$FormatData_ar_IL);
	return class$;
}

$Class* FormatData_ar_IL::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun