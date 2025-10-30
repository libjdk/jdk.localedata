#include <sun/util/resources/cldr/ext/LocaleNames_ig.h>

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

$MethodInfo _LocaleNames_ig_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ig::*)()>(&LocaleNames_ig::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ig",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ig_MethodInfo_
};

$Object* allocate$LocaleNames_ig($Class* clazz) {
	return $of($alloc(LocaleNames_ig));
}

void LocaleNames_ig::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ig::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"Jaman\u1ecb"_s);
	$var($String, metaValue_RO, "Romania"_s);
	$var($String, metaValue_lo, u"La\u1ecd"_s);
	$var($String, metaValue_or, u"\u1eccd\u1ecba"_s);
	$var($String, metaValue_si, "Sinhala"_s);
	$var($String, metaValue_te, u"Tel\u1ee5g\u1ee5"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"Sang\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Cologn\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Nyak\u1ecdle"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Akara"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"F\u1ecbl\u1ecbp\u1ecbn\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"Emoj\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"L\u1ee5y\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Spanishi nd\u1ecb Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"Tes\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension Island"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua na Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Kal\u1ecbnda Etop\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amariik\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Mkp\u1ee5r\u1ee5 Okwu Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Arabiik\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Japan\u1ecbs\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("American Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Bekee nd\u1ecb America"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Agwaetiti Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Azerbajan\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia & Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"Ceb\u1ee5an\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Belarusian\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"B\u1ecdl\u1ee5gar\u1ecba"_s)
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
			$of("Binin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Barth\u00e9lemy D\u1ecb ns\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bemuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Caribbean Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"S\u1ecdga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Agwaetiti Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 La\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Kal\u1ecbnda Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Agwaetiti Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Mazandaran\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"K\u1ecdyraboro Sen\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Central African Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Agwaetiti Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroon"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"K\u1ecds\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Agwaetiti Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Cheek\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Church slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurakao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Agwaetiti Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Wesh"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Czechia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Et\u1ecdp\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Dan\u1ecbsh"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"As\u1ee5s\u1ee5 Portuguese nd\u1ecb Europe"_s)
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
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd eg\u1ecd nz\u1ee5gbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Devanagar\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Bra\u1ecblle"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u1ecdbere \u1ecdn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Armen\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominican Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Spanishi nd\u1ecb Latin America"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"D\u1ecdzng\u1ecdka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Kal\u1ecbnda Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta & Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Akara akanka nkw\u1ee5s\u1ecb kwes\u1ecbr\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u1eccd\u1ecbda Anyanw\u1ee5 Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Giriik\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Bekee"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Nd\u1ecb Esperant\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cheroke"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spain"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanishi"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Nd\u1ecb Est\u1ecdn\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han na Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Otu nzuk\u1ecd mba Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Hang\u1ee5l"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Kalenda Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Gburugburu Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Tach\u1ecbk\u1ecbt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 G\u1ee5jarat\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u1ee4pa S\u1ecdrb\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Han"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Peshian\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Nke d\u1ecb mfe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u1eccn\u1ee5 \u1eccg\u1ee5g\u1ee5 Mpaghara \u1eccd\u1ecbda Anyanw\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Izugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fula"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"F\u1ecbn\u1ecbsh"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Agwaetiti Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Kat\u1ecdn\u1ecbse"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Agwaetiti Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Far\u1ecdse"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"Tam\u1ecbl"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"F\u1ee5rench\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Westan Fr\u1ecbs\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u1ecar\u1ecbsh"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Pidg\u1ecbn"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"S\u1ee5k\u1ecdt\u1ecbs Gel\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Frenchi Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Gal\u1ecbc\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatorial Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"As\u1ee5s\u1ee5 amagh\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greece"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("South Georgia na Agwaetiti South Sandwich"_s)
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
			$of("gu"_s),
			$of(u"G\u1ee5arat\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"Mans\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Nd\u1ecb \u1ecdz\u1ecd ab\u1ee5gh\u1ecb as\u1ee5s\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Hind\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Jaman nd\u1ecb Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Agwaetiti Heard na Agwaetiti McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"K\u1ecdr\u1ecdt\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("German Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Hati"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Ha\u1ecbt\u1ecban nd\u1ecb Cer\u1ecdle"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"H\u1ee5ngarian"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Intal\u1ecbg\u1ee5a"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Agwaetiti Kanar\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"Jam\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonisia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 T\u1ecbbeta"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"S\u1ecbch\u1ee5ay\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("British Indian Ocean Territory"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Ic\u1ecbland\u1ecbk"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Ital\u1ecbanu"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Mgbak\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Ta\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Bang"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japaniisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayala"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Kal\u1ecbnda Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Java"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"G\u1ee5sh\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Jaman Izugbe nd\u1ecb Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"Ma\u1ecbt\u1ecbl\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Inar\u1ecb Sam\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Ge\u1ecdj\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Kal\u1ecbnda B\u1ee5dd\u1ecbst"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin America"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"K\u1ecbk\u1ee5y\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"Masa\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kazak"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Kalaal\u1ecbs\u1ee5t"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comorosu"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Keme"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Kitts na Nevis D\u1ecb ns\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kanhada"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannaada"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"F\u1ee5rench nd\u1ecb Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Kor\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Ugwu Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("South Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Kashm\u1ecbr\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Nd\u1ecb K\u1ee5rd\u1ecbsh"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"F\u1ee5rench nd\u1ecb Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"K\u1ecdn\u1ecbsh"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Agwaetiti Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kyrayz"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Mkp\u1ee5r\u1ee5 Okwu Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Lat\u1ecbn"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"L\u1ee5xenb\u1ecd\u1ee5g\u1ecbsh"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Lucia D\u1ecb ns\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Malayala"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Lowa German"_s)
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
			$of("Tibt"_s),
			$of(u"T\u1ecbbeta"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"L\u1ecbngala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Fr\u1ee5l\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd Mmesh\u1ecd \u1ecbmper\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lituanian"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"L\u1ecbba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latviani"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"V\u1ee5nj\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"Lang\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Taa"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Morocco"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Martin D\u1ecb ns\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malagas\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Agwaetiti Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Ma\u1ecdr\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("North Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Mased\u1ecdn\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"M\u1ecdngol\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Agwaetiti Northern Mariana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Marat\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Maleyi"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Mat\u1ecbse"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivesa"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Kal\u1ecbnda Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"B\u1ee5rmese"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Armen\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Lowa Sorb\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u1eccch\u1ee5ch\u1ee5 n\u1ecble"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Sub-Saharan Afr\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"N\u1ecdrwey\u1ecban B\u1ecdkmal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Kal\u1ecbnda Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"N\u1ecdrt\u1ee5 Ndabede"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Agwaetiti Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Na\u1ecbj\u1ecbr\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"D\u1ecdch\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"N\u1ecdrwey\u1ecban Nynersk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norway"_s)
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
			$of("rof"_s),
			$of(u"R\u1ecdmb\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"Mer\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Armen\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u1eccromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Osetik"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"M\u1ecdr\u1ecbsye"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"D\u1ee5ala"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Bekee nd\u1ecb United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Frenchi Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Poliishi"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Ew\u1ecdnd\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Pierre na Miquelon D\u1ecb ns\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Agwaetiti Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Kal\u1ecbnda Dang"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinian Territories"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Pash\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"P\u1ecdrt\u1ee5g\u1ee5ese"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd Nhaz\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u1eccbere \u1ecdn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"P\u1ecdrt\u1ee5g\u1ee5ese nd\u1ecb Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"Mak\u1ee5wa Met\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd eg\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kal\u1ecbnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd Oge ok\u1ecbr\u1ecbk\u1ecbr\u1ecb 24"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd \u1eccge ok\u1ecbr\u1ecbk\u1ecbr\u1ecb 24"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Myamar"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Outlying Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Q\u1ee5ech\u1ee5a"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"B\u1ecdd\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"Mak\u1ecdnde"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Uwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Et\u1ecdp\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Mpaghara Ugwu Amer\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd Oge ok\u1ecbr\u1ecbk\u1ecbri 12"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Mpaghara Mgbada Ugwu America"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd \u1eccge \u1ecdk\u1ecbr\u1ecbk\u1ecbri 12"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"R\u1ecdmans\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"R\u1ee5nd\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Eg\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 \u1eccd\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 nt\u1ee5p\u1ecd Ch\u1ecbnese"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u1ee5ss\u1ecba"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"R\u1ecdshian"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Kab\u1ee5verd\u1ecban\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Bekee nd\u1ecb Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Sans\u1ecbk\u1ecbt"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Agwaetiti Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawa"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Mpaghara \u1eccd\u1ecbda Anyanw\u1ee5 Afr\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"S\u1ecbndh"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Etiti America"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"N\u1ecdrtan Sam\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Mpaghara \u1eccw\u1ee5wa Anyanw\u1ee5 Afr\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Mpaghara Ugwu Afr\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"Sang\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Akara akanka nkw\u1ee5s\u1ecb s\u1ecbr\u1ecb \u1ecbke"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Etiti Afr\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Mpaghara Mgbada Ugwu Afr\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amer\u1ecbka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slova"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Slov\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Sam\u1ecda"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Sh\u1ecdna"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Arab na Ind\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 \u1ecdd\u1ecbnala Tam\u1ecbl"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Seb\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("South Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd akant\u1ee5 eg\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 & Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"S\u1ecd\u1ee5th Soto"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"S\u1ee5widiishi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 akant\u1ee5 \u1ecdd\u1ecbnala Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"As\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd Mmesh\u1ecd US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Mpaghara Ugwu America"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Agwaetiti Turks na Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Etiti Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Mpaghara \u1eccd\u1ecbda Anyanw\u1ee5 Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u1ee4m\u1ee5 ngalaba Frenchi Southern"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Taj\u1ecbk"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Ta\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"T\u1ecbgr\u1ecbnya"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Bekee nd\u1ecb Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Onye Carrabean"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Turk\u1ecbs"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"T\u1ecdngan"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"J\u1ecdla-F\u1ecdny\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkey"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"T\u1ecdkiishi"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad na Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tata"_s)
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
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"Kwas\u1ecb\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Mkp\u1ee5r\u1ee5 okwu amagh\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Mpaghara \u1eccw\u1ee5wa Anyanw\u1ee5 Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Mpaghara \u1eccw\u1ee5wa Anyanw\u1ee5 Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Mpaghara Ugwu Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Mpaghara Mgbada Ugwu Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Mpaghara \u1eccd\u1ecbda Anyanw\u1ee5 Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Mpaghara Mgbada Ugwu Asia d\u1ecb na \u1eccw\u1ee5wa Anyanw\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u1ee4ygh\u1ee5r"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"k\u1ecdm\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Mpaghara Mgbada Ugwu Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ukureen\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Obere Agwaetiti D\u1ecb Na Mp\u1ee5ga U.S"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Mba \u1ee4wa Jik\u1ecdr\u1ecd \u1eccn\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Urd\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("United States"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawa\u1ecbl\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Pr\u1ee5ss\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u1ee4zbek"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Nglemb\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican City"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Vincent na Grenadines D\u1ecb ns\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kal\u1ecbnda rep\u1ee5blic nke China"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Agwaetiti British Virgin"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Agwaetiti Virgin nke US"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamisi"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"K\u1ecdyra Ch\u1ecbn\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u1eccge \u1ecdk\u1ecbr\u1ecbk\u1ecbr\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volap\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis & Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 gr\u1ecbk"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mpaghara Micronesian"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"Ng\u1ecdmba"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Wol\u1ecdf"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Wasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u1ee4d\u1ecb Arabiik\u1ecb nke oge a"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"M\u1ecdng\u1ecdl\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accents"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Man\u1ecbp\u1ee5r\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 mfe Ch\u1ecbnese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 \u1ecddinala chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Xh\u1ecdsa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u1eccbere \u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Roman"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 G\u1ee5jarat\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Edegh\u1ecb ede"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Kak\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Usoro Nhazi"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Y\u1ecbd\u1ecbsh"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Spanishi nd\u1ecb Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Val"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("South Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Akara akanka nkw\u1ee5s\u1ecb es\u1ecbgh\u1ecb \u1ecbke"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"Kalenj\u1ecbn"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Devangar\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chainisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Ge\u1ecdj\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Mkp\u1ee5r\u1ee5 okw\u1ee5 H\u1ecbragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Akara akanka nkw\u1ee5s\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Mpaghara Amagh\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 Ge\u1ecdj\u1ecban"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd Met\u1ecbr\u1ecbk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Kalenda ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Tel\u1ee5g\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 akant\u1ee5 Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"Eb\u1ee5m"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"As\u1ee5s\u1ee5 Chinese d\u1ecb mfe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 akant\u1ee5 mfe nke Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"K\u1ecdnkan\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Arab na Ind\u1ecb agbat\u1ecbr\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"N\u1ee5er"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 \u1ecdb\u1ecdsara"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"Ta\u1ecbta"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"N\u1ecdrt\u1ee5 L\u1ee5r\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"As\u1ee5s\u1ee5 Chinese Izugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"M\u1ee5dang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"On\u1ee5 \u1ecdg\u1ee5g\u1ee5 G\u1ee5m\u1ee5kh"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u1ecct\u1ee5t\u1ee5 as\u1ee5s\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u1ee4s\u1ecdr\u1ecd Mmesh\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Roman"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Saka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u1eccn\u1ee5 \u1ecdg\u1ee5g\u1ee5 Tam\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"Samb\u1ee5r\u1ee5"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"Santal\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"N\u1ecdmba"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Mkp\u1ee5r\u1ee5 \u1ecdkw\u1ee5 G\u1ee5rm\u1ee5k\u1ecb"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shabala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"Baf\u1ecba"_s)
		})
	}));
	return data;
}

LocaleNames_ig::LocaleNames_ig() {
}

$Class* LocaleNames_ig::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ig, name, initialize, &_LocaleNames_ig_ClassInfo_, allocate$LocaleNames_ig);
	return class$;
}

$Class* LocaleNames_ig::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun