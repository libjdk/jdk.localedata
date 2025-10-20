#include <sun/text/resources/cldr/ext/FormatData_az.h>

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

$MethodInfo _FormatData_az_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_az::*)()>(&FormatData_az::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_az_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_az",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_az_MethodInfo_
};

$Object* allocate$FormatData_az($Class* clazz) {
	return $of($alloc(FormatData_az));
}

void FormatData_az::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_az::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"yanvar"_s,
		"fevral"_s,
		"mart"_s,
		"aprel"_s,
		"may"_s,
		"iyun"_s,
		"iyul"_s,
		"avqust"_s,
		"sentyabr"_s,
		"oktyabr"_s,
		"noyabr"_s,
		"dekabr"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"yan"_s,
		"fev"_s,
		"mar"_s,
		"apr"_s,
		"may"_s,
		"iyn"_s,
		"iyl"_s,
		"avq"_s,
		"sen"_s,
		"okt"_s,
		"noy"_s,
		"dek"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"bazar"_s,
		u"bazar ert\u0259si"_s,
		u"\u00e7\u0259r\u015f\u0259nb\u0259 ax\u015fam\u0131"_s,
		u"\u00e7\u0259r\u015f\u0259nb\u0259"_s,
		u"c\u00fcm\u0259 ax\u015fam\u0131"_s,
		u"c\u00fcm\u0259"_s,
		u"\u015f\u0259nb\u0259"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"B."_s,
		"B.e."_s,
		u"\u00c7.a."_s,
		u"\u00c7."_s,
		"C.a."_s,
		"C."_s,
		u"\u015e."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"7"_s,
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"1-ci kvartal"_s,
		"2-ci kvartal"_s,
		u"3-c\u00fc kvartal"_s,
		u"4-c\u00fc kvartal"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"1-ci kv."_s,
		"2-ci kv."_s,
		u"3-c\u00fc kv."_s,
		u"4-c\u00fc kv."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"gec\u0259yar\u0131"_s,
		u"g\u00fcnorta"_s,
		u"s\u00fcbh"_s,
		u"s\u0259h\u0259r"_s,
		u"g\u00fcnd\u00fcz"_s,
		""_s,
		u"ax\u015fam\u00fcst\u00fc"_s,
		""_s,
		u"ax\u015fam"_s,
		u"gec\u0259"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"gec\u0259yar\u0131"_s,
		"g"_s,
		u"s\u00fcbh"_s,
		u"s\u0259h\u0259r"_s,
		u"g\u00fcnd\u00fcz"_s,
		""_s,
		u"ax\u015fam\u00fcst\u00fc"_s,
		""_s,
		u"ax\u015fam"_s,
		u"gec\u0259"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"e.\u0259."_s,
		"y.e."_s
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
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G d MMMM y, EEEE"_s,
		"G d MMMM, y"_s,
		"G d MMM y"_s,
		"GGGGG dd.MM.y"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG d MMMM y, EEEE"_s,
		"GGGG d MMMM, y"_s,
		"GGGG d MMM y"_s,
		"G dd.MM.y"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Qreqorian T\u0259qvimi"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0130l"_s)
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
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Ivrit t\u0259qvimi"_s)
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
			$of(u"{0} Standart Vaxt\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Yapon T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"B."_s,
				"B.E."_s,
				u"\u00c7.A."_s,
				u"\u00c7."_s,
				"C.A."_s,
				"C."_s,
				u"\u015e."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"eram\u0131zdan \u0259vv\u0259l"_s,
				"yeni era"_s
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
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"D\u0259qiq\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"M\u0259h\u0259rr\u0259m"_s,
				u"S\u0259f\u0259r"_s,
				u"R\u0259bi\u00fcl\u0259vv\u0259l"_s,
				u"R\u0259bi\u00fclax\u0131r"_s,
				u"C\u0259madiy\u0259l\u0259vv\u0259l"_s,
				u"C\u0259madiy\u0259lax\u0131r"_s,
				u"R\u0259c\u0259b"_s,
				u"\u015eaban"_s,
				"Ramazan"_s,
				u"\u015e\u0259vval"_s,
				u"Zilq\u0259d\u0259"_s,
				u"Zilhicc\u0259"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Minquo T\u0259qvimi"_s)
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
			$of("Ay"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"Saniy\u0259"_s)
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
			$of(u"\u0130slam T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;noon:12:00;night1:19:00-24:00;morning2:06:00-12:00;afternoon1:12:00-17:00;morning1:04:00-06:00;evening1:17:00-19:00;night2:00:00-04:00"_s)
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} Vaxt\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:0\' \'min other:0\' \'min}"_s,
				"{one:00\' \'min other:00\' \'min}"_s,
				"{one:000\' \'min other:000\' \'min}"_s,
				"{one:0\' \'milyon other:0\' \'milyon}"_s,
				"{one:00\' \'milyon other:00\' \'milyon}"_s,
				"{one:000\' \'milyon other:000\' \'milyon}"_s,
				"{one:0\' \'milyard other:0\' \'milyard}"_s,
				"{one:00\' \'milyard other:00\' \'milyard}"_s,
				"{one:000\' \'milyard other:000\' \'milyard}"_s,
				"{one:0\' \'trilyon other:0\' \'trilyon}"_s,
				"{one:00\' \'trilyon other:00\' \'trilyon}"_s,
				"{one:000\' \'trilyon other:000\' \'trilyon}"_s
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
			$of(metaValue_buddhist_MonthNarrows)
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
			$of(u"Saat Qur\u015fa\u011f\u0131"_s)
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
			$of(u"H\u0259ft\u0259nin G\u00fcn\u00fc"_s)
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
			$of(u"H\u0259ft\u0259"_s)
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
				"{one:0K other:0K}"_s,
				"{one:00K other:00K}"_s,
				"{one:000K other:000K}"_s,
				u"{one:0\u00a0mln other:0\u00a0mln}"_s,
				u"{one:00\u00a0mln other:00\u00a0mln}"_s,
				u"{one:000\u00a0mln other:000\u00a0mln}"_s,
				u"{one:0\u00a0mlrd other:0\u00a0mlrd}"_s,
				u"{one:00\u00a0mlrd other:00\u00a0mlrd}"_s,
				u"{one:000\u00a0mlrd other:000\u00a0mlrd}"_s,
				u"{one:0\u00a0trln other:0\u00a0trln}"_s,
				u"{one:00\u00a0trln other:00\u00a0trln}"_s,
				u"{one:000\u00a0trln other:000\u00a0trln}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} Yay Vaxt\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"d MMMM y, EEEE"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"dd.MM.yy"_s
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
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Saat"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"M\u0259h."_s,
				u"S\u0259f."_s,
				u"R\u0259b. I"_s,
				u"R\u0259b. II"_s,
				u"C\u0259m. I"_s,
				u"C\u0259m. II"_s,
				u"R\u0259c."_s,
				u"\u015eab."_s,
				"Ram."_s,
				u"\u015e\u0259v."_s,
				"Zilq."_s,
				"Zilh."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Buddist T\u0259qvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
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
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_az::FormatData_az() {
}

$Class* FormatData_az::load$($String* name, bool initialize) {
	$loadClass(FormatData_az, name, initialize, &_FormatData_az_ClassInfo_, allocate$FormatData_az);
	return class$;
}

$Class* FormatData_az::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun