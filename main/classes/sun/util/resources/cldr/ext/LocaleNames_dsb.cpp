#include <sun/util/resources/cldr/ext/LocaleNames_dsb.h>

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

$MethodInfo _LocaleNames_dsb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_dsb::*)()>(&LocaleNames_dsb::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_dsb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_dsb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_dsb_MethodInfo_
};

$Object* allocate$LocaleNames_dsb($Class* clazz) {
	return $of($alloc(LocaleNames_dsb));
}

void LocaleNames_dsb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_dsb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"sw\u011bt"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"P\u00f3dpo\u0142nocna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"P\u00f3dpo\u0142dnjowa Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"P\u00f3dwjacorna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Srjej\u017ana Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"p\u00f3dzajt\u0161na Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"p\u00f3dpo\u0142nocna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"srjej\u017ana Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"p\u00f3dpo\u0142dnjowa Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"p\u00f3dpo\u0142nocny ameriski kontinent"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibiska"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"p\u00f3dzajt\u0161na Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"p\u00f3dpo\u0142dnjowa Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"krotkozajt\u0161na Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"p\u00f3dpo\u0142dnjowa Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Awstralazija"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melaneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikroneziska (kupowy region)"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polyneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("centralna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"p\u00f3dwjacorna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"p\u00f3dzajt\u0161na Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"p\u00f3dpo\u0142nocna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"p\u00f3dwjacorna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u0141aty\u0144ska Amerika"_s)
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
			$of(u"Zjadno\u015bone arabiske emiraty"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
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
			$of(u"Alba\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arme\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktis"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentinska"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Ameriska Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awstriska"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awstralska"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajd\u017ean"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosniska a Hercegowina"_s)
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
			$of("Belgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarska"_s)
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
			$of(u"St. Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliwiska"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karibiska Ni\u017eozemska"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazilska"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamy"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvetowa kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"B\u011b\u0142oruska"_s)
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
			$of("Kokosowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Centralnoafriska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0160wicarska"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chilska"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clippertonowa kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
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
			$of(u"G\u00f3downe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cypriska"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u010ceska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Nimska"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u017eibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Da\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominika\u0144ska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeriska"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta a Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estniska"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egyptojska"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"P\u00f3dwjacorna Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0160pa\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopiska"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Europska unija"_s)
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
			$of("Falklandske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"F\u00e4r\u00f6je"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francojska"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Zjadno\u015bone kralejstwo"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Francojska Guyana"_s)
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
			$of(u"Gr\u00f6nlandska"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekwatorialna Gineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grichiska"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"P\u00f3dpo\u0142dnjowa Georgiska a P\u00f3dpo\u0142dnjowe Sandwichowe kupy"_s)
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
			$of("Gineja-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"W\u00f3sebna zastojnstwowa cona Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heardowa kupa a McDonaldowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Chorwatska"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungorska"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanariske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indoneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irska"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indiska"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britiski indiskooceaniski teritorium"_s)
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
			$of("Islandska"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italska"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japa\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistan"_s)
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
			$of("St. Kitts a Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"P\u00f3dpo\u0142nocna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"P\u00f3dpo\u0142dnjowa Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kajmaniske kupy"_s)
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
			$of("St. Lucia"_s)
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
			$of("Liberija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litawska"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgska"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letiska"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libyska"_s)
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
			$of("Moldawska"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Carna G\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolska"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"W\u00f3sebna zastojnstwowa cona Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"P\u00f3dpo\u0142nocne Mariany"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mawreta\u0144ska"_s)
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
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediwy"_s)
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
			$of("Malajzija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nowa Kaledoniska"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkowa kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Ni\u017eozemska"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwegska"_s)
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
			$of("Nowoseelandska"_s)
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
			$of("Francojska Polyneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Neuguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipiny"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f3lska"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St. Pierre a Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairnowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinski awtonomny teritorium"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalska"_s)
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
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("wenkowna Oceaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumu\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Ruska"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi-Arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomony"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelle"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0160wedska"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"S\u0142owje\u0144ska"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard a Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"S\u0142owakska"_s)
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
			$of("Somalija"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinamska"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"P\u00f3dpo\u0142dnjowy Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 a Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syriska"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swasiska"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks a Caicos kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u010cad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francojski p\u00f3dpo\u0142dnjowy a antarktiski teritorium"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailandska"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tad\u017aikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkojska"_s)
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
			$of("Tansanija"_s)
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
			$of("UM"_s),
			$of("Ameriska Oceaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Zjadno\u015bone staty Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatika\u0144ske m\u011bsto"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent a Grenadiny"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britiske kn\u011b\u017eniske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Ameriske kn\u011b\u017eniske kupy"_s)
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
			$of("XK"_s),
			$of("Kosowo"_s)
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
			$of(u"P\u00f3dpo\u0142dnjowa Afrika (Republika)"_s)
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
			$of("njeznaty region"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afar\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abchaz\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akan\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhar\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arab\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asam\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"awar\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aymar\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajd\u017ean\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ba\u0161kir\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"b\u011b\u0142oru\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgar\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislam\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bengal\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibet\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"breton\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosni\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katanlan\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u010damor\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u010de\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"walizi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dan\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"nim\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"grichi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"engel\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0161pa\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"esti\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baski\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"persi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"fin\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fid\u017ei\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ferej\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francoj\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frizi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ir\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0161oti\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galici\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gud\u017earat\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"man\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"hebrej\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hindi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"chorwat\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haiti\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"hungor\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"arme\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indone\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ital\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inuit\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japa\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"java\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"georgi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazach\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"gr\u00f6nland\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"kambod\u017ean\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kannad\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"koreja\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ka\u0161mir\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurdi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"korni\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u0142aty\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburg\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"gand\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limbur\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"lao\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litaw\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"leti\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malga\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maori\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedo\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malajam\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mongol\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"marati\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malaj\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malta\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"burma\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauru\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norwegske bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"p\u00f3dpo\u0142nocne ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepal\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ni\u017eozem\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norwegske nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norweg\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okcitan\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"oroji\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pand\u017eab\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"p\u00f3l\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pa\u0161tun\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugal\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ke\u010dua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoroma\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"kirundi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumun\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ru\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinjarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardin\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sind\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"lap\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"serbochorwat\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"singal\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"s\u0142owak\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"s\u0142owje\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samo\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0161on\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somali\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alban\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"serbi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"p\u00f3dpo\u0142dnjowa sot\u0161\u0107ina (Sesotho)"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundan\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0161wed\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"swahili\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamil\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"telug\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tad\u017eiki\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"thailand\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkme\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongan\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"turkoj\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tatar\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahiti\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ujgur\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrain\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdu\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"usbek\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnam\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"walon\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorub\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chin\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"anglosaksoj\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"arawka\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("pare"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"astur\u0161\u0107ina"_s)
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
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"choctaw\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"dolnoserb\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipin\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagauz\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"goti\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0161wicarska nim\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hawaii\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"g\u00f3rnoserb\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabyl\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kapverd\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
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
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakot\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masai\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"mauriciska kreol\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohawk\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("krik"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"dolnonim\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prus\u010dina"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"k\u02bciche\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"siciliani\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyra senni"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ta\u0161elhit"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"p\u00f3dpo\u0142dnjowa sami\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"lule-sami\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"inari-sami\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skolt-sami\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"saterfrizi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("centralnoatlaski tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"njeznata r\u011bc"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standardny marokka\u0144ski tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u017eedno r\u011bcne wop\u015bimje\u015be"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"arme\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalski"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braillowe pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kyriliski"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopiski"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("georgiski"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("grichiski"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
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
			$of("Hans"_s),
			$of("zjadnorjone"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradionalne"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"japa\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laoski"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u0142aty\u0144ski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malayalamski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("burmaski"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("singhaleski"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilski"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("thaiski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetski"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symbole"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"b\u017aez pisma"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"pow\u0161ykne"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("njeznate pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"awstriska nim\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0161wicarska wusokonim\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"awstralska engel\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"kanadiska engel\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"britiska engel\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ameriska engel\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"europejska \u0161pa\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"mexika\u0144ska \u0161pa\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"kanadiska francoj\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0161wicarska francoj\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flam\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"brazilska portugal\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"europejska portugal\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldawi\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"kongojska swahili\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"moderna wusokoarab\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u0142aty\u0144skoamerika\u0144ska \u0161pa\u0144\u0161\u0107ina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"sort\u011browa\u0144ski sl\u011bd"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("pjenjeze"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("licby"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chin\u0161\u0107ina (zjadnorjona)"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"chin\u0161\u0107ina (tradicionalna)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("kalender republiki China"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arabisko-indiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"arme\u0144ske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengalske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("georgiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("grichiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("gujarati-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhi-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("zjadnorjone chinske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("tradicionalne chinske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebrejske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"japa\u0144ske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("khmerske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannada-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laotiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("arabiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malayalamske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("burmaske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("oriya-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("tradicionalne tamilske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugu-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("thaiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"sort\u011browa\u0144ski sl\u011bd p\u00f3 Unico\u017ae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("romske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u017eydojski kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"pow\u0161ykne pytanje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("chinski kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamski kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("iso-8601-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("persiski kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"roz\u0161yrjone arabisko-indiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"arme\u0144ske cyfry ma\u0142opisane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"grichiske cyfry ma\u0142opisane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("chinske decimalne licby"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("zjadnorjone chinske financne cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("tradicionalne chinske financne cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japa\u0144ske financne cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhistiski kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopiski kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"japa\u0144ski kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"standardny sort\u011browa\u0144ski sl\u011bd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"po\u0142no\u0161yroke cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"romske cyfry ma\u0142opisane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"gregoria\u0144ski kalender"_s)
		})
	}));
	return data;
}

LocaleNames_dsb::LocaleNames_dsb() {
}

$Class* LocaleNames_dsb::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_dsb, name, initialize, &_LocaleNames_dsb_ClassInfo_, allocate$LocaleNames_dsb);
	return class$;
}

$Class* LocaleNames_dsb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun