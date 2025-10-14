#include <sun/util/resources/ext/CalendarData_ru.h>

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

$MethodInfo _CalendarData_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData_ru::*)()>(&CalendarData_ru::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_ru_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_ru",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_ru_MethodInfo_
};

$Object* allocate$CalendarData_ru($Class* clazz) {
	return $of($alloc(CalendarData_ru));
}

void CalendarData_ru::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ru::getContents() {
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

CalendarData_ru::CalendarData_ru() {
}

$Class* CalendarData_ru::load$($String* name, bool initialize) {
	$loadClass(CalendarData_ru, name, initialize, &_CalendarData_ru_ClassInfo_, allocate$CalendarData_ru);
	return class$;
}

$Class* CalendarData_ru::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun