#include <sun/util/resources/ext/CurrencyNames_en_SG.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_en_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_SG::*)()>(&CurrencyNames_en_SG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_SG_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_SG",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SG_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SG($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SG));
}

void CurrencyNames_en_SG::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SG::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SGD"_s),
		$of("$"_s)
	})});
}

CurrencyNames_en_SG::CurrencyNames_en_SG() {
}

$Class* CurrencyNames_en_SG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SG, name, initialize, &_CurrencyNames_en_SG_ClassInfo_, allocate$CurrencyNames_en_SG);
	return class$;
}

$Class* CurrencyNames_en_SG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun