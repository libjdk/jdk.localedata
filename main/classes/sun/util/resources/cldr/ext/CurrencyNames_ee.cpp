#include <sun/util/resources/cldr/ext/CurrencyNames_ee.h>

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

$MethodInfo _CurrencyNames_ee_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ee::*)()>(&CurrencyNames_ee::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ee_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ee",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ee_MethodInfo_
};

$Object* allocate$CurrencyNames_ee($Class* clazz) {
	return $of($alloc(CurrencyNames_ee));
}

void CurrencyNames_ee::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ee::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("ANG"_s),
			$of("ANG"_s)
		}),
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AU$"_s)
		}),
		$$new($ObjectArray, {
			$of("AWG"_s),
			$of("AWG"_s)
		}),
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of("BAM"_s)
		}),
		$$new($ObjectArray, {
			$of("BBD"_s),
			$of("BBD"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("BMD"_s),
			$of("BMD"_s)
		}),
		$$new($ObjectArray, {
			$of("BOB"_s),
			$of("BOB"_s)
		}),
		$$new($ObjectArray, {
			$of("BSD"_s),
			$of("BSD"_s)
		}),
		$$new($ObjectArray, {
			$of("BYN"_s),
			$of("BYN"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZD"_s)
		}),
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("COP"_s)
		}),
		$$new($ObjectArray, {
			$of("CRC"_s),
			$of("CRC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUC"_s),
			$of("CUC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUP"_s),
			$of("CUP"_s)
		}),
		$$new($ObjectArray, {
			$of("CZK"_s),
			$of("CZK"_s)
		}),
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("DKK"_s)
		}),
		$$new($ObjectArray, {
			$of("DOP"_s),
			$of("DOP"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
		}),
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of(u"GH\u20b5"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of("GIP"_s)
		}),
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("GTQ"_s)
		}),
		$$new($ObjectArray, {
			$of("GYD"_s),
			$of("GYD"_s)
		}),
		$$new($ObjectArray, {
			$of("HNL"_s),
			$of("HNL"_s)
		}),
		$$new($ObjectArray, {
			$of("HRK"_s),
			$of("HRK"_s)
		}),
		$$new($ObjectArray, {
			$of("HTG"_s),
			$of("HTG"_s)
		}),
		$$new($ObjectArray, {
			$of("HUF"_s),
			$of("HUF"_s)
		}),
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("IDR"_s)
		}),
		$$new($ObjectArray, {
			$of("ISK"_s),
			$of("ISK"_s)
		}),
		$$new($ObjectArray, {
			$of("JMD"_s),
			$of("JMD"_s)
		}),
		$$new($ObjectArray, {
			$of("KYD"_s),
			$of("KYD"_s)
		}),
		$$new($ObjectArray, {
			$of("MDL"_s),
			$of("MDL"_s)
		}),
		$$new($ObjectArray, {
			$of("MKD"_s),
			$of("MKD"_s)
		}),
		$$new($ObjectArray, {
			$of("NIO"_s),
			$of("NIO"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("NOK"_s)
		}),
		$$new($ObjectArray, {
			$of("PAB"_s),
			$of("PAB"_s)
		}),
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("PYG"_s),
			$of("PYG"_s)
		}),
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of("RSD"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("SAR"_s),
			$of("SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("SEK"_s)
		}),
		$$new($ObjectArray, {
			$of("SRD"_s),
			$of("SRD"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"\u0e3f"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TRY"_s)
		}),
		$$new($ObjectArray, {
			$of("TTD"_s),
			$of("TTD"_s)
		}),
		$$new($ObjectArray, {
			$of("UAH"_s),
			$of("UAH"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("UYU"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("ZAR"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("andorraga peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("united arab emiratesga dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afghanistanga afghani (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghanistanga afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"albaniaga lek (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albaniaga lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armeniaga dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("netherlands antilleaga guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolaga kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"angolaga kwanza (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"angolaga kwanza (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"angolaga kwanza xoxot\u0254 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("argentinaga austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"argentinaga peso ley (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"argentinaga peso (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"argentinaga peso (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentinaga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0254striaga schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australiaga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("arubaga lorin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"azerbaidzanga manat (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("azerbaidzanga manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"bosnia-herzegovinaga dinar (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("bosnia-herzegovinaga convertible mark"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"bosnia kple herzegovinaga dinar yey\u00e8t\u0254 (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("barbadosga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("bangladeshga taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("beldziumga franc (convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("beldziumga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("beldziumga franc (financial)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"b\u0254lgariaga hard lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"b\u0254lgariaga socialist lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("bulgariaga lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"bulgariaga lev (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bahrainga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundiga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("bermudaga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("bruneiga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviaga boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"boliviaga boliviano (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("boliviaga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("boliviaga mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"braziliaga cruzeiro xoxot\u0254 (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"brazilia cruzado (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"braziliaga cruzeiro xoxot\u0254 gb\u00e3t\u0254 (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("braziliaga real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"brazilia cruzado xoxot\u0254 (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"braziliaga cruzeiro (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"braziliaga cruzeiro (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("bahamasga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("bhutanga ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("burmaga kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswanaga pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"belarusiaga ruble yeyt\u0254 (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("belarusiaga ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"belarusiaga ruble (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizega dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("canadaga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("kongoga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR euro CHE"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("switzerlandga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR euro CHW"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of("tsilega escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"tsilegak\u0254nta dzidzenu UF"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilega peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"tsainat\u0254wo \u0192e gadzra\u0256o\u0192e dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Chinesega yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("colombiaga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"kolombiaga vav\u00e3t\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"costa ricaga col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"serbiaga dinar (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"ts\u025bkoslovakiaga hard koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("cubaga convertible peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("cubaga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kape verdega escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"saipri\u0254tga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("czechga koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0263edze\u0192e germaniaga mark"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("germaniaga mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("dziboutiga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("denmarkga krone"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominicaga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("aldzeriaga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"ekuad\u0254ga sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"ekuad\u0254 dzidzenu matr\u0254matr\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("estoniaga kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyptega pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritreaga nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("spaniaga peseta (A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("spaniaga peseta (Convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("spaniaga peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("ethiopiaga birr"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("finlandga markka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("fidziga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("falkland islands pound"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("frentsiga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("britainga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"dz\u0254dziaga kupon larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"dz\u0254dziaga lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ghana si\u0256i (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ghana si\u0256i"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("gilbratarga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambiaga dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("giniga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("giniga syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("ekuatorial giniga ekwele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("grisiga drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalaga quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"p\u0254tugalt\u0254wo \u0192e giniga escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("gini-bisau peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("guyanaga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hong Kongga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("honduraga lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("kroatiaga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("croatiaga kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haitiga gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("hungariaga forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Indonesiaga rupiah"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("ireland pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("israelga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"israelga sheqel (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"israelga yeyet\u0254 sheqel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indiaga rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("irakga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("iranga rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"aiselandga kr\u00f3na (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"icelandga kr\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("italiaga lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("jamaicaga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"y\u0254danga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanesega yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("kenyaga shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirgistanga som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("kambodiaga riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("komoroga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("dziehe koreaga won"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"anyiehe koreaga hwan (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"anyiehe koreaga won (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("South Koreaga won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("cayman islandsga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kazakhstanga tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laosga kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("lebanonga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("sri lankaga rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberiaga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("lesotoga loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("lithuaniaga litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("lithuaniaga talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"lazemb\u0254gga convertible franc"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"lazemb\u0254gga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"lazemb\u0254gga gadzikp\u0254 franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("latviaga lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("latviaga ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libyaga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("morokoga dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("morokoga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("monegaskga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of("moldovaga cupon"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldovaga leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("malagasega ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("malagasega franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("marcedoniaga denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"makedoniaga denar (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("maliga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("myanmaga kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("mongoliaga tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("makanesega pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"m\u0254ritaniaga ouguiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"m\u0254ritaniaga ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("maltaga lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("maltaga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"m\u0254ritiusga rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("maldiviaga rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("mexicoga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malaysiaga ringit"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naidzeriaga naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"nikaraguaga c\u00f3rdoba (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nicaraguaga c\u00f3rdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("hollandga guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("norwayga krone"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalga rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"new zealan\u0256ga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("omanga rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamaga balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("peruga inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("peruga sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"peruga sol (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("papua new guineaga kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filipiniga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakistaniga rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("polandga zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"polan\u0256ga zloty (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"p\u0254tugalga escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguayga guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("katarga rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("rhodesiaga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"romaniaga leu (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("romaniaga leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("serbiaga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("russiaga ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"r\u0254tsiaga ruble (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("rwandaga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudi Arabiaga riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"solomon \u0192udomekpo duk\u0254wo \u0192e ga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"s\u025btselsga rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"sudanga dinar (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudanga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"sudanga pound (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("swedenga krone"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"singap\u0254ga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("saint helenaga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("slovaniaga tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("slovakga koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("sierra leonega leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("somaliaga shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("surinamga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("surinamega guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"s\u00e3o tom\u00e9 kple pr\u00edncipega dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"s\u00e3o tom\u00e9 kple pr\u00edncipega dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("sovietga rouble"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"salvad\u0254ga col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("syriaga pound"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("swaziga lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Thailandga baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("tajikistanga ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("tajikistanga somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"turkmenistanga manat (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("turkmenistanga manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunisiaga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tonagaga pa\u2019anga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"tim\u0254ga escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"t\u025bkiiga lira (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turkishga lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("trinidad & tobagoga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Taiwanga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanzaniat\u0254wof\u025bgadudu"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukrainega hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("ukrainega karbovanet"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"ugandaga shilling (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("ugandaga shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("us ga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"us ga dollar (\u014bkeke si gb\u0254na t\u0254)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"us ga dollar (\u014bkeke ma ke t\u0254)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("uruguayga peso UYI"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"uruguayga peso (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguayga peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("uzbekistanga som"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"venezuelaga bol\u00edvar (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelaga bol\u00edvar (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"venezuelaga bol\u00edvar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("vietnamga dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"vietnamga dong (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatuga vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("samaoga tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u0263eto\u0256ofe afrikaga CFA franc BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("klosalo"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("sika"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("europa dzidzenu xba"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("europa gadzidzenu xbb"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"europa k\u0254nta dzidzenu xbc"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"europa k\u0254nta dzidzenu xbd"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("east caribbeanga dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"ga\u0256u\u0256u \u0256o\u0256o t\u0254x\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"europa ga\u0256u\u0256u"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("fransemega sika franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("frentsi UIC-franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u0263eto\u0256ofe afrikaga CFA franc BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("palladiumga"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP ga franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platinum"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET gadodo XRE"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"ga\u0256u\u0256u dodokp\u0254 dzesi xts"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ga\u0256u\u0256u manya"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("yemeniga dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("yemeniga rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"yugoslaviaga hard dinar (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"yugoslaviaga yeyet\u0254 dinar (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"yugoslaviaga convertible dinar (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"yugoslaviaga dinar (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"anyiehe afrikaga rand (gadzikp\u0254t\u0254)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("South Africaga rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"zambiaga kwacha (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("zambiaga kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"zairega yeyet\u0254 zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"zairega zaire (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"zimbabwega dollar (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("zimbabwega dollar (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("zimbabwega dollar (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ee::CurrencyNames_ee() {
}

$Class* CurrencyNames_ee::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ee, name, initialize, &_CurrencyNames_ee_ClassInfo_, allocate$CurrencyNames_ee);
	return class$;
}

$Class* CurrencyNames_ee::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun