#include <sun/util/resources/cldr/ext/LocaleNames_dua.h>

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

$MethodInfo _LocaleNames_dua_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_dua::*)()>(&LocaleNames_dua::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_dua_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_dua",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_dua_MethodInfo_
};

$Object* allocate$LocaleNames_dua($Class* clazz) {
	return $of($alloc(LocaleNames_dua));
}

void LocaleNames_dua::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_dua::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroun"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"du\u00e1l\u00e1"_s)
		})
	}));
	return data;
}

LocaleNames_dua::LocaleNames_dua() {
}

$Class* LocaleNames_dua::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_dua, name, initialize, &_LocaleNames_dua_ClassInfo_, allocate$LocaleNames_dua);
	return class$;
}

$Class* LocaleNames_dua::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun