#include <sun/util/resources/cldr/ext/CurrencyNames_en_SH.h>

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

$MethodInfo _CurrencyNames_en_SH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_SH::*)()>(&CurrencyNames_en_SH::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_SH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_SH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SH_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SH($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SH));
}

void CurrencyNames_en_SH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SH::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"GB\u00a3"_s)
		}),
		$$new($ObjectArray, {
			$of("SHP"_s),
			$of(u"\u00a3"_s)
		})
	}));
	return data;
}

CurrencyNames_en_SH::CurrencyNames_en_SH() {
}

$Class* CurrencyNames_en_SH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SH, name, initialize, &_CurrencyNames_en_SH_ClassInfo_, allocate$CurrencyNames_en_SH);
	return class$;
}

$Class* CurrencyNames_en_SH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun