#include <sun/util/resources/ext/CurrencyNames_sr_Latn_BA.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _CurrencyNames_sr_Latn_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sr_Latn_BA::*)()>(&CurrencyNames_sr_Latn_BA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sr_Latn_BA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sr_Latn_BA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sr_Latn_BA_MethodInfo_
};

$Object* allocate$CurrencyNames_sr_Latn_BA($Class* clazz) {
	return $of($alloc(CurrencyNames_sr_Latn_BA));
}

void CurrencyNames_sr_Latn_BA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_Latn_BA::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of("KM"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"\u20ac"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Bosansko-Hercegova\u010dka konvertibilna marka"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Evro"_s)
		})
	});
}

CurrencyNames_sr_Latn_BA::CurrencyNames_sr_Latn_BA() {
}

$Class* CurrencyNames_sr_Latn_BA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sr_Latn_BA, name, initialize, &_CurrencyNames_sr_Latn_BA_ClassInfo_, allocate$CurrencyNames_sr_Latn_BA);
	return class$;
}

$Class* CurrencyNames_sr_Latn_BA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun