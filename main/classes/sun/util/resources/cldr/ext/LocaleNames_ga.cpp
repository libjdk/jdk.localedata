#include <sun/util/resources/cldr/ext/LocaleNames_ga.h>

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

$MethodInfo _LocaleNames_ga_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ga::*)()>(&LocaleNames_ga::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ga_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ga",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ga_MethodInfo_
};

$Object* allocate$LocaleNames_ga($Class* clazz) {
	return $of($alloc(LocaleNames_ga));
}

void LocaleNames_ga::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ga::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("an Domhan"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("an Afraic"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Meirice\u00e1 Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Meirice\u00e1 Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"an Aig\u00e9ine"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Iarthar na hAfraice"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Meirice\u00e1 L\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Oirthear na hAfraice"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Tuaisceart na hAfraice"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"an Afraic L\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Deisceart na hAfraice"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Cr\u00edocha Mheirice\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Tuaisceart Mheirice\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("an Mhuir Chairib"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Oirthear na h\u00c1ise"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Deisceart na h\u00c1ise"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Oirdheisceart na h\u00c1ise"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Deisceart na hEorpa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"an Astral\u00e1ise"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"an Mheilin\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"an R\u00e9igi\u00fan Micrin\u00e9iseach"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"an Pholain\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"an \u00c1ise"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"an \u00c1ise L\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Iarthar na h\u00c1ise"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("an Eoraip"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Oirthear na hEorpa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Tuaisceart na hEorpa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Iarthar na hEorpa"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"an Afraic fho-Shah\u00e1rach"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Meirice\u00e1 Laidineach"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Oile\u00e1n na Deascabh\u00e1la"_s)
		}),
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
			$of(u"an Afganast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antigua agus Barb\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Anga\u00edle"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"an Alb\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"an Airm\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ang\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("an Antartaice"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"an Airgint\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Sam\u00f3 Mheirice\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("an Ostair"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"an Astr\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Ar\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Oile\u00e1in \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"an Asarbaise\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"an Bhoisnia agus an Heirseagaiv\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Barbad\u00f3s"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"an Bhanglaid\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("an Bheilg"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Buirc\u00edne Fas\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"an Bhulg\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bair\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"an Bhur\u00fain"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Beinin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barth\u00e9lemy"_s)
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
			$of("an Bholaiv"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"an \u00cdsilt\u00edr Chairibeach"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"an Bhrasa\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"na Bah\u00e1ma\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"an Bh\u00fat\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Oile\u00e1n Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"an Bhotsu\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"an Bhealar\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"an Bheil\u00eds"_s)
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
			$of(u"an Cong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"an Eilv\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"an C\u00f3sta Eabhair"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Oile\u00e1in Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("an tSile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Camar\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"an tS\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"an Chol\u00f3im"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Oile\u00e1n Clipperton"_s)
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
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Oile\u00e1n na Nollag"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("an Chipir"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("an tSeicia"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"an Ghearm\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("an Danmhairg"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Doiminice"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("an Phoblacht Dhoiminiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"an Ailg\u00e9ir"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta agus Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Eacuad\u00f3r"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"an East\u00f3in"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"an \u00c9igipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"an Sah\u00e1ra Thiar"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"an Eiritr\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"an Sp\u00e1inn"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"an Aet\u00f3ip"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("an tAontas Eorpach"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Limist\u00e9ar an euro"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("an Fhionlainn"_s)
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
			$of(u"an Mhicrin\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Oile\u00e1in Fhar\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("an Fhrainc"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"an Ghab\u00fain"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"an R\u00edocht Aontaithe"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Grean\u00e1da"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("an tSeoirsia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Gu\u00e1in na Fraince"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Geansa\u00ed"_s)
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
			$of("an Ghraonlainn"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("an Ghaimbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("an Ghuine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guadal\u00faip"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"an Ghuine Mhe\u00e1nchiorclach"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"an Ghr\u00e9ig"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"an tSeoirsia Theas agus Oile\u00e1in Sandwich Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatamala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guine Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"an Ghu\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"S.R.R. na S\u00edne Hong Cong"_s)
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
			$of(u"an Chr\u00f3it"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"H\u00e1\u00edt\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"an Ung\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"na hOile\u00e1in Chan\u00e1racha"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"an Indin\u00e9is"_s)
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
			$of("IM"_s),
			$of(u"Oile\u00e1n Mhanann"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("an India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Cr\u00edoch Aig\u00e9an Indiach na Breataine"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"an Iar\u00e1ic"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"an Iar\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"an \u00cdoslainn"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"an Iod\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Geirs\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Iam\u00e1ice"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"an Iord\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"an tSeap\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"an Ch\u00e9inia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"an Chirgeast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"an Chamb\u00f3id"_s)
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
			$of(u"San Cr\u00edost\u00f3ir-Nimheas"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"an Ch\u00f3ir\u00e9 Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"an Ch\u00f3ir\u00e9 Theas"_s)
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
			$of(u"an Chasacst\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"an Liob\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
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
			$of(u"an Lib\u00e9ir"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Leos\u00f3ta"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"an Liotu\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lucsamburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("an Laitvia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("an Libia"_s)
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
			$of(u"an Mhold\u00f3iv"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Montain\u00e9agr\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint-Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Oile\u00e1in Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"an Mhacad\u00f3in Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mail\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Maenmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"an Mhong\u00f3il"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"S.R.R. na S\u00edne Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"na hOile\u00e1in Mh\u00e1irianacha Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"an Mh\u00e1rat\u00e1in"_s)
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
			$of(u"Oile\u00e1in Mhaild\u00edve"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"an Mhal\u00e1iv"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meicsiceo"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("an Mhalaeisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"M\u00f3saimb\u00edc"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("an Namaib"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"an Nua-Chalad\u00f3in"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"an N\u00edgir"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Oile\u00e1n Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"an Nig\u00e9ir"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicearagua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"an \u00cdsilt\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("an Iorua"_s)
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
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"an Nua-Sh\u00e9alainn"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u00d3man"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Peiri\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polain\u00e9is na Fraince"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Nua-Ghuine Phapua"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"na hOile\u00e1in Fhilip\u00edneacha"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"an Phacast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("an Pholainn"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("San Pierre agus Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Oile\u00e1in Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"P\u00f3rt\u00f3 R\u00edce"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"na Cr\u00edocha Palaist\u00edneacha"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"an Phortaing\u00e9il"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Oile\u00e1in Palau"_s)
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
			$of("QO"_s),
			$of(u"an Aig\u00e9ine Imeallach"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"an R\u00f3m\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("an tSeirbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"an R\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"an Araib Sh\u00e1dach"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Oile\u00e1in Sholom\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"na S\u00e9is\u00e9il"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"an tS\u00fad\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("an tSualainn"_s)
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
			$of(u"an tSl\u00f3iv\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard agus Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"an tSl\u00f3vaic"_s)
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
			$of(u"an tSeineag\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"an tSom\u00e1il"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suranam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"an tS\u00fad\u00e1in Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 agus Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"an tSalvad\u00f3ir"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("an tSiria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"eSuait\u00edn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Oile\u00e1in na dTurcach agus Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Sead"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Cr\u00edocha Francacha Dheisceart an Domhain"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"T\u00f3ga"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"an T\u00e9alainn"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"an T\u00e1ids\u00edceast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"T\u00f3cal\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"T\u00edom\u00f3r Thoir"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"an Tuircm\u00e9anast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"an T\u00fain\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("an Tuirc"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Oile\u00e1n na Tr\u00edon\u00f3ide agus Tob\u00e1ga"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"an T\u00e9av\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"an Tans\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"an \u00dacr\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Oile\u00e1in Imeallacha S.A.M."_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"na N\u00e1isi\u00fain Aontaithe"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"St\u00e1it Aontaithe Mheirice\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uragua"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"an \u00daisb\u00e9iceast\u00e1in"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Cathair na Vatac\u00e1ine"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"San Uinseann agus na Grean\u00e1id\u00edn\u00ed"_s)
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
			$of(u"Oile\u00e1in Mheirice\u00e1nacha na Maighdean"_s)
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
			$of(u"Vail\u00eds agus Fut\u00fana"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Sam\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Br\u00e9agdhiaicritic\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Br\u00e9ag-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("an Chosaiv"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u00c9imin"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("an Afraic Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("an tSaimbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"an tSiomb\u00e1ib"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"R\u00e9igi\u00fan Anaithnid"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"Af\u00e1iris"_s)
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
			$of("ak"_s),
			$of(u"Ac\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Am\u00e1iris"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"Arag\u00f3inis"_s)
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
			$of("av"_s),
			$of(u"Av\u00e1iris"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aidhmiris"_s)
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
			$of("bi"_s),
			$of("Bioslaimis"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambairis"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Beang\u00e1ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tib\u00e9idis"_s)
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
			$of("Seisnis"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"Seam\u00f3iris"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsaicis"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"Cra\u00eds"_s)
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
			$of("dv"_s),
			$of(u"Div\u00e9ihis"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Seoinicis"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u00c9abhais"_s)
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
			$of("eo"_s),
			$of("Esperanto"_s)
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
			$of("ff"_s),
			$of(u"Ful\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fionlainnis"_s)
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
			$of("Freaslainnis Iartharach"_s)
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
			$of("gl"_s),
			$of(u"Gail\u00edsis"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Guar\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"G\u00faisear\u00e1itis"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"H\u00e1sais"_s)
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
			$of("ho"_s),
			$of(u"Mot\u00fais H\u00edr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Cr\u00f3itis"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Cri\u00f3l H\u00e1\u00edt\u00edoch"_s)
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
			$of("hz"_s),
			$of(u"Heir\u00e9iris"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indin\u00e9isis"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u00cdogb\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u00cds Shichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"Ini\u00faipiaicis"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u00cdoslainnis"_s)
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
			$of("ja"_s),
			$of(u"Seap\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"I\u00e1ivis"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Seoirsis"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"Cong\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"Cioc\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"Cuaini\u00e1imis"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Casaicis"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Cim\u00e9iris"_s)
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
			$of("kr"_s),
			$of(u"Can\u00fairis"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Caism\u00edris"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Coirdis"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Coimis"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Coirnis"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Cirgisis"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Laidin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Lucsambuirgis"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Lugandais"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Liombuirgis"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"Liong\u00e1ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Laoisis"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Liotu\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"L\u00faba-Cataingis"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Laitvis"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malag\u00e1isis"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Mairsillis"_s)
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
			$of("mr"_s),
			$of("Maraitis"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malaeis"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"M\u00e1ltais"_s)
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
			$of("nd"_s),
			$of(u"Ndeib\u00e9ilis an Tuaiscirt"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Neipeailis"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndongais"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Ollainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Nua-Ioruais"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Ioruais"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Ndeib\u00e9ilis an Deiscirt"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"Navach\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"Sis\u00e9ivis"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Ocsat\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u00d3isibis"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oraimis"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"Oir\u00edsis"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Ois\u00e9itis"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Puinse\u00e1ibis"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"P\u00e1ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paistis"_s)
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
			$of("rm"_s),
			$of(u"R\u00f3mainis"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"R\u00faindis"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"R\u00f3m\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"R\u00faisis"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Ciniaruaindis"_s)
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
			$of("sg"_s),
			$of(u"Sang\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"Seirbea-Chr\u00f3itis"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Siol\u00f3inis"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Sl\u00f3vaicis"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Sl\u00f3iv\u00e9inis"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Sam\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Seoinis"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Som\u00e1ilis"_s)
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
			$of("ss"_s),
			$of("Suaisis"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Seas\u00f3itis"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sundais"_s)
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
			$of("te"_s),
			$of(u"Teileag\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"T\u00e1ids\u00edcis"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"T\u00e9alainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinis"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Tuircm\u00e9inis"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"Tag\u00e1laigis"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"Su\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongais"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tuircis"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Songais"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatairis"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"T\u00edbhis"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Taih\u00edtis"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Uigi\u00fairis"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u00dacr\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Urd\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u00daisb\u00e9iceast\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Veindis"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"V\u00edtneaimis"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"Vall\u00fanais"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Volaifis"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"C\u00f3isis"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Gi\u00fadais"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Iar\u00faibis"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"Siu\u00e1ingis"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"S\u00ednis"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"S\u00fal\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"Adaig\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"Aidhni\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"Ac\u00e1idis"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Sean-Bh\u00e9arla"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramais"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"Map\u00faitsis"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Ast\u00fairis"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Bail\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"Bav\u00e1iris"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Bas\u00e1is"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Beimbis"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"B\u00e9inis"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"B\u00f3d\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"Buiri\u00e1itis"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Buiginis"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"Seab\u00fa\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"C\u00edgis"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mairis"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Seiricis"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Coirdis L\u00e1rnach"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Coptais"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Cri\u00f3l Fraincise Seselwa"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"Caisi\u00faibis"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarmais"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Sorbais \u00cdochtarach"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duailis"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Me\u00e1n-Ollainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"I\u00f3la-Fain\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"Eamb\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Sean-\u00c9igiptis"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Me\u00e1n-Bh\u00e9arla"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u00c9abhand\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Filip\u00ednis"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Me\u00e1n-Fhraincis"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Sean-Fhraincis"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Freaslainnis an Tuaiscirt"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Fri\u00failis"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"S\u00ednis Gan"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Aet\u00f3ipis"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Cireabaitis"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Me\u00e1n-Ard-Ghearm\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Sean-Ard-Ghearm\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"Sean-Ghr\u00e9igis"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Gearm\u00e1inis Eilv\u00e9iseach"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"Ua\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"G\u00faisis"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"Haic\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hav\u00e1is"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Hiond\u00fais Fhids\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"Hilgean\u00f3inis"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hitis"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Mongais"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Sorbais Uachtarach"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"S\u00ednis Xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"H\u00faipis"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibis"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"Iong\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"I\u00fatlainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"Cara-Chalp\u00e1is"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"Caib\u00edlis"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Cambais"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Cri\u00f3l Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Songais Iartharach"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Cac\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"Conc\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"Cair\u00e9ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"Cur\u00faicis"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Baifiais"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Coilsis"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"Laid\u00ednis"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"L\u00e1ingis"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"Puinse\u00e1ibis Iartharach"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"Liog\u00fairis"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"Liov\u00f3inis"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Lac\u00f3tais"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("Lombairdis"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Luri Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"L\u00fa\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maitilis"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"M\u00e1sais"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Meindis"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Me\u00e1n-Ghaeilge"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Manap\u00fairis"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"M\u00f3h\u00e1icis"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("Mairis Iartharach"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Ilteangacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"Mioraind\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marmhairis"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"M\u00e1zandar\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"S\u00ednis Min Nan"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"Nap\u00f3ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Gearm\u00e1inis \u00cdochtarach"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"N\u00edobhais"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Cuaiseois"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Sean-Lochlainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"S\u00fat\u00fais an Tuaiscirt"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuairis"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Nianc\u00f3ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"pidsean na Nig\u00e9ire"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("Sean-Pheirsis"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Pr\u00faisis"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Cuits\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romainis"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"Ar\u00f3m\u00e1inis"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sachais"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Aramais Sham\u00e1rach"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"Sant\u00e1ilis"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sicilis"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Albainis"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Songais Oirthearach"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Sean-Ghaeilge"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"S\u00e1imis Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"S\u00e1imis Lule"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"S\u00e1imis Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"S\u00e1imis Skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"Sogd\u00e1nais"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"Suim\u00e9iris"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"Com\u00f3iris"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Siricis"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Sil\u00e9isis"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Tamazight Atlais L\u00e1ir"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmairtis"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Teanga Anaithnid"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"Vein\u00e9isis"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"Pl\u00e9imeannais Iartharach"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Cailm\u00edcis"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Cantainis"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"S\u00e9alainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"Tamaisis Chaighde\u00e1nach Mharac\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"Z\u00fainis"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Gan \u00e1bhar teangeola\u00edoch"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("Adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"Alb\u00e1nach Cugasach"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arabach"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Aramach Impiri\u00fail"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Airm\u00e9anach"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"Aiv\u00e9isteach"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Bail\u00edoch"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batacach"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Beang\u00e1lach"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("Buigineach"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buthaideach"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Siollach Bund\u00fachasach Ceanadach Aontaithe"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"Seiric\u00edoch"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("Coptach"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Cipireach"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Coireallach"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"D\u00e9ivean\u00e1grach"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Gearrscr\u00edobh Duployan"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u00c9igipteach coiteann"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u00c9igipteach cliar\u00fail"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Iairiglif\u00ed \u00c9igipteacha"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Aet\u00f3pach"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Seoirseach"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagalach"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gotach"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Gr\u00e9agach"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"G\u00faisear\u00e1tach"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Gurm\u00facach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han agus Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangalach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"Hanan\u00fais"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Simplithe"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Traidisi\u00fanta"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("Eabhrach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Hireag\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"Iairiglif\u00ed Anat\u00f3lacha"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"Siollabra\u00ed Seap\u00e1nacha"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"Sean-Ung\u00e1rach"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"Sean-Iod\u00e1ilic"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"Seam\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"I\u00e1vach"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"Seap\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"Catac\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"Cim\u00e9arach"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Cannadach"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"C\u00f3ir\u00e9ach"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Laosach"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Cl\u00f3 Gaelach"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Laidineach"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"Liomb\u00fach"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"L\u00edneach A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"L\u00edneach B"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Liciach"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lidiach"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"Mahas\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Mainic\u00e9asach"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Iairiglif\u00ed M\u00e1igheacha"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Meindeach"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Mail\u00e9alamach"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"Mong\u00f3lach"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("Multani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Maenmarach"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Sean-Arabach Thuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("Newa"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"N-c\u00f3is"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"Oir\u00edseach"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(u"\u00d3s\u00e1is"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Sean-Pheirmeach"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"F\u00e9in\u00edceach"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Foghrach"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"Pairtiach Inscr\u00edbhinni\u00fail"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"R\u00fanach"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"Sam\u00e1rach"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("Sean-Arabach Theas"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Litritheoireacht Comhartha\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shawach"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Siol\u00f3nach"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"Sundain\u00e9is"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Siriceach"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Deiheoingis"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("Tai Lue Nua"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamalach"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"Teileag\u00fach"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"Tag\u00e1lagach"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"T\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"T\u00e9alannach"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Tib\u00e9adach"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"\u00dagair\u00edteach"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("Vadhais"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("Sean-Pheirseach"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Dingchruthach Suim\u00e9ar-Ac\u00e1dach"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u00cds"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Oidhreacht"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Nodaireacht Mhatamaitici\u00fail"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"Siombail\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Gan Scr\u00edobh"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Coitianta"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Script Anaithnid"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Gearm\u00e1inis Ostarach"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Ard-Ghearm\u00e1inis Eilv\u00e9iseach"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"B\u00e9arla Astr\u00e1lach"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"B\u00e9arla Ceanadach"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"B\u00e9arla Briotanach"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"B\u00e9arla Meirice\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Sp\u00e1innis Eorpach"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Sp\u00e1innis Mheicsiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Dairis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Fraincis Cheanadach"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Fraincis Eilv\u00e9iseach"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Pl\u00e9imeannais"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Portaing\u00e9ilis Bhrasa\u00edleach"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Portaing\u00e9ilis Ib\u00e9arach"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"Mold\u00e1ivis"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Svaha\u00edlis an Chong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Litri\u00fa Traidisi\u00fanta na Gearm\u00e1inise"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Ortagrafa\u00edocht Resian Chaighde\u00e1naithe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Ortagrafa\u00edocht na Gearm\u00e1inise in 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Araibis Chaighde\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Sp\u00e1innis Mheirice\u00e1 Laidinigh"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"F\u00e9ilire"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Form\u00e1id Airgeadra"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Ord S\u00f3rt\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Airgeadra"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Timthriall Uaire (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"St\u00edl Briseadh L\u00edne"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"C\u00f3ras Tomhais"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Uimhreacha"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Sacsainis \u00cdochtarach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"Can\u00faint Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of(u"Gr\u00fapa can\u00fana Barlavento de Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Can\u00faint San Giorgo/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of(u"B\u00e9arla an Choirn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("Jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Gn\u00e1th-Litri\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"Litri\u00fa Caighde\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Can\u00faint Lipovaz de Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Can\u00faint Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Can\u00faint Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"Volap\u00fck Nua-Aimseartha"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Can\u00faint Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"R\u00edomhaire"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("Puter"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"Volap\u00fck Clasaiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Reisiach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("Rumgr"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Can\u00faint Stolvizza/Solbica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of(u"Gr\u00fapa can\u00fana Sotavento de Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Litri\u00fa Comhaontaithe"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"S\u00ednis Shimplithe"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"S\u00ednis Thraidisi\u00fanta"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of(u"Comhaont\u00fa Ortagrafa\u00edochta Theanga na Portaing\u00e9ilise, 1990"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"Aib\u00edtir Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of(u"Seirbis le fuaimni\u00fa Ekavian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Fogharscr\u00edobh IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"Fogharscr\u00edobh UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"Can\u00faint Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"Can\u00faint Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"R\u00f3mh\u00e1n\u00fa Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"B\u00e9arla Learphoill"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of(u"Simpl\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Ortografa\u00edocht Taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Litri\u00fa Comhaontaithe Athbhreithnithe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"C\u00faige Uladh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of(u"Aib\u00edtir foghra\u00edochta Unifon"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of(u"Foirmi\u00fa ortagrafa\u00edochta in 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"R\u00f3mh\u00e1n\u00fa ALA-LC, eagr\u00e1n 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Airm\u00e9inis an Oirthir"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Airm\u00e9inis an Iarthair"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of(u"Can\u00faint Balanka de Anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("Bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Aib\u00edtir Bohori\u010d"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"Nua-Bh\u00e9arla Moch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of("Fonnapa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"R\u00f3mh\u00e1n\u00fa Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("Itihasa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("Laukika"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"Aib\u00edtir Metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Aontonach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of("Pahawh2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of("Pahawh3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of("Pahawh4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Iltonach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Litri\u00fa Athbhreithnithe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("Sursilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("Sutsilv"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"V\u00e9ideach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Fraincis Dh\u00e9anach Mhe\u00e1nach go 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Nua-Fhraincis Mhoch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"Acad\u00fail"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Ab\u00edtir Laidine Tuircice Aontaithe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of(u"Bun-Bh\u00e9arla"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"BIOSC\u00c1NACH"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"Coinbhinsi\u00fan Ortagrafa\u00edochta na Portaing\u00e9ilise na Brasa\u00edle, 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("Fonxsamp"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("Hognorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of("Hsistemo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"Seirbis le fuaimni\u00fa Ijekavach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("Jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("Kociewie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("Luna1918"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of(u"Talamh an \u00c9isc"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of(u"Litri\u00fa OED"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of("Petr1708"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"B\u00e9arla Caighde\u00e1nach na hAlban"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of("Spainglis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("Surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Vaileinsis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("Vallader"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"R\u00f3mh\u00e1n\u00fa Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of("Xsistemo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"F\u00e9ilire T\u00e9av\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("Rialacha Ordaithe Eorpacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"C\u00f3ras 12 Uair (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"C\u00f3ras 12 Uair (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"C\u00f3ras 24 Uair (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"C\u00f3ras 24 Uair (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"Digit\u00ed Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Digit\u00ed Ind-Arabacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Uimhreacha Airm\u00e9anacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"Digit\u00ed Bail\u00edocha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Digit\u00ed Beang\u00e1lacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"Digit\u00ed Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"Digit\u00ed Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"Digit\u00ed Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("Uimhreacha Coireallacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Digit\u00ed D\u00e9ivean\u00e1gracha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Uimhreacha Aet\u00f3ipice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Uimhreacha Seoirseacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"Digit\u00ed Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Uimhreacha Gr\u00e9agacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Digit\u00ed G\u00faisear\u00e1tacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Digit\u00ed Gurm\u00facacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Uimhreacha sa tS\u00ednis Shimplithe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Uimhreacha sa tS\u00ednis Thraidisi\u00fanta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Uimhreacha Eabhracha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"Digit\u00ed Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"Digit\u00ed I\u00e1vacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Uimhreacha Seap\u00e1nacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"Digit\u00ed Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Digit\u00ed Cim\u00e9aracha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Digit\u00ed Cannadacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"Digit\u00ed Tai Tham Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Digit\u00ed Laosacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Digit\u00ed Iartharacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"Digit\u00ed Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"Digit\u00ed Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Digit\u00ed Mail\u00e9alamacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"Digit\u00ed Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Digit\u00ed Mong\u00f3lacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"Digit\u00ed Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"Digit\u00ed Meetei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Digit\u00ed Maenmaracha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"Digit\u00ed N\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"Digit\u00ed Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Digit\u00ed Oir\u00edseacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Digit\u00ed Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Digit\u00ed Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"Digit\u00ed Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"Digit\u00ed Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"Digit\u00ed Sinhala Lith"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"Digit\u00ed Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Digit\u00ed Sundain\u00e9ise"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"Digit\u00ed Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"Digit\u00ed Tai Lue Nua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Uimhreacha Traidisi\u00fanta Tamalacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Digit\u00ed Teileag\u00facha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Digit\u00ed T\u00e9alannacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Digit\u00ed Tib\u00e9adacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"Digit\u00ed Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Digit\u00ed Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"Digit\u00ed Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"F\u00e9ilire Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Ord S\u00f3rt\u00e1la R\u00e9amhshocraithe Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Ord S\u00f3rt\u00e1la Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"St\u00edl Briseadh L\u00edne Scaoilte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Uimhreacha R\u00f3mh\u00e1nacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"F\u00e9ilire Coptach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"F\u00e9ilire na nEabhrach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"F\u00e9ilire N\u00e1isi\u00fanta na hIndia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Ord S\u00f3rt\u00e1la Roimhe Seo, ar son na comhoiri\u00fanachta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Ord s\u00f3rt\u00e1la pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Cuardach Ilfh\u00f3inteach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Ord s\u00f3rt\u00e1la str\u00edce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Ord S\u00f3rt\u00e1la Str\u00edce Radaca\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Ord S\u00f3rt\u00e1la Zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"St\u00edl Gn\u00e1thbhriseadh L\u00edne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"St\u00edl Briseadh L\u00edne Docht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"C\u00f3ras M\u00e9adrach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"F\u00e9ilire S\u00edneach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"F\u00e9ilire Ioslamach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"F\u00e9ilire ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"F\u00e9ilire Peirseach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Form\u00e1id Airgeadra don Chuntasa\u00edocht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Ord s\u00f3rt\u00e1la S\u00edneach traidisi\u00fanta - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Digit\u00ed Ind-Arabacha Breisithe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Uimhreacha C\u00e1s \u00cdochtair Airm\u00e9anacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Uimhreacha C\u00e1s \u00cdochtair Gr\u00e9agacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Uimhreacha Deach\u00falacha S\u00edneacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Uimhreacha Airgead\u00fala sa tS\u00ednis Shimplithe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Uimhreacha Airgead\u00fala sa tS\u00ednis Thraidisi\u00fanta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Uimhreacha Airgead\u00fala Seap\u00e1nacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"Digit\u00ed Str\u00edce D\u00fabailte Matamaitici\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Digit\u00ed Tamalacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"F\u00e9ilire B\u00fada\u00edoch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"F\u00e9ilire Aet\u00f3ipice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"F\u00e9ilire Seap\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Form\u00e1id Airgeadra Caighde\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Ord S\u00f3rt\u00e1la Athfhoirmithe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Cuardach de r\u00e9ir Consan Tosaigh Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Ord S\u00f3rt\u00e1la Caighde\u00e1nach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"C\u00f3ras Tomhais Reacht\u00fail"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"C\u00f3ras Tomhais SAM"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Digit\u00ed L\u00e1nleithid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"Digit\u00ed Tai Tham Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"Digit\u00ed Troma Matamaitici\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"Digit\u00ed Aonsp\u00e1is Matamaitici\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"Digit\u00ed Troma Sans-Serif Matamaitici\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"Digit\u00ed Sans-Serif Matamaitici\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"Digit\u00ed Myanmar Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"Digit\u00ed Myanmar Tai Laing"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Uimhreacha C\u00e1s \u00cdochtair R\u00f3mh\u00e1nacha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"F\u00e9ilire Ghr\u00e9ag\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Ord s\u00f3rt\u00e1la S\u00edneach simplithe - GB 2312"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Ord s\u00f3rt\u00e1la an eolaire teileaf\u00f3in"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Ord S\u00f3rt\u00e1la Focl\u00f3ir\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Ord s\u00f3rt\u00e1la traidisi\u00fanta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"F\u00e9ilire Ioslamach (an Araib Sh\u00e1dach, dearcadh)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"F\u00e9ilire Ioslamach (t\u00e1blach, seanr\u00e9 r\u00e9alteola\u00edoch)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"F\u00e9ilire Ioslamach (t\u00e1blach, seanr\u00e9 shibhialta)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"F\u00e9ilire Ioslamach (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"F\u00e9ilire Aet\u00f3ipice Amete Alem"_s)
		})
	}));
	return data;
}

LocaleNames_ga::LocaleNames_ga() {
}

$Class* LocaleNames_ga::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ga, name, initialize, &_LocaleNames_ga_ClassInfo_, allocate$LocaleNames_ga);
	return class$;
}

$Class* LocaleNames_ga::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun