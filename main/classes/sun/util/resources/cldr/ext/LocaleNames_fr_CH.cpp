#include <sun/util/resources/cldr/ext/LocaleNames_fr_CH.h>

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

$MethodInfo _LocaleNames_fr_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_fr_CH::*)()>(&LocaleNames_fr_CH::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_fr_CH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fr_CH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fr_CH_MethodInfo_
};

$Object* allocate$LocaleNames_fr_CH($Class* clazz) {
	return $of($alloc(LocaleNames_fr_CH));
}

void LocaleNames_fr_CH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fr_CH::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("goudjrati"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of("allemand de Pennsylvanie"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"kurde m\u00e9ridional"_s)
		})
	}));
	return data;
}

LocaleNames_fr_CH::LocaleNames_fr_CH() {
}

$Class* LocaleNames_fr_CH::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fr_CH, name, initialize, &_LocaleNames_fr_CH_ClassInfo_, allocate$LocaleNames_fr_CH);
	return class$;
}

$Class* LocaleNames_fr_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun