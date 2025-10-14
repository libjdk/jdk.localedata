#include <sun/util/resources/cldr/ext/CurrencyNames_nl_AW.h>

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

$MethodInfo _CurrencyNames_nl_AW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_nl_AW::*)()>(&CurrencyNames_nl_AW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_nl_AW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nl_AW",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nl_AW_MethodInfo_
};

$Object* allocate$CurrencyNames_nl_AW($Class* clazz) {
	return $of($alloc(CurrencyNames_nl_AW));
}

void CurrencyNames_nl_AW::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_AW::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AWG"_s),
		$of("Afl."_s)
	})}));
	return data;
}

CurrencyNames_nl_AW::CurrencyNames_nl_AW() {
}

$Class* CurrencyNames_nl_AW::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nl_AW, name, initialize, &_CurrencyNames_nl_AW_ClassInfo_, allocate$CurrencyNames_nl_AW);
	return class$;
}

$Class* CurrencyNames_nl_AW::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun