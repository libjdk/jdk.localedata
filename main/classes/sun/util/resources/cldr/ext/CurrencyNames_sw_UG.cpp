#include <sun/util/resources/cldr/ext/CurrencyNames_sw_UG.h>

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

$MethodInfo _CurrencyNames_sw_UG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sw_UG::*)()>(&CurrencyNames_sw_UG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sw_UG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sw_UG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sw_UG_MethodInfo_
};

$Object* allocate$CurrencyNames_sw_UG($Class* clazz) {
	return $of($alloc(CurrencyNames_sw_UG));
}

void CurrencyNames_sw_UG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sw_UG::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("UGX"_s),
		$of("USh"_s)
	})}));
	return data;
}

CurrencyNames_sw_UG::CurrencyNames_sw_UG() {
}

$Class* CurrencyNames_sw_UG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sw_UG, name, initialize, &_CurrencyNames_sw_UG_ClassInfo_, allocate$CurrencyNames_sw_UG);
	return class$;
}

$Class* CurrencyNames_sw_UG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun