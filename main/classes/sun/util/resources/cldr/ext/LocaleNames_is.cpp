#include <sun/util/resources/cldr/ext/LocaleNames_is.h>

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

$MethodInfo _LocaleNames_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_is::*)()>(&LocaleNames_is::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_is",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_is_MethodInfo_
};

$Object* allocate$LocaleNames_is($Class* clazz) {
	return $of($alloc(LocaleNames_is));
}

void LocaleNames_is::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_is::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"g\u00fajarat\u00ed"_s);
	$var($String, metaValue_km, "kmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_te, u"tel\u00fag\u00fa"_s);
	$var($String, metaValue_cop, u"kopt\u00edska"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"k\u00f6ln\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandes\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"t\u00e1kn"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"marvar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emoji-t\u00e1kn"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("tsjakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("fornegypska"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rajastan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"t\u00edmne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"tes\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapan\u00fa\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"teren\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension-eyja"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rar\u00f3tongska"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tet\u00fam"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Sameinu\u00f0u arab\u00edsku furstad\u00e6min"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"fl\u00e6mska"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00edgva og Barb\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"E\u00fe\u00ed\u00f3p\u00edskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angvilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"T\u00edmabelti"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alban\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armen\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ang\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Su\u00f0urskautslandi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argent\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Bandar\u00edska Sam\u00f3a"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Austurr\u00edki"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u00c1stral\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Ar\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"bandar\u00edsk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c1landseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserba\u00eddsjan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosn\u00eda og Herseg\u00f3v\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"keb\u00faan\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladess"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"k\u00fam\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Belg\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"mi\u00f0h\u00e1\u00fe\u00fdska"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"B\u00fark\u00edna Fas\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"B\u00falgar\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Barein"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"B\u00far\u00fand\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Ben\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Sankti Bart\u00f3l\u00f3meusareyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Berm\u00fadaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"k\u00fatena\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("ersja"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Br\u00fanei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"B\u00f3liv\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Kar\u00edbahafshluti Hollands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brasil\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"s\u00f3ga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"B\u00fatan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouveteyja"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Hv\u00edta-R\u00fassland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bel\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Persneskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Hebreskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"K\u00f3koseyjar (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"masanderan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kong\u00f3-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Mi\u00f0-Afr\u00edkul\u00fd\u00f0veldi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kong\u00f3-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Sviss"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"F\u00edlabeinsstr\u00f6ndin"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cooks-eyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"S\u00edle"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamer\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"K\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"K\u00f3lumb\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton-eyja"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kostar\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"K\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Gr\u00e6nh\u00f6f\u00f0aeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Curacao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"J\u00f3laey"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"K\u00fdpur"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"T\u00e9kkland"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ekaj\u00fak"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u00de\u00fdskaland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"fornh\u00e1\u00fe\u00fdska"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"akk\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"k\u00edga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Devanagari t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dj\u00edb\u00fat\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Danm\u00f6rk"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"gond\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("blindraletur"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"brahm\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"D\u00f3min\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Armenskar l\u00e1gstafat\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"D\u00f3min\u00edska l\u00fd\u00f0veldi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"gorontal\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("gotneska"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"s\u00fan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"t\u00edgre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Als\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangas\u00ednm\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"H\u00e1lfbreidd"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"palav\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta og Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"s\u00edbsja"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"pap\u00edament\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Eistland"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"t\u00edv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egyptaland"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Vestur-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"sjagata\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"pal\u00e1ska"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"sj\u00fak\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"s\u00edn\u00fak"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"mar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"s\u00edpev\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"sjokt\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Cherokee-m\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Er\u00edtrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Sp\u00e1nn"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"E\u00fe\u00ed\u00f3p\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Evr\u00f3pusambandi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elam\u00edt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregor\u00edskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Evrusv\u00e6\u00f0i\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("sjeyen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gujarati-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ad\u00fdge"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"F\u00eddj\u00edeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"M\u00edkr\u00f3nes\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Landssta\u00f0alsafbrig\u00f0i"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"F\u00e6reyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"tam\u00edlskt"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frakkland"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"t\u00f3kel\u00e1ska"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"gerb\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("indverskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"forngr\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"vot\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Bretland"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"n\u00edger\u00edskt pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Georg\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Franska Gv\u00e6jana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"G\u00edbraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"afr\u00edh\u00edl\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gr\u00e6nland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"mi\u00f0enska"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gamb\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"G\u00ednea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Gvadel\u00fapeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Mi\u00f0baugs-G\u00ednea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grikkland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Su\u00f0ur-Georg\u00eda og Su\u00f0ur-Sandv\u00edkureyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gvam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"G\u00ednea-Biss\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonska"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Gv\u00e6jana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"sorani-k\u00fard\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ekkert tungum\u00e1laefni"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"austurr\u00edsk \u00fe\u00fdska"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"s\u00e9rstj\u00f3rnarsv\u00e6\u00f0i\u00f0 Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard og McDonaldseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hond\u00faras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kr\u00f3at\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"svissnesk \u00fe\u00fdska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"\u00cdslamskt dagatal (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ha\u00edt\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungverjaland"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamasjek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanar\u00edeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Ind\u00f3nes\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("fornpersneska"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u00cdrland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"nap\u00f3l\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"z\u00e1z\u00e1\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u00cdsrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"M\u00f6n"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indland"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Evr\u00f3pskar reglur um r\u00f6\u00f0un"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Bresku Indlandshafseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u00cdrak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u00cdran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u00cdsland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u00cdtal\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"st\u00e6r\u00f0fr\u00e6\u00f0it\u00e1kn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"T\u00e6lenskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Bengalskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u00cdslamskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jama\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalskt"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"J\u00f3rdan\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"a\u00ednu (Japan)"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tongverska (nyasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannada-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"svissnesk h\u00e1\u00fe\u00fdska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Hlj\u00f3\u00f0fr\u00e6\u00f0ileg r\u00f6\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"B\u00fadd\u00edskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Ken\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"R\u00f3manska Amer\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamb\u00f3d\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"K\u00edribat\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"K\u00f3moreyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sankti Kitts og Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"kanad\u00edsk franska"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Nor\u00f0ur-K\u00f3rea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Su\u00f0ur-K\u00f3rea"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("svissnesk franska"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"K\u00faveit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tokpisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Caymaneyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"kyrill\u00edskt"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"L\u00edbanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sankti L\u00fas\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"f\u00f6nik\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gv\u00eds\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"l\u00e1g\u00fe\u00fdska; l\u00e1gsaxneska"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sr\u00ed Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akkad\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"L\u00edber\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Les\u00f3t\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lith\u00e1en"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"L\u00faxemborg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00edb\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"lad\u00ednska"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"vunj\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landa"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"lang\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marokk\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u00f3nak\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mold\u00f3va"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Svartfjallaland"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint-Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshalleyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ale\u00faska"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"ta\u00edlenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vai-t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Nor\u00f0ur-Maked\u00f3n\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mjanmar (B\u00farma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mong\u00f3l\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"nevar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"s\u00e9rstj\u00f3rnarsv\u00e6\u00f0i\u00f0 Maka\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Nor\u00f0ur-Mar\u00edanaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Martin\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"M\u00e1ritan\u00eda"_s)
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
			$of("type.m0.ungegn"_s),
			$of("UN GEGN umritun"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"M\u00e1rit\u00edus"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"su\u00f0uralta\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mald\u00edveyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malav\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mex\u00edk\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Japanskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malas\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"M\u00f3samb\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namib\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Afr\u00edka sunnan Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Hebreskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Or\u00f0ab\u00f3karr\u00f6\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"N\u00fdja-Kaled\u00f3n\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"N\u00edger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkeyja"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"N\u00edger\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"tar\u00f3k\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"N\u00edkaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noregur"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"N\u00e1r\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"romb\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsims\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"N\u00fdja-Sj\u00e1land"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"roman\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"kr\u00edmtyrkneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("fornenska"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u00d3man"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ang\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"seychelles-kre\u00f3lska"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u00cdslamskt borgaradagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kas\u00fab\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("bresk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Per\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Franska P\u00f3l\u00fdnes\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pap\u00faa N\u00fdja-G\u00ednea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f3lland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"evond\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sankti Pierre og Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn-eyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"P\u00faert\u00f3 R\u00edk\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Heimastj\u00f3rnarsv\u00e6\u00f0i Palest\u00ednumanna"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"balines\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Port\u00fagal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Pal\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"n\u00edas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Gr\u00edskar l\u00e1gstafat\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Paragv\u00e6"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"t\u00famb\u00faka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebreskt"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"n\u00edveska"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Ytri Eyja\u00e1lfa"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lesg\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"ahom-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"t\u00faval\u00faska"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Heimurinn"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Afr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Nor\u00f0ur-Amer\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Su\u00f0ur-Amer\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Eyja\u00e1lfa"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"R\u00famen\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Serb\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u00fassland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"R\u00faanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"S\u00e1di-Arab\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponpeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"manda\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Sal\u00f3monseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Vestur-Afr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles-eyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"S\u00fadan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Mi\u00f0-Amer\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Sv\u00ed\u00fej\u00f3\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Austur-Afr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"arame\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Nor\u00f0ur-Afr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u00far"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sankti Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Str\u00f6ng l\u00ednuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Mi\u00f0-Afr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Sl\u00f3ven\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Su\u00f0urhluti Afr\u00edku"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbar\u00f0i og Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amer\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Sl\u00f3vak\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"S\u00ederra Le\u00f3ne"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Mar\u00edn\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"S\u00f3mal\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapah\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Hef\u00f0bundnir tam\u00edlskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"S\u00far\u00ednam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Su\u00f0ur-S\u00fadan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sa\u00f3 T\u00f3me og Prins\u00edpe"_s)
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
			$of(u"S\u00fdrland"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ja\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Svas\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravakska"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"jap\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Bandar\u00edskt m\u00e6lingakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amer\u00edka nor\u00f0an Mexik\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- og Caicoseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsjad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Fr\u00f6nsku su\u00f0l\u00e6gu landsv\u00e6\u00f0in"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"T\u00f3g\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Ta\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tads\u00edkistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Kar\u00edbahafi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"T\u00f3kel\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"T\u00edmor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Leita eftir upphafssamhlj\u00f3\u00f0a \u00ed Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u00farkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"T\u00fanis"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tyrkland"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Tr\u00ednidad og T\u00f3bag\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"T\u00faval\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Ta\u00edvan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ast\u00far\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tansan\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u00f3\u00feekkt letur"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u00dakra\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ar\u00famenska"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Austur-As\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"t\u00fav\u00ednska"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"kong\u00f3svah\u00edl\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Su\u00f0ur-As\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ha\u00edda"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Su\u00f0austur-As\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u00daganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Pinyin-r\u00f6\u00f0un"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Su\u00f0ur-Evr\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Sm\u00e1eyjar Bandar\u00edkjanna"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Sameinu\u00f0u \u00fej\u00f3\u00f0irnar"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Bandar\u00edkin"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hava\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"einf\u00f6ldu\u00f0 k\u00ednversk r\u00f6\u00f0un - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u00dar\u00fagv\u00e6"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"pr\u00fassneska"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u00dasbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Strikar\u00f6\u00f0un"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vat\u00edkani\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"fornpr\u00f3vensalska"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sankti Vinsent og Grenad\u00edneyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venes\u00faela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Bresku J\u00f3mfr\u00faaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Bandar\u00edsku J\u00f3mfr\u00faaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"V\u00edetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Van\u00faat\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"n\u00f3ga\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"r\u00faa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"norr\u00e6na"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u00c1stralas\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanes\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis- og F\u00fat\u00fanaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Hef\u00f0bundin"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"M\u00edkr\u00f3nes\u00edusv\u00e6\u00f0i\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lak\u00f3ta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Vi\u00f0skiptafr\u00e6\u00f0ileg t\u00f6luor\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Fyrri r\u00f6\u00f0un, til samr\u00e6mis"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("valser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Sam\u00f3a"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("volayatta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"vasj\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("gervihreimur"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"vara\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"gervista\u00f0ur"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"avad\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"P\u00f3l\u00fdnes\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"K\u00f3s\u00f3v\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u00f3skrifa\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("varlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"batak\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n\u2019ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"St\u00f6\u00f0lu\u00f0 r\u00f6\u00f0un"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"fant\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Su\u00f0ur-Afr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Laus l\u00ednuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Georg\u00edskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Samb\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u00d3\u00feekkt sv\u00e6\u00f0i"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metrakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mong\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"nor\u00f0urs\u00f3t\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Tel\u00fag\u00fa-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"kre\u00f3lska (Louisiana)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"masj\u00e1me"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Einfalda\u00f0ar k\u00ednverskar fj\u00e1rm\u00e1lat\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"h\u00edliga\u00ednon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Auknar arab\u00edskar-indverskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"n\u00faer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dak\u00f3ta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"T\u00f6lur \u00ed fullri breidd"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"hettit\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ta\u00edta"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"nor\u00f0url\u00far\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klass\u00edsk nevar\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u00fadm\u00fart"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"R\u00f3mverskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jak\u00fat"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samversk arame\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"samb\u00far\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"santal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"gy\u00f0ingapersneska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"T\u00f6lulegur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Upprunalegir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Full breidd"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"sang\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"l\u00faisen\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"njamves\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"l\u00fanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"nj\u00f3r\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"l\u00fa\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filippseyska"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaver"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"l\u00fasa\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"bal\u00fak\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"bal\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"\u00fagar\u00edt\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"gy\u00f0ingaarab\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"evr\u00f3psk sp\u00e6nska"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"ns\u00edma"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skoska"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sikileyska"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"af\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abkas\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avest\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afr\u00edkanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhar\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonska"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"arab\u00edskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arab\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"jap\u00f6nsk samst\u00f6fuletur"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamska"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avar\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"su\u00f0urk\u00fard\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"a\u00edmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("aserska"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"bask\u00edr"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"R\u00f6\u00f0un eftir grunnstrikum"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"hv\u00edtr\u00fassneska"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"b\u00falgarska"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"b\u00edslama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalska"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"t\u00edbeska"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"dogr\u00edb"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bret\u00f3nska"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosn\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("mjanmarskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Lao-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"n-k\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"selk\u00fap"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katal\u00f3nska"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"ko\u00edrabor\u00f3-senn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("tsjetsjenska"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"kamorr\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"kors\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"kr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"t\u00e9kkneska"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("kirkjuslavneska"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"sj\u00favas"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("velska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"E\u00fe\u00ed\u00f3p\u00edskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danska"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"evr\u00f3psk port\u00fagalska"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u00fe\u00fdska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Sta\u00f0la\u00f0 gjaldmi\u00f0ilssni\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"forn\u00edrska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mong\u00f3lskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"d\u00edveh\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"r\u00f3m\u00f6nsk-amer\u00edsk sp\u00e6nska"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dsongka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"K\u00ednversk t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Gr\u00edskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Venjuleg l\u00ednuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"mold\u00f3vska"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"gr\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("enska"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"esperant\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"hef\u00f0bundin k\u00ednversk r\u00f6\u00f0un - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"sp\u00e6nska"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("eistneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"h\u00e1sorbneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"k\u00ednverskt"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("sjan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"einfalda\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Vestr\u00e6nar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"hef\u00f0bundi\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"f\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finnska"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"f\u00eddjeyska"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"f\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"vesturbalots\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kant\u00f3nska"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"f\u00e6reyska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN umritun"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u00famb\u00fand\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("franska"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"s\u00eddam\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"vesturfr\u00edsneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u00edrska"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skosk gel\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galis\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"gvaran\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bojp\u00far\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u00f3\u00feekkt tungum\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"E\u00fe\u00ed\u00f3p\u00edskt \u2018amete alem\u2019 t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manska"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"h\u00e1sa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebreska"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hind\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"h\u00fapa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"b\u00edkol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"b\u00edn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"h\u00edr\u00edm\u00f3t\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"kr\u00f3at\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ha\u00edt\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungverska"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenska"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"herer\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("cajun-franska"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ind\u00f3nes\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"T\u00edbeskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingve"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u00edgb\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"s\u00eds\u00faanj\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"mi\u00f0franska"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u00edn\u00fap\u00edak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("fornfranska"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u00edd\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"austurfr\u00edsneska"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"nor\u00f0urfr\u00edsneska"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u00edslenska"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u00edtalska"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"in\u00faktit\u00fat"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malalajam"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"dogr\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"su\u00f0ursam\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanska"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"mad\u00farska"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"l\u00falesam\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magah\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"ma\u00edt\u00edl\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"enaresam\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"georg\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skoltesam\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"manding\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"kong\u00f3ska"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"k\u00edk\u00faj\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masa\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"k\u00faanjama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kasakska"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"gr\u00e6nlenska"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"k\u00f3reska"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"kan\u00far\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kasm\u00edrska"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"k\u00fard\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"kom\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornbreska"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"s\u00f3ninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"lat\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"l\u00faxemborg\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malayalam-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limb\u00farg\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"t\u00edbeskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"fr\u00ed\u00falska"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"la\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Breskt m\u00e6lingakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lith\u00e1\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"l\u00fabakatanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lettneska"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogd\u00eden"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malagas\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Sj\u00e1lfgefin Unicode-r\u00f6\u00f0un"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maor\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maked\u00f3nska"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mong\u00f3lska"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"marat\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"mala\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltneska"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"b\u00farmneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksa"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"l\u00e1gsorbneska"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"n\u00e1r\u00faska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Almenn leit"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norskt b\u00f3km\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"nor\u00f0ur-ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalska"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("hollenska"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"n\u00fdnorska"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norska"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"su\u00f0urndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navah\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"n\u00fdanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kas\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kab\u00edle"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oks\u00edtan\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibva"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"mer\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Armenskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"kav\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u00f3r\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osset\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabard\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"m\u00e1rit\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"p\u00fanjab\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"d\u00faala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"pal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"p\u00f3lska"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"mi\u00f0hollenska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Dangi t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"past\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"port\u00fagalska"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"mi\u00f0\u00edrska"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"R\u00f6\u00f0un"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"bras\u00edl\u00edsk port\u00fagalska"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Gjaldmi\u00f0ilssni\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"bra\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"T\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 t\u00edma kerfi (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 t\u00edma kerfi (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Mjanmarskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kvesj\u00faa"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"sap\u00f3tek"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"b\u00f3d\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"e\u00fe\u00ed\u00f3p\u00edskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 t\u00edma kerfi (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 t\u00edma kerfi (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"r\u00f3manska"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"r\u00fand\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Gjaldmi\u00f0ill"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"r\u00famenska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Odia-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"K\u00ednverskir tugat\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"r\u00fassneska"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("bakossi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"k\u00ednjarvanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"blisst\u00e1kn"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"gr\u00e6nh\u00f6f\u00f0eyska"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"s\u00fak\u00fama"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u00e1str\u00f6lsk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sanskr\u00edt"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sard\u00ednska"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"s\u00fas\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sind\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"nor\u00f0ursam\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"m\u00ednangkab\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"sang\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"serb\u00f3kr\u00f3at\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"singal\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"s\u00famerska"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"sl\u00f3vak\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"sl\u00f3venska"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"sam\u00f3ska"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"s\u00f3malska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Arab\u00edskar-indverskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"svat\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"B\u00f3khaldsgjaldmi\u00f0ill"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"su\u00f0urs\u00f3t\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"javanes\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"s\u00fandanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"s\u00e6nska"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"svah\u00edl\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Hef\u00f0bundnar k\u00ednverskar fj\u00e1rm\u00e1lat\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u00edban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tam\u00edlska"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"As\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"b\u00far\u00edat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Mi\u00f0-As\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Vestur-As\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadsjikska"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"ta\u00edlenska"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"t\u00edgrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"b\u00fag\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"kanad\u00edsk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"t\u00farkmenska"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ts\u00faana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongverska"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Japanskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("tyrkneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"shimaor\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarska"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"dj\u00fala"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"tv\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tah\u00edt\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Evr\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Austur-Evr\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Nor\u00f0ur-Evr\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Vestur-Evr\u00f3pa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u00fa\u00edg\u00far"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"k\u00f3reskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("almennt"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u00fakra\u00ednska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Kopt\u00edskt t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u00fard\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalm\u00fakska"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("senaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u00fasbekska"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"kas\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"l\u00e1gsaxneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Minguo t\u00edmatal"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"v\u00edetnamska"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("kotaska"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"T\u00edmakerfi (12 e\u00f0a 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapyk"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klass\u00edsk s\u00fdrlenska"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("kiche"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"vall\u00f3nska"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gag\u00e1s"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"s\u00fdrlenska"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"gr\u00edskt"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"sta\u00f0la\u00f0 marokk\u00f3skt tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"st\u00f6\u00f0lu\u00f0 n\u00fat\u00edmaarab\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"gaj\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"mong\u00f3lskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mansj\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"man\u00edp\u00far\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latneskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Einfalda\u00f0ir k\u00ednverskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Hef\u00f0bundnir k\u00ednverskir t\u00f6lustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"s\u00f3sa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"R\u00f3mverskar l\u00e1gstafat\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"bl\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u00f3sage"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"m\u00f3h\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidd\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"moss\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"j\u00f3r\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Hef\u00f0bundin t\u00f6lut\u00e1kn"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"mex\u00edk\u00f3sk sp\u00e6nska"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"tyrkneska, ott\u00f3man"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"va\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"s\u00faang"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"k\u00ednverska"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"L\u00ednuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"s\u00fal\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"S\u00edmaskr\u00e1arr\u00f6\u00f0un"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"georg\u00edskt"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"kimb\u00fand\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japanskar fj\u00e1rm\u00e1lat\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"g\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Endurb\u00e6tt r\u00f6\u00f0"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"k\u00ednverska (einf\u00f6ldu\u00f0)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"k\u00f3m\u00ed-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkan\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraska"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"k\u00ednverska (hef\u00f0bundin)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"sundanes\u00edska"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Kmer\u00edskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u00edlok\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Gurmukhi-t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"margv\u00edsleg m\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"kadd\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"M\u00e6lingakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kr\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilberska"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"kar\u00edbam\u00e1l"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"kaj\u00faga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tam\u00edlskar t\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karasa\u00edbalkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ing\u00fas"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"dar\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"kar\u00e9lska"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ef\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"T\u00f6lur"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"k\u00far\u00fak"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("sjambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"baf\u00eda"_s)
		})
	}));
	return data;
}

LocaleNames_is::LocaleNames_is() {
}

$Class* LocaleNames_is::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_is, name, initialize, &_LocaleNames_is_ClassInfo_, allocate$LocaleNames_is);
	return class$;
}

$Class* LocaleNames_is::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun