#include <sun/text/resources/ext/CollationData_el.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _CollationData_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_el::*)()>(&CollationData_el::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_el",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_el_MethodInfo_
};

$Object* allocate$CollationData_el($Class* clazz) {
	return $of($alloc(CollationData_el));
}

void CollationData_el::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_el::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& \u0361 = \u0387 = \u03f3 & \u00b5 < \u0374 < \u0375 < \u037a < \u037e < \u0384 < \u0385 & Z < \u03b1 , \u0391 ; \u03ac , \u0386 < \u03b2 , \u0392 ; \u03d0 < \u03b3 , \u0393 < \u03b4 , \u0394 < \u03b5 , \u0395 ; \u03ad , \u0388 < \u03b6 , \u0396 < \u03b7 , \u0397 ; \u03ae , \u0389 < \u03b8 , \u0398 ; \u03d1 < \u03b9 , \u0399 ; \u03af , \u038a ; \u03ca , \u03aa ; \u0390 < \u03ba , \u039a ; \u03f0 < \u03bb , \u039b < \u03bc , \u039c < \u03bd , \u039d < \u03be , \u039e < \u03bf , \u039f ; \u03cc , \u038c < \u03c0 , \u03a0 ; \u03d6 < \u03c1 , \u03a1 ; \u03f1 < \u03c3 , \u03c2 , \u03a3 ; \u03f2 < \u03c4 , \u03a4 < \u03c5 , \u03a5 ; \u03cd , \u038e ; \u03cb , \u03ab = \u03d4 ; \u03b0 ; \u03d2 ; \u03d3 < \u03c6 , \u03a6 ; \u03d5 < \u03c7 , \u03a7 < \u03c8 , \u03a8 < \u03c9 , \u03a9 ; \u03ce , \u038f , \u03da , \u03dc , \u03de , \u03e0 < \u03e3 , \u03e2 < \u03e5 , \u03e4 < \u03e7 , \u03e6 < \u03e9 , \u03e8 < \u03eb , \u03ea < \u03ed , \u03ec < \u03ef , \u03ee & \u03bc = \u00b5 "_s)
	})});
}

CollationData_el::CollationData_el() {
}

$Class* CollationData_el::load$($String* name, bool initialize) {
	$loadClass(CollationData_el, name, initialize, &_CollationData_el_ClassInfo_, allocate$CollationData_el);
	return class$;
}

$Class* CollationData_el::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun