#include <sun/util/resources/cldr/ext/CurrencyNames_ha.h>

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

$MethodInfo _CurrencyNames_ha_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ha::*)()>(&CurrencyNames_ha::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ha_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ha",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ha_MethodInfo_
};

$Object* allocate$CurrencyNames_ha($Class* clazz) {
	return $of($alloc(CurrencyNames_ha));
}

void CurrencyNames_ha::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ha::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of(u"\u20a6"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Ku\u0257in Ha\u0257a\u0257\u0257iyar Daular Larabawa"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Afghani na \u0199asar Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Ku\u0257in Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Ku\u0257in Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Antillean Guilder na \u0199asar Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Ku\u0257in Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Peso na \u0199asar Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dalar Ostareliya"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Florin na yankin Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Ku\u0257in Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Ku\u0257a\u0257en Bosnia da Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Dalar \u0199asar Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Taka na \u0199asar Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Ku\u0257in Bulgeria"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Ku\u0257in Baharan"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Ku\u0257in Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Dalar \u0199asar Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Dalar Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Boloviano na \u0199asar Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Ril Kudin Birazil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Dalar \u0199asar Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Ngultrum na \u0199asar Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Ku\u0257in Baswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Ku\u0257in Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Dalar \u0199asar Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dalar Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Ku\u0257in Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Ku\u0257in Suwizalan"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Peso na \u0199asar Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Yuwan na \u0199asar Sin (na wajen \u0199asa)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuwan na \u0199asar Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Peso na \u0199asar Columbia"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Col\u00f3n na \u0199asar Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Peso mai fuska biyu na \u0199asar Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Peso na \u0199asar Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Ku\u0257in Tsibiran Kap Barde"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Ku\u0257in Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Ku\u0257in Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Krone na \u0199asar Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso na jamhuriyar Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Ku\u0257in Aljeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Fam kin Masar"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Ku\u0257in Eritireya"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Ku\u0257in Habasha"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Dalar Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Fam na \u0199asar Tsibirai na Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Fam na Ingila"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"Ku\u0257in Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Sidi na Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Ku\u0257in Gibraltal"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Ku\u0257in Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Ku\u0257in Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Ku\u0257in Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Quetzal na \u0199asar Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Dalar Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Dalar Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Lempira na \u0199asar Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Ku\u0257in Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Gourde na \u0199asar Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Ku\u0257in Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Rupiah na \u0199asar Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Sabbin Ku\u0257in Isra\u02bcila"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Ku\u0257in Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinarin Iraqi"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Riyal na \u0199asar Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Kr\u00f3na na \u0199asar Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Dalar Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinarin Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yen na \u0199asar Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Sulen Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Som na \u0199asar Kyrgystani"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Riel na \u0199asar Cambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Ku\u0257in Kwamoras"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"won na \u0199asar Koriya ta Arewa"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won na Koriya ta Kudu"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinarin Kuwaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Dalar \u0199asar Tsibirai na Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Tenge na \u0199asar Kazkhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Ku\u0257in Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Ku\u0257in Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Rupee na \u0199asar Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dalar Laberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Ku\u0257in Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Ku\u0257in Libiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Ku\u0257in Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"ku\u0257a\u0257en Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Ku\u0257in Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Dinarin Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Ku\u0257in Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik na Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Pataca na \u0199asar Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ku\u0257in Moritaniya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ku\u0257in Moritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Ku\u0257in Moritus"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Rufiyaa na \u0253asar Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Ku\u0257in Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Peso na \u0199asar Mekziko"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Ku\u0257in Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Ku\u0257in Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Metical na \u0199asar Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dalar Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nairar Najeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"C\u00f3rdoba na \u0199asar Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Krone na \u0199asar Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupee na Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Dalar New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Riyal \u0257in Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Balboa na \u0199asar Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Sol na \u0199asar Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Kina na \u0199asar Papua Sabon Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Ku\u0257in Philippine"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Rupee na \u0199asar Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Ku\u0257in Polan"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Guarani na \u0199asar Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Riyal \u0257in Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Ku\u0257in Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinarin Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Ruble na \u0199asar Rasha"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Ku\u0257in Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Dalar Tsibirai na Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Ku\u0257in Saishal"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Fam na Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Krona na \u0199asar Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Dalar Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Fam kin San Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Ku\u0257in Salewo"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Sulen Somaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Dalar \u0199asar Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Fam na Kudancin Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Ku\u0257in Sawo Tome da Paransip (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Ku\u0257in Sawo Tome da Paransip"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Ku\u0257in Siriya"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Ku\u0257in Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Baht na \u0199asar Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Somoni na \u0199asar Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Manat na \u0199asar Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Ku\u0257in Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Pa\u02bbanga na \u0199asar Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"Ku\u0257in Turkiyya"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Dalar \u0199asar Trinidad da Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Sabuwar Dalar Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Sulen Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Kudin Ukrainian"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Sule Yuganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dalar Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Peso na \u0199asar Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Som na \u0199asar Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Bol\u00edvar na \u0199asar Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"Ku\u0257in Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"Vatu da \u0199asar Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Tala na \u0199asar Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Ku\u0257in Sefa na Afirka Ta Tsakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Dalar Gabashin Karebiyan"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Ku\u0257in Sefa na Afirka Ta Yamma"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"Ku\u0257in CFP franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Kudin da ba a sani ba"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Riyal \u0257in Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Ku\u0257in Afirka Ta Kudu"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Ku\u0257in Zambiya (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Ku\u0257in Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Dalar zimbabuwe"_s)
		})
	}));
	return data;
}

CurrencyNames_ha::CurrencyNames_ha() {
}

$Class* CurrencyNames_ha::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ha, name, initialize, &_CurrencyNames_ha_ClassInfo_, allocate$CurrencyNames_ha);
	return class$;
}

$Class* CurrencyNames_ha::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun