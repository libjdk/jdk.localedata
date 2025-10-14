#include <sun/util/resources/ext/TimeZoneNames_en_IE.h>

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

$MethodInfo _TimeZoneNames_en_IE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_en_IE::*)()>(&TimeZoneNames_en_IE::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_en_IE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_en_IE",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_IE_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_IE($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_IE));
}

void TimeZoneNames_en_IE::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_IE::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Europe/London"_s),
		$of($$new($StringArray, {
			"Greenwich Mean Time"_s,
			"GMT"_s,
			"Irish Summer Time"_s,
			"IST"_s,
			"Irish Time"_s,
			"IT"_s
		}))
	})});
}

TimeZoneNames_en_IE::TimeZoneNames_en_IE() {
}

$Class* TimeZoneNames_en_IE::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_IE, name, initialize, &_TimeZoneNames_en_IE_ClassInfo_, allocate$TimeZoneNames_en_IE);
	return class$;
}

$Class* TimeZoneNames_en_IE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun