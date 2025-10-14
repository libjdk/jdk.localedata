#include <sun/util/resources/ext/LocaleNames_da.h>

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

$MethodInfo _LocaleNames_da_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_da::*)()>(&LocaleNames_da::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_da_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_da",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_da_MethodInfo_
};

$Object* allocate$LocaleNames_da($Class* clazz) {
	return $of($alloc(LocaleNames_da));
}

void LocaleNames_da::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_da::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmark"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Dansk"_s)
		})
	});
}

LocaleNames_da::LocaleNames_da() {
}

$Class* LocaleNames_da::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_da, name, initialize, &_LocaleNames_da_ClassInfo_, allocate$LocaleNames_da);
	return class$;
}

$Class* LocaleNames_da::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun