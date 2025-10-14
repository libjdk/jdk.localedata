#include <sun/text/resources/ext/FormatData_sr_RS.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_sr_RS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_sr_RS::*)()>(&FormatData_sr_RS::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_sr_RS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr_RS",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_RS_MethodInfo_
};

$Object* allocate$FormatData_sr_RS($Class* clazz) {
	return $of($alloc(FormatData_sr_RS));
}

void FormatData_sr_RS::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_RS::getContents() {
	return $new($ObjectArray2, 0);
}

FormatData_sr_RS::FormatData_sr_RS() {
}

$Class* FormatData_sr_RS::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_RS, name, initialize, &_FormatData_sr_RS_ClassInfo_, allocate$FormatData_sr_RS);
	return class$;
}

$Class* FormatData_sr_RS::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun