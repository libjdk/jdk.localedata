#include <sun/text/resources/ext/CollationData_hr.h>

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

$MethodInfo _CollationData_hr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_hr::*)()>(&CollationData_hr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_hr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_hr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_hr_MethodInfo_
};

$Object* allocate$CollationData_hr($Class* clazz) {
	return $of($alloc(CollationData_hr));
}

void CollationData_hr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_hr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& \u200f = \u030c & \u0306 = \u030d & C < c\u030c , C\u030c < c\u0301 , C\u0301 & D < \u01f3 , \u01f2 , \u01f1 < dz , dZ , Dz , DZ < \u01c6 , \u01c5 , \u01c4 < \u0111 , \u0110 & L < lj , lJ , Lj , LJ & N < nj , nJ , Nj , NJ & S < s\u030c , S\u030c & Z < z\u030c , Z\u030c "_s)
	})});
}

CollationData_hr::CollationData_hr() {
}

$Class* CollationData_hr::load$($String* name, bool initialize) {
	$loadClass(CollationData_hr, name, initialize, &_CollationData_hr_ClassInfo_, allocate$CollationData_hr);
	return class$;
}

$Class* CollationData_hr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun