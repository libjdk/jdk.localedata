#include <sun/text/resources/ext/CollationData_sk.h>

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

$MethodInfo _CollationData_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_sk::*)()>(&CollationData_sk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sk",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sk_MethodInfo_
};

$Object* allocate$CollationData_sk($Class* clazz) {
	return $of($alloc(CollationData_sk));
}

void CollationData_sk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sk::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& \u0361 ; \u0308 = \u030d & A < a\u0308 , A\u0308 & C < c\u030c , C\u030c & D < \u0111, \u0110 & H < ch , cH , Ch , CH & L < \u0142 , \u0141 & O < o\u0302 , O\u0302 & R < r\u030c , R\u030c & S < s\u030c , S\u030c & Z < z\u030c , Z\u030c < z\u0307 , Z\u0307 "_s)
	})});
}

CollationData_sk::CollationData_sk() {
}

$Class* CollationData_sk::load$($String* name, bool initialize) {
	$loadClass(CollationData_sk, name, initialize, &_CollationData_sk_ClassInfo_, allocate$CollationData_sk);
	return class$;
}

$Class* CollationData_sk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun