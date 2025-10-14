#include <sun/text/resources/cldr/ext/FormatData_dz.h>

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

$MethodInfo _FormatData_dz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_dz::*)()>(&FormatData_dz::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_dz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_dz",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_dz_MethodInfo_
};

$Object* allocate$FormatData_dz($Class* clazz) {
	return $of($alloc(FormatData_dz));
}

void FormatData_dz::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_dz::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0f5f\u0fb3\u0f0b\u0f51\u0f44\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f42\u0f49\u0f72\u0f66\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f42\u0f66\u0f74\u0f58\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f56\u0f5e\u0f72\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f63\u0f94\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f51\u0fb2\u0f74\u0f42\u0f0b\u0f54"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f56\u0f51\u0f74\u0f53\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f56\u0f62\u0f92\u0fb1\u0f51\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f51\u0f42\u0f74\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f56\u0f45\u0f74\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f56\u0f45\u0f74\u0f0b\u0f42\u0f45\u0f72\u0f42\u0f0b\u0f54\u0f0b"_s,
		u"\u0f5f\u0fb3\u0f0b\u0f56\u0f45\u0f74\u0f0b\u0f42\u0f49\u0f72\u0f66\u0f0b\u0f54\u0f0b"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0f21"_s,
		u"\u0f22"_s,
		u"\u0f23"_s,
		u"\u0f24"_s,
		u"\u0f25"_s,
		u"\u0f26"_s,
		u"\u0f27"_s,
		u"\u0f28"_s,
		u"\u0f29"_s,
		u"\u0f21\u0f20"_s,
		u"\u0f21\u0f21"_s,
		"12"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0f21"_s,
		u"\u0f22"_s,
		u"\u0f23"_s,
		"4"_s,
		u"\u0f25"_s,
		u"\u0f26"_s,
		u"\u0f27"_s,
		u"\u0f28"_s,
		"9"_s,
		u"\u0f21\u0f20"_s,
		u"\u0f21\u0f21"_s,
		u"\u0f21\u0f22"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0f42\u0f5f\u0f60\u0f0b\u0f5f\u0fb3\u0f0b\u0f56\u0f0b"_s,
		u"\u0f42\u0f5f\u0f60\u0f0b\u0f58\u0f72\u0f42\u0f0b\u0f51\u0f58\u0f62\u0f0b"_s,
		u"\u0f42\u0f5f\u0f60\u0f0b\u0f63\u0fb7\u0f42\u0f0b\u0f54\u0f0b"_s,
		u"\u0f42\u0f5f\u0f60\u0f0b\u0f55\u0f74\u0f62\u0f0b\u0f56\u0f74\u0f0b"_s,
		u"\u0f42\u0f5f\u0f60\u0f0b\u0f54\u0f0b\u0f66\u0f44\u0f66\u0f0b"_s,
		u"\u0f42\u0f5f\u0f60\u0f0b\u0f66\u0fa4\u0f7a\u0f53\u0f0b\u0f54\u0f0b"_s,
		u"\u0f42\u0f5f\u0f60\u0f0b\u0f49\u0f72\u0f0b\u0f58\u0f0b"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0f5f\u0fb3\u0f0b"_s,
		u"\u0f58\u0f72\u0f62\u0f0b"_s,
		u"\u0f63\u0fb7\u0f42\u0f0b"_s,
		u"\u0f55\u0f74\u0f62\u0f0b"_s,
		u"\u0f66\u0f44\u0f66\u0f0b"_s,
		u"\u0f66\u0fa4\u0f7a\u0f53\u0f0b"_s,
		u"\u0f49\u0f72\u0f0b"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0f5f\u0fb3"_s,
		u"\u0f58\u0f72\u0f62"_s,
		u"\u0f63\u0fb7\u0f42"_s,
		u"\u0f55\u0f74\u0f62"_s,
		u"\u0f66\u0f44\u0fb6"_s,
		u"\u0f66\u0fa4\u0f7a\u0f53"_s,
		u"\u0f49\u0f72"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f51\u0f44\u0f0b\u0f54\u0f0b"_s,
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f42\u0f49\u0f72\u0f66\u0f0b\u0f54\u0f0b"_s,
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f42\u0f66\u0f74\u0f58\u0f0b\u0f54\u0f0b"_s,
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f56\u0f5e\u0f72\u0f0b\u0f54\u0f0b"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f21"_s,
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f22"_s,
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f23"_s,
		u"\u0f56\u0f5e\u0f72\u0f0b\u0f51\u0f54\u0fb1\u0f0b\u0f24"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"\u0f21"_s,
		u"\u0f22"_s,
		u"\u0f23"_s,
		u"\u0f24"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0f66\u0f94\u0f0b\u0f46\u0f0b"_s,
		u"\u0f55\u0fb1\u0f72\u0f0b\u0f46\u0f0b"_s,
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
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		"BCE"_s,
		"CE"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		u"\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51\u0f0b h \u0f66\u0f90\u0f62\u0f0b\u0f58\u0f0b mm:ss a zzzz"_s,
		u"\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51\u0f0b h \u0f66\u0f90\u0f62\u0f0b\u0f58\u0f0b mm:ss a z"_s,
		u"\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51\u0f0bh:mm:ss a"_s,
		u"\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51\u0f0b h \u0f66\u0f90\u0f62\u0f0b\u0f58\u0f0b mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, G \u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by MMMM \u0f5a\u0f7a\u0f66\u0f0bdd"_s,
		u"G \u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by MMMM \u0f5a\u0f7a\u0f66\u0f0b dd"_s,
		u"G \u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by \u0f5f\u0fb3\u0f0bMMM \u0f5a\u0f7a\u0f66\u0f0bdd"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, GGGG \u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by MMMM \u0f5a\u0f7a\u0f66\u0f0bdd"_s,
		u"GGGG \u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by MMMM \u0f5a\u0f7a\u0f66\u0f0b dd"_s,
		u"GGGG \u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by \u0f5f\u0fb3\u0f0bMMM \u0f5a\u0f7a\u0f66\u0f0bdd"_s,
		"G y-MM-dd"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0f42\u0fb2\u0f7a\u0f42\u0f0b\u0f42\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f5f\u0fb3\u0f0b\u0f50\u0f7c"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0f63\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"\u0f47\u0f72\u0f0b\u0f68\u0f7a\u0f58\u0f0b\u0f4f\u0f72\u0f0b{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("tibt"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u0f47\u0f72\u0f0b\u0f68\u0f7a\u0f58\u0f0b\u0f4a\u0f72\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
				"{1} {0}"_s,
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
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u0f66\u0f90\u0f62\u0f0b\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0f51\u0f74\u0f66\u0f0b\u0f56\u0f66\u0f90\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0f66\u0f94\u0f0b\u0f46/\u0f55\u0fb1\u0f72\u0f0b\u0f46\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"\u0f21"_s,
				u"\u0f22"_s,
				u"\u0f23"_s,
				u"\u0f24"_s,
				u"\u0f25"_s,
				u"\u0f26"_s,
				u"\u0f27"_s,
				u"\u0f28"_s,
				u"\u0f29"_s,
				u"\u0f21\u0f20"_s,
				u"\u0f21\u0f21"_s,
				u"\u0f21\u0f22"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"\u0f5f\u0fb3\u0f0b\u0f5d\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0f66\u0f90\u0f62\u0f0b\u0f46\u0f71\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0f5f\u0fb3\u0f0b\u0f21"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f22"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f23"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f24"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f25"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f26"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f27"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f28"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f29"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f21\u0f20"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f21\u0f21"_s,
				u"\u0f5f\u0fb3\u0f0b\u0f21\u0f22"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0}\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:\u0f66\u0f9f\u0f7c\u0f44\u0f0b\u0f55\u0fb2\u0f42\' \'0}"_s,
				u"{other:\u0f41\u0fb2\u0f72\u0f0b\u0f55\u0fb2\u0f42\' \'0}"_s,
				u"{other:\u0f60\u0f56\u0f74\u0f58\u0f0b\u0f55\u0fb2\u0f42\' \'0}"_s,
				u"{other:\u0f66\u0f0b\u0f61\u0f0b\' \'0}"_s,
				u"{other:\u0f56\u0fb1\u0f7a\u0f0b\u0f56\u0f0b\' \'0}"_s,
				u"{other:\u0f51\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f74\u0f62\u0f0b\' \'0}"_s,
				u"{other:\u0f51\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f74\u0f62\u0f0b\' \'00}"_s,
				u"{other:\u0f51\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f74\u0f62\u0f0b\u0f56\u0f62\u0f92\u0fb1\u0f0b\' \'0}"_s,
				u"{other:\u0f51\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f74\u0f62\u0f0b\u0f66\u0f9f\u0f7c\u0f44\' \'0}"_s,
				u"{other:\u0f51\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f74\u0f62\u0f0b\u0f41\u0fb2\u0f72\u0f0b\' \'0}"_s,
				u"{other:\u0f51\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f74\u0f62\u0f0b\u0f60\u0f56\u0f74\u0f58\u0f0b\' \'0}"_s,
				u"{other:\u0f51\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f74\u0f62\u0f0b\u0f66\u0f0b\u0f61\u0f0b\' \'0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("tibt.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4\u00a0#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("field.zone"_s),
			$of(u"\u0f51\u0f74\u0f66\u0f0b\u0f40\u0f74\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u0f56\u0f51\u0f74\u0f53\u0f0b\u0f55\u0fb2\u0f42\u0f0b\u0f42\u0f72\u0f0b\u0f49\u0f72\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("tibt.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0f20"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u0f42\u0fb2\u0f44\u0f66\u0f0b\u0f58\u0f7a\u0f51"_s,
				u"\u0f68\u0f44\u0f0b\u0f58\u0f51"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0f56\u0f51\u0f74\u0f53\u0f0b\u0f55\u0fb2\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by MMMM \u0f5a\u0f7a\u0f66\u0f0bdd"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by MMMM \u0f5a\u0f7a\u0f66\u0f0b dd"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f63\u0f7c\u0f0by \u0f5f\u0fb3\u0f0bMMM \u0f5a\u0f7a\u0f66\u0f0bdd"_s,
				"y-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f51\u0f44\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f42\u0f49\u0f72\u0f66\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f42\u0f66\u0f74\u0f58\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f56\u0f5e\u0f72\u0f0b\u0f54"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f63\u0f94\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f51\u0fb2\u0f74\u0f42\u0f0b\u0f54"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f56\u0f51\u0f74\u0f53\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f56\u0f62\u0f92\u0fb1\u0f51\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f51\u0f42\u0f74\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f56\u0f45\u0f74\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f56\u0f45\u0f74\u0f0b\u0f42\u0f45\u0f72\u0f42\u0f0b\u0f54\u0f0b"_s,
				u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f5f\u0fb3\u0f0b\u0f56\u0f45\u0f74\u0f0b\u0f42\u0f49\u0f72\u0f66\u0f0b\u0f54\u0f0b"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"\u00a4#,##,##0.00"_s,
				u"#,##,##0\u00a0%"_s,
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
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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

FormatData_dz::FormatData_dz() {
}

$Class* FormatData_dz::load$($String* name, bool initialize) {
	$loadClass(FormatData_dz, name, initialize, &_FormatData_dz_ClassInfo_, allocate$FormatData_dz);
	return class$;
}

$Class* FormatData_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun