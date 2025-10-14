#include <sun/util/resources/cldr/ext/CurrencyNames_pt_CV.h>

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

$MethodInfo _CurrencyNames_pt_CV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_pt_CV::*)()>(&CurrencyNames_pt_CV::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_pt_CV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt_CV",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_CV_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_CV($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_CV));
}

void CurrencyNames_pt_CV::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_CV::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CVE"_s),
			$of(u"\u200b"_s)
		}),
		$$new($ObjectArray, {
			$of("PTE"_s),
			$of("PTE"_s)
		})
	}));
	return data;
}

CurrencyNames_pt_CV::CurrencyNames_pt_CV() {
}

$Class* CurrencyNames_pt_CV::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_CV, name, initialize, &_CurrencyNames_pt_CV_ClassInfo_, allocate$CurrencyNames_pt_CV);
	return class$;
}

$Class* CurrencyNames_pt_CV::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun