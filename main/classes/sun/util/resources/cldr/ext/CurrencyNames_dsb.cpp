#include <sun/util/resources/cldr/ext/CurrencyNames_dsb.h>

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

$MethodInfo _CurrencyNames_dsb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_dsb::*)()>(&CurrencyNames_dsb::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_dsb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_dsb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_dsb_MethodInfo_
};

$Object* allocate$CurrencyNames_dsb($Class* clazz) {
	return $of($alloc(CurrencyNames_dsb));
}

void CurrencyNames_dsb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_dsb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AUD"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("KPW"_s),
			$of("KPW"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of(u"z\u0142"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"\u0e3f"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("andorraska peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("ZAE dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghaniski afgani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"alba\u0144ski lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"arme\u0144ski dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ni\u017eozemsko-antilski gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolska kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"angolska kwanza (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"angolska nowa kwanza (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"angolska kwanza reajustado (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("argentinski austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"argentinski peso (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentinski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"rakuski \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("awstralski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("aruba-florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"azerbajd\u017eaniski manat (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"azerbajd\u017eaniski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("bosniski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("bosniska konwertibelna marka"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("barbadoski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"banglade\u0161ska taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("belgiski frank (konwertibelny)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("belgiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("belgiski financny frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"bulgarski lew (1962\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("bulgarski lew"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bahrainski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("bermudaski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("bruneiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliwiski boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("boliwiski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("boliwiski mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"brazilski nowy cruzeiro (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"brazilski cruzado (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"brazilski cruzeiro (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brazilski real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"brazilski nowy cruzado (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"brazilski cruzeiro (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("bahamaski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"bhuta\u0144ski ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("burmaski kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswaniska pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"b\u011b\u0142oruski rubl (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"b\u011b\u0142oruski rubl"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"b\u011b\u0142oruski rubl (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizeski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kanadiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("kongoski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0161wicarski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("chinski yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kolumbiski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"kosta-rika\u0144ski col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"kuba\u0144ski konwertibelny peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"kuba\u0144ski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kapverdski escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u010deska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"d\u017aibutiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"da\u0144ska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"dominika\u0144ski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("algeriski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyptojski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritrejska nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopiski birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"fid\u017aiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("falklandski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("britiski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("georgiski lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("ghanaski cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("gibraltiski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambiski dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("guineski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalski quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissau peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"guya\u0144ski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("hongkongski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("honduraska lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("chorwatska kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haitiska gourda"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"mad\u017aarski forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indoneska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"israelski nowy \u0161ekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indiska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("irakski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ira\u0144ski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("islandska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("jamaiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("jordaniski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"japa\u0144ski yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"keniaski \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirgiski som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"kambod\u017easki riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("komorski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"p\u00f3dpo\u0142nocnokorejski won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"p\u00f3dpo\u0142dnjowokorejski won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("kajmaniski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kazachski tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laoski kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"libano\u0144ski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("sri-lankaska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litawski litas"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("letiski lat"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libyski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("marokkoski dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldawiski leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("madagaskarski ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"makedo\u0144ski denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("myanmarski kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("mongolski tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("macaoska pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"maureta\u0144ski ouguiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"maureta\u0144ski ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("mauriciska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("malediwiska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawiski kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("mexiski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malajziski ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozabicke escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"mosambikski metical (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mosambikski metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namibiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("nigeriska naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("nikaraguaska cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("norwegska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("nowoseelandski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"oma\u0144ski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamaski balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("peruski sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("papua-neuguinejska kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filipinski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"pakista\u0144ska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"p\u00f3lski z\u0142oty"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguayski guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("katarski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rumu\u0144ski leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("serbiski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("ruski rubl"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("ruandiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudi-arabiski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"salomo\u0144ski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("seychelska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"suda\u0144ski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0161wedska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("singapurski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("St. Helena punt"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("sierra-leoneski leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"somaliski \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("surinamski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"p\u00f3dpo\u0142dnjowosuda\u0144ski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"s\u00e3o-tomeska dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"s\u00e3o-tomeska dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"el-salvadorski col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("syriski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("swasiski lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("thaiski baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"tad\u017aikiski somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("turkmeniski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tuneziski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tongaski pa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("turkojska lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("trinidad-tobagoski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nowy taiwa\u0144ski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"tansaniski \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukrainska griwna"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ugandaski \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("ameriski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguayski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("usbekiski sum"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelski bol\u00edvar (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"venezuelski bol\u00edvar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("vietnamski dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatski vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("samoaska tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA-frank (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"p\u00f3dzajt\u0161nokaribiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA-frank (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP-frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("njeznate pjenjeze"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"jeme\u0144ski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"p\u00f3dpo\u0142dnjowoafriski rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("sambiska kwacha"_s)
		})
	}));
	return data;
}

CurrencyNames_dsb::CurrencyNames_dsb() {
}

$Class* CurrencyNames_dsb::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_dsb, name, initialize, &_CurrencyNames_dsb_ClassInfo_, allocate$CurrencyNames_dsb);
	return class$;
}

$Class* CurrencyNames_dsb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun