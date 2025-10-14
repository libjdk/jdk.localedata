#include <sun/text/resources/cldr/ext/FormatData_fr_CD.h>

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

$MethodInfo _FormatData_fr_CD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_fr_CD::*)()>(&FormatData_fr_CD::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_fr_CD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_CD",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_CD_MethodInfo_
};

$Object* allocate$FormatData_fr_CD($Class* clazz) {
	return $of($alloc(FormatData_fr_CD));
}

void FormatData_fr_CD::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_CD::getContents() {
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		"min."_s,
		"midi"_s,
		"mat."_s,
		""_s,
		"ap.m."_s,
		""_s,
		"soir"_s,
		""_s,
		"nuit"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_fr_CD::FormatData_fr_CD() {
}

$Class* FormatData_fr_CD::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_CD, name, initialize, &_FormatData_fr_CD_ClassInfo_, allocate$FormatData_fr_CD);
	return class$;
}

$Class* FormatData_fr_CD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun