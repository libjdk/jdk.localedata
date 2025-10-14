#include <sun/util/resources/ext/CalendarData_cs.h>

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

$MethodInfo _CalendarData_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData_cs::*)()>(&CalendarData_cs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_cs_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_cs",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_cs_MethodInfo_
};

$Object* allocate$CalendarData_cs($Class* clazz) {
	return $of($alloc(CalendarData_cs));
}

void CalendarData_cs::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_cs::getContents() {
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

CalendarData_cs::CalendarData_cs() {
}

$Class* CalendarData_cs::load$($String* name, bool initialize) {
	$loadClass(CalendarData_cs, name, initialize, &_CalendarData_cs_ClassInfo_, allocate$CalendarData_cs);
	return class$;
}

$Class* CalendarData_cs::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun