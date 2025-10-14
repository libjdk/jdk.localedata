#include <sun/util/resources/cldr/ext/TimeZoneNames_os.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE
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

$MethodInfo _TimeZoneNames_os_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_os::*)()>(&TimeZoneNames_os::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_os_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_os",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_os_MethodInfo_
};

$Object* allocate$TimeZoneNames_os($Class* clazz) {
	return $of($alloc(TimeZoneNames_os));
}

void TimeZoneNames_os::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_os::getContents() {
	$var($StringArray, GMT, $new($StringArray, {
		u"\u0413\u0440\u0438\u043d\u0432\u0438\u0447\u044b \u0440\u04d5\u0441\u0442\u04d5\u043c\u0431\u0438\u0441 \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\u041c\u04d5\u0441\u043a\u0443\u044b\u0439\u044b \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u041c\u04d5\u0441\u043a\u0443\u044b\u0439\u044b \u0441\u04d5\u0440\u0434\u044b\u0433\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u041c\u04d5\u0441\u043a\u0443\u044b\u0439\u044b \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u0413\u0443\u044b\u0440\u0434\u0437\u044b\u0441\u0442\u043e\u043d\u044b \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u0413\u0443\u044b\u0440\u0434\u0437\u044b\u0441\u0442\u043e\u043d\u044b \u0441\u04d5\u0440\u0434\u044b\u0433\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u0413\u0443\u044b\u0440\u0434\u0437\u044b\u0441\u0442\u043e\u043d\u044b \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u0410\u0441\u0442\u04d5\u0443\u043a\u043a\u0430\u0433 \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u0410\u0441\u0442\u04d5\u0443\u043a\u043a\u0430\u0433 \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0441\u04d5\u0440\u0434\u044b\u0433\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u0410\u0441\u0442\u04d5\u0443\u043a\u043a\u0430\u0433 \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u0421\u043a\u04d5\u0441\u04d5\u043d \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u0421\u043a\u04d5\u0441\u04d5\u043d \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0441\u04d5\u0440\u0434\u044b\u0433\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u0421\u043a\u04d5\u0441\u04d5\u043d \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u041d\u044b\u0433\u044a\u0443\u044b\u043b\u04d5\u043d \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u041d\u044b\u0433\u044a\u0443\u044b\u043b\u04d5\u043d \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0441\u04d5\u0440\u0434\u044b\u0433\u043e\u043d \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s,
		u"\u041d\u044b\u0433\u044a\u0443\u044b\u043b\u04d5\u043d \u0415\u0432\u0440\u043e\u043f\u04d5\u0439\u0430\u0433 \u0440\u04d5\u0441\u0442\u04d5\u0433"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Etc/GMT"_s),
			$of(GMT)
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
			$of("Asia/Tbilisi"_s),
			$of(Georgia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
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
			$of("Europe/Moscow"_s),
			$of(Moscow)
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
			$of("Antarctica/Troll"_s),
			$of(GMT)
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
			$of("Europe/Simferopol"_s),
			$of(Moscow)
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
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u041d\u04d5\u0437\u043e\u043d\u0433\u04d5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of(u"\u0422\u0431\u0438\u043b\u0438\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of(u"\u041c\u0438\u043d\u0441\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"\u041c\u04d5\u0441\u043a\u0443\u044b"_s)
		})
	}));
	return data;
}

TimeZoneNames_os::TimeZoneNames_os() {
}

$Class* TimeZoneNames_os::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_os, name, initialize, &_TimeZoneNames_os_ClassInfo_, allocate$TimeZoneNames_os);
	return class$;
}

$Class* TimeZoneNames_os::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun