#include <sun/util/resources/cldr/ext/CurrencyNames_ii.h>

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

$MethodInfo _CurrencyNames_ii_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ii::*)()>(&CurrencyNames_ii::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ii_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ii",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ii_MethodInfo_
};

$Object* allocate$CurrencyNames_ii($Class* clazz) {
	return $of($alloc(CurrencyNames_ii));
}

void CurrencyNames_ii::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ii::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\ua149\ua00b\ua41a\ua320\ua30b\ua180\ua386\ua0c0\ua00b\ua201\ua010\ua320"_s)
		})
	}));
	return data;
}

CurrencyNames_ii::CurrencyNames_ii() {
}

$Class* CurrencyNames_ii::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ii, name, initialize, &_CurrencyNames_ii_ClassInfo_, allocate$CurrencyNames_ii);
	return class$;
}

$Class* CurrencyNames_ii::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun