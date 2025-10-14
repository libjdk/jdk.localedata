#include <sun/util/resources/cldr/ext/LocaleNames_tzm.h>

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

$MethodInfo _LocaleNames_tzm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_tzm::*)()>(&LocaleNames_tzm::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_tzm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_tzm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_tzm_MethodInfo_
};

$Object* allocate$LocaleNames_tzm($Class* clazz) {
	return $of($alloc(LocaleNames_tzm));
}

void LocaleNames_tzm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_tzm::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"An\u1e0durra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Imarat Ti\u03b5rabin Tidduklin"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Af\u0263anistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigwa d Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angwilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Arminya"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angula"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arjuntin"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samwa Imirikaniyyin"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Ustriyya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Us\u1e6dralya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbi\u01e7an"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Busna-d-Hirsik"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadus"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladic"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Beljika"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Fasu"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bel\u0263arya"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Ba\u1e25rayn"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Binin"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Birmuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunay"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bulivya"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"B\u1e5bazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bu\u1e6dan"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Butswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bilarusya"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Biliz"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Tagduda Tadimuqra\u1e6dit n Kungu"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Tagduda n Afrika Wammas"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kungu"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Swisra"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Ta\u0263azut n Uszer"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Tigzirin n Kuk"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Ccili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u1e62\u1e63in"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kulumbya"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kus\u1e6da Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Tigzirin n I\u0263f Uzegzaw"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Qubrus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tagduda n \u010cik"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Almanya"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u01e6ibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u1e0cuminika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Tagduda n \u1e0cuminikan"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Dzayer"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ikwa\u1e0dur"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Is\u1e6dunya"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Mi\u1e63r"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Iritrya"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Sbanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ityupya"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finlan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Tigzirin n Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikrunizya"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"F\u1e5bansa"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Tagelda Taddukelt"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grinada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Jyurjya"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guyana Tafransist"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0194ana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Jibral\u1e6dar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grinlan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0194inya"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadalup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u0194inya Tikwa\u1e6dur it"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Yunan"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gwatimala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gwam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0194inya-Bissaw"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hinduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Krwatya"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Hayti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hen\u0263arya"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indunizya"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Irlan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israeil"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hind"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Amur n Agaraw Uhindi Ub\u1e5bi\u1e6dani"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0190iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Islan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"I\u1e6dalya"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamayka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Ur\u1e0dun"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Jjappun"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kinya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kir\u0263istan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambudj"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Qumur"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Santekits d Nivis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Kurya Tugafat"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kurya Tun\u1e93ult"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwwayt"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Tigzirin n Kayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazaxistan"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laws"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lubnan"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Santelusya"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lictenc\u1e6dayn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Srilanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Libirya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Lisu\u1e6du"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litwanya"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Liksumburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Li\u1e6d\u1e6dunya"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Me\u1e5b\u1e5buk"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Munaku"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mul\u1e0davya"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Mada\u0263acqar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Tigzirin n Marcal"_s)
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
			$of(u"Man\u0263ulya"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Tigzirin n Maryana Tugafat"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Muritanya"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Muntsirra"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Mal\u1e6da"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Muris"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldiv"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Miksik"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malizya"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Muzambiq"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibya"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("kalidunya Tamaynut"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nnijer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Tigzirt Nurfulk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nijiria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Hulan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Nnurwij"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nippal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nawru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niwi"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Zilan\u1e0da Tamaynut"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0190umman"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Piru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Pulinizya Tafransist"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papwa \u0194inya Tamaynut"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Pulunya"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Santepyir d Mikelun"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkirn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Purturiku"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Agemma\u1e0d Ugut d \u0194azza Ifilis\u1e6diniyen"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Purtu\u0263al"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palu"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragway"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Qa\u1e6dar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Riyyunyun"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u1e5aumanya"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusya"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ruwwan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Ssa\u03b5udiyya Ta\u03b5rabt"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Tigzirin n Salumun"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Ssicil"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Ssudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Ssewwid"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"San\u0263afura"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santehilin"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sluvinya"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Sluvakya"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siralyun"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Sanmarinu"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Ssini\u0263al"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u1e62\u1e63umal"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Saw\u1e6dumi d Prinsip"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Salva\u1e0dur"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Surya"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Swazilan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Tigzirin Turkiyyin d Tikaykusin"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tcad"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u1e6c\u1e6dugu"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u1e6caylan\u1e0da"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u1e6ca\u01e7ikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tuklu"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Timur Tagmu\u1e6d"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunes"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u1e6cunga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkya"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad d \u1e6cubagu"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u1e6cuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u1e6caywan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u1e6canzanya"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukranya"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"U\u0263anda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Iwunak Idduklen n Amirika"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugway"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Awank i\u0263rem n Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Santevinsent d Grinadin"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Vinzwilla"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Tigzirin (Virgin) Tib\u1e5bi\u1e6daniyin"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Tigzirin n Virjin n Iwunak Yedduklen"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vi\u1e6dnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanwatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Walis d Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samwa"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Mayu\u1e6d"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Tafrikt Tun\u1e93ul"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambya"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwi"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Takanit"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Tamharit"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Ta\u03b5rabt"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Tabilarusit"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Tabel\u0263arit"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Tabin\u0263alit"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ta\u010dikt"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Talmanit"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Tayunanit"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Tanglizt"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("tasbelyunit"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Tafarisit"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Taf\u1e5bansist"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Tahawsat"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Tahindit"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Tahen\u0263arit"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Tindunisit"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Tigbut"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Ta\u1e6dalyant"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Tajappunit"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Tajavanit"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Taxmert ,Talammast"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Takurit"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Tamalizit"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Taburmanit"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Tanippalit"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Tahulan\u1e0dit"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Tabenjabit"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Tappulunit"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Taburtu\u0263alit"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Ta\u1e5bumanit"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Tarusit"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Tarwandit"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Ta\u1e63umalit"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Taswidit"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tatamilt"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Ta\u1e6dayt"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Taturkit"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Tukranit"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Turdut"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Tavi\u1e6dnamit"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Tayurubat"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Tacinwit,Mandarin"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("tazulut"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Tamazi\u0263t n la\u1e6dla\u1e63"_s)
		})
	}));
	return data;
}

LocaleNames_tzm::LocaleNames_tzm() {
}

$Class* LocaleNames_tzm::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_tzm, name, initialize, &_LocaleNames_tzm_ClassInfo_, allocate$LocaleNames_tzm);
	return class$;
}

$Class* LocaleNames_tzm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun