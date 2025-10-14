#include <sun/util/resources/provider/SupplementaryLocaleDataProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/resources/LocaleData$LocaleDataResourceBundleProvider.h>
#include <sun/util/resources/LocaleData$SupplementaryResourceBundleProvider.h>
#include <sun/util/resources/provider/LocaleDataProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $LocaleData$LocaleDataResourceBundleProvider = ::sun::util::resources::LocaleData$LocaleDataResourceBundleProvider;
using $LocaleData$SupplementaryResourceBundleProvider = ::sun::util::resources::LocaleData$SupplementaryResourceBundleProvider;
using $LocaleDataProvider = ::sun::util::resources::provider::LocaleDataProvider;

namespace sun {
	namespace util {
		namespace resources {
			namespace provider {

$MethodInfo _SupplementaryLocaleDataProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SupplementaryLocaleDataProvider::*)()>(&SupplementaryLocaleDataProvider::init$))},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SupplementaryLocaleDataProvider_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$SupplementaryResourceBundleProvider", "sun.util.resources.LocaleData", "SupplementaryResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SupplementaryLocaleDataProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.provider.SupplementaryLocaleDataProvider",
	"sun.util.resources.LocaleData$SupplementaryResourceBundleProvider",
	nullptr,
	nullptr,
	_SupplementaryLocaleDataProvider_MethodInfo_,
	nullptr,
	nullptr,
	_SupplementaryLocaleDataProvider_InnerClassesInfo_
};

$Object* allocate$SupplementaryLocaleDataProvider($Class* clazz) {
	return $of($alloc(SupplementaryLocaleDataProvider));
}

void SupplementaryLocaleDataProvider::init$() {
	$LocaleData$SupplementaryResourceBundleProvider::init$();
}

$ResourceBundle* SupplementaryLocaleDataProvider::getBundle($String* baseName, $Locale* locale) {
	$var($String, bundleName, toBundleName(baseName, locale));
	$var($ResourceBundle, rb, $LocaleDataProvider::loadResourceBundle(bundleName));
	if (rb == nullptr) {
		$var($String, otherBundleName, toOtherBundleName(baseName, bundleName, locale));
		if (!$nc(bundleName)->equals(otherBundleName)) {
			$assign(rb, $LocaleDataProvider::loadResourceBundle(otherBundleName));
		}
	}
	return rb;
}

SupplementaryLocaleDataProvider::SupplementaryLocaleDataProvider() {
}

$Class* SupplementaryLocaleDataProvider::load$($String* name, bool initialize) {
	$loadClass(SupplementaryLocaleDataProvider, name, initialize, &_SupplementaryLocaleDataProvider_ClassInfo_, allocate$SupplementaryLocaleDataProvider);
	return class$;
}

$Class* SupplementaryLocaleDataProvider::class$ = nullptr;

			} // provider
		} // resources
	} // util
} // sun