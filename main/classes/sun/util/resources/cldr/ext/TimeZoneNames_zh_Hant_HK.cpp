#include <sun/util/resources/cldr/ext/TimeZoneNames_zh_Hant_HK.h>

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

$MethodInfo _TimeZoneNames_zh_Hant_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_zh_Hant_HK::*)()>(&TimeZoneNames_zh_Hant_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_zh_Hant_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_zh_Hant_HK",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_zh_Hant_HK_MethodInfo_
};

$Object* allocate$TimeZoneNames_zh_Hant_HK($Class* clazz) {
	return $of($alloc(TimeZoneNames_zh_Hant_HK));
}

void TimeZoneNames_zh_Hant_HK::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_zh_Hant_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u6ce2\u65af\u7063\u6d77\u57df\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"\u53ef\u53ef\u65af\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u5370\u5ea6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"\u7459\u9b6f\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"\u6e6f\u52a0\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6e6f\u52a0\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6e6f\u52a0\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\u572d\u4e9e\u90a3\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"\u79d1\u65af\u96f7\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"\u5716\u74e6\u76e7\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\u5384\u74dc\u591a\u723e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u683c\u9b6f\u5409\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u683c\u9b6f\u5409\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u683c\u9b6f\u5409\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\u4f0a\u723e\u5eab\u8328\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4f0a\u723e\u5eab\u8328\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4f0a\u723e\u5eab\u8328\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\u8cbb\u723e\u5357\u591a\u8fea\u8afe\u7f85\u5c3c\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u8cbb\u723e\u5357\u591a\u8fea\u8afe\u7f85\u5c3c\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u8cbb\u723e\u5357\u591a\u8fea\u8afe\u7f85\u5c3c\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"\u6240\u7f85\u9580\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"\u74e6\u52aa\u963f\u5716\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u74e6\u52aa\u963f\u5716\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u74e6\u52aa\u963f\u5716\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\u96c5\u5eab\u8328\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u96c5\u5eab\u8328\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u96c5\u5eab\u8328\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\u99ac\u723e\u4ee3\u592b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"\u76ae\u7279\u5eb7\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\u8607\u91cc\u5357\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\u52a0\u62c9\u5e15\u6208\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"\u99ac\u514b\u85a9\u65af\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"\u6bdb\u91cc\u88d8\u65af\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6bdb\u91cc\u88d8\u65af\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6bdb\u91cc\u88d8\u65af\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"\u65b0\u52a0\u5761\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\u4e9e\u585e\u62dc\u7586\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u585e\u62dc\u7586\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u585e\u62dc\u7586\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"\u4f5b\u5f97\u89d2\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4f5b\u5f97\u89d2\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4f5b\u5f97\u89d2\u6642\u9593"_s,
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
	$var($StringArray, Seychelles, $new($StringArray, {
		u"\u585e\u820c\u723e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"\u8fea\u8499\u8fea\u7dad\u723e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"\u5357\u975e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u5317\u7f8e\u4e2d\u90e8\u6a19\u6e96\u6642\u9593"_s,
		"CST"_s,
		u"\u5317\u7f8e\u4e2d\u90e8\u590f\u4ee4\u6642\u9593"_s,
		"CDT"_s,
		u"\u5317\u7f8e\u4e2d\u90e8\u6642\u9593"_s,
		"CT"_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u5317\u7f8e\u6771\u90e8\u6a19\u6e96\u6642\u9593"_s,
		"EST"_s,
		u"\u5317\u7f8e\u6771\u90e8\u590f\u4ee4\u6642\u9593"_s,
		"EDT"_s,
		u"\u5317\u7f8e\u6771\u90e8\u6642\u9593"_s,
		"ET"_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u5317\u7f8e\u592a\u5e73\u6d0b\u6a19\u6e96\u6642\u9593"_s,
		"PST"_s,
		u"\u5317\u7f8e\u592a\u5e73\u6d0b\u590f\u4ee4\u6642\u9593"_s,
		"PDT"_s,
		u"\u5317\u7f8e\u592a\u5e73\u6d0b\u6642\u9593"_s,
		"PT"_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u5317\u7f8e\u5c71\u5340\u6a19\u6e96\u6642\u9593"_s,
		"MST"_s,
		u"\u5317\u7f8e\u5c71\u5340\u590f\u4ee4\u6642\u9593"_s,
		"MDT"_s,
		u"\u5317\u7f8e\u5c71\u5340\u6642\u9593"_s,
		"MT"_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"\u5df4\u5e03\u4e9e\u65b0\u757f\u5167\u4e9e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
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
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(Solomon)
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
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of(Azerbaijan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of(Seychelles)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(Irkutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of(Georgia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of(Cocos)
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
			$of("SystemV/PST8"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of(Vanuatu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of(Nauru)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(Africa_Southern)
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
			$of("America/Guyana"_s),
			$of(Guyana)
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
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of(Kosrae)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of(New_Caledonia)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(America_Eastern)
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
			$of("America/Nipigon"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(Noronha)
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
			$of("Indian/Maldives"_s),
			$of(Maldives)
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
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of(Tuvalu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
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
			$of("America/Vancouver"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of(Marquesas)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of(Tonga)
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
			$of("America/Louisville"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of(Suriname)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(Africa_Southern)
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
			$of("Atlantic/Cape_Verde"_s),
			$of(Cape_Verde)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(Solomon)
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
			$of("Pacific/Port_Moresby"_s),
			$of(Papua_New_Guinea)
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
			$of("Antarctica/DumontDUrville"_s),
			$of(DumontDUrville)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"\u52a0\u6c99"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of(u"\u5361\u5854\u723e"_s)
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
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"\u963f\u7d0d\u5fb7\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"\u5e0c\u4f2f\u4f96"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of(u"\u99ac\u65af\u5580\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of(u"\u5229\u96c5\u5f97"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of(u"\u62c9\u5404\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of(u"\u57c3\u9054\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"\u6bd4\u65af\u51f1\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"\u79d1\u502b\u5761"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"\u4f0a\u723e\u5eab\u8328\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"\u5361\u62c9\u5947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of(u"\u5c3c\u79d1\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"\u96c5\u5eab\u8328\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"\u57c3\u91cc\u6e29"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of(u"\u99ac\u8033\u4ed6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of(u"\u83ef\u675c\u8332"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of(u"\u53ef\u53ef\u65af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of(u"\u5a01\u514b\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"\u963f\u65af\u99ac\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of(u"\u73ed\u57fa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of(u"\u76e7\u5b89\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of(u"\u76e7\u85a9\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of(u"\u99ac\u585e\u9b6f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of(u"\u963f\u9b6f\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of(u"\u5df4\u5e0c\u96c5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of(u"\u535a\u4f0a\u897f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"\u5716\u52d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"\u963f\u4ec0\u54c8\u5df4\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"\u675c\u5c1a\u5225"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of(u"\u67e5\u96c5\u666e\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of(u"\u932b\u6c5f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of(u"\u65af\u79d1\u666e\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of(u"\u85a9\u683c\u52d2\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"\u67e5\u6208\u65af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of(u"\u79d1\u6469\u7f85"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of(u"\u7459\u9b6f"_s)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Abidjan"_s),
			$of(u"\u963f\u6bd4\u8d0a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of(u"\u79d1\u7d0d\u514b\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of(u"\u5167\u7f85\u7562"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"\u4f2f\u5229\u8332"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"\u5eab\u4e9e\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"\u572d\u4e9e\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of(u"\u590f\u7063\u62ff"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"\u4f0a\u52aa\u7dad\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"\u99ac\u585e\u7d04"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of(u"\u62ff\u9a37"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of(u"\u7d2f\u897f\u8153"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of(u"\u99ac\u7d04\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"\u7559\u5c3c\u65fa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of(u"\u79d1\u65af\u96f7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of(u"\u99ac\u4e45\u7f85"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of(u"\u52aa\u7f8e\u963f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"\u5409\u5e03\u63d0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"\u91d1\u6c99\u85a9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"\u6eab\u7279\u548c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"\u5b89\u63d0\u74dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of(u"\u52a0\u62c9\u52a0\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of(u"\u5361\u5bb4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"\u79d1\u723e\u591a\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of(u"\u683c\u6797\u7d0d\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"\u54c8\u5229\u6cd5\u514b\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of(u"\u99ac\u90a3\u74dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"\u5c3c\u76ae\u8ca2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of(u"\u8afe\u7f85\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"\u8482\u83ef\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"\u4e9e\u5eab\u5854\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"\u52a0\u90a3\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of(u"\u73c0\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"\u8c9d\u723e\u683c\u840a\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"\u57fa\u5e0c\u8a25\u70cf"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of(u"\u6839\u897f\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of(u"\u85a9\u62c9\u71b1\u7aa9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"\u70cf\u65e5\u54e5\u7f85\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of(u"\u99ac\u723e\u4ee3\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"\u67e5\u5854\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of(u"\u6cd5\u8003\u798f\u74b0\u7901"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of(u"\u7518\u6bd4\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"\u6469\u52a0\u8fea\u6c99"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of(u"\u5b89\u572d\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"\u963f\u677e\u68ee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"\u5df4\u5df4\u591a\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"\u611b\u6c11\u9813"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of(u"\u5bc6\u514b\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"\u8056\u5730\u4e9e\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"\u8056\u7d04\u7ff0\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"\u8056\u76e7\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of(u"\u51f1\u897f\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"\u6234\u7dad\u65af\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of(u"\u662d\u548c\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of(u"\u7279\u7f85\u723e\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of(u"\u99ac\u5fb7\u62c9\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of(u"\u53f2\u4e39\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of(u"\u5361\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of(u"\u8377\u4f2f\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of(u"\u6089\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of(u"\u76e7\u5e03\u723e\u96c5\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of(u"\u6ce2\u5fb7\u6208\u91cc\u5bdf"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of(u"\u51f1\u723e\u84cb\u6717\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of(u"\u6bdb\u91cc\u88d8\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of(u"\u7d04\u7ff0\u65af\u9813\u74b0\u7901"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of(u"\u76ae\u7279\u5eb7\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of(u"\u5229\u5e03\u7dad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"\u52aa\u74e6\u514b\u8096\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of(u"\u5b89\u514b\u96f7\u5947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"\u963f\u62c9\u74dc\u4f0a\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of(u"\u535a\u963f\u7dad\u65af\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"\u829d\u5a03\u5a03"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of(u"\u798f\u5854\u840a\u85a9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"\u683c\u840a\u65af\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"\u5371\u5730\u99ac\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of(u"\u6885\u8afe\u7c73\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of(u"\u8499\u7279\u96f7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"\u83ab\u68ee\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of(u"\u5e15\u723e\u9ed8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of(u"\u4f2f\u62c9\u7b2c\u65af\u62c9\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"\u6069\u5fb7\u4f2f\u91cc\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of(u"\u74dc\u52a0\u6797\u74b0\u7901"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of(u"\u99ac\u514b\u85a9\u65af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of(u"\u5e15\u679c\u5e15\u679c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of(u"\u6e6f\u52a0\u5854\u5e03\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"\u54e5\u65af\u9054\u9ece\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of(u"\u74dc\u5fb7\u7f85\u666e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of(u"\u8def\u6613\u7dad\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of(u"\u99ac\u63d0\u5c3c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of(u"\u8499\u5f97\u7dad\u7684\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of(u"\u8499\u585e\u62c9\u7279\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"\u91cc\u7d04\u5e03\u862d\u79d1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of(u"\u8056\u6587\u68ee\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of(u"\u767d\u99ac\u5e02"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of(u"\u9ea5\u514b\u9ed8\u591a\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of(u"\u7f85\u745f\u62c9\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"\u8449\u5361\u6377\u7433\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"\u96f7\u514b\u96c5\u672a\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of(u"\u963f\u5fb7\u840a\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of(u"\u5e03\u91cc\u65af\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"\u99ac\u6069\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of(u"\u7d04\u7ff0\u5167\u65af\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"\u58a8\u897f\u54e5\u57ce"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of(u"\u97cb\u67f3\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"\u7279\u53e4\u897f\u52a0\u723e\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"\u96f7\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of(u"\u9ec3\u5200\u93ae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of(u"\u6717\u4f0a\u723e\u57ce"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of(u"\u4f5b\u5f97\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of(u"\u5b89\u5854\u90a3\u90a3\u5229\u4f5b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of(u"\u74dc\u9054\u723e\u5361\u7d0d\u723e\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of(u"\u9054\u7d2f\u65af\u85a9\u62c9\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of(u"\u5927\u574e\u666e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"\u9053\u68ee\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u5dde\u8afe\u514b\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u6ce2\u5229\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of(u"\u9ea5\u5938\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of(u"\u5e03\u5e72\u7dad\u723e\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u5dde\u97cb\u97cb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"\u8056\u591a\u660e\u5404"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"\u8056\u5df4\u6cf0\u52d2\u7c73"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"\u5df4\u4f0a\u4e9e\u5fb7\u73ed\u5fb7\u62c9\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u5dde\u99ac\u502b\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u5dde\u5a01\u7d0d\u99ac\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u5dde\u7279\u723e\u57ce"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u5dde\u6eab\u68ee\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"\u675c\u8499\u8fea\u7dad\u723e\u7ad9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of(u"\u62c9\u91cc\u5967\u54c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of(u"\u5370\u7b2c\u5b89\u7d0d\u5dde\u5f7c\u5f97\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"\u5317\u9054\u79d1\u4ed6\u5dde\u6bd4\u5c24\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"\u5317\u9054\u79d1\u4ed6\u5dde\u4e2d\u5fc3\u5e02"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of(u"\u5317\u9054\u79d1\u4ed6\u5dde\u65b0\u85a9\u52d2\u59c6"_s)
		})
	}));
	return data;
}

TimeZoneNames_zh_Hant_HK::TimeZoneNames_zh_Hant_HK() {
}

$Class* TimeZoneNames_zh_Hant_HK::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_zh_Hant_HK, name, initialize, &_TimeZoneNames_zh_Hant_HK_ClassInfo_, allocate$TimeZoneNames_zh_Hant_HK);
	return class$;
}

$Class* TimeZoneNames_zh_Hant_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun