#include <sun/text/resources/cldr/ext/FormatData_es_419.h>

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

$MethodInfo _FormatData_es_419_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_es_419::*)()>(&FormatData_es_419::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_es_419_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_es_419",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_419_MethodInfo_
};

$Object* allocate$FormatData_es_419($Class* clazz) {
	return $of($alloc(FormatData_es_419));
}

void FormatData_es_419::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_419::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"ene."_s,
		"feb."_s,
		"mar."_s,
		"abr."_s,
		"may."_s,
		"jun."_s,
		"jul."_s,
		"ago."_s,
		"sep."_s,
		"oct."_s,
		"nov."_s,
		"dic."_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"d"_s,
		"l"_s,
		"m"_s,
		"m"_s,
		"j"_s,
		"v"_s,
		"s"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1.\u00ba trimestre"_s,
		u"2.\u00ba trimestre"_s,
		u"3.\u00ba trimestre"_s,
		u"4.\u00ba trimestre"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d \'de\' MMMM \'de\' y G"_s,
		"d \'de\' MMMM \'de\' y G"_s,
		"d \'de\' MMM \'de\' y G"_s,
		"dd/MM/yy GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d \'de\' MMMM \'de\' y GGGG"_s,
		"d \'de\' MMMM \'de\' y GGGG"_s,
		"d \'de\' MMM \'de\' y GGGG"_s,
		"dd/MM/yy G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		"antes de R.O.C."_s,
		"R.O.C."_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"M"_s,
				"J"_s,
				"V"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"hora est\u00e1ndar de {0}"_s)
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
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"dom."_s,
				"lun."_s,
				"mar."_s,
				u"mi\u00e9."_s,
				"jue."_s,
				"vie."_s,
				u"s\u00e1b."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
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
				u"{one:0\u00a0K other:0\u00a0K}"_s,
				u"{one:00\u00a0k other:00\u00a0k}"_s,
				u"{one:000\u00a0k other:000\u00a0k}"_s,
				u"{one:0\u00a0M other:0\u00a0M}"_s,
				u"{one:00\u00a0M other:00\u00a0M}"_s,
				u"{one:000\u00a0M other:000\u00a0M}"_s,
				u"{one:0000\u00a0M other:0000\u00a0M}"_s,
				u"{one:00\u00a0mil\u00a0M other:00\u00a0mil\u00a0M}"_s,
				u"{one:000\u00a0mil\u00a0M other:000\u00a0mil\u00a0M}"_s,
				u"{one:0\u00a0B other:0\u00a0B}"_s,
				u"{one:00\u00a0B other:00\u00a0B}"_s,
				u"{one:000\u00a0B other:000\u00a0B}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of("hora de verano de {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d \'de\' MMMM \'de\' y"_s,
				"d \'de\' MMMM \'de\' y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				"{1}, {0}"_s,
				"{1}, {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
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
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Muh."_s,
				"Saf."_s,
				"Rab. I"_s,
				"Rab. II"_s,
				"Jum. I"_s,
				"Jum. II"_s,
				"Raj."_s,
				"Sha."_s,
				"Ram."_s,
				"Shaw."_s,
				u"Dhu\u02bbl-Q."_s,
				u"Dhu\u02bbl-H."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u00a4#,##0.00"_s,
				u"#,##0\u00a0%"_s,
				u"\u00a4#,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:0\' \'mil other:0\' \'mil}"_s,
				"{one:00\' \'mil other:00\' \'mil}"_s,
				"{one:000\' \'mil other:000\' \'mil}"_s,
				u"{one:0\' \'mill\u00f3n other:0\' \'millones}"_s,
				"{one:00\' \'millones other:00\' \'millones}"_s,
				"{one:000\' \'millones other:000\' \'millones}"_s,
				"{one:0\' \'mil\' \'millones other:0\' \'mil\' \'millones}"_s,
				"{one:00\' \'mil\' \'millones other:00\' \'mil\' \'millones}"_s,
				"{one:000\' \'mil\' \'millones other:000\' \'mil\' \'millones}"_s,
				u"{one:0\' \'bill\u00f3n other:0\' \'bill\u00f3n}"_s,
				"{one:00\' \'billones other:00\' \'billones}"_s,
				"{one:000\' \'billones other:000\' \'billones}"_s
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
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"Muharram"_s,
				"Safar"_s,
				u"Rabi\u02bb I"_s,
				u"Rabi\u02bb II"_s,
				"Jumada I"_s,
				"Jumada II"_s,
				"Rajab"_s,
				u"Sha\u02bbban"_s,
				"Ramadan"_s,
				"Shawwal"_s,
				u"Dhu\u02bbl-Qi\u02bbdah"_s,
				u"Dhu\u02bbl-Hijjah"_s,
				""_s
			}))
		})
	}));
	return data;
}

FormatData_es_419::FormatData_es_419() {
}

$Class* FormatData_es_419::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_419, name, initialize, &_FormatData_es_419_ClassInfo_, allocate$FormatData_es_419);
	return class$;
}

$Class* FormatData_es_419::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun