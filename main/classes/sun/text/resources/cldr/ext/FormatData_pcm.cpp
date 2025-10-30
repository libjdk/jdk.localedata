#include <sun/text/resources/cldr/ext/FormatData_pcm.h>

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

$MethodInfo _FormatData_pcm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_pcm::*)()>(&FormatData_pcm::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_pcm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_pcm",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pcm_MethodInfo_
};

$Object* allocate$FormatData_pcm($Class* clazz) {
	return $of($alloc(FormatData_pcm));
}

void FormatData_pcm::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_pcm::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"J\u00e9n\u00fa\u00e1ri"_s,
		u"F\u1eb9\u0301b\u00fa\u00e1ri"_s,
		"Mach"_s,
		u"\u00c9prel"_s,
		"Mee"_s,
		"Jun"_s,
		"Julai"_s,
		u"\u1eccg\u1ecdst"_s,
		u"S\u1eb9pt\u1eb9\u0301mba"_s,
		u"\u1ecckt\u00f3ba"_s,
		u"N\u1ecdv\u1eb9\u0301mba"_s,
		u"Dis\u1eb9\u0301mba"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"J\u00e9n"_s,
		u"F\u1eb9\u0301b"_s,
		"Mach"_s,
		u"\u00c9pr"_s,
		"Mee"_s,
		"Jun"_s,
		"Jul"_s,
		u"\u1eccg\u1ecd"_s,
		u"S\u1eb9p"_s,
		u"\u1ecckt"_s,
		u"N\u1ecdv"_s,
		"Dis"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
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
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"S\u1ecd\u0301nd\u00e8"_s,
		u"M\u1ecd\u0301nd\u00e8"_s,
		u"Ti\u00fazd\u00e8"_s,
		u"W\u1eb9\u0301n\u1eb9\u0301zd\u00e8"_s,
		u"T\u1ecd\u0301zd\u00e8"_s,
		u"Fra\u00edd\u00e8"_s,
		u"S\u00e1t\u1ecdd\u00e8"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"S\u1ecd\u0301n"_s,
		u"M\u1ecd\u0301n"_s,
		u"Ti\u00fa"_s,
		u"W\u1eb9\u0301n"_s,
		u"T\u1ecd\u0301z"_s,
		u"Fra\u00ed"_s,
		u"S\u00e1t"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"F\u1eb9\u0301st Kw\u1ecd\u0301ta"_s,
		u"S\u1eb9\u0301k\u1ecd\u0301n Kw\u1ecd\u0301ta"_s,
		u"T\u1ecd\u0301d Kw\u1ecd\u0301ta"_s,
		u"F\u1ecd\u0301t Kw\u1ecd\u0301ta"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"F\u1ecd m\u1ecd\u0301nin"_s,
		u"F\u1ecd \u00edvnin"_s,
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
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"BK"_s,
		"KIY"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_DayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		"T"_s,
		"W"_s,
		"T"_s,
		"F"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_buddhist_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
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
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Gr\u1eb9\u0301g\u00f3r\u00ed Kal\u1eb9\u0301nda"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"Yi\u1eb9"_s)
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
			$of(metaValue_buddhist_narrow_AmPmMarkers)
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
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} F\u00edksd Taim"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Jap\u00e1n Kal\u1eb9\u0301nda"_s)
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
				u"Bif\u1ecd\u0301 Kraist"_s,
				u"Kraist Im Yi\u1eb9"_s
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
				u"{1} \'f\u1ecd\' {0}"_s,
				u"{1} \'f\u1ecd\' {0}"_s,
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
			$of(u"M\u00ednit"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("Taim"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"f\u1ecd m\u1ecd\u0301nin f\u1ecd \u00e1ftanun f\u1ecd \u00edvnin f\u1ecd nait"_s)
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
			$of(u"Rip\u1ecd\u0301bl\u00edk \u1ecdf Cha\u00edn\u00e1 Kal\u1eb9\u0301nda"_s)
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
			$of(u"M\u1ecdnt"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"S\u1eb9\u0301k\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"M\u00fasl\u00edm Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_buddhist_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"J\u00e9n"_s,
				u"F\u1eb9\u0301b"_s,
				"Mach"_s,
				u"\u00c9pr"_s,
				"Mee"_s,
				"Jun"_s,
				"Jul"_s,
				u"\u1ecc\u0301g\u1ecd"_s,
				u"S\u1eb9p"_s,
				u"\u1ecckt"_s,
				u"N\u1ecdv"_s,
				"Dis"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of("{0} Taim"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'Ta\u00fazan other:0\' \'Ta\u00fazan}"_s,
				u"{one:00\' \'Ta\u00fazan other:00\' \'Ta\u00fazan}"_s,
				u"{one:000\' \'Ta\u00fazan other:000\' \'Ta\u00fazan}"_s,
				u"{one:0\' \'M\u00edli\u1ecdn other:0\' \'M\u00edli\u1ecdn}"_s,
				u"{one:00\' \'M\u00edli\u1ecdn other:00\' \'M\u00edli\u1ecdn}"_s,
				u"{one:000\' \'M\u00edli\u1ecdn other:000\' \'M\u00edli\u1ecdn}"_s,
				u"{one:0\' \'B\u00edli\u1ecdn other:0\' \'B\u00edli\u1ecdn}"_s,
				u"{one:00\' \'B\u00edli\u1ecdn other:00\' \'B\u00edli\u1ecdn}"_s,
				u"{one:000\' \'B\u00edli\u1ecdn other:000\' \'B\u00edli\u1ecdn}"_s,
				u"{one:0\' \'Tr\u00edli\u1ecdn other:0\' \'Tr\u00edli\u1ecdn}"_s,
				u"{one:00\' \'Tr\u00edli\u1ecdn other:00\' \'Tr\u00edli\u1ecdn}"_s,
				u"{one:000\' \'Tr\u00edli\u1ecdn other:000\' \'Tr\u00edli\u1ecdn}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_buddhist_narrow_AmPmMarkers)
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
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"Ta\u00edm Zon"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_buddhist_narrow_AmPmMarkers)
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"D\u00e8 f\u1ecd wik"_s)
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
			$of("Wik"_s)
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
			$of(metaValue_buddhist_DayNarrows)
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
				"{one:0M other:0M}"_s,
				"{one:00M other:00M}"_s,
				"{one:000M other:000M}"_s,
				"{one:0B other:0B}"_s,
				"{one:00B other:00B}"_s,
				"{one:000B other:000B}"_s,
				"{one:0T other:0T}"_s,
				"{one:00T other:00T}"_s,
				"{one:000T other:000T}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} D\u00e9la\u00edt Taim"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
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
			$of("PluralRules"_s),
			$of("one:i = 0 or n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Awa"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"B\u00fad\u00edst Kal\u1eb9\u0301nda"_s)
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
				u"\u00a4#,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
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
			$of("japanese.DayNarrows"_s),
			$of(metaValue_buddhist_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_pcm::FormatData_pcm() {
}

$Class* FormatData_pcm::load$($String* name, bool initialize) {
	$loadClass(FormatData_pcm, name, initialize, &_FormatData_pcm_ClassInfo_, allocate$FormatData_pcm);
	return class$;
}

$Class* FormatData_pcm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun