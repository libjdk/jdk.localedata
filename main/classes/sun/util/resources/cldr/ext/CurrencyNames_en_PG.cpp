#include <sun/util/resources/cldr/ext/CurrencyNames_en_PG.h>

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

$MethodInfo _CurrencyNames_en_PG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_PG::*)()>(&CurrencyNames_en_PG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_PG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_PG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_PG_MethodInfo_
};

$Object* allocate$CurrencyNames_en_PG($Class* clazz) {
	return $of($alloc(CurrencyNames_en_PG));
}

void CurrencyNames_en_PG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_PG::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PGK"_s),
		$of("K"_s)
	})}));
	return data;
}

CurrencyNames_en_PG::CurrencyNames_en_PG() {
}

$Class* CurrencyNames_en_PG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_PG, name, initialize, &_CurrencyNames_en_PG_ClassInfo_, allocate$CurrencyNames_en_PG);
	return class$;
}

$Class* CurrencyNames_en_PG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun