#include <sun/util/resources/cldr/ext/LocaleNames_sk.h>

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

$MethodInfo _LocaleNames_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sk::*)()>(&LocaleNames_sk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sk_MethodInfo_
};

$Object* allocate$LocaleNames_sk($Class* clazz) {
	return $of($alloc(LocaleNames_sk));
}

void LocaleNames_sk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sk::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("svet"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Severn\u00e1 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Ju\u017en\u00e1 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oce\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"z\u00e1padn\u00e1 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Stredn\u00e1 Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"v\u00fdchodn\u00e1 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"severn\u00e1 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"stredn\u00e1 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ju\u017en\u00e9 \u00fazemia Afriky"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"severn\u00e9 \u00fazemia Ameriky"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibik"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"v\u00fdchodn\u00e1 \u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ju\u017en\u00e1 \u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"juhov\u00fdchodn\u00e1 \u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ju\u017en\u00e1 Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austral\u00e1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"oblas\u0165 Mikron\u00e9zie"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polyn\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"stredn\u00e1 \u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"z\u00e1padn\u00e1 \u00c1zia"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"v\u00fdchodn\u00e1 Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"severn\u00e1 Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"z\u00e1padn\u00e1 Eur\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"subsaharsk\u00e1 Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latinsk\u00e1 Amerika"_s)
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
			$of(u"Spojen\u00e9 arabsk\u00e9 emir\u00e1ty"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua a Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e1nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00e9nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antarkt\u00edda"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argent\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Americk\u00e1 Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Rak\u00fasko"_s)
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
			$of("Alandy"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajd\u017ean"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna a Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglad\u00e9\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgicko"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulharsko"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrajn"_s)
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
			$of(u"Sv\u00e4t\u00fd Bartolomej"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karibsk\u00e9 Holandsko"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Braz\u00edlia"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamy"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bhut\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvetov ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bielorusko"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosov\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kon\u017esk\u00e1 demokratick\u00e1 republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Stredoafrick\u00e1 republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kon\u017esk\u00e1 republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160vaj\u010diarsko"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Pobre\u017eie Slonoviny"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookove ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u010cile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u010c\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostarika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kapverdy"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Viano\u010dn\u00fd ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010cesko"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Nemecko"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u017eibutsko"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u00e1nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominik\u00e1nska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u017e\u00edrsko"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta a Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekv\u00e1dor"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Est\u00f3nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Z\u00e1padn\u00e1 Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0160panielsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Eti\u00f3pia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Eur\u00f3pska \u00fania"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"euroz\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"F\u00ednsko"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fid\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandy"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikron\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faersk\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Franc\u00fazsko"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Spojen\u00e9 kr\u00e1\u013eovstvo"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Gruz\u00ednsko"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Franc\u00fazska Guyana"_s)
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
			$of(u"Gibralt\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gr\u00f3nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
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
			$of(u"Rovn\u00edkov\u00e1 Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u00e9cko"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ju\u017en\u00e1 Georgia a Ju\u017en\u00e9 Sandwichove ostrovy"_s)
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
			$of(u"Hongkong \u2013 OAO \u010c\u00edny"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heardov ostrov a Macdonaldove ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Chorv\u00e1tsko"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ma\u010farsko"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kan\u00e1rske ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u00cdrsko"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ostrov Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britsk\u00e9 indickooce\u00e1nske \u00fazemie"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Taliansko"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jord\u00e1nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonsko"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Ke\u0148a"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizsko"_s)
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
			$of("Komory"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Sv\u00e4t\u00fd Kri\u0161tof a Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Severn\u00e1 K\u00f3rea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Ju\u017en\u00e1 K\u00f3rea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajt"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kajmanie ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachstan"_s)
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
			$of(u"Sv\u00e4t\u00e1 Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lichten\u0161tajnsko"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sr\u00ed Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembursko"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Loty\u0161sko"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00edbya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u010cierna Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Sv\u00e4t\u00fd Martin (fr.)"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallove ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Severn\u00e9 Maced\u00f3nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanmarsko"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolsko"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macao \u2013 OAO \u010c\u00edny"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Severn\u00e9 Mari\u00e1ny"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u00edcius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivy"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajzia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nov\u00e1 Kaled\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holandsko"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u00f3rsko"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nep\u00e1l"_s)
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
			$of(u"Nov\u00fd Z\u00e9land"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e1n"_s)
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
			$of(u"Franc\u00fazska Polyn\u00e9zia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-Nov\u00e1 Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filip\u00edny"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Po\u013esko"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre a Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairnove ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palest\u00ednske \u00fazemia"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalsko"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguaj"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ostatn\u00e9 Tichomorie"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunsko"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Srbsko"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusko"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saudsk\u00e1 Ar\u00e1bia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0160alam\u00fanove ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychely"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0160v\u00e9dsko"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sv\u00e4t\u00e1 Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovinsko"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard a Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovensko"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Mar\u00edno"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Som\u00e1lsko"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Ju\u017en\u00fd Sud\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sv\u00e4t\u00fd Tom\u00e1\u0161 a Princov ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Salv\u00e1dor"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Sv\u00e4t\u00fd Martin (hol.)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00fdria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks a Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010cad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Franc\u00fazske ju\u017en\u00e9 a antarktick\u00e9 \u00fazemia"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thajsko"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tad\u017eikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"V\u00fdchodn\u00fd Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkm\u00e9nsko"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisko"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turecko"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad a Tobago"_s)
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
			$of("Ukrajina"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Men\u0161ie od\u013eahl\u00e9 ostrovy USA"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Organiz\u00e1cia Spojen\u00fdch n\u00e1rodov"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Spojen\u00e9 \u0161t\u00e1ty"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguaj"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatik\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sv\u00e4t\u00fd Vincent a Grenad\u00edny"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britsk\u00e9 Panensk\u00e9 ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Americk\u00e9 Panensk\u00e9 ostrovy"_s)
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
			$of("Wallis a Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"falo\u0161n\u00e1 diakritika"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"obr\u00e1tenie sprava do\u013eava"_s)
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
			$of(u"Ju\u017en\u00e1 Afrika"_s)
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
			$of(u"nezn\u00e1my regi\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abch\u00e1z\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avest\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrik\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"arag\u00f3n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arab\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u00e1sam\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aymar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajd\u017ean\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0161kir\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"bieloru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulhar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"beng\u00e1l\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibet\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bret\u00f3n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosnia\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katal\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u010de\u010den\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010damor\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korzi\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"kr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010de\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"cirkevn\u00e1 slovan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u010duva\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"wale\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"d\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"nem\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"maldiv\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ewe\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"gr\u00e9\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angli\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0161paniel\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"est\u00f3n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baski\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"perz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulb\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"f\u00edn\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fid\u017eij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"faer\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"franc\u00faz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"z\u00e1padn\u00e1 fr\u00edz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u00edr\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0161k\u00f3tska gael\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"gal\u00edcij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaran\u00edj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gud\u017ear\u00e1t\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"man\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hau\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"hebrej\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hind\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"chorv\u00e1t\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haitsk\u00e1 kreol\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ma\u010far\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"arm\u00e9n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indon\u00e9z\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igbo\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"s\u2019\u010dchuansk\u00e1 iov\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupik"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"talian\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japon\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"j\u00e1v\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"gruz\u00edn\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"kong\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"kikuj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"kua\u0148ama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kaza\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"gr\u00f3n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"khm\u00e9r\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kannad\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"k\u00f3rej\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"kanurij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ka\u0161m\u00edr\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurd\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"korn\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgiz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"latin\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxembur\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"gand\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limbur\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"lingal\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"lao\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litov\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"lub\u010dina (katan\u017esk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"loty\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malga\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshall\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maced\u00f3n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malaj\u00e1lam\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mongol\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"mar\u00e1th\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malt\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"barm\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"n\u00f3r\u010dina (bokmal)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ndebel\u010dina (severn\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nep\u00e1l\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holand\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"n\u00f3r\u010dina (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"n\u00f3r\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ndebel\u010dina (ju\u017en\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u0148and\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okcit\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"od\u017eibva"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"orom\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"ur\u00edj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oset\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pand\u017e\u00e1b\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"p\u00e1l\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"po\u013e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pa\u0161t\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugal\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u010du\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"r\u00e9torom\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"rund\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumun\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"rwand\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sard\u00edn\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindh\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"saam\u010dina (severn\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"srbochorv\u00e1t\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinhal\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"sloven\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovin\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0161on\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"som\u00e1l\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alb\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"srb\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"svazij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"soth\u010dina (ju\u017en\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sund\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0161v\u00e9d\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"swahil\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamil\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"telug\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tad\u017ei\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"thaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigri\u0148a"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkm\u00e9n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"tagal\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"tswan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tong\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ture\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"tsong\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tat\u00e1r\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahit\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ujgur\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrajin\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urd\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbe\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"vend\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnam\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"val\u00f3n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wolof\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"xho\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorub\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u010duang\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u010d\u00edn\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulu\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"aceh\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"a\u010doli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adygej\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ain\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akkad\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleut\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ju\u017en\u00e1 altaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"star\u00e1 angli\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"aramej\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapa\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"arab\u010dina (nad\u017edsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"arawa\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ast\u00far\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"bal\u00fa\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bed\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"z\u00e1padn\u00e1 bal\u00fa\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bh\u00f3d\u017epur\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"bikol\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"brad\u017e\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"buriat\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugi\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kaddo"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"karib\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"kajug\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u010dakma"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"cebu\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u010dib\u010da"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u010dagataj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u010dinuck\u00fd \u017earg\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u010dokt\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u010dipevaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u010derok\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u010dejen\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"kurd\u010dina (sor\u00e1n\u00ed)"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"kopt\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"krymsk\u00e1 tat\u00e1r\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"seychelsk\u00e1 kreol\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ka\u0161ub\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dakot\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"dargin\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delawar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"slav\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"dogrib\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"dink\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"d\u00f3gr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"dolnolu\u017eick\u00e1 srb\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"stredn\u00e1 holand\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u010fula"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"staroegypt\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ekad\u017euk"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elam\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"stredn\u00e1 angli\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"fang\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filip\u00edn\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"fon\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"franc\u00faz\u0161tina (Cajun)"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"stredn\u00e1 franc\u00faz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"star\u00e1 franc\u00faz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"severn\u00e1 fr\u00edz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"v\u00fdchodofr\u00edz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"friul\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagauz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"eti\u00f3p\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"kiribat\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"stredn\u00e1 horn\u00e1 nem\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"star\u00e1 horn\u00e1 nem\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"g\u00f3nd\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"g\u00f3t\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"starogr\u00e9\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"nem\u010dina (\u0161vaj\u010diarska)"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ku\u010din\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hiligajnon\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"chetit\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"hmong\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"hornolu\u017eick\u00e1 srb\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"hup\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"iban\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilok\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingu\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ma\u0161ame"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u017eidovsk\u00e1 perz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u017eidovsk\u00e1 arab\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"karakalpa\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabyl\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ka\u010djin\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabard\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kapverd\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"khasij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"chotan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"z\u00e1padn\u00e1 songhaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalend\u017ein"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komi-permia\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konk\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kusaie"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"kara\u010dajevsko-balkar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karel\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"kuruch\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0161ambala"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kol\u00edn\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumy\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"kutenaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u017eidovsk\u00e1 \u0161paniel\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"lahand\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezgin\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakot\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"kreol\u010dina (Louisiana)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"severn\u00e9 luri"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"lub\u010dina (lulu\u00e1nska)"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luise\u0148o"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"mizor\u00e1m\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhja"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madur\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magadh\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"maithil\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"makasar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u0161ian\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"mandar\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"mendej\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"maur\u00edcijsk\u00e1 kreol\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"stredn\u00e1 \u00edr\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"mikmak\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"minangkabau\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mand\u017eu\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"man\u00edpur\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohawk\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"viacer\u00e9 jazyky"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kr\u00edk\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirand\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"erzjan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"m\u00e1zandar\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapol\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"doln\u00e1 nem\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"nev\u00e1r\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"nias\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niue\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"nogaj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"star\u00e1 n\u00f3r\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"soth\u010dina (severn\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasick\u00e1 nev\u00e1r\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u0148amwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0148ankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u0148oro"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"osed\u017e\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"osmansk\u00e1 ture\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"pahlav\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"kapampangan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palau\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigerijsk\u00fd pid\u017ein"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"star\u00e1 perz\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"feni\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"pohnpei\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"pru\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"star\u00e1 okcit\u00e1n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"quich\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rad\u017eastan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapanuj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongsk\u00e1 maorij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"r\u00f3m\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arumun\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"sandawe\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jakut\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samarit\u00e1nska aramej\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"sasa\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"santal\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sic\u00edl\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0161k\u00f3t\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"ju\u017en\u00e1 kurd\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"senek\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"selkup\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"star\u00e1 \u00edr\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0161an\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u010dadsk\u00e1 arab\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"saam\u010dina (ju\u017en\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"saam\u010dina (lulsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"saam\u010dina (inarijsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"saam\u010dina (skoltsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogdij\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"surinam\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"serer\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sumer\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"komor\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"s\u00fdr\u010dina (klasick\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"s\u00fdr\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"ter\u00eana"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetum\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigrej\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelau\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"kling\u00f3n\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"tlingit\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tuareg\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u0148asa tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"novoguinejsk\u00fd pid\u017ein"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"cim\u0161jan\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuval\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvian\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"tamazight (stredomarock\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurt\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugarit\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"nezn\u00e1my jazyk"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"vod\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"walser\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"walam\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmy\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("jao"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"jap\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("jangben"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kanton\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapot\u00e9\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"syst\u00e9m Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tuareg\u010dina (marock\u00e1 \u0161tandardn\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"zuni\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"bez jazykov\u00e9ho obsahu"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"arabsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"arm\u00e9nske"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"balijsk\u00fd"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"beng\u00e1lske"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braillovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cyrilika"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"d\u00e9van\u00e1gar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"egyptsk\u00e9 hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"eti\u00f3pske"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"gruz\u00ednske"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("hlaholika"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"gotick\u00fd"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"gr\u00e9cke"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gud\u017ear\u00e1t\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u010d\u00ednske a bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u010d\u00ednske"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"zjednodu\u0161en\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"tradi\u010dn\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"hebrejsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("kana"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"japonsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"khm\u00e9rske"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"kannadsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"k\u00f3rejsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"laosk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"line\u00e1rna A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"line\u00e1rna B"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"maysk\u00e9 hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"malaj\u00e1lamske"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"mongolsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"mejtej majek (manipursk\u00e9)"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"barmsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"sant\u00e1lske (ol chiki)"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"ur\u00edjske"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"osmansk\u00fd"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Runov\u00e9 p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"sinh\u00e1lske"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"tamilsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"telugsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"t\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"thajsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"tibetsk\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matematick\u00fd z\u00e1pis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emod\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symboly"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"bez z\u00e1pisu"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"v\u0161eobecn\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"nezn\u00e1me p\u00edsmo"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"nem\u010dina (rak\u00faska)"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"nem\u010dina (\u0161vaj\u010diarska spisovn\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"angli\u010dtina (austr\u00e1lska)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"angli\u010dtina (kanadsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"angli\u010dtina (britsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"angli\u010dtina (americk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0161paniel\u010dina (eur\u00f3pska)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u0161paniel\u010dina (mexick\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"dar\u00edj\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"franc\u00faz\u0161tina (kanadsk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"franc\u00faz\u0161tina (\u0161vaj\u010diarska)"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"fl\u00e1m\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugal\u010dina (braz\u00edlska)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugal\u010dina (eur\u00f3pska)"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldav\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"svahil\u010dina (kon\u017esk\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"arab\u010dina (modern\u00e1 \u0161tandardn\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u0161paniel\u010dina (latinskoamerick\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"form\u00e1t meny"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("zoradenie"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("mena"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"hodinov\u00fd cyklus (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u0161t\u00fdl koncov riadka"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"mern\u00e1 s\u00fastava"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u010d\u00edsla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\u010dasov\u00e9 p\u00e1smo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("variant miestneho nastavenia"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"doln\u00e1 sa\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u010d\u00edn\u0161tina (zjednodu\u0161en\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u010d\u00edn\u0161tina (tradi\u010dn\u00e1)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u0161k\u00f3tska \u0161tandardn\u00e1 angli\u010dtina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u010d\u00ednsky republik\u00e1nsky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"eur\u00f3pske zoradenie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-hodinov\u00fd cyklus (0 \u2013 11)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-hodinov\u00fd cyklus (1 \u2013 12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-hodinov\u00fd cyklus (0 \u2013 23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-hodinov\u00fd cyklus (1 \u2013 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"americk\u00e1 transliter\u00e1cia BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"arabsko-indick\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"arm\u00e9nske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"beng\u00e1lske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u010d\u00edslice d\u00e9van\u00e1gar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"eti\u00f3pske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"gruz\u00ednske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"gr\u00e9cke \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gud\u017ear\u00e1tske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u010d\u00edslice gurumukh\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u010d\u00edslice zjednodu\u0161enej \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u010d\u00edslice tradi\u010dnej \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"hebrejsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"japonsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"khm\u00e9rske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"kannadsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"laosk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"arabsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"malaj\u00e1lamske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongolsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"barmsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ur\u00edjske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u010d\u00edslice tradi\u010dnej tamil\u010diny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"telugsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"thajsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"tibetsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vaisk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"k\u00f3rejsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"predvolen\u00e9 zoradenie unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"vo\u013en\u00fd \u0161t\u00fdl koncov riadka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"r\u00edmske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Koptick\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u017eidovsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indick\u00fd n\u00e1rodn\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"predch\u00e1dzaj\u00face zoradenie, kompatibilita"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Triedenie pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"v\u0161eobecn\u00e9 vyh\u013ead\u00e1vanie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Tiedenie pod\u013ea \u0165ahov"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Usporiadanie pod\u013ea znakov radik\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"cel\u00e1 \u0161\u00edrka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"polovi\u010dn\u00e1 \u0161\u00edrka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"be\u017en\u00fd \u0161t\u00fdl koncov riadka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"presn\u00fd \u0161t\u00fdl koncov riadka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"medzin\u00e1rodn\u00e1 transliter\u00e1cia GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metrick\u00e1 s\u00fastava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Nat\u00edvne \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u010d\u00ednsky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"islamsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"kalend\u00e1r ISO 8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"perzsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u00fa\u010dtovn\u00fd form\u00e1t meny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Tradi\u010dn\u00fd \u010d\u00ednsky Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"\u010c\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"roz\u0161\u00edren\u00e9 arabsko-indick\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"mal\u00e9 arm\u00e9nske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finan\u010dn\u00edcky z\u00e1pis \u010d\u00edsiel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"mal\u00e9 gr\u00e9cke \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u010d\u00ednske desiatkov\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"finan\u010dn\u00e9 \u010d\u00edslice zjednodu\u0161enej \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"finan\u010dn\u00e9 \u010d\u00edslice tradi\u010dnej \u010d\u00edn\u0161tiny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japonsk\u00e9 finan\u010dn\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"tamilsk\u00e9 \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"buddhistick\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"eti\u00f3psky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"japonsk\u00fd kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u0161tandardn\u00fd form\u00e1t meny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetick\u00e9 radenie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reformovan\u00e9 usporiadanie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"H\u013eada\u0165 pod\u013ea po\u010diato\u010dnej spoluhl\u00e1sky p\u00edsma Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0161tandardn\u00e9 zoradenie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"britsk\u00e1 mern\u00e1 s\u00fastava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"americk\u00e1 mern\u00e1 s\u00fastava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u010d\u00edslice s celou \u0161\u00edrkou"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"mal\u00e9 r\u00edmske \u010d\u00edslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"gregori\u00e1nsky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Zjednodu\u0161en\u00fd \u010d\u00ednsky GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Lexikografick\u00e9 triedenie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Usporiadanie slovn\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Tradi\u010dn\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradi\u010dn\u00e9 \u010d\u00edslovky"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Islamsk\u00fd ob\u010diansky kalend\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"islamsk\u00fd kalend\u00e1r (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Eti\u00f3psky kalend\u00e1r Amete Alem"_s)
		})
	}));
	return data;
}

LocaleNames_sk::LocaleNames_sk() {
}

$Class* LocaleNames_sk::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sk, name, initialize, &_LocaleNames_sk_ClassInfo_, allocate$LocaleNames_sk);
	return class$;
}

$Class* LocaleNames_sk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun