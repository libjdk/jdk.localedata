#include <sun/util/resources/cldr/ext/CurrencyNames_es_BR.h>

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

$MethodInfo _CurrencyNames_es_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_es_BR::*)()>(&CurrencyNames_es_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_es_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_BR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_BR_MethodInfo_
};

$Object* allocate$CurrencyNames_es_BR($Class* clazz) {
	return $of($alloc(CurrencyNames_es_BR));
}

void CurrencyNames_es_BR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_BR::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BRL"_s),
		$of("R$"_s)
	})}));
	return data;
}

CurrencyNames_es_BR::CurrencyNames_es_BR() {
}

$Class* CurrencyNames_es_BR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_BR, name, initialize, &_CurrencyNames_es_BR_ClassInfo_, allocate$CurrencyNames_es_BR);
	return class$;
}

$Class* CurrencyNames_es_BR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun