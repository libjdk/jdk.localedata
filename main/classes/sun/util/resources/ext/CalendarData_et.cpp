#include <sun/util/resources/ext/CalendarData_et.h>

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

$MethodInfo _CalendarData_et_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData_et::*)()>(&CalendarData_et::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_et_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_et",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_et_MethodInfo_
};

$Object* allocate$CalendarData_et($Class* clazz) {
	return $of($alloc(CalendarData_et));
}

void CalendarData_et::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_et::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("4"_s)
		})
	});
}

CalendarData_et::CalendarData_et() {
}

$Class* CalendarData_et::load$($String* name, bool initialize) {
	$loadClass(CalendarData_et, name, initialize, &_CalendarData_et_ClassInfo_, allocate$CalendarData_et);
	return class$;
}

$Class* CalendarData_et::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun