#include <sun/text/resources/ext/FormatData_is.h>

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

$MethodInfo _FormatData_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_is::*)()>(&FormatData_is::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_is",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_is_MethodInfo_
};

$Object* allocate$FormatData_is($Class* clazz) {
	return $of($alloc(FormatData_is));
}

void FormatData_is::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_is::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"jan\u00faar"_s,
				u"febr\u00faar"_s,
				"mars"_s,
				u"apr\u00edl"_s,
				u"ma\u00ed"_s,
				u"j\u00fan\u00ed"_s,
				u"j\u00fal\u00ed"_s,
				u"\u00e1g\u00fast"_s,
				"september"_s,
				u"okt\u00f3ber"_s,
				u"n\u00f3vember"_s,
				"desember"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				u"ma\u00ed"_s,
				u"j\u00fan."_s,
				u"j\u00fal."_s,
				u"\u00e1g\u00fa."_s,
				"sep."_s,
				"okt."_s,
				u"n\u00f3v."_s,
				"des."_s,
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
				"J"_s,
				"J"_s,
				u"\u00c1"_s,
				"L"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"j"_s,
				"f"_s,
				"m"_s,
				"a"_s,
				"m"_s,
				"j"_s,
				"j"_s,
				u"\u00e1"_s,
				"s"_s,
				"o"_s,
				"n"_s,
				"d"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"sunnudagur"_s,
				u"m\u00e1nudagur"_s,
				u"\u00feri\u00f0judagur"_s,
				u"mi\u00f0vikudagur"_s,
				"fimmtudagur"_s,
				u"f\u00f6studagur"_s,
				"laugardagur"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"sun."_s,
				u"m\u00e1n."_s,
				u"\u00feri."_s,
				u"mi\u00f0."_s,
				"fim."_s,
				u"f\u00f6s."_s,
				"lau."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"M"_s,
				u"\u00de"_s,
				"M"_s,
				"F"_s,
				"F"_s,
				"L"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"s"_s,
				"m"_s,
				u"\u00fe"_s,
				"m"_s,
				"f"_s,
				"f"_s,
				"l"_s
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
				"d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yyyy"_s
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

FormatData_is::FormatData_is() {
}

$Class* FormatData_is::load$($String* name, bool initialize) {
	$loadClass(FormatData_is, name, initialize, &_FormatData_is_ClassInfo_, allocate$FormatData_is);
	return class$;
}

$Class* FormatData_is::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun