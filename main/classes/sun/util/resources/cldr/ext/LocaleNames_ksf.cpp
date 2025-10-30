#include <sun/util/resources/cldr/ext/LocaleNames_ksf.h>

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

$MethodInfo _LocaleNames_ksf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ksf::*)()>(&LocaleNames_ksf::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ksf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ksf",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ksf_MethodInfo_
};

$Object* allocate$LocaleNames_ksf($Class* clazz) {
	return $of($alloc(LocaleNames_ksf));
}

void LocaleNames_ksf::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ksf::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"and\u0254r\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"b\u01ddl\u0254\u014b b\u01dd kaksa b\u025b t\u00e1at\u00e1a\u014bz\u01ddn"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"afganist\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"antiga ri barb\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("angiya"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"alban\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"arm\u025bn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ang\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"arj\u01ddnt\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"sam\u0254a a am\u025brika"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("otric"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0254stral\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"azabec\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"b\u0254sny\u025b ri h\u025brs\u01ddg\u0254v\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"baabaad\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ba\u014blad\u025b\u0301c"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"b\u025blj\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"buk\u00edna f\u01dd\u0301 as\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"bulgar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"bar\u01dd\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"burund\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"b\u025bn\u01dd\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"b\u025b\u025bm\u00fad\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"brun\u01dd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"b\u0254\u0254l\u00edv\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"br\u025bs\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"baam\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"but\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"b\u025blaris"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"b\u025bliz"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"k\u0254ng\u00f3 any\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"santrafr\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"k\u0254ng\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"sw\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"k\u0254tiwu\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"z\u025b i k\u00fak"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"c\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"kam\u025br\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"c\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"kol\u0254mb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"k\u0254star\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"kapv\u025br"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"c\u00edpr\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"c\u025b\u0301k"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"dj\u025brman"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"dyibut\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("danmak"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"d\u0254minik"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"d\u0254minik r\u025bpubl\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"alj\u025br\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u025bkwat\u025b\u01dd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u025bston\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u025bj\u00edpt"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u025britr\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"kpany\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u025bty\u0254p\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"f\u00ednlan"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"f\u00edji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"z\u01dd maalw\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"mikron\u025b\u0301si"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"p\u025br\u025bs\u01dd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"gab\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"k\u01ddl\u0254\u014b k\u01dd k\u01ddt\u00e1at\u00e1a\u014bz\u01ddn"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"gr\u025bnad\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"j\u0254rj\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"guy\u00e1n i p\u025br\u025bs\u01dd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"g\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"jibralt\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"gr\u00ednlan"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"gamb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"gin\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"gwad\u025bl\u00fap"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"gin\u025b\u0301 \u025bkwat\u0254rial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"gr\u025b\u0301k"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"gw\u00e1t\u01ddmala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"gw\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"gin\u025b\u0301 bis\u0254\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"guy\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0254nduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"krwas\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("ayiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u0254ngr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"indon\u025bs\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"il\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"isra\u025b\u0301l"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ind\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"z\u01dd ing\u025br\u00eds nc\u0254\u0301m wa indi"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ir\u00e1k"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ir\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"z\u01dd i gl\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ital\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"jama\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"j\u0254rd\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"jap\u0254\u0301\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"k\u025bnya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"kigist\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("kambodj"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"kirib\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"kom\u0254r"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"s\u025bnkr\u01ddst\u0254\u0301f ri ny\u025b\u0301v\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"kor\u025ban\u0254\u0301r"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"kor\u025basud"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"kuw\u025bit"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"z\u01dd i gan"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"kazakst\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"la\u0254s"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"lib\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"s\u025bntl\u00eds\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"lict\u025bnst\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"sr\u00edla\u014bka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"lib\u025brya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"l\u01dds\u00f3to"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"litwan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"luks\u025bmb\u00far"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"l\u025bton\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"lib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"mar\u0254k"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"m\u0254ldav\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("madagaska"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"z\u01dd i marc\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"myanm\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"m\u0254\u014bol\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"z\u01dd mary\u00e1nn\u0254\u0301r"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"matin\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"mwaritan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"m\u0254ns\u025brat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"malt\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"mwar\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"maldiv\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"m\u025bks\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"mal\u025bs\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"mosamb\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"namib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"kal\u025bdon\u00ed any\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"nij\u025b\u0301r"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"z\u025b n\u0254\u0301f\u0254lk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"nij\u025b\u0301rya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"n\u00edkar\u00e1gwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"k\u01ddl\u0254\u014b k\u01dd \u00e1z\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"n\u0254rv\u025bj\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"n\u025bpal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"nwar\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"niw\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"z\u025blan any\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("oman"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"p\u025br\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"p\u0254lin\u025bs\u00ed a p\u025br\u025bs\u01dd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"papwaz\u00ed gin\u025b\u0301 any\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"filip\u01dd\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"pakist\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"pol\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"s\u025bnpy\u025br ri mik\u025bl\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"pitk\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"p\u0254tor\u00edko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"z\u01dd pal\u025bst\u00edn\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"portug\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("palwa"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"paragw\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"kat\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"r\u025buny\u0254\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"r\u0254man\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ris\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"arab\u00ed saod\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"z\u01dd salom\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"s\u025bc\u025bl"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"sw\u025bd\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"si\u014bap\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"s\u025bnt\u025b\u0301len"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"slov\u025bn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"slovak\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"sy\u025braleon"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"s\u025bnmar\u01ddn"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"s\u025bn\u025bgal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"somal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"saotom\u025b\u0301 ri pri\u014bsib"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"salvad\u0254r"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"sir\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("swazilan"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"z\u01dd tirk ri kak\u0254s"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ca\u00e1d"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"t\u025blan"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"tadjikista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"tok\u01ddlao"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"timor an\u01dd \u00e1 \u025bst"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"tirkm\u025bnista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"tun\u025bs\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"t\u0254\u014ba"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"tirk\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"t\u025brinit\u025b ri tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("tuwalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"t\u025bw\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"tanzan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("ukrain"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"am\u025brika"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"urugw\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"usb\u025bkista\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"watik\u00e1\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"s\u025bnv\u01ddns\u01dd\u014b ri gr\u025bnad\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"w\u025bn\u01ddzw\u025bla"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"z\u01dd b\u025b g\u0254n in\u025b a ing\u025br\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"z\u01dd b\u025b g\u0254n in\u025b \u00e1 am\u025brika"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"wy\u025btn\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("wanwatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("walis ri futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"sam\u0254a"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"y\u025bm\u025bn"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"may\u0254\u0301t"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"afrik an\u01dd a sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"zamb\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"zimbabw\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("riakan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("riamarik"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("riarab"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"rib\u025bl\u0254r\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ribulgar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"rib\u025bng\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ric\u025b\u0301k"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ridj\u025brman"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"rigr\u025b\u0301k"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"riing\u025br\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"rikpany\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"rip\u025brs\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"rip\u025br\u025bs\u01dd\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("rikaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ri\u00ednd\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ri\u0254ngr\u0254\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"riindon\u025bs\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("riigbo"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"riitaly\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"rijap\u0254\u0301\u014b"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"rijawan\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"rikm\u025br"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"rik\u0254r\u025b\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"rimala\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ribirm\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"rinepal\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ri\u0254l\u00e1nd\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"rip\u025bnjab\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"rip\u0254l\u0254\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"rip\u0254rtug\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rir\u0254m\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rir\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("rirwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"risomal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"risw\u025b\u0301d\u01dd"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"ritam\u00fal"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"rita\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("riturk"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"riukr\u025b\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"riurd\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"riwy\u025btn\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"riy\u00fauba"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ricin\u0254\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"riz\u00falu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("rikpa"_s)
		})
	}));
	return data;
}

LocaleNames_ksf::LocaleNames_ksf() {
}

$Class* LocaleNames_ksf::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ksf, name, initialize, &_LocaleNames_ksf_ClassInfo_, allocate$LocaleNames_ksf);
	return class$;
}

$Class* LocaleNames_ksf::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun