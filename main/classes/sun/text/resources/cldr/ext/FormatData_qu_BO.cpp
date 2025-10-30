#include <sun/text/resources/cldr/ext/FormatData_qu_BO.h>

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

$MethodInfo _FormatData_qu_BO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_qu_BO::*)()>(&FormatData_qu_BO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_qu_BO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_qu_BO",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_qu_BO_MethodInfo_
};

$Object* allocate$FormatData_qu_BO($Class* clazz) {
	return $of($alloc(FormatData_qu_BO));
}

void FormatData_qu_BO::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_qu_BO::getContents() {
	$useLocalCurrentObjectStackCache();
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
				"E"_s,
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
				u"\u00a4\u00a0#,##0.00"_s,
				u"#,##0\u00a0%"_s,
				u"\u00a4\u00a0#,##0.00"_s
			}))
		})
	}));
	return data;
}

FormatData_qu_BO::FormatData_qu_BO() {
}

$Class* FormatData_qu_BO::load$($String* name, bool initialize) {
	$loadClass(FormatData_qu_BO, name, initialize, &_FormatData_qu_BO_ClassInfo_, allocate$FormatData_qu_BO);
	return class$;
}

$Class* FormatData_qu_BO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun