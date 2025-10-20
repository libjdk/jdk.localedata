#include <sun/text/resources/cldr/ext/FormatData_vi.h>

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

$MethodInfo _FormatData_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_vi::*)()>(&FormatData_vi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_vi",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_vi_MethodInfo_
};

$Object* allocate$FormatData_vi($Class* clazz) {
	return $of($alloc(FormatData_vi));
}

void FormatData_vi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_vi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"th\u00e1ng 1"_s,
		u"th\u00e1ng 2"_s,
		u"th\u00e1ng 3"_s,
		u"th\u00e1ng 4"_s,
		u"th\u00e1ng 5"_s,
		u"th\u00e1ng 6"_s,
		u"th\u00e1ng 7"_s,
		u"th\u00e1ng 8"_s,
		u"th\u00e1ng 9"_s,
		u"th\u00e1ng 10"_s,
		u"th\u00e1ng 11"_s,
		u"th\u00e1ng 12"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"thg 1"_s,
		"thg 2"_s,
		"thg 3"_s,
		"thg 4"_s,
		"thg 5"_s,
		"thg 6"_s,
		"thg 7"_s,
		"thg 8"_s,
		"thg 9"_s,
		"thg 10"_s,
		"thg 11"_s,
		"thg 12"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"Ch\u1ee7 Nh\u1eadt"_s,
		u"Th\u1ee9 Hai"_s,
		u"Th\u1ee9 Ba"_s,
		u"Th\u1ee9 T\u01b0"_s,
		u"Th\u1ee9 N\u0103m"_s,
		u"Th\u1ee9 S\u00e1u"_s,
		u"Th\u1ee9 B\u1ea3y"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"CN"_s,
		"Th 2"_s,
		"Th 3"_s,
		"Th 4"_s,
		"Th 5"_s,
		"Th 6"_s,
		"Th 7"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"CN"_s,
		"T2"_s,
		"T3"_s,
		"T4"_s,
		"T5"_s,
		"T6"_s,
		"T7"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"Qu\u00fd 1"_s,
		u"Qu\u00fd 2"_s,
		u"Qu\u00fd 3"_s,
		u"Qu\u00fd 4"_s
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"SA"_s,
		"CH"_s,
		u"n\u1eeda \u0111\u00eam"_s,
		"TR"_s,
		u"s\u00e1ng"_s,
		""_s,
		u"chi\u1ec1u"_s,
		""_s,
		u"t\u1ed1i"_s,
		""_s,
		u"\u0111\u00eam"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"s"_s,
		"c"_s,
		u"n\u1eeda \u0111\u00eam"_s,
		"tr"_s,
		u"s\u00e1ng"_s,
		""_s,
		u"chi\u1ec1u"_s,
		""_s,
		u"t\u1ed1i"_s,
		""_s,
		u"\u0111\u00eam"_s,
		""_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_MonthNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s,
		"7"_s,
		"8"_s,
		"9"_s,
		"10"_s,
		"11"_s,
		"12"_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, \'ng\u00e0y\' dd MMMM \'n\u0103m\' y G"_s,
		u"\'Ng\u00e0y\' dd \'th\u00e1ng\' M \'n\u0103m\' y G"_s,
		"dd-MM-y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, \'ng\u00e0y\' dd MMMM \'n\u0103m\' y GGGG"_s,
		u"\'Ng\u00e0y\' dd \'th\u00e1ng\' M \'n\u0103m\' y GGGG"_s,
		"dd-MM-y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"Tr\u01b0\u1edbc R.O.C"_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"L\u1ecbch Gregory"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"N\u0103m"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"L\u1ecbch H\u1ed3i Gi\u00e1o - Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ng\u00e0y\' dd MMMM \'n\u0103m\' y G"_s,
				u"\'Ng\u00e0y\' dd \'th\u00e1ng\' M \'n\u0103m\' y G"_s,
				"dd-MM-y G"_s,
				"dd/MM/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"L\u1ecbch Islamic-Civil"_s)
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
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				"tr. CN"_s,
				"sau CN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"Gi\u1edd chu\u1ea9n {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"L\u1ecbch Nh\u1eadt B\u1ea3n"_s)
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
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"Tr\u01b0\u1edbc Thi\u00ean Ch\u00faa"_s,
				u"Sau C\u00f4ng Nguy\u00ean"_s
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
				"{0} {1}"_s,
				"{0} {1}"_s,
				"{0}, {1}"_s,
				"{0}, {1}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
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
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ng\u00e0y\' dd MMMM \'n\u0103m\' y GGGG"_s,
				u"\'Ng\u00e0y\' dd \'th\u00e1ng\' M \'n\u0103m\' y GGGG"_s,
				"dd-MM-y GGGG"_s,
				"dd/MM/y GGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"Ph\u00fat"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"th\u1eddi \u0111\u1ea1i"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("SA/CH"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"L\u1ecbch Trung Hoa D\u00e2n Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ng\u00e0y\' dd \'th\u00e1ng\' MM \'n\u0103m\' y GGGG"_s,
				u"\'Ng\u00e0y\' dd \'th\u00e1ng\' M \'n\u0103m\' y GGGG"_s,
				"dd-MM-y GGGG"_s,
				"dd/MM/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"Th\u00e1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"Gi\u00e2y"_s)
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
			$of(u"L\u1ecbch H\u1ed3i Gi\u00e1o"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:21:00-04:00;afternoon1:12:00-18:00;morning1:04:00-12:00;evening1:18:00-21:00"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
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
				"Thg 1"_s,
				"Thg 2"_s,
				"Thg 3"_s,
				"Thg 4"_s,
				"Thg 5"_s,
				"Thg 6"_s,
				"Thg 7"_s,
				"Thg 8"_s,
				"Thg 9"_s,
				"Thg 10"_s,
				"Thg 11"_s,
				"Thg 12"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"Gi\u1edd {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'ngh\u00ecn}"_s,
				u"{other:00\' \'ngh\u00ecn}"_s,
				u"{other:000\' \'ngh\u00ecn}"_s,
				u"{other:0\' \'tri\u1ec7u}"_s,
				u"{other:00\' \'tri\u1ec7u}"_s,
				u"{other:000\' \'tri\u1ec7u}"_s,
				u"{other:0\' \'t\u1ef7}"_s,
				u"{other:00\' \'t\u1ef7}"_s,
				u"{other:000\' \'t\u1ef7}"_s,
				u"{other:0\' \'ngh\u00ecn\' \'t\u1ef7}"_s,
				u"{other:00\' \'ngh\u00ecn\' \'t\u1ef7}"_s,
				u"{other:000\' \'ngh\u00ecn\' \'t\u1ef7}"_s
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
			$of($$new($StringArray, {
				u"qu\u00fd 1"_s,
				u"qu\u00fd 2"_s,
				u"qu\u00fd 3"_s,
				u"qu\u00fd 4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of("java.time.buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
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
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"M\u00fai gi\u1edd"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
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
			$of($$new($StringArray, {
				u"Tr\u01b0\u1edbc CN"_s,
				"Sau CN"_s
			}))
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
			$of($$new($StringArray, {
				u"EEEE, \'ng\u00e0y\' dd \'th\u00e1ng\' MM \'n\u0103m\' y G"_s,
				u"\'Ng\u00e0y\' dd \'th\u00e1ng\' M \'n\u0103m\' y G"_s,
				"dd-MM-y G"_s,
				"dd/MM/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"ng\u00e0y trong tu\u1ea7n"_s)
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
			$of("islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
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
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"Tu\u1ea7n"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
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
				u"{other:0\u00a0N}"_s,
				u"{other:00\u00a0N}"_s,
				u"{other:000\u00a0N}"_s,
				u"{other:0\u00a0Tr}"_s,
				u"{other:00\u00a0Tr}"_s,
				u"{other:000\u00a0Tr}"_s,
				u"{other:0\u00a0T}"_s,
				u"{other:00\u00a0T}"_s,
				u"{other:000\u00a0T}"_s,
				u"{other:0\u00a0NT}"_s,
				u"{other:00\u00a0NT}"_s,
				u"{other:000\u00a0NT}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"Gi\u1edd m\u00f9a h\u00e8 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
				"dd/MM/y"_s
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
			$of(u"Gi\u1edd"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"L\u1ecbch Ph\u1eadt Gi\u00e1o"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"Th\u00e1ng 1"_s,
				u"Th\u00e1ng 2"_s,
				u"Th\u00e1ng 3"_s,
				u"Th\u00e1ng 4"_s,
				u"Th\u00e1ng 5"_s,
				u"Th\u00e1ng 6"_s,
				u"Th\u00e1ng 7"_s,
				u"Th\u00e1ng 8"_s,
				u"Th\u00e1ng 9"_s,
				u"Th\u00e1ng 10"_s,
				u"Th\u00e1ng 11"_s,
				u"Th\u00e1ng 12"_s,
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
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
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

FormatData_vi::FormatData_vi() {
}

$Class* FormatData_vi::load$($String* name, bool initialize) {
	$loadClass(FormatData_vi, name, initialize, &_FormatData_vi_ClassInfo_, allocate$FormatData_vi);
	return class$;
}

$Class* FormatData_vi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun