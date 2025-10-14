#include <sun/util/resources/ext/CalendarData_be.h>

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

$MethodInfo _CalendarData_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData_be::*)()>(&CalendarData_be::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_be_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_be",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_be_MethodInfo_
};

$Object* allocate$CalendarData_be($Class* clazz) {
	return $of($alloc(CalendarData_be));
}

void CalendarData_be::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_be::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_be::CalendarData_be() {
}

$Class* CalendarData_be::load$($String* name, bool initialize) {
	$loadClass(CalendarData_be, name, initialize, &_CalendarData_be_ClassInfo_, allocate$CalendarData_be);
	return class$;
}

$Class* CalendarData_be::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun