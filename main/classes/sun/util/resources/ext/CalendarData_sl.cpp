#include <sun/util/resources/ext/CalendarData_sl.h>

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

$MethodInfo _CalendarData_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData_sl::*)()>(&CalendarData_sl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_sl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_sl",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_sl_MethodInfo_
};

$Object* allocate$CalendarData_sl($Class* clazz) {
	return $of($alloc(CalendarData_sl));
}

void CalendarData_sl::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sl::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("firstDayOfWeek"_s),
		$of("2"_s)
	})});
}

CalendarData_sl::CalendarData_sl() {
}

$Class* CalendarData_sl::load$($String* name, bool initialize) {
	$loadClass(CalendarData_sl, name, initialize, &_CalendarData_sl_ClassInfo_, allocate$CalendarData_sl);
	return class$;
}

$Class* CalendarData_sl::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun