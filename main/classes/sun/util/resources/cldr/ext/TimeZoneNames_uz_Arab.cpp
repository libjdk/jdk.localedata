#include <sun/util/resources/cldr/ext/TimeZoneNames_uz_Arab.h>

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

$MethodInfo _TimeZoneNames_uz_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_uz_Arab::*)()>(&TimeZoneNames_uz_Arab::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_uz_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_uz_Arab",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_uz_Arab_MethodInfo_
};

$Object* allocate$TimeZoneNames_uz_Arab($Class* clazz) {
	return $of($alloc(TimeZoneNames_uz_Arab));
}

void TimeZoneNames_uz_Arab::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_uz_Arab::getContents() {
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
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"\u06a9\u0627\u0628\u0644"_s)
		})
	}));
	return data;
}

TimeZoneNames_uz_Arab::TimeZoneNames_uz_Arab() {
}

$Class* TimeZoneNames_uz_Arab::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_uz_Arab, name, initialize, &_TimeZoneNames_uz_Arab_ClassInfo_, allocate$TimeZoneNames_uz_Arab);
	return class$;
}

$Class* TimeZoneNames_uz_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun