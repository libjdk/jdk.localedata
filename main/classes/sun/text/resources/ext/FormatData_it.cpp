#include <sun/text/resources/ext/FormatData_it.h>

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

$MethodInfo _FormatData_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_it::*)()>(&FormatData_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_it",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_it_MethodInfo_
};

$Object* allocate$FormatData_it($Class* clazz) {
	return $of($alloc(FormatData_it));
}

void FormatData_it::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"gennaio"_s,
				"febbraio"_s,
				"marzo"_s,
				"aprile"_s,
				"maggio"_s,
				"giugno"_s,
				"luglio"_s,
				"agosto"_s,
				"settembre"_s,
				"ottobre"_s,
				"novembre"_s,
				"dicembre"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"Gennaio"_s,
				"Febbraio"_s,
				"Marzo"_s,
				"Aprile"_s,
				"Maggio"_s,
				"Giugno"_s,
				"Luglio"_s,
				"Agosto"_s,
				"Settembre"_s,
				"Ottobre"_s,
				"Novembre"_s,
				"Dicembre"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"gen"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				"mag"_s,
				"giu"_s,
				"lug"_s,
				"ago"_s,
				"set"_s,
				"ott"_s,
				"nov"_s,
				"dic"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"G"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"G"_s,
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
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"G"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"G"_s,
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
				"domenica"_s,
				u"luned\u00ec"_s,
				u"marted\u00ec"_s,
				u"mercoled\u00ec"_s,
				u"gioved\u00ec"_s,
				u"venerd\u00ec"_s,
				"sabato"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"Domenica"_s,
				u"Luned\u00ec"_s,
				u"Marted\u00ec"_s,
				u"Mercoled\u00ec"_s,
				u"Gioved\u00ec"_s,
				u"Venerd\u00ec"_s,
				"Sabato"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"dom"_s,
				"lun"_s,
				"mar"_s,
				"mer"_s,
				"gio"_s,
				"ven"_s,
				"sab"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"M"_s,
				"G"_s,
				"V"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"dopo Cristo"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"aC"_s,
				"dC"_s
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
				"H.mm.ss z"_s,
				"H.mm.ss z"_s,
				"H.mm.ss"_s,
				"H.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d-MMM-yyyy"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_it::FormatData_it() {
}

$Class* FormatData_it::load$($String* name, bool initialize) {
	$loadClass(FormatData_it, name, initialize, &_FormatData_it_ClassInfo_, allocate$FormatData_it);
	return class$;
}

$Class* FormatData_it::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun