#include <sun/text/resources/cldr/ext/FormatData_si.h>

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

$MethodInfo _FormatData_si_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_si::*)()>(&FormatData_si::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_si_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_si",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_si_MethodInfo_
};

$Object* allocate$FormatData_si($Class* clazz) {
	return $of($alloc(FormatData_si));
}

void FormatData_si::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_si::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"\u0da2\u0db1\u0dc0\u0dcf\u0dbb\u0dd2"_s,
		u"\u0db4\u0dd9\u0db6\u0dbb\u0dc0\u0dcf\u0dbb\u0dd2"_s,
		u"\u0db8\u0dcf\u0dbb\u0dca\u0dad\u0dd4"_s,
		u"\u0d85\u0db4\u0dca\u200d\u0dbb\u0dda\u0dbd\u0dca"_s,
		u"\u0db8\u0dd0\u0dba\u0dd2"_s,
		u"\u0da2\u0dd6\u0db1\u0dd2"_s,
		u"\u0da2\u0dd6\u0dbd\u0dd2"_s,
		u"\u0d85\u0d9c\u0ddd\u0dc3\u0dca\u0dad\u0dd4"_s,
		u"\u0dc3\u0dd0\u0db4\u0dca\u0dad\u0dd0\u0db8\u0dca\u0db6\u0dbb\u0dca"_s,
		u"\u0d94\u0d9a\u0dca\u0dad\u0ddd\u0db6\u0dbb\u0dca"_s,
		u"\u0db1\u0ddc\u0dc0\u0dd0\u0db8\u0dca\u0db6\u0dbb\u0dca"_s,
		u"\u0daf\u0dd9\u0dc3\u0dd0\u0db8\u0dca\u0db6\u0dbb\u0dca"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u0da2\u0db1"_s,
		u"\u0db4\u0dd9\u0db6"_s,
		u"\u0db8\u0dcf\u0dbb\u0dca\u0dad\u0dd4"_s,
		u"\u0d85\u0db4\u0dca\u200d\u0dbb\u0dda\u0dbd\u0dca"_s,
		u"\u0db8\u0dd0\u0dba\u0dd2"_s,
		u"\u0da2\u0dd6\u0db1\u0dd2"_s,
		u"\u0da2\u0dd6\u0dbd\u0dd2"_s,
		u"\u0d85\u0d9c\u0ddd"_s,
		u"\u0dc3\u0dd0\u0db4\u0dca"_s,
		u"\u0d94\u0d9a\u0dca"_s,
		u"\u0db1\u0ddc\u0dc0\u0dd0"_s,
		u"\u0daf\u0dd9\u0dc3\u0dd0"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"\u0da2"_s,
		u"\u0db4\u0dd9"_s,
		u"\u0db8\u0dcf"_s,
		u"\u0d85"_s,
		u"\u0db8\u0dd0"_s,
		u"\u0da2\u0dd6"_s,
		u"\u0da2\u0dd6"_s,
		u"\u0d85"_s,
		u"\u0dc3\u0dd0"_s,
		u"\u0d94"_s,
		u"\u0db1\u0dd9"_s,
		u"\u0daf\u0dd9"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0d89\u0dbb\u0dd2\u0daf\u0dcf"_s,
		u"\u0dc3\u0db3\u0dd4\u0daf\u0dcf"_s,
		u"\u0d85\u0d9f\u0dc4\u0dbb\u0dd4\u0dc0\u0dcf\u0daf\u0dcf"_s,
		u"\u0db6\u0daf\u0dcf\u0daf\u0dcf"_s,
		u"\u0db6\u0dca\u200d\u0dbb\u0dc4\u0dc3\u0dca\u0db4\u0dad\u0dd2\u0db1\u0dca\u0daf\u0dcf"_s,
		u"\u0dc3\u0dd2\u0d9a\u0dd4\u0dbb\u0dcf\u0daf\u0dcf"_s,
		u"\u0dc3\u0dd9\u0db1\u0dc3\u0dd4\u0dbb\u0dcf\u0daf\u0dcf"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u0d89\u0dbb\u0dd2\u0daf\u0dcf"_s,
		u"\u0dc3\u0db3\u0dd4\u0daf\u0dcf"_s,
		u"\u0d85\u0d9f\u0dc4"_s,
		u"\u0db6\u0daf\u0dcf\u0daf\u0dcf"_s,
		u"\u0db6\u0dca\u200d\u0dbb\u0dc4\u0dc3\u0dca"_s,
		u"\u0dc3\u0dd2\u0d9a\u0dd4"_s,
		u"\u0dc3\u0dd9\u0db1"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u0d89"_s,
		u"\u0dc3"_s,
		u"\u0d85"_s,
		u"\u0db6"_s,
		u"\u0db6\u0dca\u200d\u0dbb"_s,
		u"\u0dc3\u0dd2"_s,
		u"\u0dc3\u0dd9"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1 \u0dc0\u0db1 \u0d9a\u0dcf\u0dbb\u0dca\u0dad\u0dd4\u0dc0"_s,
		u"2 \u0dc0\u0db1 \u0d9a\u0dcf\u0dbb\u0dca\u0dad\u0dd4\u0dc0"_s,
		u"3 \u0dc0\u0db1 \u0d9a\u0dcf\u0dbb\u0dca\u0dad\u0dd4\u0dc0"_s,
		u"4 \u0dc0\u0db1 \u0d9a\u0dcf\u0dbb\u0dca\u0dad\u0dd4\u0dc0"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u0d9a\u0dcf\u0dbb\u0dca:1"_s,
		u"\u0d9a\u0dcf\u0dbb\u0dca:2"_s,
		u"\u0d9a\u0dcf\u0dbb\u0dca:3"_s,
		u"\u0d9a\u0dcf\u0dbb\u0dca:4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u0db4\u0dd9.\u0dc0."_s,
		u"\u0db4.\u0dc0."_s,
		u"\u0db8\u0dd0\u0daf\u0dd2\u0dba\u0db8"_s,
		u"\u0db8\u0db0\u0dca\u200d\u0dba\u0dcf\u0dc4\u0dca\u0db1\u0dba"_s,
		u"\u0db4\u0dcf\u0db1\u0dca\u0daf\u0dbb"_s,
		u"\u0d8b\u0daf\u0dda"_s,
		u"\u0daf\u0dc0\u0dbd\u0dca"_s,
		""_s,
		u"\u0dc4\u0dc0\u0dc3"_s,
		""_s,
		u"\u0dbb\u0dd1"_s,
		u"\u0db8\u0dd0\u0daf\u0dd2\u0dba\u0db8\u0da7 \u0db4\u0dc3\u0dd4"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"\u0db4\u0dd9"_s,
		u"\u0db4"_s,
		u"\u0db8\u0dd0"_s,
		u"\u0db8"_s,
		u"\u0db4\u0dcf"_s,
		u"\u0d8b"_s,
		u"\u0daf"_s,
		""_s,
		u"\u0dc4"_s,
		""_s,
		u"\u0dbb\u0dd1"_s,
		u"\u0db8\u0dd0"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"\u0d9a\u0dca\u200d\u0dbb\u0dd2.\u0db4\u0dd6."_s,
		u"\u0d9a\u0dca\u200d\u0dbb\u0dd2.\u0dc0."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH.mm.ss zzzz"_s,
		"HH.mm.ss z"_s,
		"HH.mm.ss"_s,
		"HH.mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y-MM-dd"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"\u0d9c\u0dca\u200d\u0dbb\u0dd9\u0d9c\u0dbb\u0dd2\u0dba\u0dcf\u0db1\u0dd4 \u0daf\u0dd2\u0db1 \u0daf\u0dbb\u0dca\u0dc1\u0db1\u0dba"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0dc0\u0dbb\u0dca\u0dc2\u0dba"_s)
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
			$of(u"\u0d9c\u0dca\u200d\u0dbb\u0dd2\u0db8\u0dc0\u0dda{0}"_s)
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
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u0dc3\u0db8\u0dca\u0db8\u0dad \u0dc0\u0dda\u0dbd\u0dcf\u0dc0"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u0da2\u0db4\u0db1\u0dca \u0daf\u0dd2\u0db1 \u0daf\u0dbb\u0dca\u0dc1\u0db1\u0dba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"\u0d9c\u0dca\u200d\u0dbb\u0dd2\u0db8\u0dc0\u0dda"_s)
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
			$of($$new($StringArray, {
				u"\u0d9a\u0dca\u200d\u0dbb\u0dd2\u0dc3\u0dca\u0dad\u0dd4 \u0db4\u0dd6\u0dbb\u0dca\u0dc0"_s,
				u"\u0d9a\u0dca\u200d\u0dbb\u0dd2\u0dc3\u0dca\u0dad\u0dd4 \u0dc0\u0dbb\u0dca\u0dc2"_s
			}))
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
			$of(metaValue_narrow_AmPmMarkers)
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
			$of(u"\u0db8\u0dd2\u0db1\u0dd2\u0dad\u0dca\u0dad\u0dd4\u0dc0"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u0dba\u0dd4\u0d9c\u0dba"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u0db4\u0dd9.\u0dc0/\u0db4.\u0dc0"_s)
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
			$of("calendarname.roc"_s),
			$of(u"\u0db8\u0dd2\u0db1\u0dca\u0d9c\u0dcf \u0daf\u0dd2\u0db1 \u0daf\u0dbb\u0dca\u0dc1\u0db1\u0dba"_s)
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
			$of(u"\u0db8\u0dcf\u0dc3\u0dba"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u0dad\u0dad\u0dca\u0db4\u0dbb\u0dba"_s)
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
			$of(u"\u0d89\u0dc3\u0dca\u0dbd\u0dcf\u0db8\u0dd3\u0dba \u0daf\u0dd2\u0db1 \u0daf\u0dbb\u0dca\u0dc1\u0db1\u0dba"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:18:00-24:00;morning2:06:00-12:00;afternoon1:12:00-14:00;morning1:01:00-06:00;evening1:14:00-18:00;night2:00:00-01:00"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"\u0da2\u0db1"_s,
				u"\u0db4\u0dd9\u0db6"_s,
				u"\u0db8\u0dcf\u0dbb\u0dca"_s,
				u"\u0d85\u0db4\u0dca\u200d\u0dbb\u0dda\u0dbd\u0dca"_s,
				u"\u0db8\u0dd0\u0dba\u0dd2"_s,
				u"\u0da2\u0dd6\u0db1\u0dd2"_s,
				u"\u0da2\u0dd6\u0dbd\u0dd2"_s,
				u"\u0d85\u0d9c\u0ddd"_s,
				u"\u0dc3\u0dd0\u0db4\u0dca"_s,
				u"\u0d94\u0d9a\u0dca"_s,
				u"\u0db1\u0ddc\u0dc0\u0dd0"_s,
				u"\u0daf\u0dd9\u0dc3\u0dd0"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} \u0dc0\u0dda\u0dbd\u0dcf\u0dc0"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:\u0daf\u0dc4\u0dc3\' \'0 other:\u0daf\u0dc4\u0dc3\' \'0}"_s,
				u"{one:\u0daf\u0dc4\u0dc3\' \'00 other:\u0daf\u0dc4\u0dc3\' \'00}"_s,
				u"{one:\u0daf\u0dc4\u0dc3\' \'000 other:\u0daf\u0dc4\u0dc3\' \'000}"_s,
				u"{one:\u0db8\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'0 other:\u0db8\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'0}"_s,
				u"{one:\u0db8\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'00 other:\u0db8\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'00}"_s,
				u"{one:\u0db8\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'000 other:\u0db8\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'000}"_s,
				u"{one:\u0db6\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'0 other:\u0db6\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'0}"_s,
				u"{one:\u0db6\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'00 other:\u0db6\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'00}"_s,
				u"{one:\u0db6\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'000 other:\u0db6\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'000}"_s,
				u"{one:\u0da7\u0dca\u200d\u0dbb\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'0 other:\u0da7\u0dca\u200d\u0dbb\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'0}"_s,
				u"{one:\u0da7\u0dca\u200d\u0dbb\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'00 other:\u0da7\u0dca\u200d\u0dbb\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'00}"_s,
				u"{one:\u0da7\u0dca\u200d\u0dbb\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'000 other:\u0da7\u0dca\u200d\u0dbb\u0dd2\u0dbd\u0dd2\u0dba\u0db1\' \'000}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of(u"\u0dc0\u0dda\u0dbd\u0dcf \u0d9a\u0dbd\u0dcf\u0db4\u0dba"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
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
			$of(u"\u0dc3\u0dad\u0dd2\u0dba\u0dda \u0daf\u0dd2\u0db1\u0dba"_s)
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
			$of("timezone.hourFormat"_s),
			$of("+HH.mm;-HH.mm"_s)
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
			$of(u"\u0dc3\u0dad\u0dd2\u0dba"_s)
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
				u"{one:\u0daf0 other:\u0daf0}"_s,
				u"{one:\u0daf00 other:\u0daf00}"_s,
				u"{one:\u0daf000 other:\u0daf000}"_s,
				u"{one:\u0db8\u0dd20 other:\u0db8\u0dd20}"_s,
				u"{one:\u0db8\u0dd200 other:\u0db8\u0dd200}"_s,
				u"{one:\u0db8\u0dd2000 other:\u0db8\u0dd2000}"_s,
				u"{one:\u0db6\u0dd20 other:\u0db6\u0dd20}"_s,
				u"{one:\u0db6\u0dd200 other:\u0db6\u0dd200}"_s,
				u"{one:\u0db6\u0dd2000 other:\u0db6\u0dd2000}"_s,
				u"{one:\u0da7\u0dca\u200d\u0dbb\u0dd20 other:\u0da7\u0dca\u200d\u0dbb\u0dd20}"_s,
				u"{one:\u0da7\u0dca\u200d\u0dbb\u0dd200 other:\u0da7\u0dca\u200d\u0dbb\u0dd200}"_s,
				u"{one:\u0da7\u0dca\u200d\u0dbb\u0dd2000 other:\u0da7\u0dca\u200d\u0dbb\u0dd2000}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u0daf\u0dd2\u0dc0\u0dcf\u0d86\u0dbd\u0ddd\u0d9a \u0dc0\u0dda\u0dbd\u0dcf\u0dc0"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y MMMM d, EEEE"_s,
				"y MMMM d"_s,
				"y MMM d"_s,
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
			$of("PluralRules"_s),
			$of("one:n = 0,1 or i = 0 and f = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u0db4\u0dd0\u0dba"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u0db6\u0ddc\u0daf\u0dd4 \u0daf\u0dd2\u0db1 \u0daf\u0dbb\u0dca\u0dc1\u0db1\u0dba"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				"#,##0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
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

FormatData_si::FormatData_si() {
}

$Class* FormatData_si::load$($String* name, bool initialize) {
	$loadClass(FormatData_si, name, initialize, &_FormatData_si_ClassInfo_, allocate$FormatData_si);
	return class$;
}

$Class* FormatData_si::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun