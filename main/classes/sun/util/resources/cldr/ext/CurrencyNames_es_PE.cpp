#include <sun/util/resources/cldr/ext/CurrencyNames_es_PE.h>

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

$MethodInfo _CurrencyNames_es_PE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_es_PE::*)()>(&CurrencyNames_es_PE::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_es_PE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_PE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_PE_MethodInfo_
};

$Object* allocate$CurrencyNames_es_PE($Class* clazz) {
	return $of($alloc(CurrencyNames_es_PE));
}

void CurrencyNames_es_PE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_PE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PEN"_s),
		$of("S/"_s)
	})}));
	return data;
}

CurrencyNames_es_PE::CurrencyNames_es_PE() {
}

$Class* CurrencyNames_es_PE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_PE, name, initialize, &_CurrencyNames_es_PE_ClassInfo_, allocate$CurrencyNames_es_PE);
	return class$;
}

$Class* CurrencyNames_es_PE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun