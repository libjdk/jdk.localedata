#include <sun/text/resources/cldr/ext/FormatData_lkt.h>

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

$MethodInfo _FormatData_lkt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_lkt::*)()>(&FormatData_lkt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_lkt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_lkt",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lkt_MethodInfo_
};

$Object* allocate$FormatData_lkt($Class* clazz) {
	return $of($alloc(FormatData_lkt));
}

void FormatData_lkt::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_lkt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"Wi\u00f3the\u021fika W\u00ed"_s,
		u"Thiy\u00f3\u021feyu\u014bka W\u00ed"_s,
		u"I\u0161t\u00e1wi\u010dhayaza\u014b W\u00ed"_s,
		u"P\u021fe\u017e\u00edt\u021fo W\u00ed"_s,
		u"\u010cha\u014bw\u00e1pet\u021fo W\u00ed"_s,
		u"W\u00edpazuk\u021fa-wa\u0161t\u00e9 W\u00ed"_s,
		u"\u010cha\u014bp\u021f\u00e1sapa W\u00ed"_s,
		u"Was\u00fat\u021fu\u014b W\u00ed"_s,
		u"\u010cha\u014bw\u00e1pe\u01e7i W\u00ed"_s,
		u"\u010cha\u014bw\u00e1pe-kasn\u00e1 W\u00ed"_s,
		u"Wan\u00edyetu W\u00ed"_s,
		u"T\u021fah\u00e9kap\u0161u\u014b W\u00ed"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"A\u014bp\u00e9tuwak\u021fa\u014b"_s,
		u"A\u014bp\u00e9tuwa\u014b\u017ei"_s,
		u"A\u014bp\u00e9tunu\u014bpa"_s,
		u"A\u014bp\u00e9tuyamni"_s,
		u"A\u014bp\u00e9tutopa"_s,
		u"A\u014bp\u00e9tuzapta\u014b"_s,
		u"Ow\u00e1\u014bgyu\u017ea\u017eapi"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"A"_s,
		"W"_s,
		"N"_s,
		"Y"_s,
		"T"_s,
		"Z"_s,
		"O"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u00d3mak\u021fa"_s)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of(u"W\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"Okp\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"Ok\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, y"_s,
				"MMMM d, y"_s,
				"MMM d, y"_s,
				"M/d/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"Ok\u00f3-a\u014bp\u00e9tu"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("field.hour"_s),
			$of(u"Ow\u00e1p\u021fe"_s)
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
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"Ow\u00e1p\u021fe o\u021f\u02bc\u00e1\u014bk\u021fo"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayNames)
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
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		})
	}));
	return data;
}

FormatData_lkt::FormatData_lkt() {
}

$Class* FormatData_lkt::load$($String* name, bool initialize) {
	$loadClass(FormatData_lkt, name, initialize, &_FormatData_lkt_ClassInfo_, allocate$FormatData_lkt);
	return class$;
}

$Class* FormatData_lkt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun