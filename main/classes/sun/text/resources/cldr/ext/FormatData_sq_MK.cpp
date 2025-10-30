#include <sun/text/resources/cldr/ext/FormatData_sq_MK.h>

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

$MethodInfo _FormatData_sq_MK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sq_MK::*)()>(&FormatData_sq_MK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sq_MK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sq_MK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sq_MK_MethodInfo_
};

$Object* allocate$FormatData_sq_MK($Class* clazz) {
	return $of($alloc(FormatData_sq_MK));
}

void FormatData_sq_MK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sq_MK::getContents() {
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

FormatData_sq_MK::FormatData_sq_MK() {
}

$Class* FormatData_sq_MK::load$($String* name, bool initialize) {
	$loadClass(FormatData_sq_MK, name, initialize, &_FormatData_sq_MK_ClassInfo_, allocate$FormatData_sq_MK);
	return class$;
}

$Class* FormatData_sq_MK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun