#include <sun/util/resources/cldr/ext/CurrencyNames_en_BI.h>

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

$MethodInfo _CurrencyNames_en_BI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_BI::*)()>(&CurrencyNames_en_BI::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_BI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_BI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_BI_MethodInfo_
};

$Object* allocate$CurrencyNames_en_BI($Class* clazz) {
	return $of($alloc(CurrencyNames_en_BI));
}

void CurrencyNames_en_BI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_BI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BIF"_s),
		$of("FBu"_s)
	})}));
	return data;
}

CurrencyNames_en_BI::CurrencyNames_en_BI() {
}

$Class* CurrencyNames_en_BI::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_BI, name, initialize, &_CurrencyNames_en_BI_ClassInfo_, allocate$CurrencyNames_en_BI);
	return class$;
}

$Class* CurrencyNames_en_BI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun