#include <sun/util/resources/cldr/ext/CurrencyNames_en_MT.h>

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

$MethodInfo _CurrencyNames_en_MT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_MT::*)()>(&CurrencyNames_en_MT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_MT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_MT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_MT_MethodInfo_
};

$Object* allocate$CurrencyNames_en_MT($Class* clazz) {
	return $of($alloc(CurrencyNames_en_MT));
}

void CurrencyNames_en_MT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_MT::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("GBP"_s),
		$of(u"GB\u00a3"_s)
	})}));
	return data;
}

CurrencyNames_en_MT::CurrencyNames_en_MT() {
}

$Class* CurrencyNames_en_MT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_MT, name, initialize, &_CurrencyNames_en_MT_ClassInfo_, allocate$CurrencyNames_en_MT);
	return class$;
}

$Class* CurrencyNames_en_MT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun