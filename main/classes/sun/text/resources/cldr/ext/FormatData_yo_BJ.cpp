#include <sun/text/resources/cldr/ext/FormatData_yo_BJ.h>

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

$MethodInfo _FormatData_yo_BJ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_yo_BJ::*)()>(&FormatData_yo_BJ::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_yo_BJ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_yo_BJ",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_yo_BJ_MethodInfo_
};

$Object* allocate$FormatData_yo_BJ($Class* clazz) {
	return $of($alloc(FormatData_yo_BJ));
}

void FormatData_yo_BJ::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_yo_BJ::getContents() {
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"Osh\u00f9 Sh\u025b\u0301r\u025b\u0301"_s,
		u"Osh\u00f9 \u00c8r\u00e8l\u00e8"_s,
		u"Osh\u00f9 \u0190r\u025b\u0300n\u00e0"_s,
		u"Osh\u00f9 \u00ccgb\u00e9"_s,
		u"Osh\u00f9 \u0190\u0300bibi"_s,
		u"Osh\u00f9 \u00d2k\u00fadu"_s,
		u"Osh\u00f9 Ag\u025bm\u0254"_s,
		u"Osh\u00f9 \u00d2g\u00fan"_s,
		u"Osh\u00f9 Owewe"_s,
		u"Osh\u00f9 \u0186\u0300w\u00e0r\u00e0"_s,
		u"Osh\u00f9 B\u00e9l\u00fa"_s,
		u"Osh\u00f9 \u0186\u0300p\u025b\u0300"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"Sh\u025b\u0301r"_s,
		u"\u00c8r\u00e8l"_s,
		u"\u0190r\u025b\u0300n"_s,
		u"\u00ccgb"_s,
		u"\u0190\u0300bi"_s,
		u"\u00d2k\u00fa"_s,
		u"Ag\u025b"_s,
		u"\u00d2g\u00fa"_s,
		"Owe"_s,
		u"\u0186\u0300w\u00e0"_s,
		u"B\u00e9l"_s,
		u"\u0186\u0300p\u025b"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"S"_s,
		u"\u00c8"_s,
		u"\u0190"_s,
		u"\u00cc"_s,
		u"\u0190\u0300"_s,
		u"\u00d2"_s,
		"A"_s,
		u"\u00d2"_s,
		"O"_s,
		u"\u0186\u0300"_s,
		"B"_s,
		u"\u0186\u0300"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"\u0186j\u0254\u0301 \u00c0\u00eck\u00fa"_s,
		u"\u0186j\u0254\u0301 Aj\u00e9"_s,
		u"\u0186j\u0254\u0301 \u00ccs\u025b\u0301gun"_s,
		u"\u0186j\u0254\u0301r\u00fa"_s,
		u"\u0186j\u0254\u0301b\u0254"_s,
		u"\u0186j\u0254\u0301 \u0190t\u00ec"_s,
		u"\u0186j\u0254\u0301 \u00c0b\u00e1m\u025b\u0301ta"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"\u00c0\u00eck"_s,
		"Aj"_s,
		u"\u00ccs\u025b\u0301g"_s,
		u"\u0186j\u0254\u0301r"_s,
		u"\u0186j\u0254\u0301b"_s,
		u"\u0190t"_s,
		u"\u00c0b\u00e1m"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"\u00c0"_s,
		"A"_s,
		u"\u00cc"_s,
		u"\u0186"_s,
		u"\u0186"_s,
		u"\u0190"_s,
		u"\u00c0"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"\u00ccd\u00e1m\u025b\u0301rin k\u00edn\u00ed"_s,
		u"\u00ccd\u00e1m\u025b\u0301rin Kej\u00ec"_s,
		u"\u00ccd\u00e1m\u025b\u0301rin K\u025bta"_s,
		u"\u00ccd\u00e1m\u025b\u0301rin K\u025brin"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"k\u00edn\u00ed"_s,
		u"Kej\u00ec"_s,
		u"K\u025bta"_s,
		u"K\u025bin"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"\u00c0\u00e1r\u0254\u0300"_s,
		u"\u0186\u0300s\u00e1n"_s,
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
	$var($String, metaValue_calendarname_gregorian, u"K\u00e0l\u025b\u0301\u0144d\u00e0 Gregory"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"\u0186d\u00fan"_s)
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
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 ti J\u00e0p\u00e1n\u00f9"_s)
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
				u"K\u025bt"_s,
				u"K\u025br"_s
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
			$of("field.weekday"_s),
			$of(u"\u0186j\u0254\u0301 t\u00f3 w\u00e0 l\u00e1\u00e0\u00e1r\u00edn \u0254\u0300s\u025b\u0300"_s)
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u00ccs\u025b\u0301j\u00fa"_s)
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
			$of(u"\u00c0\u00e1r\u0254\u0300/\u0254\u0300s\u00e1n"_s)
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
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 Minguo"_s)
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
			$of("field.second"_s),
			$of(u"\u00ccs\u025b\u0301j\u00fa \u00c0\u00e0y\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u0186\u0300s\u025b\u0300"_s)
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
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 L\u00e1r\u00fab\u00e1w\u00e1"_s)
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
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} \u00c0k\u00f3k\u00f2 oj\u00fam\u0254m\u0254"_s)
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
			$of($$new($StringArray, {
				u"\u00c0\u00eck\u00fa"_s,
				u"Aj\u00e9"_s,
				u"\u00ccs\u025b\u0301gun"_s,
				u"\u0186j\u0254\u0301r\u00fa"_s,
				u"\u0186j\u0254\u0301b\u0254"_s,
				u"\u0190t\u00ec"_s,
				u"\u00c0b\u00e1m\u025b\u0301ta"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"Sh\u025b\u0301r\u025b\u0301"_s,
				u"\u00c8r\u00e8l\u00e8"_s,
				u"\u0190r\u025b\u0300n\u00e0"_s,
				u"\u00ccgb\u00e9"_s,
				u"\u0190\u0300bibi"_s,
				u"\u00d2k\u00fadu"_s,
				u"Ag\u025bm\u0254"_s,
				u"\u00d2g\u00fan"_s,
				"Owewe"_s,
				u"\u0186\u0300w\u00e0r\u00e0"_s,
				u"B\u00e9l\u00fa"_s,
				u"\u0186\u0300p\u025b\u0300"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"Sh\u025b\u0301"_s,
				u"\u00c8r"_s,
				u"\u0190r"_s,
				u"\u00ccg"_s,
				u"\u0190\u0300b"_s,
				u"\u00d2k"_s,
				"Ag"_s,
				u"\u00d2g"_s,
				"Ow"_s,
				u"\u0186\u0300w"_s,
				u"B\u00e9"_s,
				u"\u0186\u0300p"_s,
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
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'\u025bgb\u025b\u0300r\u00fan}"_s,
				u"{other:00\' \'\u025bgb\u025b\u0300r\u00fan}"_s,
				u"{other:000\' \'\u025bgb\u025b\u0300r\u00fan}"_s,
				u"{other:0\' \'m\u00edl\u00ed\u0254\u0300n\u00f9}"_s,
				u"{other:00\' \'m\u00edl\u00ed\u0254\u0300n\u00f9}"_s,
				u"{other:000\' \'m\u00edl\u00ed\u0254\u0300n\u00f9}"_s,
				u"{other:0\' \'bil\u00ed\u0254\u0300n\u00f9}"_s,
				u"{other:00\' \'bil\u00ed\u0254\u0300n\u00f9}"_s,
				u"{other:000\' \'bil\u00ed\u0254\u0300n\u00f9}"_s,
				u"{other:0\' \'tirili\u0254\u0300n\u00f9}"_s,
				u"{other:00\' \'tirili\u0254\u0300n\u00f9}"_s,
				u"{other:000\' \'tirili\u0254\u0300n\u00f9}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				u"\u00ccd\u00e1m\u1eb9\u0301rin k\u00edn\u00ed"_s,
				u"\u00ccd\u00e1m\u1eb9\u0301rin Kej\u00ec"_s,
				u"\u00ccd\u00e1m\u025b\u0301rin K\u025bta"_s,
				u"\u00ccd\u00e1m\u1eb9\u0301rin K\u1eb9rin"_s
			}))
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

FormatData_yo_BJ::FormatData_yo_BJ() {
}

$Class* FormatData_yo_BJ::load$($String* name, bool initialize) {
	$loadClass(FormatData_yo_BJ, name, initialize, &_FormatData_yo_BJ_ClassInfo_, allocate$FormatData_yo_BJ);
	return class$;
}

$Class* FormatData_yo_BJ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun