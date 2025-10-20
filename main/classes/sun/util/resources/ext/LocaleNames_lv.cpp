#include <sun/util/resources/ext/LocaleNames_lv.h>

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

$MethodInfo _LocaleNames_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_lv::*)()>(&LocaleNames_lv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_lv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_lv",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_lv_MethodInfo_
};

$Object* allocate$LocaleNames_lv($Class* clazz) {
	return $of($alloc(LocaleNames_lv));
}

void LocaleNames_lv::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_lv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvija"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Latvie\u0161u"_s)
		})
	});
}

LocaleNames_lv::LocaleNames_lv() {
}

$Class* LocaleNames_lv::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lv, name, initialize, &_LocaleNames_lv_ClassInfo_, allocate$LocaleNames_lv);
	return class$;
}

$Class* LocaleNames_lv::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun