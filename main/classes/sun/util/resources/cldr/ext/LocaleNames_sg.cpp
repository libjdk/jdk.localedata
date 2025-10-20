#include <sun/util/resources/cldr/ext/LocaleNames_sg.h>

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

$MethodInfo _LocaleNames_sg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sg::*)()>(&LocaleNames_sg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sg_MethodInfo_
};

$Object* allocate$LocaleNames_sg($Class* clazz) {
	return $of($alloc(LocaleNames_sg));
}

void LocaleNames_sg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"Z\u00e2mani"_s);
	$var($String, metaValue_FR, u"Far\u00e2nzi"_s);
	$var($String, metaValue_IN, u"\u00cannde"_s);
	$var($String, metaValue_RW, u"Ruand\u00e4a"_s);
	$var($String, metaValue_SO, u"Somal\u00efi"_s);
	$var($String, metaValue_UA, u"Ukr\u00eani"_s);
	$var($String, metaValue_VN, u"Vietn\u00e4m"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Porto R\u00eeko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"S\u00ease t\u00ee Palest\u00eeni"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"P\u00f6rtug\u00e4le, K\u00f6d\u00f6r\u00f6 P\u00fbra"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portug\u00ebe, P\u00fbra"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Paragu\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Kat\u00e4ra"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"And\u00f4ro"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Ar\u00e2bo Emir\u00e2ti \u00d4ko"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Fagan\u00efta, Afgan\u00efst\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00eegua na Barb\u00fbda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ang\u00fb\u00eela"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Ak\u00e2an"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alban\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armen\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amar\u00eeki"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Angol\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arzant\u00eena"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Ar\u00e2bo"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Sam\u00f6a t\u00ee Amer\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Otr\u00eesi"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Rein\u00efon"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ostral\u00efi, Sotral\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Ar\u00fbba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Zerebaidy\u00e4an, Azerbaidy\u00e4an,"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Ruman\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rum\u00eben"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosn\u00efi na Herzegov\u00eenni"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Barab\u00e2da"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Benglad\u00eashi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u00ealeze, Belez\u00eeki"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rus\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Biel\u00f6r\u00fbsi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"R\u00fbsi"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulugar\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bulug\u00e4ri"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bahr\u00e2ina"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Burund\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Ben\u00eben"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Berem\u00fbda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brun\u00eai"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Beng\u00e4li"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Boliv\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Sa\u00fbdi Arab\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Z\u00fb\u00e2 Salom\u00f6on"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brez\u00eeli"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"S\u00ebysh\u00eale"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bah\u00e2masa"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sud\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"But\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Su\u00eade"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"S\u00efng\u00e4p\u00fbru"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"S\u00e4ng\u00f6"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"S\u00eant-Hel\u00eana"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Soloven\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belar\u00fcsi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bel\u00eezi"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Solovak\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Sier\u00e4-Le\u00f4ne"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"S\u00ean-Mar\u00eben"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Seneg\u00e4le"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kanad\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Surin\u00e4m"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"K\u00f6d\u00f6r\u00f6s\u00ease t\u00ee Ngunuhal\u00ebzo t\u00ee kong\u00f6"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e2\u00f4 T\u00f6m\u00ea na Prins\u00eepe"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"K\u00f6d\u00f6r\u00f6s\u00ease t\u00ee B\u00eaafr\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Salvad\u00f6ro"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Suedu\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kong\u00f6"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"S\u00fb\u00eesi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"K\u00f4div\u00fc\u00e4ra"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sir\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Sw\u00e4z\u00efl\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u00e2z\u00fb\u00e2 K\u00fbku"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Shil\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamer\u00fbne"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Sh\u00eena"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kolomb\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"T\u00e4m\u00fbli"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"K\u00f4sta R\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u00c2z\u00fb\u00e2 Turku na Ka\u00eeki"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ty\u00e2de"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ty\u00eaki"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kub\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Az\u00fb\u00e2 t\u00ee K\u00e2po-V\u00eare"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Tog\u00f6"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tail\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Th\u00e2i"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"S\u00eepri"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taazikiist\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"K\u00f6d\u00f6r\u00f6s\u00ease t\u00ee Ty\u00eaki"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tim\u00f4ro t\u00ee T\u00f6"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkumenist\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tuniz\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Turuk\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"T\u00fbr\u00fbku"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinit\u00f9ee na Tobag\u00f6"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"T\u00fcval\u00fc"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"T\u00e2iw\u00e2ni"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dibut\u00f9ii"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzan\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Danem\u00earke"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"D\u00f6m\u00efn\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"K\u00f6d\u00f6r\u00f6s\u00ease t\u00ee Domin\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ugand\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alzer\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u00dbrdu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekuat\u00ebre"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u00c2Leaa-\u00d4ko t\u00ee Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Eston\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"K\u00e2mit\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Urugu\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekist\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Ger\u00eaki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Angl\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Let\u00ebe t\u00ee Vatik\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Eritr\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"S\u00ean-Vens\u00e4an na \u00e2Grenad\u00eeni"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Esp\u00e2nye"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Espany\u00f6l"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiop\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venezuel\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u00c2z\u00f4\u00e2 Vi\u00eer\u00eeggo t\u00ee Angl\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u00c2z\u00fb\u00e2 Vir\u00eego t\u00ee Amer\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Fars\u00ee"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanuat\u00fc"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"F\u00ebl\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidy\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u00c2z\u00fb\u00e2 t\u00ee M\u00e4l\u00fc\u00eeni"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronez\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wal\u00eesi na Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u00f6on"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"K\u00f6d\u00f6r\u00f6gb\u00ef\u00e4--\u00d4ko"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Samo\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Gren\u00e2da"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Zorz\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"G\u00fcy\u00e2ni t\u00ee far\u00e2nzi"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Gan\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Zibralt\u00e4ra, Zibarat\u00e4ra"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gorol\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gamb\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Gin\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guadel\u00fbpu"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Gin\u00ebe t\u00ee Ekuat\u00ebre"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Ger\u00easi"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Guat\u00eam\u00e4l\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Gu\u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gnin\u00ebe-Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Gay\u00e2na"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Ha\u00fcs\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"H\u00eendi"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hondur\u00e4si"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kroas\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Hait\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Y\u00ebm\u00eani"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hongir\u00f9ii"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Hongru\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u00canndonez\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"M\u00e4y\u00f4te"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Enndonez\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Irl\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u00cfgb\u00f6"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Isra\u00ebli"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"S\u00ease t\u00ee Angl\u00ebe na Ng\u00fby\u00e4m\u00e4 t\u00ee \u00cannde"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Mbongo-Afr\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ir\u00e2ki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ir\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Isl\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Ital\u00f9ii"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Shinu\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Zamb\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Zapon\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Z\u00fblu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimb\u00e4bwe"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Zama\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Zordan\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Zap\u00f6on"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Zavan\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Keny\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirigizit\u00f9aan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"K\u00e4mb\u00f4zi"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"K\u00f6m\u00f4ro"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Km\u00eare"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"S\u00ean-Kr\u00efst\u00f4fo-na-Nev\u00eesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Korey\u00eben"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kor\u00ebe t\u00ee Banga"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kor\u00ebe t\u00ee Mbongo"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"K\u00f6w\u00eati"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u00c2z\u00fb\u00e2 Ngund\u00eb, Kaim\u00e4ni"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakisit\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"L\u00f9a\u00f4si"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Lib\u00f9aan"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"S\u00eant-Lis\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein,"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sir\u00ee-Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Liber\u00efa"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Les\u00f4tho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lituan\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lugzamb\u00fbru"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Leton\u00f9ii"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Lib\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Mar\u00f4ko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Monak\u00f6o"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldav\u00f9ii"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madagask\u00e4ra"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u00c2z\u00fb\u00e2 M\u00e4rsh\u00e2l"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Mal\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"My\u00e4m\u00e2ra"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongol\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u00c2z\u00fb\u00e2 M\u00e4r\u00ef\u00e2ni t\u00ee Banga"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"M\u00e4rt\u00efn\u00eeki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Moritan\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Monser\u00e2te"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Mal\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u00e2lta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"M\u00f6r\u00eesi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Mald\u00eeva"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malaw\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mekis\u00eeki"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malez\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Miam\u00e4ra, Birim\u00e4ni"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"M\u00f6z\u00e4mb\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namib\u00f9ii"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Fin\u00ee Kaledon\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Niz\u00ebre"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepal\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Z\u00fb\u00e2 N\u00f4rf\u00f4lko"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nizer\u00efa"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Hol\u00e4nde"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Holand\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u00f6rv\u00eazi"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"N\u00ebp\u00e2li"_s)
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
			$of(u"Fin\u00ee Zel\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Om\u00e2ni"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Penz\u00e4b\u00ef"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Per\u00fcu"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinez\u00efi t\u00ee far\u00e2nzi"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pap\u00fb Fin\u00ee Gin\u00ebe, Papuaz\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filip\u00eeni"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakist\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f6l\u00f4ni"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Polon\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"S\u00ean-Py\u00eare na Mikel\u00f6on"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitik\u00earni"_s)
		})
	}));
	return data;
}

LocaleNames_sg::LocaleNames_sg() {
}

$Class* LocaleNames_sg::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sg, name, initialize, &_LocaleNames_sg_ClassInfo_, allocate$LocaleNames_sg);
	return class$;
}

$Class* LocaleNames_sg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun