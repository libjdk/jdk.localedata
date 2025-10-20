#include <sun/text/resources/ext/FormatData_ga.h>

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

$MethodInfo _FormatData_ga_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ga::*)()>(&FormatData_ga::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ga_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ga",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ga_MethodInfo_
};

$Object* allocate$FormatData_ga($Class* clazz) {
	return $of($alloc(FormatData_ga));
}

void FormatData_ga::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ga::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"Ean\u00e1ir"_s,
				"Feabhra"_s,
				u"M\u00e1rta"_s,
				u"Aibre\u00e1n"_s,
				"Bealtaine"_s,
				"Meitheamh"_s,
				u"I\u00fail"_s,
				u"L\u00fanasa"_s,
				u"Me\u00e1n F\u00f3mhair"_s,
				u"Deireadh F\u00f3mhair"_s,
				"Samhain"_s,
				"Nollaig"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Ean"_s,
				"Feabh"_s,
				u"M\u00e1rta"_s,
				"Aib"_s,
				"Beal"_s,
				"Meith"_s,
				u"I\u00fail"_s,
				u"L\u00fan"_s,
				u"MF\u00f3mh"_s,
				u"DF\u00f3mh"_s,
				"Samh"_s,
				"Noll"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"E"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"B"_s,
				"M"_s,
				"I"_s,
				"L"_s,
				"M"_s,
				"D"_s,
				"S"_s,
				"N"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"D\u00e9 Domhnaigh"_s,
				u"D\u00e9 Luain"_s,
				u"D\u00e9 M\u00e1irt"_s,
				u"D\u00e9 C\u00e9adaoin"_s,
				u"D\u00e9ardaoin"_s,
				u"D\u00e9 hAoine"_s,
				u"D\u00e9 Sathairn"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Domh"_s,
				"Luan"_s,
				u"M\u00e1irt"_s,
				u"C\u00e9ad"_s,
				u"D\u00e9ar"_s,
				"Aoine"_s,
				"Sath"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"a.m."_s,
				"p.m."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"RC"_s,
				"AD"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"RC"_s,
				"AD"_s
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
				"EEEE, yyyy MMMM dd"_s,
				"yyyy MMMM d"_s,
				"yyyy MMM d"_s,
				"yy/MM/dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("RbMLkUnsSElFtTauKcZ"_s)
		})
	});
}

FormatData_ga::FormatData_ga() {
}

$Class* FormatData_ga::load$($String* name, bool initialize) {
	$loadClass(FormatData_ga, name, initialize, &_FormatData_ga_ClassInfo_, allocate$FormatData_ga);
	return class$;
}

$Class* FormatData_ga::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun