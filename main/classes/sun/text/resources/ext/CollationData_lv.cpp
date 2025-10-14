#include <sun/text/resources/ext/CollationData_lv.h>

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

$MethodInfo _CollationData_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_lv::*)()>(&CollationData_lv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_lv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_lv_MethodInfo_
};

$Object* allocate$CollationData_lv($Class* clazz) {
	return $of($alloc(CollationData_lv));
}

void CollationData_lv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_lv::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"@& C < c\u030c , C\u030c & G < g\u0327 , G\u0327 & I < y, Y& K < k\u0327 , K\u0327 & L < l\u0327 , L\u0327 & N < n\u0327 , N\u0327 & S < s\u030c , S\u030c & Z < z\u030c , Z\u030c "_s)
	})});
}

CollationData_lv::CollationData_lv() {
}

$Class* CollationData_lv::load$($String* name, bool initialize) {
	$loadClass(CollationData_lv, name, initialize, &_CollationData_lv_ClassInfo_, allocate$CollationData_lv);
	return class$;
}

$Class* CollationData_lv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun