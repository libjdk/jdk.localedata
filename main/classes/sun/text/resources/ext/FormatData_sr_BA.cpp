#include <sun/text/resources/ext/FormatData_sr_BA.h>

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

$MethodInfo _FormatData_sr_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sr_BA::*)()>(&FormatData_sr_BA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sr_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr_BA",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_BA_MethodInfo_
};

$Object* allocate$FormatData_sr_BA($Class* clazz) {
	return $of($alloc(FormatData_sr_BA));
}

void FormatData_sr_BA::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0458\u0430\u043d\u0443\u0430\u0440"_s,
				u"\u0444\u0435\u0431\u0440\u0443\u0430\u0440"_s,
				u"\u043c\u0430\u0440\u0442"_s,
				u"\u0430\u043f\u0440\u0438\u043b"_s,
				u"\u043c\u0430\u0458"_s,
				u"\u0458\u0443\u043d\u0438"_s,
				u"\u0458\u0443\u043b\u0438"_s,
				u"\u0430\u0432\u0433\u0443\u0441\u0442"_s,
				u"\u0441\u0435\u043f\u0442\u0435\u043c\u0431\u0430\u0440"_s,
				u"\u043e\u043a\u0442\u043e\u0431\u0430\u0440"_s,
				u"\u043d\u043e\u0432\u0435\u043c\u0431\u0430\u0440"_s,
				u"\u0434\u0435\u0446\u0435\u043c\u0431\u0430\u0440"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"\u043d\u0435\u0434\u0435\u0459\u0430"_s,
				u"\u043f\u043e\u043d\u0435\u0434\u0435\u0459\u0430\u043a"_s,
				u"\u0443\u0442\u043e\u0440\u0430\u043a"_s,
				u"\u0441\u0440\u0438\u0458\u0435\u0434\u0430"_s,
				u"\u0447\u0435\u0442\u0432\u0440\u0442\u0430\u043a"_s,
				u"\u043f\u0435\u0442\u0430\u043a"_s,
				u"\u0441\u0443\u0431\u043e\u0442\u0430"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u043d\u0435\u0434"_s,
				u"\u043f\u043e\u043d"_s,
				u"\u0443\u0442\u043e"_s,
				u"\u0441\u0440\u0438"_s,
				u"\u0447\u0435\u0442"_s,
				u"\u043f\u0435\u0442"_s,
				u"\u0441\u0443\u0431"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"HH \'\u0447\u0430\u0441\u043e\u0432\u0430\', mm \'\u043c\u0438\u043d\u0443\u0442\u0430\', ss\' \u0441\u0435\u043a\u0443\u043d\u0434\u0438\'"_s,
				"HH.mm.ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd. MMMM yyyy."_s,
				"dd. MMMM yyyy."_s,
				"yyyy-MM-dd"_s,
				"yy-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_sr_BA::FormatData_sr_BA() {
}

$Class* FormatData_sr_BA::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_BA, name, initialize, &_FormatData_sr_BA_ClassInfo_, allocate$FormatData_sr_BA);
	return class$;
}

$Class* FormatData_sr_BA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun