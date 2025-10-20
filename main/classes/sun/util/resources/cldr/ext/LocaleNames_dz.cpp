#include <sun/util/resources/cldr/ext/LocaleNames_dz.h>

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

$MethodInfo _LocaleNames_dz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_dz::*)()>(&LocaleNames_dz::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_dz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_dz",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_dz_MethodInfo_
};

$Object* allocate$LocaleNames_dz($Class* clazz) {
	return $of($alloc(LocaleNames_dz));
}

void LocaleNames_dz::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_dz::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0f60\u0f5b\u0f58\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0c"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u0f63\u0fb7\u0f7c\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u0f68\u0f7c\u0f64\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u0f56\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u0f56\u0fb1\u0f44\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u0f66\u0fa6\u0f74\u0f42\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u0f63\u0fb7\u0f7c\u0f60\u0f72\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f5a\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0f56\u0fb1\u0f44\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f56\u0f72\u0f0b\u0f61\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u0f63\u0fb7\u0f7c\u0f60\u0f72\u0f0b\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u0f63\u0fb7\u0f7c\u0f0b\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u0f63\u0fb7\u0f7c\u0f60\u0f72\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f56"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u0f58\u0f7a\u0f0b\u0f63\u0f0b\u0f53\u0f72\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u0f63\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f58\u0f60\u0f72\u0f0b\u0f40\u0fb2\u0f7c\u0f0b\u0f53\u0f72\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u0f54\u0f7c\u0f0b\u0f63\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u0f66\u0fa6\u0f74\u0f42\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f56"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f56"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u0f56\u0fb1\u0f44\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f56"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f56"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u0f63\u0f7a\u0f0b\u0f4a\u0f72\u0f53\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f66\u0f7a\u0f53\u0f0b\u0f64\u0f74\u0f53\u0f0b\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0c"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0f68\u0f71\u0f53\u0f0b\u0f51\u0f7c\u0f0b\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f53\u0f71\u0f60\u0f72\u0f0b\u0f4a\u0f7a\u0f4c\u0f0b \u0f68\u0f0b\u0f62\u0f56\u0f0b \u0f68\u0f7a\u0f0b\u0f58\u0f7a\u0f0b\u0f62\u0f7a\u0f4a\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0f68\u0f55\u0f0b\u0f42\u0fb7\u0f0b\u0f53\u0f72\u0f0b\u0f66\u0f4f\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0f68\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f56\u0fb7\u0f62\u0f0b\u0f56\u0fb7\u0f74\u0f0b\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0f68\u0f44\u0f0b\u0f42\u0f72\u0f0b\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0f68\u0f71\u0f63\u0f0b\u0f56\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0f68\u0f44\u0f0b\u0f42\u0fb7\u0f7c\u0f0b\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0f60\u0f5b\u0f58\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f63\u0fb7\u0f7c\u0f0b\u0f58\u0f50\u0f60\u0f72\u0f0b\u0f41\u0fb1\u0f42\u0f66\u0f0b\u0f42\u0fb3\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0f68\u0f62\u0f0b\u0f47\u0f7a\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u0f66\u0f0b\u0f58\u0f7c\u0f0b\u0f68\u0f0b\u0f61\u0f74\u0f0b\u0f68\u0f7a\u0f66\u0f0b\u0f68\u0f7a\u0f0b\u0f58\u0f44\u0f60\u0f0b\u0f41\u0f7c\u0f44\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0f68\u0f0b\u0f62\u0f74\u0f0b\u0f56\u0f71"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u0f68\u0f0b\u0f63\u0f53\u0f4c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0f68\u0f0b\u0f5b\u0f62\u0f0b\u0f56\u0fb7\u0f60\u0f72\u0f0b\u0f47\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0f56\u0fb7\u0f7c\u0f66\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f67\u0f62\u0f0b\u0f5b\u0f72\u0f0b\u0f42\u0fb7\u0f7c\u0f0b\u0f56\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u0f56\u0fb7\u0f62\u0f0b\u0f56\u0f7a\u0f0b\u0f4c\u0f7c\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u0f56\u0f44\u0f92\u0f0b\u0f63\u0f0b\u0f51\u0f7a\u0f64"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0f56\u0fb7\u0f7a\u0f63\u0f0b\u0f47\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u0f56\u0fb7\u0f62\u0f0b\u0f40\u0f72\u0f0b\u0f53\u0f0b \u0f55\u0f7a\u0f0b\u0f66\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0f56\u0f74\u0f63\u0f0b\u0f42\u0f0b\u0f62\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0f56\u0fb7\u0f0b\u0f62\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u0f56\u0fb7\u0f74\u0f0b\u0f62\u0f74\u0f53\u0f0b\u0f4c\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u0f56\u0fb7\u0f7a\u0f0b\u0f53\u0f72\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u0f66\u0f7a\u0f53\u0f4a\u0f0b \u0f56\u0f62\u0f0b\u0f50\u0f7c\u0f0b\u0f63\u0f7c\u0f58\u0f0b\u0f58\u0f72\u0f60\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0f56\u0f62\u0f0b\u0f58\u0f74\u0f0b\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0f56\u0fb7\u0fb2\u0f74\u0f0b\u0f53\u0f60\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0f56\u0fb7\u0f7a\u0f0b\u0f63\u0f72\u0f0b\u0f56\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f56\u0f72\u0f0b\u0f61\u0f7a\u0f53\u0f0b\u0f53\u0f7a\u0f0b\u0f51\u0f62\u0f0b\u0f63\u0f53\u0f4c\u0f66\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0f56\u0fb2\u0f0b\u0f5b\u0f72\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0f56\u0fb7\u0f0b\u0f67\u0f0b\u0f58\u0f66\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u0f60\u0f56\u0fb2\u0f74\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u0f56\u0f7c\u0f60\u0f74\u0f0b\u0f5d\u0f7a\u0f4a\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0f56\u0fb7\u0f7c\u0f59\u0f0b\u0f5d\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0f56\u0f7a\u0f63\u0f0b\u0f68\u0f0b\u0f62\u0f74\u0f0b\u0f66\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0f56\u0fb7\u0f7a\u0f0b\u0f63\u0f72\u0f5b"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f53\u0f0b\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f40\u0f7c\u0f66\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u0f40\u0f7c\u0f44\u0f0b\u0f42\u0fb7\u0f7c \u0f40\u0f72\u0f53\u0f0b\u0f64\u0f0b\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0f66\u0f7a\u0f53\u0f0b\u0f4a\u0f63\u0f0b \u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f53\u0f0b \u0f62\u0f72\u0f0b\u0f54\u0f56\u0f0b\u0f63\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u0f40\u0f7c\u0f44\u0f0b\u0f42\u0fb7\u0f7c \u0f56\u0fb7\u0fb2\u0f0b\u0f5b\u0f0b\u0f56\u0f72\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f5d\u0f72\u0f4a\u0f0b\u0f5b\u0f62\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f4a\u0f7a\u0f0b \u0f4c\u0f72\u0f0b\u0f68\u0f72\u0f0b\u0f5d\u0f7c\u0f0b\u0f62\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u0f40\u0f74\u0f42\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0f45\u0f72\u0f0b\u0f63\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f58\u0f0b\u0f62\u0f74\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f53\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f63\u0f7c\u0f58\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u0f40\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f54\u0f7a\u0f62\u0f0b\u0f4a\u0f7c\u0f53\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u0f40\u0f7c\u0f66\u0f0b\u0f4a\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u0f40\u0f72\u0f60\u0f74\u0f0b\u0f56\u0fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u0f40\u0f7a\u0f54\u0f0b\u0f56\u0f71\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u0f40\u0fb1\u0f71\u0f74\u0f62\u0f0b\u0f62\u0f0b\u0f40\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0f41\u0f72\u0f0b\u0f62\u0f72\u0f66\u0f9f\u0f0b\u0f58\u0f7a\u0f66\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u0f66\u0f71\u0f60\u0f72\u0f0b\u0f54\u0fb2\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0f45\u0f7a\u0f40\u0f0b \u0f62\u0f72\u0f0b\u0f54\u0f56\u0f0b\u0f63\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0f47\u0f71\u0f62\u0f0b\u0f58\u0f0b\u0f53\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u0f4c\u0f72\u0f0b\u0f61\u0f7a\u0f0b\u0f42\u0f7c\u0f0b\u0f42\u0f62\u0f0b\u0f66\u0f72\u0f60\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u0f47\u0f72\u0f0b\u0f56\u0fb7\u0f74\u0f0b\u0f4a\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0f4c\u0f7a\u0f53\u0f0b\u0f58\u0f71\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u0f4c\u0f7c\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0f4c\u0f7c\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f40\u0f71\u0f53\u0f0b \u0f62\u0f72\u0f0b\u0f54\u0f56\u0f0b\u0f63\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0f68\u0f71\u0f63\u0f0b\u0f47\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0f66\u0f7a\u0f0b\u0f68\u0f74\u0f0b\u0f4f\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f58\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f41\u0fad\u0f0b\u0f4c\u0f7c\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0f68\u0f7a\u0f66\u0f0b\u0f4a\u0f7c\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f47\u0f72\u0f56\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b \u0f66\u0f0b\u0f67\u0f71\u0f0b\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f4a\u0fb2\u0f7a\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0f68\u0f72\u0f66\u0f0b\u0f54\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f50\u0f72\u0f0b\u0f61\u0f7c\u0f0b\u0f54\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f56\u0f0b\u0f42\u0f45\u0f72\u0f42\u0f0b\u0f56\u0f66\u0fa1\u0f7c\u0f58\u0f66\u0f0b\u0f5a\u0f7c\u0f42\u0f66\u0f0b\u0f54"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0f55\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u0f55\u0f72\u0f0b\u0f47\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u0f55\u0f63\u0f90\u0f0b\u0f63\u0f53\u0f9c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u0f58\u0f60\u0f72\u0f0b\u0f40\u0fb2\u0f7c\u0f0b\u0f53\u0f72\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u0f55\u0f71\u0f60\u0f7a\u0f0b\u0f62\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0f55\u0fb2\u0f71\u0f53\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0f42\u0fb7\u0f0b\u0f56\u0fb7\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f53\u0f71\u0f60\u0f72\u0f0b\u0f4a\u0f7a\u0f4c\u0f0b \u0f40\u0f72\u0f44\u0f0b\u0f4c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u0f42\u0fb2\u0f80\u0f0b\u0f53\u0f0b\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0f47\u0f7d\u0f62\u0f0b\u0f47\u0f71"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0f42\u0f74\u0f60\u0f72\u0f0b\u0f61\u0f0b\u0f53\u0f0b \u0f55\u0fb2\u0f53\u0f66\u0f84\u0f0b\u0f58\u0f44\u0f60\u0f0b\u0f41\u0f7c\u0f44\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f68\u0f7a\u0f62\u0fa3\u0f0b\u0f66\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0f42\u0fb7\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u0f47\u0f72\u0f56\u0f0b\u0f62\u0f71\u0f63\u0f0b\u0f4a\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u0f42\u0f72\u0f62\u0f71\u0f72\u0f53\u0f0b\u0f63\u0f53\u0f4c\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0f42\u0fb7\u0f7a\u0f58\u0f0b\u0f56\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0f42\u0fb7\u0f72\u0f0b\u0f53\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0f42\u0f7c\u0f0b\u0f4c\u0f7a\u0f0b\u0f63\u0f74\u0f0b\u0f54\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f40\u0f74\u0f0b\u0f4a\u0f7c\u0f0b\u0f62\u0f7a\u0f63\u0f0b \u0f42\u0f72\u0f0b\u0f53\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0f42\u0f72\u0f62\u0f72\u0f66\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u0f66\u0f71\u0f60\u0f74\u0f50\u0f0b\u0f47\u0f7d\u0f62\u0f0b\u0f47\u0f71\u0f0b \u0f51\u0f44\u0f0b \u0f66\u0f71\u0f60\u0f74\u0f50\u0f0b\u0f66\u0f7a\u0f53\u0f4c\u0f84\u0f0b\u0f5d\u0f72\u0f45\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0f42\u0fb7\u0f7c\u0f0b\u0f4a\u0f0b\u0f58\u0f0b\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f60\u0f58\u0f0b \u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0f42\u0fb7\u0f72\u0f0b\u0f53\u0f72\u0f0b \u0f56\u0fb7\u0f72\u0f0b\u0f66\u0f71\u0f60\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0f42\u0fb7\u0f0b\u0f61\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0f67\u0f7c\u0f44\u0f0b\u0f40\u0f7c\u0f44\u0f0b\u0f45\u0f71\u0f60\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u0f67\u0f71\u0f62\u0f4c\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b \u0f51\u0f44\u0f0b \u0f58\u0f7a\u0f40\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f63\u0f4c\u0f84\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0f67\u0f71\u0f53\u0f0b\u0f4c\u0f74\u0f0b\u0f62\u0f71\u0f66\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0f40\u0fb2\u0f7c\u0f0b\u0f68\u0f7a\u0f0b\u0f64"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0f67\u0f7a\u0f0b\u0f4a\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u0f67\u0f71\u0f44\u0f0b\u0f42\u0fb7\u0f0b\u0f62\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u0f40\u0f0b\u0f53\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0f68\u0f71\u0f0b\u0f61\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0f68\u0f72\u0f66\u0f0b\u0f62\u0f0b\u0f61\u0f7a\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u0f68\u0f0b\u0f61\u0f74\u0f63\u0f0b \u0f68\u0f7c\u0f55\u0f0b \u0f58\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f42\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u0f56\u0fb2\u0f72\u0f0b\u0f4a\u0f72\u0f64\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f42\u0f62\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f66\u0f0b\u0f41\u0f7c\u0f44\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f62\u0f71\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f62\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0f68\u0f71\u0f60\u0f72\u0f66\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f4a\u0f0b\u0f63\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u0f47\u0f7a\u0f62\u0f0b\u0f66\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u0f47\u0f71\u0f0b\u0f58\u0f7b\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0f47\u0f7c\u0f62\u0f0b\u0f4c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u0f47\u0f0b\u0f54\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u0f40\u0f7a\u0f53\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u0f40\u0f72\u0f62\u0f0b\u0f42\u0f72\u0f66\u0f0b\u0f66\u0f4f\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u0f40\u0f58\u0f0b\u0f56\u0fb7\u0f7c\u0f0b\u0f4c\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u0f40\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f56\u0f0b\u0f4f\u0f72\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f58\u0f7c\u0f0b\u0f62\u0f7c\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0f66\u0f7a\u0f53\u0f4a\u0f0b \u0f40\u0f72\u0f4a\u0f66\u0f0b \u0f51\u0f44\u0f0b \u0f53\u0f7a\u0f0b\u0f56\u0f72\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0f56\u0fb1\u0f44\u0f0b \u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u0f63\u0fb7\u0f7c\u0f0b \u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u0f40\u0f74\u0f0b\u0f5d\u0f7a\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u0f41\u0f7a\u0f0b\u0f58\u0f7a\u0f53\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u0f40\u0f0b\u0f5b\u0f42\u0f66\u0f0b\u0f66\u0f4f\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u0f63\u0f71\u0f0b\u0f5d\u0f7c\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u0f63\u0f7a\u0f0b\u0f56\u0f0b\u0f53\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u0f66\u0f7a\u0f53\u0f4a\u0f0b \u0f63\u0f74\u0f0b\u0f66\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u0f63\u0f72\u0f40\u0f0b\u0f4f\u0f53\u0f66\u0f0b\u0f4f\u0f0b\u0f61\u0f72\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0f64\u0fb2\u0f71\u0f72\u0f0b\u0f63\u0f44\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u0f63\u0f71\u0f60\u0f72\u0f0b\u0f56\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u0f63\u0f7b\u0f0b\u0f66\u0f7c\u0f0b\u0f50\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u0f63\u0f72\u0f0b\u0f50\u0f74\u0f0b\u0f5d\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u0f63\u0f42\u0f0b\u0f5b\u0f58\u0f0b\u0f56\u0f7c\u0f62\u0f92"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u0f63\u0f4a\u0f0b\u0f56\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u0f63\u0f72\u0f0b\u0f56\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u0f58\u0f7c\u0f0b\u0f62\u0f7c\u0f0b\u0f40\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u0f58\u0f7c\u0f0b\u0f53\u0f0b\u0f40\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u0f58\u0f7c\u0f63\u0f0b\u0f51\u0f7c\u0f0b\u0f56\u0f71"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u0f58\u0f7c\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f53\u0f7a\u0f42\u0f0b\u0f62\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u0f66\u0f7a\u0f53\u0f4a\u0f0b \u0f58\u0f71\u0f62\u0f0b\u0f4a\u0f72\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u0f58\u0f0b\u0f51\u0f71\u0f0b\u0f42\u0f7a\u0f66\u0f0b\u0f40\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u0f58\u0f62\u0f0b\u0f64\u0f7a\u0f63\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u0f58\u0f71\u0f0b\u0f63\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u0f58\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f58\u0f62\u0f0b (\u0f56\u0fb7\u0f62\u0f0b\u0f58)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u0f66\u0f7c\u0f42\u0f0b\u0f54\u0f7c\u0f0b\u0f61\u0f74\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u0f58\u0f40\u0f0b\u0f68\u0f60\u0f74\u0f0b\u0f45\u0f71\u0f60\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u0f56\u0fb1\u0f44\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f58\u0f0b\u0f62\u0f0b\u0f61\u0f0b\u0f53\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u0f58\u0f71\u0f62\u0f0b\u0f4a\u0f72\u0f0b\u0f53\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u0f58\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f4a\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u0f58\u0f7c\u0f53\u0f0b\u0f66\u0f0b\u0f62\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u0f58\u0f71\u0f63\u0f0b\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u0f58\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f64\u0f71\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u0f58\u0f71\u0f63\u0f0b\u0f51\u0f72\u0f56\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f0b\u0f5d\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u0f58\u0f7a\u0f40\u0f0b\u0f66\u0f72\u0f0b\u0f40\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u0f58\u0f7c\u0f0b\u0f5b\u0f58\u0f0b\u0f56\u0fb7\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u0f53\u0f0b\u0f58\u0f72\u0f0b\u0f56\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f40\u0f0b\u0f63\u0f72\u0f0b\u0f51\u0f7c\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u0f53\u0f71\u0f60\u0f72\u0f0b\u0f47\u0f71"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u0f53\u0f7c\u0f62\u0f0b\u0f55\u0f7c\u0f63\u0f40\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0c"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u0f53\u0f71\u0f60\u0f72\u0f0b\u0f47\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u0f53\u0f72\u0f0b\u0f40\u0fb2\u0f0b\u0f5d\u0f0b\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u0f53\u0f7a\u0f0b\u0f51\u0f62\u0f0b\u0f63\u0f53\u0f4c\u0f66\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u0f53\u0f7c\u0f62\u0f0b\u0f5d\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u0f56\u0f63\u0f0b\u0f61\u0f74\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u0f53\u0f60\u0f74\u0f0b\u0f62\u0f74\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u0f53\u0f72\u0f0b\u0f68\u0f74\u0f0b\u0f68\u0f7b"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0f68\u0f7c\u0f0b\u0f58\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u0f54\u0f0b\u0f53\u0f0b\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u0f54\u0f7a\u0f0b\u0f62\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u0f55\u0fb2\u0f71\u0f53\u0f66\u0f84\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f54\u0f7c\u0f0b\u0f63\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u0f54\u0f0b\u0f54\u0f74\u0f0b \u0f53\u0f72\u0f60\u0f74\u0f0b\u0f42\u0f72\u0f0b\u0f53\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u0f55\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f54\u0f72\u0f53\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u0f54\u0f0b\u0f40\u0f72\u0f0b\u0f66\u0f4f\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u0f54\u0f7c\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u0f66\u0f72\u0f53\u0f4a\u0f0b\u0f54\u0f72\u0f0b\u0f61\u0f7a\u0f62\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f58\u0f72\u0f40\u0f7c\u0f0b\u0f63\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u0f54\u0f72\u0f4a\u0f0b\u0f40\u0f7a\u0f0b\u0f61\u0f7a\u0f62\u0f53\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u0f54\u0f74\u0f0b\u0f60\u0f7a\u0f62\u0f0b\u0f4a\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f41\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u0f54\u0f7a\u0f0b\u0f63\u0f72\u0f66\u0f72\u0f0b\u0f4a\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f53\u0f0b\u0f4a\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f50\u0f7c\u0f0b\u0f62\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u0f54\u0f7c\u0f62\u0f0b\u0f45\u0f74\u0f0b\u0f42\u0f71\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u0f54\u0f0b\u0f63\u0f60\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u0f54\u0f0b\u0f62\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f60\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u0f40\u0f0b\u0f4a\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u0f68\u0f7c\u0f64\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f58\u0f50\u0f60\u0f0b\u0f58\u0f5a\u0f58\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0f62\u0f7a\u0f0b\u0f61\u0f74\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0f62\u0f7c\u0f0b\u0f58\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u0f66\u0f71\u0f62\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0f68\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f66\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u0f62\u0f74\u0f0b\u0f5d\u0f53\u0f0b\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0f66\u0f71\u0f5d\u0f0b\u0f51\u0f72\u0f0b \u0f68\u0f0b\u0f62\u0f7a\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0f66\u0f7c\u0f0b\u0f63\u0f7c\u0f0b\u0f58\u0f7c\u0f53\u0f0b \u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u0f66\u0f7a\u0f0b\u0f64\u0f71\u0f63\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f4c\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0f66\u0f74\u0f60\u0f72\u0f0b\u0f4c\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0f66\u0f72\u0f44\u0f0b\u0f42\u0f0b\u0f54\u0f7c\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0f66\u0f7a\u0f53\u0f4a\u0f0b \u0f67\u0f7a\u0f0b\u0f63\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f63\u0f7c\u0f0b\u0f56\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0f66\u0fad\u0f71\u0f63\u0f0b\u0f56\u0fb7\u0f62\u0fa1\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f47\u0f71\u0f53\u0f0b\u0f58\u0f0b\u0f61\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f63\u0f7c\u0f0b\u0f56\u0f71\u0f0b\u0f40\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0f66\u0f72\u0f0b\u0f62\u0f0b \u0f63\u0f72\u0f0b\u0f60\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u0f66\u0f71\u0f53\u0f0b\u0f58\u0f0b\u0f62\u0f72\u0f0b\u0f53\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0f66\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f42\u0fb7\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0f66\u0f7c\u0f0b\u0f58\u0f0b\u0f63\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f62\u0f72\u0f0b\u0f53\u0f71\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u0f66\u0f71\u0f60\u0f74\u0f50\u0f0b \u0f66\u0f74\u0f0b\u0f4c\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u0f66\u0f5d\u0f0b \u0f4a\u0f7c\u0f0b\u0f58\u0f7a\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f54\u0fb2\u0f80\u0f53\u0f0b\u0f66\u0f72\u0f0b\u0f54\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0f68\u0f7a\u0f63\u0f0b\u0f66\u0f63\u0f0b\u0f56\u0f0b\u0f4c\u0f7c\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u0f66\u0f72\u0f53\u0f4a\u0f0b \u0f58\u0f71\u0f62\u0f0b\u0f4a\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0f66\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f5d\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u0f4f\u0fb2\u0f72\u0f66\u0f0b\u0f4f\u0f53\u0f0b\u0f51\u0f0b\u0f40\u0f74\u0f53\u0f0b\u0f67"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u0f4f\u0f74\u0f62\u0f90\u0f66\u0f84\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f40\u0f0b\u0f40\u0f7c\u0f66\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u0f45\u0f71\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0f55\u0fb2\u0f53\u0f45\u0f0b\u0f42\u0f72\u0f0b\u0f63\u0fb7\u0f7c\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f58\u0f44\u0f60\u0f0b\u0f41\u0f7c\u0f44\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u0f4a\u0f7c\u0f0b\u0f42\u0fb7\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u0f50\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u0f4f\u0f0b\u0f47\u0f72\u0f42\u0f0b\u0f42\u0f72\u0f0b\u0f66\u0f4f\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u0f4f\u0f7c\u0f0b\u0f40\u0f7a\u0f0b\u0f63\u0f60\u0f74\u0f0b \u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u0f4f\u0f72\u0f0b\u0f0b\u0f58\u0f7c\u0f62\u0f0b\u0f63\u0f7a\u0f0b\u0f68\u0f7a\u0f66\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u0f4a\u0f71\u0f62\u0f40\u0f0b\u0f58\u0f7a\u0f53\u0f60\u0f72\u0f0b\u0f66\u0f4f\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u0f4a\u0f74\u0f0b\u0f53\u0f72\u0f0b\u0f64\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u0f4a\u0f7c\u0f44\u0f0b\u0f42\u0fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u0f4a\u0f71\u0f62\u0f0b\u0f40\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u0f4a\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f4c\u0f71\u0f4c\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f4a\u0f7c\u0f0b\u0f56\u0fb7\u0f7a\u0f0b\u0f42\u0fb7\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u0f4f\u0f74\u0f0b\u0f5d\u0f0b\u0f63\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u0f4a\u0f71\u0f60\u0f72\u0f0b\u0f5d\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u0f4a\u0f71\u0f53\u0f0b\u0f5b\u0f71\u0f0b\u0f53\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f40\u0f62\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f42\u0fb7\u0f53\u0f0b\u0f4c"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f68\u0f7a\u0f66\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f58\u0f50\u0f60\u0f0b\u0f58\u0f5a\u0f58\u0f66\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f68\u0f7a\u0f66\u0f0b\u0f68\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f60\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0f68\u0f74\u0f66\u0f0b\u0f56\u0f7a\u0f42\u0f0b\u0f42\u0f72\u0f0b\u0f66\u0f4f\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u0f56\u0f0b\u0f4a\u0f72\u0f0b\u0f40\u0f71\u0f53\u0f0b \u0f66\u0f72\u0f0b\u0f4a\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0f66\u0f7a\u0f53\u0f4a\u0f0b\u0f5d\u0f72\u0f53\u0f0b\u0f66\u0f7a\u0f53\u0f4c\u0f84 \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f42\u0f72\u0f0b\u0f62\u0f7a\u0f0b\u0f53\u0f0b\u0f51\u0f72\u0f53\u0f66\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0f56\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f5b\u0f74\u0f0b\u0f5d\u0f7a\u0f0b\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0f5d\u0f62\u0f47\u0f72\u0f53\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58\u0f0b \u0f56\u0fb2\u0f71\u0f72\u0f0b\u0f4a\u0f72\u0f64\u0f0b\u0f58\u0f44\u0f60\u0f0b\u0f41\u0f7c\u0f44\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0f5d\u0f62\u0f47\u0f72\u0f53\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f5a\u0f7c\u0f58\u0f0b \u0f61\u0f74\u0f0b\u0f68\u0f7a\u0f66\u0f0b\u0f68\u0f7a\u0f0b\u0f58\u0f44\u0f60\u0f0b\u0f41\u0f7c\u0f44\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u0f56\u0f7a\u0f4a\u0f0b\u0f53\u0f71\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u0f5d\u0f0b\u0f53\u0f74\u0f0b\u0f68\u0f0b\u0f4f\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u0f5d\u0f63\u0f0b\u0f63\u0f72\u0f66\u0f84\u0f0b \u0f68\u0f7a\u0f53\u0f4c\u0f0b \u0f55\u0f74\u0f0b\u0f4f\u0f74\u0f0b\u0f53\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u0f66\u0f0b\u0f58\u0f7c\u0f0b\u0f68"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0f61\u0f7a\u0f0b\u0f58\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u0f58\u0f7a\u0f0b\u0f61\u0f7c\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u0f66\u0f71\u0f60\u0f74\u0f50\u0f0b \u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0f5b\u0f58\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0f5b\u0f72\u0f58\u0f0b\u0f56\u0fb7\u0f56\u0f0b\u0f5d\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u0f44\u0f7c\u0f0b\u0f58\u0f0b\u0f64\u0f7a\u0f66\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f63\u0f74\u0f44\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0f68\u0f0b\u0f55\u0f62\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0f68\u0f71\u0f56\u0f0b\u0f41\u0f0b\u0f5f\u0f72\u0f0b\u0f61\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f53\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0f68\u0f58\u0f0b\u0f67\u0f0b\u0f62\u0f72\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f62\u0f0b\u0f56\u0f72\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0f68\u0f0b\u0f66\u0f0b\u0f58\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0f68\u0f0b\u0f5b\u0f62\u0f0b\u0f56\u0fb7\u0f60\u0f72\u0f0b\u0f47\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0f56\u0f7a\u0f63\u0f0b\u0f68\u0f0b\u0f62\u0f74\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0f56\u0f71\u0f63\u0f0b\u0f42\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0f56\u0f44\u0f92\u0f0b\u0f63\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0f56\u0f7c\u0f51\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0f56\u0fb7\u0f7c\u0f66\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f4a\u0f0b\u0f63\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0f45\u0f7a\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u0f5d\u0f7a\u0f63\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0f4c\u0f7a\u0f0b\u0f53\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u0f47\u0f71\u0f62\u0f0b\u0f58\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u0f51\u0f72\u0f0b\u0f56\u0f7a\u0f0b\u0f67\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0f62\u0fab\u0f7c\u0f44\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0f42\u0fb2\u0f72\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0f68\u0f72\u0f44\u0f0b\u0f63\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0f68\u0f7a\u0f66\u0f0b\u0f54\u0f0b\u0f62\u0f71\u0f53\u0f0b\u0f4f\u0f7c\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0f68\u0f72\u0f66\u0f0b\u0f54\u0f7a\u0f0b\u0f53\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0f68\u0f7a\u0f66\u0f0b\u0f4a\u0f7c\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0f56\u0f71\u0f66\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u0f54\u0f62\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0f55\u0f72\u0f0b\u0f53\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0f55\u0f72\u0f0b\u0f47\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0f55\u0f71\u0f0b\u0f62\u0f7c\u0f0b\u0f68\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0f55\u0fb2\u0f53\u0f45\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fbc\u0f72\u0f0b\u0f66\u0f72\u0f0b\u0f61\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0f68\u0f71\u0f60\u0f72\u0f0b\u0f62\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u0f42\u0f63\u0f0b\u0f68\u0f72\u0f66\u0f0b\u0f68\u0f72\u0f0b\u0f61\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f5d\u0f0b\u0f62\u0f0b\u0f53\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f47\u0f0b\u0f62\u0f0b\u0f4f\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u0f67\u0f5d\u0f0b\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0f67\u0f7a\u0f0b\u0f56\u0fb2\u0f74\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0f67\u0f72\u0f53\u0f0b\u0f51\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0f40\u0fb2\u0f7c\u0f0b\u0f68\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u0f67\u0f7a\u0f0b\u0f4f\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0f67\u0f71\u0f44\u0f0b\u0f42\u0fb7\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u0f68\u0f72\u0f42\u0f0b\u0f56\u0f7c\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0f68\u0f0b\u0f61\u0f72\u0f66\u0f0b\u0f63\u0f7a\u0f53\u0f0b\u0f4c\u0f72\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f4a\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u0f47\u0f71\u0f0b\u0f54\u0f71\u0f0b\u0f53\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u0f47\u0f71\u0f0b\u0f56\u0f0b\u0f53\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0f47\u0f7d\u0f0b\u0f47\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u0f40\u0f0b\u0f5b\u0f42\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u0f41\u0f7a\u0f0b\u0f58\u0f7a\u0f62\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u0f40\u0f0b\u0f53\u0f0b\u0f4c\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u0f40\u0f71\u0f64\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u0f40\u0f62\u0f0b\u0f4c\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u0f40\u0f72\u0f62\u0f0b\u0f42\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u0f63\u0f7a\u0f0b\u0f4a\u0f72\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u0f63\u0f42\u0f0b\u0f5b\u0f58\u0f0b\u0f56\u0f7c\u0f62\u0f92\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u0f63\u0f71\u0f0b\u0f5d\u0f7c\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u0f63\u0f72\u0f0b\u0f50\u0f74\u0f0b\u0f5d\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u0f63\u0f4a\u0f0b\u0f56\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f0b\u0f42\u0f0b\u0f66\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u0f58\u0f0b\u0f68\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u0f58\u0f0b\u0f66\u0f7a\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f0b\u0f61\u0f0b\u0f63\u0f58\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u0f58\u0f0b\u0f62\u0f0b\u0f50\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f7a\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u0f58\u0f71\u0f63\u0f0b\u0f4a\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0f56\u0f62\u0f0b\u0f58\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u0f53\u0f7c\u0f62\u0f0b\u0f5d\u0f7a\u0f0b\u0f47\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f56\u0f7c\u0f40\u0f0b\u0f58\u0f71\u0f63\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u0f53\u0f7a\u0f0b\u0f54\u0f71\u0f63\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u0f4c\u0f46\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u0f53\u0f7c\u0f62\u0f0b\u0f5d\u0f7a\u0f0b\u0f47\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f53\u0f7c\u0f62\u0f66\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u0f53\u0f7c\u0f62\u0f0b\u0f5d\u0f72\u0f0b\u0f47\u0f72\u0f0b\u0f61\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u0f68\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u0f54\u0f71\u0f53\u0f0b\u0f47\u0f0b\u0f56\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u0f54\u0f7c\u0f0b\u0f63\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u0f54\u0f71\u0f64\u0f0b\u0f4f\u0f7c\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u0f54\u0f7c\u0f62\u0f0b\u0f45\u0f74\u0f0b\u0f42\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u0f40\u0fad\u0f7a\u0f0b\u0f46\u0f74\u0f0b\u0f68\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0f62\u0f7c\u0f0b\u0f58\u0f7a\u0f0b\u0f53\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0f62\u0f7c\u0f0b\u0f58\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0f68\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f66\u0f74\u0f60\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0f66\u0f7e\u0f66\u0f90\u0fb2\u0f80\u0f4f\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0f66\u0f72\u0f53\u0f0b\u0f51\u0f71\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0f66\u0f72\u0f44\u0f0b\u0f67\u0f0b\u0f63\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f63\u0f7c\u0f0b\u0f56\u0f71\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f63\u0f7c\u0f0b\u0f56\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0f66\u0f7c\u0f0b\u0f58\u0f0b\u0f63\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0f68\u0f71\u0f63\u0f0b\u0f56\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0f66\u0f71\u0f62\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u0f66\u0f71\u0f74\u0f53\u0f0b\u0f51\u0f0b\u0f53\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0f66\u0f74\u0f60\u0f72\u0f0b\u0f4c\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0f66\u0fad\u0f71\u0f0b\u0f67\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u0f4f\u0f0b\u0f58\u0f72\u0f63\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u0f4f\u0f7a\u0f0b\u0f63\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u0f4f\u0f0b\u0f47\u0f72\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u0f50\u0f71\u0f60\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u0f4f\u0f72\u0f42\u0f0b\u0f62\u0f72\u0f0b\u0f49\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u0f4a\u0f71\u0f62\u0f40\u0f0b\u0f58\u0f7a\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u0f4a\u0f7c\u0f44\u0f0b\u0f42\u0fb7\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u0f4a\u0f71\u0f62\u0f0b\u0f40\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u0f4a\u0f0b\u0f4a\u0f62\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0f5d\u0f72\u0f0b\u0f42\u0f74\u0f62\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f40\u0f7a\u0f0b\u0f62\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0f68\u0f74\u0f62\u0f0b\u0f51\u0f74\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0f68\u0f74\u0f66\u0f0b\u0f56\u0f7a\u0f40\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0f56\u0f7a\u0f4a\u0f0b\u0f53\u0f71\u0f0b\u0f58\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u0f5d\u0f7c\u0f0b\u0f63\u0f7c\u0f55\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u0f5e\u0f7c\u0f0b\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u0f61\u0f7c\u0f0b\u0f62\u0f74\u0f0b\u0f56\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0f5f\u0f74\u0f0b\u0f63\u0f74\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u0f51\u0f0b\u0f40\u0f7c\u0f0b\u0f4f\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u0f55\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f54\u0f72\u0f0b\u0f53\u0f7c\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f61\u0f72\u0f66\u0f0b\u0f47\u0f71\u0f62\u0f0b\u0f58\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u0f67\u0f0b\u0f5d\u0f0b\u0f61\u0f72\u0f60\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u0f40\u0f0b\u0f46\u0f72\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f62\u0f7c\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u0f58\u0f53\u0f0b\u0f47\u0f74\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0f64\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u0f41\u0f0b\u0f44\u0f7c\u0f0b\u0f58\u0f0b\u0f64\u0f7a\u0f66\u0f54"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u0f66\u0f90\u0f51\u0f0b\u0f62\u0f72\u0f42\u0f0b\u0f53\u0f44\u0f0b\u0f51\u0f7c\u0f53\u0f0b\u0f58\u0f7a\u0f51\u0f54"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f62\u0f0b\u0f56\u0f72\u0f40\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u0f56\u0f44\u0f92\u0f0b\u0f63\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u0f56\u0f7c\u0f0b\u0f54\u0f7c\u0f0b\u0f58\u0f7c\u0f0b\u0f55\u0f71\u0f7c\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u0f60\u0f56\u0f74\u0f62\u0f0b\u0f61\u0f72\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u0f66\u0f72\u0f62\u0f72\u0f63\u0f0b\u0f63\u0f72\u0f40\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u0f51\u0f7a\u0f0b\u0f5d\u0f0b\u0f53\u0f0b\u0f42\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f50\u0f72\u0f0b\u0f61\u0f7c\u0f0b\u0f54\u0f72\u0f40\u0f84\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u0f47\u0f7d\u0f0b\u0f47\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u0f42\u0fb2\u0f72\u0f40\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f47\u0f0b\u0f62\u0f0b\u0f4f\u0f72\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f58\u0f74\u0f0b\u0f41\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u0f67\u0f71\u0f53\u0f0b\u0f42\u0f74\u0f63\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f53\u0f42\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f61\u0f72\u0f42\u0f0b \u0f63\u0f74\u0f42\u0f66\u0f0b\u0f42\u0f66\u0f62\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0f63\u0f74\u0f42\u0f66\u0f0b\u0f62\u0f99\u0f72\u0f44\u0f0b \u0f62\u0f92\u0fb1\u0f0b\u0f61\u0f72\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u0f67\u0f7a\u0f0b\u0f56\u0fb2\u0f74\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u0f47\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f67\u0f72\u0f0b\u0f62\u0f0b\u0f42\u0f0b\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u0f47\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u0f47\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f40\u0f0b\u0f4f\u0f0b\u0f40\u0f0b\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u0f41\u0f7a\u0f0b\u0f58\u0f7a\u0f62\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u0f40\u0f0b\u0f53\u0f0b\u0f4c\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u0f63\u0f60\u0f7c\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u0f63\u0f7a\u0f0b\u0f4a\u0f72\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f0b\u0f61\u0f0b\u0f63\u0f58\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u0f66\u0f7c\u0f42\u0f0b\u0f54\u0f7c\u0f60\u0f72\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u0f56\u0f62\u0f0b\u0f58\u0f72\u0f66\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u0f68\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u0f66\u0f72\u0f53\u0f0b\u0f67\u0f0b\u0f63\u0f0b\u0f62\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u0f4f\u0f0b\u0f58\u0f72\u0f63\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u0f4f\u0f7a\u0f0b\u0f63\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u0f50\u0f71\u0f0b\u0f53\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u0f50\u0f71\u0f60\u0f72\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u0f44\u0f0b\u0f56\u0f45\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u0f58\u0f5a\u0f53\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0f61\u0f72\u0f42\u0f0b\u0f50\u0f7c\u0f42\u0f0b\u0f58\u0f0b\u0f56\u0f40\u0f7c\u0f51\u0f54"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u0f66\u0fa4\u0fb1\u0f72\u0f61\u0f72\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u0f44\u0f7c\u0f0b\u0f58\u0f0b\u0f64\u0f7a\u0f66\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f61\u0f72\u0f0b\u0f42\u0f74"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f47\u0f71\u0f62\u0f0b\u0f58\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f61\u0f72\u0f66\u0f0b\u0f42\u0f72\u0f0b\u0f58\u0f50\u0f7c\u0f0b\u0f66\u0f60\u0f72\u0f0b\u0f47\u0f71\u0f62\u0f0b\u0f58\u0f71\u0f53\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f68\u0f72\u0f44\u0f0b\u0f63\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f53\u0f0b\u0f4c\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f68\u0f72\u0f44\u0f0b\u0f63\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0f56\u0fb2\u0f72\u0f0b\u0f4a\u0f72\u0f64\u0f0b\u0f68\u0f72\u0f44\u0f0b\u0f63\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f68\u0f7a\u0f66\u0f0b\u0f68\u0f72\u0f44\u0f0b\u0f63\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f56\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f72\u0f66\u0f0b\u0f54\u0f7a\u0f0b\u0f53\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u0f40\u0f7a\u0f0b\u0f53\u0f0b\u0f4c\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f55\u0fb2\u0f53\u0f45\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f61\u0f72\u0f66\u0f0b\u0f55\u0fb2\u0f53\u0f45\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u0f55\u0fb7\u0f7a\u0f63\u0f7a\u0f0b\u0f58\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u0f56\u0fb2\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f54\u0f7c\u0f62\u0f0b\u0f45\u0f74\u0f0b\u0f42\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f56\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f54\u0f7c\u0f62\u0f0b\u0f45\u0f74\u0f0b\u0f42\u0f72\u0f66\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u0f63\u0f7a\u0f0b\u0f4a\u0f72\u0f53\u0f0b\u0f68\u0f0b\u0f58\u0f7a\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f53\u0f0b\u0f42\u0f72\u0f0b\u0f68\u0f72\u0f66\u0f0b\u0f54\u0f7a\u0f0b\u0f53\u0f72\u0f64\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u0f5f\u0fb3\u0f0b\u0f50\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u0f42\u0f53\u0f66\u0f0b\u0f66\u0f51\u0f74\u0f51\u0f0b\u0f62\u0f72\u0f58\u0f0b \u0f66\u0f42\u0fb2\u0f72\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u0f64\u0f7c\u0f42\u0f0b\u0f51\u0f44\u0f74\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u0f68\u0f44\u0f0b\u0f61\u0f72\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f0b\u0f41\u0f0b\u0f60\u0f47\u0f58\u0f0b\u0f66\u0f44\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0f66\u0f94\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f0b\u0f41"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f62\u0f0b\u0f56\u0f72\u0f40\u0f0b-\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f72\u0f40\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u0f56\u0f44\u0f92\u0f0b\u0f63\u0f72\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u0f51\u0f7a\u0f0b\u0f5d\u0f0b\u0f53\u0f0b\u0f42\u0f0b\u0f62\u0f72\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f50\u0f72\u0f0b\u0f61\u0f7c\u0f0b\u0f54\u0f72\u0f40\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f68"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u0f47\u0f7d\u0f62\u0f0b\u0f47\u0f71\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u0f42\u0fb2\u0f72\u0f40\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f47\u0f0b\u0f62\u0f0b\u0f4f\u0f72\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u0f42\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f58\u0f74\u0f0b\u0f41\u0f72\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u0f60\u0f47\u0f58\u0f0b\u0f66\u0f44\u0f58\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f60\u0f72\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u0f66\u0f94\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f60\u0f72\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u0f67\u0f7a\u0f0b\u0f56\u0fb2\u0f74\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u0f47\u0f71\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f53\u0f72\u0f66\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u0f41\u0f7a\u0f0b\u0f58\u0f62\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u0f40\u0f0b\u0f53\u0f0b\u0f4c\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u0f63\u0f71\u0f0b\u0f60\u0f7c\u0f66\u0f0b\u0f68\u0f44\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u0f55\u0fb1\u0f72\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u0f58\u0f0b\u0f63\u0f0b\u0f61\u0f0b\u0f63\u0f58\u0f0b\u0f68\u0f44\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u0f58\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f58\u0f62\u0f0b\u0f68\u0f44\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u0f68\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f68\u0f44\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u0f66\u0f94\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f4a\u0f0b\u0f58\u0f72\u0f63\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u0f4f\u0f7a\u0f0b\u0f63\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u0f50\u0f71\u0f60\u0f72\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u0f44\u0f0b\u0f56\u0f45\u0f66\u0f0b\u0f40\u0fb1\u0f72\u0f0b\u0f68\u0f44\u0f0b\u0f61\u0f72\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u0f66\u0f94\u0f0b\u0f66\u0f92\u0fb2\u0f72\u0f42\u0f0b\u0f61\u0f74\u0f0b\u0f53\u0f72\u0f0b\u0f40\u0f7c\u0f4a\u0f0b\u0f42\u0f72\u0f0b\u0f42\u0f7c\u0f0b\u0f62\u0f72\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u0f62\u0f7c\u0f0b\u0f58\u0f71\u0f53\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u0f66\u0fa4\u0fb1\u0f72\u0f0b\u0f51\u0f7c\u0f53\u0f0b\u0f60\u0f5a\u0f7c\u0f63\u0f0b\u0f56"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f62\u0f0b\u0f56\u0f72\u0f40\u0f0b-\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f72\u0f40\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f66\u0f90\u0fb1\u0f7a\u0f51\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f58\u0f42\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u0f42\u0fb2\u0f72\u0f40\u0f0b\u0f42\u0f72\u0f0b\u0f58\u0f42\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f60\u0f72\u0f0b\u0f5a\u0f42\u0f0b\u0f45\u0f53\u0f0b\u0f58\u0f60\u0f72\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u0f60\u0f47\u0f58\u0f0b\u0f66\u0f44\u0f58\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b\u0f60\u0f56\u0fb2\u0f7a\u0f63\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u0f66\u0f94\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f72\u0f60\u0f72\u0f0b\u0f42\u0f72\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b\u0f60\u0f56\u0fb2\u0f7a\u0f63\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u0f47\u0f71\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f53\u0f72\u0f66\u0f0b\u0f51\u0f44\u0f74\u0f63\u0f0b\u0f60\u0f56\u0fb2\u0f7a\u0f63\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u0f4a\u0f0b\u0f58\u0f72\u0f63\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u0f62\u0f92\u0fb1\u0f0b\u0f5a\u0f51\u0f0b\u0f42\u0f44\u0f0b\u0f56\u0f60\u0f72\u0f0b\u0f68\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u0f62\u0f7c\u0f0b\u0f58\u0f71\u0f53\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f58\u0f42\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f72\u0f42\u0f0b\u0f68\u0f44\u0f0b\u0f62\u0f9f\u0f42\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0f42\u0fb2\u0f7a\u0f42\u0f0b\u0f42\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f5f\u0fb3\u0f0b\u0f50\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of(u"{0}\u0f0d: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}\u0f0b, {1}"_s)
		})
	}));
	return data;
}

LocaleNames_dz::LocaleNames_dz() {
}

$Class* LocaleNames_dz::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_dz, name, initialize, &_LocaleNames_dz_ClassInfo_, allocate$LocaleNames_dz);
	return class$;
}

$Class* LocaleNames_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun