#include <sun/text/resources/ext/FormatData_hr.h>

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

$MethodInfo _FormatData_hr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_hr::*)()>(&FormatData_hr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_hr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_hr",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hr_MethodInfo_
};

$Object* allocate$FormatData_hr($Class* clazz) {
	return $of($alloc(FormatData_hr));
}

void FormatData_hr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_hr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		"prije R.O.C."_s,
		"R.O.C."_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"sije\u010dnja"_s,
				u"velja\u010de"_s,
				u"o\u017eujka"_s,
				"travnja"_s,
				"svibnja"_s,
				"lipnja"_s,
				"srpnja"_s,
				"kolovoza"_s,
				"rujna"_s,
				"listopada"_s,
				"studenoga"_s,
				"prosinca"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"sije\u010danj"_s,
				u"velja\u010da"_s,
				u"o\u017eujak"_s,
				"travanj"_s,
				"svibanj"_s,
				"lipanj"_s,
				"srpanj"_s,
				"kolovoz"_s,
				"rujan"_s,
				"listopad"_s,
				"studeni"_s,
				"prosinac"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"sij"_s,
				"velj"_s,
				u"o\u017eu"_s,
				"tra"_s,
				"svi"_s,
				"lip"_s,
				"srp"_s,
				"kol"_s,
				"ruj"_s,
				"lis"_s,
				"stu"_s,
				"pro"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"sij"_s,
				"vel"_s,
				u"o\u017eu"_s,
				"tra"_s,
				"svi"_s,
				"lip"_s,
				"srp"_s,
				"kol"_s,
				"ruj"_s,
				"lis"_s,
				"stu"_s,
				"pro"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"1."_s,
				"2."_s,
				"3."_s,
				"4."_s,
				"5."_s,
				"6."_s,
				"7."_s,
				"8."_s,
				"9."_s,
				"10."_s,
				"11."_s,
				"12."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"1."_s,
				"2."_s,
				"3."_s,
				"4."_s,
				"5."_s,
				"6."_s,
				"7."_s,
				"8."_s,
				"9."_s,
				"10."_s,
				"11."_s,
				"12."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"nedjelja"_s,
				"ponedjeljak"_s,
				"utorak"_s,
				"srijeda"_s,
				u"\u010detvrtak"_s,
				"petak"_s,
				"subota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"nedjelja"_s,
				"ponedjeljak"_s,
				"utorak"_s,
				"srijeda"_s,
				u"\u010detvrtak"_s,
				"petak"_s,
				"subota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ned"_s,
				"pon"_s,
				"uto"_s,
				"sri"_s,
				u"\u010det"_s,
				"pet"_s,
				"sub"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ned"_s,
				"pon"_s,
				"uto"_s,
				"sri"_s,
				u"\u010det"_s,
				"pet"_s,
				"sub"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				"U"_s,
				"S"_s,
				u"\u010c"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"n"_s,
				"p"_s,
				"u"_s,
				"s"_s,
				u"\u010d"_s,
				"p"_s,
				"s"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"Prije Krista"_s,
				"Poslije Krista"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"p. n. e."_s,
				"A. D."_s
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
				"yyyy. MMMM dd"_s,
				"yyyy. MMMM dd"_s,
				"yyyy.MM.dd"_s,
				"yyyy.MM.dd"_s
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

FormatData_hr::FormatData_hr() {
}

$Class* FormatData_hr::load$($String* name, bool initialize) {
	$loadClass(FormatData_hr, name, initialize, &_FormatData_hr_ClassInfo_, allocate$FormatData_hr);
	return class$;
}

$Class* FormatData_hr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun