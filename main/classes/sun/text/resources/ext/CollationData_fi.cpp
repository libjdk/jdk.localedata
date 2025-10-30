#include <sun/text/resources/ext/CollationData_fi.h>

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

$MethodInfo _CollationData_fi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_fi::*)()>(&CollationData_fi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_fi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_fi",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_fi_MethodInfo_
};

$Object* allocate$CollationData_fi($Class* clazz) {
	return $of($alloc(CollationData_fi));
}

void CollationData_fi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_fi::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& V ; w , W & Z < a\u030a , A\u030a< a\u0308 , A\u0308 < o\u0308 , O\u0308< o\u030b , O\u030b ; \u00f8 , \u00d8&  Y ; u\u030b, U\u030b ; u\u0308 , U\u0308"_s)
	})});
}

CollationData_fi::CollationData_fi() {
}

$Class* CollationData_fi::load$($String* name, bool initialize) {
	$loadClass(CollationData_fi, name, initialize, &_CollationData_fi_ClassInfo_, allocate$CollationData_fi);
	return class$;
}

$Class* CollationData_fi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun