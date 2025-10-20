#include <sun/util/resources/ext/LocaleNames_mk.h>

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

$MethodInfo _LocaleNames_mk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_mk::*)()>(&LocaleNames_mk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_mk_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_mk",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_mk_MethodInfo_
};

$Object* allocate$LocaleNames_mk($Class* clazz) {
	return $of($alloc(LocaleNames_mk));
}

void LocaleNames_mk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_mk::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u043c\u0430\u043a\u0435\u0434\u043e\u043d\u0441\u043a\u0438"_s)
		})
	});
}

LocaleNames_mk::LocaleNames_mk() {
}

$Class* LocaleNames_mk::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mk, name, initialize, &_LocaleNames_mk_ClassInfo_, allocate$LocaleNames_mk);
	return class$;
}

$Class* LocaleNames_mk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun