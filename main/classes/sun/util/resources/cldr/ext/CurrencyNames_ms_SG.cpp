#include <sun/util/resources/cldr/ext/CurrencyNames_ms_SG.h>

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

$MethodInfo _CurrencyNames_ms_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ms_SG::*)()>(&CurrencyNames_ms_SG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ms_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ms_SG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ms_SG_MethodInfo_
};

$Object* allocate$CurrencyNames_ms_SG($Class* clazz) {
	return $of($alloc(CurrencyNames_ms_SG));
}

void CurrencyNames_ms_SG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ms_SG::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SGD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_ms_SG::CurrencyNames_ms_SG() {
}

$Class* CurrencyNames_ms_SG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ms_SG, name, initialize, &_CurrencyNames_ms_SG_ClassInfo_, allocate$CurrencyNames_ms_SG);
	return class$;
}

$Class* CurrencyNames_ms_SG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun