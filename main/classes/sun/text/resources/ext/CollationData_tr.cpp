#include <sun/text/resources/ext/CollationData_tr.h>

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

$MethodInfo _CollationData_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_tr::*)()>(&CollationData_tr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_tr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_tr_MethodInfo_
};

$Object* allocate$CollationData_tr($Class* clazz) {
	return $of($alloc(CollationData_tr));
}

void CollationData_tr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_tr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& A < a\u0308 , A\u0308 & C < c\u0327 , C\u0327 & G < g\u0306 , G\u0306 & H < \u0131 , I & I < i , \u0130 < \u0132 , \u0133 & O < o\u0308 , O\u0308 & S < s\u0327 , S\u0327 & U < u\u0308 , U\u0308 "_s)
	})});
}

CollationData_tr::CollationData_tr() {
}

$Class* CollationData_tr::load$($String* name, bool initialize) {
	$loadClass(CollationData_tr, name, initialize, &_CollationData_tr_ClassInfo_, allocate$CollationData_tr);
	return class$;
}

$Class* CollationData_tr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun