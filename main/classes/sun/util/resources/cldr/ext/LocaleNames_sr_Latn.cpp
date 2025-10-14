#include <sun/util/resources/cldr/ext/LocaleNames_sr_Latn.h>

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

$MethodInfo _LocaleNames_sr_Latn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sr_Latn::*)()>(&LocaleNames_sr_Latn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sr_Latn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Latn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Latn_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Latn($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Latn));
}

void LocaleNames_sr_Latn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Latn::getContents() {
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
			$of(u"Severnoameri\u010dki kontinent"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Ju\u017ena Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Okeanija"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Zapadna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Centralna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Isto\u010dna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Severna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Centralna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Ju\u017ena Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Severna i Ju\u017ena Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Severna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibi"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Isto\u010dna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Ju\u017ena Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Jugoisto\u010dna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Ju\u017ena Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australija i Novi Zeland"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezija"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronezijski region"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Centralna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Zapadna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Isto\u010dna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Severna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Zapadna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Podsaharska Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinska Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ostrvo Asension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Ujedinjeni Arapski Emirati"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Avganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angvila"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Jermenija"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktik"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Ameri\u010dka Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australija"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Olandska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbejd\u017ean"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna i Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglade\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgija"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bugarska"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrein"_s)
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
			$of("Sveti Bartolomej"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivija"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karipska Holandija"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahami"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Ostrvo Buve"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bocvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belorusija"_s)
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
			$of("Kokosova (Kilingova) Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo - Kin\u0161asa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Centralnoafri\u010dka Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazavil"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160vajcarska"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Obala Slonova\u010de (Kot d\u2019Ivoar)"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kukova Ostrva"_s)
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
			$of("Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbija"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Ostrvo Kliperton"_s)
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
			$of("Zelenortska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Bo\u017ei\u0107no Ostrvo"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipar"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010ce\u0161ka"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Nema\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Dijego Garsija"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u017eibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danska"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanska Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Al\u017eir"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Seuta i Melilja"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonija"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipat"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Zapadna Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0160panija"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Evropska unija"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Evrozona"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finska"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fid\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Foklandska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezija"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Farska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francuska"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ujedinjeno Kraljevstvo"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzija"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Francuska Gvajana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernzi"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gvadelup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatorijalna Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ju\u017ena D\u017eord\u017eija i Ju\u017ena Sendvi\u010dka Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gvineja-Bisao"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gvajana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("SAR Hongkong (Kina)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ostrvo Herd i Mekdonaldova ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Hrvatska"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ma\u0111arska"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanarska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezija"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irska"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ostrvo Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indija"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britanska teritorija Indijskog okeana"_s)
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
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italija"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"D\u017eerzi"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
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
			$of("Komorska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sent Kits i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Severna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Ju\u017ena Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajt"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kajmanska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazahstan"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Liban"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sveta Lucija"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lihten\u0161tajn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0160ri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litvanija"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonija"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libija"_s)
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
			$of("Moldavija"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Crna Gora"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sveti Martin (Francuska)"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Mar\u0161alska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Severna Makedonija"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mijanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolija"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("SAR Makao (Kina)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Severna Marijanska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritanija"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Monserat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricijus"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nova Kaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ostrvo Norfok"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holandija"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norve\u0161ka"_s)
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
			$of("Novi Zeland"_s)
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
			$of("Francuska Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nova Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poljska"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sen Pjer i Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkern"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinske teritorije"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalija"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Okeanija (udaljena ostrva)"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reinion"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunija"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Srbija"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusija"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudijska Arabija"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomonska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sej\u0161eli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0160vedska"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sveta Jelena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenija"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard i Jan Majen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slova\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sijera Leone"_s)
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
			$of("Somalija"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Ju\u017eni Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome i Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sveti Martin (Holandija)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirija"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svazilend"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Kunja"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ostrva Turks i Kaikos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010cad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francuske Ju\u017ene Teritorije"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajland"_s)
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
			$of(u"Timor-Leste (Isto\u010dni Timor)"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunis"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turska"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad i Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajvan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanija"_s)
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
			$of("Udaljena ostrva SAD"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Ujedinjene nacije"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Sjedinjene Dr\u017eave"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sent Vinsent i Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venecuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britanska Devi\u010danska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Ameri\u010dka Devi\u010danska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vijetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Valis i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudoakcenti"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudobidi"_s)
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
			$of("Majot"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Ju\u017enoafri\u010dka Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambija"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Nepoznat region"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afarski"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abhaski"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avestanski"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akanski"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharski"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonski"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asamski"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avarski"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbejd\u017eanski"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0161kirski"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("beloruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bugarski"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalski"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetanski"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretonski"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosanski"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalonski"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u010de\u010denski"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010damoro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korzikanski"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010de\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("crkvenoslovenski"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u010duva\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"vel\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danski"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"nema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("maldivski"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"d\u017eonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"gr\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0161panski"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonski"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskijski"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finski"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fid\u017eijski"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("farski"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("zapadni frizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irski"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0161kotski gelski"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicijski"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("gvarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gud\u017earati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manks"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebrejski"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("hrvatski"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"hai\u0107anski"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ma\u0111arski"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("jermenski"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingva"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indone\u017eanski"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingve"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"se\u010duanski ji"_s)
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
			$of("islandski"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitutski"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japanski"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanski"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("gruzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kvanjama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kaza\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("grenlandski"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kmerski"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("korejski"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ka\u0161mirski"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornvolski"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiski"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latinski"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksembur\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limbur\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laoski"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litvanski"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("letonski"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malga\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"mar\u0161alski"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maorski"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedonski"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malajski"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malte\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmanski"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruski"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norve\u0161ki bukmol"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("severni ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalski"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("holandski"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norve\u0161ki ninorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norve\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ju\u017eni ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"njand\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("oksitanski"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"od\u017eibve"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("odija"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetinski"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pend\u017eapski"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("poljski"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pa\u0161tunski"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u010dua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"roman\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumunski"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruski"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinjaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardinski"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("severni sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("srpskohrvatski"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinhale\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slova\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovena\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0161ona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalski"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("srpski"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svazi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0161vedski"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamilski"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tad\u017ei\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tajski"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmenski"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("cvana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonganski"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turski"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("conga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarski"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahi\u0107anski"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgurski"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrajinski"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbe\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vijetnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapik"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("valonski"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("kosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"d\u017euan\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ace\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("akoli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigejski"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("agem"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("akadijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutski"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ju\u017enoaltajski"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("staroengleski"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"mapu\u010de"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"arava\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturijski"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadi"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"belu\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("balijski"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
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
			$of("bgn"_s),
			$of(u"zapadni belu\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bod\u017epuri"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("sisika"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("burjatski"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugijski"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blinski"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kado"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karipski"_s)
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
			$of("sebuanski"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u010diga"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u010dip\u010da"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u010dagataj"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u010du\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u010dinu\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u010doktavski"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u010dipevjanski"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u010deroki"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u010dejenski"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("centralni kurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("koptski"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krimskotatarski"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"sej\u0161elski kreolski francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ka\u0161upski"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("darginski"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaverski"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slejvi"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogripski"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"donjolu\u017ei\u010dkosrpski"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("srednjeholandski"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"d\u017eola fonji"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u0111ula"_s)
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
			$of(u"efi\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("staroegipatski"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ekad\u017euk"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamitski"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("srednjeengleski"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipinski"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("kajunski francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("srednjefrancuski"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("starofrancuski"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("severnofrizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"isto\u010dnofrizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friulski"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertski"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"srednji visokonema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"staronema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("gotski"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"starogr\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"nema\u010dki (\u0160vajcarska)"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusi"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gvi\u010dinski"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havajski"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligajnonski"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hetitski"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"hmon\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"gornjolu\u017ei\u010dkosrpski"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("ibanski"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingu\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"lo\u017eban"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ma\u010dame"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judeo-persijski"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("judeo-arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"kara-kalpa\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabile"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ka\u010dinski"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"d\u017eu"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kavi"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardijski"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tjap"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("zelenortski"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kasi"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotane\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"kojra \u010diini"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalend\u017einski"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permski"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrenski"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpele"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"kara\u010dajsko-balkarski"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelski"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruk"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0161ambala"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafija"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("kelnski"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumi\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenaj"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landa"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezginski"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("luizijanski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("severni luri"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luisenjo"_s)
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
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("lujia"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurski"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maitili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasarski"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masajski"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mok\u0161a"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisjen"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("srednjeirski"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makuva-mito"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mand\u017eurski"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipurski"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"moho\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosi"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Vi\u0161e jezika"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kri\u0161ki"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandski"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marvari"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzja"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderanski"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napuljski"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"niskonema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niuejski"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kvasio"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiembun"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogajski"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("staronordijski"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("nko"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("severni soto"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasi\u010dni nevarski"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("njamvezi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("njankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("njoro"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("osmanski turski"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinanski"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papijamento"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauski"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigerijski pid\u017ein"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("staropersijski"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"feni\u010danski"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponpejski"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("pruski"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("starooksitanski"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ki\u010de"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rad\u017eastanski"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonganski"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romski"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("cincarski"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rua"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("saha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("samarijanski aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambaj"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sicilijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0161kotski"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"ju\u017enokurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkupski"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("kojraboro seni"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("staroirski"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ta\u0161elhit"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0161anski"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"ju\u017eni sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lule sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("inari sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skolt sami"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdijski"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("sererski"_s)
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
			$of("sumerski"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komorski"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"sirija\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("sirijski"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("timne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonski"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tama\u0161ek"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("njasa tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"cim\u0161ian"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasavak"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinski"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("centralnoatlaski tamazigt"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtski"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugaritski"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("nepoznat jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("vodski"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"vund\u017eo"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("valserski"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("volajta"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varajski"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"va\u0161o"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("varlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmi\u010dki"_s)
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
			$of("japski"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("jangben"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("jemba"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonski"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapote\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blisimboli"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("standardni marokanski tamazigt"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"bez lingvisti\u010dkog sadr\u017eaja"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arapsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("imperijsko aramejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("jermensko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("balijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"blisimboli\u010dno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("bramansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("brajevo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("buginsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhidsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u010dakmansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"ujedinjeni kanadski aborid\u017einski silabici"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("karijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u010damsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u010ceroki"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirt pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"kopti\u010dko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("kiparsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u0107irilica"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Staroslovenska crkvena \u0107irilica"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Dezeret"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("egipatsko narodno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("egipatsko hijeratsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egipatski hijeroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("gruzijsko khutsuri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("gruzijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagoljica"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gotika"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"gr\u010dko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gud\u017earatsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuki pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanuno"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("pojednostavljeno kinesko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicionalno kinesko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahav hmong pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("japanska slogovna pisma"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"staroma\u0111arsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"indu\u0161ko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("stari italik"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"d\u017eamo"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("javansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kajah-li pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"karo\u0161ti pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("kmersko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kanada pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"lao\u0161ko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latinica (fraktur varijanta)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("galska latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lep\u010da pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linearno A pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linearno B pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lisijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandeansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manihejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("majanski hijeroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitik pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malajalamsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"mese\u010devo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei majek pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("mijanmarsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"n\u2019ko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogamsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ol \u010diki pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkonsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("orijansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanjansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("staro permiksko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("pags-pa pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("pisani pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("psalter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("pahlavi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"Feni\u010dansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("porald fonetsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("pisani partian"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"saura\u0161tra pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("znakovno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u0161avijansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhalsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("sundansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("siloti nagri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("sirijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("sirijsko estrangelo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("zapadnosirijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"pismo isto\u010dne Sirije"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanva pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tai le pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("novi tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("telugu pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengvar pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinag pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("tana pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tajlandsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("vai pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("vidljivi govor"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("staropersijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumersko-akadsko kuneiform pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("ji pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("nasledno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matemati\u010dka notacija"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emod\u017ei"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("nepisani jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"zajedni\u010dko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("nepoznato pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"austrijski nema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0161vajcarski visoki nema\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("engleski (Velika Britanija)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"engleski (Sjedinjene Ameri\u010dke Dr\u017eave)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0161panski (Evropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamanski"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("portugalski (Portugal)"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavski"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("kisvahili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Tradicionalna nema\u010dka ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Standardnizovana resijanska ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Nema\u010dka ortografija iz 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("savremeni standardni arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("format valute"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("redosled sortiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"prikazivanje vremena (12- ili 24-\u010dasovno)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("stil preloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistem mernih jedinica"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Vremenska zona"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Varijanta lokaliteta"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("niskosaksonski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"San \u0110or\u0111io/Bila dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Buntling"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Lipovi\u010dki dijalekt resijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Gnjiva/Njiva dijalkekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Oseako/Osojane dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Kompjuter"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resijan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Stolvica/Solbica dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("pojednostavljeni kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("tradicionalni kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Skauz"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskijevi\u010dka ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Isto\u010dni armenijski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Zapadno jermenska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonik"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politonik"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Revidirana ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Francuski iz kasnog srednjeg veka do 1606."_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Rani moderni francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Ujedinjen turski latini\u010dni alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u0160kotski standardni Engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valencijska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("kalendar Republike Kine"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("evropska pravila redosleda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-\u010dasovni sistem (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-\u010dasovni sistem (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-\u010dasovni sistem (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-\u010dasovni sistem (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arapsko-indijske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("jermenski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengalske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devangari cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("gruzijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"gr\u010dki brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gud\u017earatske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmuki cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("pojednostavljeni kineski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("tradicionalni kineski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebrejski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("kmerske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kanada cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"lao\u0161ke cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("zapadne cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malajalam cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("mongolske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("mijanmarske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("orija cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("tamilski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugu cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("tajske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetanske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("podrazumevani Unicode redosled sortiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("razmaknuti stil preloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("rimski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("koptski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("hebrejski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indijski nacionalni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("prethodni redosled sortiranja, zbog kompatibilnosti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinjin sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"pretraga op\u0161te namene"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Sortiranje po broju crta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Redosled sortiranja radikalnim crticama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"puna \u0161irina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"pola \u0161irine"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("normalni stil preloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("strogi stil preloma reda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metri\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Lokalne cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("kineski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("persijski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"ra\u010dunovodstveni format valute"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Tradicionalno kinesko sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numeri\u010dka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"produ\u017eene arapsko-indijske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("mali jermenski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Finansijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"mali gr\u010dki brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("kineski decimalni brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("pojednostavljeni kineski finansijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("tradicionalni kineski finansijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanski finansijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilske cifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budisti\u010dki kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("japanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standardni format valute"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Fonetski redosled sortiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Reformisani redosled sortiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Pretraga prema hangul po\u010detnom suglasniku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standardni redosled sortiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("imperijalni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ameri\u010dki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"cifre pune \u0161irine"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("mali rimski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregorijanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Pojednostavljeno kinesko sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Sortiranje kao telefonski imenik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Redosled sortiranja u re\u010dniku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Tradicionalno sortiranje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Tradicionalni brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Islamski civilni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("islamski kalendar (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("etiopski amet alem kalendar"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Latn::LocaleNames_sr_Latn() {
}

$Class* LocaleNames_sr_Latn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Latn, name, initialize, &_LocaleNames_sr_Latn_ClassInfo_, allocate$LocaleNames_sr_Latn);
	return class$;
}

$Class* LocaleNames_sr_Latn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun