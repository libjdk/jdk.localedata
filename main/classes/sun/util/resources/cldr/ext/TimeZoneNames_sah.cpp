#include <sun/util/resources/cldr/ext/TimeZoneNames_sah.h>

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

$MethodInfo _TimeZoneNames_sah_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_sah::*)()>(&TimeZoneNames_sah::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_sah_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_sah",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_sah_MethodInfo_
};

$Object* allocate$TimeZoneNames_sah($Class* clazz) {
	return $of($alloc(TimeZoneNames_sah));
}

void TimeZoneNames_sah::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_sah::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Iran, $new($StringArray, {
		u"\u0418\u0440\u0430\u0430\u043d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u042b\u0440\u0430\u0430\u043d \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0418\u0440\u0430\u0430\u043d \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"\u041e\u043c\u0441\u043a\u0430\u0439 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041e\u043c\u0441\u043a\u0430\u0439 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041e\u043c\u0441\u043a\u0430\u0439 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u041a\u044b\u0442\u0430\u0439 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u044b\u0442\u0430\u0439 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u044b\u0442\u0430\u0439 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u0418\u0438\u043d\u0434\u0438\u0439\u044d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\u0414\u044c\u043e\u043f\u043f\u0443\u043e\u043d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0414\u044c\u043e\u043f\u043f\u0443\u043e\u043d \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0414\u044c\u043e\u043f\u043f\u0443\u043e\u043d \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\u041a\u044d\u0440\u0438\u044d\u0439 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u044d\u0440\u0438\u044d\u0439 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u044d\u0440\u0438\u044d\u0439 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\u041c\u043e\u0441\u043a\u0443\u0431\u0430 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041c\u043e\u0441\u043a\u0443\u0431\u0430 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041c\u043e\u0441\u043a\u0443\u0431\u0430 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u0410\u0440\u0430\u0430\u0431 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0410\u0440\u0430\u0430\u0431 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0410\u0440\u0430\u0430\u0431 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\u042d\u0440\u043c\u044d\u044d\u043d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u042d\u0440\u043c\u044d\u044d\u043d \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u042d\u0440\u043c\u044d\u044d\u043d \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u041a\u0443\u0440\u0443\u0441\u0443\u0443\u043d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u0443\u0440\u0443\u0441\u0443\u0443\u043d \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u0443\u0440\u0443\u0441\u0443\u0443\u043d \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"\u041c\u0430\u0433\u0430\u0434\u0430\u0430\u043d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041c\u0430\u0433\u0430\u0434\u0430\u0430\u043d \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041c\u0430\u0433\u0430\u0434\u0430\u0430\u043d \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\u0414\u044c\u043e\u043a\u0443\u0443\u0441\u043a\u0430\u0439 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0414\u044c\u043e\u043a\u0443\u0443\u0441\u043a\u0430\u0439 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0414\u044c\u043e\u043a\u0443\u0443\u0441\u043a\u0430\u0439 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"\u0423\u043b\u0430\u043d \u0411\u0430\u0430\u0442\u0430\u0440 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0423\u043b\u0430\u043d \u0411\u0430\u0430\u0442\u0430\u0440 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0423\u043b\u0430\u043d \u0411\u0430\u0430\u0442\u0430\u0440 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\u041f\u0430\u043a\u0438\u0441\u0442\u0430\u0430\u043d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041f\u0430\u043a\u0438\u0441\u0442\u0430\u0430\u043d \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041f\u0430\u043a\u0438\u0441\u0442\u0430\u0430\u043d \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"\u0421\u0430\u0445\u0430\u043b\u044b\u044b\u043d \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0421\u0430\u0445\u0430\u043b\u044b\u044b\u043d \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0421\u0430\u0445\u0430\u043b\u0438\u0438\u043d \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"\u041a\u044b\u0440\u0433\u044b\u0441\u0442\u0430\u0430\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"\u0412\u043e\u043b\u0433\u043e\u0433\u0440\u0430\u0434 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0412\u043e\u043b\u0433\u043e\u0433\u0440\u0430\u0434 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0412\u043e\u043b\u0433\u043e\u0433\u0440\u0430\u0434 \u043a\u044d\u043c\u044d"_s,
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
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"\u041a\u0440\u0430\u0441\u043d\u043e\u044f\u0440\u0441\u043a\u0430\u0439 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u0440\u0430\u0441\u043d\u043e\u044f\u0440\u0441\u043a\u0430\u0439 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u0440\u0430\u0441\u043d\u043e\u044f\u0440\u0441\u043a\u0430\u0439 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u0421\u0430\u04a5\u0430 \u0421\u044d\u0439\u043b\u044d\u043d\u0434 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0421\u0430\u04a5\u0430 \u0421\u044d\u0439\u043b\u044d\u043d\u0434 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0421\u0430\u04a5\u0430 \u0417\u0435\u043b\u0430\u043d\u0434\u0438\u044f \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"\u041d\u043e\u0432\u043e\u0441\u0438\u0431\u0438\u0440\u0441\u043a\u0430\u0439 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041d\u043e\u0432\u043e\u0441\u0438\u0431\u0438\u0440\u0441\u043a\u0430\u0439 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041d\u043e\u0432\u043e\u0441\u0438\u0431\u0438\u0440\u0441\u043a\u0430\u0439 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"\u0411\u044b\u043b\u0430\u0434\u044c\u044b\u0431\u0430\u0441\u0442\u044b\u0430\u043a \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0411\u044b\u043b\u0430\u0434\u044c\u044b\u0431\u0430\u0441\u0442\u044b\u0430\u043a \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0412\u043b\u0430\u0434\u0438\u0432\u043e\u0441\u0442\u043e\u043a \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"\u0415\u043a\u0430\u0442\u0435\u0440\u0438\u043d\u0431\u0443\u0443\u0440 \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0415\u043a\u0430\u0442\u0435\u0440\u0438\u043d\u0431\u0443\u0443\u0440 \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0415\u043a\u0430\u0442\u0435\u0440\u0438\u043d\u0431\u0443\u0440\u0433 \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"\u041a\u0438\u0438\u043d \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u0438\u0438\u043d \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u041a\u0438\u0438\u043d \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\u0418\u043b\u0438\u043d \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0418\u043b\u0438\u043d \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0418\u043b\u0438\u043d \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\u0410\u0440\u0495\u0430\u0430 \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u0441\u04af\u0440\u04af\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0410\u0440\u0495\u0430\u0430 \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u0441\u0430\u0439\u044b\u04a5\u04a5\u044b \u043a\u044d\u043c\u044d"_s,
		""_s,
		u"\u0410\u0440\u0495\u0430\u0430 \u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f \u043a\u044d\u043c\u044d"_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\u0418\u043b\u0438\u043d \u041a\u0430\u0437\u0430\u0445\u0441\u0442\u0430\u0430\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"\u0410\u0440\u0495\u0430\u0430 \u041a\u0430\u0437\u0430\u0445\u0441\u0442\u0430\u0430\u043d \u043a\u044d\u043c\u044d"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
			$of("ACT"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(Australia_Eastern)
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
			$of("NET"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
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
			$of("Asia/Almaty"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Atyrau"_s),
			$of(Kazakhstan_Western)
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
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of(Kyrgystan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of(Magadan)
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
			$of("Asia/Yerevan"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
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
			$of("Asia/Qostanay"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
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
			$of("Asia/Qyzylorda"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(Novosibirsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(Volgograd)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of(Yekaterinburg)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"\u0411\u0430\u043a\u0443\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"\u041e\u043c\u0441\u043a\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"\u0427\u0438\u0442\u0430\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"\u0414\u0443\u0431\u0430\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"\u041a\u0430\u0431\u0443\u0443\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"\u0410\u043b\u043c\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"\u0410\u043d\u0430\u0430\u0434\u044b\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"\u0423\u0440\u0443\u043c\u0447\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u0411\u0438\u043b\u043b\u0438\u0431\u044d\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"\u0411\u0430\u0433\u0434\u0430\u0430\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"\u0411\u0430\u0440\u043d\u0430\u0443\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"\u041a\u043e\u043b\u043e\u043c\u0431\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"\u0418\u0440\u043a\u0443\u0442\u0441\u043a\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"\u041c\u0430\u0433\u0430\u0434\u0430\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"\u0414\u044c\u043e\u043a\u0443\u0443\u0441\u043a\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"\u0410\u0441\u0445\u0430\u0431\u0430\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"\u0414\u0430\u043c\u0430\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"\u0425\u0430\u0430\u043d\u0434\u044b\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"\u0421\u0430\u0445\u0430\u043b\u0438\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"\u0423\u0443\u0441 \u041d\u044c\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"\u041c\u043e\u0441\u043a\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"\u0421\u0430\u043c\u0430\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"\u041a\u0430\u043c\u0447\u0430\u0430\u0442\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"\u0421\u0430\u043c\u0430\u0440\u043a\u0430\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"\u0427\u043e\u0439\u0431\u0430\u043b\u0441\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"\u0421\u0442\u0430\u043c\u0431\u0443\u0443\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"\u041a\u0440\u0430\u0441\u043d\u043e\u044f\u0440\u0441\u043a\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"\u041d\u043e\u0432\u043e\u0441\u0438\u0431\u0438\u0440\u0441\u043a\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"\u0423\u043b\u0430\u043d \u0411\u0430\u0430\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"\u0410\u0430\u0441\u0442\u0440\u0430\u0445\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"\u0423\u043b\u044c\u044f\u043d\u043e\u0432\u0441\u043a\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"\u0421\u0438\u043c\u0444\u0435\u0440\u043e\u043f\u043e\u043b\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"\u041e\u0440\u0442\u043e \u0425\u0430\u043b\u044b\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"\u0415\u043a\u0430\u0442\u0435\u0440\u0438\u043d\u0431\u0443\u0443\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"\u041a\u0430\u043b\u0438\u043d\u0438\u043d\u0433\u0440\u0430\u0434"_s)
		})
	}));
	return data;
}

TimeZoneNames_sah::TimeZoneNames_sah() {
}

$Class* TimeZoneNames_sah::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_sah, name, initialize, &_TimeZoneNames_sah_ClassInfo_, allocate$TimeZoneNames_sah);
	return class$;
}

$Class* TimeZoneNames_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun