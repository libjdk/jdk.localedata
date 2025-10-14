#include <sun/text/resources/ext/CollationData_sq.h>

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

$MethodInfo _CollationData_sq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_sq::*)()>(&CollationData_sq::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_sq_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sq",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sq_MethodInfo_
};

$Object* allocate$CollationData_sq($Class* clazz) {
	return $of($alloc(CollationData_sq));
}

void CollationData_sq::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sq::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of("@"_s)
	})});
}

CollationData_sq::CollationData_sq() {
}

$Class* CollationData_sq::load$($String* name, bool initialize) {
	$loadClass(CollationData_sq, name, initialize, &_CollationData_sq_ClassInfo_, allocate$CollationData_sq);
	return class$;
}

$Class* CollationData_sq::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun