#include <sun/text/resources/ext/FormatData_lv.h>

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

$MethodInfo _FormatData_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_lv::*)()>(&FormatData_lv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_lv",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lv_MethodInfo_
};

$Object* allocate$FormatData_lv($Class* clazz) {
	return $of($alloc(FormatData_lv));
}

void FormatData_lv::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_lv::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"janv\u0101ris"_s,
				u"febru\u0101ris"_s,
				"marts"_s,
				u"apr\u012blis"_s,
				"maijs"_s,
				u"j\u016bnijs"_s,
				u"j\u016blijs"_s,
				"augusts"_s,
				"septembris"_s,
				"oktobris"_s,
				"novembris"_s,
				"decembris"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"janv."_s,
				"febr."_s,
				"marts"_s,
				"apr."_s,
				"maijs"_s,
				u"j\u016bn."_s,
				u"j\u016bl."_s,
				"aug."_s,
				"sept."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Feb"_s,
				"Mar"_s,
				"Apr"_s,
				"Maijs"_s,
				u"J\u016bn"_s,
				u"J\u016bl"_s,
				"Aug"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Dec"_s,
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
				u"sv\u0113tdiena"_s,
				"pirmdiena"_s,
				"otrdiena"_s,
				u"tre\u0161diena"_s,
				"ceturtdiena"_s,
				"piektdiena"_s,
				"sestdiena"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Sv"_s,
				"P"_s,
				"O"_s,
				"T"_s,
				"C"_s,
				"Pk"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"P"_s,
				"O"_s,
				"T"_s,
				"C"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"pm\u0113"_s,
				u"m\u0113"_s
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
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, yyyy, d MMMM"_s,
				"EEEE, yyyy, d MMMM"_s,
				"yyyy.d.M"_s,
				"yy.d.M"_s
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

FormatData_lv::FormatData_lv() {
}

$Class* FormatData_lv::load$($String* name, bool initialize) {
	$loadClass(FormatData_lv, name, initialize, &_FormatData_lv_ClassInfo_, allocate$FormatData_lv);
	return class$;
}

$Class* FormatData_lv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun