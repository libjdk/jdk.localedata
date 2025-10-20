#include <sun/text/resources/cldr/ext/FormatData_yi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_yi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_yi::*)()>(&FormatData_yi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_yi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_yi",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_yi_MethodInfo_
};

$Object* allocate$FormatData_yi($Class* clazz) {
	return $of($alloc(FormatData_yi));
}

void FormatData_yi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_yi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u05d9\u05d0\u05b7\u05e0\u05d5\u05d0\u05b7\u05e8"_s,
		u"\u05e4\u05bf\u05e2\u05d1\u05e8\u05d5\u05d0\u05b7\u05e8"_s,
		u"\u05de\u05e2\u05e8\u05e5"_s,
		u"\u05d0\u05b7\u05e4\u05bc\u05e8\u05d9\u05dc"_s,
		u"\u05de\u05d9\u05d9"_s,
		u"\u05d9\u05d5\u05e0\u05d9"_s,
		u"\u05d9\u05d5\u05dc\u05d9"_s,
		u"\u05d0\u05d5\u05d9\u05d2\u05d5\u05e1\u05d8"_s,
		u"\u05e1\u05e2\u05e4\u05bc\u05d8\u05e2\u05de\u05d1\u05e2\u05e8"_s,
		u"\u05d0\u05e7\u05d8\u05d0\u05d1\u05e2\u05e8"_s,
		u"\u05e0\u05d0\u05d5\u05d5\u05e2\u05de\u05d1\u05e2\u05e8"_s,
		u"\u05d3\u05e2\u05e6\u05e2\u05de\u05d1\u05e2\u05e8"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u05d6\u05d5\u05e0\u05d8\u05d9\u05e7"_s,
		u"\u05de\u05d0\u05b8\u05e0\u05d8\u05d9\u05e7"_s,
		u"\u05d3\u05d9\u05e0\u05e1\u05d8\u05d9\u05e7"_s,
		u"\u05de\u05d9\u05d8\u05d5\u05d5\u05d0\u05da"_s,
		u"\u05d3\u05d0\u05e0\u05e2\u05e8\u05e9\u05d8\u05d9\u05e7"_s,
		u"\u05e4\u05bf\u05e8\u05f2\u05b7\u05d8\u05d9\u05e7"_s,
		u"\u05e9\u05d1\u05ea"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u05e4\u05bf\u05d0\u05b7\u05e8\u05de\u05d9\u05d8\u05d0\u05b8\u05d2"_s,
		u"\u05e0\u05d0\u05b8\u05db\u05de\u05d9\u05d8\u05d0\u05b8\u05d2"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u05d2\u05e8\u05e2\u05d2\u05d0\u05e8\u05d9\u05e9\u05e2\u05e8 \u05e7\u05d0\u05b7\u05dc\u05e2\u05e0\u05d3\u05d0\u05b7\u05e8"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u05d9\u05d0\u05b8\u05e8"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u05e6\u05f2\u05b7\u05d8\u05d6\u05d0\u05e0\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u05d8\u05d0\u05b8\u05d2 \u05d0\u05d9\u05df \u05d3\u05e2\u05e8 \u05d5\u05d5\u05d0\u05da"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1}, {0}"_s,
				"{1} {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
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
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u05de\u05d9\u05e0\u05d5\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u05ea\u05e7\u05d5\u05e4\u05bf\u05d4"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u05de\u05d0\u05e0\u05d0\u05b7\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u05e1\u05e2\u05e7\u05d5\u05e0\u05d3\u05e2"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u05d5\u05d5\u05d0\u05da"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d\u05d8\u05df MMMM y"_s,
				u"d\u05d8\u05df MMMM y"_s,
				u"d\u05d8\u05df MMM y"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:i = 1 and v = 0"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u05e9\u05e2\u05d4"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u05d9\u05d0\u05b7\u05e0"_s,
				u"\u05e4\u05bf\u05e2\u05d1"_s,
				u"\u05de\u05e2\u05e8\u05e5"_s,
				u"\u05d0\u05b7\u05e4\u05bc\u05e8"_s,
				u"\u05de\u05d9\u05d9"_s,
				u"\u05d9\u05d5\u05e0\u05d9"_s,
				u"\u05d9\u05d5\u05dc\u05d9"_s,
				u"\u05d0\u05d5\u05d9\u05d2"_s,
				u"\u05e1\u05e2\u05e4\u05bc"_s,
				u"\u05d0\u05e7\u05d8"_s,
				u"\u05e0\u05d0\u05d5\u05d5"_s,
				u"\u05d3\u05e2\u05e6"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_yi::FormatData_yi() {
}

$Class* FormatData_yi::load$($String* name, bool initialize) {
	$loadClass(FormatData_yi, name, initialize, &_FormatData_yi_ClassInfo_, allocate$FormatData_yi);
	return class$;
}

$Class* FormatData_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun