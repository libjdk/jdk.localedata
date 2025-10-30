#include <sun/util/resources/cldr/ext/LocaleNames_ar_EG.h>

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

$MethodInfo _LocaleNames_ar_EG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ar_EG::*)()>(&LocaleNames_ar_EG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ar_EG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ar_EG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ar_EG_MethodInfo_
};

$Object* allocate$LocaleNames_ar_EG($Class* clazz) {
	return $of($alloc(LocaleNames_ar_EG));
}

void LocaleNames_ar_EG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ar_EG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("da"_s),
		$of(u"\u0627\u0644\u062f\u0646\u0645\u0627\u0631\u0643\u064a\u0629"_s)
	})}));
	return data;
}

LocaleNames_ar_EG::LocaleNames_ar_EG() {
}

$Class* LocaleNames_ar_EG::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ar_EG, name, initialize, &_LocaleNames_ar_EG_ClassInfo_, allocate$LocaleNames_ar_EG);
	return class$;
}

$Class* LocaleNames_ar_EG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun