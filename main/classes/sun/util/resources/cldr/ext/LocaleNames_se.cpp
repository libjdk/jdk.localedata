#include <sun/util/resources/cldr/ext/LocaleNames_se.h>

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

$MethodInfo _LocaleNames_se_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_se::*)()>(&LocaleNames_se::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_se_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_se",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_se_MethodInfo_
};

$Object* allocate$LocaleNames_se($Class* clazz) {
	return $of($alloc(LocaleNames_se));
}

void LocaleNames_se::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_se::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"m\u00e1ilbmi"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Afrihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"d\u00e1vvi-Amerihkk\u00e1 ja gaska-Amerihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"m\u00e1tta-Amerihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"oarji-Afrihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"gaska-Amerihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"nuorta-Afrihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"davvi-Afrihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"gaska-Afrihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"m\u00e1tta-Afrihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"d\u00e1vvi-Amerihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibia"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"nuorta-\u00c1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"m\u00e1tta-\u00c1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"m\u00e1tta-nuorta-\u00c1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"m\u00e1tta-Eurohp\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austr\u00e1lia ja O\u0111\u0111a-Sel\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesia guovllus"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u00c1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"gaska-\u00c1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"oarji-\u00c1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Eurohp\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"nuorta-Eurohp\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"davvi-Eurohp\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"oarji-Eurohp\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"lulli-Amerihkk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Ovttastuvvan Ar\u00e1baemir\u00e1htat"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua ja Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Ant\u00e1rktis"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Amerihk\u00e1 Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Nuortariika"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austr\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c5l\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbai\u017ean"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia-Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulg\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Vilges-Ruo\u0161\u0161a"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kan\u00e1da"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Gaska-Afrihk\u00e1 d\u00e1ssev\u00e1ldi"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160veica"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Elfenbenariddu"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u010ciile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Kiinn\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Juovllat-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kypros"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010ceahkka"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Duiska"_s)
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
			$of(u"D\u00e1nm\u00e1rku"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominik\u00e1na d\u00e1ssev\u00e1ldi"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta ja Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Estl\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypta"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Oarje-Sah\u00e1ra"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Sp\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Eurohpa Uniovdna"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Suopma"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fijisullot"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Fearsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankriika"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Stuorra-Brit\u00e1nnia"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Frankriikka Guayana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Kalaallit Nunaat"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"G\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ekvatori\u00e1la Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greika"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Lulli Georgia ja Lulli Sandwich-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard- ja McDonald-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kro\u00e1tia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ung\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kan\u00e1riasullot"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Irl\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Mann-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Isl\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jord\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgisistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambod\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts ja Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Davvi-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"M\u00e1tta-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Cayman-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lietuva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"L\u00e1tvia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mold\u00e1via"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Frankriikka Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Mak\u00e1o"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Davvi-Mari\u00e1nat"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauret\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u00e1lta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediivvat"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malesia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"O\u0111\u0111a-Kaledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolksullot"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Vuolleeatnamat"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norga"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"O\u0111\u0111a-Sel\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Frankriikka Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-O\u0111\u0111a-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippiinnat"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polen"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre ja Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Portug\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Ruo\u0161\u0161a"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saudi-Ar\u00e1bia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomon-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Davvisudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Ruo\u0167\u0167a"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalb\u00e1rda ja Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slov\u00e1kia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"M\u00e1ttasudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 ja Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Vuolleeatnamat Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svazieana"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks ja Caicos-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"T\u010dad"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thaieana"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Ta\u017eikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Nuorta-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Durka"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad ja Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amerihk\u00e1 ovttastuvvan st\u00e1htat"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatik\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ja Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Brittania Virgin-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("AOS Virgin-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ja Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"M\u00e1tta-Afrihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("dovdameahttun guovlu"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrik\u00e1nsagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragoniagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ar\u00e1bagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"vilges-ruo\u0161\u0161agiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulg\u00e1riagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretonagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katal\u00e1nagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corsicagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010deahkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("kymragiella"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"d\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("duiskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkhagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("greikkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ea\u014bgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"sp\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("esttegiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persijagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("suomagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidjigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("fearagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"fr\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("oarjifriisagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("iirragiella"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujaratagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manksgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haussagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"kro\u00e1tiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ung\u00e1rgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armeenagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"isl\u00e1nddagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"it\u00e1liagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"jap\u00e1nagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kambodiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"l\u00e1htengiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburggagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("liettuvagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"l\u00e1tviagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maorigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedoniagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongoliagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"girjed\u00e1rogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepaligiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holl\u00e1nddagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"o\u0111\u0111ad\u00e1rogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"d\u00e1rogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oksit\u00e1nagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portug\u00e1lagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"roman\u0161giella"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rom\u00e1niagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ruo\u0161\u0161agiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"davvis\u00e1megiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbokroatiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slov\u00e1kiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovenagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alb\u00e1nagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ruo\u0167agiella"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u0167aigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("durkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdugiella"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallonagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"kiinn\u00e1giella"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("acehgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"boares ea\u014bgalasgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("marigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filippiinnagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"g\u00e1rjilgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u0161agiella"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("ersagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sisiliagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkupagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"lullis\u00e1megiella"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"julevs\u00e1megiella"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"an\u00e1ra\u0161giella"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"nuortala\u0161giella"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("shimaorigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("dovdameahttun giella"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantongiella"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ar\u00e1ba"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"kyrillala\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"greikkala\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"kiinna\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u00e1lki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u00e1rbevirola\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"l\u00e1htena\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"orrut ch\u00e1llojuvvot"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"dovdameahttun ch\u00e1llin"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("ortnet"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuhtta"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"numer\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u00e1lki kiin\u00e1giella"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u00e1rbevirola\u0161 kiinn\u00e1giella"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("X-SAMPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"oarjelohkos\u00e1tni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("pinyin ortnet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("kiinna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhista kaleander"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"viddis oarjelohkos\u00e1tni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregoria kaleander"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u00e1rbevirola\u0161 ortnet"_s)
		})
	}));
	return data;
}

LocaleNames_se::LocaleNames_se() {
}

$Class* LocaleNames_se::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_se, name, initialize, &_LocaleNames_se_ClassInfo_, allocate$LocaleNames_se);
	return class$;
}

$Class* LocaleNames_se::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun