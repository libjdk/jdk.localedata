#include <sun/text/resources/ext/FormatData_tr_TR.h>

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

$MethodInfo _FormatData_tr_TR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_tr_TR::*)()>(&FormatData_tr_TR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_tr_TR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_tr_TR",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_tr_TR_MethodInfo_
};

$Object* allocate$FormatData_tr_TR($Class* clazz) {
	return $of($alloc(FormatData_tr_TR));
}

void FormatData_tr_TR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_tr_TR::getContents() {
	return $new($ObjectArray2, 0);
}

FormatData_tr_TR::FormatData_tr_TR() {
}

$Class* FormatData_tr_TR::load$($String* name, bool initialize) {
	$loadClass(FormatData_tr_TR, name, initialize, &_FormatData_tr_TR_ClassInfo_, allocate$FormatData_tr_TR);
	return class$;
}

$Class* FormatData_tr_TR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun