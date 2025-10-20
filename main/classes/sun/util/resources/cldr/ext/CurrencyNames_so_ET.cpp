#include <sun/util/resources/cldr/ext/CurrencyNames_so_ET.h>

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

$MethodInfo _CurrencyNames_so_ET_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_so_ET::*)()>(&CurrencyNames_so_ET::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_so_ET_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_so_ET",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_so_ET_MethodInfo_
};

$Object* allocate$CurrencyNames_so_ET($Class* clazz) {
	return $of($alloc(CurrencyNames_so_ET));
}

void CurrencyNames_so_ET::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_so_ET::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ETB"_s),
		$of("Br"_s)
	})}));
	return data;
}

CurrencyNames_so_ET::CurrencyNames_so_ET() {
}

$Class* CurrencyNames_so_ET::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_so_ET, name, initialize, &_CurrencyNames_so_ET_ClassInfo_, allocate$CurrencyNames_so_ET);
	return class$;
}

$Class* CurrencyNames_so_ET::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun