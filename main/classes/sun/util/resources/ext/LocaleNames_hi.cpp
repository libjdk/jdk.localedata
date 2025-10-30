#include <sun/util/resources/ext/LocaleNames_hi.h>

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

$MethodInfo _LocaleNames_hi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_hi::*)()>(&LocaleNames_hi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_hi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_hi",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_hi_MethodInfo_
};

$Object* allocate$LocaleNames_hi($Class* clazz) {
	return $of($alloc(LocaleNames_hi));
}

void LocaleNames_hi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_hi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u092d\u093e\u0930\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0938\u0902\u092f\u0941\u0915\u094d\u0924 \u0930\u093e\u091c\u094d\u092f \u0905\u092e\u0947\u0930\u093f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0905\u0901\u0917\u094d\u0930\u0947\u091c\u093c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0939\u093f\u0902\u0926\u0940"_s)
		})
	});
}

LocaleNames_hi::LocaleNames_hi() {
}

$Class* LocaleNames_hi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hi, name, initialize, &_LocaleNames_hi_ClassInfo_, allocate$LocaleNames_hi);
	return class$;
}

$Class* LocaleNames_hi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun