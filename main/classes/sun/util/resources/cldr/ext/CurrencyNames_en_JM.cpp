#include <sun/util/resources/cldr/ext/CurrencyNames_en_JM.h>

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

$MethodInfo _CurrencyNames_en_JM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_JM::*)()>(&CurrencyNames_en_JM::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_JM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_JM",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_JM_MethodInfo_
};

$Object* allocate$CurrencyNames_en_JM($Class* clazz) {
	return $of($alloc(CurrencyNames_en_JM));
}

void CurrencyNames_en_JM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_JM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("JMD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_JM::CurrencyNames_en_JM() {
}

$Class* CurrencyNames_en_JM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_JM, name, initialize, &_CurrencyNames_en_JM_ClassInfo_, allocate$CurrencyNames_en_JM);
	return class$;
}

$Class* CurrencyNames_en_JM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun