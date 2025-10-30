#include <sun/text/resources/ext/CollationData_cs.h>

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

$MethodInfo _CollationData_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_cs::*)()>(&CollationData_cs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_cs",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_cs_MethodInfo_
};

$Object* allocate$CollationData_cs($Class* clazz) {
	return $of($alloc(CollationData_cs));
}

void CollationData_cs::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_cs::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& \u0361 ; \u0308 = \u030d& C < c\u030c , C\u030c& H < ch , cH , Ch , CH & R < r\u030c , R\u030c& S < s\u030c , S\u030c& Z < z\u030c , Z\u030c"_s)
	})});
}

CollationData_cs::CollationData_cs() {
}

$Class* CollationData_cs::load$($String* name, bool initialize) {
	$loadClass(CollationData_cs, name, initialize, &_CollationData_cs_ClassInfo_, allocate$CollationData_cs);
	return class$;
}

$Class* CollationData_cs::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun