#include <sun/text/resources/ext/FormatData_cs.h>

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

$MethodInfo _FormatData_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_cs::*)()>(&FormatData_cs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_cs",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_cs_MethodInfo_
};

$Object* allocate$FormatData_cs($Class* clazz) {
	return $of($alloc(FormatData_cs));
}

void FormatData_cs::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_cs::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"ledna"_s,
				u"\u00fanora"_s,
				u"b\u0159ezna"_s,
				"dubna"_s,
				u"kv\u011btna"_s,
				u"\u010dervna"_s,
				u"\u010dervence"_s,
				"srpna"_s,
				u"z\u00e1\u0159\u00ed"_s,
				u"\u0159\u00edjna"_s,
				"listopadu"_s,
				"prosince"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"leden"_s,
				u"\u00fanor"_s,
				u"b\u0159ezen"_s,
				"duben"_s,
				u"kv\u011bten"_s,
				u"\u010derven"_s,
				u"\u010dervenec"_s,
				"srpen"_s,
				u"z\u00e1\u0159\u00ed"_s,
				u"\u0159\u00edjen"_s,
				"listopad"_s,
				"prosinec"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Led"_s,
				u"\u00dano"_s,
				u"B\u0159e"_s,
				"Dub"_s,
				u"Kv\u011b"_s,
				u"\u010cer"_s,
				u"\u010cvc"_s,
				"Srp"_s,
				u"Z\u00e1\u0159"_s,
				u"\u0158\u00edj"_s,
				"Lis"_s,
				"Pro"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"I"_s,
				"II"_s,
				"III"_s,
				"IV"_s,
				"V"_s,
				"VI"_s,
				"VII"_s,
				"VIII"_s,
				"IX"_s,
				"X"_s,
				"XI"_s,
				"XII"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"l"_s,
				u"\u00fa"_s,
				"b"_s,
				"d"_s,
				"k"_s,
				u"\u010d"_s,
				u"\u010d"_s,
				"s"_s,
				"z"_s,
				u"\u0159"_s,
				"l"_s,
				"p"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"l"_s,
				u"\u00fa"_s,
				"b"_s,
				"d"_s,
				"k"_s,
				u"\u010d"_s,
				u"\u010d"_s,
				"s"_s,
				"z"_s,
				u"\u0159"_s,
				"l"_s,
				"p"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Ned\u011ble"_s,
				u"Pond\u011bl\u00ed"_s,
				u"\u00dater\u00fd"_s,
				u"St\u0159eda"_s,
				u"\u010ctvrtek"_s,
				u"P\u00e1tek"_s,
				"Sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"ned\u011ble"_s,
				u"pond\u011bl\u00ed"_s,
				u"\u00fater\u00fd"_s,
				u"st\u0159eda"_s,
				u"\u010dtvrtek"_s,
				u"p\u00e1tek"_s,
				"sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Ne"_s,
				"Po"_s,
				u"\u00dat"_s,
				"St"_s,
				u"\u010ct"_s,
				u"P\u00e1"_s,
				"So"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ne"_s,
				"po"_s,
				u"\u00fat"_s,
				"st"_s,
				u"\u010dt"_s,
				u"p\u00e1"_s,
				"so"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				u"\u00da"_s,
				"S"_s,
				u"\u010c"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				u"\u00da"_s,
				"S"_s,
				u"\u010c"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"dop."_s,
				"odp."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"p\u0159.Kr."_s,
				"po Kr."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"p\u0159. n. l."_s,
				"n. l."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"p\u0159.n.l."_s,
				"n. l."_s
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
				"EEEE, d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GuMtkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_cs::FormatData_cs() {
}

$Class* FormatData_cs::load$($String* name, bool initialize) {
	$loadClass(FormatData_cs, name, initialize, &_FormatData_cs_ClassInfo_, allocate$FormatData_cs);
	return class$;
}

$Class* FormatData_cs::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun