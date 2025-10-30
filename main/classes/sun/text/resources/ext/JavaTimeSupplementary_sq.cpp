#include <sun/text/resources/ext/JavaTimeSupplementary_sq.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_sq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_sq::*)()>(&JavaTimeSupplementary_sq::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_sq_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_sq",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_sq_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_sq($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_sq));
}

void JavaTimeSupplementary_sq::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sq::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"tremujori I"_s,
		"tremujori II"_s,
		"tremujori III"_s,
		"tremujori IV"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"tremujori i par\u00eb"_s,
		u"tremujori i dyt\u00eb"_s,
		u"tremujori i tret\u00eb"_s,
		u"tremujori i kat\u00ebrt"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"e paradites"_s,
		"e pasdites"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Die"_s,
		u"H\u00ebn"_s,
		"Mar"_s,
		u"M\u00ebr"_s,
		"Enj"_s,
		"Pre"_s,
		"Sht"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"e diel"_s,
		u"e h\u00ebn\u00eb"_s,
		u"e mart\u00eb"_s,
		u"e m\u00ebrkur\u00eb"_s,
		"e enjte"_s,
		"e premte"_s,
		u"e shtun\u00eb"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"H"_s,
		"M"_s,
		"M"_s,
		"E"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a, zzzz"_s,
		"h:mm:ss a, z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMM y G"_s,
		"d MMM y G"_s,
		"d MMM y G"_s,
		"d.M.y GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("kalendar budist"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("kalendar gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("kalendar gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("kalendar islamik"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("Kalendari Islamik (tabelor, periudha civile)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("Kalendari Islamik (Um al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("kalendar japonez"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("kalendar minguo (kinez)"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("paradite/pasdite"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"er\u00eb"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"or\u00eb"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"minut\u00eb"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("muaj"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"sekond\u00eb"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"jav\u00eb"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"dit\u00eb e jav\u00ebs"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("vit"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("brezi orar"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"para er\u00ebs s\u00eb re"_s,
				u"er\u00ebs s\u00eb re"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"p.e.r."_s,
				"n.e.r."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Shk"_s,
				"Mar"_s,
				"Pri"_s,
				"Maj"_s,
				"Qer"_s,
				"Kor"_s,
				"Gsh"_s,
				"Sht"_s,
				"Tet"_s,
				u"N\u00ebn"_s,
				"Dhj"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"janar"_s,
				"shkurt"_s,
				"mars"_s,
				"prill"_s,
				"maj"_s,
				"qershor"_s,
				"korrik"_s,
				"gusht"_s,
				"shtator"_s,
				"tetor"_s,
				u"n\u00ebntor"_s,
				"dhjetor"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"S"_s,
				"M"_s,
				"P"_s,
				"M"_s,
				"Q"_s,
				"K"_s,
				"G"_s,
				"S"_s,
				"T"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"Ora e Grenui\u00e7it: {0}"_s)
		})
	});
}

JavaTimeSupplementary_sq::JavaTimeSupplementary_sq() {
}

$Class* JavaTimeSupplementary_sq::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_sq, name, initialize, &_JavaTimeSupplementary_sq_ClassInfo_, allocate$JavaTimeSupplementary_sq);
	return class$;
}

$Class* JavaTimeSupplementary_sq::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun