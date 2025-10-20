#include <sun/util/resources/ext/LocaleNames_uk.h>

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

$MethodInfo _LocaleNames_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_uk::*)()>(&LocaleNames_uk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_uk_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_uk",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_uk_MethodInfo_
};

$Object* allocate$LocaleNames_uk($Class* clazz) {
	return $of($alloc(LocaleNames_uk));
}

void LocaleNames_uk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_uk::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0457\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0443\u043a\u0440\u0430\u0457\u043d\u0441\u044c\u043a\u0430"_s)
		})
	});
}

LocaleNames_uk::LocaleNames_uk() {
}

$Class* LocaleNames_uk::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_uk, name, initialize, &_LocaleNames_uk_ClassInfo_, allocate$LocaleNames_uk);
	return class$;
}

$Class* LocaleNames_uk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun