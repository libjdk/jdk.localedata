#include <sun/util/resources/cldr/ext/LocaleNames_vi.h>

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

$MethodInfo _LocaleNames_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_vi::*)()>(&LocaleNames_vi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_vi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_vi_MethodInfo_
};

$Object* allocate$LocaleNames_vi($Class* clazz) {
	return $of($alloc(LocaleNames_vi));
}

void LocaleNames_vi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_vi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ssy, u"Ti\u1ebfng Saho"_s);
	$var($String, metaValue_key_nu, u"S\u1ed1"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Ti\u1ebfng Cologne"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"Ch\u1eef Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"Ti\u1ebfng Miranda"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"K\u00fd hi\u1ec7u"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"Ti\u1ebfng Atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"Ti\u1ebfng Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"Ch\u1eef s\u1ed1 Tham Th\u00e1i \u0110am"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"Ti\u1ebfng Emilia"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"Ch\u1eef Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"Bi\u1ec3u t\u01b0\u1ee3ng"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"Ti\u1ebfng Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Ti\u1ebfng Ai C\u1eadp c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"Ti\u1ebfng Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"Ch\u1eef Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"Ti\u1ebfng Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"Ch\u1eef s\u1ed1 Sind"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"Ti\u1ebfng Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"Ti\u1ebfng Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"Ti\u1ebfng Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u0110\u1ea3o Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"Ti\u1ebfng Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"Ti\u1ebfng Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"Ch\u1eef s\u1ed1 Sinh"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"C\u00e1c Ti\u1ec3u V\u01b0\u01a1ng qu\u1ed1c \u1ea2 R\u1eadp Th\u1ed1ng nh\u1ea5t"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Ti\u1ebfng Flemish"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antigua v\u00e0 Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"Ch\u1eef s\u1ed1 Mroo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"L\u1ecbch Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"Ti\u1ebfng Gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"M\u00fai gi\u1edd"_s)
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
			$of("Teng"_s),
			$of(u"Ch\u1eef Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Nam C\u1ef1c"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"Ch\u1eef Parthia V\u0103n bia"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoa thu\u1ed9c M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u00c1o"_s)
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
			$of(u"Ti\u1ebfng Anh (M\u1ef9)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"Ti\u1ebfng Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Ti\u1ebfng Armenia Mi\u1ec1n \u0110\u00f4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnia v\u00e0 Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"Ti\u1ebfng Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"Ti\u1ebfng Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u1ec9"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Ti\u1ebfng Th\u01b0\u1ee3ng Gi\u00e9c-man Trung c\u1ed5"_s)
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
			$of("BL"_s),
			$of(u"St. Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"Ti\u1ebfng Kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"Ti\u1ebfng Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Ca-ri-b\u00ea H\u00e0 Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"Ti\u1ebfng Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u0110\u1ea3o Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
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
			$of("Visp"_s),
			$of(u"Ti\u1ebfng n\u00f3i Nh\u00ecn th\u1ea5y \u0111\u01b0\u1ee3c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"L\u1ecbch Ba T\u01b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Ch\u1eef s\u1ed1 Do Th\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Ti\u1ebfng Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"C\u1ed9ng h\u00f2a Trung Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Th\u1ee5y S\u0129"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"Ch\u1eef Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroon"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Trung Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u0110\u1ea3o Clipperton"_s)
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
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0110\u1ea3o Gi\u00e1ng Sinh"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"S\u00edp"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"Ch\u1eef s\u1ed1 Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"S\u00e9c"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"Ti\u1ebfng Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"Ti\u1ebfng Volap\u00fck C\u1ed5 \u0111i\u1ec3n"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0110\u1ee9c"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Ti\u1ebfng Th\u01b0\u1ee3ng Gi\u00e9c-man c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"Ti\u1ebfng Achinese"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"Ti\u1ebfng Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"Ti\u1ebfng Goan Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Ch\u1eef s\u1ed1 Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0110an M\u1ea1ch"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"Ti\u1ebfng Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"Ti\u1ebfng Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Ch\u1eef n\u1ed5i Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"Ch\u1eef Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Ch\u1eef s\u1ed1 Armenia vi\u1ebft th\u01b0\u1eddng"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"C\u1ed9ng h\u00f2a Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"Ti\u1ebfng Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"Ti\u1ebfng G\u00f4-t\u00edch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"Ch\u1eef Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"Ti\u1ebfng Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"Ti\u1ebfng Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"Ch\u1eef Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"Ti\u1ebfng Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"N\u1eeda \u0111\u1ed9 r\u1ed9ng"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"Ti\u1ebfng Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Ceuta v\u00e0 Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"Ti\u1ebfng Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"Ti\u1ebfng Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"Ti\u1ebfng Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"Ti\u1ebfng Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"Ti\u1ebfng Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ai C\u1eadp"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"T\u00e2y Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"Ti\u1ebfng Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"Ti\u1ebfng Palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"Ti\u1ebfng Chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"Bi\u1ec7t ng\u1eef Chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"Ti\u1ebfng Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"Ti\u1ebfng Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"Ti\u1ebfng Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"Ch\u1eef s\u1ed1 Mathbold"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Ti\u1ebfng Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"T\u00e2y Ban Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Li\u00ean Minh Ch\u00e2u \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"Ti\u1ebfng Elamite"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"L\u1ecbch Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Khu v\u1ef1c \u0111\u1ed3ng Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"Ti\u1ebfng Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Ch\u1eef s\u1ed1 Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"Ch\u1eef Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"Ti\u1ebfng Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Ph\u1ea7n Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Bi\u1ebfn th\u1ec3 ng\u00f4n ng\u1eef"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"Ch\u1eef Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Ph\u00e1p"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"Ch\u1eef Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"Ti\u1ebfng Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"Ti\u1ebfng Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"B\u1ea3ng ch\u1eef c\u00e1i Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"L\u1ecbch Qu\u1ed1c gia \u1ea4n \u0110\u1ed9"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"Ti\u1ebfng Hy L\u1ea1p c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"Ti\u1ebfng Votic"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"V\u01b0\u01a1ng qu\u1ed1c Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Ti\u1ebfng Nigeria Pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guiana thu\u1ed9c Ph\u00e1p"_s)
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
			$of("Tale"_s),
			$of(u"Ch\u1eef Th\u00e1i Na"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"Ti\u1ebfng Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Ti\u1ebfng Anh Trung c\u1ed5"_s)
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
			$of(u"Guinea X\u00edch \u0110\u1ea1o"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Hy L\u1ea1p"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Nam Georgia & Qu\u1ea7n \u0111\u1ea3o Nam Sandwich"_s)
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
			$of("type.nu.mathmono"_s),
			$of(u"Ch\u1eef s\u1ed1 Mathmono"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"Ti\u1ebfng Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"Ti\u1ebfng Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"Ch\u1eef Th\u00e1i L\u1eb7c m\u1edbi"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Ti\u1ebfng Kurd Mi\u1ec1n Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Kh\u00f4ng c\u00f3 n\u1ed9i dung ng\u00f4n ng\u1eef"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"Ch\u1eef Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0110\u1eb7c khu H\u00e0nh ch\u00ednh H\u1ed3ng K\u00f4ng, Trung Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"Ch\u1eef Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Heard v\u00e0 McDonald"_s)
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
			$of("agq"_s),
			$of(u"Ti\u1ebfng Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Ti\u1ebfng \u0110\u1ee9c (Th\u1ee5y S\u0129)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"L\u1ecbch H\u1ed3i Gi\u00e1o - Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"Ti\u1ebfng Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Canary"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"Ti\u1ebfng M\u00e2n Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"Ti\u1ebfng Ba T\u01b0 c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"Ch\u1eef s\u1ed1 Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"Ti\u1ebfng Napoli"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"Ti\u1ebfng Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"Ch\u1eef s\u1ed1 Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"Ti\u1ebfng Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"Ch\u1eef Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"Ch\u1eef Nabataean"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u0110\u1ea3o Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u1ea4n \u0110\u1ed9"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Quy t\u1eafc s\u1eafp x\u1ebfp Ch\u00e2u \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"L\u00e3nh th\u1ed5 \u1ea4n \u0110\u1ed9 D\u01b0\u01a1ng thu\u1ed9c Anh"_s)
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
			$of("IT"_s),
			$of("Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"K\u00fd hi\u1ec7u To\u00e1n h\u1ecdc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Ch\u1eef s\u1ed1 Th\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"M\u00e1y t\u00ednh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Ch\u1eef s\u1ed1 Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"S\u1ed1 Kirin"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"L\u1ecbch H\u1ed3i Gi\u00e1o"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Ch\u1eef Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of(u"Ti\u1ebfng Frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Nh\u1eadt B\u1ea3n"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Ti\u1ebfng Ph\u00e1p t\u1eeb Cu\u1ed1i th\u1eddi Trung c\u1ed5 \u0111\u1ebfn 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"Ti\u1ebfng Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"Ch\u1eef Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"Ti\u1ebfng Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"Ti\u1ebfng Nyasa Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Ch\u1eef s\u1ed1 Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"Ch\u1eef Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Ti\u1ebfng Th\u01b0\u1ee3ng Gi\u00e9c-man (Th\u1ee5y S\u0129)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp theo ng\u1eef \u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"Ti\u1ebfng Ingria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"L\u1ecbch Ph\u1eadt Gi\u00e1o"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Ch\u00e2u M\u1ef9 La-tinh"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Campuchia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"St. Kitts v\u00e0 Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"Ch\u1eef Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Ch\u1eef K\u1ebf th\u1eeba"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Tri\u1ec1u Ti\u00ean"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"H\u00e0n Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"Ng\u1eef \u00e2m Pollard"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"Ti\u1ebfng Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Ch\u1eef Kirin"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"L\u00e0o"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Li-b\u0103ng"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Ti\u1ebfng Phoenicia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Ch\u1eef Kirin Slav\u01a1 Nh\u00e0 th\u1edd c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Ti\u1ebfng Gwich\u02bcin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Ti\u1ebfng H\u1ea1 Gi\u00e9c-man"_s)
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
			$of("akk"_s),
			$of(u"Ti\u1ebfng Akkadia"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Ti\u1ebfng Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"Ti\u1ebfng Yupik Mi\u1ec1n Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"Ch\u1eef Pahlavi S\u00e1ch"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"Ch\u1eef Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"Ch\u1eef Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"Ti\u1ebfng Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"Ti\u1ebfng Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"Ti\u1ebfng Alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"Ti\u1ebfng Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"Ti\u1ebfng Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"Ch\u1eef Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Ma-r\u1ed1c"_s)
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
			$of("Nshu"_s),
			$of(u"Ch\u1eef N\u00fcshu"_s)
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
			$of("lam"_s),
			$of(u"Ti\u1ebfng Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"Ti\u1ebfng Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"Ch\u1eef Th\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Ch\u1eef s\u1ed1 Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"B\u1eafc Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"Ch\u1eef s\u1ed1 Mathdbl"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Myanmar (Mi\u1ebfn \u0110i\u1ec7n)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"M\u00f4ng C\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"Ti\u1ebfng Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u0110\u1eb7c khu H\u00e0nh ch\u00ednh Macao, Trung Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"Ti\u1ebfng Gheg Albani"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o B\u1eafc Mariana"_s)
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
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"Ti\u1ebfng Capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"Chuy\u1ec3n t\u1ef1 UN GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Ti\u1ebfng Altai Mi\u1ec1n Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldives"_s)
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
			$of(u"L\u1ecbch Nh\u1eadt B\u1ea3n"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"Ch\u1eef Pahlavi V\u0103n bia"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Ch\u00e2u Phi h\u1ea1 Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"L\u1ecbch Do Th\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp theo t\u1eeb \u0111i\u1ec3n"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"La M\u00e3 h\u00f3a Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 S\u1eeda \u0111\u1ed5i H\u1ee3p nh\u1ea5t"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u0110\u1ea3o Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"Ti\u1ebfng Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"Ch\u1eef Pahlavi Th\u00e1nh ca"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"Ch\u1eef Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"H\u00e0 Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Na Uy"_s)
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
			$of("Phnx"_s),
			$of(u"Ch\u1eef Phoenicia"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"Ti\u1ebfng Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"Ti\u1ebfng Tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"Ch\u1eef Meroitic N\u00e9t th\u1ea3o"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"Ti\u1ebfng Romany"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"Ch\u1eef Meroitic"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Ti\u1ebfng Th\u1ed5 Nh\u0129 K\u1ef3 Crimean"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Ti\u1ebfng Anh c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"Ti\u1ebfng Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Ti\u1ebfng Ph\u00e1p Seselwa Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of(u"Ch\u1eef s\u1ed1 Hmnp"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"Ch\u1eef Ba T\u01b0 c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"Ch\u1eef s\u1ed1 Hmng"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"L\u1ecbch Islamic-Civil"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"Ti\u1ebfng Kashubia"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Ti\u1ebfng Anh (Anh)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polynesia thu\u1ed9c Ph\u00e1p"_s)
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
			$of("Ba Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Ti\u1ebfng Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint Pierre v\u00e0 Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"L\u00e3nh th\u1ed5 Palestine"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Ch\u1eef Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"B\u1ed3 \u0110\u00e0o Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"Ti\u1ebfng Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Ch\u1eef s\u1ed1 Hy L\u1ea1p vi\u1ebft th\u01b0\u1eddng"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"Ti\u1ebfng Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Ch\u1eef Do Th\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Ti\u1ebfng Anh chu\u1ea9n t\u1ea1i Scotland"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"Ti\u1ebfng Anh Jamaica Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"Ti\u1ebfng Niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"V\u00f9ng xa x\u00f4i thu\u1ed9c Ch\u00e2u \u0110\u1ea1i D\u01b0\u01a1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"Ti\u1ebfng Extremadura"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"Ti\u1ebfng Lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"Ch\u1eef s\u1ed1 Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"Ng\u1eef \u00e2m h\u1ecdc UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"Ch\u1eef s\u1ed1 Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"Ti\u1ebfng Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"Ch\u1eef Th\u00e1i Vi\u1ec7t"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Th\u1ebf gi\u1edbi"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Ch\u00e2u Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"Ti\u1ebfng Ao Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"B\u1eafc M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Nam M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"Ti\u1ebfng Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"Ch\u1eef Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Ch\u00e2u \u0110\u1ea1i D\u01b0\u01a1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"Ch\u1eef Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Nga"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"Ch\u1eef s\u1ed1 Th\u00e1i L\u1eb7c m\u1edbi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"B\u1ea3ng ch\u1eef c\u00e1i Metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Ch\u1eef Manichaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"Ch\u1eef Ugarit"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"Ch\u1eef Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u1ea2 R\u1eadp X\u00ea-\u00fat"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"Ti\u1ebfng Pohnpeian"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Ch\u1eef Mandaean"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"Ti\u1ebfng Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"T\u00e2y Phi"_s)
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
			$of("013"_s),
			$of(u"Trung M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Th\u1ee5y \u0110i\u1ec3n"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u0110\u00f4ng Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"Ti\u1ebfng Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"Ch\u1eef Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"B\u1eafc Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Ki\u1ec3u xu\u1ed1ng d\u00f2ng h\u1eb9p"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Trung Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"Ch\u1eef s\u1ed1 Mymrtlng"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Mi\u1ec1n Nam Ch\u00e2u Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbard v\u00e0 Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Ch\u00e2u M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"Ch\u1eef Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"Ch\u1eef Woleai"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
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
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"Ti\u1ebfng Mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Ti\u1ebfng Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Ch\u1eef s\u1ed1 Tamil Truy\u1ec1n th\u1ed1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"Ti\u1ebfng Araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Nam Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 v\u00e0 Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"Ti\u1ebfng \u1ea2 R\u1eadp Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Ti\u1ebfng \u1ea2 R\u1eadp Najdi"_s)
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
			$of("yao"_s),
			$of(u"Ti\u1ebfng Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"Ti\u1ebfng Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"Ti\u1ebfng \u1ea2 R\u1eadp Ai C\u1eadp"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"Ti\u1ebfng Yap"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"Ti\u1ebfng Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"H\u1ec7 \u0111o l\u01b0\u1eddng M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Mi\u1ec1n B\u1eafc Ch\u00e2u M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Turks v\u00e0 Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Ti\u1ebfng Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"Ch\u1eef Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"L\u00e3nh th\u1ed5 ph\u00eda Nam Thu\u1ed9c Ph\u00e1p"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"Ng\u00f4n ng\u1eef K\u00fd hi\u1ec7u M\u1ef9"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Th\u00e1i Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Ca-ri-b\u00ea"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"Ti\u1ebfng Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"T\u00ecm ki\u1ebfm theo Ph\u1ee5 \u00e2m \u0110\u1ea7u Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"Ti\u1ebfng Boontling"_s)
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
			$of("%%NULIK"_s),
			$of(u"Ti\u1ebfng Volap\u00fck Hi\u1ec7n \u0111\u1ea1i"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Th\u1ed5 Nh\u0129 K\u1ef3"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad v\u00e0 Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u0110\u00e0i Loan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Ti\u1ebfng Asturias"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"Ch\u1eef Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"Ti\u1ebfng Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Ch\u1eef vi\u1ebft kh\u00f4ng x\u00e1c \u0111\u1ecbnh"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"Ch\u1eef Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"Ti\u1ebfng Aromania"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u0110\u00f4ng \u00c1"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"Ti\u1ebfng Tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Ti\u1ebfng Swahili Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Nam \u00c1"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"Ti\u1ebfng Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u0110\u00f4ng Nam \u00c1"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"Ti\u1ebfng Kh\u00e1ch Gia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp theo b\u00ednh \u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Nam \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Ch\u1eef Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"C\u00e1c ti\u1ec3u \u0111\u1ea3o xa c\u1ee7a Hoa K\u1ef3"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Li\u00ean hi\u1ec7p qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Hoa K\u1ef3"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Ti\u1ebfng Hawaii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"H\u00e0n l\u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp theo ti\u1ebfng Trung gi\u1ea3n th\u1ec3 - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Ti\u1ebfng Prussia"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Ti\u1ebfng Tamazight Mi\u1ec1n Trung Ma-r\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp theo n\u00e9t ch\u1eef"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Ti\u1ebfng Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Th\u00e0nh Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Ti\u1ebfng Proven\u00e7al c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"St. Vincent v\u00e0 Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Virgin thu\u1ed9c Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Qu\u1ea7n \u0111\u1ea3o Virgin thu\u1ed9c Hoa K\u1ef3"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vi\u1ec7t Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"Ti\u1ebfng Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"Ti\u1ebfng Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"Ti\u1ebfng Na Uy c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Ti\u1ebfng Armenia Mi\u1ec1n T\u00e2y"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis v\u00e0 Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp truy\u1ec1n th\u1ed1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"V\u00f9ng Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"Ti\u1ebfng Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Ti\u1ebfng Lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Ch\u1eef s\u1ed1 d\u00f9ng trong t\u00e0i ch\u00ednh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"La m\u00e3 h\u00f3a Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp tr\u01b0\u1edbc \u0111\u00e2y, \u0111\u1ec3 t\u01b0\u01a1ng th\u00edch"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Ti\u1ebfng Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"Ch\u1eef Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"Ch\u1eef s\u1ed1 Meetei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"Ti\u1ebfng Walamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"Ti\u1ebfng Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"Ti\u1ebfng Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"Ti\u1ebfng Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 Chu\u1ea9n"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"Ch\u1eef s\u1ed1 Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Ch\u1eef Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Ch\u01b0a c\u00f3 ch\u1eef vi\u1ebft"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"Ch\u1eef Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"Ti\u1ebfng Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"Ch\u1eef Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"Ch\u1eef Blissymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"Ti\u1ebfng N\u2019Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp chu\u1ea9n"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"Ti\u1ebfng Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Ti\u1ebfng Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"Ti\u1ebfng Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Ch\u1eef vi\u1ebft K\u00fd hi\u1ec7u"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"Ch\u1eef s\u1ed1 Ch\u0103m"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Nam Phi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Ch\u1eef s\u1ed1 Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Ki\u1ec3u xu\u1ed1ng d\u00f2ng tho\u00e1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Ch\u1eef Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Ch\u1eef s\u1ed1 Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp Zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Ch\u1eef Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"La M\u00e3 h\u00f3a B\u00ednh \u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"V\u00f9ng kh\u00f4ng x\u00e1c \u0111\u1ecbnh"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Ch\u1eef Runic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"H\u1ec7 m\u00e9t"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"L\u1ecbch ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"Ti\u1ebfng Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"Ti\u1ebfng Sotho Mi\u1ec1n B\u1eafc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Ch\u1eef s\u1ed1 Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Ti\u1ebfng Creole Louisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"Ti\u1ebfng Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"Ch\u1eef Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"Ti\u1ebfng Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Ti\u1ebfng Fiji Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Ch\u1eef s\u1ed1 d\u00f9ng trong t\u00e0i ch\u00ednh c\u1ee7a ti\u1ebfng Trung gi\u1ea3n th\u1ec3"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"Ti\u1ebfng Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Ch\u1eef s\u1ed1 \u1ea2 R\u1eadp - \u1ea4n \u0110\u1ed9 m\u1edf r\u1ed9ng"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"Ti\u1ebfng Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"Ti\u1ebfng Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Ch\u1eef s\u1ed1 c\u00f3 \u0111\u1ed9 r\u1ed9ng \u0111\u1ea7y \u0111\u1ee7"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"Ti\u1ebfng Hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"Ti\u1ebfng Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"Ti\u1ebfng Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Ch\u1eef t\u01b0\u1ee3ng h\u00ecnh Maya"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"Ti\u1ebfng B\u1eafc Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp bi\u1ec3u t\u01b0\u1ee3ng"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"Ch\u1eef Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"Ti\u1ebfng Newari c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"Ti\u1ebfng Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"Ch\u1eef Kh\u01a1-me"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"L\u1ecbch H\u1ed3i Gi\u00e1o - \u1ea2 R\u1eadp X\u00ea-\u00fat"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"Ch\u1eef Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"Ti\u1ebfng Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Ch\u1eef s\u1ed1 La m\u00e3"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Ti\u1ebfng Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"Ch\u1eef s\u1ed1 Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Ti\u1ebfng Samaritan Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Liverpool"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"Ti\u1ebfng Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"Ti\u1ebfng Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"Ti\u1ebfng Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"Ch\u1eef Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"Ti\u1ebfng Judeo-Ba T\u01b0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Ch\u1eef s\u1ed1 t\u1ef1 nhi\u00ean"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"Ti\u1ebfng Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Ch\u1eef Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"Ti\u1ebfng Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"Ch\u1eef s\u1ed1 Tirh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u0110\u1ed9 r\u1ed9ng t\u1ed1i \u0111a"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"Ti\u1ebfng Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"Ti\u1ebfng Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Ti\u1ebfng Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"Ti\u1ebfng Nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"Ti\u1ebfng Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"Ti\u1ebfng Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"Ti\u1ebfng Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Ti\u1ebfng Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"Ti\u1ebfng H\u2019M\u00f4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"Ti\u1ebfng Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"Ti\u1ebfng Lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"Ti\u1ebfng Baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"Ti\u1ebfng Slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Ti\u1ebfng Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"Ti\u1ebfng Ugaritic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"Ch\u1eef s\u1ed1 Wara"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"Ti\u1ebfng Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"Ti\u1ebfng Bavaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Ti\u1ebfng Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"Ti\u1ebfng Bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Ti\u1ebfng Judeo-\u1ea2 R\u1eadp"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Ti\u1ebfng T\u00e2y Ban Nha (Ch\u00e2u \u00c2u)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"Ti\u1ebfng Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"Ti\u1ebfng Scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"Ti\u1ebfng Sicilia"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"Ti\u1ebfng Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Ti\u1ebfng Abkhazia"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"Ch\u1eef Nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"Ti\u1ebfng Batak Toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"Ti\u1ebfng Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Ti\u1ebfng Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Ti\u1ebfng Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"Ch\u1eef s\u1ed1 Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"Ti\u1ebfng Ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Ti\u1ebfng Amharic"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"Ti\u1ebfng Aragon"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Ch\u1eef \u1ea2 R\u1eadp"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Stolvizza/Solbica"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"Ch\u1eef Nh\u1eadt B\u1ea3n"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Ti\u1ebfng \u1ea2 R\u1eadp"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"B\u1ea3ng k\u00fd hi\u1ec7u \u00e2m ti\u1ebft Ti\u1ebfng Nh\u1eadt"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Ti\u1ebfng Assam"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"Ch\u1eef Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"Ti\u1ebfng Avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"Ch\u1eef Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"Ti\u1ebfng Kurd Mi\u1ec1n Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"Ti\u1ebfng Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Ti\u1ebfng Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"Ch\u1eef Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"Ti\u1ebfng Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Tr\u00ecnh t\u1ef1 s\u1eafp x\u1ebfp theo b\u1ed9-n\u00e9t"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Ti\u1ebfng Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Ti\u1ebfng Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"Ti\u1ebfng Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"Ch\u1eef s\u1ed1 Java"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"Ti\u1ebfng Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Ti\u1ebfng Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Ti\u1ebfng T\u00e2y T\u1ea1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"Ti\u1ebfng Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Ti\u1ebfng Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Ti\u1ebfng Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"Ti\u1ebfng Seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"Ch\u1eef Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Ch\u1eef s\u1ed1 L\u00e0o"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"Ti\u1ebfng Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"Ch\u1eef N\u2019Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"Ti\u1ebfng Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Ti\u1ebfng Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"Ti\u1ebfng Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Ti\u1ebfng Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"Ti\u1ebfng Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 S\u1eeda \u0111\u1ed5i"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"Ti\u1ebfng Corsica"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"Ch\u1eef Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"Ti\u1ebfng Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ti\u1ebfng S\u00e9c"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Ti\u1ebfng Slav\u01a1 Nh\u00e0 th\u1edd"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"Ti\u1ebfng Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Ti\u1ebfng Wales"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Ch\u1eef s\u1ed1 Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"Ch\u1eef Di"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Ti\u1ebfng \u0110an M\u1ea1ch"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Ti\u1ebfng B\u1ed3 \u0110\u00e0o Nha (Ch\u00e2u \u00c2u)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Ti\u1ebfng \u0110\u1ee9c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u0110\u1ecbnh d\u1ea1ng ti\u1ec1n t\u1ec7 chu\u1ea9n"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"Ti\u1ebfng Beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"Ti\u1ebfng Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"Ti\u1ebfng Jutish"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"Ch\u1eef Bugin"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"Ti\u1ebfng Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"Ti\u1ebfng Ai-len c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Ch\u1eef s\u1ed1 M\u00f4ng C\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"Ti\u1ebfng Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Ti\u1ebfng T\u00e2y Ban Nha (M\u1ef9 La tinh)"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"Ti\u1ebfng Betawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Ti\u1ebfng Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"Ti\u1ebfng Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"L\u1ecbch Trung Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"Ch\u1eef Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"Ti\u1ebfng Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Ch\u1eef s\u1ed1 Hy L\u1ea1p"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"Ti\u1ebfng Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"Ti\u1ebfng Bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Ki\u1ec3u xu\u1ed1ng d\u00f2ng th\u01b0\u1eddng"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"Ti\u1ebfng Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Ti\u1ebfng Hy L\u1ea1p"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Ti\u1ebfng Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Ti\u1ebfng Qu\u1ed1c T\u1ebf Ng\u1eef"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"Ti\u1ebfng Badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp theo ti\u1ebfng Trung ph\u1ed3n th\u1ec3 - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Ti\u1ebfng T\u00e2y Ban Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Ti\u1ebfng Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Ch\u1eef H\u00e1n c\u00f3 ch\u00fa \u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Ti\u1ebfng Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"Ch\u1eef Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Ch\u1eef H\u00e0n"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"Ch\u1eef Samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Ti\u1ebfng Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Ti\u1ebfng Th\u01b0\u1ee3ng Sorbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Ch\u1eef H\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"Ti\u1ebfng Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"Ch\u1eef Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Ti\u1ebfng Ba T\u01b0"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Gi\u1ea3n th\u1ec3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Ch\u1eef s\u1ed1 ph\u01b0\u01a1ng T\u00e2y"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Ph\u1ed3n th\u1ec3"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Ti\u1ebfng Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"Ti\u1ebfng \u1ea2-R\u1eadp Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"Ti\u1ebfng T\u01b0\u01a1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Ti\u1ebfng Ph\u1ea7n Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Ti\u1ebfng Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"Ti\u1ebfng Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Ti\u1ebfng T\u00e2y Balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Ti\u1ebfng Qu\u1ea3ng \u0110\u00f4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Ti\u1ebfng Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"Chuy\u1ec3n t\u1ef1 US BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"Ti\u1ebfng Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Ti\u1ebfng Ph\u00e1p"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"Ti\u1ebfng Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Ti\u1ebfng Frisia"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Ti\u1ebfng Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Ti\u1ebfng Gael Scotland"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Ti\u1ebfng Galician"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Ti\u1ebfng Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"Ti\u1ebfng Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Ng\u00f4n ng\u1eef kh\u00f4ng x\u00e1c \u0111\u1ecbnh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"L\u1ecbch Ethiopic Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Ti\u1ebfng Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"L\u1ecbch H\u1ed3i Gi\u00e1o - Thi\u00ean v\u0103n"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"Ti\u1ebfng Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Ch\u1eef s\u1ed1 Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Ti\u1ebfng Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Ti\u1ebfng Do Th\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Ti\u1ebfng Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"Ti\u1ebfng Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"Ti\u1ebfng Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"Ti\u1ebfng Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"Ti\u1ebfng Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Ti\u1ebfng Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Ti\u1ebfng Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ti\u1ebfng Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Ti\u1ebfng Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"Ti\u1ebfng Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"Ti\u1ebfng Ph\u00e1p Cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Ng\u1eef \u00e2m h\u1ecdc IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Ti\u1ebfng Khoa H\u1ecdc Qu\u1ed1c T\u1ebf"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"Ch\u1eef Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Ti\u1ebfng Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Ch\u1eef s\u1ed1 T\u00e2y T\u1ea1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"Ti\u1ebfng Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Ti\u1ebfng Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"Ti\u1ebfng Di T\u1ee9 Xuy\u00ean"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Ti\u1ebfng Ph\u00e1p Trung c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"Ti\u1ebfng Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Ti\u1ebfng Ph\u00e1p c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"Ti\u1ebfng Arpitan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"Ti\u1ebfng Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"Ti\u1ebfng Frisian Mi\u1ec1n \u0110\u00f4ng"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"Ti\u1ebfng Banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"Ti\u1ebfng Frisia Mi\u1ec1n B\u1eafc"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Ti\u1ebfng Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Ti\u1ebfng Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"Ti\u1ebfng Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Ti\u1ebfng Nh\u1eadt"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Ch\u1eef Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"Ch\u1eef Nam \u1ea2 R\u1eadp c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"Ch\u1eef Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"Ti\u1ebfng Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"Ch\u1eef s\u1ed1 Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"Ti\u1ebfng Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Ti\u1ebfng Sami Mi\u1ec1n Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Ti\u1ebfng Java"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Ch\u1eef Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Ti\u1ebfng Madura"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Ti\u1ebfng Lule Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"Ti\u1ebfng Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Ti\u1ebfng Mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"Ti\u1ebfng Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Ti\u1ebfng Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Ti\u1ebfng Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"Ti\u1ebfng Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"Ti\u1ebfng Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"Ti\u1ebfng Ng\u00f4"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"Ti\u1ebfng Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"Ti\u1ebfng Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"Ti\u1ebfng Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"Ch\u1eef G\u00f4-t\u00edch"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"Ti\u1ebfng Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"Ti\u1ebfng Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"Ti\u1ebfng Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Ti\u1ebfng Kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Ti\u1ebfng Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Ti\u1ebfng Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"Ti\u1ebfng Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Ti\u1ebfng H\u00e0n"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"Ti\u1ebfng Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Ti\u1ebfng Kashmir"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"Ch\u1eef Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"Ch\u1eef Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"Ch\u1eef Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Ti\u1ebfng Kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"Ti\u1ebfng Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"Ti\u1ebfng Cornwall"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Ti\u1ebfng Kyrgyz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"Ti\u1ebfng Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Ti\u1ebfng La-tinh"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Ti\u1ebfng Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Ch\u1eef s\u1ed1 Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"Ti\u1ebfng Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"Ch\u1eef Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"Ti\u1ebfng Limburg"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Ch\u1eef T\u00e2y T\u1ea1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"Ti\u1ebfng Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Ti\u1ebfng Friulian"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"Ti\u1ebfng L\u00e0o"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"H\u1ec7 \u0111o l\u01b0\u1eddng Anh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"Ch\u1eef s\u1ed1 Hora Th\u00e1i \u0110am"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Ti\u1ebfng Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"Ti\u1ebfng Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Ti\u1ebfng Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"Ti\u1ebfng Sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Ti\u1ebfng Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"Ti\u1ebfng Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp unicode m\u1eb7c \u0111\u1ecbnh"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Ti\u1ebfng Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Ti\u1ebfng Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"Ti\u1ebfng Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Ti\u1ebfng M\u00f4ng C\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Ti\u1ebfng Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Ti\u1ebfng M\u00e3 Lai"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Ti\u1ebfng Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Ti\u1ebfng Mi\u1ebfn \u0110i\u1ec7n"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"Ch\u1eef Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Ch\u1eef Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"Ti\u1ebfng Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"Ti\u1ebfng Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Ti\u1ebfng H\u1ea1 Sorbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Ch\u1eef Imperial Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"Ti\u1ebfng Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"T\u00ecm ki\u1ebfm m\u1ee5c \u0111\u00edch chung"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Ti\u1ebfng Na Uy (Bokm\u00e5l)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"Ti\u1ebfng Ndebele Mi\u1ec1n B\u1eafc"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Ti\u1ebfng Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"Ti\u1ebfng Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"Ti\u1ebfng Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Ti\u1ebfng H\u00e0 Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Ti\u1ebfng Na Uy (Nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Ti\u1ebfng Na Uy"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Ti\u1ebfng Ndebele Mi\u1ec1n Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"Ch\u1eef s\u1ed1 Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"Ti\u1ebfng Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"Ti\u1ebfng Kara-Kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"Ti\u1ebfng Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"Ti\u1ebfng Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"Ti\u1ebfng Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"\u0110a \u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Ti\u1ebfng Occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"Ti\u1ebfng Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"Ti\u1ebfng Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"Ti\u1ebfng Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"Ti\u1ebfng Anh Hi\u1ec7n \u0111\u1ea1i Th\u1eddi k\u1ef3 \u0111\u1ea7u"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"Ti\u1ebfng Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"Ti\u1ebfng Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Ch\u1eef s\u1ed1 Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"Ti\u1ebfng Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"Ti\u1ebfng Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"Ti\u1ebfng Dusun Mi\u1ec1n Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"Ti\u1ebfng Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Ti\u1ebfng Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"La M\u00e3 h\u00f3a ALA-LC, \u1ea5n b\u1ea3n n\u0103m 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"Ti\u1ebfng Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"Ti\u1ebfng Kabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"Ti\u1ebfng Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"Ti\u1ebfng Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Ti\u1ebfng Punjab"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"Ti\u1ebfng Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"Ti\u1ebfng Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Lipovaz c\u1ee7a ng\u01b0\u1eddi Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"Ti\u1ebfng Kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"Ti\u1ebfng Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"Ti\u1ebfng Bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Ti\u1ebfng Ba Lan"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Ti\u1ebfng H\u00e0 Lan Trung c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Ch\u1eef s\u1ed1 Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"L\u1ecbch Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Ti\u1ebfng Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Ti\u1ebfng B\u1ed3 \u0110\u00e0o Nha"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Ti\u1ebfng Ai-len Trung c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"B\u1ea3ng ch\u1eef c\u00e1i Bohori\u010d"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"Ti\u1ebfng Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"Ti\u1ebfng Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u0110\u1ecbnh d\u1ea1ng ti\u1ec1n t\u1ec7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"Ch\u1eef s\u1ed1 N\u2019Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"Ti\u1ebfng Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"L\u1ecbch"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"Ch\u1eef L\u00e0o"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Ti\u1ebfng Meta\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"H\u1ec7 th\u1ed1ng 24 gi\u1edd (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"H\u1ec7 th\u1ed1ng 24 gi\u1edd (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"Ti\u1ebfng Brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Ch\u1eef s\u1ed1 Myanma"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Ti\u1ebfng Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"Ti\u1ebfng Zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"Ti\u1ebfng Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"Ch\u1eef Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"Ti\u1ebfng Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Ch\u1eef Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"H\u1ec7 th\u1ed1ng 12 gi\u1edd (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"H\u1ec7 th\u1ed1ng 12 gi\u1edd (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Ti\u1ebfng Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"Ti\u1ebfng Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Ti\u1ec1n t\u1ec7"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Ti\u1ebfng Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Ch\u1eef s\u1ed1 Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Ch\u1eef s\u1ed1 th\u1eadp ph\u00e2n Trung Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Ti\u1ebfng Nga"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"Ti\u1ebfng Akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Ti\u1ebfng Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"K\u00fd hi\u1ec7u Blissymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Ti\u1ebfng Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"Ti\u1ebfng Micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"Ti\u1ebfng Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Ch\u1eef t\u1ed1c k\u00fd Duployan"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Ti\u1ebfng Ph\u1ea1n"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 H\u1ee3p nh\u1ea5t"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"Ti\u1ebfng Sardinia"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"Ti\u1ebfng Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"Ti\u1ebfng Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Ti\u1ebfng Sami Mi\u1ec1n B\u1eafc"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"Ti\u1ebfng Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"Ti\u1ebfng Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"Ti\u1ebfng Serbo-Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Ti\u1ebfng Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"Ti\u1ebfng Sumeria"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Ti\u1ebfng Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Ti\u1ebfng Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"Ch\u1eef Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Ti\u1ebfng Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Ti\u1ebfng Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Ti\u1ebfng Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Ch\u1eef s\u1ed1 \u1ea2 R\u1eadp - \u1ea4n \u0110\u1ed9"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Ti\u1ebfng Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Ti\u1ebfng Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"Ti\u1ebfng Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u0110\u1ecbnh d\u1ea1ng ti\u1ec1n t\u1ec7 k\u1ebf to\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Ti\u1ebfng Sotho Mi\u1ec1n Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"Ch\u1eef Java"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Ti\u1ebfng Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Ti\u1ebfng Th\u1ee5y \u0110i\u1ec3n"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Ti\u1ebfng Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of(u"Ch\u1eef s\u1ed1 Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Ch\u1eef s\u1ed1 d\u00f9ng trong t\u00e0i ch\u00ednh c\u1ee7a ti\u1ebfng Trung ph\u1ed3n th\u1ec3"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"Ti\u1ebfng Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"Ti\u1ebfng Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Ti\u1ebfng Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ch\u00e2u \u00c1"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"Ti\u1ebfng Buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Trung \u00c1"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"Ti\u1ebfng Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"T\u00e2y \u00c1"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Ti\u1ebfng Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Ti\u1ebfng Th\u00e1i"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Ti\u1ebfng Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"Ti\u1ebfng Bugin"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"Ti\u1ebfng Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Ti\u1ebfng Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"Ti\u1ebfng Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"Ti\u1ebfng Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Ti\u1ebfng Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"Ti\u1ebfng Bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"Ti\u1ebfng Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Ch\u1eef s\u1ed1 Nh\u1eadt B\u1ea3n"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Ti\u1ebfng Th\u1ed5 Nh\u0129 K\u1ef3"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"Ti\u1ebfng Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"Ti\u1ebfng C\u00f4mo"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"Ch\u1eef Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Ti\u1ebfng Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"Ti\u1ebfng Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"Ti\u1ebfng Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Ti\u1ebfng Tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Ch\u00e2u \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u0110\u00f4ng \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of(u"Ch\u1eef s\u1ed1 Rohg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"Ch\u1eef s\u1ed1 Mathsanb"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"B\u1eafc \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"Ti\u1ebfng Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"T\u00e2y \u00c2u"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Ti\u1ebfng Uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"Ch\u1eef Italic c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Ch\u1eef H\u00e0n Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Chung"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ti\u1ebfng Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"L\u1ecbch Copts"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Ti\u1ebfng Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 Resian Chu\u1ea9n h\u00f3a"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Ti\u1ebfng Kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"Ti\u1ebfng Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Ti\u1ebfng Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"Ti\u1ebfng Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 Ti\u1ebfng \u0110\u1ee9c n\u0103m 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Ti\u1ebfng H\u1ea1 Saxon"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"Ch\u1eef Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"Ti\u1ebfng Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"Ch\u1eef Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"L\u1ecbch Trung Hoa D\u00e2n Qu\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Ti\u1ebfng Vi\u1ec7t"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"Ti\u1ebfng Khotan"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Ti\u1ebfng Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Chu k\u1ef3 gi\u1edd (12 v\u1edbi 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 Taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Ti\u1ebfng Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"Ti\u1ebfng Syriac c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"Ch\u1eef s\u1ed1 Mathsans"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"Ch\u1eef Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Ti\u1ebfng K\u02bciche\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"Ch\u1eef s\u1ed1 Gonm"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"Ti\u1ebfng Quechua \u1edf Cao nguy\u00ean Chimborazo"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"Ti\u1ebfng Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"Ti\u1ebfng Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"Ti\u1ebfng Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"Ti\u1ebfng Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of(u"Ch\u1eef s\u1ed1 Gong"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Ch\u1eef Hy L\u1ea1p"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"Ti\u1ebfng C\u00e1m"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"Ch\u1eef Lydia"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Ch\u1eef h\u00ecnh n\u00eam Sumero-Akkadian"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Ti\u1ebfng Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"Ti\u1ebfng Tamazight Chu\u1ea9n c\u1ee7a Ma-r\u1ed1c"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Ti\u1ebfng \u1ea2 R\u1eadp Hi\u1ec7n \u0111\u1ea1i"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u00c2m ti\u1ebft Th\u1ed5 d\u00e2n Canada H\u1ee3p nh\u1ea5t"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"Ti\u1ebfng Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"Ch\u1eef M\u00f4ng C\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"Ti\u1ebfng M\u00e3n Ch\u00e2u"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"Ch\u1eef La-tinh Fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"Ch\u1eef t\u01b0\u1ee3ng h\u00ecnh Anatolia"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"Ti\u1ebfng Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Ti\u1ebfng Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Ch\u1eef La tinh"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Ch\u1eef La-tinh Xc\u1ed1t-len"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Ch\u1eef s\u1ed1 c\u1ee7a ti\u1ebfng Trung gi\u1ea3n th\u1ec3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Ch\u1eef s\u1ed1 ti\u1ebfng Trung ph\u1ed3n th\u1ec3"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Ti\u1ebfng Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Ch\u1eef s\u1ed1 La M\u00e3 vi\u1ebft th\u01b0\u1eddng"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Ti\u1ebfng Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"Ph\u01b0\u01a1ng ng\u1eef Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"Ch\u1eef Lycia"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"Ti\u1ebfng Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"Ti\u1ebfng Medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Ch\u1eef n\u1ed5i Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"Ti\u1ebfng Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Ti\u1ebfng Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Ti\u1ebfng Ph\u00e1p Hi\u1ec7n \u0111\u1ea1i Th\u1eddi k\u1ef3 \u0111\u1ea7u"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Ti\u1ebfng Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"Ti\u1ebfng Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"Ch\u1eef Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"Ch\u1eef Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Ti\u1ebfng Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"S\u1ed1 truy\u1ec1n th\u1ed1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Ch\u1eef T\u00e2y Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"Ti\u1ebfng Th\u1ed5 Nh\u0129 K\u1ef3 Ottoman"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Ch\u1eef Estrangelo Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"Ti\u1ebfng Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"Ti\u1ebfng Choang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"Ch\u1eef Caria"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"Ti\u1ebfng Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Ti\u1ebfng Trung"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"Ch\u1eef Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Ch\u1eef Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"Ch\u1eef Permic c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Ki\u1ec3u xu\u1ed1ng d\u00f2ng"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Ti\u1ebfng Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp theo danh b\u1ea1 \u0111i\u1ec7n tho\u1ea1i"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"\u0110\u01a1n \u00e2m"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Ch\u1eef Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"Ch\u1eef Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"Ti\u1ebfng Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Ch\u1eef s\u1ed1 d\u00f9ng trong t\u00e0i ch\u00ednh c\u1ee7a ti\u1ebfng Nh\u1eadt"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"Ch\u1eef Ch\u0103m"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Ti\u1ebfng Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Ch\u1eef \u0110\u00f4ng Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"Ch\u1eef s\u1ed1 Myanmar Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"Ch\u1eef B\u1eafc \u1ea2 R\u1eadp c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"Ch\u1eef s\u1ed1 Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Th\u1ee9 t\u1ef1 s\u1eafp x\u1ebfp \u0111\u00e3 s\u1eeda \u0111\u1ed5i"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"Ch\u1eef Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Ch\u1eef Ai C\u1eadp b\u00ecnh d\u00e2n"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Ch\u1eef Ai C\u1eadp th\u00e0y tu"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"Ch\u1eef Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"Ti\u1ebfng Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Ch\u1eef t\u01b0\u1ee3ng h\u00ecnh Ai C\u1eadp"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Ch\u1eef Khutsuri Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"Ti\u1ebfng Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"Ch\u1eef Hungary c\u1ed5"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"Ti\u1ebfng Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 Ti\u1ebfng \u0110\u1ee9c Truy\u1ec1n th\u1ed1ng"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"Ti\u1ebfng Kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"Ch\u1eef s\u1ed1 Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"Ch\u1eef Xu-\u0111\u0103ng"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"Ti\u1ebfng Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Ch\u1eef s\u1ed1 Kh\u01a1-me"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"Ch\u1eef Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"Ti\u1ebfng Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Ti\u1ebfng Valencia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"Ch\u1ee9 S\u00edp"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"B\u1ea3ng ch\u1eef c\u00e1i La-tinh Ti\u1ebfng Turk H\u1ee3p nh\u1ea5t"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"Ti\u1ebfng Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Ch\u1eef s\u1ed1 Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Nhi\u1ec1u Ng\u00f4n ng\u1eef"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Ti\u1ebfng Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"H\u1ec7 th\u1ed1ng \u0111o l\u01b0\u1eddng"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"Ti\u1ebfng Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"Ch\u1eef Glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"Ti\u1ebfng Gilbert"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Ph\u00e9p ch\u00ednh t\u1ea3 Chung"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"Ch\u1eef Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"Ti\u1ebfng Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"Ti\u1ebfng Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Ch\u1eef s\u1ed1 Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"Ti\u1ebfng Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"Ti\u1ebfng Ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"Ti\u1ebfng Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"Ti\u1ebfng Karelian"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"Ti\u1ebfng Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"Ti\u1ebfng Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"Ti\u1ebfng Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"Ch\u1eef Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"Ti\u1ebfng Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_vi::LocaleNames_vi() {
}

$Class* LocaleNames_vi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_vi, name, initialize, &_LocaleNames_vi_ClassInfo_, allocate$LocaleNames_vi);
	return class$;
}

$Class* LocaleNames_vi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun