#include <sun/util/resources/cldr/ext/LocaleNames_bo_IN.h>

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

$MethodInfo _LocaleNames_bo_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_bo_IN::*)()>(&LocaleNames_bo_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_bo_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bo_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bo_IN_MethodInfo_
};

$Object* allocate$LocaleNames_bo_IN($Class* clazz) {
	return $of($alloc(LocaleNames_bo_IN));
}

void LocaleNames_bo_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bo_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("009"_s),
		$of(u"\u0f68\u0f7c\u0f64\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f53\u0f0d"_s)
	})}));
	return data;
}

LocaleNames_bo_IN::LocaleNames_bo_IN() {
}

$Class* LocaleNames_bo_IN::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bo_IN, name, initialize, &_LocaleNames_bo_IN_ClassInfo_, allocate$LocaleNames_bo_IN);
	return class$;
}

$Class* LocaleNames_bo_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun