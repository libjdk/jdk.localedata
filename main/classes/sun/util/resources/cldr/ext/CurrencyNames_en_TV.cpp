#include <sun/util/resources/cldr/ext/CurrencyNames_en_TV.h>

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

$MethodInfo _CurrencyNames_en_TV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_TV::*)()>(&CurrencyNames_en_TV::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_TV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_TV",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_TV_MethodInfo_
};

$Object* allocate$CurrencyNames_en_TV($Class* clazz) {
	return $of($alloc(CurrencyNames_en_TV));
}

void CurrencyNames_en_TV::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_TV::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AUD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_TV::CurrencyNames_en_TV() {
}

$Class* CurrencyNames_en_TV::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_TV, name, initialize, &_CurrencyNames_en_TV_ClassInfo_, allocate$CurrencyNames_en_TV);
	return class$;
}

$Class* CurrencyNames_en_TV::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun