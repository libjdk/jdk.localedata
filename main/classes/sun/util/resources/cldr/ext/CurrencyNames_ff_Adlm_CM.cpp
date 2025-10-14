#include <sun/util/resources/cldr/ext/CurrencyNames_ff_Adlm_CM.h>

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

$MethodInfo _CurrencyNames_ff_Adlm_CM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ff_Adlm_CM::*)()>(&CurrencyNames_ff_Adlm_CM::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ff_Adlm_CM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_CM",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_Adlm_CM_MethodInfo_
};

$Object* allocate$CurrencyNames_ff_Adlm_CM($Class* clazz) {
	return $of($alloc(CurrencyNames_ff_Adlm_CM));
}

void CurrencyNames_ff_Adlm_CM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_CM::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("GNF"_s),
		$of("GNF"_s)
	})}));
	return data;
}

CurrencyNames_ff_Adlm_CM::CurrencyNames_ff_Adlm_CM() {
}

$Class* CurrencyNames_ff_Adlm_CM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff_Adlm_CM, name, initialize, &_CurrencyNames_ff_Adlm_CM_ClassInfo_, allocate$CurrencyNames_ff_Adlm_CM);
	return class$;
}

$Class* CurrencyNames_ff_Adlm_CM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun