#include <sun/util/resources/cldr/ext/TimeZoneNames_mni.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_mni_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_mni::*)()>(&TimeZoneNames_mni::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_mni_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_mni",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_mni_MethodInfo_
};

$Object* allocate$TimeZoneNames_mni($Class* clazz) {
	return $of($alloc(TimeZoneNames_mni));
}

void TimeZoneNames_mni::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_mni::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\u0997\u09cd\u09b0\u09bf\u09a8\u09f1\u09bf\u099a \u09ae\u09bf\u09a8 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"\u0995\u09cb\u0993\u09b0\u09cd\u09a6\u09bf\u09a8\u09c7\u099f\u09c7\u09a6 \u09af\u09bc\u09c1\u09a8\u09bf\u09ad\u09b0\u09cd\u09b8\u09c7\u09b2 \u099f\u09be\u0987\u09ae"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\u0985\u099f\u09b2\u09be\u09a8\u09cd\u099f\u09bf\u0995 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u0985\u099f\u09b2\u09be\u09a8\u09cd\u099f\u09bf\u0995 \u09a6\u09c7\u09b2\u09be\u0987\u099f \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u0985\u099f\u09b2\u09be\u09a8\u09cd\u099f\u09bf\u0995 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u09b8\u09c7\u09a8\u09cd\u09a4\u09cd\u09b0\u09c7\u09b2 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09b8\u09c7\u09a8\u09cd\u09a4\u09cd\u09b0\u09c7\u09b2 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09b8\u09ae\u09b0 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09b8\u09c7\u09a8\u09cd\u09a4\u09cd\u09b0\u09c7\u09b2 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u0987\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u0987\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09b8\u09ae\u09b0 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u0987\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u09f1\u09c7\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09f1\u09c7\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u09b8\u09ae\u09b0 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09f1\u09c7\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09af\u09bc\u09c1\u09b0\u09cb\u09aa\u09bf\u09af\u09bc\u09be\u09a8 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09b8\u09c7\u09a8\u09cd\u09a4\u09cd\u09b0\u09c7\u09b2 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09b8\u09c7\u09a8\u09cd\u09a4\u09cd\u09b0\u09c7\u09b2 \u09a6\u09c7\u09b2\u09be\u0987\u099f \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09b8\u09c7\u09a8\u09cd\u09a4\u09cd\u09b0\u09c7\u09b2 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u0987\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u0987\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u09a6\u09c7\u09b2\u09be\u0987\u099f \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u0987\u09b7\u09cd\u099f\u09b0\u09cd\u09a8 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09aa\u09c7\u09b8\u09bf\u09ab\u09bf\u0995 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09aa\u09c7\u09b8\u09bf\u09ab\u09bf\u0995 \u09a6\u09c7\u09b2\u09be\u0987\u099f \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09aa\u09c7\u09b8\u09bf\u09ab\u09bf\u0995 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09ae\u09be\u0989\u09a8\u09cd\u099f\u09c7\u09a8 \u09b7\u09cd\u099f\u09c7\u09a8\u09cd\u09a6\u09b0\u09cd\u09a6 \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09ae\u09be\u0989\u09a8\u09cd\u099f\u09c7\u09a8 \u09a6\u09c7\u09b2\u09be\u0987\u099f \u099f\u09be\u0987\u09ae"_s,
		""_s,
		u"\u09a8\u09cb\u09b0\u09cd\u09a5 \u0985\u09ae\u09c7\u09b0\u09bf\u0995\u09be\u09a8 \u09ae\u09be\u0989\u09a8\u09cd\u099f\u09c7\u09a8 \u099f\u09be\u0987\u09ae"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Etc/GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Banjul"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bissau"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Sao_Tome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Timbuktu"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(Atlantic)
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
			$of("America/St_Thomas"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(Atlantic)
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
			$of("America/Thunder_Bay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(America_Mountain)
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
			$of("America/Cambridge_Bay"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(Atlantic)
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
			$of("America/Port-au-Prince"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(America_Eastern)
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
			$of(u"\u0996\u0982\u09a6\u09ac\u09be \u09b8\u09bf\u099f\u09bf"_s)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		})
	}));
	return data;
}

TimeZoneNames_mni::TimeZoneNames_mni() {
}

$Class* TimeZoneNames_mni::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_mni, name, initialize, &_TimeZoneNames_mni_ClassInfo_, allocate$TimeZoneNames_mni);
	return class$;
}

$Class* TimeZoneNames_mni::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun