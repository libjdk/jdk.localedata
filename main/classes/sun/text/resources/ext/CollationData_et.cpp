#include <sun/text/resources/ext/CollationData_et.h>

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

$MethodInfo _CollationData_et_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_et::*)()>(&CollationData_et::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_et_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_et",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_et_MethodInfo_
};

$Object* allocate$CollationData_et($Class* clazz) {
	return $of($alloc(CollationData_et));
}

void CollationData_et::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_et::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"@& S < s\u030c, S\u030c < z , Z < z\u030c , Z\u030c & V ; w , W < o\u0303 , O\u0303< a\u0308 , A\u0308 < o\u0308 , O\u0308 ; w\u0302 , W\u0302< u\u0308 , U\u0308& Y < \u01b6 , \u01b5 "_s)
	})});
}

CollationData_et::CollationData_et() {
}

$Class* CollationData_et::load$($String* name, bool initialize) {
	$loadClass(CollationData_et, name, initialize, &_CollationData_et_ClassInfo_, allocate$CollationData_et);
	return class$;
}

$Class* CollationData_et::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun