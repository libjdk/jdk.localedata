#include <sun/text/resources/ext/CollationData_lt.h>

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

$MethodInfo _CollationData_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_lt::*)()>(&CollationData_lt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_lt",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_lt_MethodInfo_
};

$Object* allocate$CollationData_lt($Class* clazz) {
	return $of($alloc(CollationData_lt));
}

void CollationData_lt::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_lt::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"@& C < c\u030c , C\u030c & I ; y = \u0131 , Y = \u0130 & S < s\u030c , S\u030c & X < y\u0301, Y\u0301 < y\u0302 , Y\u0302 < y\u0308, Y\u0308 & Z < z\u030c , Z\u030c "_s)
	})});
}

CollationData_lt::CollationData_lt() {
}

$Class* CollationData_lt::load$($String* name, bool initialize) {
	$loadClass(CollationData_lt, name, initialize, &_CollationData_lt_ClassInfo_, allocate$CollationData_lt);
	return class$;
}

$Class* CollationData_lt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun