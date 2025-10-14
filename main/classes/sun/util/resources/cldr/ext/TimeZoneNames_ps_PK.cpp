#include <sun/util/resources/cldr/ext/TimeZoneNames_ps_PK.h>

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

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_ps_PK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ps_PK::*)()>(&TimeZoneNames_ps_PK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ps_PK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ps_PK",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ps_PK_MethodInfo_
};

$Object* allocate$TimeZoneNames_ps_PK($Class* clazz) {
	return $of($alloc(TimeZoneNames_ps_PK));
}

void TimeZoneNames_ps_PK::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ps_PK::getContents() {
	$var($StringArray, Apia, $new($StringArray, {
		u"\u0627\u067e\u06cc\u0627 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0627\u067e\u06cc\u0627 \u062f \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0627\u067e\u06cc\u0627 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"\u06a9\u06cc\u0648\u0628\u0627 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u06a9\u06cc\u0648\u0628\u0627 \u062f \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u06a9\u064a\u0648\u0628\u0627 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u0627\u06cc\u0631\u0627\u0646 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0627\u06cc\u0631\u0627\u0646 \u062f \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0627\u06cc\u0631\u0627\u0646 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u0686\u06cc\u0646 \u0645\u0639\u06cc\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0686\u064a\u0646 \u062f \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0686\u064a\u0646 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\u062c\u0627\u067e\u0627\u0646 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062c\u0627\u067e\u0627\u0646 \u062f \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u062c\u0627\u067e\u0627\u0646 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\u06a9\u0648\u0631\u064a\u0627\u064a\u064a \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u06a9\u0648\u0631\u06cc\u0627 \u062f \u0648\u0631\u0681\u06d2 \u062f \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u06a9\u0648\u0631\u064a\u0627\u064a\u064a \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"\u0633\u0645\u0648\u0627 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0633\u0645\u0648\u0627 \u062f \u0648\u0631\u0681\u06d2 \u0631\u0648\u069a\u0627\u0646\u0647 \u06a9\u0648\u0644"_s,
		""_s,
		u"\u0633\u0645\u0648\u0627 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"\u0627\u0644\u0627\u0633\u06a9\u0627 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0627\u0644\u0627\u0633\u06a9\u0627 \u062f \u0648\u0631\u0681\u06d2 \u0631\u0648\u069a\u0627\u0646\u0647 \u06a9\u0648\u0644"_s,
		""_s,
		u"\u0627\u0644\u0627\u0633\u06a9\u0627 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u0627\u0633\u0631\u0627\u06cc\u06cc\u0644 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0627\u0633\u0631\u0627\u06cc\u06cc\u0644\u0648 \u062f \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0627\u0633\u0631\u0627\u06cc\u06cc\u0644 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u0639\u0631\u0628\u064a \u0645\u0639\u06cc\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0639\u0631\u0628\u064a \u0648\u0631\u0681\u067e\u0627\u06bc\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0639\u0631\u0628\u064a \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\u0627\u062a\u0644\u0627\u0646\u062a\u06cc\u06a9 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u0627\u062a\u0644\u0627\u0646\u062a\u06cc\u06a9 \u062f \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0627\u062a\u0644\u0627\u0646\u062a\u06cc\u06a9 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"\u0644\u0627\u0631\u0689 \u0647\u0648\u064a \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u0631\u0628 \u0647\u0627\u0648 \u062f \u0648\u0631\u0681\u06d2 \u062f \u0631\u06bc\u0627 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0644\u0627\u0631\u0689 \u0647\u0648\u064a \u0648\u062e\u062a"_s,
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
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u0646\u064a\u0648\u0632\u064a \u0644\u06d0\u0646\u0689 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0646\u06cc\u0648\u0632\u06cc \u0644\u06cc\u0646\u0688 \u062f \u0648\u0631\u0681\u06d2 \u062f \u0631\u06bc\u0627 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0646\u064a\u0648\u0632\u064a \u0644\u06d0\u0646\u0689 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"\u062f \u06a9\u0631\u069a\u06d2 \u067c\u0627\u067c\u0648\u0628\u064a \u0648\u062e\u062a"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"\u062f \u0646\u0648\u064a \u0641\u06cc\u0644\u0689\u0644\u06cc\u0646\u0689 \u0645\u0639\u06cc\u0627\u0631\u06cc \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0646\u0648\u064a \u0641\u06cc\u0644\u0689\u0644\u06cc\u0646\u0689 \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0646\u064a\u0648 \u0641\u0627\u0648\u0646\u0689\u0644\u06d0\u0646\u0689 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u062f \u0644\u0648\u062f\u06cc\u0681\u06d2 \u0627\u0631\u0648\u067e\u0627 \u0645\u0639\u06cc\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0644\u0648\u062f\u06cc\u0681\u06d2 \u0627\u0648\u0631\u067e\u0627 \u062f \u0627\u0648\u0693\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u0644\u0648\u06d0\u062f\u064a\u0632\u06d2 \u0627\u0631\u0648\u067e\u0627 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"\u0645\u06a9\u0633\u06cc\u06a9\u0646 \u067e\u06cc\u0633\u0641\u06a9 \u0645\u0639\u06cc\u0627\u0631\u06cc \u0648\u062e\u062a"_s,
		""_s,
		u"\u0645\u06a9\u0633\u06cc\u06a9\u0646 \u067e\u06cc\u0633\u0641\u06a9 \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0645\u06a9\u0633\u06cc\u06a9\u0646 \u067e\u06cc\u0633\u0641\u06a9 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u0645\u0631\u06a9\u0632\u064a \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u0645\u0631\u06a9\u0632\u064a \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0645\u0631\u06a9\u0632\u064a \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u062e\u062a\u064a\u0681 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062e\u062a\u064a\u0681 \u062f \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u062e\u062a\u06cc\u0681 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u062f \u067e\u06cc\u0633\u0641\u06a9 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u067e\u06cc\u0633\u0641\u06a9 \u062f \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u067e\u06cc\u0633\u0641\u06a9 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"\u062f \u0641\u0631\u0627\u0646\u0633\u06d2 \u0633\u0648\u06cc\u0644 \u0627\u0648 \u0627\u0646\u067c\u0627\u0631\u067c\u064a\u06a9 \u0648\u062e\u062a"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"\u0647\u0648\u0627\u06cc\u06cc \u0627\u0644\u06cc\u0648\u062a\u06cc\u0646 \u0645\u0639\u06cc\u0627\u0631\u06cc \u0648\u062e\u062a"_s,
		""_s,
		u"\u0647\u0648\u0627\u06cc\u06cc \u0627\u0644\u06cc\u0648\u062a\u06cc\u0646 \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0647\u0648\u0627\u06cc\u06cc \u0627\u0644\u06cc\u0648\u062a\u06cc\u0646 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"\u0633\u06cc\u0646\u067c \u067e\u06cc\u06cc\u0631\u0627 \u0648 \u0645\u064a\u06a9\u0644\u064a\u0646 \u0645\u0639\u06cc\u0627\u0631\u06cc \u0648\u062e\u062a"_s,
		""_s,
		u"\u0633\u06cc\u0646\u067c \u067e\u06cc\u06cc\u0631\u0627 \u0648 \u0645\u064a\u06a9\u0644\u064a\u0646 \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0633\u06cc\u0646\u067c \u067e\u06cc\u06cc\u0631\u0627 \u0648 \u0645\u064a\u06a9\u0644\u064a\u0646 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u062f \u063a\u0631\u0647 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u063a\u0631\u0647 \u062f \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u063a\u0631\u0647 \u062f \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"\u062f \u0634\u0645\u0627\u0644 \u0644\u0648\u06cc\u062f\u06cc\u0681 \u0645\u06a9\u0633\u06cc\u06a9\u0648 \u0645\u0639\u06cc\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0634\u0645\u0627\u0644 \u0644\u0648\u06cc\u062f\u06cc\u0681 \u0645\u06a9\u0633\u06cc\u06a9\u0648 \u0631\u06bc\u0627 \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0634\u0645\u0627\u0644 \u0644\u0648\u06cc\u062f\u06cc\u0681 \u0645\u06a9\u0633\u06cc\u06a9\u0648 \u0648\u062e\u062a"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\u0622\u0633\u062a\u0631\u0627\u0644\u0648\u064a \u0644\u0648\u06d0\u062f\u064a\u0681 \u0645\u0639\u064a\u0627\u0631\u064a \u0648\u062e\u062a"_s,
		""_s,
		u"\u062f \u0627\u0633\u067c\u0631\u0627\u0644\u06cc\u0627 \u0644\u0648\u06cc\u062f\u06cc\u0681 \u062f \u0648\u0631\u0681\u06d2 \u0648\u062e\u062a"_s,
		""_s,
		u"\u0644\u0648\u06d0\u062f\u064a\u0681 \u0622\u0633\u062a\u0631\u0627\u0644\u064a\u0627 \u0648\u062e\u062a"_s,
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
			$of("Pacific/Honolulu"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(Israel)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
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
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(Iran)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(Apia)
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
			$of("Europe/Lisbon"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(Hawaii_Aleutian)
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
			$of("America/Havana"_s),
			$of(Cuba)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(Alaska)
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
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(Samoa)
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
			$of("America/Yakutat"_s),
			$of(Alaska)
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
			$of("Australia/Perth"_s),
			$of(Australia_Western)
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
			$of("SystemV/YST9YDT"_s),
			$of(Alaska)
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
			$of("America/Mazatlan"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of(Pierre_Miquelon)
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
			$of("Atlantic/Bermuda"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of(French_Southern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(Mexico_Pacific)
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
			$of("Pacific/Pago_Pago"_s),
			$of(Samoa)
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
			$of("America/Hermosillo"_s),
			$of(Mexico_Pacific)
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
			$of("America/Metlakatla"_s),
			$of(Alaska)
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
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of(Line_Islands)
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
			$of("Australia/Lord_Howe"_s),
			$of(Lord_Howe)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(Atlantic)
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
			$of("America/Santa_Isabel"_s),
			$of(Mexico_Northwest)
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
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
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
			$of("timezone.excity.Africa/Harare"_s),
			$of(u"\u0647\u0631\u0627\u0631\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"\u062f \u06a9\u0645\u062a\u0631 \u0634\u0647\u0632\u0627\u062f\u0647 \u062f\u0631\u06d2 \u0645\u06cc\u0627\u0634\u062a\u0646\u06cd"_s)
		})
	}));
	return data;
}

TimeZoneNames_ps_PK::TimeZoneNames_ps_PK() {
}

$Class* TimeZoneNames_ps_PK::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ps_PK, name, initialize, &_TimeZoneNames_ps_PK_ClassInfo_, allocate$TimeZoneNames_ps_PK);
	return class$;
}

$Class* TimeZoneNames_ps_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun