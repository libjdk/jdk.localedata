#include <sun/text/resources/ext/CollationData_vi.h>

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

$MethodInfo _CollationData_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_vi::*)()>(&CollationData_vi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_vi",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_vi_MethodInfo_
};

$Object* allocate$CollationData_vi($Class* clazz) {
	return $of($alloc(CollationData_vi));
}

void CollationData_vi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_vi::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"&\u0300;\u0309;\u0303;\u0301;\u0323&D<\u0111,\u0110&Z<\u0306<\u0302<\u031b"_s)
	})});
}

CollationData_vi::CollationData_vi() {
}

$Class* CollationData_vi::load$($String* name, bool initialize) {
	$loadClass(CollationData_vi, name, initialize, &_CollationData_vi_ClassInfo_, allocate$CollationData_vi);
	return class$;
}

$Class* CollationData_vi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun