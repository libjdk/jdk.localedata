#include <sun/text/resources/cldr/ext/FormatData_en_FI.h>

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

$MethodInfo _FormatData_en_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_en_FI::*)()>(&FormatData_en_FI::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_en_FI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_FI",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_FI_MethodInfo_
};

$Object* allocate$FormatData_en_FI($Class* clazz) {
	return $of($alloc(FormatData_en_FI));
}

void FormatData_en_FI::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_FI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H.mm.ss zzzz"_s,
		"H.mm.ss z"_s,
		"H.mm.ss"_s,
		"H.mm"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u"\u00a0"_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				u"#,##0\u00a0%"_s,
				u"#,##0.00\u00a0\u00a4"_s
			}))
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

FormatData_en_FI::FormatData_en_FI() {
}

$Class* FormatData_en_FI::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_FI, name, initialize, &_FormatData_en_FI_ClassInfo_, allocate$FormatData_en_FI);
	return class$;
}

$Class* FormatData_en_FI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun