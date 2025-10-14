#include <sun/util/resources/cldr/ext/LocaleNames_yo_BJ.h>

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

$MethodInfo _LocaleNames_yo_BJ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_yo_BJ::*)()>(&LocaleNames_yo_BJ::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_yo_BJ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_yo_BJ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_yo_BJ_MethodInfo_
};

$Object* allocate$LocaleNames_yo_BJ($Class* clazz) {
	return $of($alloc(LocaleNames_yo_BJ));
}

void LocaleNames_yo_BJ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_yo_BJ::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u00c0r\u00edw\u00e1 Am\u025b\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"G\u00fa\u00fash\u00f9 Am\u025b\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u00d2s\u0254\u0301\u0254\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u00ccw\u0254\u0300 oor\u00f9n Af\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u00c0\u00e0rin Gb\u00f9gb\u00f9n \u00c0m\u025b\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Am\u025b\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Ap\u00e1\u00e0r\u00edw\u00e1 Am\u025b\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u00ccl\u00e0 \u00d2\u00f2r\u00f9n Esh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"G\u00fa\u00fash\u00f9 Esh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"G\u00fa\u00fash\u00f9 \u00ecl\u00e0 \u00f2\u00f2r\u00f9n \u00c9sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"G\u00fa\u00fash\u00f9 Y\u00far\u00f3\u00f2p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u0186shir\u00e9lash\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"M\u025blan\u00e9sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Agb\u00e8gb\u00e8 Maikiron\u00e9sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polinesh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u00c1sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u00c0\u00e0rin Gb\u00f9ngb\u00f9n \u00c9sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u00ccw\u0254\u0300 \u00d2\u00f2r\u00f9n Esh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u00ccw\u0254\u0300 \u00d2\u00f2r\u00f9n Y\u00far\u00f3p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"L\u00e1t\u00edn Am\u025b\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0190mirate ti Aw\u0254n Arabu"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"S\u00e1m\u00f3\u00e1n\u00ec ti Or\u00edl\u025b\u0301\u00e8de \u00c0m\u00e9r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c0w\u0254n Er\u00e9k\u00f9s\u00f9 ti \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"As\u025b\u0301b\u00e1j\u00e1n\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u0254\u0300s\u00edn\u00ed\u00e0 \u00e0ti \u0190tis\u025bg\u00f3f\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u00e9g\u00ed\u0254\u0301m\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"B\u025b\u0300n\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"B\u00far\u00fan\u025b\u0301l\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"B\u0254\u0300l\u00edf\u00edy\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"B\u0254\u0300t\u00ecs\u00faw\u00e1n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"B\u00e8l\u00eds\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("switishilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Sh\u00edl\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Sh\u00e1\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Sh\u025b\u0301\u025b\u0301k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Gashia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u00edb\u0254\u0301\u00f3t\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u025b\u0301m\u00e1k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u00ccw\u0254\u0300\u00f2\u00f2r\u00f9n S\u00e0h\u00e1r\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u00c0pap\u0254\u0300 Y\u00far\u00f3\u00f2p\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u00c0w\u0254n Er\u00e9k\u00f9s\u00f9 ti Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"G\u025b\u0300\u025b\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"G\u0254gia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Firenshi Guana"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"G\u00fa\u00fas\u00f9 Georgia \u00e0ti G\u00fa\u00fas\u00f9 \u00c0w\u0254n Er\u00e9k\u00f9s\u00f9 Sandwich"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Agb\u00e8gb\u00e8 \u00ccsh\u00e0k\u00f3so \u00ccsh\u00fan\u00e1 Hong Kong T\u00ed Sh\u00e1n\u00e0 \u0143 Dar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u0190r\u00e9k\u00f9s\u00f9 K\u00e1n\u00e1r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Iser\u025bli"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Ashilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"J\u0254dani"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kurishisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Guusu K\u0254ria"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Ariwa K\u0254ria"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kashashatani"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Lushia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"L\u025bshit\u025bnisiteni"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Etikun M\u00e1shali"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Agb\u00e8gb\u00e8 \u00ccsh\u00e0k\u00f3so P\u00e0t\u00e0k\u00ec Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Moshamibiku"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Etikun N\u0254\u0301\u00faf\u00f3k\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u0254\u0254wii"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Shilandi Titun"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0186\u0254ma"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Firenshi Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"P\u025b\u025bri ati mikuloni"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"P\u0254to Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Agb\u00e8gb\u00e8 ara Pal\u025bs\u00edt\u00edn\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"P\u0254\u0301t\u00fag\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Agb\u00e8gb\u00e8 \u00d2sh\u0254\u0301\u0254\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u0254shia"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Shesh\u025bl\u025bsi"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"H\u025blena"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"S\u025bn\u025bga"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao tomi ati piriishipi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0190\u025bs\u00e1f\u00e1d\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Sashiland"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"T\u0254\u0254ki ati Etikun Kak\u0254si"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Sh\u00e0\u00e0d\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Agb\u00e8gb\u00e8 G\u00fa\u00fas\u00f9 Faransh\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u00ccl\u00e0O\u00f2r\u00f9n T\u00edm\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u0254\u0254kimenisita"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunishia"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u0254\u0254ki"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u00c0w\u0254n Er\u00e9k\u00f9s\u00f9 K\u00e9k\u00e8k\u00e9 Agb\u00e8gb\u00e8 US"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u00ccsh\u0254\u0300kan \u00e0gb\u00e1y\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Am\u025brik\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Nshib\u025bkisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Fis\u025bnnti ati Genadina"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"F\u025bn\u025bshu\u025bla"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Etikun Fagini ti Am\u025brika"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"F\u025btinami"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Sam\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u00ecs\u0254\u0300r\u0254\u0300s\u00ed ir\u0254\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ibi ir\u0254\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"G\u00fa\u00fash\u00f9 \u00c1f\u00edr\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Shamibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Shimibabe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u00c0gb\u00e8gb\u00e8 \u00e0\u00ecm\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u00c8d\u00e8 S\u00edl\u00e1f\u00ed\u00edk\u00ec Il\u00e9 \u00ccj\u0254\u0301s\u00ecn"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u00c8d\u00e8 Il\u025b\u0300 Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u00c8d\u00e8 G\u025b\u0300\u025b\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ecsh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u00c8d\u00e8 Indon\u00e9sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"Sh\u00edku\u00e1n Y\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Kashak\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Kash\u00edmir\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"K\u0254dish\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u00c8d\u00e8 K\u0254\u0301n\u00ec\u00ecsh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"L\u00f9sh\u025b\u0301mb\u0254\u0301\u0254\u0300g\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"N\u0254\u0301\u0254\u0301w\u00e8 Bok\u00edm\u00e0l"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u00c8d\u00e8 D\u0254\u0301\u0254\u0300sh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"N\u0254\u0301\u0254\u0301w\u00e8 N\u00edn\u0254\u0300s\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u00d2r\u00f2m\u0254\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u0186sh\u025b\u0301t\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u00c8d\u00e8 P\u0254tog\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"K\u00fa\u025b\u0301\u0144j\u00f9\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"R\u00f3m\u00e1\u01f9sh\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u00c8d\u00e8 R\u0254\u0301sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Sh\u0254n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u00c8d\u00e8 T\u0254\u0254kisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Y\u00fag\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"F\u0254\u0301l\u00e1p\u00f9\u00f9k\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"W\u0254\u0301l\u0254\u0301\u0254\u0300f\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Ed\u00e8 Sh\u00e1\u00edn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u00c8d\u00e8 Shulu"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u00c8d\u00e8 \u00c1g\u025b\u0300\u025b\u0300m\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u00c8d\u00e8 B\u025b\u0301n\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u00c8d\u00e8 Sh\u025b\u0301r\u00f3ki\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"Sh\u00e1r\u00fam\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Sh\u00f3b\u00ed\u00e1n\u00f9 Ap\u00e1 \u00ccsh\u00e0l\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u00c8d\u00e8 \u0190mb\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"M\u00e1sh\u00e1m\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Koira Sh\u00ed\u00edn\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"K\u00e1l\u025bnj\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"Sh\u00e1\u0144b\u00e1l\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u0186l\u0254\u0301p\u0254\u0300 \u00e8d\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"J\u00e1m\u00e1n\u00ec \u00ecp\u00ecl\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"K\u00edw\u00e1sh\u00ed\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"N\u00fa\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0143y\u00e1k\u0254\u0301l\u00e8"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"P\u00far\u00fash\u00ed\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"Sh\u025bn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Tashel\u00ed\u00ect\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"T\u025b\u0301s\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u00c8d\u00e8 \u00e0\u00ecm\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"W\u0254s\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"Sh\u00f3g\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Yangb\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u00c0f\u025bn\u00f9k\u00f2 T\u00e1m\u00e1s\u00e1\u00ect\u00ec ti M\u00f2r\u00f3k\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u00c0m\u025b\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u00e8d\u00e8 il\u025b\u0300 R\u0254\u0301sh\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"D\u025bfanag\u00e1r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u0190ti\u00f3p\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"J\u0254\u0301j\u00ed\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"J\u0254\u0301j\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Han p\u025b\u0300l\u00fa Bopom\u00f3f\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"t\u00ed w\u0254\u0301n m\u00fa r\u0254r\u00f9n."_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Hans \u00e0t\u0254w\u0254\u0301d\u0254\u0301w\u0254\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u00ecl\u00e0n\u00e0 \u00e0f\u0254w\u0254\u0301k\u0254 ar\u00e1 J\u00e0p\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"K\u025bm\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u00c0m\u00ec \u00ccsh\u00e8s\u00ecr\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u00c0w\u0254n \u00e0m\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Aik\u0254sil\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"W\u0254\u0301p\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u00ccsh\u0254w\u0254\u0301k\u0254\u0300w\u00e9 \u00e0\u00ecm\u0254\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u00c8d\u00e8 J\u00e1m\u00e1n\u00ec (\u0186\u0301s\u00edr\u00ed\u00e0 )"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u00c8d\u00e8 Il\u025b\u0300 J\u00e1m\u00e1n\u00ec (Or\u00edl\u025b\u0301\u00e8de sw\u00edts\u00e0land\u00ec)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u00c8d\u00e8 G\u025b\u0300\u025b\u0301s\u00ec (\u00f3r\u00edl\u025b\u0300-\u00e8d\u00e8 \u0186sir\u00e9l\u00ed\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u00c8d\u00e8 G\u025b\u0300\u025b\u0301s\u00ec (Or\u00edl\u025b\u0300-\u00e8d\u00e8 K\u00e1n\u00e1d\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u00c8d\u00e8 \u00f2y\u00ecnb\u00f3 G\u025b\u0300\u025b\u0301s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ecsh\u00ec (or\u00edl\u025b\u0300-\u00e8d\u00e8 Y\u00far\u00f3\u00f2p\u00f9)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ecsh\u00ec (or\u00edl\u025b\u0300-\u00e8d\u00e8 M\u025b\u0301s\u00edk\u00f2)"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u00c8d\u00e8 Farans\u00e9 (or\u00edl\u025b\u0300-\u00e8d\u00e8 K\u00e1n\u00e1d\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u00c8d\u00e8 Faransh\u00e9 (S\u00faw\u00eds\u00e0la\u01f9d\u00ec)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u00c8d\u00e8 P\u0254tog\u00ed (Oril\u025b\u0300-\u00e8d\u00e8 Br\u00e0s\u00edl)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u00c8d\u00e8 P\u0254tog\u00ed (or\u00edl\u025b\u0300-\u00e8d\u00e8 Y\u00far\u00f3\u00f2p\u00f9)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u00c8d\u00e8 S\u00edp\u00e1n\u00ed\u00ecsh\u00ec (or\u00edl\u025b\u0300-\u00e8d\u00e8 L\u00e1t\u00ecn-Am\u025b\u0301r\u00edk\u00e0)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u00ccg\u00fanr\u00e9g\u00e9 K\u0254\u0301r\u025b\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u00c8t\u00f2 \u0190l\u025b\u0301s\u025b\u025bs\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"K\u0254\u0301r\u025b\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u00c8to \u00ccdiw\u0254\u0300n"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u0190d\u00e8 Sh\u00e1\u00edn\u00e0 On\u00edr\u0254\u0300r\u00f9n"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u00c8d\u00e8 Sh\u00e1\u00edn\u00e0 \u00ccb\u00edl\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u00e0w\u0254n d\u00edj\u00edt\u00ec L\u00e0rub\u00e1w\u00e1-\u00cdnd\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 \u00c0m\u025b\u0301n\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec B\u00e1\u0144g\u00edl\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ec\u00ect\u00ec Defanag\u00e1r\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 \u0190ti\u00f3p\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 J\u0254\u0301j\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 G\u00edr\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec G\u00f9j\u00e1r\u00e1t\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u00c0w\u0254n D\u00edj\u00ed\u00ect\u00ec Gurumuk\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 \u00ccr\u0254\u0300r\u00f9n ti Sh\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 \u00ccb\u00edl\u025b\u0300 Sh\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 H\u00e9b\u00e9r\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 J\u00e1p\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec K\u025b\u0301m\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec L\u00e1\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"D\u00edj\u00ed\u00edt\u00ec \u00ccw\u0254\u0300 O\u00f2r\u00f9n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec M\u00e1l\u00e0y\u00e1l\u00e1m\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec My\u00e1nmar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec \u00d2d\u00ed\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec \u00ccb\u00edl\u025b\u0300 T\u00e1m\u00edl\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec T\u00e9l\u00fag\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec Tibet\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u00c8t\u00f2 \u0190l\u025b\u0301s\u025b\u025bs\u025b \u00c0k\u00f9\u00e0y\u00e0n Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec R\u00f3m\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 H\u00e9b\u00e9r\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u00ccsh\u00e0w\u00e1r\u00ed \u00c8te-Gbogbogb\u00f2"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u00c8to M\u025b\u0301t\u00edr\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 ti Sh\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 L\u00e1r\u00fab\u00e1w\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 P\u00e1s\u00ed\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u00ccg\u00fanr\u00e9g\u00e9 \u00ccshir\u00f2 Ow\u00f3 K\u0254\u0301r\u025b\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u00c0w\u0254n D\u00edj\u00ed\u00ect\u00ec L\u00e1r\u00fab\u00e1w\u00e1-\u00cdnd\u00ed\u00e0 f\u00edf\u025b\u0300"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u00c0w\u0254n N\u0254\u0301\u0144b\u00e0 K\u00e9k\u00e8k\u00e9 ti Am\u025b\u0301r\u00edk\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u00c0w\u0254n N\u0254\u0301\u0144b\u00e0 G\u00edr\u00ed\u00eck\u00ec K\u00e9k\u00e8k\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 D\u025b\u0301s\u00edm\u00e0 Sh\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 \u00ccsh\u00fan\u00e1 \u00ccr\u0254\u0300r\u00f9n Sh\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 \u00ccsh\u00fan\u00e1 \u00ccb\u00edl\u025b\u0300 Sh\u00e1\u00ecn\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u00c0w\u0254n n\u0254\u0301\u0144b\u00e0 \u00ccsh\u00fan\u00e1 J\u00e0p\u00e1\u00e0n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec T\u00e0m\u00edl\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 \u0190t\u00ed\u00f3p\u00ed\u00eck\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 ti J\u00e0p\u00e1n\u00f9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u00ccg\u00fanr\u00e9g\u00e9 Gb\u00e8d\u00e9ke K\u0254\u0301r\u025b\u0301\u0144s\u00ec"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u00c8to \u00ccdiw\u0254\u0300n \u0186ba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u00c8to \u00ccdiw\u0254\u0300n US"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u00c0w\u0254n D\u00edj\u00ed\u00ect\u00ec F\u00edf\u025b\u0300-\u0190\u0300k\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u00c0w\u0254n d\u00edj\u00ed\u00ect\u00ec R\u00f3m\u00e1n\u00f9 K\u00e9ker\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"K\u00e0l\u025b\u0301\u0144d\u00e0 Gregory"_s)
		})
	}));
	return data;
}

LocaleNames_yo_BJ::LocaleNames_yo_BJ() {
}

$Class* LocaleNames_yo_BJ::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_yo_BJ, name, initialize, &_LocaleNames_yo_BJ_ClassInfo_, allocate$LocaleNames_yo_BJ);
	return class$;
}

$Class* LocaleNames_yo_BJ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun