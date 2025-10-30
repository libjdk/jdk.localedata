#include <sun/text/resources/cldr/ext/FormatData_ar_SA.h>

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

$MethodInfo _FormatData_ar_SA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ar_SA::*)()>(&FormatData_ar_SA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ar_SA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_SA",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_SA_MethodInfo_
};

$Object* allocate$FormatData_ar_SA($Class* clazz) {
	return $of($alloc(FormatData_ar_SA));
}

void FormatData_ar_SA::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_SA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0635"_s,
		u"\u0645"_s,
		""_s,
		""_s,
		u"\u0641\u062c\u0631\u064b\u0627"_s,
		u"\u0635"_s,
		u"\u0638\u0647\u0631\u064b\u0627"_s,
		u"\u0628\u0639\u062f \u0627\u0644\u0638\u0647\u0631"_s,
		u"\u0645\u0633\u0627\u0621\u064b"_s,
		""_s,
		u"\u0641\u064a \u0627\u0644\u0645\u0633\u0627\u0621"_s,
		u"\u0644"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				u"\u066a"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\u0644\u064a\u0633\u00a0\u0631\u0642\u0645\u064b\u0627"_s,
				""_s,
				""_s
			}))
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
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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

FormatData_ar_SA::FormatData_ar_SA() {
}

$Class* FormatData_ar_SA::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_SA, name, initialize, &_FormatData_ar_SA_ClassInfo_, allocate$FormatData_ar_SA);
	return class$;
}

$Class* FormatData_ar_SA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun