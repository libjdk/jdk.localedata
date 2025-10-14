#include <sun/text/resources/cldr/ext/FormatData_sah.h>

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

$MethodInfo _FormatData_sah_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sah::*)()>(&FormatData_sah::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sah_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sah",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sah_MethodInfo_
};

$Object* allocate$FormatData_sah($Class* clazz) {
	return $of($alloc(FormatData_sah));
}

void FormatData_sah::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sah::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0422\u043e\u0445\u0441\u0443\u043d\u043d\u044c\u0443"_s,
		u"\u041e\u043b\u0443\u043d\u043d\u044c\u0443"_s,
		u"\u041a\u0443\u043b\u0443\u043d \u0442\u0443\u0442\u0430\u0440"_s,
		u"\u041c\u0443\u0443\u0441 \u0443\u0441\u0442\u0430\u0440"_s,
		u"\u042b\u0430\u043c \u044b\u0439\u044b\u043d"_s,
		u"\u0411\u044d\u0441 \u044b\u0439\u044b\u043d"_s,
		u"\u041e\u0442 \u044b\u0439\u044b\u043d"_s,
		u"\u0410\u0442\u044b\u0440\u0434\u044c\u044b\u0445 \u044b\u0439\u044b\u043d"_s,
		u"\u0411\u0430\u043b\u0430\u0495\u0430\u043d \u044b\u0439\u044b\u043d"_s,
		u"\u0410\u043b\u0442\u044b\u043d\u043d\u044c\u044b"_s,
		u"\u0421\u044d\u0442\u0438\u043d\u043d\u044c\u0438"_s,
		u"\u0430\u0445\u0441\u044b\u043d\u043d\u044c\u044b"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0422\u043e\u0445\u0441"_s,
		u"\u041e\u043b\u0443\u043d"_s,
		u"\u041a\u043b\u043d"_s,
		u"\u041c\u0441\u0443"_s,
		u"\u042b\u0430\u043c"_s,
		u"\u0411\u044d\u0441"_s,
		u"\u041e\u0442\u0439"_s,
		u"\u0410\u0442\u0440"_s,
		u"\u0411\u043b\u0495"_s,
		u"\u0410\u043b\u0442"_s,
		u"\u0421\u044d\u0442"_s,
		u"\u0410\u0445\u0441"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0422"_s,
		u"\u041e"_s,
		u"\u041a"_s,
		u"\u041c"_s,
		u"\u042b"_s,
		u"\u0411"_s,
		u"\u041e"_s,
		u"\u0410"_s,
		u"\u0411"_s,
		u"\u0410"_s,
		u"\u0421"_s,
		u"\u0410"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0431\u0430\u0441\u043a\u044b\u04bb\u044b\u0430\u043d\u043d\u044c\u0430"_s,
		u"\u0431\u044d\u043d\u0438\u0434\u0438\u044d\u043d\u043d\u044c\u0438\u043a"_s,
		u"\u043e\u043f\u0442\u0443\u043e\u0440\u0443\u043d\u043d\u044c\u0443\u043a"_s,
		u"\u0441\u044d\u0440\u044d\u0434\u044d"_s,
		u"\u0447\u044d\u043f\u043f\u0438\u044d\u0440"_s,
		u"\u0411\u044d\u044d\u0442\u0438\u04a5\u0441\u044d"_s,
		u"\u0441\u0443\u0431\u0443\u043e\u0442\u0430"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0431\u0441"_s,
		u"\u0431\u043d"_s,
		u"\u043e\u043f"_s,
		u"\u0441\u044d"_s,
		u"\u0447\u043f"_s,
		u"\u0431\u044d"_s,
		u"\u0441\u0431"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0411"_s,
		u"\u0411"_s,
		u"\u041e"_s,
		u"\u0421"_s,
		u"\u0427"_s,
		u"\u0411"_s,
		u"\u0421"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-\u043a\u044b \u043a\u044b\u0431\u0430\u0430\u0440\u0442\u0430\u043b"_s,
		u"2-\u0441 \u043a\u044b\u0431\u0430\u0430\u0440\u0442\u0430\u043b"_s,
		u"3-\u0441 \u043a\u044b\u0431\u0430\u0430\u0440\u0442\u0430\u043b"_s,
		u"4-\u0441 \u043a\u044b\u0431\u0430\u0430\u0440\u0442\u0430\u043b"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-\u043a\u044b \u043a\u0431"_s,
		u"2-\u0441 \u043a\u0431"_s,
		u"3-\u0441 \u043a\u0431"_s,
		u"4-\u0441 \u043a\u0431"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u042d\u0418"_s,
		u"\u042d\u041a"_s,
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
		u"\u0431. \u044d. \u0438."_s,
		u"\u0431. \u044d"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"G y \'\u0441\u044b\u043b\' MMMM d \'\u043a\u04af\u043d\u044d\', EEEE"_s,
		"G y, MMMM d"_s,
		"G y, MMM d"_s,
		"GGGGG yy/M/d"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"GGGG y \'\u0441\u044b\u043b\' MMMM d \'\u043a\u04af\u043d\u044d\', EEEE"_s,
		"GGGG y, MMMM d"_s,
		"GGGG y, MMM d"_s,
		"G yy/M/d"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0421\u044b\u043b"_s)
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
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0414\u044c\u043e\u043f\u043f\u0443\u043e\u043d \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
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
			$of(metaValue_buddhist_QuarterNarrows)
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
				u"\u0447\u044b\u044b\u04bb\u044b\u043b\u0430\u00a0\u0431\u0443\u043e\u0442\u0430\u0445"_s,
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
			$of(u"\u041c\u04af\u043d\u04af\u04af\u0442\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u042d\u044d\u0440\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u042d\u0418/\u042d\u041a"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of(u"\u042b\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0421\u04e9\u043a\u04af\u04af\u043d\u0434\u044d"_s)
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
			$of("calendarname.islamic"_s),
			$of(u"\u0418\u0441\u043b\u0430\u0430\u043c \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u0442\u044b\u04bb\u044b\u044b\u043d\u0447\u0430}"_s,
				u"{other:00\' \'\u0442\u044b\u04bb\u044b\u044b\u043d\u0447\u0430}"_s,
				u"{other:000\' \'\u0442\u044b\u04bb\u044b\u044b\u043d\u0447\u0430}"_s,
				u"{other:0\' \'\u043c\u04e9\u043b\u04af\u0439\u04af\u04e9\u043d}"_s,
				u"{other:00\' \'\u043c\u04e9\u043b\u04af\u0439\u04af\u04e9\u043d}"_s,
				u"{other:000\' \'\u043c\u04e9\u043b\u04af\u0439\u04af\u04e9\u043d}"_s,
				u"{other:0\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{other:00\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{other:000\' \'\u043c\u0438\u043b\u043b\u0438\u0430\u0440\u0434}"_s,
				u"{other:0\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{other:00\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s,
				u"{other:000\' \'\u0442\u0440\u0438\u043b\u043b\u0438\u043e\u043d}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of(u"\u041a\u044d\u043c \u0431\u0430\u043b\u0430\u04bb\u0430\u0442\u0430"_s)
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
			$of("Eras"_s),
			$of(metaValue_long_Eras)
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
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u041d\u044d\u0434\u0438\u044d\u043b\u044d \u043a\u04af\u043d\u044d"_s)
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
			$of(u"\u041d\u044d\u0434\u0438\u044d\u043b\u044d"_s)
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
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\u00a0\u0442\u044b\u04bb\'.\'}"_s,
				u"{other:00\u00a0\u0442\u044b\u04bb\'.\'}"_s,
				u"{other:000\u00a0\u0442\u044b\u04bb\'.\'}"_s,
				u"{other:0\u00a0\u043c\u04e9\u043b}"_s,
				u"{other:00\u00a0\u043c\u04e9\u043b}"_s,
				u"{other:000\u00a0\u043c\u04e9\u043b}"_s,
				u"{other:0\u00a0\u043c\u043b\u0440\u0434}"_s,
				u"{other:00\u00a0\u043c\u043b\u0440\u0434}"_s,
				u"{other:000\u00a0\u043c\u043b\u0440\u0434}"_s,
				u"{other:0\u00a0\u0442\u0440\u043b\u043d}"_s,
				u"{other:00\u00a0\u0442\u0440\u043b\u043d}"_s,
				u"{other:000\u00a0\u0442\u0440\u043b\u043d}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"y \'\u0441\u044b\u043b\' MMMM d \'\u043a\u04af\u043d\u044d\', EEEE"_s,
				"y, MMMM d"_s,
				"y, MMM d"_s,
				"yy/M/d"_s
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
			$of(u"\u0427\u0430\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0411\u0443\u0443\u0434\u0434\u0430 \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u0442\u043e\u0445\u0441\u0443\u043d\u043d\u044c\u0443"_s,
				u"\u043e\u043b\u0443\u043d\u043d\u044c\u0443"_s,
				u"\u043a\u0443\u043b\u0443\u043d \u0442\u0443\u0442\u0430\u0440"_s,
				u"\u043c\u0443\u0443\u0441 \u0443\u0441\u0442\u0430\u0440"_s,
				u"\u044b\u0430\u043c \u044b\u0439\u0430"_s,
				u"\u0431\u044d\u0441 \u044b\u0439\u0430"_s,
				u"\u043e\u0442 \u044b\u0439\u0430"_s,
				u"\u0430\u0442\u044b\u0440\u0434\u044c\u044b\u0445 \u044b\u0439\u0430"_s,
				u"\u0431\u0430\u043b\u0430\u0495\u0430\u043d \u044b\u0439\u0430"_s,
				u"\u0430\u043b\u0442\u044b\u043d\u043d\u044c\u044b"_s,
				u"\u0441\u044d\u0442\u0438\u043d\u043d\u044c\u0438"_s,
				u"\u0430\u0445\u0441\u044b\u043d\u043d\u044c\u044b"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"#,##0%"_s,
				u"#,##0.00\u00a0\u00a4"_s
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
		})
	}));
	return data;
}

FormatData_sah::FormatData_sah() {
}

$Class* FormatData_sah::load$($String* name, bool initialize) {
	$loadClass(FormatData_sah, name, initialize, &_FormatData_sah_ClassInfo_, allocate$FormatData_sah);
	return class$;
}

$Class* FormatData_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun