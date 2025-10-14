#include <sun/util/resources/cldr/ext/CurrencyNames_yo_BJ.h>

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

$MethodInfo _CurrencyNames_yo_BJ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_yo_BJ::*)()>(&CurrencyNames_yo_BJ::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_yo_BJ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_yo_BJ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_yo_BJ_MethodInfo_
};

$Object* allocate$CurrencyNames_yo_BJ($Class* clazz) {
	return $of($alloc(CurrencyNames_yo_BJ));
}

void CurrencyNames_yo_BJ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yo_BJ::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Diami ti Awon Or\u00edl\u025b\u0301\u00e8de Arabu"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"L\u025b\u0301k\u025b\u0300 \u00c0l\u00ecb\u00e9n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"D\u00edr\u00e0\u00e0m\u00f9 \u00c0m\u025b\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"P\u025b\u0301s\u00f2 Ag\u025bnt\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"D\u0254la ti Or\u00edl\u025b\u0301\u00e8de \u00c1str\u00e0l\u00ec\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"D\u0254\u0301l\u00e0 B\u00e1b\u00e1d\u0254\u0300\u0254\u0300s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"T\u00e1k\u00e0 B\u00e1\u0144g\u00edl\u00e1d\u025b\u0300\u025b\u0300sh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Ow\u00f3 L\u025b\u0301f\u00ec B\u0254\u0300l\u00ecg\u00e9r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dina ti Or\u00edl\u025b\u0301\u00e8de B\u00e1r\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"D\u0254\u0301l\u00e0 B\u025b\u0300m\u00fad\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"D\u0254\u0301l\u00e0 B\u00f9r\u00f9n\u00e9\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"B\u0254lifi\u00e1n\u00f2 B\u0254\u0300l\u00edf\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Ow\u00f3 ti Or\u00edl\u025b\u0300-\u00e8d\u00e8 Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"D\u0254\u0301l\u00e0 B\u00e0h\u00e1m\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u00ccng\u0254\u0301t\u00edr\u0254\u0300m\u00f9 B\u00fat\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Pula B\u0254\u0300t\u00ecs\u00faw\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"R\u0254\u0301b\u00f9 B\u025b\u0300l\u00e1r\u00f9\u00f9s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"D\u0254\u0301l\u00e0 B\u025b\u0300l\u00eds\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"D\u0254\u0301l\u00e0 K\u00e1n\u00e1d\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Faransi ti Or\u00edl\u025b\u0301\u00e8de Siwisi"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"P\u025b\u0301s\u00f2 Sh\u00edl\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Reminibi ti Or\u00edl\u025b\u0301\u00e8de sh\u00e1\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"P\u025b\u0301s\u00f2 K\u00f2l\u00f3\u1e3fb\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"K\u00f3l\u0254\u0301\u0254\u0300n\u00ec Kosita R\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"P\u025b\u0301s\u00f2 Y\u00edy\u00edpad\u00e0 K\u00fab\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"P\u025b\u0301s\u00f2 K\u00fab\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Koruna Sh\u025b\u0301\u025b\u0300k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"K\u00edr\u00f3n\u00ec D\u00e1n\u00edsh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"P\u025b\u0301s\u00f2 D\u00f2n\u00edn\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dina ti Or\u00edl\u025b\u0301\u00e8de \u00c0l\u00f9g\u00e8r\u00ed\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"p\u0254\u0254n ti Or\u00edl\u025b\u0301\u00e8de Egipiti"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"D\u0254\u0301l\u00e0 F\u00edj\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"P\u0254\u0301n-\u00f9n Er\u00e9k\u00f9s\u00f9 Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"P\u0254\u0301n-\u00f9n ti Oril\u025b\u0300-\u00e8d\u00e8 G\u025b\u0300\u025b\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"L\u00e1r\u00ec J\u0254\u0301j\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"shidi ti Or\u00edl\u025b\u0301\u00e8de Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"P\u0254\u0301n-\u00f9n Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Faransi ti Or\u00edl\u025b\u0301\u00e8de Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"K\u00fa\u025b\u0301t\u00eds\u00e0\u00e0l\u00ec Guatim\u00edl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"D\u0254\u0301l\u00e0 G\u00f9y\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"D\u0254\u0301l\u00e0 Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"L\u025bmip\u00edr\u00e0 \u0186\u0301\u0144d\u00far\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"G\u0254\u0301d\u00ec \u00c0\u00edt\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"F\u0254\u0301r\u00ed\u01f9t\u00ec H\u0254\u0300ng\u00e9r\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Sh\u00e9k\u00e9l\u00ec Tuntun \u00cds\u00edr\u025b\u0300\u025b\u0300l\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupi ti Or\u00edl\u025b\u0301\u00e8de Indina"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"D\u0254\u0301l\u00e0 J\u00e0m\u00e1\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"D\u00edn\u00e1r\u00ec J\u0254\u0301d\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yeni ti Or\u00edl\u025b\u0301\u00e8de Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shiili Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"R\u00e1y\u00f2 K\u00e0m\u0300b\u0254\u0301d\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"W\u0254\u0301\u0254\u0300n\u00f9 \u00c0r\u00edw\u00e1 K\u00f2r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"W\u0254\u0301\u0254\u0300n\u00f9 G\u00fa\u00fas\u00f9 K\u00f2r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"D\u0254\u0301l\u00e0 Er\u00e9k\u00f9s\u00f9 Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"T\u025bng\u00e9 Kasak\u00eds\u00edt\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"P\u0254\u0301n-\u00f9n Lebanese"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"D\u0254la Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Loti ti Or\u00edl\u025b\u0301\u00e8de Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"D\u025b\u0301n\u00e0 Masid\u00f3n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya ti Or\u00edl\u025b\u0301\u00e8de Maritania (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ouguiya ti Or\u00edl\u025b\u0301\u00e8de Maritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"R\u00faf\u00ecy\u00e1 M\u0254\u0300l\u00ecd\u00edf\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"P\u025b\u0301s\u00f2 M\u025b\u0301s\u00edk\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"R\u00edng\u00ect\u00ec M\u00e0l\u00e9sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metika ti Or\u00edl\u025b\u0301\u00e8de Mosamibiki"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"M\u025b\u0301t\u00edk\u00e0\u00e0l\u00ec M\u00f2s\u00e1\u1e3fb\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"D\u0254la Namib\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"K\u0254\u0300d\u00f3b\u00e0 Naikar\u00e1g\u00fa\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"K\u00edr\u00f3n\u00ec N\u0254\u0301\u0254\u0301w\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"R\u00fap\u00ec\u00ec N\u025b\u0335\u0301p\u00e0\u00e0l\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"D\u0254\u0301l\u00e0 New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"S\u00edl\u0254\u0300t\u00ec P\u0254\u0301l\u00edsh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Ow\u00f3 ruble ti il\u025b\u0300 R\u0254\u0301sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riya ti Or\u00edl\u025b\u0301\u00e8de Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"D\u0254\u0301l\u00e0 Er\u00e9k\u00f9s\u00f9 S\u0254\u0301l\u00f3m\u0254\u0301n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"P\u0254\u0301n-\u00f9n S\u00f9d\u00e1\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"P\u0254\u0254un ti Or\u00edl\u025b\u0301\u00e8de Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"D\u0254\u0301l\u00e0 S\u00edng\u00e1p\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"P\u0254\u0301n-un Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Sh\u00edl\u00e8 Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"D\u0254\u0301l\u00e0 S\u00far\u00edn\u00e1m\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"P\u0254\u0301n-un G\u00fa\u00fas\u00f9 S\u00f9d\u00e1\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobira ti Or\u00edl\u025b\u0301\u00e8de Sao tome Ati Pirisipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"D\u0254b\u00edra Sao tome \u00e0ti Pirisipi"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"P\u0254\u0301n-\u00f9n S\u00edr\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"M\u00e1n\u00e0\u00e0t\u00ec T\u0254kim\u025bn\u00edst\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"D\u00edn\u00e0 Tunish\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"L\u00edr\u00e0 T\u0254\u0301k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"D\u0254\u0301l\u00e0 Trinidad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"D\u0254\u0301l\u00e0 T\u00e0\u00ecw\u00e1n\u00ec Tuntun"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u0186rifin\u00edy\u00e0 Yukir\u00e9n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shile Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"D\u0254\u0301l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"P\u025b\u0301s\u00f2 \u00dar\u00fag\u00faw\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"S\u00f3m\u00fa Usib\u025bk\u00eds\u00edt\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"B\u0254\u0300l\u00edf\u00e0 F\u025bn\u025bsu\u025b\u0301l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"D\u0254\u0301l\u00e0 Il\u00e0 O\u00f2r\u00f9n Kar\u00edb\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Farans\u00ec \u00ecw\u0254\u0300-oor\u00f9n Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ow\u00f3n\u00edn\u00e1 \u00e0\u00ecm\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"R\u00e1y\u00f2 Y\u025b\u0301m\u025b\u0300n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kawasha ti Or\u00edl\u025b\u0301\u00e8de Saabia (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"D\u0254la ti Or\u00edl\u025b\u0301\u00e8de Siibabuwe"_s)
		})
	}));
	return data;
}

CurrencyNames_yo_BJ::CurrencyNames_yo_BJ() {
}

$Class* CurrencyNames_yo_BJ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_yo_BJ, name, initialize, &_CurrencyNames_yo_BJ_ClassInfo_, allocate$CurrencyNames_yo_BJ);
	return class$;
}

$Class* CurrencyNames_yo_BJ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun