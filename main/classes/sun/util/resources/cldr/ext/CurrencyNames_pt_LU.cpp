#include <sun/util/resources/cldr/ext/CurrencyNames_pt_LU.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _CurrencyNames_pt_LU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_pt_LU::*)()>(&CurrencyNames_pt_LU::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_pt_LU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt_LU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_LU_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_LU($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_LU));
}

void CurrencyNames_pt_LU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_LU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("LUF"_s),
		$of("F"_s)
	})}));
	return data;
}

CurrencyNames_pt_LU::CurrencyNames_pt_LU() {
}

$Class* CurrencyNames_pt_LU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_LU, name, initialize, &_CurrencyNames_pt_LU_ClassInfo_, allocate$CurrencyNames_pt_LU);
	return class$;
}

$Class* CurrencyNames_pt_LU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun