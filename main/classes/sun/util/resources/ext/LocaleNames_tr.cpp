#include <sun/util/resources/ext/LocaleNames_tr.h>

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

$MethodInfo _LocaleNames_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_tr::*)()>(&LocaleNames_tr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_tr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_tr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_tr_MethodInfo_
};

$Object* allocate$LocaleNames_tr($Class* clazz) {
	return $of($alloc(LocaleNames_tr));
}

void LocaleNames_tr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_tr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u00fcrkiye"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"T\u00fcrk\u00e7e"_s)
		})
	});
}

LocaleNames_tr::LocaleNames_tr() {
}

$Class* LocaleNames_tr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_tr, name, initialize, &_LocaleNames_tr_ClassInfo_, allocate$LocaleNames_tr);
	return class$;
}

$Class* LocaleNames_tr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun