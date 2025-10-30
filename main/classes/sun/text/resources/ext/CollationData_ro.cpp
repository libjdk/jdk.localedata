#include <sun/text/resources/ext/CollationData_ro.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _CollationData_ro_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_ro::*)()>(&CollationData_ro::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_ro_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_ro",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_ro_MethodInfo_
};

$Object* allocate$CollationData_ro($Class* clazz) {
	return $of($alloc(CollationData_ro));
}

void CollationData_ro::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_ro::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& A < a\u0306 , A\u0306 & D < \u0111, \u0110 & I < i\u0302 , I\u0302 & S < s\u0327 , S\u0327 & \u00de < t\u0327 , T\u0327& Z < z\u0307 , Z\u0307 "_s)
	})});
}

CollationData_ro::CollationData_ro() {
}

$Class* CollationData_ro::load$($String* name, bool initialize) {
	$loadClass(CollationData_ro, name, initialize, &_CollationData_ro_ClassInfo_, allocate$CollationData_ro);
	return class$;
}

$Class* CollationData_ro::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun