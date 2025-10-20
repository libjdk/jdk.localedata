#include <sun/util/resources/cldr/ext/LocaleNames_lag.h>

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

$MethodInfo _LocaleNames_lag_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_lag::*)()>(&LocaleNames_lag::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_lag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lag",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lag_MethodInfo_
};

$Object* allocate$LocaleNames_lag($Class* clazz) {
	return $of($alloc(LocaleNames_lag));
}

void LocaleNames_lag::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lag::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"And\u00f3ra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0244temi wa K\u0268ar\u00e1abu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afuganisit\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antig\u00faua na Barib\u00fauda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Angu\u00edila"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alub\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arim\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ang\u00f3ola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Ajent\u00edina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Sam\u00f3oa ya Amer\u0268\u0301ka"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00c1usitiria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ausiter\u00e9elia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Ar\u00fauba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azabaj\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u00f3sinia"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Babad\u00f3osi"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangalad\u00e9eshi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0244belig\u00ediji"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Bukinaf\u00e1aso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Buligar\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bahar\u00e9eni"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Bur\u00faundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Ben\u00edini"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Berim\u00fauda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Burun\u00e9ei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Bras\u00edili"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bah\u00e1ama"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Botisw\u00e1ana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belar\u00fausi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bel\u00edise"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"K\u00e1nada"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Jamuh\u00fauri ya K\u0268demokuras\u00eda ya K\u00f3ongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Juh\u00fauri ya Af\u0268r\u0268ka ya kat\u0268 kat\u0268"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"K\u00f3ongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Usw\u00edisi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Ivori Kositi"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Vis\u00ediwa vya K\u00fauku"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Ch\u00edile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamer\u00fauni"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Ch\u00edina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kol\u00f3mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"K\u00f3sita R\u0268\u0301\u0268ka"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Ky\u00fauba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Kepuv\u00e9ede"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Kupur\u00f3osi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Jamuh\u00fauri ya Ch\u00e9eki"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0244jerum\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Jib\u00fauti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denimaki"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dom\u00edn\u0268ka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Jamuh\u00fauri ya Domin\u0268ka"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alij\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u00cdkwado"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Eston\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"M\u00edsiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eriterea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Hisip\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0244hab\u00e9eshi"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Uf\u00edini"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"F\u00ediji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Vis\u00ediwa vya Fakulandi"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikiron\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0244far\u00e1ansa"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u00f3oni"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0244\u0268nger\u00e9esa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Giren\u00e1ada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"J\u00f3jia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Gwiy\u00e1ana y\u0289 \u0244far\u00e1ansa"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"G\u00e1ana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Jibur\u00e1lita"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Girinil\u00e1andi"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"G\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"G\u00edine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Gwadel\u00faupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"G\u00edine Ikw\u00e9eta"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Ugir\u00edki"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Gwatem\u00e1ala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gwani"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"G\u00edine Bis\u00e1au"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Guy\u00e1ana"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hondur\u00e1asi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kor\u00e9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ha\u00editi"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hung\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ayal\u00e1andi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Isira\u00e9eli"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u0197s\u0268 y\u0289 \u0244\u0268nger\u00e9esa irivii ra H\u00edindi"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ir\u00e1aki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0244aj\u00e9emi"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Aisil\u00e1andi"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jam\u00e1ika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"J\u00f3dani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"K\u00e9enya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirigisit\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamb\u00f3dia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Kirib\u00e1ati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Kom\u00f3oro"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"M\u0289takat\u00edifu kitisi na Nev\u00edisi"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kor\u00e9a y\u0289 \u0289t\u0289r\u0289ko"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kor\u00e9a ya Saame"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"K\u0289w\u00e1iti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Vis\u00ediwa vya Kayimani"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakasit\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"La\u00f3osi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Leban\u00f3oni"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"M\u0289takat\u00edifu Lus\u00edia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lishent\u00e9eni"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Siril\u00e1anka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Liib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Les\u00f3oto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lisu\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lasemb\u00e1agi"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lativia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Mor\u00f3oko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mon\u00e1ako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Molid\u00f3ova"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Buk\u00edini"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Vis\u00ediwa vya Marish\u00e1ali"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"M\u00e1ali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mi\u00e1ama"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f3lia"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Visiwa vya Mariana vya Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Maritin\u00ediki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Morit\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Monter\u00e1ati"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u00e1lita"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Mor\u00edisi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mod\u00edivu"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Mal\u00e1awi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mekisiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Male\u00edsia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Musumb\u00ediji"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Kaled\u00f3nia Ifya"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00edija"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Kis\u00ediwa cha Nofif\u00f3oki"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Niij\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nikar\u00e1g\u0289a"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u0244hol\u00e1anzi"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwe"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nep\u00e1ali"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Na\u00fauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ni\u00faue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nyuz\u00edlandi"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u00d3mani"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Pan\u00e1ama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"P\u00e9eru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polin\u00e9sia y\u0289 \u0244far\u00e1ansa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pap\u00faua"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Ufilip\u00edino"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakisit\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f3landi"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"M\u0289takat\u00edifu Pe\u00e9teri na M\u0268ka\u00e9eli"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Patika\u00edrini"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pwetor\u0268\u0301\u0268ko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Mweemberera wa k\u0289mweeri wa G\u00e1aza"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u0244r\u00e9eno"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Pal\u00e1au"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Paragu\u00e1ai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Kat\u00e1ari"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reyuni\u00f3oni"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Roman\u00edia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Ur\u00fausi"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Rw\u00e1anda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saud\u00edia Arab\u00edia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Vis\u00ediwa vya Solom\u00f3oni"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Shelish\u00e9eli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Usw\u00edidi"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapoo"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"M\u0289takat\u00edifu Hel\u00e9ena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Sulov\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Sulov\u00e1akia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Serale\u00f3oni"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Samar\u00edino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Seneg\u00e1ali"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Surin\u00e1amu"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao T\u00f3ome na Pirinsipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Elisalivado"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0244sw\u00e1azi"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Vis\u00ediwa vya Tur\u00ediki na Ka\u00ediko"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ch\u00e1adi"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"T\u00f3ogo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"T\u00e1ilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajikisit\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Tokel\u00e1au"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tim\u00f3ori yi It\u0289\u0289mba"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Uturukimenisit\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tun\u00edsia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"T\u00f3onga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Utur\u00fauki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Tirin\u00edida ya Tob\u00e1ago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tuv\u00e1alu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taiw\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Taansan\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0244k\u0268r\u00e9eni"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0244g\u00e1anda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amer\u0268ka"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Urugu\u00e1ai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usibekisit\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatik\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"M\u0289takat\u00edifu Vis\u00e9enti na Gernad\u00edini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venezu\u00e9ela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Vis\u00ediwa vya Vig\u00edini vya \u0244\u0268nger\u00e9esa"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Vis\u00ediwa vya Vig\u00edini vya Amer\u0268\u0301ka"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vietin\u00e1amu"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanu\u00e1atu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wal\u00edisi na Fut\u00fauna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Sam\u00f3oa"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Y\u00e9meni"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"May\u00f3ote"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Af\u0268r\u0268ka ya Saame"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"S\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Simb\u00e1abwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"K\u0268ak\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"K\u0268m\u0289h\u00e1ari"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"K\u0268ar\u00e1abu"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"K\u0268beral\u00fausi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"K\u0268bulug\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"K\u0268bang\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"K\u0268ch\u00e9eki"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"K\u0268jer\u0289m\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"K\u0268gir\u00edki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"K\u0268\u0268nger\u00e9esa"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"K\u0268hisp\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"K\u0268aj\u00e9emi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"K\u0268far\u00e1ansa"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"K\u0268ha\u00fausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"K\u0268h\u00edindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"K\u0268hung\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"K\u0268\u0268ndon\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Ki\u00edgibo"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"K\u0268tali\u00e1ano"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"K\u0268jap\u00e1ani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"K\u0268j\u00e1ava"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"K\u0268kamb\u00f3dia"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"K\u0268kor\u00e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"K\u0268mel\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"K\u0268b\u00e1ama"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"K\u0268nep\u00e1ali"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"K\u0268hol\u00e1anzi"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"K\u0268p\u00fanjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"K\u0268p\u00f3landi"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"K\u0268r\u00e9eno"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"K\u0268roman\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"K\u0268r\u00fausi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"K\u0268nyarw\u00e1anda"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"K\u0268s\u00f3m\u00e1ali"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"K\u0268sw\u00edidi"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"K\u0268tam\u00edili"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"K\u0268t\u00e1ilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"K\u0268tur\u00fauki"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"K\u0268uk\u0268ran\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"K\u0268\u00fardu"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"K\u0268vietin\u00e1amu"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"K\u0268yor\u00fauba"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"K\u0268ch\u00edina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"K\u0268z\u00faulu"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"K\u0268laangi"_s)
		})
	}));
	return data;
}

LocaleNames_lag::LocaleNames_lag() {
}

$Class* LocaleNames_lag::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lag, name, initialize, &_LocaleNames_lag_ClassInfo_, allocate$LocaleNames_lag);
	return class$;
}

$Class* LocaleNames_lag::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun