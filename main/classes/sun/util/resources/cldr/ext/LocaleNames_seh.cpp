#include <sun/util/resources/cldr/ext/LocaleNames_seh.h>

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

$MethodInfo _LocaleNames_seh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_seh::*)()>(&LocaleNames_seh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_seh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_seh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_seh_MethodInfo_
};

$Object* allocate$LocaleNames_seh($Class* clazz) {
	return $of($alloc(LocaleNames_seh));
}

void LocaleNames_seh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_seh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
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
			$of("AI"_s),
			$of("Anguilla"_s)
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
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
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
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaij\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u00f3snia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
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
			$of("BM"_s),
			$of("Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
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
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canad\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Rep\u00fablica Centro-Africana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
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
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Rep\u00fablica dos Camar\u00f5es"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Col\u00f4mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cabo Verde"_s)
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
			$of("DM"_s),
			$of("Dominica"_s)
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
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micron\u00e9sia"_s)
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
			$of("GI"_s),
			$of("Gibraltar"_s)
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
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
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
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Cro\u00e1cia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
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
			$of("IL"_s),
			$of("Israel"_s)
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
			$of("JM"_s),
			$of("Jamaica"_s)
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
			$of(u"Cor\u00e9ia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Cor\u00e9ia do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
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
			$of("Laos"_s)
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
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
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
			$of(u"Mold\u00e1via"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Ilhas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mianmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f3lia"_s)
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
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
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
			$of("MW"_s),
			$of("Malawi"_s)
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
			$of("Ilhas Norfolk"_s)
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
			$of("Holanda"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noruega"_s)
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
			$of("PE"_s),
			$of("Peru"_s)
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
			$of("PN"_s),
			$of("Pitcairn"_s)
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
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
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
			$of("SC"_s),
			$of("Seychelles"_s)
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
			$of("SK"_s),
			$of(u"Eslov\u00e1quia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Serra Leoa"_s)
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
			$of(u"Som\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 e Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
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
			$of("TG"_s),
			$of("Togo"_s)
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
			$of("TK"_s),
			$of("Tokelau"_s)
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
			$of("TO"_s),
			$of("Tonga"_s)
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
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucr\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
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
			$of("VE"_s),
			$of("Venezuela"_s)
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
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"I\u00eamen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
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
			$of(u"Zimb\u00e1bue"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"am\u00e1rico"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u00e1rabe"_s)
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
			$of("bn"_s),
			$of("bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tcheco"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alem\u00e3o"_s)
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
			$of("es"_s),
			$of("espanhol"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"franc\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"h\u00fangaro"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indon\u00e9sio"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("ibo"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javan\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("cmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"birman\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepal\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugu\u00eas"_s)
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
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"t\u00e2mil"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"tailand\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turco"_s)
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
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"iorub\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chin\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		})
	}));
	return data;
}

LocaleNames_seh::LocaleNames_seh() {
}

$Class* LocaleNames_seh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_seh, name, initialize, &_LocaleNames_seh_ClassInfo_, allocate$LocaleNames_seh);
	return class$;
}

$Class* LocaleNames_seh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun