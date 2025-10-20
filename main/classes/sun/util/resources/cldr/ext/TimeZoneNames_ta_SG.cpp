#include <sun/util/resources/cldr/ext/TimeZoneNames_ta_SG.h>

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

$MethodInfo _TimeZoneNames_ta_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ta_SG::*)()>(&TimeZoneNames_ta_SG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ta_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ta_SG",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ta_SG_MethodInfo_
};

$Object* allocate$TimeZoneNames_ta_SG($Class* clazz) {
	return $of($alloc(TimeZoneNames_ta_SG));
}

void TimeZoneNames_ta_SG::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ta_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, India, $new($StringArray, {
		u"\u0b87\u0ba8\u0bcd\u0ba4\u0bbf\u0baf \u0ba8\u0bbf\u0bb2\u0bc8\u0baf\u0bbe\u0ba9 \u0ba8\u0bc7\u0bb0\u0bae\u0bcd"_s,
		u"\u2205\u2205\u2205"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"\u0bae\u0bb2\u0bc7\u0bb7\u0bbf\u0baf \u0ba8\u0bc7\u0bb0\u0bae\u0bcd"_s,
		"MYT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"\u0b9a\u0bbf\u0b99\u0bcd\u0b95\u0baa\u0bcd\u0baa\u0bc2\u0bb0\u0bcd \u0ba8\u0bbf\u0bb2\u0bc8\u0baf\u0bbe\u0ba9 \u0ba8\u0bc7\u0bb0\u0bae\u0bcd"_s,
		"SGT"_s,
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
			$of("Asia/Kuching"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		})
	}));
	return data;
}

TimeZoneNames_ta_SG::TimeZoneNames_ta_SG() {
}

$Class* TimeZoneNames_ta_SG::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ta_SG, name, initialize, &_TimeZoneNames_ta_SG_ClassInfo_, allocate$TimeZoneNames_ta_SG);
	return class$;
}

$Class* TimeZoneNames_ta_SG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun