#include <sun/util/resources/cldr/ext/LocaleNames_kkj.h>

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

$MethodInfo _LocaleNames_kkj_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_kkj::*)()>(&LocaleNames_kkj::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_kkj_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_kkj",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_kkj_MethodInfo_
};

$Object* allocate$LocaleNames_kkj($Class* clazz) {
	return $of($alloc(LocaleNames_kkj));
}

void LocaleNames_kkj::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kkj::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kam\u025brun"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("numbu buy"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"kak\u0254"_s)
		})
	}));
	return data;
}

LocaleNames_kkj::LocaleNames_kkj() {
}

$Class* LocaleNames_kkj::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_kkj, name, initialize, &_LocaleNames_kkj_ClassInfo_, allocate$LocaleNames_kkj);
	return class$;
}

$Class* LocaleNames_kkj::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun