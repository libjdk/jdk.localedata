#include <sun/util/resources/cldr/ext/TimeZoneNames_bo.h>

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

$MethodInfo _TimeZoneNames_bo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_bo::*)()>(&TimeZoneNames_bo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_bo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_bo",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_bo_MethodInfo_
};

$Object* allocate$TimeZoneNames_bo($Class* clazz) {
	return $of($alloc(TimeZoneNames_bo));
}

void TimeZoneNames_bo::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_bo::getContents() {
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
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u0f58\u0f0b\u0f62\u0f9f\u0f7c\u0f42\u0f66\u0f0b\u0f54"_s)
		})
	}));
	return data;
}

TimeZoneNames_bo::TimeZoneNames_bo() {
}

$Class* TimeZoneNames_bo::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_bo, name, initialize, &_TimeZoneNames_bo_ClassInfo_, allocate$TimeZoneNames_bo);
	return class$;
}

$Class* TimeZoneNames_bo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun