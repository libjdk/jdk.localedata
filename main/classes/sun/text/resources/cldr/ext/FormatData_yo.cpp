#include <sun/text/resources/cldr/ext/FormatData_yo.h>

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

$MethodInfo _FormatData_yo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_yo::*)()>(&FormatData_yo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_yo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_yo",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_yo_MethodInfo_
};

$Object* allocate$FormatData_yo($Class* clazz) {
	return $of($alloc(FormatData_yo));
}

void FormatData_yo::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_yo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"O\u1e63\u00f9 \u1e62\u1eb9\u0301r\u1eb9\u0301"_s,
		u"O\u1e63\u00f9 \u00c8r\u00e8l\u00e8"_s,
		u"O\u1e63\u00f9 \u1eb8r\u1eb9\u0300n\u00e0"_s,
		u"O\u1e63\u00f9 \u00ccgb\u00e9"_s,
		u"O\u1e63\u00f9 \u1eb8\u0300bibi"_s,
		u"O\u1e63\u00f9 \u00d2k\u00fadu"_s,
		u"O\u1e63\u00f9 Ag\u1eb9m\u1ecd"_s,
		u"O\u1e63\u00f9 \u00d2g\u00fan"_s,
		u"O\u1e63\u00f9 Owewe"_s,
		u"O\u1e63\u00f9 \u1ecc\u0300w\u00e0r\u00e0"_s,
		u"O\u1e63\u00f9 B\u00e9l\u00fa"_s,
		u"O\u1e63\u00f9 \u1ecc\u0300p\u1eb9\u0300"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"\u1e62\u1eb9\u0301r"_s,
		u"\u00c8r\u00e8l"_s,
		u"\u1eb8r\u1eb9\u0300n"_s,
		u"\u00ccgb"_s,
		u"\u1eb8\u0300bi"_s,
		u"\u00d2k\u00fa"_s,
		u"Ag\u1eb9"_s,
		u"\u00d2g\u00fa"_s,
		"Owe"_s,
		u"\u1ecc\u0300w\u00e0"_s,
		u"B\u00e9l"_s,
		u"\u1ecc\u0300p\u1eb9"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"S"_s,
		u"\u00c8"_s,
		u"\u1eb8"_s,
		u"\u00cc"_s,
		u"\u1eb8\u0300"_s,
		u"\u00d2"_s,
		"A"_s,
		u"\u00d2"_s,
		"O"_s,
		u"\u1ecc\u0300"_s,
		"B"_s,
		u"\u1ecc\u0300"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u1eccj\u1ecd\u0301 \u00c0\u00eck\u00fa"_s,
		u"\u1eccj\u1ecd\u0301 Aj\u00e9"_s,
		u"\u1eccj\u1ecd\u0301 \u00ccs\u1eb9\u0301gun"_s,
		u"\u1eccj\u1ecd\u0301r\u00fa"_s,
		u"\u1eccj\u1ecd\u0301b\u1ecd"_s,
		u"\u1eccj\u1ecd\u0301 \u1eb8t\u00ec"_s,
		u"\u1eccj\u1ecd\u0301 \u00c0b\u00e1m\u1eb9\u0301ta"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u00c0\u00eck"_s,
		"Aj"_s,
		u"\u00ccs\u1eb9\u0301g"_s,
		u"\u1eccj\u1ecd\u0301r"_s,
		u"\u1eccj\u1ecd\u0301b"_s,
		u"\u1eb8t"_s,
		u"\u00c0b\u00e1m"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u00c0"_s,
		"A"_s,
		u"\u00cc"_s,
		u"\u1ecc"_s,
		u"\u1ecc"_s,
		u"\u1eb8"_s,
		u"\u00c0"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u00ccd\u00e1m\u1eb9\u0301rin k\u00edn\u00ed"_s,
		u"\u00ccd\u00e1m\u1eb9\u0301rin Kej\u00ec"_s,
		u"\u00ccd\u00e1m\u1eb9\u0301rin K\u1eb9ta"_s,
		u"\u00ccd\u00e1m\u1eb9\u0301rin K\u1eb9rin"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"k\u00edn\u00ed"_s,
		u"Kej\u00ec"_s,
		u"K\u1eb9ta"_s,
		u"K\u1eb9in"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u00c0\u00e1r\u1ecd\u0300"_s,
		u"\u1ecc\u0300s\u00e1n"_s,
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
		"BCE"_s,
		"AD"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:m:s"_s,
		"H:m"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MM y G"_s,
		"d MM y G"_s,
		"d MM y G"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MM y GGGG"_s,
		"d MM y GGGG"_s,
		"d MM y GGGG"_s,
		"dd/MM/y GGGG"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 Gregory"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u1eccd\u00fan"_s)
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
			$of("WAT{0}"_s)
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
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} \u00ccl\u00e0n\u00e0 \u00c0k\u00f3k\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 ti J\u00e0p\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of("WAT"_s)
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
				"Saju Kristi"_s,
				"Lehin Kristi"_s
			}))
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
			$of(u"\u00ccs\u1eb9\u0301j\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"s\u00e1\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"\u00c0\u00e1r\u1ecd\u0300/\u1ecd\u0300s\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"Os\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u00ccs\u1eb9\u0301j\u00fa \u00c0\u00e0y\u00e1"_s)
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
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 L\u00e1r\u00fab\u00e1w\u00e1"_s)
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
				u"\u1e62\u1eb9\u0301"_s,
				u"\u00c8r"_s,
				u"\u1eb8r"_s,
				u"\u00ccg"_s,
				u"\u1eb8\u0300b"_s,
				u"\u00d2k"_s,
				"Ag"_s,
				u"\u00d2g"_s,
				"Ow"_s,
				u"\u1ecc\u0300w"_s,
				u"B\u00e9"_s,
				u"\u1ecc\u0300p"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"\u00ccgb\u00e0 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u1eb9gb\u1eb9\u0300r\u00fan}"_s,
				u"{other:00\' \'\u1eb9gb\u1eb9\u0300r\u00fan}"_s,
				u"{other:000\' \'\u1eb9gb\u1eb9\u0300r\u00fan}"_s,
				u"{other:0\' \'m\u00edl\u00ed\u1ecd\u0300n\u00f9}"_s,
				u"{other:00\' \'m\u00edl\u00ed\u1ecd\u0300n\u00f9}"_s,
				u"{other:000\' \'m\u00edl\u00ed\u1ecd\u0300n\u00f9}"_s,
				u"{other:0\' \'bil\u00ed\u1ecd\u0300n\u00f9}"_s,
				u"{other:00\' \'bil\u00ed\u1ecd\u0300n\u00f9}"_s,
				u"{other:000\' \'bil\u00ed\u1ecd\u0300n\u00f9}"_s,
				u"{other:0\' \'tirili\u1ecd\u0300n\u00f9}"_s,
				u"{other:00\' \'tirili\u1ecd\u0300n\u00f9}"_s,
				u"{other:000\' \'tirili\u1ecd\u0300n\u00f9}"_s
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
			$of(u"Agb\u00e8gb\u00e8 \u00e0k\u00f3k\u00f2"_s)
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
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of($$new($StringArray, {
				u"k\u00ed"_s,
				"Ke"_s,
				u"K\u1eb9t"_s,
				u"K\u1eb9r"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u1eccj\u1ecd\u0301 t\u00f3 w\u00e0 l\u00e1\u00e0\u00e1r\u00edn \u1ecd\u0300s\u1eb9\u0300"_s)
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
			$of(u"\u1ecc\u0300s\u1eb9\u0300"_s)
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
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u00c0k\u00f3k\u00f2 oj\u00fam\u1ecdm\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMM y"_s,
				"d MMM y"_s,
				"d MM y"_s,
				"d/M/y"_s
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
			$of($$new($StringArray, {
				u"\u00c0\u00eck\u00fa"_s,
				u"Aj\u00e9"_s,
				u"\u00ccs\u1eb9\u0301gun"_s,
				u"\u1eccj\u1ecd\u0301r\u00fa"_s,
				u"\u1eccj\u1ecd\u0301b\u1ecd"_s,
				u"\u1eb8t\u00ec"_s,
				u"\u00c0b\u00e1m\u1eb9\u0301ta"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"W\u00e1k\u00e0t\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"\u1e62\u1eb9\u0301r\u1eb9\u0301"_s,
				u"\u00c8r\u00e8l\u00e8"_s,
				u"\u1eb8r\u1eb9\u0300n\u00e0"_s,
				u"\u00ccgb\u00e9"_s,
				u"\u1eb8\u0300bibi"_s,
				u"\u00d2k\u00fadu"_s,
				u"Ag\u1eb9m\u1ecd"_s,
				u"\u00d2g\u00fan"_s,
				"Owewe"_s,
				u"\u1ecc\u0300w\u00e0r\u00e0"_s,
				u"B\u00e9l\u00fa"_s,
				u"\u1ecc\u0300p\u1eb9\u0300"_s,
				""_s
			}))
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
			$of(metaValue_QuarterNames)
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

FormatData_yo::FormatData_yo() {
}

$Class* FormatData_yo::load$($String* name, bool initialize) {
	$loadClass(FormatData_yo, name, initialize, &_FormatData_yo_ClassInfo_, allocate$FormatData_yo);
	return class$;
}

$Class* FormatData_yo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun