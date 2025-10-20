#include <sun/util/resources/ext/LocaleNames_cs.h>

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

$MethodInfo _LocaleNames_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_cs::*)()>(&LocaleNames_cs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_cs_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_cs",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_cs_MethodInfo_
};

$Object* allocate$LocaleNames_cs($Class* clazz) {
	return $of($alloc(LocaleNames_cs));
}

void LocaleNames_cs::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_cs::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010cesk\u00e1 republika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010de\u0161tina"_s)
		})
	});
}

LocaleNames_cs::LocaleNames_cs() {
}

$Class* LocaleNames_cs::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_cs, name, initialize, &_LocaleNames_cs_ClassInfo_, allocate$LocaleNames_cs);
	return class$;
}

$Class* LocaleNames_cs::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun