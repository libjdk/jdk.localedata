#include <sun/text/resources/cldr/ext/FormatData_fr_VU.h>

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

$MethodInfo _FormatData_fr_VU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_fr_VU::*)()>(&FormatData_fr_VU::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_fr_VU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_VU",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_VU_MethodInfo_
};

$Object* allocate$FormatData_fr_VU($Class* clazz) {
	return $of($alloc(FormatData_fr_VU));
}

void FormatData_fr_VU::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_VU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
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

FormatData_fr_VU::FormatData_fr_VU() {
}

$Class* FormatData_fr_VU::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_VU, name, initialize, &_FormatData_fr_VU_ClassInfo_, allocate$FormatData_fr_VU);
	return class$;
}

$Class* FormatData_fr_VU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun