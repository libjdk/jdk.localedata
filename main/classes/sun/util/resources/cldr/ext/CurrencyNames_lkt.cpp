#include <sun/util/resources/cldr/ext/CurrencyNames_lkt.h>

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

$MethodInfo _CurrencyNames_lkt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_lkt::*)()>(&CurrencyNames_lkt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_lkt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lkt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lkt_MethodInfo_
};

$Object* allocate$CurrencyNames_lkt($Class* clazz) {
	return $of($alloc(CurrencyNames_lkt));
}

void CurrencyNames_lkt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lkt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("USD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_lkt::CurrencyNames_lkt() {
}

$Class* CurrencyNames_lkt::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lkt, name, initialize, &_CurrencyNames_lkt_ClassInfo_, allocate$CurrencyNames_lkt);
	return class$;
}

$Class* CurrencyNames_lkt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun