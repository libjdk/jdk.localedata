#include <sun/util/resources/cldr/ext/CurrencyNames_pt_PT.h>

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

$MethodInfo _CurrencyNames_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_pt_PT::*)()>(&CurrencyNames_pt_PT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_pt_PT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt_PT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_PT_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_PT($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_PT));
}

void CurrencyNames_pt_PT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_PT::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("LTL"_s),
			$of("LTL"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("LVL"_s)
		}),
		$$new($ObjectArray, {
			$of("PTE"_s),
			$of(u"\u200b"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dirham dos Emirados \u00c1rabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afeghani (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afeg\u00e2ni afeg\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"lek alban\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"dram arm\u00e9nio"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("florim das Antilhas Holandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolano"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"d\u00f3lar australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("florim de Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azeri"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Dinar da B\u00f3snia-Herzeg\u00f3vina"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"marco b\u00f3snio-herzeg\u00f3vino convers\u00edvel"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"d\u00f3lar barbadense"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Franco belga (convert\u00edvel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"lev b\u00falgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinar baremita"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franco burundiano"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"d\u00f3lar bermudense"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"d\u00f3lar bruneano"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasileiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"d\u00f3lar das Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ngultrum butan\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula de Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Rublo novo bielorusso (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("rublo bielorrusso"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"d\u00f3lar belizense"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"d\u00f3lar canadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"franco congol\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"franco su\u00ed\u00e7o"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("yuan offshore"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("colon costa-riquenho"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"peso cubano convers\u00edvel"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo cabo-verdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Libra de Chipre"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("coroa checa"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franco jibutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("coroa dinamarquesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar argelino"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Unidad de Valor Constante (UVC) do Equador"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"libra eg\u00edpcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa eritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"birr et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"d\u00f3lar fijiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("libra das Ilhas Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"libra esterlina brit\u00e2nica"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("lari georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"cedi gan\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("libra de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("franco guineense"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal da Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"d\u00f3lar da Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"d\u00f3lar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira das Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("gourde haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"forint h\u00fangaro"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"rupia indon\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("sheqel novo israelita"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar iraquiano"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("rial iraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("coroa islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"d\u00f3lar jamaicano"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar jordaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"iene japon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("xelim queniano"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som quirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel cambojano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franco comoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("won norte-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won sul-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("dinar kuwaitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"d\u00f3lar das Ilhas Caim\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge cazaque"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libra libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia do Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"d\u00f3lar liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Litas da Litu\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Lats da Let\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"dinar l\u00edbio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marroquino"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariari malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"dinar maced\u00f3nio"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat de Mianmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca macaense"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya mauritana (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya mauritana"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia mauriciana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rupia maldivana"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malauiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Peso Plata mexicano (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Unidad de Inversion (UDI) mexicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"metical mo\u00e7ambicano"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"d\u00f3lar namibiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"C\u00f3rdoba nicaraguano (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"c\u00f3rdoba nicaraguano"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("coroa norueguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"d\u00f3lar neozeland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("rial omanense"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balboa do Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("sol peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina papu\u00e1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("rupia paquistanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloti polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"escudo portugu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("guarani paraguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial catarense"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"dinar s\u00e9rvio"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rublo russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"franco ruand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"d\u00f3lar das Ilhas Salom\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia seichelense"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("libra sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("coroa sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"d\u00f3lar singapuriano"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("libra santa-helenense"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone de Serra Leoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("xelim somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"d\u00f3lar do Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("libra sul-sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra de S\u00e3o Tom\u00e9 e Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"libra s\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"lilangeni su\u00e1zi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tailand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tajique"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("manat turcomeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunisino"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa\u02bbanga tonganesa"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"d\u00f3lar de Trindade e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"novo d\u00f3lar taiwan\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("xelim tanzaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("hryvnia ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("xelim ugandense"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"d\u00f3lar dos Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som uzbeque"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bol\u00edvar (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bol\u00edvar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu de Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franco CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"d\u00f3lar das Cara\u00edbas Orientais"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franco CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("moeda desconhecida"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("rial iemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sul-africano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha zambiano (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambiano"_s)
		})
	}));
	return data;
}

CurrencyNames_pt_PT::CurrencyNames_pt_PT() {
}

$Class* CurrencyNames_pt_PT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_PT, name, initialize, &_CurrencyNames_pt_PT_ClassInfo_, allocate$CurrencyNames_pt_PT);
	return class$;
}

$Class* CurrencyNames_pt_PT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun