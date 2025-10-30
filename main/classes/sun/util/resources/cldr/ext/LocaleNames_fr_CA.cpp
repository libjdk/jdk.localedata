#include <sun/util/resources/cldr/ext/LocaleNames_fr_CA.h>

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

$MethodInfo _LocaleNames_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_fr_CA::*)()>(&LocaleNames_fr_CA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_fr_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fr_CA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fr_CA_MethodInfo_
};

$Object* allocate$LocaleNames_fr_CA($Class* clazz) {
	return $of($alloc(LocaleNames_fr_CA));
}

void LocaleNames_fr_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fr_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, "gujarati"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("bas allemand mennonite"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nkole"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u00eeles Heard et McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bicol"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"calendrier musulman (calcul\u00e9, Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slave"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u00e9moji"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u00eeles Canaries"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("vieux perse"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Oc\u00e9anie lointaine"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("yi de Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u00eele de l\u2019Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u00eele de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"franco-proven\u00e7al"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"ordre multilingue europ\u00e9en"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"territoire britannique de l\u2019oc\u00e9an Indien"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("frison de Saterland"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("syllabaires japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao naga"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"la R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"kurde m\u00e9ridional"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00eeles d\u2019\u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("palatin"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of("selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("tlicho"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("sosso"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u00eele Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"sami d\u2019Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("seri"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"B\u00e9larus"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirghizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of("{0} : {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u00eeles Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Saint-Martin (Pays-Bas)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Ordre de tri r\u00e9form\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u00eeles Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asou"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cri"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asie occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u00eele Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Rechercher par consonne initiale en hangeul"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embou"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("vieux haut-allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("yupik central"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("vieil irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asie orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europe orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europe septentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("swahili congolais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Chiffres mongols"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europe occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Europe m\u00e9ridionale"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("demi-chasse"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u00eeles mineures \u00e9loign\u00e9es des \u00c9tats-Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("live"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint-Martin (France)"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("chinois classique"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Mariannes du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("tchagatay"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathe"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("GENUNG"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Cit\u00e9 du Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("bas saxon"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("ancien occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u00eeles Vierges britanniques"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u00eeles Vierges am\u00e9ricaines"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Ordre de tri du dictionnaire"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("chiffres gujaratis"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adygu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u00eele Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("newari classique"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"id\u00e9ogrammes han simplifi\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"id\u00e9ogrammes han traditionnels"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"k\u2019iche\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u00eeles Malouines"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u00eeles F\u00e9ro\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"BGN (commission de toponymie des \u00c9tats-Unis)"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("vieil anglais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Calendrier \u00e9thiopien de l\u2019An de gr\u00e2ce"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of("allemand de Pennsylvanie"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilen"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurde central"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("chambala"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u00eeles Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("pleine chasse"_s)
		})
	}));
	return data;
}

LocaleNames_fr_CA::LocaleNames_fr_CA() {
}

$Class* LocaleNames_fr_CA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fr_CA, name, initialize, &_LocaleNames_fr_CA_ClassInfo_, allocate$LocaleNames_fr_CA);
	return class$;
}

$Class* LocaleNames_fr_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun