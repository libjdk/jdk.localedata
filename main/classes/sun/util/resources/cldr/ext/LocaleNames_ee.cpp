#include <sun/util/resources/cldr/ext/LocaleNames_ee.h>

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

$MethodInfo _LocaleNames_ee_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ee::*)()>(&LocaleNames_ee::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ee_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ee",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ee_MethodInfo_
};

$Object* allocate$LocaleNames_ee($Class* clazz) {
	return $of($alloc(LocaleNames_ee));
}

void LocaleNames_ee::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ee::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("xexeme"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Dziehe Amerika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Anyiehe Amerika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u0194eto\u0256o\u0192el\u0254\u0192o Afrika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Titina Amerika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u0194edze\u0192e Afrika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Dziehe Afrika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Titina Afrika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Anyiehel\u0254\u0192o Afrika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Dziehel\u0254\u0192o Amerika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibbea nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u0194edze\u0192e Asia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Anyiehel\u0254\u0192o Asia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Anyiehe \u0194edze\u0192e Afrika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Anyiehel\u0254\u0192o Europa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australia kple New Zealand nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"P\u0254linesia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Titina Asia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u0194eto\u0256o\u0192el\u0254\u0192o Asia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u0194edze\u0192e Europa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Dziehel\u0254\u0192o Europa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u0194eto\u0256o\u0192el\u0254\u0192o Europa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin Amerika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Ascension \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("United Arab Emirates nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0301Antigua kple Barbuda nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antartica nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerika Samoa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austria nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c5land \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia kple Herzergovina nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barth\u00e9lemy nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Bouvet \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokos (Kiling) fudomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo Kinshasa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Titina Afrika rep\u0254blik nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo Brazzaville nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Switzerland nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kote d\u2019Ivoire nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Kook \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Tsile nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Tsaina nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Klipaton \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kape Verde nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Kristmas \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Saiprus nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ts\u025bk rep\u0254blik nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garsia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Dzibuti nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmark nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominika rep\u0254blik nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Keuta and Melilla nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekuad\u0254 nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypte nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0194eto\u0256o\u0192e Sahara nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spain nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europa W\u0254\u0256eka nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidzi nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Falkland \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faroe \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u0254n nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("United Kingdom nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Frentsi Gayana nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernse nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grinland nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guini nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadelupe nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekuatorial Guini nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greece nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Anyiehe Georgia kple Anyiehe Sandwich \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gini-Bisao nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyanadu"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"H\u0254ng K\u0254ng SAR Tsaina nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard kple Mcdonald \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondurasdu"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatsia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungari nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanari \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Aisle of Man nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britaint\u0254wo \u0192e india \u0192udome nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"iraqduk\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Aiseland nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Dz\u025bse nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Dzamaika nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Yordan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Dzapan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizstan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoros nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitis kple Nevis nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Dziehe Korea nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Anyiehe Korea nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kayman \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Leban\u0254n nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lusia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Litsenstein nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"L\u025bsoto nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lazemb\u0254g nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Moroko nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaska nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Marshal \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma) nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau SAR Tsaina nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Dziehe Marina \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martiniki nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"mauritiusduk\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"maldivesduk\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexico nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambiki nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Kaledonia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolk \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nicaraguaduk\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Netherlands nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norway nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Frentsi P\u0254linesia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Gini nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipini nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint Pierre kple Mikel\u0254n nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitkairn \u0192udomekpo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Riko nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragua nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Outlaying Oceania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Solomon \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sesh\u025bls nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sweden nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u0254r nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard kple Yan Mayen nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 kple Pr\u00edncipe nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"El Salvad\u0254 nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Kunha nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"T\u025bks kple Kaikos \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsad nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Anyiehe Franseme nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u025bkmenistan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u025bki nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad kple Tobago nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"U.S. Minor Outlaying \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("USA nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"uruguayduk\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikandu nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent kple Grenadine nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britaint\u0254wo \u0192e Virgin \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"U.S. V\u025brgin \u0192udomekpowo nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis kple Futuna nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Anyiehe Africa nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe nutome"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("nutome manya"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhaziagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("blugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhariagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamegbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymargbe"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaijangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belarusiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgariagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambaragbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengaligbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretongbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ts\u025bkgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walesgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("denmarkgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Germaniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkhagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"E\u028begbe"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grisigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Yevugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperantogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanishgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basqugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finlan\u0256gbe"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidzigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Fransegbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irelan\u0256gbe"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galatagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebrigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroatiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hungarigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armeniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"icelan\u0256gbe"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("dzavangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"g\u0254giagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakhstangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("khmergbe"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannadagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Koreagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmirgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirghistangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"laksemb\u0254ggbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lithuaniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latviagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagasegbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maorgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedoniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malayagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongoliagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaygbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"n\u0254weigbe bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("dziehe ndebelegbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Hollandgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"n\u0254weigbe nin\u0254sk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"n\u0254weigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanjagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("oriyagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("pundzabgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polishgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashtogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portuguesegbe"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("kwetsuagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romanshgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("romaniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("ruwandagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("dziehe samigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sangogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbo-croatiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("sinhalgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sloveniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shonagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somaliagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albaniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swatgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("anyiehe sothogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("swedengbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamilgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telegugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadzikistangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Thailandgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinyagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"t\u025bkmengbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswanagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turkishgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsongagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uighurgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukraingbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbekistangbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("vendagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolofgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yorubagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghemgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bembagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("benagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipingbe"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"swizerlan\u0256t\u0254wo \u0192e germaniagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("cape verdegbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("lahndagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyiagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"gbegb\u0254gbl\u0254 s\u0254gb\u0254wo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("dziehe sothogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komorogbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetumgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisigbe"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"gbegb\u0254gbl\u0254 manya"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walsegbe"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("cantongbe"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"gbegb\u0254gbl\u0254 man\u0254mee"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Arabiagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"armeniagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"bengaligbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"bopomfogbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"braillegbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Cyrillicgbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"devanagarigbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ethiopiagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"g\u0254giagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"grisigbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gudzaratigbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"gurmukhigbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"hangulgbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"hangbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Chinesegbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Blema Chinesegbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"hebrigbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"hiraganagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"Japanesegbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"katakanagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"khmergbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"kannadagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Koreagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"laogbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Latingbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"malayagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"mongoliagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"myanmargbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"oriyagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"sinhalagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"tamilgbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"telegugbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"thaanagbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"taigbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"tibetgbe\u014b\u0254\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u014b\u0254\u014bl\u0254dzesiwo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"gbema\u014bl\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"gbe\u014b\u0254\u014bl\u0254 b\u0254b\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"gbe\u014b\u0254\u014bl\u0254 manya"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Germaniagbe (Austria)"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Germaniagbe (Switzerland)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Yevugbe (Australia)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Yevugbe (Canada)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Yevugbe (Britain)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Yevugbe (America)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Spanishgbe (Europe)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Spanishgbe (Mexico)"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Fransegbe (Canada)"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Fransegbe (Switzerland)"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Flemishgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Portuguesegbe (Brazil)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Portuguesegbe (Europe)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Spanishgbe (Latin America)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"tutu\u0256o"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ga\u0256u\u0256u"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"n\u0254mbawo"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("tsainagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("blema tsainagbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"china rep\u0254blikt\u0254wo \u0192e kalenda tso 1912"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"india \u0192e arabia digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"armeniat\u0254wo \u0192e numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"bengalit\u0254wo \u0192e digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("ethiopia numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"georgiat\u0254wo \u0192e numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"greecet\u0254wo \u0192e nemeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("gujarati digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhi digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"chinat\u0254wo \u0192e numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"blema chinat\u0254wo \u0192e numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"hebrit\u0254wo \u0192e numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"japant\u0254wo \u0192e numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"khmert\u0254wo \u0192e n\u0254mbawo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"kannadat\u0254wo \u0192e digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"laot\u0254wo \u0192e digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"N\u0254mbawo le Latingbe \u0192e \u0256o\u0256o nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malaya digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("mongolia digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("myanmar digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("oriya digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("tamil numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telegu digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("thai digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibet digitwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"nu\u0256o\u0256o \u0256e unicode \u0192e \u0256o\u0256o nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"romat\u0254wo \u0192e numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("coptia kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"hebrit\u0254wo \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"india duk\u0254 \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"pinyin \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"nudidi hena zaz\u00e3 gbadza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"stroke \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u0256o\u0256om\u0254nut\u0254x\u025b man\u0254\u014bu stroke \u0192e \u0256o\u0256o nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"chinat\u0254wo \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"islam sub\u0254lawo \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"persiat\u0254wo \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"blema chinat\u0254wo \u0192e \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"india \u0192e arabia digitwo dzi yiyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"armeniat\u0254wo \u0192e numeral suet\u0254wo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"greecet\u0254wo \u0192e numeral suet\u0254wo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"chinat\u0254wo \u0192e n\u0254mba madeblibowo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"chinat\u0254wo \u0192e gadzikp\u0254 numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"blema chinat\u0254wo \u0192e gadzikp\u0254 numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japant\u0254wo \u0192e gadzikp\u0254numeralwo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"buddha sub\u0254lawo \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ethiopiat\u0254wo \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"japant\u0254wo \u0192e kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"nugbugb\u0254to\u0256o \u0192e \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"digit kekeme blibot\u0254wo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"romat\u0254wo \u0192e numeral suet\u0254wo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregorian kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"chinagbe yeye \u0192e \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"fonegbal\u1ebd me \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"nu\u0256o\u0256o \u0256e nyag\u0254me\u0256egbal\u1ebd \u0192e \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"blema \u0256o\u0256om\u0254 nu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"islam sub\u0254lawo \u0192e sivil kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ethiopia amate alemt\u0254wo \u0192e kalenda"_s)
		})
	}));
	return data;
}

LocaleNames_ee::LocaleNames_ee() {
}

$Class* LocaleNames_ee::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ee, name, initialize, &_LocaleNames_ee_ClassInfo_, allocate$LocaleNames_ee);
	return class$;
}

$Class* LocaleNames_ee::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun