#include <sun/text/resources/ext/FormatData_mt.h>

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

$MethodInfo _FormatData_mt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_mt::*)()>(&FormatData_mt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_mt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_mt",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mt_MethodInfo_
};

$Object* allocate$FormatData_mt($Class* clazz) {
	return $of($alloc(FormatData_mt));
}

void FormatData_mt::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_mt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"Jannar"_s,
				"Frar"_s,
				"Marzu"_s,
				"April"_s,
				"Mejju"_s,
				u"\u0120unju"_s,
				"Lulju"_s,
				"Awwissu"_s,
				"Settembru"_s,
				"Ottubru"_s,
				"Novembru"_s,
				u"Di\u010bembru"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Fra"_s,
				"Mar"_s,
				"Apr"_s,
				"Mej"_s,
				u"\u0120un"_s,
				"Lul"_s,
				"Aww"_s,
				"Set"_s,
				"Ott"_s,
				"Nov"_s,
				u"Di\u010b"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				u"\u0120"_s,
				"L"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Il-\u0126add"_s,
				"It-Tnejn"_s,
				"It-Tlieta"_s,
				u"L-Erbg\u0127a"_s,
				u"Il-\u0126amis"_s,
				u"Il-\u0120img\u0127a"_s,
				"Is-Sibt"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0126ad"_s,
				"Tne"_s,
				"Tli"_s,
				"Erb"_s,
				u"\u0126am"_s,
				u"\u0120im"_s,
				"Sib"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u0126"_s,
				"T"_s,
				"T"_s,
				"E"_s,
				u"\u0126"_s,
				u"\u0120"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"QN"_s,
				"WN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"QK"_s,
				"WK"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4 #,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d \'ta\u2019\' MMMM yyyy"_s,
				u"d \'ta\u2019\' MMMM yyyy"_s,
				"dd MMM yyyy"_s,
				"dd/MM/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_mt::FormatData_mt() {
}

$Class* FormatData_mt::load$($String* name, bool initialize) {
	$loadClass(FormatData_mt, name, initialize, &_FormatData_mt_ClassInfo_, allocate$FormatData_mt);
	return class$;
}

$Class* FormatData_mt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun