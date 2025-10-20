#include <sun/util/resources/cldr/ext/LocaleNames_wae.h>

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

$MethodInfo _LocaleNames_wae_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_wae::*)()>(&LocaleNames_wae::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_wae_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_wae",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_wae_MethodInfo_
};

$Object* allocate$LocaleNames_wae($Class* clazz) {
	return $of($alloc(LocaleNames_wae));
}

void LocaleNames_wae::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_wae::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TO, "Tonga"_s);
	$var($String, metaValue_ar, u"Arabi\u0161"_s);
	$var($String, metaValue_bn, u"Bengali\u0161"_s);
	$var($String, metaValue_el, u"Gri\u010di\u0161"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, u"Hebr\u00e4i\u0161"_s);
	$var($String, metaValue_hy, u"Armeni\u0161"_s);
	$var($String, metaValue_ja, u"Japani\u0161"_s);
	$var($String, metaValue_ka, u"Georgi\u0161"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_la, u"Latini\u0161"_s);
	$var($String, metaValue_lo, u"Laoti\u0161"_s);
	$var($String, metaValue_my, u"Burmesi\u0161"_s);
	$var($String, metaValue_or, "Oriya"_s);
	$var($String, metaValue_si, u"Singalesi\u0161"_s);
	$var($String, metaValue_ta, u"Tamili\u0161"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Filipini\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Iberi\u0161es Schpani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Ab\u010dasi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Himmelf\u00e1rtsinsla"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Vereinigti Arabi\u0161e Emirat"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Fl\u00e4mi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afgani\u0161tan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Afrik\u00e1ns"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua und Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanie"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenie"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amhari\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktis"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentinie"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Amerikani\u0161 Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Assamesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00d6\u0161tri\u010d"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australie"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Amerikani\u0161es Engli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Alandinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbaid\u0161an"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Serbaid\u0161ani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnie und Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglade\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgie"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"W\u00edsrussi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarie"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bulgari\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Ba\u010drain"_s)
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
			$of("BL"_s),
			$of(u"St. Bartholom\u00e4us-Insla"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliwie"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tibeti\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilie"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Bosni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvetinsla"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"W\u00edsrussland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Katalani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Zentralafrikani\u0161i Rebublik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Schwiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Elfebeik\u00fc\u0161ta"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Cookinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"T\u0161ile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbie"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton Insla"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"T\u0161e\u010di\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Wien\u00e4\u010dtsinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Zypre"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Walisi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"T\u0161e\u010die"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"D\u00e4ni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Iberi\u0161es Portugisi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Tit\u0161land"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Tit\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"D\u0161ibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u00e4nemark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Doninica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikani\u0161i Rebublik"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"Malediwi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Latiamerikani\u0161es Schpani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algerie"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Butani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta und Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"E\u0161tland"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"We\u0161tsahara"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Engli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Schpanie"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Schpani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Estni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europ\u00e4i\u0161i Unio"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Baski\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregoriani\u0161\u00e4 Kal\u00e4nder"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Persi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Vereifa\u010dt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Arabi\u0161i Z\u00e1l\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traditionell"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Fini\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fid\u0161i"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Fid\u0161iani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Falklandinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesie"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"F\u00e4r\u00f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Frankri\u010d"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"W\u00e4l\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Iri\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("England"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgie"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Franz\u00f6si\u0161 Guiana"_s)
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
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gr\u00f6nland"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Galizi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Ginea"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatorialginea"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Unbekannti Schpra\u010d"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gri\u010deland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"S\u00fcdgeorgie und d\u2019s\u00fcdli\u010de Senwi\u010dinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Ginea Bissau"_s)
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
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u00d6\u0161tri\u010di\u0161es Tit\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Sonderverwaltigszona Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard- und McDonald-Insl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatie"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Kroati\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Haitiani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungare"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ungari\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanari\u0161e Insl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesie"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indonesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
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
			$of("Indie"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Briti\u0161es Territorium em indi\u0161e Ozean"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Iisl\u00e4ndi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italie"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Italieni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Malaisi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanie"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Schwizer Ho\u010dtit\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Lat\u00edamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgi\u0161tan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambod\u0161a"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Kaza\u010di\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komore"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Kambod\u0161ani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts und Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanadi\u0161es W\u00e4l\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Koreani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nordkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"S\u00fcdkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Ka\u0161miri\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Kurdi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Schwizer W\u00e4l\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"Niwmelanesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kaimaninsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kirgisi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kasa\u010dstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Kirilli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Luxemburgi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lie\u010dte\u0161tei"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
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
			$of("Litaue"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Litaui\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxeburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Letti\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00fcbie"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"Th\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monago"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malag\u00e1si"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Mar\u0161alinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Standard Unicode Sortierreiefolg"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Mazedoni\u0161"_s)
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
			$of("Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolei"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Mongoli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Sonderverwaltigszona Makau"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"N\u00f6rdli\u010di Mariane"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretanie"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Monserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Mala\u00ed\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Maltesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediwe"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Allgmeini S\u00fce\u010d"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegi\u0161 Bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Niwkaledonie"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Nordndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepalesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkinsla"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holand"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Hol\u00e4ndi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Norwegi\u0161 Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norw\u00e4ge"_s)
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
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Niws\u00e9land"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Os\u00e9ti\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Pand\u0161abi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Briti\u0161es Engli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Franz\u00f6si\u0161 Polinesie"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Niwginea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippine"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Paki\u0161tan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Pole"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Polni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St. Pierre und Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Pale\u0161tina"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Pa\u0161tu"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portugisi\u0161"_s)
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
			$of("pt_BR"_s),
			$of(u"Brasiliani\u0161es Portugisi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u00dcssers Ozeanie"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Que\u010dua"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"W\u00e4ld"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Ethiopi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Nordamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"S\u00fcdamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Ozeanie"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"R\u00e4tromani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rum\u00e4nie"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rum\u00e4ni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbie"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russland"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Rusi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Ruandi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Au\u0161trali\u0161es Engli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabie"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomone"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"We\u0161tafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Se\u010delle"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Zentralamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Schwede"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Nordsami\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"O\u0161tafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nordafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Mittelafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slowenie"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"S\u00fcdli\u010ds Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard und Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerikani\u0161 Kontin\u00e4nt"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slowakei"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Slowaki\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Sloweni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Samoani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Somali\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Albani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Serbi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 and Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"S\u00fcdsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Sundanesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Schwedi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Suaheli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00fcrie"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swasiland"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"N\u00f6rdli\u010ds Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- und Caicosinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Zentralasie"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"T\u0161ad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"We\u0161tasie"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Franz\u00f6si\u0161i S\u00fcd- und Antarktisgebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Tad\u0161iki\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Thail\u00e4ndi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tad\u0161ikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Kanadi\u0161es Engli\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibik"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Turkmeni\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"O\u0161ttimor"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmeni\u0161tan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunesie"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"T\u00fcrkei"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"T\u00fcrki\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad und Tobago"_s)
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
			$of("ty"_s),
			$of(u"Taiti\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Unkodierti Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"O\u0161tasie"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"O\u0161teuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nordeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"S\u00fcdasie"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"We\u0161teuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"S\u00fcdo\u0161tasie"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Uiguri\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Koriani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"S\u00fcdeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ukraini\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Amerikani\u0161 Ozeanie"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawa\u00edani\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugauy"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usbeki\u0161tan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Usbeki\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"St. Vincent und d\u2019Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Briti\u0161i Jungfr\u00f6iwinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Amerikani\u0161i Jungfr\u00f6iwinsl\u00e4"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vietnamesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Au\u0161tralie und Niws\u00e9land"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesie"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis und Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronesi\u0161es Inselgebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesie"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Schriftlos"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"J\u00e9me"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Moyette"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"S\u00fcdafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Chinesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Unbekannti Regio"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Nordsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Vereifa\u010dts Chinesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Traditionells Chinesi\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Jakuti\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		})
	}));
	return data;
}

LocaleNames_wae::LocaleNames_wae() {
}

$Class* LocaleNames_wae::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_wae, name, initialize, &_LocaleNames_wae_ClassInfo_, allocate$LocaleNames_wae);
	return class$;
}

$Class* LocaleNames_wae::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun