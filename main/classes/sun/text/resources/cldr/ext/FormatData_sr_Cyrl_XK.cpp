#include <sun/text/resources/cldr/ext/FormatData_sr_Cyrl_XK.h>

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

$MethodInfo _FormatData_sr_Cyrl_XK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sr_Cyrl_XK::*)()>(&FormatData_sr_Cyrl_XK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sr_Cyrl_XK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sr_Cyrl_XK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_Cyrl_XK_MethodInfo_
};

$Object* allocate$FormatData_sr_Cyrl_XK($Class* clazz) {
	return $of($alloc(FormatData_sr_Cyrl_XK));
}

void FormatData_sr_Cyrl_XK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_Cyrl_XK::getContents() {
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0458\u0430\u043d"_s,
		u"\u0444\u0435\u0431"_s,
		u"\u043c\u0430\u0440\u0442"_s,
		u"\u0430\u043f\u0440"_s,
		u"\u043c\u0430\u0458"_s,
		u"\u0458\u0443\u043d"_s,
		u"\u0458\u0443\u043b"_s,
		u"\u0430\u0432\u0433"_s,
		u"\u0441\u0435\u043f\u0442"_s,
		u"\u043e\u043a\u0442"_s,
		u"\u043d\u043e\u0432"_s,
		u"\u0434\u0435\u0446"_s,
		""_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u043f\u0440\u0435 \u043f\u043e\u0434\u043d\u0435"_s,
		u"\u043f\u043e \u043f\u043e\u0434\u043d\u0435"_s,
		u"\u043f\u043e\u043d\u043e\u045b"_s,
		u"\u043f\u043e\u0434\u043d\u0435"_s,
		u"\u0458\u0443\u0442\u0440\u043e"_s,
		""_s,
		u"\u043f\u043e \u043f\u043e\u0434."_s,
		""_s,
		u"\u0443\u0432\u0435\u0447\u0435"_s,
		""_s,
		u"\u043d\u043e\u045b\u0443"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"\u043f\u043e\u043d\u043e\u045b"_s,
		u"\u043f\u043e\u0434\u043d\u0435"_s,
		u"\u0458\u0443\u0442\u0440\u043e"_s,
		""_s,
		u"\u043f\u043e \u043f\u043e\u0434."_s,
		""_s,
		u"\u0432\u0435\u0447\u0435"_s,
		""_s,
		u"\u043d\u043e\u045b"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_sr_Cyrl_XK::FormatData_sr_Cyrl_XK() {
}

$Class* FormatData_sr_Cyrl_XK::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_Cyrl_XK, name, initialize, &_FormatData_sr_Cyrl_XK_ClassInfo_, allocate$FormatData_sr_Cyrl_XK);
	return class$;
}

$Class* FormatData_sr_Cyrl_XK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun