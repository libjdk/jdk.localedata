#include <sun/util/resources/cldr/ext/CurrencyNames_lag.h>

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

$MethodInfo _CurrencyNames_lag_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_lag::*)()>(&CurrencyNames_lag::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_lag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lag",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lag_MethodInfo_
};

$Object* allocate$CurrencyNames_lag($Class* clazz) {
	return $of($alloc(CurrencyNames_lag));
}

void CurrencyNames_lag::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lag::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TSh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirih\u00e1amu ya \u0244temi wa K\u0268ar\u00e1abu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kw\u00e1anza ya Ang\u00f3ola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"D\u00f3ola ya Ausitereel\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Din\u00e1ari ya Bahar\u00e9eni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Far\u00e1anga ya Bur\u00faundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"P\u00faula ya Botisw\u00e1ana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"D\u00f3ola ya K\u00e1nada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Far\u00e1anga ya K\u00f3ongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Far\u00e1aka ya Usw\u00edisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Y\u00faani Renim\u00ednibi ya Ch\u00edina"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Esik\u00faudo ya Kepuv\u00e9ede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Far\u00e1anga ya Jib\u00f3uti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Din\u00e1airi ya Alij\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"P\u00e1undi ya M\u00edsiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"N\u00e1k\u0268fa ya Eriterea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"B\u00ediri ya \u0244hab\u00e9eshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Y\u00fauro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"P\u00e1undi ya \u0244\u0268ng\u0268r\u00e9esa"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"S\u00e9edi ya G\u00e1ana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Dal\u00e1asi ya G\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Far\u00e1anga ya G\u00edine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rup\u00eda ya \u00cdndia"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Y\u00e9eni ya Jap\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Shil\u00edingi ya K\u00e9enya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Far\u00e1anga ya Kom\u00f3oro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"D\u00f3ola ya Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"L\u00f3oti ya Les\u00f3oto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Din\u00e1ari ya L\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dirih\u00e1amu ya Mor\u00f3oko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Mp\u00eda ya bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ungw\u00ediya ya Morit\u00e1nia (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ungw\u00ediya ya Morit\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rup\u00eda ya Mor\u00edisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kw\u00e1acha ya Mal\u00e1awi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metik\u00e1ali ya Musumb\u00ediji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"D\u00f3ola ya Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Na\u00edira ya Niij\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Far\u00e1anga ya Rw\u00e1anda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riy\u00e1ali ya Saud\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rup\u00eda ya Shelish\u00e9eli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"P\u00e1undi ya Sud\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"P\u00e1undi ya M\u0289takat\u00edifu Hel\u00e9ena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Le\u00f3oni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Shil\u00edingi ya Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"D\u00f3bura ya SaoT\u00f3ome na Pir\u00ednsipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"D\u00f3bura ya SaoT\u00f3ome na Pir\u00ednsipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Lileng\u00e9eni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Din\u00e1ari ya Tun\u00edsia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Shil\u00edingi ya Taansan\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Shil\u00edingi ya Ug\u00e1anda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"D\u00f3ola ya Amer\u0268\u0301ka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Far\u00e1anga ya CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Far\u00e1anga ya CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"R\u00e1andi ya Af\u0268r\u0268ka ya Saame"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kw\u00e1cha ya S\u00e1mbia (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kw\u00e1cha ya S\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"D\u00f3ola ya Simb\u00e1abwe"_s)
		})
	}));
	return data;
}

CurrencyNames_lag::CurrencyNames_lag() {
}

$Class* CurrencyNames_lag::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lag, name, initialize, &_CurrencyNames_lag_ClassInfo_, allocate$CurrencyNames_lag);
	return class$;
}

$Class* CurrencyNames_lag::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun