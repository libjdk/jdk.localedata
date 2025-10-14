#include <sun/util/resources/cldr/ext/LocaleNames_pt_PT.h>

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

$MethodInfo _LocaleNames_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_pt_PT::*)()>(&LocaleNames_pt_PT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_pt_PT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_pt_PT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_pt_PT_MethodInfo_
};

$Object* allocate$LocaleNames_pt_PT($Class* clazz) {
	return $of($alloc(LocaleNames_pt_PT));
}

void LocaleNames_pt_PT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pt_PT::getContents() {
	$var($String, metaValue_bn, u"bengal\u00eas"_s);
	$var($String, metaValue_hy, u"arm\u00e9nio"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Territ\u00f3rios palestinianos"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"past\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"s\u00edmbolos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Numera\u00e7\u00e3o grega min\u00fascula"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugu\u00eas do Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Formato monet\u00e1rio"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("changma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"eg\u00edpcio cl\u00e1ssico"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rajastan\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Algarismos birmaneses"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("espanhol europeu"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Oce\u00e2nia Insular"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghiano"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"nasta\u2019liq"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"african\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Calend\u00e1rio et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ingl\u00eas americano"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Alanda"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oce\u00e2nia"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rom\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"arm\u00e9nio oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Algarismos de odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Numera\u00e7\u00e3o decimal chinesa"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladeche"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Ordem por radical e tra\u00e7os"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bar\u00e9m"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benim"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ingl\u00eas australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"l\u00edngua pohnpeica"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Baamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami do norte"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Norte de \u00c1frica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Estilo estrito de quebra de linha"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslov\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u00c1frica Austral"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Calend\u00e1rio persa"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"S\u00e3o Marinho"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Numera\u00e7\u00e3o hebraica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Numera\u00e7\u00e3o t\u00e2mil"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Ilhas dos Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Formato monet\u00e1rio contabil\u00edstico"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u00e1rabe do N\u00e9gede"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"S\u00e3o Martinho (Sint Maarten)"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire (Costa do Marfim)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Numera\u00e7\u00e3o financeira em chin\u00eas tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"c\u00f3rsico"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Sistema de medida americano"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("checo"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territ\u00f3rios Austrais Franceses"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tajique"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7au"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Ilha do Natal"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajiquist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"ingl\u00eas canadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Cara\u00edbas"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ch\u00e9quia"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Toquelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Numera\u00e7\u00e3o et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turquemenist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Numera\u00e7\u00e3o japonesa"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugu\u00eas europeu"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trindade e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"alem\u00e3o alto antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Formato monet\u00e1rio padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Algarismos devan\u00e1garis"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dom\u00ednica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Numera\u00e7\u00e3o arm\u00e9nia min\u00fascula"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irland\u00eas antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u00c1sia do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("espanhol latino-americano"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"l\u00edngua pangasinesa"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ilhas Menores Afastadas dos EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Calend\u00e1rio chin\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta e Melilha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Calend\u00e1rio copta"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampango"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Numera\u00e7\u00e3o grega"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Est\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Estilo padr\u00e3o de quebra de linha"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sara Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usbequist\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("usbeque"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazigue do Atlas Central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Ordem por tra\u00e7os"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"chuqu\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"jarg\u00e3o chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"baixo-sax\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"proven\u00e7al antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("siloti nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"est\u00f3nio"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han com bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Calend\u00e1rio gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ilhas Virgens dos EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Zona Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Algarismos de guzerate"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Ciclo hor\u00e1rio (12 vs. 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietname"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u00e1rabe do Chade"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Variante de regi\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"Translitera\u00e7\u00e3o BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"n\u00f3rdico antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"arm\u00e9nio ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Ordem tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fr\u00edsico ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Algarismos financeiros"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Calend\u00e1rio nacional indiano"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"u\u00f3lofe"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"grego cl\u00e1ssico"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight marroquino padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u00e1rabe moderno padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernesey"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tai le"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gronel\u00e2ndia"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudoacentos"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudobidirecional"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Calend\u00e1rio Et\u00edope Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Numera\u00e7\u00e3o em chin\u00eas simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Numera\u00e7\u00e3o em chin\u00eas tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Numera\u00e7\u00e3o romana min\u00fascula"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"n\u00e3o escrito"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ha\u00fa\u00e7a"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alem\u00e3o austr\u00edaco"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"alem\u00e3o su\u00ed\u00e7o"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Calend\u00e1rio isl\u00e2mico (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"I\u00e9men"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Ordena\u00e7\u00e3o padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Algarismos tradicionais"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("espanhol mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Maiote"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("persa antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"franc\u00eas antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Regras de ordena\u00e7\u00e3o europeias"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"fr\u00edsio oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Estilo flex\u00edvel de quebra de linha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Numera\u00e7\u00e3o georgiana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Algarismos bengalis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Calend\u00e1rio isl\u00e2mico"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbabu\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Ordem da lista telef\u00f3nica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"monot\u00f3nico"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami do sul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Algarismos de telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Algarismos de canarim"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Numera\u00e7\u00e3o financeira japonesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("crioulo de Louisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"alto alem\u00e3o su\u00ed\u00e7o"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("inari sami"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Sequ\u00eancia de ordena\u00e7\u00e3o fon\u00e9tica"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"makassar\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Calend\u00e1rio budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Qu\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ge\u02bcez"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Quirib\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groneland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"S\u00e3o Crist\u00f3v\u00e3o e Neves"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"franc\u00eas canadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reforma da ordena\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"franc\u00eas su\u00ed\u00e7o"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koweit"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"eg\u00edpcio dem\u00f3tico"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Ilhas Caim\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"eg\u00edpcio hier\u00e1tico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Algarismos de malaiala"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"baixo-alem\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Listenstaine"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Sistema de medida imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Numera\u00e7\u00e3o financeira em chin\u00eas simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Let\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Algarismos indo-ar\u00e1bicos expandidos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Algarismos de largura completa"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f3naco"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madag\u00e1scar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Ordena\u00e7\u00e3o unicode predefinida"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luri do norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maced\u00f3nia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maced\u00f3nio"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marata"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Monserrate"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"Translitera\u00e7\u00e3o UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maur\u00edcia"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altai do sul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Algarismos de khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Mal\u00e1ui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Calend\u00e1rio japon\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u00c1frica subsariana"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"noruegu\u00eas bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Calend\u00e1rio hebraico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Ordena\u00e7\u00e3o do dicion\u00e1rio"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caled\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Algarismos de gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"neerland\u00eas"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"noruegu\u00eas nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"v\u00e1rios idiomas"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niu\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Sistema de medida"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"polit\u00f3nico"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Numera\u00e7\u00e3o romana"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ingl\u00eas antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Algarismos de t\u00e2mil"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Numera\u00e7\u00e3o arm\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"carachaio-b\u00e1lcaro"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oss\u00e9tico"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"franc\u00eas crioulo seselwa"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("cabardiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("crioulo mauriciano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Calend\u00e1rio isl\u00e2mico (civil)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ingl\u00eas brit\u00e2nico"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pol\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Calend\u00e1rio dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Largura completa"_s)
		})
	}));
	return data;
}

LocaleNames_pt_PT::LocaleNames_pt_PT() {
}

$Class* LocaleNames_pt_PT::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pt_PT, name, initialize, &_LocaleNames_pt_PT_ClassInfo_, allocate$LocaleNames_pt_PT);
	return class$;
}

$Class* LocaleNames_pt_PT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun