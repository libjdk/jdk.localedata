#include <sun/util/resources/cldr/ext/LocaleNames_en_NZ.h>

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

$MethodInfo _LocaleNames_en_NZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_en_NZ::*)()>(&LocaleNames_en_NZ::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_en_NZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_en_NZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_NZ_MethodInfo_
};

$Object* allocate$LocaleNames_en_NZ($Class* clazz) {
	return $of($alloc(LocaleNames_en_NZ));
}

void LocaleNames_en_NZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_NZ::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("mi"_s),
		$of(u"M\u0101ori"_s)
	})}));
	return data;
}

LocaleNames_en_NZ::LocaleNames_en_NZ() {
}

$Class* LocaleNames_en_NZ::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_NZ, name, initialize, &_LocaleNames_en_NZ_ClassInfo_, allocate$LocaleNames_en_NZ);
	return class$;
}

$Class* LocaleNames_en_NZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun