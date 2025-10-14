#include <sun/util/resources/cldr/ext/LocaleNames_yo.h>

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

$MethodInfo _LocaleNames_yo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_yo::*)()>(&LocaleNames_yo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_yo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_yo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_yo_MethodInfo_
};

$Object* allocate$LocaleNames_yo($Class* clazz) {
	return $of($alloc(LocaleNames_yo));
}

void LocaleNames_yo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_yo::getContents() {
	$var($String, metaValue_lo, u"L\u00e1\u00f2"_s);
	$var($String, metaValue_ml, u"M\u00e1l\u00e0y\u00e1l\u00e1m\u00f9"_s);
	$var($String, metaValue_mn, u"M\u00f2ng\u00f3l\u00ed\u00e0"_s);
	$var($String, metaValue_or, u"\u00d2d\u00ed\u00e0"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u00c8d\u00e8 Colognian"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0143y\u00e1k\u1ecd\u0301l\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u00c0w\u1ecdn \u00e0m\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u00c8d\u00e8 Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u00c9m\u00f3j\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u00c8d\u00e8 Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"Luy\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u00c8d\u00e8 Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ec\u1e63\u00ec (or\u00edl\u1eb9\u0300-\u00e8d\u00e8 Y\u00far\u00f3\u00f2p\u00f9)"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"T\u1eb9\u0301s\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Er\u00e9k\u00f9s\u00f9 Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u00c0\u00e0nd\u00f3r\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u1eb8mirate ti Aw\u1ecdn Arabu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u00c0f\u00f9g\u00e0n\u00edst\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u00c8d\u00e8 Afrikani"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u00c0\u00e0nt\u00edg\u00fa\u00e0 \u00e0ti B\u00e1r\u00edb\u00fad\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 \u1eb8t\u00ed\u00f3p\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u00c0\u00e0ng\u00fal\u00edl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u00c8d\u00e8 Akani"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u00c0l\u00f9b\u00e0n\u00ed\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Am\u00e9n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u00c8d\u00e8 Amariki"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u00e8d\u00e8 L\u00e1r\u00fab\u00e1w\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u00c0\u00e0ng\u00f3l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antak\u00edt\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u00e8d\u00e8 j\u00e0p\u00e1\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Agent\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u00c8d\u00e8 \u00c1r\u00e1b\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u00ecl\u00e0n\u00e0 \u00e0f\u1ecdw\u1ecd\u0301k\u1ecd ar\u00e1 J\u00e0p\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"S\u00e1m\u00f3\u00e1n\u00ec ti Or\u00edl\u1eb9\u0301\u00e8de \u00c0m\u00e9r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u00c8d\u00e8 Ti Assam"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"As\u00edt\u00edr\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u00c1str\u00e0l\u00ec\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u00c1r\u00fab\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c0w\u1ecdn Er\u00e9k\u00f9s\u00f9 ti \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"As\u1eb9\u0301b\u00e1j\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u00c8d\u00e8 Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u1ecd\u0300s\u00edn\u00ed\u00e0 \u00e0ti \u1eb8tis\u1eb9g\u00f3f\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"B\u00e1b\u00e1d\u00f3s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u00c8d\u00e8 Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"B\u00e1ng\u00e1l\u00e1d\u00e9s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u00e9g\u00ed\u1ecd\u0301m\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u00c8d\u00e8 Belarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"B\u00f9\u00f9k\u00edn\u00e1 Fas\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"B\u00f9\u00f9g\u00e1r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u00c8d\u00e8 Bugaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"B\u00e1r\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"B\u00f9\u00f9r\u00fand\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"B\u1eb9\u0300n\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"St. Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"B\u00e9m\u00fad\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u00c8d\u00e8 B\u00e1\u1e3fb\u00e0r\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"B\u00far\u00fan\u1eb9\u0301l\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u00c8d\u00e8 Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"B\u1ecd\u0300l\u00edf\u00edy\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tibet\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Caribbean Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"B\u00e0r\u00e0s\u00edl\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u00c8d\u00e8 Bretoni"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"B\u00e0h\u00e1m\u00e1s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u00c8d\u00e8 Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u1e62\u00f3g\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"B\u00fat\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Er\u00e9k\u00f9s\u00f9 Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"B\u1ecd\u0300t\u00ecs\u00faw\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"My\u00e1nmar\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec L\u00e1\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"B\u00e9l\u00e1r\u00fas\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u1e62\u1eb9n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"B\u00e8l\u00eds\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 P\u00e1s\u00ed\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 H\u00e9b\u00e9r\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"K\u00e1n\u00e1d\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u00c8d\u00e8 Catala"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Er\u00e9k\u00f9s\u00f9 Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Masanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koiraboro Seni"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"K\u00f3\u0144g\u00f2 \u2013 Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u00c8d\u00e8 Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u00c0rin g\u00f9ngun \u00c1f\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"K\u00f3\u0144g\u00f2 \u2013 Brazaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"switi\u1e63ilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"K\u00f3\u00fat\u00e8 for\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Et\u00edokun K\u00f9\u00fak\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u1e62\u00edl\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamer\u00fa\u00fan\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u1e62\u00e1\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"K\u00f2l\u00f3m\u00edb\u00eca"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u00c8d\u00e8 Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Er\u00e9k\u00f9s\u00f9 Clipperston"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kuusita R\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u00c8d\u00e8 Seeki"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"K\u00fab\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u00c8d\u00e8 S\u00edl\u00e1f\u00ed\u00edk\u00ec Il\u00e9 \u00ccj\u1ecd\u0301s\u00ecn"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Et\u00edokun K\u00e1p\u00e9 f\u00e9nd\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Er\u00e9k\u00f9s\u00f9 Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"K\u00far\u00fas\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u00c8d\u00e8 Welshi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u1e62\u1eb9\u0301\u1eb9\u0301k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 \u1eb8ti\u00f3p\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u00c8d\u00e8 Il\u1eb9\u0300 Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u00c8d\u00e8 P\u1ecdtog\u00ed (or\u00edl\u1eb9\u0300-\u00e8d\u00e8 Y\u00far\u00f3\u00f2p\u00f9)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"J\u00e1m\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u00c8d\u00e8 J\u00e1m\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u00c8d\u00e8 Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego Ga\u1e63ia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u00ccg\u00fanr\u00e9g\u00e9 Gb\u00e8d\u00e9ke K\u1ecd\u0301r\u1eb9\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ec\u00ect\u00ec Defanag\u00e1r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u00edb\u1ecd\u0301\u00f3t\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u1eb9\u0301m\u00e1k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"B\u00edr\u00e1\u00ecl\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"D\u00f2m\u00edn\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u00c0w\u1ecdn N\u1ecd\u0301\u0144b\u00e0 K\u00e9k\u00e8k\u00e9 ti Am\u1eb9\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"D\u00f2m\u00edn\u00edk\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u00c8d\u00e8 B\u00e9\u1e3fb\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ec\u1e63\u00ec (or\u00edl\u1eb9\u0300-\u00e8d\u00e8 L\u00e1t\u00ecn-Am\u1eb9\u0301r\u00edk\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u00c0l\u00f9g\u00e8r\u00ed\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u00c8d\u00e8 Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u00c8d\u00e8 B\u1eb9\u0301n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 ti \u1e62\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Seuta \u00e0ti Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Eku\u00e1d\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u1e62\u00e1r\u00fam\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 G\u00edr\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Esitonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u00c8d\u00e8 Ew\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u00c0ra \u00ccda \u00ccl\u00e0 D\u00e9\u00e9d\u00e9\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u00c9g\u00edp\u00edt\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u00ccw\u1ecd\u0300\u00f2\u00f2r\u00f9n S\u00e0h\u00e1r\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u00c8d\u00e8 Giriki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u00c8d\u00e8 G\u1eb9\u0300\u1eb9\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u00c8d\u00e8 Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u00c8d\u00e8 Sh\u1eb9\u0301r\u00f3ki\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritira"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Sipani"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ec\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etopia"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u00c8d\u00e8 Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Han p\u1eb9\u0300l\u00fa Bopom\u00f3f\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u00c0pap\u1ecd\u0300 Y\u00far\u00f3\u00f2p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u00c8d\u00e8 Baski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"H\u00e1\u0144g\u00f9l\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Agb\u00e8gb\u00e8 Y\u00far\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Ta\u1e63el\u00ed\u00ect\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec G\u00f9j\u00e1r\u00e1t\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Sorbian Ap\u00e1 \u00d2k\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"H\u00e1\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u00c8d\u00e8 Pasia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"t\u00ed w\u1ecd\u0301n m\u00fa r\u1ecdr\u00f9n."_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"D\u00edj\u00ed\u00edt\u00ec \u00ccw\u1ecd\u0300 O\u00f2r\u00f9n"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Hans \u00e0t\u1ecdw\u1ecd\u0301d\u1ecd\u0301w\u1ecd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u00c8d\u00e8 F\u00fal\u00e0n\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Filandi"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u00c8d\u00e8 Finisi"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Etikun Fakalandi"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Makoronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u00c8d\u00e8 Cantonese"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u00c0w\u1ecdn Er\u00e9k\u00f9s\u00f9 ti Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u00c8d\u00e8 Faroesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"T\u00e1m\u00edl\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Faranse"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u00c8d\u00e8 Farans\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u00c8d\u00e8 Frisia"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u00c8d\u00e8 Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"G\u1eb9\u0300\u1eb9\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Genada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u00c8d\u00e8 Gaelik ti Ilu Scotland"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"G\u1ecdgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Firen\u1e63i Guana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibaratara"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Gerelandi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u00c8d\u00e8 Galicia"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gene"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u00c8d\u00e8 Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gadelope"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekutoria Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u00c8d\u00e8 \u00e0\u00ecm\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Geriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"G\u00fa\u00fas\u00f9 Georgia \u00e0ti G\u00fa\u00fas\u00f9 \u00c0w\u1ecdn Er\u00e9k\u00f9s\u00f9 Sandwich"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guamu"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u00c8d\u00e8 Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"M\u00e1\u01f9k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gene-Busau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u00c8d\u00e8 Klingoni"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u00c8d\u00e8 Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u00c0\u00e0rin Gb\u00f9ngb\u00f9n Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"K\u00f2 s\u00ed \u00e0k\u00f3\u00f2n\u00fa el\u00e9d\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u00c8d\u00e8 Heberu"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u00c8d\u00e8 H\u00ed\u0144d\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u00c8d\u00e8 J\u00e1m\u00e1n\u00ec (\u1ecc\u0301s\u00edr\u00ed\u00e0 )"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Agb\u00e8gb\u00e8 \u00cc\u1e63\u00e0k\u00f3so \u00cc\u1e63\u00fan\u00e1 Hong Kong T\u00ed \u1e62\u00e1n\u00e0 \u0143 Dar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Er\u00e9k\u00f9s\u00f9 Heard \u00e0ti Er\u00e9k\u00f9s\u00f9 McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondurasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"K\u00f2r\u00f3\u00e1t\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u00c8d\u00e8 Kroatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u00c8d\u00e8 \u00c1g\u1eb9\u0300\u1eb9\u0300m\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"S\u00faw\u00eds\u00ec ti J\u00e1m\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haati"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitian Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungari"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u00c8d\u00e8 Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u00c8d\u00e8 Ile Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u00c8d\u00e8 pipo"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u1eb8r\u00e9k\u00f9s\u00f9 K\u00e1n\u00e1r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u00c8d\u00e8 Indon\u00e9\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec Tibet\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"Iru \u00c8d\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u00c8d\u00e8 Y\u00edb\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"N\u00e1m\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u1e62\u00edku\u00e1n Y\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Iser\u1eb9li"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Et\u00edkun \u00cdnd\u00ed\u00e1n\u00ec ti \u00ccl\u00fa B\u00edr\u00edt\u00eds\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Irani"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"A\u1e63ilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u00c8d\u00e8 Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u00c8d\u00e8 \u00cdt\u00e1l\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u00c0m\u00ec \u00cc\u1e63\u00e8s\u00ecr\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec B\u00e1\u0144g\u00edl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u00c8d\u00e8 J\u00e0p\u00e1\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 L\u00e1r\u00fab\u00e1w\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"B\u00e1\u0144g\u00edl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"J\u1ecddani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u00c8d\u00e8 Javanasi"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u00c8d\u00e8 Il\u1eb9\u0300 J\u00e1m\u00e1n\u00ec (Or\u00edl\u1eb9\u0301\u00e8de sw\u00edts\u00e0land\u00ec)"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u00c8d\u00e8 Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"L\u00e1t\u00edn Am\u1eb9\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kuri\u1e63isitani"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"K\u00e0m\u00f9b\u00f3d\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"K\u00edk\u00fay\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"M\u00e1s\u00e1\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Ka\u1e63ak\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Kalaal\u00eds\u00f9t\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"K\u00f2m\u00f2r\u00f3s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u00c8d\u00e8 kameri"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Kiiti ati Neefi"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u00c8d\u00e8 Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u00c8d\u00e8 Farans\u00e9 (or\u00edl\u1eb9\u0300-\u00e8d\u00e8 K\u00e1n\u00e1d\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u00c8d\u00e8 K\u00f2r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Guusu K\u1ecdria"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Ariwa K\u1ecdria"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Ka\u1e63\u00edmir\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"K\u1ecddi\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u00c8d\u00e8 Faran\u1e63\u00e9 (S\u00faw\u00eds\u00e0la\u01f9d\u00ec)"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweti"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u00c8d\u00e8 K\u1ecd\u0301n\u00ec\u00ec\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Et\u00edokun K\u00e1m\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"K\u00edr\u00edg\u00ed\u00ecs\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Ka\u1e63a\u1e63atani"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u00e8d\u00e8 il\u1eb9\u0300 R\u1ecd\u0301\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosi"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u00c8d\u00e8 Latini"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanoni"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"L\u00f9\u1e63\u1eb9\u0301mb\u1ecd\u0301\u1ecd\u0300g\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Lu\u1e63ia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec M\u00e1l\u00e0y\u00e1l\u00e1m\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"J\u00e1m\u00e1n\u00ec \u00ecp\u00ecl\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"L\u1eb9\u1e63it\u1eb9nisiteni"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Siri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"T\u00edb\u00e9t\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"L\u00ec\u01f9g\u00e1l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Firi\u00fal\u00ed\u00e0n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u00c8to \u00ccdiw\u1ecd\u0300n \u1eccba"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u00c8d\u00e8 Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lusemogi"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"L\u00fab\u00e0-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latifia"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u00c8d\u00e8 Latvianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"Katak\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libiya"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Funjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"L\u00e1\u0144g\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Taana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Modofia"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madasika"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malagas\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Etikun M\u00e1\u1e63ali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u00c8t\u00f2 \u1eb8l\u1eb9\u0301s\u1eb9\u1eb9s\u1eb9 \u00c0k\u00f9\u00e0y\u00e0n Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"M\u00e0\u00f3r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u00c0r\u00edw\u00e1 Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u00c8d\u00e8 Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Manamari"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mogolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Agb\u00e8gb\u00e8 \u00cc\u1e63\u00e0k\u00f3so P\u00e0t\u00e0k\u00ec Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Etikun Guusu Mariana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Matinikuwi"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Maritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u00c8d\u00e8 marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Motserati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u00c8d\u00e8 Malaya"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malata"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u00c8d\u00e8 Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maritiusi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maladifi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mesiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 ti J\u00e0p\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malasia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u00c8d\u00e8 Bumiisi"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mo\u1e63amibiku"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u00c0m\u1eb9\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u1e62\u00f3b\u00ed\u00e1n\u00f9 Ap\u00e1 \u00cc\u1e63\u00e0l\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u00cc\u1e63\u00e0w\u00e1r\u00ed \u00c8te-Gbogbogb\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Ap\u00e1 S\u00e0h\u00e1r\u00e0 \u00c1f\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"N\u1ecd\u0301\u1ecd\u0301w\u00e8 Bok\u00edm\u00e0l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 H\u00e9b\u00e9r\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledonia Titun"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u00c0r\u00edw\u00e1 Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00e0\u00ecj\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u00c8d\u00e8 Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Etikun N\u1ecd\u0301\u00faf\u00f3k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"N\u00e0\u00ecj\u00edr\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nedalandi"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u00c8d\u00e8 D\u1ecd\u0301\u1ecd\u0300\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"N\u1ecd\u0301\u1ecd\u0301w\u00e8 N\u00edn\u1ecd\u0300s\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u1ecd\u1ecdwii"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u00c8d\u00e8 Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepa"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"R\u00f3\u0144b\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u0143y\u00e1j\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u1e62ilandi Titun"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"Kabil\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u00c8d\u00e8 Occitani"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"K\u00e1\u0144b\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"M\u00e9r\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 \u00c0m\u1eb9\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u1ecc\u1ecdma"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u00d2r\u00f2m\u1ecd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u1ecc\u1e63\u1eb9\u0301t\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisiyen"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u00c8d\u00e8 Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u00c8d\u00e8 Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u00c8d\u00e8 \u00f2y\u00ecnb\u00f3 G\u1eb9\u0300\u1eb9\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Firen\u1e63i Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Paapu ti Giini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakisitan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polandi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u00c8d\u00e8 P\u00f3l\u00e1\u01f9d\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u00c8d\u00e8 \u00c8w\u00f3\u01f9d\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"P\u1eb9\u1eb9ri ati mikuloni"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pikarini"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"P\u1ecdto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Agb\u00e8gb\u00e8 ara Pal\u1eb9s\u00edt\u00edn\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"P\u00e1sh\u00edt\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"P\u1ecd\u0301t\u00fag\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u00c8d\u00e8 P\u1ecdtog\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u00c8t\u00f2 \u1eb8l\u1eb9\u0301s\u1eb9\u1eb9s\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Paalu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u00c0w\u1ecdn N\u1ecd\u0301\u0144b\u00e0 G\u00edr\u00ed\u00eck\u00ec K\u00e9k\u00e8k\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguye"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u00c8d\u00e8 P\u1ecdtog\u00ed (Oril\u1eb9\u0300-\u00e8d\u00e8 Br\u00e0s\u00edl)"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meeto"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"H\u00e9b\u00e9r\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u00ccg\u00fanr\u00e9g\u00e9 K\u1ecd\u0301r\u1eb9\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kota"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"M\u00e9t\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"\u00c8to W\u00e1k\u00e0t\u00ed 24 (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"\u00c8to W\u00e1k\u00e0t\u00ed 24 (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec My\u00e1nmar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Agb\u00e8gb\u00e8 \u00d2\u1e63\u1ecd\u0301\u1ecd\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"K\u00fa\u1eb9\u0301\u0144j\u00f9\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u00c8d\u00e8 B\u00f3d\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"M\u00e1kond\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Agb\u00e1y\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u1eb8ti\u00f3p\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u00c1f\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u00c0r\u00edw\u00e1 Am\u1eb9\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Riuniyan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"\u00c8to W\u00e1k\u00e0t\u00ed 12 (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"G\u00fa\u00fa\u1e63\u00f9 Am\u1eb9\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"\u00c8to W\u00e1k\u00e0t\u00ed 12 (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u00d2s\u1ecd\u0301\u1ecd\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"R\u00f3m\u00e1\u01f9\u1e63\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"R\u00fa\u0144d\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"K\u1ecd\u0301r\u1eb9\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u00c8d\u00e8 Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec \u00d2d\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 D\u1eb9\u0301s\u00edm\u00e0 \u1e62\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u1ecd\u1e63ia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u00c8d\u00e8 R\u1ecd\u0301\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u00c8d\u00e8 Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Kabufad\u00ed\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u00c8d\u00e8 G\u1eb9\u0300\u1eb9\u0301s\u00ec (\u00f3r\u00edl\u1eb9\u0300-\u00e8d\u00e8 \u1eccsir\u00e9l\u00ed\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u00c8d\u00e8 awon ara Indo"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Etikun Solomoni"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawak"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00ccw\u1ecd\u0300 oor\u00f9n Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u1e62e\u1e63\u1eb9l\u1eb9si"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u00c8d\u00e8 Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u00c0\u00e0rin Gb\u00f9gb\u00f9n \u00c0m\u1eb9\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Swidini"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Ap\u00e1\u00e0r\u00edw\u00e1 Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00ccl\u00e0 Oor\u00f9n \u00c1f\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u00c0r\u00edw\u00e1 Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapo"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"H\u1eb9lena"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u00c8d\u00e8 Serbo-Croatiani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u00c0ra \u00ccda \u00ccl\u00e0 M\u00edm\u00fan\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u00c0\u00e0r\u00edn gb\u00f9ngb\u00f9n Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Silofania"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u00c8d\u00e8 Sinhalese"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Ap\u00e1g\u00fa\u00fas\u00f9 \u00c1f\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Am\u1eb9\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Silofakia"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u00c8d\u00e8 Slovaki"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siria looni"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u00c8d\u00e8 Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Sani Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"S\u00e1m\u00f3\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"S\u1eb9n\u1eb9ga"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u1e62\u1ecdn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u00c8d\u00e8 ara Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u00e0w\u1ecdn d\u00edj\u00edt\u00ec L\u00e0rub\u00e1w\u00e1-\u00cdnd\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u00c8d\u00e8 Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec \u00ccb\u00edl\u1eb9\u0300 T\u00e1m\u00edl\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinami"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u00c8d\u00e8 Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"G\u00fa\u00fas\u00f9 Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u00ccg\u00fanr\u00e9g\u00e9 \u00cc\u1e63ir\u00f2 Ow\u00f3 K\u1ecd\u0301r\u1eb9\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao tomi ati pirii\u1e63ipi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u00c8d\u00e8 Sesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u00c8d\u00e8 Sudan\u00eds\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u1eb8\u1eb9s\u00e1f\u00e1d\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u00c8d\u00e8 Suwidiisi"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u00c8d\u00e8 Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 \u00cc\u1e63\u00fan\u00e1 \u00ccb\u00edl\u1eb9\u0300 \u1e62\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Sa\u1e63iland"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Kunha"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u00c8d\u00e8 Tamili"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u00c8d\u00e8 Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u00c8to \u00ccdiw\u1ecd\u0300n US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Ap\u00e1\u00e0r\u00edw\u00e1 Am\u1eb9\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u00c1\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"T\u1ecd\u1ecdki ati Etikun Kak\u1ecdsi"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Yangb\u1eb9n"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u00c0\u00e0rin Gb\u00f9ngb\u00f9n \u00c9\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u1e62\u00e0\u00e0d\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u00c8d\u00e8 Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u00ccw\u1ecd\u0300 \u00d2\u00f2r\u00f9n E\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Agb\u00e8gb\u00e8 G\u00fa\u00fas\u00f9 Faran\u1e63\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"T\u00e0j\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u00c8d\u00e8 Tai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u00c8d\u00e8 Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Takisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u00c8d\u00e8 G\u1eb9\u0300\u1eb9\u0301s\u00ec (Or\u00edl\u1eb9\u0300-\u00e8d\u00e8 K\u00e1n\u00e1d\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"K\u00e1r\u00edb\u00ed\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u00c8d\u00e8 Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u00ccl\u00e0O\u00f2r\u00f9n T\u00edm\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u1ecd\u1ecdkimenisita"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tuni\u1e63ia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"T\u00f3\u0144g\u00e0n"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 J\u00e1p\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u1ecd\u1ecdki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u00c8d\u00e8 T\u1ecd\u1ecdkisi"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tirinida ati Tobaga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Tatar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tufalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwani"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u00c8d\u00e8 Asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"T\u00e0\u01f9s\u00e1n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"K\u00edw\u00e1\u1e63\u00ed\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u00cc\u1e63\u1ecdw\u1ecd\u0301k\u1ecd\u0300w\u00e9 \u00e0\u00ecm\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Y\u00far\u00f3\u00f2p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukarini"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u00ccl\u00e0 \u00d2\u00f2r\u00f9n E\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u00ccl\u00e0 \u00d2r\u00f9n Y\u00far\u00f3p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u00c0r\u00edw\u00e1 Y\u00far\u00f3\u00f2p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"G\u00fa\u00fa\u1e63\u00f9 E\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u00ccw\u1ecd\u0300 \u00d2\u00f2r\u00f9n Y\u00far\u00f3p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"G\u00fa\u00fa\u1e63\u00f9 \u00ecl\u00e0 \u00f2\u00f2r\u00f9n \u00c9\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Y\u00fag\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"K\u00f3r\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"W\u1ecd\u0301p\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"G\u00fa\u00fa\u1e63\u00f9 Y\u00far\u00f3\u00f2p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u00c8d\u00e8 Ukania"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"S\u00ecnh\u00e1l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u00c0w\u1ecdn Er\u00e9k\u00f9s\u00f9 K\u00e9k\u00e8k\u00e9 Agb\u00e8gb\u00e8 US"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u00cc\u1e63\u1ecd\u0300kan \u00e0gb\u00e1y\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u00c8d\u00e8 Udu"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Am\u1eb9rik\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiian"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Nruguayi"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"P\u00far\u00fa\u1e63\u00ed\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"N\u1e63ib\u1eb9kisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u00c8d\u00e8 Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u00c0\u00e0rin Gb\u00f9ngb\u00f9n Atlas Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Ngiemb\u00f9n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u00ccl\u00fa Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Fis\u1eb9nnti ati Genadina"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"F\u1eb9n\u1eb9\u1e63u\u1eb9la"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Et\u00edkun F\u00e1g\u00edn\u00ec ti \u00ecl\u00fa B\u00edr\u00edt\u00eds\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Etikun Fagini ti Am\u1eb9rika"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u00c8d\u00e8 Jetinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Koira \u1e62\u00ed\u00edn\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u00d2b\u00edr\u00edkiti W\u00e1k\u00e0t\u00ed (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"F\u1eb9tinami"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"F\u1ecd\u0301l\u00e1p\u00f9\u00f9k\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Faniatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Riwa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u1ecc\u1e63ir\u00e9la\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"M\u1eb9lan\u00e9\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wali ati futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"J\u1ecd\u0301j\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Agb\u00e8gb\u00e8 Maikiron\u00e9\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u0143g\u00f2mb\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"L\u00e1kota"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"W\u1ecd\u0301l\u1ecd\u0301\u1ecd\u0300f\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"W\u1ecds\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u00c0f\u1eb9n\u00f9k\u00f2 T\u00e1m\u00e1s\u00e1\u00ect\u00ec ti M\u00f2r\u00f3k\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Sam\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u00ecs\u1ecd\u0300r\u1ecd\u0300s\u00ed ir\u1ecd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ibi ir\u1ecd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Poline\u1e63\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u00c8d\u00e8 L\u00e1t\u00ecn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 \u00ccr\u1ecd\u0300r\u00f9n ti \u1e62\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 \u00ccb\u00edl\u1eb9\u0300 \u1e62\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u00c8d\u00e8 Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"K\u00f2s\u00f3f\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec R\u00f3m\u00e1n\u00f9 K\u00e9ker\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Gujar\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Aik\u1ecdsil\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"K\u00e0k\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemeni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u00ccl\u00e0n\u00e0 On\u00edr\u00faur\u00fa \u00c8t\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u00c8d\u00e8 Yiddishi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u00c8d\u00e8 Yor\u00f9b\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ec\u1e63\u00ec (or\u00edl\u1eb9\u0300-\u00e8d\u00e8 M\u1eb9\u0301s\u00edk\u00f2)"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayote"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"G\u00fa\u00fa\u1e63\u00f9 \u00c1f\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u00c0ra \u00ccda \u00ccl\u00e0 T\u00edt\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"K\u00e1l\u1eb9nj\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"D\u1eb9fanag\u00e1r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Ed\u00e8 \u1e62\u00e1\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 J\u1ecd\u0301j\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Hirag\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u1e62amibia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Bopom\u00f3f\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u00c0ra \u00ccda \u00ccl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u00c8d\u00e8 \u1e62ulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u1e62imibabe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u00c0gb\u00e8gb\u00e8 \u00e0\u00ecm\u1ecd\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"J\u1ecd\u0301j\u00ed\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u00c8to M\u1eb9\u0301t\u00edr\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"K\u00e0l\u1eb9\u0301\u0144d\u00e0 ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec T\u00e9l\u00fag\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 \u00cc\u1e63\u00fan\u00e1 J\u00e0p\u00e1\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u00c8d\u00e8 \u1eb8mb\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"M\u00e1\u1e63\u00e1m\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u1eb8d\u00e8 \u1e62\u00e1\u00edn\u00e0 On\u00edr\u1ecd\u0300r\u00f9n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0 \u00cc\u1e63\u00fan\u00e1 \u00ccr\u1ecd\u0300r\u00f9n \u1e62\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"K\u00f3nk\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u00c0w\u1ecdn D\u00edj\u00ed\u00ect\u00ec L\u00e1r\u00fab\u00e1w\u00e1-\u00cdnd\u00ed\u00e0 f\u00edf\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"N\u00fa\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u00c0w\u1ecdn D\u00edj\u00ed\u00ect\u00ec F\u00edf\u1eb9\u0300-\u1eb8\u0300k\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"T\u00e1\u00edt\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"Ap\u00e1\u00e0r\u00edw\u00e1 L\u00far\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u00c8d\u00e8 \u1e62\u00e1\u00edn\u00e0 \u00ccb\u00edl\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec K\u1eb9\u0301m\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"M\u00fand\u00e0ng\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u00c0w\u1ecdn D\u00edj\u00ed\u00ect\u00ec Gurumuk\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"K\u1eb9m\u1eb9\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u1eccl\u1ecd\u0301p\u1ecd\u0300 \u00e8d\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u00c8to \u00ccdiw\u1ecd\u0300n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec R\u00f3m\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"S\u00e0k\u00edh\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u00c0w\u1ecdn d\u00edj\u00ed\u00ect\u00ec T\u00e0m\u00edl\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u00c0w\u1ecdn n\u1ecd\u0301\u0144b\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Gurum\u00fakh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u1e62\u00e1\u0144b\u00e1l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"T\u00e9l\u00fag\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u00c8d\u00e8 B\u00e1f\u00ed\u00e0"_s)
		})
	}));
	return data;
}

LocaleNames_yo::LocaleNames_yo() {
}

$Class* LocaleNames_yo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_yo, name, initialize, &_LocaleNames_yo_ClassInfo_, allocate$LocaleNames_yo);
	return class$;
}

$Class* LocaleNames_yo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun