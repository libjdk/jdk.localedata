#include <sun/util/resources/ext/TimeZoneNames_hi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _TimeZoneNames_hi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_hi::*)()>(&TimeZoneNames_hi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_hi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_hi",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_hi_MethodInfo_
};

$Object* allocate$TimeZoneNames_hi($Class* clazz) {
	return $of($alloc(TimeZoneNames_hi));
}

void TimeZoneNames_hi::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_hi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Asia/Calcutta"_s),
		$of($$new($StringArray, {
			u"\u092d\u093e\u0930\u0924\u0940\u092f \u0938\u092e\u092f"_s,
			"IST"_s,
			u"\u092d\u093e\u0930\u0924\u0940\u092f \u0938\u092e\u092f"_s,
			"IST"_s,
			u"\u092d\u093e\u0930\u0924\u0940\u092f \u0938\u092e\u092f"_s,
			"IT"_s
		}))
	})});
}

TimeZoneNames_hi::TimeZoneNames_hi() {
}

$Class* TimeZoneNames_hi::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_hi, name, initialize, &_TimeZoneNames_hi_ClassInfo_, allocate$TimeZoneNames_hi);
	return class$;
}

$Class* TimeZoneNames_hi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun