#include <sun/text/resources/cldr/ext/FormatData_en_SI.h>

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

$MethodInfo _FormatData_en_SI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_en_SI::*)()>(&FormatData_en_SI::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_en_SI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_SI",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_SI_MethodInfo_
};

$Object* allocate$FormatData_en_SI($Class* clazz) {
	return $of($alloc(FormatData_en_SI));
}

void FormatData_en_SI::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_SI::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"e"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				u"#,##0.00\u00a0\u00a4;(#,##0.00\u00a0\u00a4)"_s
			}))
		})
	}));
	return data;
}

FormatData_en_SI::FormatData_en_SI() {
}

$Class* FormatData_en_SI::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_SI, name, initialize, &_FormatData_en_SI_ClassInfo_, allocate$FormatData_en_SI);
	return class$;
}

$Class* FormatData_en_SI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun