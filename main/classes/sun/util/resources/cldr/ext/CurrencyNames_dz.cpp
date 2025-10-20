#include <sun/util/resources/cldr/ext/CurrencyNames_dz.h>

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

$MethodInfo _CurrencyNames_dz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_dz::*)()>(&CurrencyNames_dz::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_dz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_dz",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_dz_MethodInfo_
};

$Object* allocate$CurrencyNames_dz($Class* clazz) {
	return $of($alloc(CurrencyNames_dz));
}

void CurrencyNames_dz::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_dz::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AU$"_s)
		}),
		$$new($ObjectArray, {
			$of("BTN"_s),
			$of("Nu."_s)
		}),
		$$new($ObjectArray, {
			$of("ILS"_s),
			$of("ILS"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of(u"KR\u20a9"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"TH\u0e3f"_s)
		}),
		$$new($ObjectArray, {
			$of("XAF"_s),
			$of("XAF"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f53\u0f71\u0f60\u0f72\u0f0b\u0f4a\u0f7a\u0f4c\u0f0b \u0f68\u0f0b\u0f62\u0f56\u0f0b \u0f68\u0f7a\u0f0b\u0f58\u0f7a\u0f0b\u0f62\u0f7a\u0f4a\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f72\u0f62\u0f0b\u0f67\u0f71\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0f68\u0f55\u0f0b\u0f42\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f68\u0f55\u0f0b\u0f42\u0f0b\u0f53\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u0f56\u0fb7\u0f44\u0f0b\u0f63\u0f0b\u0f51\u0f7a\u0f64\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4f\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0f56\u0f62\u0f0b\u0f58\u0f74\u0f0b\u0f4c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0f56\u0fb2\u0f0b\u0f5b\u0f72\u0f63\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f7a\u0f0b\u0f61\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u0f51\u0f44\u0f74\u0f63\u0f0b\u0f40\u0fb2\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f53\u0f0b\u0f4c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f61\u0f72\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f55\u0fb2\u0f44\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0f45\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f7a\u0f0b\u0f66\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f53\u0f42\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f61\u0f74\u0f0b\u0f5d\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f63\u0f7c\u0f58\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f7a\u0f0b\u0f66\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u0f40\u0f72\u0f60\u0f74\u0f0b\u0f56\u0fb7\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f7a\u0f0b\u0f66\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0f4c\u0f7a\u0f53\u0f0b\u0f58\u0f71\u0f40\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f40\u0fb2\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0f68\u0f71\u0f63\u0f0b\u0f47\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f60\u0f72\u0f0b\u0f53\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f47\u0f72\u0f56\u0f4a\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f0b\u0f60\u0f74\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0c\u0f51\u0f44\u0f74\u0f63\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0f56\u0fb2\u0f72\u0f0b\u0f4a\u0f72\u0f64\u0f0b \u0f54\u0f0b\u0f60\u0f74\u0f53\u0f4c\u0f0b \u0f68\u0f72\u0f66\u0f0b\u0f4a\u0f62\u0f0b\u0f63\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0f67\u0f7c\u0f44\u0f0b\u0f40\u0f7c\u0f44\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f54\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0f68\u0f72\u0f66\u0f0b\u0f62\u0f7a\u0f63\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b\u0f42\u0f66\u0f62\u0f54\u0f0b \u0f64\u0f7a\u0f0b\u0f40\u0f7a\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f42\u0f62\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f54\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f62\u0f71\u0f40\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f62\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f72\u0f0b\u0f68\u0f71\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0f68\u0f71\u0f61\u0f72\u0f66\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f40\u0fb2\u0f7c\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u0f47\u0f71\u0f0b\u0f58\u0f7b\u0f0b\u0f40\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u0f47\u0f7c\u0f62\u0f0b\u0f4c\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u0f47\u0f71\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f61\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0f40\u0f7a\u0f53\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f64\u0f72\u0f0b\u0f63\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0f40\u0f7a\u0f58\u0f0b\u0f56\u0fb7\u0f7c\u0f0b\u0f4c\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f72\u0f0b\u0f68\u0f71\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u0f53\u0f7c\u0f62\u0f50\u0f0b \u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f5d\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0f66\u0f71\u0f60\u0f74\u0f50\u0f0b \u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f5d\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0f40\u0f74\u0f0b\u0f5d\u0f7a\u0f4a\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0f40\u0f0b\u0f5b\u0f42\u0f66\u0f0b\u0f4f\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4f\u0f7a\u0f44\u0f0b\u0f42\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0f63\u0f71\u0f0b\u0f5d\u0f7c\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f40\u0f72\u0f54"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0f63\u0f7a\u0f0b\u0f56\u0f0b\u0f53\u0f7c\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f0b\u0f60\u0f74\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0f64\u0fb2\u0f72\u0f0b \u0f63\u0f44\u0f0b\u0f40\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f54\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0f63\u0f71\u0f60\u0f72\u0f0b\u0f56\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0f63\u0f72\u0f0b\u0f56\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0f58\u0f7c\u0f0b\u0f62\u0f7c\u0f0b\u0f40\u0f7c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f72\u0f62\u0f0b\u0f67\u0f71\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u0f58\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f58\u0f62\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f45\u0f71\u0f4f"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u0f66\u0f7c\u0f42\u0f0b\u0f54\u0f7c\u0f60\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4f\u0f74\u0f0b\u0f42\u0fb2\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u0f58\u0f71\u0f63\u0f0b\u0f51\u0f72\u0f56\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f55\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u0f58\u0f7a\u0f40\u0f0b\u0f66\u0f72\u0f0b\u0f40\u0f7c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f7a\u0f0b\u0f66\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f72\u0f44\u0f0b\u0f42\u0f72\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0f53\u0f7c\u0f62\u0f0b\u0f5d\u0f7a\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f40\u0fb2\u0f7c\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0f56\u0f63\u0f0b\u0f54\u0f7c\u0f60\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f54\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0f68\u0f7c\u0f0b\u0f58\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f72\u0f0b\u0f68\u0f71\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u0f54\u0f0b\u0f53\u0f0b\u0f58\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f56\u0f71\u0f63\u0f0b\u0f56\u0f7c\u0f0b\u0f5d"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u0f54\u0f0b\u0f62\u0f74\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f53\u0f74\u0f0b\u0f56\u0f7c\u0f0b \u0f66\u0f71\u0f7c\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u0f55\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f54\u0f72\u0f53\u0f66\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f7a\u0f0b\u0f66\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u0f54\u0f0b\u0f40\u0f72\u0f66\u0f0b\u0f4f\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f54\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u0f54\u0f7c\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63 \u0f5b\u0f84\u0f63\u0f7c\u0f0b\u0f4a\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0f40\u0f0b\u0f4a\u0f62\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f72\u0f0b\u0f68\u0f71\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0f68\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f66\u0f74\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f56\u0f71\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0f66\u0f71\u0f5d\u0f0b\u0f51\u0f72\u0f60\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f72\u0f0b\u0f61\u0f71\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0f66\u0f7a\u0f0b\u0f64\u0f71\u0f63\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f74\u0f0b\u0f54\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0f66\u0f74\u0f60\u0f72\u0f0b\u0f4c\u0f7a\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f40\u0fb2\u0f7c\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0f66\u0f72\u0f44\u0f0b\u0f42\u0f0b\u0f54\u0f7c\u0f62\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0f66\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f0b\u0f60\u0f74\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0f50\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f56\u0f71\u0f4f"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0f4f\u0f0b\u0f47\u0f72\u0f0b\u0f40\u0f72\u0f66\u0f0b\u0f4f\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f66\u0f7c\u0f0b\u0f58\u0f7c\u0f0b\u0f53\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0f4a\u0f71\u0f62\u0f0b\u0f40\u0f72\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f63\u0f72\u0f0b\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0f4a\u0f71\u0f60\u0f72\u0f0b\u0f5d\u0f71\u0f53\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63 \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0f4a\u0f71\u0f53\u0f0b\u0f5b\u0f71\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f64\u0f72\u0f0b\u0f63\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f42\u0fb7\u0f7a\u0f53\u0f0b\u0f4c\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f64\u0f72\u0f0b\u0f63\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f68\u0f7a\u0f66\u0f0b \u0f4c\u0f7c\u0f0b\u0f63\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f60\u0f72\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f54\u0f7a\u0f0b\u0f66\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u0f68\u0f74\u0f66\u0f0b\u0f56\u0f7a\u0f0b\u0f40\u0f72\u0f66\u0f0b\u0f4f\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f66\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0f56\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f5b\u0f74\u0f0b\u0f5d\u0f7a\u0f0b\u0f63\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f56\u0f7c\u0f0b\u0f63\u0f72\u0f0b\u0f56\u0f62 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0f56\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f5b\u0f74\u0f0b\u0f5d\u0f7a\u0f0b\u0f63\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f56\u0f7c\u0f0b\u0f63\u0f72\u0f0b\u0f56\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0f56\u0f7a\u0f4a\u0f0b\u0f53\u0f71\u0f58\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f4c\u0f7c\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0f58\u0f0b\u0f64\u0f7a\u0f66\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0f66\u0f71\u0f60\u0f74\u0f50\u0f0b \u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b \u0f62\u0f71\u0f53\u0f51"_s)
		})
	}));
	return data;
}

CurrencyNames_dz::CurrencyNames_dz() {
}

$Class* CurrencyNames_dz::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_dz, name, initialize, &_CurrencyNames_dz_ClassInfo_, allocate$CurrencyNames_dz);
	return class$;
}

$Class* CurrencyNames_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun