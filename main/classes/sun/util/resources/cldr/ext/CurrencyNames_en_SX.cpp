#include <sun/util/resources/cldr/ext/CurrencyNames_en_SX.h>

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

$MethodInfo _CurrencyNames_en_SX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_SX::*)()>(&CurrencyNames_en_SX::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_SX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_SX",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SX_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SX($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SX));
}

void CurrencyNames_en_SX::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SX::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ANG"_s),
		$of("NAf."_s)
	})}));
	return data;
}

CurrencyNames_en_SX::CurrencyNames_en_SX() {
}

$Class* CurrencyNames_en_SX::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SX, name, initialize, &_CurrencyNames_en_SX_ClassInfo_, allocate$CurrencyNames_en_SX);
	return class$;
}

$Class* CurrencyNames_en_SX::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun