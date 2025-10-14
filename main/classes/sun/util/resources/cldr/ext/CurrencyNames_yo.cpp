#include <sun/util/resources/cldr/ext/CurrencyNames_yo.h>

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

$MethodInfo _CurrencyNames_yo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_yo::*)()>(&CurrencyNames_yo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_yo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_yo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_yo_MethodInfo_
};

$Object* allocate$CurrencyNames_yo($Class* clazz) {
	return $of($alloc(CurrencyNames_yo));
}

void CurrencyNames_yo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yo::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of(u"\u20a6"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"\u20bd"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Diami ti Awon Or\u00edl\u1eb9\u0301\u00e8de Arabu"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Afug\u00e1n\u00ec Afugan\u00eds\u00edt\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"L\u1eb9\u0301k\u1eb9\u0300 \u00c0l\u00ecb\u00e9n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"D\u00edr\u00e0\u00e0m\u00f9 \u00c0m\u1eb9\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"G\u00edl\u00edd\u00e0 Netherlands Antillean"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"k\u00edw\u00e1ns\u00e0 Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"P\u1eb9\u0301s\u00f2 Ag\u1eb9nt\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"D\u1ecdla ti Or\u00edl\u1eb9\u0301\u00e8de \u00c1str\u00e0l\u00ec\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Fulor\u00ed\u00ecn\u00ec \u00c0r\u00fab\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"M\u00e1n\u00e0\u00e0t\u00ec \u00c0s\u00e0b\u00e1\u00edj\u00e1\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u00c0mi Y\u00edy\u00edpad\u00e0 Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 B\u00e1b\u00e1d\u1ecd\u0300\u1ecd\u0300s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"T\u00e1k\u00e0 B\u00e1\u0144g\u00edl\u00e1d\u1eb9\u0300\u1eb9\u0300\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Ow\u00f3 L\u1eb9\u0301f\u00ec B\u1ecd\u0300l\u00ecg\u00e9r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dina ti Or\u00edl\u1eb9\u0301\u00e8de B\u00e1r\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Faransi B\u00f9\u00f9r\u00fand\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 B\u1eb9\u0300m\u00fad\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 B\u00f9r\u00f9n\u00e9\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"B\u1ecdlifi\u00e1n\u00f2 B\u1ecd\u0300l\u00edf\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Ow\u00f3 ti Or\u00edl\u1eb9\u0300-\u00e8d\u00e8 Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 B\u00e0h\u00e1m\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u00ccng\u1ecd\u0301t\u00edr\u1ecd\u0300m\u00f9 B\u00fat\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Pula B\u1ecd\u0300t\u00ecs\u00faw\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"R\u1ecd\u0301b\u00f9 B\u1eb9\u0300l\u00e1r\u00f9\u00f9s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 B\u1eb9\u0300l\u00eds\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"D\u1ecd\u0301l\u00e0 K\u00e1n\u00e1d\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Firanki Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Faransi ti Or\u00edl\u1eb9\u0301\u00e8de Siwisi"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"P\u1eb9\u0301s\u00f2 \u1e62\u00edl\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Y\u00fa\u00e0n\u00ec Sh\u00e1\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Reminibi ti Or\u00edl\u1eb9\u0301\u00e8de \u1e63\u00e1\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"P\u1eb9\u0301s\u00f2 K\u00f2l\u00f3\u1e3fb\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"K\u00f3l\u1ecd\u0301\u1ecd\u0300n\u00ec Kosita R\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"P\u1eb9\u0301s\u00f2 Y\u00edy\u00edpad\u00e0 K\u00fab\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"P\u1eb9\u0301s\u00f2 K\u00fab\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u00c8s\u00eck\u00fad\u00f2 Kap\u00fa Faad\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Koruna \u1e62\u1eb9\u0301\u1eb9\u0300k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Faransi Dibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"K\u00edr\u00f3n\u00ec D\u00e1n\u00ed\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"P\u1eb9\u0301s\u00f2 D\u00f2n\u00edn\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dina ti Or\u00edl\u1eb9\u0301\u00e8de \u00c0l\u00f9g\u00e8r\u00ed\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"p\u1ecd\u1ecdn ti Or\u00edl\u1eb9\u0301\u00e8de Egipiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakifas\u00ec Eritira"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"B\u00e1\u00e0 Et\u00f3p\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ow\u00f3 Y\u00far\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 F\u00edj\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"P\u1ecd\u0301n-\u00f9n Er\u00e9k\u00f9s\u00f9 Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"P\u1ecd\u0301n-\u00f9n ti Oril\u1eb9\u0300-\u00e8d\u00e8 G\u1eb9\u0300\u1eb9\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"L\u00e1r\u00ec J\u1ecd\u0301j\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u1e63idi ti Or\u00edl\u1eb9\u0301\u00e8de Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"s\u00edd\u00ec Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"P\u1ecd\u0301n-\u00f9n Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Gamibia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"F\u00edr\u00e0nk\u00ec G\u00edn\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Faransi ti Or\u00edl\u1eb9\u0301\u00e8de Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"K\u00fa\u1eb9\u0301t\u00eds\u00e0\u00e0l\u00ec Guatim\u00edl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 G\u00f9y\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"L\u1eb9mip\u00edr\u00e0 \u1ecc\u0301\u0144d\u00far\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"K\u00fan\u00e0 Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"G\u1ecd\u0301d\u00ec \u00c0\u00edt\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"F\u1ecd\u0301r\u00ed\u01f9t\u00ec H\u1ecd\u0300ng\u00e9r\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"R\u00fap\u00ecy\u00e1 Indon\u00e9s\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u1e62\u00e9k\u00e9l\u00ec Tuntun \u00cds\u00edr\u1eb9\u0300\u1eb9\u0300l\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupi ti Or\u00edl\u1eb9\u0301\u00e8de Indina"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"D\u00edn\u00e1r\u00ec \u00ccr\u00e1\u00e1k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial Iranian"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"K\u00f2r\u00f3n\u00e0 Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 J\u00e0m\u00e1\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"D\u00edn\u00e1r\u00ec J\u1ecd\u0301d\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yeni ti Or\u00edl\u1eb9\u0301\u00e8de Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u1e62iili Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"S\u00f3m\u00fa Kirij\u00eds\u00edt\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"R\u00e1y\u00f2 K\u00e0m\u0300b\u1ecd\u0301d\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Faransi Komori"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"W\u1ecd\u0301\u1ecd\u0300n\u00f9 \u00c0r\u00edw\u00e1 K\u00f2r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"W\u1ecd\u0301\u1ecd\u0300n\u00f9 G\u00fa\u00fas\u00f9 K\u00f2r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"D\u00edn\u00e1r\u00ec Kuwaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 Er\u00e9k\u00f9s\u00f9 Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"T\u1eb9ng\u00e9 Kasak\u00eds\u00edt\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"K\u00ed\u00ec\u00ecp\u00f9 L\u00e0\u00f3t\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"P\u1ecd\u0301n-\u00f9n Lebanese"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"R\u00fap\u00ec\u00ec Siri L\u00e1\u0144k\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"D\u1ecdla Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Loti ti Or\u00edl\u1eb9\u0301\u00e8de Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"D\u00edn\u00e0 L\u00edb\u00edy\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"D\u00edr\u00e1m\u00ec Morok\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Ow\u00f3 L\u00e9h\u00f9 Moldovan"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Faransi Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"D\u1eb9\u0301n\u00e0 Masid\u00f3n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"K\u00edy\u00e0t\u00ec Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"T\u00fag\u00far\u00ec\u00eck\u00ec M\u00f2\u01f9g\u00f3l\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"P\u00e0t\u00e1k\u00e0 M\u00e0k\u00e1\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya ti Or\u00edl\u1eb9\u0301\u00e8de Maritania (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ouguiya ti Or\u00edl\u1eb9\u0301\u00e8de Maritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupi Maritusi"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"R\u00faf\u00ecy\u00e1 M\u1ecd\u0300l\u00ecd\u00edf\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"K\u00e1s\u00e0 M\u00e0l\u00e1w\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"P\u1eb9\u0301s\u00f2 M\u1eb9\u0301s\u00edk\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"R\u00edng\u00ect\u00ec M\u00e0l\u00e9\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metika ti Or\u00edl\u1eb9\u0301\u00e8de Mosamibiki"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"M\u1eb9\u0301t\u00edk\u00e0\u00e0l\u00ec M\u00f2s\u00e1\u1e3fb\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"D\u1ecdla Namib\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"N\u00e1\u00edr\u00e0 N\u00e0\u00ecj\u00edr\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"K\u1ecd\u0300d\u00f3b\u00e0 Naikar\u00e1g\u00fa\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"K\u00edr\u00f3n\u00ec N\u1ecd\u0301\u1ecd\u0301w\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"R\u00fap\u00ec\u00ec N\u1eb9\u0335\u0301p\u00e0\u00e0l\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"R\u00e1y\u00f2 Omani"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"B\u00e1l\u00edb\u00f3\u00e0 P\u00e0n\u00e1m\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"S\u00f3l\u00ec P\u00e8r\u00fa\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"K\u00edn\u00e0 Papua Guinea Tuntun"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"P\u00eds\u00f2 F\u00edl\u00edp\u00ecn\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"R\u00fap\u00ec\u00ec Pakisit\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"S\u00edl\u1ecd\u0300t\u00ec P\u1ecd\u0301l\u00ed\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"G\u00fa\u00e1r\u00e1n\u00ec P\u00e1r\u00e1g\u00faw\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"R\u00e1y\u00f2 K\u00e0t\u00e1r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"L\u00e9h\u00f9 R\u00f2m\u00e9n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"D\u00edn\u00e1r\u00ec S\u00e0b\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Ow\u00f3 ruble ti il\u1eb9\u0300 R\u1ecd\u0301\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Faransi Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riya ti Or\u00edl\u1eb9\u0301\u00e8de Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 Er\u00e9k\u00f9s\u00f9 S\u1ecd\u0301l\u00f3m\u1ecd\u0301n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"R\u00fap\u00ec Sayiselesi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"P\u1ecd\u0301n-\u00f9n S\u00f9d\u00e1\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"P\u1ecd\u1ecdun ti Or\u00edl\u1eb9\u0301\u00e8de Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"K\u00f2r\u00f3n\u00e0 S\u00faw\u00edd\u00ecn"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 S\u00edng\u00e1p\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"P\u1ecd\u0301n-un Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"L\u00ed\u00f3n\u00ec Sira L\u00edon\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u1e62\u00edl\u00e8 Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 S\u00far\u00edn\u00e1m\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"P\u1ecd\u0301n-un G\u00fa\u00fas\u00f9 S\u00f9d\u00e1\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobira ti Or\u00edl\u1eb9\u0301\u00e8de Sao tome Ati Pirisipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"D\u1ecdb\u00edra Sao tome \u00e0ti Pirisipi"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"P\u1ecd\u0301n-\u00f9n S\u00edr\u00ec\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Suwasi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"B\u00e1\u00e0t\u00ec Th\u00e1\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"S\u00f3m\u00f3n\u00ec Tajik\u00edst\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"M\u00e1n\u00e0\u00e0t\u00ec T\u1ecdkim\u1eb9n\u00edst\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"D\u00edn\u00e0 Tuni\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"P\u00e0\u00e1ng\u00e0 T\u00f3\u0144g\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"L\u00edr\u00e0 T\u1ecd\u0301k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 Trinidad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 T\u00e0\u00ecw\u00e1n\u00ec Tuntun"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Sile Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u1eccrifin\u00edy\u00e0 Yukir\u00e9n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u1e62ile Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"D\u1ecd\u0301l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"P\u1eb9\u0301s\u00f2 \u00dar\u00fag\u00faw\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"S\u00f3m\u00fa Usib\u1eb9k\u00eds\u00edt\u00e0\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"B\u1ecd\u0300l\u00edf\u00e0 F\u1eb9n\u1eb9su\u1eb9\u0301l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"D\u00e1h\u00f9n Vietnamese"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"F\u00e1t\u00f9 Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"T\u00e1l\u00e0 S\u00e0m\u00f3\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Firanki \u00e0\u00e1r\u00edn Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"D\u1ecd\u0301l\u00e0 Il\u00e0 O\u00f2r\u00f9n Kar\u00edb\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Farans\u00ec \u00ecw\u1ecd\u0300-oor\u00f9n Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"F\u00edr\u00e0nk\u00ec CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ow\u00f3n\u00edn\u00e1 \u00e0\u00ecm\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"R\u00e1y\u00f2 Y\u1eb9\u0301m\u1eb9\u0300n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"R\u00e1nd\u00ec G\u00fa\u00fas\u00f9 Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kawa\u1e63a ti Or\u00edl\u1eb9\u0301\u00e8de Saabia (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"K\u00e0was\u00e0 S\u00e1mb\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"D\u1ecdla ti Or\u00edl\u1eb9\u0301\u00e8de Siibabuwe"_s)
		})
	}));
	return data;
}

CurrencyNames_yo::CurrencyNames_yo() {
}

$Class* CurrencyNames_yo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_yo, name, initialize, &_CurrencyNames_yo_ClassInfo_, allocate$CurrencyNames_yo);
	return class$;
}

$Class* CurrencyNames_yo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun