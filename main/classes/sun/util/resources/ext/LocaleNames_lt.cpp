#include <sun/util/resources/ext/LocaleNames_lt.h>

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

$MethodInfo _LocaleNames_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_lt::*)()>(&LocaleNames_lt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_lt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_lt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_lt_MethodInfo_
};

$Object* allocate$LocaleNames_lt($Class* clazz) {
	return $of($alloc(LocaleNames_lt));
}

void LocaleNames_lt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_lt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lietuva"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Lietuvi\u0173"_s)
		})
	});
}

LocaleNames_lt::LocaleNames_lt() {
}

$Class* LocaleNames_lt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lt, name, initialize, &_LocaleNames_lt_ClassInfo_, allocate$LocaleNames_lt);
	return class$;
}

$Class* LocaleNames_lt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun