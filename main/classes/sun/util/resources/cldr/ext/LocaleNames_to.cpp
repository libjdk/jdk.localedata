#include <sun/util/resources/cldr/ext/LocaleNames_to.h>

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

$MethodInfo _LocaleNames_to_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_to::*)()>(&LocaleNames_to::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_to_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_to",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_to_MethodInfo_
};

$Object* allocate$LocaleNames_to($Class* clazz) {
	return $of($alloc(LocaleNames_to));
}

void LocaleNames_to::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_to::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"M\u0101mani"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u02bbAfilika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u02bbAmelika tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u02bbAmelika tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u02bbOs\u0113nia"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u02bbAfilika fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u02bbAmelika lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u02bbAfilika fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u02bbAfilika fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u02bbAfilika lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u02bbAfilika fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Ongo \u02bbAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u02bbAmelika fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Kalipiane"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u02bb\u0112sia fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u02bb\u0112sia fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u02bb\u0112sia fakatongahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u02bbEulope fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u02bbAositel\u0113l\u0113sia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melan\u012bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Potu fonua Mikolon\u012bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polin\u012bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u02bb\u0112sia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u02bb\u0112sia lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u02bb\u0112sia fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u02bbEulope"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u02bbEulope fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u02bbEulope fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u02bbEulope fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u02bbAfilika fakasahala-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u02bbAmelika fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Motu \u02bbAsenisini"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u02bbAnitola"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u02bbAlepea Fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u02bbAfik\u0101nisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Anitikua mo Palaputa"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anikuila"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u02bbAlipania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u02bb\u0100menia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u02bbAngikola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u02bbAnit\u0101tika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u02bbAsenitina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Ha\u02bbamoa \u02bbAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u02bbAositulia"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u02bbAositel\u0113lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u02bbAlupa"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u02bbOtumotu \u02bbAlani"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u02bbAsapaisani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Posinia mo Hesik\u014dvina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"P\u0101peitosi"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Pengil\u0101tesi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Pelesiume"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Pekano Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Pulukalia"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Paleini"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Puluniti"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Penini"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"S\u0101 Pat\u0113lemi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"P\u0113muta"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Pulunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Pol\u012bvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Kalipiane fakah\u014dlani"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Pal\u0101sili"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Pahama"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"P\u016btani"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Motu Puveti"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Potisiuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Pelalusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Pelise"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"K\u0101nata"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u02bbOtumotu Koko"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo - Kinisasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Lepupelika \u02bbAfilika Lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Palasavila"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Matafonua \u02bbAivol\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u02bbOtumotu Kuki"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Sili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameluni"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolomipia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Motu Kilipatoni"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosita Lika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kiupa"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Mui\u02bbi V\u0113te"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kulasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Motu Kilisimasi"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Saipalesi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"S\u0113kia"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Siamane"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Tieko K\u0101sia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Siputi"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Tenima\u02bbake"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Tominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Lepupelika Tominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u02bbAlisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Siuta mo Melila"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u02bbEkuetoa"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u02bbEsit\u014dnia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u02bbIsipite"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahala fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u02bbElitulia"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Sipeini"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u02bb\u012ati\u014dpia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u02bbEulope fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u02bbEulope fekau\u02bbaki-pa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finilani"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fisi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u02bbOtumotu Fokulani"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikolon\u012bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u02bbOtumotu Faloe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Falanis\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Kaponi"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Pilit\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Kelenat\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Se\u014dsia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Kuiana fakafalanis\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Kuenis\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Sipal\u0101lit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Kulinilani"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Kamipia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Kini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Kuatalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u02bbEkueta Kini"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Kalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u02bbOtumotu Se\u014dsia-tonga mo Saniuisi-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Kuatamala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Kuamu"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Kini-Pisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Kuiana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongi Kongi SAR Siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u02bbOtumotu Heati mo Makitonali"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honitulasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kuloisia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungakalia"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u02bbOtumotu Kaneli"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u02bbIniton\u0113sia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u02bbAealani"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u02bbIsileli"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Motu Mani"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u02bbInitia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Potu fonua moana \u02bbInitia fakapilit\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u02bbIlaaki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u02bbIlaani"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u02bbAisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u02bb\u012atali"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Selus\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Samaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Soatane"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Siapani"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Keni\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"K\u012bkisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamip\u014dtia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kilipasi"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komolosi"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"S\u0101 Kitisi mo Nevisi"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"K\u014dlea tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"K\u014dlea tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kueiti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u02bbOtumotu Keimeni"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakitani"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Lau"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lepanoni"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"S\u0101 L\u016bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Likitenisiteini"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"S\u012blangik\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laipelia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lakisimipeki"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lativia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u012bpia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Molotova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Monitenikalo"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"S\u0101 M\u0101tini (fakafalanis\u0113)"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Matakasika"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u02bbOtumotu M\u0101solo"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maset\u014dnia fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"M\u0101li"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mianim\u0101 (Pema)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongok\u014dlia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makau SAR Siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u02bbOtumotu Maliana tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"M\u0101tiniki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Maulitenia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Mo\u02bbungaselati"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malita"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maulitiusi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malativisi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malaui"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mekisikou"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Mal\u0113sia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mos\u0113mipiki"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namipia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Niu Kalet\u014dnia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nisia"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Motu N\u014dfoliki"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Naisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikalakua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"H\u014dlani"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Noau\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Naulu"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niu\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nu\u02bbusila"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u02bbOmani"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Pel\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinisia fakafalanis\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuaniukini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipaini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"P\u0101kisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polani"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"S\u0101 Piea mo Mikeloni"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u02bbOtumotu Pitikeni"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pu\u0113to Liko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Potu Palesitaine"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Potukali"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Palakuai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Kat\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u02bbOs\u0113nia mama\u02bbo"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"L\u0113unioni"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Lom\u0113nia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"S\u0113pia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"L\u016bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Luanit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saute \u02bbAlepea"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u02bbOtumotu Solomone"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u02bbOtumotu Seiseli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"S\u016bteni"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Su\u0113teni"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapoa"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"S\u0101 Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Sil\u014dvenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Sivolop\u0101ti mo Sani Maieni"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Sil\u014dvakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siela Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"S\u0101 Malino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senekalo"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"S\u014dmalia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suliname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"S\u016btani fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tom\u0113 mo Pilinisipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u02bbEle Salavatoa"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"S\u0101 M\u0101tini (fakah\u014dlani)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u012blia"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u02bbEsuatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tulisitani ta Kunuha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u02bbOtumotu Tuki mo Kaikosi"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"S\u0101ti"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Potu fonua tonga fakafalanis\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Toko"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailani"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tasikitani"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timoa fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u016bkimenisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tun\u012bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Toake"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tilinitati mo Topako"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"T\u016bvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiuani"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tenis\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u02bb\u016akala\u02bbine"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u02bbIukanit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u02bbOtumotu si\u02bbi \u02bbo \u02bbAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u02bb\u016a fonua fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Pule\u02bbanga fakatahataha \u02bbAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u02bbUlukuai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u02bbUsipekitani"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Kolo Vatikani"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"S\u0101 Viniseni mo Kulenatini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venesuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u02bbOtumotu Vilikini fakapilit\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u02bbOtumotu Vilikini faka\u02bbamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietinami"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u02bbUvea mo Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Ha\u02bbamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"fasi\u02bbalea loi"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("fua-ua loi"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"K\u014dsovo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Iemeni"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Maiote"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u02bbAfilika tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Semipia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simipapuei"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Potu fonua ta\u02bbe\u02bbiloa pe hala"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"lea faka\u02bbaf\u0101la"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"lea faka\u02bbapakasia"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"lea faka\u02bbavesitani"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"lea faka\u02bbafilikana"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"lea faka\u02bbakani"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"lea faka\u02bbameliki"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"lea faka\u02bbalakoni"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"lea faka\u02bbalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"lea faka\u02bbasamia"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"lea faka\u02bbavaliki"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"lea faka\u02bbaimala"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"lea faka\u02bbasapaisani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("lea fakapasikili"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("lea fakapelalusi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("lea fakapulukalia"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("lea fakapisilama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("lea fakapamipala"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"lea fakap\u0101ngil\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("lea fakatipeti"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("lea fakapeletoni"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("lea fakaposinia"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("lea fakakatalani"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("lea fakasese"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("lea fakakamolo"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"lea fakak\u014dsika"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"lea fakakel\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("lea fakaseki"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("lea fakasilavia-fakasiasi"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("lea fakasuvasa"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"lea fakau\u0113lesi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"lea fakatenima\u02bbake"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("lea fakasiamane"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("lea fakativehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"lea fakatis\u014dngika"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"lea faka\u02bbeue"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("lea fakakalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"lea fakap\u0101langi"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"lea faka\u02bbesipulanito"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"lea fakasip\u0113nisi"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"lea faka\u02bbesit\u014dnia"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"lea fakap\u0101siki"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"lea fakap\u0113sia"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"lea fakaful\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("lea fakafinilani"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("lea fakafisi"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("lea fakafaloe"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"lea fakafalanis\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("lea fakafilisia-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"lea faka\u02bbaelani"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("lea fakakaeliki"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("lea fakakalisia"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("lea fakakualani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("lea fakakutalati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"lea fakamangik\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("lea fakahausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"lea fakahepel\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"lea fakahinit\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("lea fakahili-motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("lea fakakuloisia"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("lea fakahaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("lea fakahungakalia"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"lea faka\u02bb\u0101menia"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("lea fakahelelo"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"lea fakavaha\u02bbalea"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"lea faka\u02bbinit\u014dnesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"lea fakavaha\u02bbalingik\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"lea faka\u02bbikip\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"lea fakasisiuani-\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"lea faka\u02bbinupiaki"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"lea faka\u02bbito"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"lea faka\u02bbaisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"lea faka\u02bb\u012btali"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"lea faka\u02bbinuketituti"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("lea fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("lea fakasava"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"lea fakase\u014dsia"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"lea fakakongik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("lea fakakikuiu"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("lea fakakuaniama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("lea fakakasaki"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"lea fakakala\u02bbalisuti"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"lea fakakamip\u014dtia"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("lea fakakanata"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"lea fakak\u014dlea"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("lea fakakanuli"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"lea fakak\u0101simila"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"lea fakakulit\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("lea fakakomi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("lea fakakoniuali"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"lea fakak\u012bsisi"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("lea fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("lea fakalakisimipeki"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("lea fakakanita"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"lea fakalimip\u016bliki"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lea lingikala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lea fakalau"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lea fakalituania"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("lea fakalupa-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lea fakalativia"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("lea fakamalakasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"lea fakam\u0101solo"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("lea fakamauli"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"lea fakamasit\u014dnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"lea faka\u02bbinitia-mal\u0101ialami"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"lea fakamongok\u014dlia"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("lea fakamalati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("lea fakamalei"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("lea fakamalita"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("lea fakapema"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("lea fakanaulu"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"lea fakanoua\u0113-pokimali"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("lea fakanetepele-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("lea fakanepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"lea fakanetongik\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"lea fakah\u014dlani"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"lea fakanoau\u0113-ninosiki"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"lea fakanoua\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("lea fakanetepele-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("lea fakanavaho"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("lea fakanianisa"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"lea faka\u02bbokitane"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"lea faka\u02bbosipiu\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"lea faka\u02bbolomo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"lea faka-\u02bbotia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"lea faka\u02bbosetiki"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"lea fakap\u016bnusapi"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"lea fakap\u0101li"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("lea fakapolani"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"lea fakapasit\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("lea fakapotukali"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("lea fakakuetisa"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"lea fakalaito-lom\u0113nia"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("lea fakaluaniti"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"lea fakal\u014dmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"lea fakal\u016bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"lea fakakini\u0101uanita"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("lea fakasanisukuliti"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"lea fakasalet\u012bnia"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"lea fakas\u012bniti"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("lea fakasami-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"lea fakasangik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"lea fakakuloisia-s\u0113pia"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("lea fakasingihala"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"lea fakasol\u0101vaki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("lea fakasolovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"lea fakaha\u02bbamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("lea fakasiona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("lea fakasomali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"lea faka\u02bbalap\u0113nia"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"lea fakas\u0113pia"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("lea fakasuati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("lea fakasoto-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"lea fakasunit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"lea fakasu\u0113teni"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("lea fakasuahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("lea fakatamili"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"lea faka\u02bbinitia-teluku"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"lea fakat\u0101siki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("lea fakatailani"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("lea fakatikilinia"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"lea fakat\u0113kimeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"lea fakatak\u0101loka"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("lea fakatisuana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("lea fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("lea fakatoake"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("lea fakatisonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("lea fakatatale"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"lea fakatusu\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("lea fakatahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"lea faka\u02bbuik\u016bli"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"lea faka\u02bb\u016bkala\u02bbine"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"lea faka\u02bb\u016bt\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"lea faka\u02bbusipeki"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"lea fakavenit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("lea fakavietinami"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("lea fakavolapiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"lea faka\u02bbualonia"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"lea faka\u02bbuolofo"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"lea fakat\u014dsa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"lea faka\u012btisi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"lea faka\u02bbi\u014dlupa"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("lea fakasuangi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("lea fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("lea fakasulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"lea faka\u02bbatis\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"lea faka\u02bbakoli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"lea faka\u02bbatangim\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"lea faka\u02bbatik\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"lea faka\u02bbalepea-tun\u012bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"lea faka\u02bbafilihili"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"lea faka\u02bbakihemi"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"lea faka\u02bbainu"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"lea faka\u02bbakatia"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"lea faka\u02bbalapama"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"lea faka\u02bbaleuti"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"lea faka\u02bbalap\u0113nia-keki"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"lea faka\u02bbalitai-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"lea fakap\u0101langi-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"lea faka\u02bbangika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"lea faka\u02bbal\u0101miti"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("lea fakamapuse"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"lea faka\u02bbalaona"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"lea faka\u02bbalapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"lea faka\u02bbalepea-\u02bbaisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"lea faka\u02bbalauaki"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"lea faka\u02bbalepea-moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"lea faka\u02bbalepea-\u02bbisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"lea faka\u02bbasu"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"lea faka\u02bbilonga-\u02bbamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"lea faka\u02bbasit\u016blia"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("lea fakakotava"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"lea faka\u02bbauati"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("lea fakapalusi"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("lea fakapali"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"lea fakapav\u0101lia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"lea fakapasa\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("lea fakapamuni"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"lea fakat\u014dpe-p\u0113teki"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("lea fakakomala"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("lea fakapesa"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"lea fakap\u0113mipa"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("lea fakapetavi"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("lea fakapena"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("lea fakapafuti"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("lea fakapataka"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("lea fakapalusi-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("lea fakaposipuli"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("lea fakapikoli"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("lea fakapini"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("lea fakapanisali"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("lea fakakome"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"lea fakasikesik\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("lea fakapisinupilia"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"lea fakapakiti\u0101li"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("lea fakapalai"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("lea fakapalahui"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"lea fakap\u014dto"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"lea faka\u02bbak\u014dse"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("lea fakapuliati"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("lea fakapukisi"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("lea fakapulu"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("lea fakapilini"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"lea fakamet\u016bmipa"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("lea fakakato"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("lea fakakalipa"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("lea fakakaiuka"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"lea faka\u02bbatisami"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"lea fakas\u0101kima"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("lea fakasepuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("lea fakakika"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"lea fakas\u012bpisa"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"lea fakasakat\u0101i"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"lea fakat\u016bke"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"lea fakamal\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("lea fakasinuki-takote"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("lea fakasokitau"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("lea fakasipeuiani"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"lea fakaselok\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("lea fakaseiene"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"lea fakak\u016btisi-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("lea fakakopitika"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("lea fakakapiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("lea fakatoake-kilimea"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"lea fakaseselua-falanis\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("lea fakakasiupia"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("lea fakatakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"lea fakatalaku\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("lea fakataita"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("lea fakatelauale"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("lea fakasilave"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"lea fakat\u014dkelipi"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"lea fakatingik\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"lea fakatis\u0101ma"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("lea fakatokili"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"lea fakas\u014dpia-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("lea fakatusuni-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("lea fakatuala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"lea fakah\u014dlani-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"lea fakaiola-fon\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("lea fakatiula"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("lea fakatasaka"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"lea faka\u02bbemip\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"lea faka\u02bbefiki"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"lea faka\u02bbemilia"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"lea faka\u02bbisipitemu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"lea faka\u02bbekaiuki"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"lea faka\u02bbelamite"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"lea fakap\u0101langi-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"lea fakai\u016bpiki-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"lea faka\u02bbeu\u014dnito"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"lea faka\u02bbekisitematula"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("lea fakafangi"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"lea fakafanit\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("lea fakafilipaini"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"lea fakafinilani-t\u014dnetale"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"lea fakaf\u014dngi"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"lea fakafalanis\u0113-kasuni"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"lea fakafalanis\u0113-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"lea fakafalanis\u0113-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"lea faka\u02bb\u0101pitano"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("lea fakafilisia-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("lea fakafilisia-hahake"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"lea fakafulil\u0101ni"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"lea fakak\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("lea fakakakausi"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("lea fakasiaina-kani"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("lea fakakaio"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("lea fakakapaia"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("lea fakateli-soloasitelia"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"lea fakasi\u02bbisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("lea fakakilipasi"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("lea fakakilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("lea fakasiamane-hake-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"lea fakasiamane-hake-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"lea fakakonikan\u012b-koani"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"lea fakakonit\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("lea fakakolonitalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("lea fakakotika"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"lea fakak\u0113po"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"lea fakakalisimu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("lea fakasiamane-suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"lea faka\u02bbuai\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("lea fakafalefale"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"lea fakakus\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"lea faka\u02bbu\u012bsini"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("lea fakahaita"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("lea fakasiaina-haka"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"lea fakahauai\u02bbi"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"lea fakahinit\u012b-fisi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("lea fakahilikainoni"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("lea fakahitite"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"lea fakam\u014dngi"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"lea fakas\u014dpia-hake"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("lea fakasiaina-siangi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("lea fakahupa"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"lea faka\u02bbipani"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"lea faka\u02bbipipio"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"lea faka\u02bbiloko"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"lea faka\u02bbingusi"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"lea faka\u02bbingiliani"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"lea fakap\u0101langi-samaika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lea fakalosipani"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"lea fakanik\u014dmipa"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("lea fakamasame"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"lea faka\u02bbiuteo-p\u0113sia"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"lea faka\u02bbiuteo-\u02bbalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"lea faka\u02bbiutilani"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("lea fakakala-kalipaki"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("lea fakakapile"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("lea fakakasini"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"lea fakasis\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("lea fakakamipa"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("lea fakakavi"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"lea fakakap\u0101litia"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"lea fakakan\u0113mipu"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("lea fakatiapi"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"lea fakamak\u014dnite"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("lea fakakapuvelitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("lea fakakeniangi"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("lea fakakolo"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("lea fakakaingangi"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"lea fakak\u0101si"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"lea fakak\u014dtani"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"lea fakakoila-s\u012bni"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("lea fakakouali"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"lea fakakilimanisik\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("lea fakakako"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("lea fakakalenisini"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"lea fakakimip\u016bnitu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("lea fakakomi-pelemiaki"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"lea fakakonikan\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("lea fakakosilae"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("lea fakakepele"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("lea fakakalate-palakili"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("lea fakakilio"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"lea fakakinarai\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("lea fakakalelia"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("lea fakakuluki"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("lea fakasiamipala"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("lea fakapafia"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("lea fakakolongia"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("lea fakakumiki"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("lea fakakutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("lea fakalatino"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("lea fakalangi"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"lea fakal\u0101nita"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"lea fakalamip\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lea fakalesikia"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"lea fakakavakava-fo\u02bbou"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("lea fakalikulia"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("lea fakalivonia"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lea fakalakota"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"lea fakalomip\u0101ti"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"lea fakamongik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lea fakalosi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("lea fakaluli-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("lea fakalatakale"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("lea fakalupa-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("lea fakaluiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"lea fakalunit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("lea fakaluo"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lea fakamiso"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"lea fakalu\u012ba"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"lea fakasiaina-fa\u02bbutohi"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("lea fakalasu"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("lea fakamatula"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("lea fakamafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("lea fakamakahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("lea fakamaitili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("lea fakamakasali"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"lea fakamanit\u012bngiko"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("lea fakamasai"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("lea fakamapa"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"lea fakamokisi\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("lea fakamanetali"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"lea fakamenet\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("lea fakamelu"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("lea fakamolisieni"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"lea faka\u02bbaelani-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"lea fakamak\u016ba-me\u02bbeto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"lea fakamet\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("lea fakamikemaki"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("lea fakaminangikapau"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"lea fakamanis\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("lea fakamanipuli"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("lea fakamohauki"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("lea fakamosi"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("lea fakamali-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("lea fakamunitangi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("lea tuifio"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("lea fakakileki"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"lea fakamilanit\u0113si"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("lea fakamaliwali"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("lea fakamenitauai"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("lea fakamiene"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"lea faka\u02bbelisia"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("lea fakamasanitelani"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("lea fakasiaina-mininani"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("lea fakanapoletano"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("lea fakanama"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("lea fakasiamane-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("lea fakaneuali"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("lea fakaniasi"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"lea fakaniu\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"lea faka\u02bbaonasa"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("lea fakakuasio"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"lea fakangiemip\u014dni"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("lea fakanokai"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"lea fakanoau\u0113-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("lea fakanoviale"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"lea fakanik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("lea fakasoto-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("lea fakanueli"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"lea fakaneuali-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("lea fakaniamiuesi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("lea fakanianikole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("lea fakaniolo"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("lea fakanesima"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"lea faka\u02bbos\u0113se"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"lea fakatoake-\u02bbotomani"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("lea fakapangasinani"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"lea fakap\u0101lavi"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("lea fakapamipanga"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"lea fakapapiam\u0113nito"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("lea fakapalau"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"lea fakapik\u0101ti"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("lea fakanaisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of("lea fakasiamane-penisilivania"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("lea fakasiamane-lafalafa"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"lea fakap\u0113sia-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("lea fakasiamane-palatine"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("lea fakafoinikia"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("lea fakapiemonite"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("lea fakaponitiki"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"lea fakaponap\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"lea fakapul\u016bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"lea fakapolovenisi-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"lea fakak\u012bs\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("lea fakakuitisa-simipolaso"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("lea fakalasasitani"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("lea fakalapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("lea fakalalotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("lea fakalomaniolo"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("lea fakalifi"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"lea fakalomip\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("lea fakalomani"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("lea fakalotuma"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("lea fakalusini"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("lea fakaloviana"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"lea faka\u02bbalomania"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"lea fakalu\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("lea fakasanitaue"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("lea fakasaka"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"lea fakasamalitani-\u02bbal\u0101miti"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("lea fakasamipulu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("lea fakasasaki"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("lea fakasanitali"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"lea fakasaulasitil\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"lea fakang\u0101mipai"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("lea fakasangu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"lea fakasis\u012blia"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("lea fakasikotilani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"lea fakasalet\u012bnia-sasalesu"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"lea faka-tonga \u2018o Ketesi"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("lea fakaseneka"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("lea fakasena"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("lea fakaseli"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("lea fakaselikupi"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("lea fakakoilapolo-seni"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"lea faka\u02bbaelani-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("lea fakasamositia"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("lea fakataselihiti"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("lea fakasiani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"lea faka\u02bbalepea-s\u0101ti"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("lea fakasitamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("lea fakasilesia-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"lea fakaselai\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("lea fakasami-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lea fakasami-lule"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"lea fakasami-\u02bbinali"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("lea fakasami-sikolita"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"lea fakasoninek\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("lea fakasokitiana"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"lea fakasulanane-tongik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"lea fakas\u0113l\u0113le"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("lea fakasaho"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"lea fakafilisia-sat\u0113lani"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("lea fakasukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"lea fakasus\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("lea fakasumelia"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("lea fakakomolo"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"lea fakasuli\u0101i\u0101-mu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"lea fakasuli\u0101i\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lea fakasilesia"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("lea fakatulu"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"lea fakatimen\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("lea fakateso"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("lea fakateleno"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("lea fakatetumu"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"lea fakatikil\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("lea fakativi"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("lea fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"lea fakas\u0101kuli"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("lea fakakilingoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"lea fakatilingik\u012bte"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("lea fakatalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("lea fakatamasieki"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("lea fakaniasa-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("lea fakatoki-pisini"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("lea fakatuloio"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("lea fakataloko"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"lea fakasak\u014dnia"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"lea fakatis\u012bmisiani"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("lea fakatati-moselemi"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("lea fakatumepuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"lea fakat\u016bvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("lea fakatasauaki"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"lea fakatuv\u012bnia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"lea fakatamasaiti-\u02bbatilasi-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"lea faka\u02bbutimuliti"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"lea faka\u02bb\u016bkaliti"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"lea faka\u02bbumip\u016bnitu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"lea ta\u02bbe\u02bbiloa"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("lea fakavai"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"lea fakaven\u0113sia"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("lea fakavepisi"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("lea fakavelamingi-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of("lea fakafalanikoni-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("lea fakavotiki"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"lea fakav\u014dlo"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"lea fakav\u016bniso"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"lea faka\u02bbualiseli"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"lea faka\u02bbuolaita"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"lea faka\u02bbualai"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"lea faka\u02bbuasi\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"lea faka\u02bbu\u0101lipili"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"lea fakasiaina-u\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("lea fakakalimiki"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("lea fakamingilelia"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("lea fakasoka"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"lea faka\u02bbiao"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"lea faka\u02bbiapi"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"lea faka\u02bbiangipeni"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"lea faka\u02bbi\u0113mipa"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"lea fakane\u02bb\u0113ngat\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("lea fakakuangitongi"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("lea fakasapoteki"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"lea faka\u02bbilonga-pilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"lea fakas\u0113lani"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("lea fakasenaka"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("lea fakatamasaiti-moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("lea fakasuni"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u02bbikai ha lea"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"lea fakas\u0101s\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"tohinima faka\u02bbafaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"tohinima faka\u02bbalap\u0113nia-kaukasia"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"tohinima faka\u02bbalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"tohinima faka\u02bbal\u0101miti-\u02bbemipaea"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"tohinima faka\u02bb\u0101menia"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"tohinima faka\u02bbavesitani"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("tohinima fakapali"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("tohinima fakapamumi"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"tohinima fakapasa-v\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"tohinima fakap\u0101taki"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"tohinima fakap\u0101ngil\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"tohinima faka\u02bbilonga-pilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("tohinima fakapopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"tohinima fakapal\u0101m\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("tohinima laukonga ki he kui"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("tohinima fakapukisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("tohinima fakapuhiti"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"tohinima fakasakim\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"tohinima fakatupu\u02bbi-k\u0101nata-fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("tohinima fakakali"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("tohinima fakasami"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"tohinima fakaselok\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"tohinima fakak\u012bliti"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("tohinima fakakopitika"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("tohinima fakasaipalesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"tohinima fakal\u016bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"tohinima fakal\u016bsia-lotu-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"tohinima faka\u02bbinitia-tevan\u0101kal\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("tohinima fakateseleti"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"tohinimanounou fakatupoloi\u0113"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"tohinima temotika-faka\u02bbisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"tohinima hielatika-faka\u02bbisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"tohinima tongitapu-faka\u02bbisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"tohinima faka\u02bbelepasani"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"tohinima faka\u02bb\u012bti\u014dpia"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"tohinima fakakutusuli-se\u014dsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"tohinima fakase\u014dsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("tohinima fakakalakoliti"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("tohinima fakakotika"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"tohinima fakasilanit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("tohinima fakakalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"tohinima faka\u02bbinitia-kutalati"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"tohinima fakak\u016bmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"tohinima fakah\u0101nipi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"tohinima fakak\u014dlea-h\u0101ng\u016blu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("tohinima fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"tohinima fakahanun\u014d\u02bbo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("tohinima fakasiaina-fakafaingofua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tohinima fakasiaina-tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"tohinima fakahepel\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("tohinima fakasiapani-hilakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"tohinima tongitapu-faka\u02bbanatolia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("tohinima fakapahaumongi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("tohinima fakasilapa-siapani"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"tohinima fakahungakalia-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"tohinima faka\u02bbinitusi"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"tohinima faka\u02bb\u012btali-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("tohinima fakasamo"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("tohinima fakasava"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("tohinima fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"tohinima fakai\u016bkeni"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"tohinima fakakaial\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("tohinima fakasiapani-katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"tohinima fakakalosit\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"tohinima fakakamip\u014dtia"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"tohinima fakakosik\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"tohinima faka\u02bbinitia-kanata"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"tohinima fakak\u014dlea"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("tohinima fakakepele"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"tohinima fakakaiat\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("tohinima fakalana"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("tohinima fakalau"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("tohinima fakalatina-falakituli"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("tohinima fakalatina-kaeliki"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("tohinima fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"tohinima fakalepas\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"tohinima fakalimip\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("tohinima fakalinea-A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("tohinima fakalinea-P"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"tohinima fakafal\u0101se"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("tohinima fakaloma"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"tohinima fakal\u012bsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"tohinima fakal\u012btia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("tohinima fakamahasani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("tohinima fakamanitaea"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("tohinima fakamanikaea"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("tohinima tongitapu fakamaia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"tohinima fakam\u0113niti"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("tohinima fakameloue-heihei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("tohinima fakameloue"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"tohinima faka\u02bbinitia-mal\u0101ialami"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"tohinima fakamot\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"tohinima fakamongok\u014dlia"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"tohinima laukonga ki he kui-m\u0101hina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"tohinima fakamol\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("tohinima fakametei-maieki"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("tohinima fakapema"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"tohinima faka\u02bbalepea-tokelau-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("tohinima fakanapatea"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("tohinima fakanati-sepa"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"tohinima fakanik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"tohinima fakanasi\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"tohinima faka\u02bbokami"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"tohinima faka\u02bbolisiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"tohinima faka\u02bbolikoni"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"tohinima faka\u02bbotia"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"tohinima faka\u02bbosim\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("tohinima fakapalamilene"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("tohinima fakapausinihau"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"tohinima fakap\u0113mi-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"tohinima fakap\u0101kisip\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"tohinima fakap\u0101lavi-tongi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"tohinima fakap\u0101lavi-saame"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"tohinima fakap\u0101lavi-tohi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("tohinima fakafoinikia"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"tohinima fakafon\u0113tiki-pol\u0101ti"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"tohinima fakap\u0101tia-tongi"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("tohinima fakalesiangi"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("tohinima fakalongolongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("tohinima fakaluniki"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("tohinima fakasamalitane"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("tohinima fakasalati"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"tohinima faka\u02bbalepea-tonga-motu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"tohinima fakasaulasit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"tohinima faka\u02bbilonga-tohi"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("tohinima fakasiavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"tohinima fakasi\u0101lat\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("tohinima fakasititami"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"tohinima fakakutau\u0101ti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("tohinima fakasingihala"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("tohinima fakasolasomipengi"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"tohinima fakasunit\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("tohinima fakasailoti-nakili"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"tohinima fakasuli\u0101i\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"tohinima fakasuli\u0101i\u0101-\u02bbesitelangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"tohinima fakasuli\u0101i\u0101-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"tohinima fakasuli\u0101i\u0101-hahake"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"tohinima fakatakipaneu\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("tohinima fakatakili"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tohinima fakatai-lue"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"tohinima fakatai-lue-fo\u02bbou"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tohinima fakatamili"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tohinima fakatanguti"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tohinima fakatai-vieti"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"tohinima faka\u02bbinitia-teluku"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tohinima fakatengiuali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"tohinima fakatifin\u0101ki"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("tohinima fakatakaloka"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"tohinima fakat\u0101na"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tohinima fakatailani"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tohinima fakataipeti"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"tohinima fakat\u012bhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"tohinima faka\u02bb\u016bkaliti"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("tohinima fakavai"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"tohinima fakafon\u0113tiki-h\u0101mai"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"tohinima fakavalangi-kisit\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("tohinima fakauoleai"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"tohinima fakap\u0113siamu\u02bba"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"tohinima fakamata\u02bbingahau-sumelo-akatia"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"tohinima faka\u012b\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("tohinima hokosi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("tohinima fakamatematika"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"tohinima fakat\u0101t\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"tohinima faka\u02bbilonga"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"tohinima ta\u02bbetohitohi\u02bbi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("tohinima fakatatau"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"tohinima ta\u02bbe\u02bbiloa"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"lea fakasiamane-\u02bbaositulia"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("lea fakasiamane-hake-suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"lea fakap\u0101langi-\u02bbaositel\u0113lia"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"lea fakap\u0101langi-k\u0101nata"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"lea fakapilit\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"lea fakap\u0101langi-\u02bbamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"lea fakasipeini-\u02bbeulope"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("lea fakasipeini-mekisikou"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"lea fakafalanis\u0113-k\u0101nata"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"lea fakafalanis\u0113-suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"lea fakah\u014dlani-pelesiume"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"lea fakapotukali-pal\u0101sili"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"lea fakapotukali-\u02bbiulope"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"lea fakamolit\u0101via"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"lea fakasuahili-kongik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"lea faka\u02bbalepea (m\u0101mani)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"lea fakasipeini-l\u0101tini-\u02bbamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"tohi m\u0101hina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"anga pa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("tohi hokohoko"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"pa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("takai houa"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"fesi\u02bbilaine"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("founga fakafuofua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("fika"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("lea fakasakisoni-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("lea fakasiaina-fakafaingofua"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("lea fakasiaina-tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("fakalepupelika siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"takai houa 0\u201311"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"takai houa 1\u201312"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"takai houa 0\u201323"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"takai houa 1\u201324"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"fika faka\u02bbalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"fika faka\u02bb\u0101menia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"faka fakap\u0101ngil\u0101"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"fika fakatevan\u0101kal\u012b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"fika faka\u02bb\u012bti\u014dpia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"fika fakase\u014dsia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("fika fakakalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("fika fakakutalati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"fika fakak\u016bmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("fika fakasiaina fakafaingofua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("fika fakasiaina tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"fika fakahepel\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("fika fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"fika fakakamip\u014dtia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("fika fakakanata"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("fika fakalau"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("fika fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"fika fakamal\u0101ialami"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("fika fakapema"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"fika fakanik\u014d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"fika faka\u02bbotia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("fika fakatamili tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("fika fakateluku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("fika fakatailani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("fika fakatipeti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("fakataniki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u02bbunik\u014dti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"fesi\u02bbilaine ngaloku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("fika fakaloma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"fakahepel\u016b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"faka\u02bbinitia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"fakakumi \u02bbi hono anga lahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"fesi\u02bbilaine fa\u02bbafai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"fesi\u02bbilaine mafao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("founga fakamita"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("fakamohameti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("faka-iso8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"fakap\u0113sia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"anga pa\u02bbanga-kalake"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"fika faka\u02bbalepea fakalahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"fika faka\u02bb\u0101menia fakalalo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("fika fakakalisi fakalalo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("fika fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"fika fakasiaina fakafaingofua fakapa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"fika fakasiaina tukufakaholo fakapa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"fika fakasiapani fakapa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("fika fakatamili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("fakaputa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"faka\u02bb\u012bti\u014dpia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"anga pa\u02bbanga-s\u012bpinga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"fakas\u012bpinga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"founga fakapilit\u0101nia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"founga faka\u02bbamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("fika laulahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("fika fakaloma fakalalo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("fakakelekolia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("fika telefoni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("fakamohameti-sivile"_s)
		})
	}));
	return data;
}

LocaleNames_to::LocaleNames_to() {
}

$Class* LocaleNames_to::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_to, name, initialize, &_LocaleNames_to_ClassInfo_, allocate$LocaleNames_to);
	return class$;
}

$Class* LocaleNames_to::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun