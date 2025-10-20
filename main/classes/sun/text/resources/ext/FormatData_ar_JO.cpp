#include <sun/text/resources/ext/FormatData_ar_JO.h>

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

$MethodInfo _FormatData_ar_JO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar_JO::*)()>(&FormatData_ar_JO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_JO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ar_JO",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_JO_MethodInfo_
};

$Object* allocate$FormatData_ar_JO($Class* clazz) {
	return $of($alloc(FormatData_ar_JO));
}

void FormatData_ar_JO::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_JO::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0643\u0627\u0646\u0648\u0646 \u0627\u0644\u062b\u0627\u0646\u064a"_s,
				u"\u0634\u0628\u0627\u0637"_s,
				u"\u0622\u0630\u0627\u0631"_s,
				u"\u0646\u064a\u0633\u0627\u0646"_s,
				u"\u0623\u064a\u0627\u0631"_s,
				u"\u062d\u0632\u064a\u0631\u0627\u0646"_s,
				u"\u062a\u0645\u0648\u0632"_s,
				u"\u0622\u0628"_s,
				u"\u0623\u064a\u0644\u0648\u0644"_s,
				u"\u062a\u0634\u0631\u064a\u0646 \u0627\u0644\u0623\u0648\u0644"_s,
				u"\u062a\u0634\u0631\u064a\u0646 \u0627\u0644\u062b\u0627\u0646\u064a"_s,
				u"\u0643\u0627\u0646\u0648\u0646 \u0627\u0644\u0623\u0648\u0644"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0643\u0627\u0646\u0648\u0646 \u0627\u0644\u062b\u0627\u0646\u064a"_s,
				u"\u0634\u0628\u0627\u0637"_s,
				u"\u0622\u0630\u0627\u0631"_s,
				u"\u0646\u064a\u0633\u0627\u0646"_s,
				u"\u0623\u064a\u0627\u0631"_s,
				u"\u062d\u0632\u064a\u0631\u0627\u0646"_s,
				u"\u062a\u0645\u0648\u0632"_s,
				u"\u0622\u0628"_s,
				u"\u0623\u064a\u0644\u0648\u0644"_s,
				u"\u062a\u0634\u0631\u064a\u0646 \u0627\u0644\u0623\u0648\u0644"_s,
				u"\u062a\u0634\u0631\u064a\u0646 \u0627\u0644\u062b\u0627\u0646\u064a"_s,
				u"\u0643\u0627\u0646\u0648\u0646 \u0627\u0644\u0623\u0648\u0644"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0627\u0644\u0623\u062d\u062f"_s,
				u"\u0627\u0644\u0627\u062b\u0646\u064a\u0646"_s,
				u"\u0627\u0644\u062b\u0644\u0627\u062b\u0627\u0621"_s,
				u"\u0627\u0644\u0623\u0631\u0628\u0639\u0627\u0621"_s,
				u"\u0627\u0644\u062e\u0645\u064a\u0633"_s,
				u"\u0627\u0644\u062c\u0645\u0639\u0629"_s,
				u"\u0627\u0644\u0633\u0628\u062a"_s
			}))
		})
	});
}

FormatData_ar_JO::FormatData_ar_JO() {
}

$Class* FormatData_ar_JO::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_JO, name, initialize, &_FormatData_ar_JO_ClassInfo_, allocate$FormatData_ar_JO);
	return class$;
}

$Class* FormatData_ar_JO::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun