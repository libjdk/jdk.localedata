#include <sun/util/resources/cldr/ext/TimeZoneNames_ne_IN.h>

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

$MethodInfo _TimeZoneNames_ne_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ne_IN::*)()>(&TimeZoneNames_ne_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ne_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ne_IN",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ne_IN_MethodInfo_
};

$Object* allocate$TimeZoneNames_ne_IN($Class* clazz) {
	return $of($alloc(TimeZoneNames_ne_IN));
}

void TimeZoneNames_ne_IN::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ne_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, India, $new($StringArray, {
		u"\u092d\u093e\u0930\u0924\u0940\u092f \u092e\u093e\u0928\u0915 \u0938\u092e\u092f"_s,
		"IST"_s,
		""_s,
		""_s,
		""_s,
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
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		})
	}));
	return data;
}

TimeZoneNames_ne_IN::TimeZoneNames_ne_IN() {
}

$Class* TimeZoneNames_ne_IN::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ne_IN, name, initialize, &_TimeZoneNames_ne_IN_ClassInfo_, allocate$TimeZoneNames_ne_IN);
	return class$;
}

$Class* TimeZoneNames_ne_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun