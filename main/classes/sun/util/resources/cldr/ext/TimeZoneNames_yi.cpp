#include <sun/util/resources/cldr/ext/TimeZoneNames_yi.h>

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

$MethodInfo _TimeZoneNames_yi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_yi::*)()>(&TimeZoneNames_yi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_yi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_yi",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_yi_MethodInfo_
};

$Object* allocate$TimeZoneNames_yi($Class* clazz) {
	return $of($alloc(TimeZoneNames_yi));
}

void TimeZoneNames_yi::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_yi::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"\u05d4\u05d0 \u05d8\u05e9\u05d9 \u05de\u05d9\u05df \u05e9\u05d8\u05d0\u05b8\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u05d0\u05d5\u05de\u05d1\u05d0\u05b7\u05d5\u05d5\u05d0\u05d5\u05e1\u05d8\u05e2 \u05e9\u05d8\u05d0\u05b8\u05d8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"\u05d8\u05d5\u05e0\u05d9\u05e1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"\u05d0\u05b7\u05e1\u05de\u05d0\u05b7\u05e8\u05d0\u05b7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Abidjan"_s),
			$of(u"\u05d0\u05b7\u05d1\u05d9\u05d3\u05d6\u05e9\u05d0\u05b7\u05df"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"\u05d5\u05d5\u05d9\u05e0\u05d8\u05d4\u05d5\u05e7"_s)
		})
	}));
	return data;
}

TimeZoneNames_yi::TimeZoneNames_yi() {
}

$Class* TimeZoneNames_yi::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_yi, name, initialize, &_TimeZoneNames_yi_ClassInfo_, allocate$TimeZoneNames_yi);
	return class$;
}

$Class* TimeZoneNames_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun