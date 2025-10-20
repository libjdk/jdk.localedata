#include <sun/text/resources/cldr/ext/FormatData_ar_SY.h>

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

$MethodInfo _FormatData_ar_SY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar_SY::*)()>(&FormatData_ar_SY::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_SY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_SY",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_SY_MethodInfo_
};

$Object* allocate$FormatData_ar_SY($Class* clazz) {
	return $of($alloc(FormatData_ar_SY));
}

void FormatData_ar_SY::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_SY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
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
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
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
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		})
	}));
	return data;
}

FormatData_ar_SY::FormatData_ar_SY() {
}

$Class* FormatData_ar_SY::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_SY, name, initialize, &_FormatData_ar_SY_ClassInfo_, allocate$FormatData_ar_SY);
	return class$;
}

$Class* FormatData_ar_SY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun