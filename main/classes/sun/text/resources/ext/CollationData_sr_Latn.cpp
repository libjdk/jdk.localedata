#include <sun/text/resources/ext/CollationData_sr_Latn.h>

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

$MethodInfo _CollationData_sr_Latn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_sr_Latn::*)()>(&CollationData_sr_Latn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_sr_Latn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sr_Latn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sr_Latn_MethodInfo_
};

$Object* allocate$CollationData_sr_Latn($Class* clazz) {
	return $of($alloc(CollationData_sr_Latn));
}

void CollationData_sr_Latn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sr_Latn::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& \u200f = \u030c & \u0306 = \u030d & C < c\u030c , C\u030c < c\u0301 , C\u0301 & D < \u01f3 , \u01f2 , \u01f1 < dz , dZ , Dz , DZ < \u01c6 , \u01c5 , \u01c4 < \u0111 , \u0110 & L < lj , lJ , Lj , LJ & N < nj , nJ , Nj , NJ & S < s\u030c , S\u030c & Z < z\u030c , Z\u030c "_s)
	})});
}

CollationData_sr_Latn::CollationData_sr_Latn() {
}

$Class* CollationData_sr_Latn::load$($String* name, bool initialize) {
	$loadClass(CollationData_sr_Latn, name, initialize, &_CollationData_sr_Latn_ClassInfo_, allocate$CollationData_sr_Latn);
	return class$;
}

$Class* CollationData_sr_Latn::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun