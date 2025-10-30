#include <sun/util/resources/cldr/ext/CurrencyNames_ksh.h>

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

$MethodInfo _CurrencyNames_ksh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ksh::*)()>(&CurrencyNames_ksh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ksh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ksh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ksh_MethodInfo_
};

$Object* allocate$CurrencyNames_ksh($Class* clazz) {
	return $of($alloc(CurrencyNames_ksh));
}

void CurrencyNames_ksh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ksh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("de vereineschte arraabesche Emiraate ier Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afjahni"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albaanesche Lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armeenesche Dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"neederl\u00e4ngsch antillesche Jullde"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angjolaanesche Kwansa"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("ajentiinesche Peeso"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("austraalesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("arubesche Florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Asserbaidschaani Manat (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Asserbaidschaani Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u00f6mtuuschbaa Mark us Bo\u00dfnije un d\u00e4 H\u00e4chejovvina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbados-Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Taka us Banglad\u00e4sch"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("buljaaresche Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bachrainesche Denaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundesche Frang"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermuuda-Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Brunei-Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bollivijano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brasilljaanesche Real"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"bahama\u2019sche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("bhutanesesche Ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula us Bozwaana"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"wii\u00dfru\u00dfesche Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"wii\u00dfru\u00dfesche Rubel (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizjaanesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kannaadesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("kongjoleesesche Frang"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"schweijzer Fr\u00e4nkli"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("schileenesche Peeso"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("schineesesche Yuan Renminbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kolumbesche Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"ko\u00dftarikaanesche Col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u00f6mtuuschbaa kubaanesche Pesos"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubaanesche Peesos"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kapverdesche Eskuudos"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"tsch\u00e4schesche Kruhne"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Frang u\u00df Dschibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"d\u00e4nesche Kruhne"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dommenikaanesche Peesos"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("aljeresche Denaa"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u00c4\u00dfnesche Kruhne"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u00e4jiptesche Pongk"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nafka u\u00df Erritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u00e4tejoopesche Birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fidschi-Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Pongk vun de Falkland-Enselle"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"brittesche \u00a3"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("jeorjesche Lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("janaaesche Cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"jibraltaa\u2019sche Pongk"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("jambesche Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Jineea-Frang"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("juatemalesche Quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Juaana-Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hongkong-Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("hondureanesche Lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("krowaatesche Kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haiitesche Gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("unjarresche Forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indoneesesche Ruupije"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"i\u00dfraeelesche Schekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indesche Ruupije"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("iraakesche Denaa"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("persesche Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"i\u00dfl\u00e4ndesche Kruhne"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("jamaikaanesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordaanesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("japaanesche Jen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Kenjaanesche Schillinge"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirjiisesche Som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("kambodschaanesche Riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("kommooresche Frang"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("noodkorejaansche Won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"s\u00f6\u00f6dkorejaansche Won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitesche Denaa"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Kaimann-Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kasakesche Tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("loaatesche Kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libaneesesche Pongk"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("schrilankesche Ruupije"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberijaanesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("lesoothesche Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("littouesche Litas"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"l\u00e4ttesche Lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libesche Denaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("marrokaanesche Dirhamm"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldaavesche Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("madajaskesche Ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("mazedoonesche Denaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("burmeesesche Kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("mongjoolesche Tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("makaneesesche Pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"mauretanesche Ouguiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("mauretanesche Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("maurizjahnesche Ruupije"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("mallediivesche Rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malaawesche Kwache"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("mexekaanesche Peeso"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malaisesche Ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"mosambikaanesche Metical (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mossambikaanesche Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namiibesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("nijerijaanesche Naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nikarajaanesche C\u00f3rdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("norrweejesche Kruhne"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepaleesesche Ruupije"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"neuseel\u00e4ndesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("ommaanesche Rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("pannameesesche Balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("perruaanesche Sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("papua neujinejaanesche Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("fillipiinesche Pesos"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakestaanesche Ruupije"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"polnesche Z\u0142oty"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("parajuaanesche Juarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("kataaresche Rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"rom\u00e4\u00e4nesche Leu (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rom\u00e4\u00e4nesche Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"s\u00e4rbesche Denaare"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("russesche Ruubel"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("ruandesche Frang"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudesche Rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("solomonesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("seischellesche Ruupije"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudaneesesche Pongk"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("schweedesche Kruhne"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("singjapurejaanesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Zint-Hellena-Pongk"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u00dflovaakesche Kruhne"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u1e9ej\u00e4rra-lejoneesesche Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("somaalesche Schillenge"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"s\u00fcrinameesesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"s\u00f6dsudaneesesche Pongk"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra vun S\u00e3o Tom\u00e9 un Pr\u00edncipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobra vun S\u00e3o Tom\u00e9 un Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("asalvadorejaanesche Cosan"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"s\u00fc\u00fcresche Pund"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"swasil\u00e4ndesche Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"tail\u00e4ndesche Baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"tadschiki\u00dftaanesche Somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"turkmene\u00dftaanesche Manat (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"turkmene\u00dftaanesche Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tuneesesche Denaa"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tongjanes Pa\u02bbangache"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"t\u00f6rkesche Liire"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Dollaa u\u00df Trinidad un Tob\u00e4\u00e4jo"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("neu taiwaneesesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("tansaanesche Schillenge"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukraijnesche Hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("ujandesche Schillenge"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"amm\u00e4rrikaanesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("urrujuwaische Peeso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"u\u00dfbeekesche Som"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelaanesche Bol\u00edvar (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"venezuelaanesche Bol\u00edvar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"vij\u00e4tnammeesesche Dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatesche Vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("samowaanesche Tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Kmmeruhner Frang"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Sellver"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Jold"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"o\u00df-karribbesche Dollaa"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"franz\u00fc\u00fcsesche Joldfranke"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Frang u\u00df de \u00c4lfebeink\u00f6\u00df"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladijum"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("polineesesche Frang"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Plaatin"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"W\u00e4hrong zum Pr\u00f6\u00f6fe"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"onbikannte W\u00e4hrong"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemenitesche Rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"s\u00f6daffrekaanesche Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"sambesche Kwacha (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("sambesche Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"simbabwesche Dollaa (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("simbabwesche Dollaa (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_ksh::CurrencyNames_ksh() {
}

$Class* CurrencyNames_ksh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ksh, name, initialize, &_CurrencyNames_ksh_ClassInfo_, allocate$CurrencyNames_ksh);
	return class$;
}

$Class* CurrencyNames_ksh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun