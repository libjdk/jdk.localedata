#include <sun/text/resources/ext/CollationData_no.h>

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

$MethodInfo _CollationData_no_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_no::*)()>(&CollationData_no::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_no_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_no",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_no_MethodInfo_
};

$Object* allocate$CollationData_no($Class* clazz) {
	return $of($alloc(CollationData_no));
}

void CollationData_no::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_no::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& D <\u00d0,\u00f0& ss,\u00df& y , u\u0308& y ; U\u0308& Z < \u00e6, \u00c6  < a\u0308, A\u0308< \u00f8, \u00d8 < o\u0308, O\u0308< o\u030b, O\u030b < a\u030a, A\u030a, aa , aA , Aa , AA  & V < w, W "_s)
	})});
}

CollationData_no::CollationData_no() {
}

$Class* CollationData_no::load$($String* name, bool initialize) {
	$loadClass(CollationData_no, name, initialize, &_CollationData_no_ClassInfo_, allocate$CollationData_no);
	return class$;
}

$Class* CollationData_no::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun