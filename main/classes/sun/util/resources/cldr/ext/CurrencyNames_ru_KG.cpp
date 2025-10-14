#include <sun/util/resources/cldr/ext/CurrencyNames_ru_KG.h>

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

$MethodInfo _CurrencyNames_ru_KG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ru_KG::*)()>(&CurrencyNames_ru_KG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ru_KG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ru_KG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ru_KG_MethodInfo_
};

$Object* allocate$CurrencyNames_ru_KG($Class* clazz) {
	return $of($alloc(CurrencyNames_ru_KG));
}

void CurrencyNames_ru_KG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ru_KG::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KGS"_s),
		$of(u"\u0441\u043e\u043c"_s)
	})}));
	return data;
}

CurrencyNames_ru_KG::CurrencyNames_ru_KG() {
}

$Class* CurrencyNames_ru_KG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ru_KG, name, initialize, &_CurrencyNames_ru_KG_ClassInfo_, allocate$CurrencyNames_ru_KG);
	return class$;
}

$Class* CurrencyNames_ru_KG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun