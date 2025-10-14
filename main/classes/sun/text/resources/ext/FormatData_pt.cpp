#include <sun/text/resources/ext/FormatData_pt.h>

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

$MethodInfo _FormatData_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_pt::*)()>(&FormatData_pt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_pt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_pt",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pt_MethodInfo_
};

$Object* allocate$FormatData_pt($Class* clazz) {
	return $of($alloc(FormatData_pt));
}

void FormatData_pt::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_pt::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"Janeiro"_s,
				"Fevereiro"_s,
				u"Mar\u00e7o"_s,
				"Abril"_s,
				"Maio"_s,
				"Junho"_s,
				"Julho"_s,
				"Agosto"_s,
				"Setembro"_s,
				"Outubro"_s,
				"Novembro"_s,
				"Dezembro"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan"_s,
				"fev"_s,
				"mar"_s,
				"abr"_s,
				"mai"_s,
				"jun"_s,
				"jul"_s,
				"ago"_s,
				"set"_s,
				"out"_s,
				"nov"_s,
				"dez"_s,
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
				"Domingo"_s,
				"Segunda-feira"_s,
				u"Ter\u00e7a-feira"_s,
				"Quarta-feira"_s,
				"Quinta-feira"_s,
				"Sexta-feira"_s,
				u"S\u00e1bado"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Dom"_s,
				"Seg"_s,
				"Ter"_s,
				"Qua"_s,
				"Qui"_s,
				"Sex"_s,
				u"S\u00e1b"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"D"_s,
				"S"_s,
				"T"_s,
				"Q"_s,
				"Q"_s,
				"S"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				"Antes de Cristo"_s,
				"Ano do Senhor"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"a.C."_s,
				"d.C."_s
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
				"HH\'H\'mm\'m\' z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d\' de \'MMMM\' de \'yyyy"_s,
				"d\' de \'MMMM\' de \'yyyy"_s,
				"d/MMM/yyyy"_s,
				"dd-MM-yyyy"_s
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

FormatData_pt::FormatData_pt() {
}

$Class* FormatData_pt::load$($String* name, bool initialize) {
	$loadClass(FormatData_pt, name, initialize, &_FormatData_pt_ClassInfo_, allocate$FormatData_pt);
	return class$;
}

$Class* FormatData_pt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun