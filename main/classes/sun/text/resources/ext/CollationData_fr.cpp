#include <sun/text/resources/ext/CollationData_fr.h>

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

$MethodInfo _CollationData_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_fr::*)()>(&CollationData_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_fr_MethodInfo_
};

$Object* allocate$CollationData_fr($Class* clazz) {
	return $of($alloc(CollationData_fr));
}

void CollationData_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_fr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of("@"_s)
	})});
}

CollationData_fr::CollationData_fr() {
}

$Class* CollationData_fr::load$($String* name, bool initialize) {
	$loadClass(CollationData_fr, name, initialize, &_CollationData_fr_ClassInfo_, allocate$CollationData_fr);
	return class$;
}

$Class* CollationData_fr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun