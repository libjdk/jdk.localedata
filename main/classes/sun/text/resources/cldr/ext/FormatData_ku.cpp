#include <sun/text/resources/cldr/ext/FormatData_ku.h>

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

$MethodInfo _FormatData_ku_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ku::*)()>(&FormatData_ku::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ku_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ku",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ku_MethodInfo_
};

$Object* allocate$FormatData_ku($Class* clazz) {
	return $of($alloc(FormatData_ku));
}

void FormatData_ku::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ku::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"r\u00eabendan\u00ea"_s,
		u"re\u015femiy\u00ea"_s,
		u"adar\u00ea"_s,
		u"avr\u00eal\u00ea"_s,
		u"gulan\u00ea"_s,
		u"p\u00fb\u015fper\u00ea"_s,
		u"t\u00eermeh\u00ea"_s,
		u"gelaw\u00eaj\u00ea"_s,
		u"rezber\u00ea"_s,
		u"kew\u00e7\u00ear\u00ea"_s,
		u"sermawez\u00ea"_s,
		u"berfanbar\u00ea"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"r\u00eab"_s,
		u"re\u015f"_s,
		"ada"_s,
		"avr"_s,
		"gul"_s,
		u"p\u00fb\u015f"_s,
		u"t\u00eer"_s,
		"gel"_s,
		"rez"_s,
		"kew"_s,
		"ser"_s,
		"ber"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"R"_s,
		"R"_s,
		"A"_s,
		"A"_s,
		"G"_s,
		"P"_s,
		"T"_s,
		"G"_s,
		"R"_s,
		"K"_s,
		"S"_s,
		"B"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"yek\u015fem"_s,
		u"du\u015fem"_s,
		u"s\u00ea\u015fem"_s,
		u"\u00e7ar\u015fem"_s,
		u"p\u00eanc\u015fem"_s,
		u"\u00een"_s,
		u"\u015fem\u00ee"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"y\u015f"_s,
		u"d\u015f"_s,
		u"s\u015f"_s,
		u"\u00e7\u015f"_s,
		u"p\u015f"_s,
		u"\u00een"_s,
		u"\u015f"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"Y"_s,
		"D"_s,
		"S"_s,
		u"\u00c7"_s,
		"P"_s,
		u"\u00ce"_s,
		u"\u015e"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u00c7ar\u00eaka 1em"_s,
		u"\u00c7ar\u00eaka 2em"_s,
		u"\u00c7ar\u00eaka 3em"_s,
		u"\u00c7ar\u00eaka 4em"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"\u00c71"_s,
		u"\u00c72"_s,
		u"\u00c73"_s,
		u"\u00c74"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"BN"_s,
		"PN"_s,
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
		"BZ"_s,
		"PZ"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"salnameya gregor\u00ee"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("sal"_s)
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
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"qada dem\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"salnameya japon\u00ee"_s)
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
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"ber\u00ee zay\u00een\u00ea"_s,
				u"pi\u015ft\u00ee zay\u00een\u00ea"_s
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
			$of("field.weekday"_s),
			$of(u"roja heftey\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"deq\u00eeqe"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("serdem"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("BN/PN"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"salnameya Komara \u00c7\u00een\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
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
			$of("field.month"_s),
			$of("meh"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("saniye"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("hefte"_s)
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
			$of("calendarname.islamic"_s),
			$of(u"salnameya ko\u00e7\u00ee"_s)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("saet"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"r\u00eabendan"_s,
				u"re\u015fem\u00ee"_s,
				"adar"_s,
				u"avr\u00eal"_s,
				"gulan"_s,
				u"p\u00fb\u015fper"_s,
				u"t\u00eermeh"_s,
				u"gelaw\u00eaj"_s,
				"rezber"_s,
				u"kew\u00e7\u00ear"_s,
				"sermawez"_s,
				"berfanbar"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00\u00a0\u00a4"_s,
				"%#,##0"_s,
				u"#,##0.00\u00a0\u00a4;(#,##0.00\u00a0\u00a4)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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

FormatData_ku::FormatData_ku() {
}

$Class* FormatData_ku::load$($String* name, bool initialize) {
	$loadClass(FormatData_ku, name, initialize, &_FormatData_ku_ClassInfo_, allocate$FormatData_ku);
	return class$;
}

$Class* FormatData_ku::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun