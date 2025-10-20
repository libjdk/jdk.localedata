#include <sun/text/resources/cldr/ext/FormatData_ar_KM.h>

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

$MethodInfo _FormatData_ar_KM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar_KM::*)()>(&FormatData_ar_KM::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_KM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_KM",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_KM_MethodInfo_
};

$Object* allocate$FormatData_ar_KM($Class* clazz) {
	return $of($alloc(FormatData_ar_KM));
}

void FormatData_ar_KM::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_KM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
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

FormatData_ar_KM::FormatData_ar_KM() {
}

$Class* FormatData_ar_KM::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_KM, name, initialize, &_FormatData_ar_KM_ClassInfo_, allocate$FormatData_ar_KM);
	return class$;
}

$Class* FormatData_ar_KM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun