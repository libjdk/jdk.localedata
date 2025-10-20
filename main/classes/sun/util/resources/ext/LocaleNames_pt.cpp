#include <sun/util/resources/ext/LocaleNames_pt.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_pt::*)()>(&LocaleNames_pt::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_pt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_pt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_pt_MethodInfo_
};

$Object* allocate$LocaleNames_pt($Class* clazz) {
	return $of($alloc(LocaleNames_pt));
}

void LocaleNames_pt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_pt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirados \u00c1rabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afeganist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00edgua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00eania"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of("Antilhas Holandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Ant\u00e1rtida"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Americana"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00c1ustria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austr\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaij\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u00f3snia-Herzeg\u00f3vina"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u00e9lgica"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burquina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulg\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bareine"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Ilha Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Ilhas Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Congo, Rep\u00fablica Democr\u00e1tica do"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Rep\u00fablica Centro-Africana"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Su\u00ed\u00e7a"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Costa do Marfim"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Ilhas Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Rep\u00fablica dos Camar\u00f5es"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Col\u00f4mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"S\u00e9rvia e Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Ilhas Natal"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Chipre"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Rep\u00fablica Tcheca"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemanha"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarca"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Rep\u00fablica Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Arg\u00e9lia"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Equador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Est\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egito"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Saara Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Eritr\u00e9ia"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espanha"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Eti\u00f3pia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finl\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micron\u00e9sia, Estados Federados da"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Ilhas Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Fran\u00e7a"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Reino Unido"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Ge\u00f3rgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guiana Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gro\u00eanlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"G\u00e2mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Guin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Guin\u00e9 Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gr\u00e9cia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Ge\u00f3rgia do Sul e Ilhas Sandwich do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guin\u00e9 Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hong Kong, Regi\u00e3o Admin. Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ilha Heard e Ilhas McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Cro\u00e1cia"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungria"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00e9sia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territ\u00f3rio Brit\u00e2nico do Oceano \u00cdndico"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraque"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Isl\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"It\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jord\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Jap\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Qu\u00eania"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Quirguist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Quiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"S\u00e3o Cristov\u00e3o e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Cor\u00e9ia, Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Cor\u00e9ia, Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Ilhas Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Casaquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Rep\u00fablica Democr\u00e1tica Popular de Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"L\u00edbano"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa L\u00facia"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lib\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litu\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Let\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marrocos"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f4naco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldova, Rep\u00fablica de"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Ilhas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maced\u00f4nia, Rep\u00fablica da"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mianm\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f3lia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macau, Regi\u00e3o Admin. Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ilhas Marianas do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maurit\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u00edcio"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u00e9xico"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Mal\u00e1sia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mo\u00e7ambique"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caled\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00edger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ilha Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nig\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nicar\u00e1gua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Pa\u00edses Baixos"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nova Zel\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polin\u00e9sia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-Nova Guin\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Paquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pol\u00f4nia"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre e Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Territ\u00f3rio da Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Catar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reuni\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00eania"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u00fassia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Ar\u00e1bia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Ilhas Salom\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Su\u00e9cia"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Cingapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslov\u00eania"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Eslov\u00e1quia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Serra Leoa"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 e Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Suazil\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ilhas Turks e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chade"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territ\u00f3rios Franceses do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tail\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadjiquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turcomenist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tun\u00edsia"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turquia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucr\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ilhas Menores Distantes dos Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbequist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vaticano"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"S\u00e3o Vicente e Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Ilhas Virgens Brit\u00e2nicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ilhas Virgens dos EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vietn\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"I\u00eamen"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u00c1frica do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Z\u00e2mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimb\u00e1bwe"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhazian"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"av\u00e9stico"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afric\u00e2ner"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"am\u00e1rico"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u00e1rabe"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assam\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaijano"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielo-russo"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"b\u00falgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("biari"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bret\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"b\u00f3snio"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"catal\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("chechene"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"c\u00f3rsico"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tcheco"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslavo eclesi\u00e1stico"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"gal\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dinamarqu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alem\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grego"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ingl\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanhol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniano"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basco"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fijiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fero\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"franc\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fris\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ga\u00e9lico escoc\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galego"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("guzerate"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hau\u00e7\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebraico"_s)
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
			$of("croata"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"h\u00fangaro"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"arm\u00eanio"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"interl\u00edngua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indon\u00e9sio"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("ibo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"indon\u00e9sio"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"island\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("hebraico"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"i\u00eddiche"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"congol\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("quicuio"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("cazaque"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groenland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("cmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"canar\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"can\u00fari"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("curdo"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"c\u00f3rnico"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("quirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latim"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgish"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-catanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"let\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshall\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maced\u00f4nio"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malaiala"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"mold\u00e1vio"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marata"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malt\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"birman\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"bokm\u00e5l noruegu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele, north"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("dongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"nynorsk noruegu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"noruegu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele, south"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nianja; chicheua; cheua"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occit\u00e2nico (ap\u00f3s 1500); proven\u00e7al"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"p\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto (pushto)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"qu\u00edchua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("rhaeto-romance"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"s\u00e2nscrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("northern sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"cingal\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovaco"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"eslov\u00eanio"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"alban\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"s\u00e9rvio"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("soto, do sul"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundan\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"sua\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"t\u00e2mil"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjique"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"tailand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigr\u00ednia"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonga (ilhas tonga)"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turco"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("taitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("usbeque"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuque"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("uolofe"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"i\u00eddiche"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chin\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		})
	});
}

LocaleNames_pt::LocaleNames_pt() {
}

$Class* LocaleNames_pt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pt, name, initialize, &_LocaleNames_pt_ClassInfo_, allocate$LocaleNames_pt);
	return class$;
}

$Class* LocaleNames_pt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun