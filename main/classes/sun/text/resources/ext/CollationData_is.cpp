#include <sun/text/resources/ext/CollationData_is.h>

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

$MethodInfo _CollationData_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_is::*)()>(&CollationData_is::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_is",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_is_MethodInfo_
};

$Object* allocate$CollationData_is($Class* clazz) {
	return $of($alloc(CollationData_is));
}

void CollationData_is::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_is::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"@& A < a\u0301, A\u0301 & D < \u00f0, \u00d0& E < e\u0301, E\u0301 & I < i\u0301, I\u0301 & O < o\u0301, O\u0301 & U < u\u0301, U\u0301 & Y < y\u0301, Y\u0301 & Z < \u00fe, \u00de < \u00e6, \u00c6< o\u0308, O\u0308 ; \u00f8, \u00d8"_s)
	})});
}

CollationData_is::CollationData_is() {
}

$Class* CollationData_is::load$($String* name, bool initialize) {
	$loadClass(CollationData_is, name, initialize, &_CollationData_is_ClassInfo_, allocate$CollationData_is);
	return class$;
}

$Class* CollationData_is::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun