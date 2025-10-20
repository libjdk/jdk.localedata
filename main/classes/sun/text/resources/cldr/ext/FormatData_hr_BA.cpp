#include <sun/text/resources/cldr/ext/FormatData_hr_BA.h>

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

$MethodInfo _FormatData_hr_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_hr_BA::*)()>(&FormatData_hr_BA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_hr_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_hr_BA",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hr_BA_MethodInfo_
};

$Object* allocate$FormatData_hr_BA($Class* clazz) {
	return $of($alloc(FormatData_hr_BA));
}

void FormatData_hr_BA::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_hr_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"1. kv."_s,
		"2. kv."_s,
		"3. kv."_s,
		"4. kv."_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				"U"_s,
				"S"_s,
				u"\u010c"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM y."_s,
				"d. MMMM y."_s,
				"d. MMM y."_s,
				"d. M. yy."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		})
	}));
	return data;
}

FormatData_hr_BA::FormatData_hr_BA() {
}

$Class* FormatData_hr_BA::load$($String* name, bool initialize) {
	$loadClass(FormatData_hr_BA, name, initialize, &_FormatData_hr_BA_ClassInfo_, allocate$FormatData_hr_BA);
	return class$;
}

$Class* FormatData_hr_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun