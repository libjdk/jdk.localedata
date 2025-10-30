#include <sun/text/resources/ext/CollationData_pl.h>

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

$MethodInfo _CollationData_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_pl::*)()>(&CollationData_pl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_pl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_pl",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_pl_MethodInfo_
};

$Object* allocate$CollationData_pl($Class* clazz) {
	return $of($alloc(CollationData_pl));
}

void CollationData_pl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_pl::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& A < a\u0328 , A\u0328 & C < c\u0301 , C\u0301 & D < \u0111, \u0110 & E < e\u0328 , E\u0328 & L < \u0142 , \u0141 & N < n\u0301 , N\u0301 & O < o\u0301 , O\u0301 & S < s\u0301 , S\u0301 & Z < z\u0301 , Z\u0301 < z\u0307 , Z\u0307 "_s)
	})});
}

CollationData_pl::CollationData_pl() {
}

$Class* CollationData_pl::load$($String* name, bool initialize) {
	$loadClass(CollationData_pl, name, initialize, &_CollationData_pl_ClassInfo_, allocate$CollationData_pl);
	return class$;
}

$Class* CollationData_pl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun