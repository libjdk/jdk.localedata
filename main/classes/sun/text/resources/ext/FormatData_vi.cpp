#include <sun/text/resources/ext/FormatData_vi.h>

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

$MethodInfo _FormatData_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_vi::*)()>(&FormatData_vi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_vi",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_vi_MethodInfo_
};

$Object* allocate$FormatData_vi($Class* clazz) {
	return $of($alloc(FormatData_vi));
}

void FormatData_vi::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_vi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"th\u00e1ng m\u1ed9t"_s,
				u"th\u00e1ng hai"_s,
				u"th\u00e1ng ba"_s,
				u"th\u00e1ng t\u01b0"_s,
				u"th\u00e1ng n\u0103m"_s,
				u"th\u00e1ng s\u00e1u"_s,
				u"th\u00e1ng b\u1ea3y"_s,
				u"th\u00e1ng t\u00e1m"_s,
				u"th\u00e1ng ch\u00edn"_s,
				u"th\u00e1ng m\u01b0\u1eddi"_s,
				u"th\u00e1ng m\u01b0\u1eddi m\u1ed9t"_s,
				u"th\u00e1ng m\u01b0\u1eddi hai"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"thg 1"_s,
				"thg 2"_s,
				"thg 3"_s,
				"thg 4"_s,
				"thg 5"_s,
				"thg 6"_s,
				"thg 7"_s,
				"thg 8"_s,
				"thg 9"_s,
				"thg 10"_s,
				"thg 11"_s,
				"thg 12"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"1"_s,
				"2"_s,
				"3"_s,
				"4"_s,
				"5"_s,
				"6"_s,
				"7"_s,
				"8"_s,
				"9"_s,
				"10"_s,
				"11"_s,
				"12"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Ch\u1ee7 nh\u1eadt"_s,
				u"Th\u1ee9 hai"_s,
				u"Th\u1ee9 ba"_s,
				u"Th\u1ee9 t\u01b0"_s,
				u"Th\u1ee9 n\u0103m"_s,
				u"Th\u1ee9 s\u00e1u"_s,
				u"Th\u1ee9 b\u1ea3y"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"CN"_s,
				"Th 2"_s,
				"Th 3"_s,
				"Th 4"_s,
				"Th 5"_s,
				"Th 6"_s,
				"Th 7"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"CN"_s,
				"T2"_s,
				"T3"_s,
				"T4"_s,
				"T5"_s,
				"T6"_s,
				"T7"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"CN"_s,
				"T2"_s,
				"T3"_s,
				"T4"_s,
				"T5"_s,
				"T6"_s,
				"T7"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"SA"_s,
				"CH"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"tr. CN"_s,
				"sau CN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\ufffd"_s
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
				u"EEEE, \'ng\u00e0y\' dd MMMM \'n\u0103m\' yyyy"_s,
				u"\'Ng\u00e0y\' dd \'th\u00e1ng\' M \'n\u0103m\' yyyy"_s,
				"dd-MM-yyyy"_s,
				"dd/MM/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{0} {1}"_s}))
		})
	});
}

FormatData_vi::FormatData_vi() {
}

$Class* FormatData_vi::load$($String* name, bool initialize) {
	$loadClass(FormatData_vi, name, initialize, &_FormatData_vi_ClassInfo_, allocate$FormatData_vi);
	return class$;
}

$Class* FormatData_vi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun