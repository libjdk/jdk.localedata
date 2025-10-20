#include <sun/util/resources/ext/CurrencyNames_es.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_es::*)()>(&CurrencyNames_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_MethodInfo_
};

$Object* allocate$CurrencyNames_es($Class* clazz) {
	return $of($alloc(CurrencyNames_es));
}

void CurrencyNames_es::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("peseta andorrana"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"d\u00edrham de los Emiratos \u00c1rabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("afgani (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afgani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"lek alban\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("dram armenio"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"flor\u00edn de las Antillas Neerlandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kwanza angole\u00f1o"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"chel\u00edn austriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"d\u00f3lar australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"flor\u00edn de Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat azer\u00ed (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"manat azer\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("marco convertible de Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"d\u00f3lar de Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka de Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franco belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lev fuerte b\u00falgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"nuevo lev b\u00falgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahrein\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franco de Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"d\u00f3lar de Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"d\u00f3lar de Brun\u00e9i"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("MVDOL boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"real brasile\u00f1o"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"d\u00f3lar de las Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ngultrum butan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula botsuano"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of("nuevo rublo bielorruso (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of("rublo bielorruso"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"d\u00f3lar de Belice"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"d\u00f3lar canadiense"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"franco congole\u00f1o"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franco suizo"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("unidad de fomento chilena"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan renminbi chino"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"col\u00f3n costarricense"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("antiguo dinar serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cubano convertible"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo de Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("libra chipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("corona checa"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"marco alem\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franco de Yibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("corona danesa"_s)
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
			$of("eek"_s),
			$of("corona estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("libra egipcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa eritreo"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"peseta espa\u00f1ola"_s)
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
			$of("fim"_s),
			$of(u"marco finland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"d\u00f3lar de las Islas Fiyi"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("libra de las Islas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"franco franc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"libra esterlina brit\u00e1nica"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("lari georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cedi ghan\u00e9s (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"cedi ghan\u00e9s"_s)
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
			$of("franco guineano"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("dracma griego"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal guatemalteco"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"peso de Guinea-Biss\u00e1u"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"d\u00f3lar guyan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"d\u00f3lar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"lempira hondure\u00f1o"_s)
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
			$of(u"flor\u00edn h\u00fangaro"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupia indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("libra irlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"nuevo sheqel israel\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia india"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"dinar iraqu\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"rial iran\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("corona islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("lira italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"d\u00f3lar de Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar jordano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"yen japon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"chel\u00edn keniata"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"som kirgu\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel camboyano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franco comorense"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("won norcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won surcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"dinar kuwait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"d\u00f3lar de las Islas Caim\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazako"_s)
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
			$of("rupia de Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"d\u00f3lar liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti lesothense"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litas lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"franco luxemburgu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"lats let\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dirham marroqu\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franco malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("dinar macedonio"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca de Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of("ouguiya mauritano"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("lira maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia mauriciana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rufiyaa de Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha de Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"unidad de inversi\u00f3n (UDI) mexicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malasio"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"antiguo metical mozambique\u00f1o"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"metical mozambique\u00f1o"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"d\u00f3lar de Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigeriano"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"c\u00f3rdoba oro nicarag\u00fcense"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"flor\u00edn neerland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("corona noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"d\u00f3lar neozeland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"rial oman\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balboa paname\u00f1o"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("nuevo sol peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina de Pap\u00faa Nueva Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"rupia pakistan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloty polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"escudo portugu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"guaran\u00ed paraguayo"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("riyal de Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("antiguo leu rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rublo ruso"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("rublo ruso (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"franco ruand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"riyal saud\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"d\u00f3lar de las Islas Salom\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia de Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"dinar sudan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("libra sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("corona sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"d\u00f3lar singapurense"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("libra de Santa Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"t\u00f3lar esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("corona eslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone de Sierra Leona"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"chel\u00edn somal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"d\u00f3lar surinam\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"flor\u00edn surinam\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra de Santo Tom\u00e9 y Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"col\u00f3n salvadore\u00f1o"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("libra siria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tailand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tayiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of("manat turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("nuevo manat turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunecino"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa\u02bbanga tongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo timorense"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("lira turca antigua"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("nueva lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"d\u00f3lar de Trinidad y Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nuevo d\u00f3lar taiwan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"chel\u00edn tanzano"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("grivna ucraniana"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"chel\u00edn ugand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"d\u00f3lar estadounidense"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"d\u00f3lar estadounidense (d\u00eda siguiente)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"d\u00f3lar estadounidense (mismo d\u00eda)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguayo"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("sum uzbeko"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"bol\u00edvar venezolano"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bol\u00edvar fuerte venezolano"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu vanuatuense"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franco CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("plata"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("oro"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("unidad compuesta europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("unidad monetaria europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("unidad de cuenta europea (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("unidad de cuenta europea (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"d\u00f3lar del Caribe Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("derechos especiales de giro"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"franco oro franc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"franco UIC franc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franco CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("paladio"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platino"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"c\u00f3digo reservado para pruebas"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Sin divisa"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"rial yemen\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("super dinar yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sudafricano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of("kwacha zambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"d\u00f3lar de Zimbabue"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"d\u00f3lar zimbabuense"_s)
		})
	});
}

CurrencyNames_es::CurrencyNames_es() {
}

$Class* CurrencyNames_es::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es, name, initialize, &_CurrencyNames_es_ClassInfo_, allocate$CurrencyNames_es);
	return class$;
}

$Class* CurrencyNames_es::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun