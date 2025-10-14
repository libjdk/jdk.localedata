#include <sun/text/resources/ext/FormatData_lt.h>

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

$MethodInfo _FormatData_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_lt::*)()>(&FormatData_lt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_lt",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lt_MethodInfo_
};

$Object* allocate$FormatData_lt($Class* clazz) {
	return $of($alloc(FormatData_lt));
}

void FormatData_lt::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_lt::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"sausio"_s,
				"vasaris"_s,
				"kovas"_s,
				"balandis"_s,
				u"gegu\u017e\u0117"_s,
				u"bir\u017eelis"_s,
				"liepa"_s,
				u"rugpj\u016btis"_s,
				u"rugs\u0117jis"_s,
				"spalis"_s,
				"lapkritis"_s,
				"gruodis"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"Sausio"_s,
				"Vasario"_s,
				"Kovo"_s,
				u"Baland\u017eio"_s,
				u"Gegu\u017e\u0117s"_s,
				u"Bir\u017eelio"_s,
				"Liepos"_s,
				u"Rugpj\u016b\u010dio"_s,
				u"Rugs\u0117jo"_s,
				"Spalio"_s,
				u"Lapkri\u010dio"_s,
				u"Gruod\u017eio"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Sau"_s,
				"Vas"_s,
				"Kov"_s,
				"Bal"_s,
				"Geg"_s,
				"Bir"_s,
				"Lie"_s,
				"Rgp"_s,
				"Rgs"_s,
				"Spa"_s,
				"Lap"_s,
				"Grd"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Saus."_s,
				"Vas."_s,
				"Kov."_s,
				"Bal."_s,
				"Geg."_s,
				"Bir."_s,
				"Liep."_s,
				"Rugp."_s,
				"Rugs."_s,
				"Spal."_s,
				"Lapkr."_s,
				"Gruod."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"V"_s,
				"K"_s,
				"B"_s,
				"G"_s,
				"B"_s,
				"L"_s,
				"R"_s,
				"R"_s,
				"S"_s,
				"L"_s,
				"G"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"V"_s,
				"K"_s,
				"B"_s,
				"G"_s,
				"B"_s,
				"L"_s,
				"R"_s,
				"R"_s,
				"S"_s,
				"L"_s,
				"G"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"Sekmadienis"_s,
				"Pirmadienis"_s,
				"Antradienis"_s,
				u"Tre\u010diadienis"_s,
				"Ketvirtadienis"_s,
				"Penktadienis"_s,
				u"\u0160e\u0161tadienis"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"sekmadienis"_s,
				"pirmadienis"_s,
				"antradienis"_s,
				u"tre\u010diadienis"_s,
				"ketvirtadienis"_s,
				"penktadienis"_s,
				u"\u0161e\u0161tadienis"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Sk"_s,
				"Pr"_s,
				"An"_s,
				"Tr"_s,
				"Kt"_s,
				"Pn"_s,
				u"\u0160t"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Sk"_s,
				"Pr"_s,
				"An"_s,
				"Tr"_s,
				"Kt"_s,
				"Pn"_s,
				u"\u0160t"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"P"_s,
				"A"_s,
				"T"_s,
				"K"_s,
				"P"_s,
				u"\u0160"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"P"_s,
				"A"_s,
				"T"_s,
				"K"_s,
				"P"_s,
				u"\u0160"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"pr.Kr."_s,
				"po.Kr."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"pr. Kr."_s,
				"po Kr."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u"\u00a0"_s,
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
				"HH.mm.ss z"_s,
				"HH.mm.ss z"_s,
				"HH.mm.ss"_s,
				"HH.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, yyyy, MMMM d"_s,
				"EEEE, yyyy, MMMM d"_s,
				"yyyy-MM-dd"_s,
				"yy.M.d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_lt::FormatData_lt() {
}

$Class* FormatData_lt::load$($String* name, bool initialize) {
	$loadClass(FormatData_lt, name, initialize, &_FormatData_lt_ClassInfo_, allocate$FormatData_lt);
	return class$;
}

$Class* FormatData_lt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun