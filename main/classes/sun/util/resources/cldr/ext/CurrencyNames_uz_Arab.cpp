#include <sun/util/resources/cldr/ext/CurrencyNames_uz_Arab.h>

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

$MethodInfo _CurrencyNames_uz_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_uz_Arab::*)()>(&CurrencyNames_uz_Arab::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_uz_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_uz_Arab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_uz_Arab_MethodInfo_
};

$Object* allocate$CurrencyNames_uz_Arab($Class* clazz) {
	return $of($alloc(CurrencyNames_uz_Arab));
}

void CurrencyNames_uz_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_uz_Arab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of(u"\u060b"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0627\u0641\u063a\u0627\u0646\u06cc"_s)
		})
	}));
	return data;
}

CurrencyNames_uz_Arab::CurrencyNames_uz_Arab() {
}

$Class* CurrencyNames_uz_Arab::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_uz_Arab, name, initialize, &_CurrencyNames_uz_Arab_ClassInfo_, allocate$CurrencyNames_uz_Arab);
	return class$;
}

$Class* CurrencyNames_uz_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun