#include <sun/text/resources/cldr/ext/FormatData_ps_PK.h>

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

$MethodInfo _FormatData_ps_PK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ps_PK::*)()>(&FormatData_ps_PK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ps_PK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ps_PK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ps_PK_MethodInfo_
};

$Object* allocate$FormatData_ps_PK($Class* clazz) {
	return $of($alloc(FormatData_ps_PK));
}

void FormatData_ps_PK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ps_PK::getContents() {
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
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0645\u062d\u0631\u0645"_s,
				u"\u062f \u0635\u0641\u0631\u06d2 \u062f"_s,
				u"\u0631\u0628\u064a\u0639"_s,
				u"\u0631\u0628\u064a\u0639 II"_s,
				u"\u062c\u0645\u0627\u0639\u0647"_s,
				u"\u062c\u0645\u0648\u0645\u0627 II"_s,
				u"\u0631\u062c\u0628"_s,
				u"\u0634\u0639\u0628\u0627\u0646"_s,
				u"\u0631\u0645\u0636\u0627\u0646"_s,
				u"\u0634\u0648\u0627\u0644"_s,
				u"\u0630\u064a \u0627\u0644\u0642\u0639\u062f\u0647"_s,
				u"\u0630\u064a \u0627\u0644\u062d\u062c"_s,
				""_s
			}))
		})
	}));
	return data;
}

FormatData_ps_PK::FormatData_ps_PK() {
}

$Class* FormatData_ps_PK::load$($String* name, bool initialize) {
	$loadClass(FormatData_ps_PK, name, initialize, &_FormatData_ps_PK_ClassInfo_, allocate$FormatData_ps_PK);
	return class$;
}

$Class* FormatData_ps_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun