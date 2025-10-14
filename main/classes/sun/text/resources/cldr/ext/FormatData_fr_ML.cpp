#include <sun/text/resources/cldr/ext/FormatData_fr_ML.h>

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

$MethodInfo _FormatData_fr_ML_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_fr_ML::*)()>(&FormatData_fr_ML::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_fr_ML_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_ML",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_ML_MethodInfo_
};

$Object* allocate$FormatData_fr_ML($Class* clazz) {
	return $of($alloc(FormatData_fr_ML));
}

void FormatData_fr_ML::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_ML::getContents() {
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"le 1er trimestre"_s,
		u"le 2\u00e8me trimestre"_s,
		u"le 3\u00e8me trimestre"_s,
		u"le 4\u00e8me trimestre"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1} \'\u00e0\' {0}"_s,
				u"{1} \'\u00e0\' {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				"1er trimestre"_s,
				u"2\u00e8me trimestre"_s,
				u"3\u00e8me trimestre"_s,
				u"4\u00e8me trimestre"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		})
	}));
	return data;
}

FormatData_fr_ML::FormatData_fr_ML() {
}

$Class* FormatData_fr_ML::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_ML, name, initialize, &_FormatData_fr_ML_ClassInfo_, allocate$FormatData_fr_ML);
	return class$;
}

$Class* FormatData_fr_ML::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun