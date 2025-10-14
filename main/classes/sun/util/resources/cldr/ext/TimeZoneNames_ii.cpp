#include <sun/util/resources/cldr/ext/TimeZoneNames_ii.h>

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

$MethodInfo _TimeZoneNames_ii_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ii::*)()>(&TimeZoneNames_ii::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ii_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ii",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ii_MethodInfo_
};

$Object* allocate$TimeZoneNames_ii($Class* clazz) {
	return $of($alloc(TimeZoneNames_ii));
}

void TimeZoneNames_ii::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ii::getContents() {
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
			$of(u"\ua149\ua00b\ua41a\ua320"_s)
		})
	}));
	return data;
}

TimeZoneNames_ii::TimeZoneNames_ii() {
}

$Class* TimeZoneNames_ii::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ii, name, initialize, &_TimeZoneNames_ii_ClassInfo_, allocate$TimeZoneNames_ii);
	return class$;
}

$Class* TimeZoneNames_ii::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun