#include <sun/util/resources/cldr/ext/LocaleNames_ln.h>

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

$MethodInfo _LocaleNames_ln_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ln::*)()>(&LocaleNames_ln::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ln_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ln",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ln_MethodInfo_
};

$Object* allocate$LocaleNames_ln($Class* clazz) {
	return $of($alloc(LocaleNames_ln));
}

void LocaleNames_ln::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ln::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Andor\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"L\u025bmila alabo"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afiganisit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antiga mp\u00e9 Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Angiy\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Alibani"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Am\u025bni"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ang\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarctique"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arizantin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa ya Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Otilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Osit\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Az\u025bl\u025bbaiz\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosini mp\u00e9 Hezegovine"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Bar\u025bbad\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bengalid\u025bsi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Beleziki"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Bukina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Biligari"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bahr\u025bn\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Ben\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brineyi"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivi"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brez\u00edl\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bahamas\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Byelorisi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Beliz\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Republ\u00edki ya Kong\u00f3 Demokrat\u00edki"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Repibiki ya Afr\u00edka ya K\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Swis\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kot\u00eddivual\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Bisanga bya Kook\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"S\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kam\u025brune"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Sin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombi"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kositarika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kiba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Bisanga bya Kapev\u025br\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"S\u00edp\u025bl\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Shekia"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemani"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Dzibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dan\u025bmarike"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dom\u00ednike"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Repibiki ya Dom\u00ednik\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Aliz\u025bri"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekwat\u025b\u0301l\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Esitoni"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ez\u00edpite"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Elitel\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Esipanye"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ets\u00edopi"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Filand\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidzi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Bisanga bya Maluni"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezi"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Fal\u00e1ns\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Ang\u025bl\u025bt\u025b\u0301l\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Gelenad\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Zorzi"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Giyan\u025b ya Fal\u00e1ns\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernesey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Zibatal\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Gowelande"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambi"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Gin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Gwad\u025blup\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Gin\u025b\u0301kwat\u025b\u0301l\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Geleki"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u00celes de G\u00e9orgie du Sud et Sandwich du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Gwat\u00e9mala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Gwam\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gin\u025bbisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Giyane"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ile Heard et Iles McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Onduras\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Krowasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Ayiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ongili"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezi"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ireland\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Isirayel\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdnd\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Mabel\u00e9 ya Ang\u025bl\u025bt\u025b\u0301l\u025b na mb\u00fa ya Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Isiland\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itali"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Zamaiki"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Z\u0254dani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Zap\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kigizisit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodza"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Komor\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"S\u00e1ntu kr\u00edstofe mp\u00e9 Nev\u025b\u0300s"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kor\u025b ya n\u0254\u0301rdi"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kor\u025b ya s\u00fadi"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koweti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Bisanga bya Kay\u00edma"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakisit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Lawosi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Lib\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"S\u00e1ntu lisi"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lish\u025bteni"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sirilanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9riya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litwani"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Likisambulu"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letoni"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Lib\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marok\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Molidavi"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Mont\u00e9n\u00e9gro"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagasikari"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Bisanga bya Marishal\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Birmanie"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongol\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Bisanga bya Marian\u025b ya n\u0254\u0301rdi"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martiniki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritani"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"M\u0254sera"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Malit\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Moris\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mad\u00edv\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksike"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezi"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mozamb\u00edki"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledoni ya sika"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Niz\u025br\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Esanga Norfok\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nizerya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Oland\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norivez\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nep\u00e1l\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Nyu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Zeland\u025b ya sika"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e1n\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"P\u00e9ru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinezi ya Fal\u00e1ns\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papwazi Gin\u025b ya sika"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filipin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakisit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poloni"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"S\u00e1ntu p\u00e9t\u00e9to mp\u00e9 Mikel\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pikairni"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"P\u0254toriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Pal\u025bsine"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Put\u00falug\u025bsi"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Palagwei"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katari"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Lenyo"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbie"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Ris\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Alabi Sawudit\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Bisanga Solom\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"S\u025bsh\u025bl\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Sw\u00e9d\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singapur\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"S\u00e1ntu eleni"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Siloveni"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Silovaki"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Siera Leon\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"S\u00e1ntu Marin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Senegal\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Surinam\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tom\u00e9 mp\u00e9 Presip\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Savad\u0254r\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sir\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swazilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Bisanga bya Turki mp\u00e9 Kaiko"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ts\u00e1di"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Terres australes et antarctiques fran\u00e7aises"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tailand\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tazikisit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Timor\u025b ya Moni\u025bl\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Tik\u025bm\u00e9nisit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tinizi"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tiliki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Tinidad\u025b mp\u00e9 Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwanin"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzani"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ikr\u025bni"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Irigwei"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzib\u025bkisit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatik\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"S\u00e1ntu ves\u00e1 mp\u00e9 Gelenadin\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Ven\u00e9zuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Bisanga bya Vierzi ya Ang\u025bl\u025bt\u025b\u0301l\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Bisanga bya Vierzi ya Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Viyetinam\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Walis\u025b mp\u00e9 Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yem\u025bn\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Mayot\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afr\u00edka ya S\u00fadi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("liamariki"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("lialabo"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"libyeloris\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("libiligali"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("libengali"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"litshek\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"lialem\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("ligeleki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ling\u025bl\u025b\u0301sa"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("lisipanye"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"lipel\u00e9san\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"lifalans\u025b\u0301"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("lihindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("liongili"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("lindonezi"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("litaliano"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"lizap\u0254"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("lizava"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("likambodza"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("likoreya"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ling\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("limalezi"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"libilim\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"linepal\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"lifalam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("lipendzabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"lipolon\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"lipulutug\u025b\u0301si"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("liromani"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"liris\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("lisomali"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"lisuwed\u025b"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("litamuli"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("litaye"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("litiliki"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"likr\u025bni"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("liurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"liviyetin\u00e1mi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("lisinwa"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		})
	}));
	return data;
}

LocaleNames_ln::LocaleNames_ln() {
}

$Class* LocaleNames_ln::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ln, name, initialize, &_LocaleNames_ln_ClassInfo_, allocate$LocaleNames_ln);
	return class$;
}

$Class* LocaleNames_ln::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun