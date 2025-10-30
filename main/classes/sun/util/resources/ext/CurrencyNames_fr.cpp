#include <sun/util/resources/ext/CurrencyNames_fr.h>

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

$MethodInfo _CurrencyNames_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_fr::*)()>(&CurrencyNames_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_fr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_MethodInfo_
};

$Object* allocate$CurrencyNames_fr($Class* clazz) {
	return $of($alloc(CurrencyNames_fr));
}

void CurrencyNames_fr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("peseta andorrane"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dirham des \u00c9mirats arabes unis"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afghani (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("lek albanais"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"dram arm\u00e9nien"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("florin antillais"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolais"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentin"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("schilling autrichien"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dollar australien"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("florin arubais"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat az\u00e9ri (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"manat az\u00e9ri"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("mark convertible bosniaque"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dollar barbadien"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bangladeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franc belge"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lev bulgare (1962\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("nouveau lev bulgare"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahre\u00efni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franc burundais"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dollar bermudien"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"dollar brun\u00e9ien"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("mvdol bolivien"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"r\u00e9al br\u00e9silien"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"dollar baham\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("ngultrum bouthanais"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula botswanais"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"nouveau rouble bi\u00e9lorusse (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rouble bi\u00e9lorusse"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"dollar b\u00e9liz\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dollar canadien"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("franc congolais"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franc suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"unit\u00e9 d\u2019investissement chilienne"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chilien"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan renminbi chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombien"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"col\u00f3n costaricain"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"dinar serbo-mont\u00e9n\u00e9grin"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cubain convertible"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubain"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo capverdien"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("livre chypriote"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"couronne tch\u00e8que"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("mark allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franc djiboutien"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("couronne danoise"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominicain"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"dinar alg\u00e9rien"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("couronne estonienne"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"livre \u00e9gyptienne"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"nafka \u00e9rythr\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("peseta espagnole"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"birr \u00e9thiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("mark finlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("dollar fidjien"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("livre des Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"franc fran\u00e7ais"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("livre sterling"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"lari g\u00e9orgien"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"c\u00e9di"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"c\u00e9di ghan\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("livre de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambien"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"franc guin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("drachme grecque"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"quetzal guat\u00e9malt\u00e8que"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"peso bissau-guin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("dollar du Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("dollar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira hondurien"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croate"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"gourde ha\u00eftienne"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("forint hongrois"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"roupie indon\u00e9sienne"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("livre irlandaise"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"nouveau shekel isra\u00e9lien"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("roupie indienne"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar irakien"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("rial iranien"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("couronne islandaise"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("lire italienne"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"dollar jama\u00efcain"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar jordanien"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"shilling k\u00e9nyan"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som kirghize"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel cambodgien"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franc comorien"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"won nord-cor\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"won sud-cor\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"dinar kowe\u00eftien"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"dollar des \u00eeles Ca\u00efmanes"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip loatien"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("livre libanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("roupie srilankaise"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"dollar lib\u00e9rien"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti lesothan"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litas lituanien"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("franc luxembourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lats letton"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar lybien"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marocain"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldave"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franc malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"denar mac\u00e9donien"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat myanmarais"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca macanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of("ouguiya mauritanien"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("lire maltaise"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("roupie mauricienne"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rufiyaa maldivienne"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawite"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexicain"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"unit\u00e9 de conversion mexicaine (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malais"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"m\u00e9tical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical mozambicain"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dollar namibien"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"naira nig\u00e9rian"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"c\u00f3rdoba oro nicaraguayen"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"florin n\u00e9erlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"couronne norv\u00e9gienne"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"roupie n\u00e9palaise"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"dollar n\u00e9o-z\u00e9landais"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("rial omani"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balboa panam\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"nouveau sol p\u00e9ruvien"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina papouan-n\u00e9o-guin\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso philippin"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("roupie pakistanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloty polonais"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("escudo portugais"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"guaran\u00ed paraguayen"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial qatari"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("ancien leu roumain"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu roumain"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rouble russe"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"rouble russe (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("franc rwandais"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saoudien"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"dollar des \u00eeles Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("roupie des Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("dinar soudanais"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("livre soudanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"couronne su\u00e9doise"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("dollar de Singapour"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"livre de Sainte-H\u00e9l\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"tolar slov\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("couronne slovaque"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"leone sierra-l\u00e9onais"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("shilling somalien"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dollar surinamais"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("florin surinamais"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra santom\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"col\u00f3n salvadorien"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("livre syrienne"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tha\u00eflandais"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turkm\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"nouveau manat turkm\u00e8ne"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunisien"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa\u2019anga tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo timorais"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("livre turque"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("nouvelle livre turque"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("dollar trinidadien"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nouveau dollar ta\u00efwanais"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("shilling tanzanien"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("hryvnia ukrainienne"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("shilling ougandais"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dollar des \u00c9tats-Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("dollar des Etats-Unis (jour suivant)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"dollar des Etats-Unis (jour m\u00eame)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguayen"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("sum ouzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of("bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolivar fuerte v\u00e9n\u00e9zu\u00e9lien"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"d\u00f4ng vietnamien"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu vanuatuan"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franc CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("argent"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("or"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"unit\u00e9 europ\u00e9enne compos\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"unit\u00e9 mon\u00e9taire europ\u00e9enne"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"unit\u00e9 de compte europ\u00e9enne (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"unit\u00e9 de compte europ\u00e9enne (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"dollar des Cara\u00efbes orientales"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"droit de tirage sp\u00e9cial"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("franc or"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("franc UIC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franc CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platine"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("(devise de test)"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("devise inconnue ou non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"rial y\u00e9m\u00e9nite"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("dinar yougoslave Noviy"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sud-africain"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of("kwacha zambien"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dollar zimbabw\u00e9en"_s)
		})
	});
}

CurrencyNames_fr::CurrencyNames_fr() {
}

$Class* CurrencyNames_fr::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr, name, initialize, &_CurrencyNames_fr_ClassInfo_, allocate$CurrencyNames_fr);
	return class$;
}

$Class* CurrencyNames_fr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun