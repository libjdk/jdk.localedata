#include <sun/util/resources/cldr/ext/LocaleNames_ksh.h>

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

$MethodInfo _LocaleNames_ksh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ksh::*)()>(&LocaleNames_ksh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ksh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ksh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ksh_MethodInfo_
};

$Object* allocate$LocaleNames_ksh($Class* clazz) {
	return $of($alloc(LocaleNames_ksh));
}

void LocaleNames_ksh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ksh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"de \u00c4\u00e4d"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Affrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Nood-Am\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"S\u00f6hd-Am\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Ozejahneje"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"W\u00e4\u00df-Affrika"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Meddelamm\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"O\u00df-Affrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nood-Affrika"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Meddel-Affrika"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"S\u00f6hd-Affrika"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amm\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"der Norde vun Am\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("de Karribik"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"O\u00df-Aasije"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"S\u00f6hd-Aasije"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"S\u00f6hd-O\u00df-Aasije"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"S\u00f6hd-Europpa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"de Rejjohn \u00f6m Austrahlije"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Mellanehsije"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("de Rejohn vun Mikronehseje"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinehsije"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Aasije"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Meddelaasije"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"W\u00e4\u00df-Aasije"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europpa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"O\u00df-Europpa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nood-Europpa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"W\u00e4\u00df-Europpa"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Lateinam\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"A\u00dfension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Vereinschte Arrabesche Emmirate"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afjaanistahn"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigwa un Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anggwilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albaanije"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Arrmeenije"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angjoola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"der S\u00f6dpol"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Ajjentiinije"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Ammerikaanesch Sammoha"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00d6\u00f6sterisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Austraalije"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("de Ohland-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Asserbaidschahn"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bo\u00dfnije un Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("de Ensel Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesch"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Bellje"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Bukkinna-Faase"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulljaarije"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bachrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"d\u00e4 Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"de Zint Batt\u00e4lmi-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("de Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolliivije"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"de karribbesche Nederl\u00e4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilije"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("de Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Buttaan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("de Buvee-Ensel"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bozwaana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Wie\u00dfru\u00dfland"_s)
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
			$of("de Kokkos-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"d\u00e4 Konggo (Kinschasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"de Z\u00e4ntraalaffrikaanesche Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"d\u00e4 Konggo (Brassavill)"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("de Schweiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u00c4lfebeijn-K\u00f6\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("de Kuuk-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Schiile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kammeruhn"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Schiina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbije"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("de Klipperton-Ensel"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostarika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuhba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"de kapv\u00e4rdesche Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("de Weihnaachs-Ensel"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Z\u00fcppere"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"de Tsch\u00e4schei"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Do\u00fctschland"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("de Diego-Garcia-Ensel"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Dschibutti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u00e4nemark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominnika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("de Dommenekaanesche Reppublik"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Alljeerije"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Ze\u2019uta un Meliija"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u00c4kwador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u00c4\u00dfland"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u00c4j\u00fcpte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"W\u00e4\u00df-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u00c4ritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Schpaanije"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u00c4ttijoopije"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"de Europ\u00e4hjesche Unijon"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("de Fidschi-Endelle"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("de Falkland-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneesije"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"de F\u00e4rr\u00f6r-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Jabuhn"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Jruu\u00dfbrettannije"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Jrenahda"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Jeorrjije"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Franz\u00fc\u00fcsesch Jujaana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"J\u00f6\u00f6nsei"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Jaana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Jibralltaa"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Jr\u00f6hnland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Jambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Jinneha"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Juadelupp"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u00c4quatorial Jineeja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Jriescheland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"S\u00f6d-Jeorjie un de s\u00f6dlijje Botteramms-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Juwatemahla"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Juham"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Jinneha_Bi\u00dfau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Jujaana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("de Heart Ensel un de McDonald-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Krowazije"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ha\u2019itti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Unjann"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("de Kannaresche Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indoneesije"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irrland"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"I\u00dfra\u00e4l"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"de Ensel M\u00e4n"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indije"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Brettesche Besezunge em indesche Oozejahn"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Persije"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"I\u00dfland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itaalije"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"J\u00f6\u00f6seh"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jammaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordaanije"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Keenija"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirrjiisije"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodscha"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("de Kommoore"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Zint Kitts un Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nood-Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"S\u00f6d-Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweit"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("de Kaiman-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kassakstahn"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"La\u2019os"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebbannon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("de Ensel Zint-Lutscha"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lischteschtein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Libeerija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesooto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Littaue"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembursch"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"L\u00e4tland"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libbije"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monakko"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldaavije"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("et Monteneejro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"de Zint-M\u00e4\u00e4tes-Ensel"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Maddajaska"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("de Machschall-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Maali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Birma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongjolei"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makau"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"de n\u00f6\u00f6dlijje Marijanne-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Machtinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mautitaanije"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Mong\u00dferrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maurizijus"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Mallediive"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u00e4xiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisije"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namiibije"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Neuschottland"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nijer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("de Noofok-Ensel"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nikaraagua"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikarahguwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"de Nederl\u00e4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norrweeje"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepall"_s)
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
			$of("Neuseeland"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Pannama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Perruh"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Franz\u00fc\u00fcsesch Pollineesije"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuwa Neujineeja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Fillipiine"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistahn"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Pole"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Zint Pj\u00e4\u00e4r un Mikelong"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"de Pitk\u00e4rn-Ensel"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Pochtoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Pal\u00e4stina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Pochtojall"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Pallau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Parraguwai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kataa"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Ozejahnije u\u00dferhallef"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Rehunjohn"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00e4\u00e4nije"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"S\u00e4rbije"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Ru\u00dfland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arraabije"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("de Solomone-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"de Seisch\u00e4lle"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Noodsudahn"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Schweede"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singjapuur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("de Ensel Zint Hellena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u1e9eloveenije"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("de Enselle Svalbard un Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u1e9elovakei"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Sj\u00e4rra Lejone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San-Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("der Sennejall"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somaalije"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"S\u00fcrinamm"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"S\u00f6dsudahn"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Zint Tommeh un Printschipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u00c4l Slavadohr"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Zint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00fcrije"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u1e9ewaasiland"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunja"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("de Enselle Turks un Kaikos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("der Tschadd"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Franz\u00fc\u00fcsesche S\u00f6dsee-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Toojo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadschikistahn"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"O\u00df-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistahn"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuneesije"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tongga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"de T\u00f6rkei"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad un Tob\u00e4hjo"_s)
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
			$of("Tansanija"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"de Ukra\u2019iine"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Ujanda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"de Vereineschte Schtaate vun Am\u00e4rrika ier u\u00dferhallef jel\u00e4\u00e4je Enselsche"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"de vereineschte Schtaate vun Amm\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urrujwai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"U\u00dfbeekistahn"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("der Vattikahn"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Zint Vinz\u00e4nz un de Jrenadines-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("de brettesche Juffer-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"de amm\u00e4rrikahnesche Juffer-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vij\u00e4tnamm"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis un Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Sammoha"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"J\u00e4mme"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majott"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"de Republik S\u00f6daffrika"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambija"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"- J\u00e4hjend onbikannt -"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchahsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"Av\u00e4stahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amhahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Arrajonehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arahbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"A\u00dfamehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aimahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Asserbaidschahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baschkihresch"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Wii\u00dfru\u00dfesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulljahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislahmesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"B\u00e4ngjahlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibehtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Bettohnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Bo\u00dfnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Kattalahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Tsch\u00e4tschehnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorru"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Tsch\u00e4schesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Kersche\u00dflahwesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tschowaschesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Wallihsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"D\u00e4hnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Deutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Butahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Jrihschesch"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u00c4nglesch"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Schpahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u00c4\u00dfnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"P\u00e4rsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulfulde"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fihdschesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"F\u00e4rr\u00f6hresch"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Franz\u00fchsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"W\u00e4\u00dffrihsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Ihresch"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Jallihzesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Juwarahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gutscharatesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Mangx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Hau\u00dfa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Hebr\u00e4hjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hinndi"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Krowatesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Ha\u2019iihtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Unnjarresch"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armehnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herrehro"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("de Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ihdo"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"I\u00dfl\u00e4nndesch"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Etallj\u00e4hnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Je\u2019orjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Rekohjo"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Oschivambo"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kassakkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Jr\u00f6hnl\u00e4ndesch"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Korrejaanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuhresch"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kaschmihresch"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurrdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Kohmesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kornesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirjihsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Lateijnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxemborjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Lugannda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Lemburjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingjalla"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Lahootesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Littouesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Kiluba"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"L\u00e4ttesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Madaja\u00dfkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Maschallehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Ma\u2019ohresch"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Mazedohnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Mallajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongjohlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marrahtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Mallaijesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauruhesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norrwehjesch Bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Nood-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepallehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndongjahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Holl\u00e4ndesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Neu Norrwehjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norrwehjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navvacho"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Schi-Schewa"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Oriija"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"O\u00dfeetesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Panschaabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pollnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paschtuunesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Pochtojesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"K\u00e4ttschowa"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"R\u00e4toromaanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("K-Rundesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rum\u00e4nesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Ru\u00df\u00dfesch"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinja-Ruandesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sinndi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Nood-Lappl\u00e4ndesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sangjo"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"S\u00e4rbokowatesch"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Singjaleesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u1e9elovakesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u1e9eloveenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Sammohanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Schi-Schona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somahlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"S\u00e4rbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Si-Swatesch"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"S\u00f6d-Sooto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sindanehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Schwehdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Suahehlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamihlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telluhju"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tadschihkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Tail\u00e4ndesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tijrenejahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"T\u00f6rkmehnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("Tajalloch"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Se-Zwahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongjahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"T\u00f6rkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Xi-Zongjahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tattahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahihtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Uj\u2019juhresch"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu/Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"U\u00dfbehkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Wenda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vij\u00e4tnammehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Walohnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Woloff"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Isi-Khohsa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddesch"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Joruhba"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Schinehsesch (Mandarin)"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Suhlu"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Aschenehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangmesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adygehjsch"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Tonehsesch Arahbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrehihlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghehmesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Aijnu"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akahdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"Ale\u2019uhtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Ahl \u00c4nglesch"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Anjikahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arrappaho"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Aljehresch Arahbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Marokahnesch Arahbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"\u00c4jiptesch Arahbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Pare"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"Am\u00e4rrekahnesche Blendeschprohch"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Astuhrejahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awahdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Beluhtschesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Balinehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("Bairesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa-Schprohche"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhohdschpuresch"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Edo"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("Bischnuprejahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Brahjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("Brahuijesch"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Boddo"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Burejahtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Bujinehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Bilihnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Zebuwahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Kihja-Schprohch"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Trukehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Tschoktoh"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Tsch\u00e4rrokeh"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"Tsch\u00e4j\u00e4nn"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Z\u00e4ntrahl-Kurrdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Koptesch"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kaschuhbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakohtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Darjihnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Dawedahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dohjribesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Djerma"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Niddersorbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"Du\u2019ala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Meddelnehderl\u00e4ngsch"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dassajahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"K\u00eeembu"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u00c4ffiksch"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("Emilijahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Ahl \u00c4jiptesch"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajukesch"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Meddel\u00e4nglesch"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"Z\u00e4ntrahl-Juppik"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewonndo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Fillipihnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fohnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Frijauhlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Jah"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Ji\u2019is-Ahl-\u00c4ttejohpesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"Jillb\u00e4ttehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Jorontalohsch"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Schwitzerd\u00fctsch"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hauajahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Bovversorrbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Ibahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Ilokahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Engjuschesch"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("Ingjrijahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"Jamaikahnesch-\u00c4nglesch"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lodschbahn"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Njomba"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"J\u00fchdesch-P\u00e4rsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"J\u00fcttesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabyhlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba vun Kehnija"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabadihnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Chimakonde"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Kapv\u00e4rdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"Koro vun de \u00c4lfebeijnk\u00f6\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Kojra Tschihni"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"Kal\u00e4ndjihnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"Kon\u2019kahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"Kp\u00e4le"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"Karatschaj-Balkahresch-T\u00f6rkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karehlesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Korochesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafijahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"K\u00f6lsch"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumykesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladihnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Lango"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("de Landa-Schprooche"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lesjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Silohzi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Nood-Luhresch"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Tschiluba"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Schilunnda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luhjesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Mokschah"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Meitei-Manipuhresch"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("-ongerscheidlijje Schprohche-"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Krihk"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u00c4rsjahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Napolletahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newahresch"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Gyele"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Njijembohn"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nojal"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Nood-Sohto"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K\u2019ische\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Kirombo"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Arromahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Jackutesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Njambaij"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Kojraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Taschelhittesch"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Lule-L\u00e4ppl\u00e4ndesch"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Inahri Lappl\u00e4ndesch"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Kommohresch"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"S\u00fchrejakkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetumsch"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingjohnesch"_s)
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
			$of("tyv"_s),
			$of("Tuvinijahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamasicht ussem meddlere Atlas"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmuchtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundesch"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("-onbikannte-Schprooch-"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Walserd\u00fctsch"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Welahmo"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray-Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Kalm\u00fckkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"J\u00e4mmbah"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kanton-Schinehsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"Suh\u00f1i"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("kein Schprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Sahsajesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arraabesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armeenesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"b\u00e4ngjaalesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"schineeseche \u00d6mschreff Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Blindeschreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"k\u00fcrrellesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("indesche Devanajari-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u00e4tejoopesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"je\u2019orrjesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("jriischesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("jujaraatesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("indesche Gurmukhi-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("korrejaanesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("en schineesesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("eijfacher"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"tradizjon\u00e4ll"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"hebr\u00e4\u00e4jesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("japaanesche Hiddajaana-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("en japaanesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("japaanesche Kattakaana-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("indesche Kannada-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korrejaanesche Schreff udder en schineesesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lahootesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("lateinesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("indesche Malajalam-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongjoolesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("birmahnesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("indesche Orija-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("singjaleesesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamiilesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("indesche Telugu-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("malledivesche Taana-Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"tail\u00e4ndesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibeetesche Schreff"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"-Zeiche \u00e4vver kein Schreff-"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("-jaa keij Schreff-"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"-\u00f6hn\u00df en Schreff-"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("-onbikannte Schreff-"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Deutsch u\u00df \u00d6h\u00dfterich"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Deutsch u\u00df de Schweijz"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u00c4nglesch u\u00df Au\u00dftrahlije"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u00c4nglesch u\u00df Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u00c4nglesch u\u00df Jruh\u00dfbrettannije"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Am\u00e4rrekahnesch \u00c4nglesch"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Schpahnesch en Schpahneje"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Schpahnesch en M\u00e4xikoh"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Franz\u00fchsesch u\u00df Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Franz\u00fchsesch u\u00df de Schweijz"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Fl\u00e4hmesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Brasilljaanesch Pochtojesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Pochtojesesch u\u00df Pochtojall"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Schriefwii\u00df vun 1901 aff"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"resijanesch schtandatt Schriefwii\u00df vun 1994"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Schriefwii\u00df vun 1996 aff"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Schtandatt Arahbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Schpahnesch u\u00df Latting-Amm\u00e4rrika"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"d\u00e4 Kall\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("de Reijefollsch zom Zotiere"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("de Zoot Jeld"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("de Nummere"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Nehdersaksesch en de Nederl\u00e4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"zint jorjo\u2019sche uder bila\u2019sche reijanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"boontlingsche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"jemeinsam widderbel\u00e4f kornesche Schriefwii\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"lipovazesch resijanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"natisonesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"gniva\u2019sche uder njiva\u2019sche reijanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"oseacco\u2019sche uder osojanesche reijanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"resijanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"stolvizanesche uder solbizanesch reijanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"eijheijtlesch Schriefwii\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"S\u00f6dasserbaidschahnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Schinehsesch (eijfache Schreff)"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Schinehsesch (tradizjon\u00e4lle Schreff)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA-Loutschreff"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA-Loutschreff"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"ndyukanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"pamakanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"Pinjin-\u00d6mschreff"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"scouse Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskijeviza-Schriefwii\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"eijheijtlesch, neu opjelate Schriefwii\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"de lateinesche \u00d6mschreff ALA-LC vun 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"o\u00df-armeensch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"w\u00e4\u00df-armeenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"De Lateinesche \u00d6mschreff noh Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monnotoonesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"poll\u00fctoonesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"neu opjelate Schriefwii\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"sp\u00e4\u00e4tmeddelfranz\u00fc\u00fcsesch v\u00f6r 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"fr\u00f6hneufranz\u00fc\u00fcsesch aff 1694"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"akademesche Schriefwii\u00df vun 1959"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"eijheijtlesch t\u00f6rkesch lateijnesch Allfabeet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("Huhnorrweejesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"schottesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"valenzijaanesche Dijal\u00e4k"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"lateijnesche \u00d6mschreff noh Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"rotschineesesche Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("araabesche un indesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armeenesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"b\u00e4ngjaalesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Devanagari-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u00e4tejoopesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("jeorjeesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("jriischesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Jujarati-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Jurmukhi-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("eijfache schineesesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"tradizjon\u00e4lle schineesesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"hebr\u00e4jesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmer-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannada-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laootesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"w\u00e4\u00dflejje Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malayalam-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("mongjoolesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Myanmar-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Oriya-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"tradizjon\u00e4lle tamilesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Teluju-Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"thail\u00e4ndesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetaanesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Dangikal\u00e4nnder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"standattm\u00e4h\u00dfesch zotehrt nohm Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"r\u00f6mesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"kopttesche Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"j\u00fchdesche Kal\u00e4nnder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"indesche Nazjonahl-Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"zoteert noh de Pinjin \u00d6mschreff vum Schineesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"S\u00f6hke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"zoteert noh de Stresche vum tradizjon\u00e4ll schineesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("zoteert noh de Radikaale un Stresche vum Schineesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"schinehsesche Kal\u00e4nnder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"i\u00dflaamesche Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"p\u00e4rsesche Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"zoteert nohm tradizjon\u00e4ll schineesesch Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"u\u00dfjedehnt araabesche un indesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("klein jeschrevve armeenesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("klein jeschrevve jriischesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("schineesesche Zehnerzahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("eijfache schineesesche Finanzzahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"tradizjon\u00e4lle schineesesche Finanzzahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japaanesche Finazzahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamiilesche Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"buddistesche Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u00e4tejohpesche Kal\u00e4nnder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"japaanesche Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Schtandatt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("janz breede Zeffere"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"klein jeschrevve r\u00f6mesche Zahle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"jrejorejahnesche Kal\u00e4nnder"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("zoteert nohm eijfacher schineesesch GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("zoteert wi em Tollefoonbooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"zotehrt wi em W\u00f6\u00f6terbohch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"tradizjon\u00e4ll zoteert"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"w\u00e4ltlesche islaamesche Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0} u\u00df {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u00e4tejoopesche Amete Alem Kal\u00e4nder"_s)
		})
	}));
	return data;
}

LocaleNames_ksh::LocaleNames_ksh() {
}

$Class* LocaleNames_ksh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ksh, name, initialize, &_LocaleNames_ksh_ClassInfo_, allocate$LocaleNames_ksh);
	return class$;
}

$Class* LocaleNames_ksh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun