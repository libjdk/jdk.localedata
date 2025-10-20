#include <sun/text/resources/ext/JavaTimeSupplementary_ar_JO.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_ar_JO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_ar_JO::*)()>(&JavaTimeSupplementary_ar_JO::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_ar_JO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ar_JO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ar_JO_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ar_JO($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ar_JO));
}

void JavaTimeSupplementary_ar_JO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ar_JO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedMonthNames, $new($StringArray, {
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
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0643"_s,
				u"\u0634"_s,
				u"\u0622"_s,
				u"\u0646"_s,
				u"\u0623"_s,
				u"\u062d"_s,
				u"\u062a"_s,
				u"\u0622"_s,
				u"\u0623"_s,
				u"\u062a"_s,
				u"\u062a"_s,
				u"\u0643"_s,
				""_s
			}))
		})
	});
}

JavaTimeSupplementary_ar_JO::JavaTimeSupplementary_ar_JO() {
}

$Class* JavaTimeSupplementary_ar_JO::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ar_JO, name, initialize, &_JavaTimeSupplementary_ar_JO_ClassInfo_, allocate$JavaTimeSupplementary_ar_JO);
	return class$;
}

$Class* JavaTimeSupplementary_ar_JO::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun