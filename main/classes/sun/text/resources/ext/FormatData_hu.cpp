#include <sun/text/resources/ext/FormatData_hu.h>

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

$MethodInfo _FormatData_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_hu::*)()>(&FormatData_hu::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_hu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_hu",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hu_MethodInfo_
};

$Object* allocate$FormatData_hu($Class* clazz) {
	return $of($alloc(FormatData_hu));
}

void FormatData_hu::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_hu::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"janu\u00e1r"_s,
				u"febru\u00e1r"_s,
				u"m\u00e1rcius"_s,
				u"\u00e1prilis"_s,
				u"m\u00e1jus"_s,
				u"j\u00fanius"_s,
				u"j\u00falius"_s,
				"augusztus"_s,
				"szeptember"_s,
				u"okt\u00f3ber"_s,
				"november"_s,
				"december"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"janu\u00e1r"_s,
				u"febru\u00e1r"_s,
				u"m\u00e1rcius"_s,
				u"\u00e1prilis"_s,
				u"m\u00e1jus"_s,
				u"j\u00fanius"_s,
				u"j\u00falius"_s,
				"augusztus"_s,
				"szeptember"_s,
				u"okt\u00f3ber"_s,
				"november"_s,
				"december"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan."_s,
				"febr."_s,
				u"m\u00e1rc."_s,
				u"\u00e1pr."_s,
				u"m\u00e1j."_s,
				u"j\u00fan."_s,
				u"j\u00fal."_s,
				"aug."_s,
				"szept."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan."_s,
				"febr."_s,
				u"m\u00e1rc."_s,
				u"\u00e1pr."_s,
				u"m\u00e1j."_s,
				u"j\u00fan."_s,
				u"j\u00fal."_s,
				"aug."_s,
				"szept."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				u"\u00c1"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"Sz"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				u"\u00c1"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"Sz"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"vas\u00e1rnap"_s,
				u"h\u00e9tf\u0151"_s,
				"kedd"_s,
				"szerda"_s,
				u"cs\u00fct\u00f6rt\u00f6k"_s,
				u"p\u00e9ntek"_s,
				"szombat"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"vas\u00e1rnap"_s,
				u"h\u00e9tf\u0151"_s,
				"kedd"_s,
				"szerda"_s,
				u"cs\u00fct\u00f6rt\u00f6k"_s,
				u"p\u00e9ntek"_s,
				"szombat"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"V"_s,
				"H"_s,
				"K"_s,
				"Sze"_s,
				"Cs"_s,
				"P"_s,
				"Szo"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"V"_s,
				"H"_s,
				"K"_s,
				"Sze"_s,
				"Cs"_s,
				"P"_s,
				"Szo"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"V"_s,
				"H"_s,
				"K"_s,
				"Sz"_s,
				"Cs"_s,
				"P"_s,
				"Sz"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"V"_s,
				"H"_s,
				"K"_s,
				"Sz"_s,
				"Cs"_s,
				"P"_s,
				"Sz"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"DE"_s,
				"DU"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"i.e."_s,
				"i.u."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"i. e."_s,
				"i. sz."_s
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
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"yyyy. MMMM d."_s,
				"yyyy. MMMM d."_s,
				"yyyy.MM.dd."_s,
				"yyyy.MM.dd."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BK"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BK"_s
			}))
		})
	});
}

FormatData_hu::FormatData_hu() {
}

$Class* FormatData_hu::load$($String* name, bool initialize) {
	$loadClass(FormatData_hu, name, initialize, &_FormatData_hu_ClassInfo_, allocate$FormatData_hu);
	return class$;
}

$Class* FormatData_hu::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun