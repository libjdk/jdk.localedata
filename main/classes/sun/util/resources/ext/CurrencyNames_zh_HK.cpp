#include <sun/util/resources/ext/CurrencyNames_zh_HK.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <sun/util/resources/LocaleData.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

#undef TAIWAN

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;
using $LocaleData = ::sun::util::resources::LocaleData;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_zh_HK::*)()>(&CurrencyNames_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _CurrencyNames_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_zh_HK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_HK_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_HK($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_HK));
}

void CurrencyNames_zh_HK::init$() {
	$useLocalCurrentObjectStackCache();
	$OpenListResourceBundle::init$();
	$init($Locale);
	$var($ResourceBundle, bundle, $nc($($nc(($cast($ResourceBundleBasedAdapter, $($LocaleProviderAdapter::forJRE()))))->getLocaleData()))->getCurrencyNames($Locale::TAIWAN));
	setParent(bundle);
}

$ObjectArray2* CurrencyNames_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("HKD"_s),
			$of("HK$"_s)
		}),
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("TWD"_s)
		})
	});
}

CurrencyNames_zh_HK::CurrencyNames_zh_HK() {
}

$Class* CurrencyNames_zh_HK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_HK, name, initialize, &_CurrencyNames_zh_HK_ClassInfo_, allocate$CurrencyNames_zh_HK);
	return class$;
}

$Class* CurrencyNames_zh_HK::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun