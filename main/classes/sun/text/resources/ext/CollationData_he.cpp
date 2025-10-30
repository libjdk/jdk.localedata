#include <sun/text/resources/ext/CollationData_he.h>

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

$MethodInfo _CollationData_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_he::*)()>(&CollationData_he::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_he_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_he",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_he_MethodInfo_
};

$Object* allocate$CollationData_he($Class* clazz) {
	return $of($alloc(CollationData_he));
}

void CollationData_he::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_he::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& \u0361 = \u05c4 & \u030d = \u0591 ; \u0592 ; \u0593 ; \u0594 ; \u0595 ; \u0596 ; \u0597 ; \u0598 ; \u0599 & \u0301 = \u059a & \u0300 = \u059b & \u0307 = \u059c ; \u059d & \u0302 = \u059e & \u0308 = \u059f & \u030c = \u05a0 & \u0306 = \u05a1 & \u0304 = \u05a3 ; \u05a4 & \u0303 = \u05a5 & \u030a = \u05a6 & \u0328 = \u05a7 & \u0327 = \u05a8 & \u030b = \u05a9 & \u0336 = \u05aa & \u0337 = \u05ab & \u0338 = \u05ac ; \u05ad ; \u05ae ; \u05af ; \u05b0 ; \u05b1 ; \u05b2 ; \u05b3 ; \u05b4 ; \u05b5 ; \u05b6 ; \u05b7 ; \u05b8 ; \u05b9 ; \u05bb ; \u05bc ; \u05bd ; \u05bf ; \u05c0 ; \u05c1 ; \u05c2 & \u00b5 < \u05be < \u05c3 < \u05f3 < \u05f4 & Z < \u05d0 < \u05d1 < \u05d2 < \u05d3 < \u05d4 < \u05d5 < \u05f0 < \u05f1 < \u05d6 < \u05d7 < \u05d8 < \u05d9 < \u05f2 < \u05da , \u05db < \u05dc < \u05dd , \u05de < \u05df , \u05e0 < \u05e1 < \u05e2 < \u05e3 , \u05e4 < \u05e5 , \u05e6 < \u05e7 < \u05e8 < \u05e9 < \u05ea "_s)
	})});
}

CollationData_he::CollationData_he() {
}

$Class* CollationData_he::load$($String* name, bool initialize) {
	$loadClass(CollationData_he, name, initialize, &_CollationData_he_ClassInfo_, allocate$CollationData_he);
	return class$;
}

$Class* CollationData_he::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun