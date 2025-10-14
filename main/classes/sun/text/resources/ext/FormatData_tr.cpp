#include <sun/text/resources/ext/FormatData_tr.h>

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

$MethodInfo _FormatData_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_tr::*)()>(&FormatData_tr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_tr",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_tr_MethodInfo_
};

$Object* allocate$FormatData_tr($Class* clazz) {
	return $of($alloc(FormatData_tr));
}

void FormatData_tr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_tr::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"Ocak"_s,
				u"\u015eubat"_s,
				"Mart"_s,
				"Nisan"_s,
				u"May\u0131s"_s,
				"Haziran"_s,
				"Temmuz"_s,
				u"A\u011fustos"_s,
				u"Eyl\u00fcl"_s,
				"Ekim"_s,
				u"Kas\u0131m"_s,
				u"Aral\u0131k"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"Ocak"_s,
				u"\u015eubat"_s,
				"Mart"_s,
				"Nisan"_s,
				u"May\u0131s"_s,
				"Haziran"_s,
				"Temmuz"_s,
				u"A\u011fustos"_s,
				u"Eyl\u00fcl"_s,
				"Ekim"_s,
				u"Kas\u0131m"_s,
				u"Aral\u0131k"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Oca"_s,
				u"\u015eub"_s,
				"Mar"_s,
				"Nis"_s,
				"May"_s,
				"Haz"_s,
				"Tem"_s,
				u"A\u011fu"_s,
				"Eyl"_s,
				"Eki"_s,
				"Kas"_s,
				"Ara"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Oca"_s,
				u"\u015eub"_s,
				"Mar"_s,
				"Nis"_s,
				"May"_s,
				"Haz"_s,
				"Tem"_s,
				u"A\u011fu"_s,
				"Eyl"_s,
				"Eki"_s,
				"Kas"_s,
				"Ara"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"O"_s,
				u"\u015e"_s,
				"M"_s,
				"N"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"A"_s,
				"E"_s,
				"E"_s,
				"K"_s,
				"A"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"O"_s,
				u"\u015e"_s,
				"M"_s,
				"N"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"A"_s,
				"E"_s,
				"E"_s,
				"K"_s,
				"A"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"Pazar"_s,
				"Pazartesi"_s,
				u"Sal\u0131"_s,
				u"\u00c7ar\u015famba"_s,
				u"Per\u015fembe"_s,
				"Cuma"_s,
				"Cumartesi"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"Pazar"_s,
				"Pazartesi"_s,
				u"Sal\u0131"_s,
				u"\u00c7ar\u015famba"_s,
				u"Per\u015fembe"_s,
				"Cuma"_s,
				"Cumartesi"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Paz"_s,
				"Pzt"_s,
				"Sal"_s,
				u"\u00c7ar"_s,
				"Per"_s,
				"Cum"_s,
				"Cmt"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Paz"_s,
				"Pzt"_s,
				"Sal"_s,
				u"\u00c7ar"_s,
				"Per"_s,
				"Cum"_s,
				"Cmt"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"P"_s,
				"P"_s,
				"S"_s,
				u"\u00c7"_s,
				"P"_s,
				"C"_s,
				"C"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"P"_s,
				"P"_s,
				"S"_s,
				u"\u00c7"_s,
				"P"_s,
				"C"_s,
				"C"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"Milattan \u00d6nce"_s,
				"Milattan Sonra"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"M\u00d6"_s,
				"MS"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"#,##0.00 \u00a4;-#,##0.00 \u00a4"_s,
				"% #,##0"_s
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
				"dd MMMM yyyy EEEE"_s,
				"dd MMMM yyyy EEEE"_s,
				"dd.MMM.yyyy"_s,
				"dd.MM.yyyy"_s
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

FormatData_tr::FormatData_tr() {
}

$Class* FormatData_tr::load$($String* name, bool initialize) {
	$loadClass(FormatData_tr, name, initialize, &_FormatData_tr_ClassInfo_, allocate$FormatData_tr);
	return class$;
}

$Class* FormatData_tr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun