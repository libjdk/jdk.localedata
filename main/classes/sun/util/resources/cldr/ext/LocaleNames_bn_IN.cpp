#include <sun/util/resources/cldr/ext/LocaleNames_bn_IN.h>

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

$MethodInfo _LocaleNames_bn_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_bn_IN::*)()>(&LocaleNames_bn_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_bn_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bn_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bn_IN_MethodInfo_
};

$Object* allocate$LocaleNames_bn_IN($Class* clazz) {
	return $of($alloc(LocaleNames_bn_IN));
}

void LocaleNames_bn_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bn_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u09ae\u09be\u09b0\u09cd\u0995\u09bf\u09a8 \u09af\u09c1\u0995\u09cd\u09a4\u09b0\u09be\u09b7\u09cd\u099f\u09cd\u09b0\u09c7\u09b0 \u09aa\u09be\u09b0\u09cd\u09b6\u09cd\u09ac\u09ac\u09b0\u09cd\u09a4\u09c0 \u09a6\u09cd\u09ac\u09c0\u09aa\u09aa\u09c1\u099e\u09cd\u099c"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u0995\u09cb\u09b2\u09cb\u09a8\u09bf\u09af\u09bc\u09be\u09a8"_s)
		})
	}));
	return data;
}

LocaleNames_bn_IN::LocaleNames_bn_IN() {
}

$Class* LocaleNames_bn_IN::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bn_IN, name, initialize, &_LocaleNames_bn_IN_ClassInfo_, allocate$LocaleNames_bn_IN);
	return class$;
}

$Class* LocaleNames_bn_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun