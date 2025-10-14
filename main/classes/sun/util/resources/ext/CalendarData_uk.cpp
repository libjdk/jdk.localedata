#include <sun/util/resources/ext/CalendarData_uk.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CalendarData_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData_uk::*)()>(&CalendarData_uk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_uk_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_uk",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_uk_MethodInfo_
};

$Object* allocate$CalendarData_uk($Class* clazz) {
	return $of($alloc(CalendarData_uk));
}

void CalendarData_uk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_uk::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("1"_s)
		})
	});
}

CalendarData_uk::CalendarData_uk() {
}

$Class* CalendarData_uk::load$($String* name, bool initialize) {
	$loadClass(CalendarData_uk, name, initialize, &_CalendarData_uk_ClassInfo_, allocate$CalendarData_uk);
	return class$;
}

$Class* CalendarData_uk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun