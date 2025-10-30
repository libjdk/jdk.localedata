#include <sun/text/resources/ext/CollationData_sv.h>

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

$MethodInfo _CollationData_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_sv::*)()>(&CollationData_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sv_MethodInfo_
};

$Object* allocate$CollationData_sv($Class* clazz) {
	return $of($alloc(CollationData_sv));
}

void CollationData_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sv::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& Z < a\u030a , A\u030a< a\u0308 , A\u0308 < a\u030b, A\u030b < \u00e6 , \u00c6 < o\u0308 , O\u0308 < o\u030b , O\u030b ; \u00f8 , \u00d8 & V ; w , W& Y, u\u0308 , U\u0308; u\u030b, U\u030b "_s)
	})});
}

CollationData_sv::CollationData_sv() {
}

$Class* CollationData_sv::load$($String* name, bool initialize) {
	$loadClass(CollationData_sv, name, initialize, &_CollationData_sv_ClassInfo_, allocate$CollationData_sv);
	return class$;
}

$Class* CollationData_sv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun