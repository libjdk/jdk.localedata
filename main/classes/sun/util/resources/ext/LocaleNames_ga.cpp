#include <sun/util/resources/ext/LocaleNames_ga.h>

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

$MethodInfo _LocaleNames_ga_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ga::*)()>(&LocaleNames_ga::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ga_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ga",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ga_MethodInfo_
};

$Object* allocate$LocaleNames_ga($Class* clazz) {
	return $of($alloc(LocaleNames_ga));
}

void LocaleNames_ga::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ga::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"And\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Aontas na n\u00c9im\u00edr\u00edochta\u00ed Arabacha"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"An Afganast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua agus Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"An Alb\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"An Airm\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"Antill\u00ed na h\u00cdsilt\u00edre"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ang\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("An Antartaice"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"An Airgint\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Sam\u00f3 Meirice\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("An Ostair"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"An Astr\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"An Asarbaise\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"An Bhoisnia-Heirseagaiv\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Barbad\u00f3s"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"An Bhanglaid\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("An Bheilg"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Buirc\u00edne Fas\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"An Bhulg\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bair\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"An Bhur\u00fain"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Beinin"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Beirmi\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Br\u00fain\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("An Bholaiv"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"An Bhrasa\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Na Bah\u00e1ma\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"An Bh\u00fat\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Oile\u00e1in Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"An Bhotsu\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"An Bhealar\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"An Bheil\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Ceanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Oile\u00e1in Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Poblacht Dhaonlathach an Chong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Poblacht na hAfraice L\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"An Cong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"An Eilv\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"An C\u00f3sta Eabhair"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Oile\u00e1in Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("An tSile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Camar\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"An tS\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"An Chol\u00f3im"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"C\u00f3sta R\u00edce"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"C\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Rinn Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Oile\u00e1n na Nollag"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("An Chipir"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Poblacht na Seice"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"An Ghearm\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("An Danmhairg"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Doiminice"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("An Phoblacht Dhoiminiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"An Ailg\u00e9ir"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Eacuad\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"An East\u00f3in"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"An \u00c9igipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"An Sah\u00e1ra Thiar"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"An Sp\u00e1inn"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"An Aet\u00f3ip"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("An Fhionlainn"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fids\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Oile\u00e1in Fh\u00e1clainne"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"An Mhicrin\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Oile\u00e1in Fhar\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("An Fhrainc"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"An Ghab\u00fain"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"An R\u00edocht Aontaithe"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("An tSeoirsia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"An Ghu\u00e1in Fhrancach"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"G\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Giobr\u00e1ltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("An Ghraonlainn"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("An Ghaimbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("An Ghuine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guadal\u00faip"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"An Ghuine Mhe\u00e1nchriosach"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"An Ghr\u00e9ig"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"An tSeoirsia Theas agus Oile\u00e1in Sandwich Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatamala"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("An Ghuine-Bhissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"An Ghu\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Oile\u00e1n Heard agus Oile\u00e1in McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hond\u00faras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"An Chr\u00f3it"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"H\u00e1it\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"An Ung\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"An Indin\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u00c9ire"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Iosrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("An India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Cr\u00edocha Briotanacha an Aig\u00e9in Indiagh"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"An Iar\u00e1ic"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"An Iar\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"An \u00cdoslainn"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"An Iod\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Iam\u00e1ice"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"An Iord\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"An tSeap\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"An Ch\u00e9inia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"An Chirgeast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"An Chamb\u00f3id"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Cireabait\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Oile\u00e1in Chom\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts agus Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"An Ch\u00f3ir\u00e9 Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"An Ch\u00f3ir\u00e9 Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Cu\u00e1it"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Oile\u00e1in Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"An Chasacst\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"An Liob\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lichtinst\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sr\u00ed Lanca"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"An Lib\u00e9ir"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Leos\u00f3ta"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"An Liotu\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lucsamburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("An Laitvia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("An Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marac\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Monac\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"An Mhold\u00f3iv"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Oile\u00e1in Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"An Mhacad\u00f3in"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mail\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Maenmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"An Mhong\u00f3il"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Oile\u00e1in Mariana Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"An Mharat\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montsarat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u00e1lta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Oile\u00e1n Mhuir\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mhaildiv\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"An Mhal\u00e1iv"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meicsiceo"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("An Mhalaeisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"M\u00f3saimb\u00edc"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("An Namaib"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"An Nua-Chalad\u00f3in"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"An N\u00edgir"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Oile\u00e1n Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"An Nig\u00e9ir"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicearagua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"An \u00cdsilt\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("An Iorua"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Neipeal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"N\u00e1r\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"An Nua-Sh\u00e9alainn"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Peiri\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"An Pholain\u00e9is Fhrancach"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Nua-Ghuine Phapua"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Na hOile\u00e1in Fhilip\u00edneacha"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"An Phacast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("An Pholainn"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre agus Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Port\u00f3 R\u00edce"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Na Cr\u00edocha Pailist\u00edneacha"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"An Phortaing\u00e9il"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragua"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Catar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"An R\u00f3m\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"C\u00f3naidhm na R\u00faise"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"An Araib Sh\u00e1dach"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Oile\u00e1in Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Na S\u00e9is\u00e9il"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"An tS\u00fad\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("An tSualainn"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singeap\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"San H\u00e9ilin"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"An tSl\u00f3v\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard agus Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"An tSl\u00f3vaic"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siarra Leon"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Mair\u00edne"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"An tSeineag\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"An tSom\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suranam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome agus Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"An tSalvad\u00f3ir"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("An tSiria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("An tSuasalainn"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Oile\u00e1in Turks agus Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Sead"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Cr\u00edocha Francacha Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"T\u00f3ga"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"An T\u00e9alainn"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"An T\u00e1ids\u00edceast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"T\u00f3cal\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"T\u00edom\u00f3r-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"An Tuircm\u00e9anast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"An T\u00fain\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("An Tuirc"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Oile\u00e1in na Tr\u00edon\u00f3ide agus Tob\u00e1ga"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tuval\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"An T\u00e9av\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"An Tans\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"An \u00dacr\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Mion-Oile\u00e1in Imeallacha S.A.M."_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"St\u00e1it Aontaithe Mheirice\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugua"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u00daisb\u00e9iceast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"An Chathaoir Naofa (St\u00e1t Chathair na Vatac\u00e1ine)"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent agus na Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Veinis\u00e9ala"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Oile\u00e1in Bhriotanacha na Maighdean"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Oile\u00e1in na Maighdean S.A.M."_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"V\u00edtneam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanuat\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Oile\u00e1in Vail\u00eds agus Fut\u00fana"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Sam\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u00c9imin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("An Afraic Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("An tSaimbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"An tSiomb\u00e1ib"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Abc\u00e1isis"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"Aiv\u00e9istis"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Afrac\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Araibis"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Asaimis"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Asarbaise\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"Baisc\u00edris"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Bealar\u00faisis"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bulg\u00e1iris"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Beang\u00e1lais"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tib\u00e9adais"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Briot\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Boisnis"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Catal\u00f3inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Sisinis"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsaicis"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"Cra\u00edais"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Seicis"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Slavais na hEaglaise"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Suvaisis"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Breatnais"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danmhairgis"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Gearm\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Gr\u00e9igis"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"B\u00e9arla"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Sp\u00e1innis"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"East\u00f3inis"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Bascais"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Peirsis"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fionnlainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fidsis"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Far\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Fraincis"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Freaslainnais"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Gaeilge"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Gaeilge na hAlban"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"G\u00faisear\u00e1itis"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Mannainis"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Eabhrais"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Hiond\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Cr\u00f3itis"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ung\u00e1iris"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Airm\u00e9inis"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indin\u00e9isis"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"Indin\u00e9isis"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u00cdoslainnais"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Iod\u00e1ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"Ion\u00faitis"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("Eabhrais"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Seap\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"Gi\u00fadais"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"I\u00e1vais"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Seoirsis"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Casachais"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Cannadais"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"C\u00f3ir\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Caism\u00edris"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Cornais"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Cirgeasais"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Laidin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Leitseabuirgis"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Laosais"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Liotu\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Laitvis"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malag\u00e1sais"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maorais"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Macad\u00f3inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"Mail\u00e9alaimis"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Mong\u00f3ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"Mold\u00e1ivis"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Maraitis"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltais"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmais"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"N\u00e1r\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Ioruais Bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Neipealais"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Ollainnais"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Ioruais Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Ioruais"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"Navach\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Ocat\u00e1inis (tar \u00e9is 1500); Proven\u00e7al"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u00d3is\u00e9itis"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Puinseaibis"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paisteo"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portaing\u00e9ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Ceatsuais"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rom\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"R\u00faisis"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanscrait"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"Saird\u00ednis"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindis"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"S\u00e1imis Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Sl\u00f3vacais"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Sl\u00f3v\u00e9inis"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Sam\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Som\u00e1lais"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Alb\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Seirbis"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Sualainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Svaha\u00edlis"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamailis"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"T\u00e9alainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"Tag\u00e1laigis"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tuircis"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatarais"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Taih\u00edtis"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u00dacr\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdais"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u00daisb\u00e9icis"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"V\u00edtneamais"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"Vall\u00fanais"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Gi\u00fadais"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"S\u00ednis"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"S\u00fal\u00fais"_s)
		})
	});
}

LocaleNames_ga::LocaleNames_ga() {
}

$Class* LocaleNames_ga::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ga, name, initialize, &_LocaleNames_ga_ClassInfo_, allocate$LocaleNames_ga);
	return class$;
}

$Class* LocaleNames_ga::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun