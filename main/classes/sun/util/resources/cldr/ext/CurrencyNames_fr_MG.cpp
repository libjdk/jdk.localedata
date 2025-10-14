#include <sun/util/resources/cldr/ext/CurrencyNames_fr_MG.h>

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

$MethodInfo _CurrencyNames_fr_MG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fr_MG::*)()>(&CurrencyNames_fr_MG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fr_MG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_MG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_MG_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_MG($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_MG));
}

void CurrencyNames_fr_MG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_MG::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MGA"_s),
		$of("Ar"_s)
	})}));
	return data;
}

CurrencyNames_fr_MG::CurrencyNames_fr_MG() {
}

$Class* CurrencyNames_fr_MG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_MG, name, initialize, &_CurrencyNames_fr_MG_ClassInfo_, allocate$CurrencyNames_fr_MG);
	return class$;
}

$Class* CurrencyNames_fr_MG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun