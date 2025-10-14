#include <sun/text/resources/ext/CollationData_sl.h>

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

$MethodInfo _CollationData_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_sl::*)()>(&CollationData_sl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_sl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sl",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sl_MethodInfo_
};

$Object* allocate$CollationData_sl($Class* clazz) {
	return $of($alloc(CollationData_sl));
}

void CollationData_sl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sl::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& C < c\u030c , C\u030c < c\u0301 , C\u0301 & D < \u01f3 , \u01f2 , \u01f1 < \u01c6 , \u01c5 , \u01c4 < \u0111 , \u0110 & L < \u0142 , \u0141 & N < nj , nJ , Nj , NJ & S < s\u030c , S\u030c < s\u0301, S\u0301 & Z < z\u030c , Z\u030c < z\u0301 , Z\u0301 < z\u0307 , Z\u0307 "_s)
	})});
}

CollationData_sl::CollationData_sl() {
}

$Class* CollationData_sl::load$($String* name, bool initialize) {
	$loadClass(CollationData_sl, name, initialize, &_CollationData_sl_ClassInfo_, allocate$CollationData_sl);
	return class$;
}

$Class* CollationData_sl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun