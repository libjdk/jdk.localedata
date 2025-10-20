#include <sun/util/resources/cldr/ext/LocaleNames_ko_KP.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_ko_KP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ko_KP::*)()>(&LocaleNames_ko_KP::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ko_KP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ko_KP",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ko_KP_MethodInfo_
};

$Object* allocate$LocaleNames_ko_KP($Class* clazz) {
	return $of($alloc(LocaleNames_ko_KP));
}

void LocaleNames_ko_KP::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ko_KP::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KP"_s),
		$of(u"\uc870\uc120\ubbfc\uc8fc\uc8fc\uc758\uc778\ubbfc\uacf5\ud654\uad6d"_s)
	})}));
	return data;
}

LocaleNames_ko_KP::LocaleNames_ko_KP() {
}

$Class* LocaleNames_ko_KP::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ko_KP, name, initialize, &_LocaleNames_ko_KP_ClassInfo_, allocate$LocaleNames_ko_KP);
	return class$;
}

$Class* LocaleNames_ko_KP::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun