#include <sun/text/resources/cldr/ext/FormatData_ff_Adlm_GH.h>

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

$MethodInfo _FormatData_ff_Adlm_GH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ff_Adlm_GH::*)()>(&FormatData_ff_Adlm_GH::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ff_Adlm_GH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ff_Adlm_GH",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ff_Adlm_GH_MethodInfo_
};

$Object* allocate$FormatData_ff_Adlm_GH($Class* clazz) {
	return $of($alloc(FormatData_ff_Adlm_GH));
}

void FormatData_ff_Adlm_GH::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ff_Adlm_GH::getContents() {
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

FormatData_ff_Adlm_GH::FormatData_ff_Adlm_GH() {
}

$Class* FormatData_ff_Adlm_GH::load$($String* name, bool initialize) {
	$loadClass(FormatData_ff_Adlm_GH, name, initialize, &_FormatData_ff_Adlm_GH_ClassInfo_, allocate$FormatData_ff_Adlm_GH);
	return class$;
}

$Class* FormatData_ff_Adlm_GH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun