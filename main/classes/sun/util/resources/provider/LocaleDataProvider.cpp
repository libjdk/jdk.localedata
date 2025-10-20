#include <sun/util/resources/provider/LocaleDataProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/resources/LocaleData$CommonResourceBundleProvider.h>
#include <sun/util/resources/LocaleData$LocaleDataResourceBundleProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $LocaleData$CommonResourceBundleProvider = ::sun::util::resources::LocaleData$CommonResourceBundleProvider;
using $LocaleData$LocaleDataResourceBundleProvider = ::sun::util::resources::LocaleData$LocaleDataResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {
			namespace provider {

$MethodInfo _LocaleDataProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleDataProvider::*)()>(&LocaleDataProvider::init$))},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"loadResourceBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $STATIC, $method(static_cast<$ResourceBundle*(*)($String*)>(&LocaleDataProvider::loadResourceBundle))},
	{}
};

$InnerClassInfo _LocaleDataProvider_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$CommonResourceBundleProvider", "sun.util.resources.LocaleData", "CommonResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LocaleDataProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.provider.LocaleDataProvider",
	"sun.util.resources.LocaleData$CommonResourceBundleProvider",
	nullptr,
	nullptr,
	_LocaleDataProvider_MethodInfo_,
	nullptr,
	nullptr,
	_LocaleDataProvider_InnerClassesInfo_
};

$Object* allocate$LocaleDataProvider($Class* clazz) {
	return $of($alloc(LocaleDataProvider));
}

void LocaleDataProvider::init$() {
	$LocaleData$CommonResourceBundleProvider::init$();
}

$ResourceBundle* LocaleDataProvider::getBundle($String* baseName, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, bundleName, toBundleName(baseName, locale));
	$var($ResourceBundle, rb, loadResourceBundle(bundleName));
	if (rb == nullptr) {
		$var($String, otherBundleName, toOtherBundleName(baseName, bundleName, locale));
		if (!$nc(bundleName)->equals(otherBundleName)) {
			$assign(rb, loadResourceBundle(otherBundleName));
		}
	}
	return rb;
}

$ResourceBundle* LocaleDataProvider::loadResourceBundle($String* bundleName) {
	$init(LocaleDataProvider);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = $Class::forName($(LocaleDataProvider::class$->getModule()), bundleName);
	$load($ResourceBundle);
	if (c != nullptr && $ResourceBundle::class$->isAssignableFrom(c)) {
		try {
			$var($ResourceBundle, rb, $cast($ResourceBundle, $nc((c))->newInstance()));
			return rb;
		} catch ($InstantiationException&) {
			$var($ReflectiveOperationException, e, $catch());
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		} catch ($IllegalAccessException&) {
			$var($ReflectiveOperationException, e, $catch());
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		}
	}
	return nullptr;
}

LocaleDataProvider::LocaleDataProvider() {
}

$Class* LocaleDataProvider::load$($String* name, bool initialize) {
	$loadClass(LocaleDataProvider, name, initialize, &_LocaleDataProvider_ClassInfo_, allocate$LocaleDataProvider);
	return class$;
}

$Class* LocaleDataProvider::class$ = nullptr;

			} // provider
		} // resources
	} // util
} // sun