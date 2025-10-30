#include <sun/util/resources/cldr/ext/TimeZoneNames_lrc.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_lrc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_lrc::*)()>(&TimeZoneNames_lrc::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_lrc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_lrc",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_lrc_MethodInfo_
};

$Object* allocate$TimeZoneNames_lrc($Class* clazz) {
	return $of($alloc(TimeZoneNames_lrc));
}

void TimeZoneNames_lrc::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_lrc::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u06af\u0627\u065b\u062a \u0645\u06cc\u0646\u062c\u0627\u065b\u06cc\u06cc \u0626\u0633\u062a\u0627\u065b\u0646\u062f\u0627\u065b\u0631\u062f"_s,
		""_s,
		u"\u0631\u0648\u0659\u0634\u0646\u0627\u06cc\u06cc \u0646\u0626\u0647\u0627\u062f\u0627\u0631 \u0631\u0648\u0659\u0632"_s,
		""_s,
		u"\u06af\u0627\u065b\u062a \u0645\u06cc\u0646\u062c\u0627\u065b\u06cc\u06cc"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u0646\u0627\u062f\u06cc\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		})
	}));
	return data;
}

TimeZoneNames_lrc::TimeZoneNames_lrc() {
}

$Class* TimeZoneNames_lrc::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_lrc, name, initialize, &_TimeZoneNames_lrc_ClassInfo_, allocate$TimeZoneNames_lrc);
	return class$;
}

$Class* TimeZoneNames_lrc::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun