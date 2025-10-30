#include <sun/util/resources/cldr/ext/LocaleNames_pcm.h>

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

$MethodInfo _LocaleNames_pcm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_pcm::*)()>(&LocaleNames_pcm::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_pcm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_pcm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_pcm_MethodInfo_
};

$Object* allocate$LocaleNames_pcm($Class* clazz) {
	return $of($alloc(LocaleNames_pcm));
}

void LocaleNames_pcm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pcm::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_GE, u"J\u1ecd\u0301jia"_s);
	$var($String, metaValue_JP, "Japan"_s);
	$var($String, metaValue_MN, u"M\u1ecdng\u00f3lia"_s);
	$var($String, metaValue_TR, u"T\u1ecd\u0301ki"_s);
	$var($String, metaValue_th, u"Ta\u00ed"_s);
	$var($String, metaValue_Hans, u"\u00cdz\u00ed Chain\u00edz L\u00e1ngwej"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"K\u1ecdl\u00f3ni\u00e1n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Nyank\u00f3l\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"Lu\u00f3 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"S\u00edmbuls"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Filip\u00edn\u00f3 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"M\u1ecd\u0301ng L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u1eb8\u0301m\u00f3ji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"Ch\u00e1kma L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"Luyia L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"B\u00e1saa L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Y\u00farop Sp\u00e1nish"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"T\u1eb9\u0301so"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"As\u1eb9\u0301nsh\u1ecd\u0301n A\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"And\u1ecd\u0301ra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Yuna\u00edt\u1eb9\u0301d \u00c1r\u00e1b \u1eb8\u0301m\u00edrets"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Fl\u1eb9\u0301mish L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afg\u00e1n\u00edstan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u00c1fr\u00edkaans L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ant\u00edgwua & Barb\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u1eb8ti\u00f3pi\u00e1 Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Angw\u00edla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Akan L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Alb\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arm\u1eb9\u0301ni\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amh\u00e1r\u00edk L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Ar\u00e1b\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ang\u00f3la"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Ant\u00e1kt\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Aj\u1eb9nt\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Ar\u00e1b\u00edk L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"P\u00e1t \u1ecdf Jap\u00e1n Ra\u00edt\u00edn S\u00edst\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Am\u1eb9\u0301r\u00edk\u00e1 Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Asam\u00edz L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u1ecc\u0301stria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u1eccstr\u00e9lia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Ar\u00faba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Am\u1eb9\u0301r\u00edka \u00cdnglish"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u1ecc\u0301l\u00e1nd A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Az\u1eb9rbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Az\u1eb9rbaij\u00e1ni L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"B\u1ecd\u0301zni\u00e1 & H\u1eb9z\u1eb9gov\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Barb\u00e9d\u1ecds"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"S\u1eb9bu\u00e1no L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Banglad\u1eb9sh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"B\u1eb9\u0301lj\u1ecdm"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"B\u1eb9lar\u00fasi\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Burk\u00edna F\u00e1so"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"B\u1ecdlg\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"B\u1ecdlg\u00e9ri\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Barein"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Bur\u00fandi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Binin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"S\u00e9nt Bat\u1eb9l\u1eb9\u0301mi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"B\u1eb9mi\u00fada"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"Bamb\u00e1ra L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brun\u1eb9i"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"B\u00e1ngla L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bol\u00edvia"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tib\u1eb9\u0301tan"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Kar\u00edbi\u00e1n N\u1eb9\u0301dalands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Br\u00e1zil"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Br\u1eb9\u0301t\u1ecdn L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bah\u00e1mas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"B\u1ecd\u0301sni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"s\u00f3ga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Buv\u1eb9\u0301 A\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Botsw\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"Mi\u00e1nmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Lao N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"B\u1eb9\u0301larus"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"S\u1eb9\u0301n\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"B\u1eb9liz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"P\u1eb9\u0301shia Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"H\u00edbru N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"K\u00e1n\u00e1da"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"K\u00e1t\u00e1la L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"K\u00f3k\u00f3s A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Mazand\u1eb9r\u00e1n\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"K\u00f3irabor\u00f3 S\u1eb9\u0301nn\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"K\u00f3ng\u00f3 \u2013 Kinsh\u00e1sa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Ch\u1eb9\u0301ch\u1eb9n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"S\u1eb9\u0301ntr\u00e1l \u00c1fr\u00edk\u00e1n Rip\u1ecd\u0301blik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"K\u00f3ngo \u2013 Br\u00e1zavil"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Sw\u00edtsaland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"A\u00edvri Kost"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"K\u00fak A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Ch\u00edl\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kam\u1eb9run"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Cha\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kol\u00f3mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"K\u1ecds\u00edkan L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Klipat\u1ecd\u0301n A\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u00d3dia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"K\u00f3sta R\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ch\u1eb9\u0301k L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Ki\u00fab\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Ch\u1ecd\u0301ch Sl\u00e1vik"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"K\u00e9p V\u1eb9\u0301d"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Kiur\u00e1sao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Kr\u00edsm\u00e1s A\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Sa\u00edpr\u1ecds"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"W\u1eb9lsh"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ch\u1eb9\u0301kia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u1eb8ti\u00f3pi\u00e1 N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"D\u00e9n\u00edsh L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Y\u00far\u00f3p P\u1ecdtiug\u00edz"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"J\u00e1m\u00e1ni"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"J\u00e1m\u00e1n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"Ch\u00edga L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Di\u1eb9\u0301g\u00f3 Garsia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"N\u1ecd\u0301m\u00e1l W\u00e8 To Ar\u00e9nj M\u1ecdn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"D\u1eb9van\u00e1g\u00e1ri N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Jib\u00fati"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"D\u1eb9\u0301nmak"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Bla\u00ednd P\u00edpol Ra\u00edt\u00edn S\u00edst\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"D\u1ecdm\u00edn\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Sm\u1ecd\u0301l Ta\u00edp Arm\u1eb9\u0301ni\u00e1 N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"D\u1ecdm\u00edn\u00edka Rip\u1ecd\u0301blik"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"B\u1eb9\u0301mba L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"L\u00e1t\u00edn Am\u1eb9\u0301r\u00edka Sp\u00e1nish"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alj\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Z\u1ecd\u0301ngka L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"B\u1eb9\u0301na L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Cha\u00edn\u00edz Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"S\u1eb9\u00fata & M\u1eb9\u0301l\u00edla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u1eb8\u0301kwu\u00e1d\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"Z\u00e1rm\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Gr\u00edk N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u1eb8st\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u1eb8\u0301w\u1eb9\u0301 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"N\u1ecd\u0301m\u00e1l La\u00edn Br\u1eb9k Sta\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u00cdjipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"W\u1eb9\u0301st\u00e1n Sah\u00e1ra"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Gr\u00edk L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u00cdnglish"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u1eb8sper\u00e1nto L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Ch\u1eb9\u0301r\u00f3kii L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u1eb8ritr\u1eb9\u0301a"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spen"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Sp\u00e1nish L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u1eb8ti\u00f3pia"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u1eb8st\u00f3ni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Han Wit Bopom\u00f3fo"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Yur\u00f3pi\u00e1n Y\u00fani\u1ecd\u0301n"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"B\u00e1sk L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"H\u00e1ngul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gr\u1eb9\u0301g\u00f3r\u00ed Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Y\u00far\u00f3\u00e9ria"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"T\u00e1ch\u1eb9\u0301lit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gujar\u00e1t\u00ed N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"S\u00f3bi\u00e1 L\u00e1ngwej di \u1ecd\u0301p-\u1ecd\u0301p wan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Chainiz"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"P\u1eb9\u0301shi\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"W\u1eb9\u0301st\u00e1n N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"N\u1ecd\u0301mal"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"F\u00falan\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"F\u00ednland"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"F\u00edn\u00edsh L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"F\u00edji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"F\u1ecd\u0301kl\u00e1nd A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Maikron\u00edshia"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"K\u00e1nt\u1ecdn L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"F\u00e1ro A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"F\u00e1r\u00f3\u00eds L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"T\u00e1mil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frans"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Fr\u1eb9\u0301nch L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"W\u1eb9\u0301st\u00e1n Fr\u00edsi\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gab\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"A\u00edr\u00edsh L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Yun\u00e1\u00edt\u1eb9\u0301d K\u00ednd\u1ecdm"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Naij\u00edri\u00e1 P\u00edjin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Gr\u1eb9n\u00e9da"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Gael\u00edk L\u00e1ngwej \u1ecdf Gael P\u00edpol f\u1ecd Sk\u1ecd\u0301tland"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Fr\u1eb9\u0301nch Gi\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Gu\u1eb9nzi"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"G\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Jibr\u1ecd\u0301lta"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gr\u00ednland"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Gal\u00edsi\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"G\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"G\u00edni"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guadal\u00fap\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ikw\u00e9t\u00f3ri\u00e1l G\u00edni"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"L\u00e1ngwej w\u00e9 n\u00f3b\u1ecd\u0301di sabi"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Gris"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Sa\u00fat J\u1ecd\u0301jia an Sa\u00fat S\u00e1ndw\u00edch A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Gu\u00e1t\u1eb9m\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Gujar\u00e1t\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"M\u00e1nks L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"G\u00edn\u00ed-Bis\u00e1u"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Gay\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"H\u00e1us\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"M\u00edd\u00fal K\u1ecd\u0301dish L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"N\u00f3 L\u00e1ngw\u00e9j K\u1ecd\u0301nt\u1eb9nt"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"H\u00edbru L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"H\u00edndi L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u1ecc\u0301stria J\u00e1m\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"H\u1ecdng K\u1ecdng SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Hi\u00e1d & MakD\u00f3n\u00e1ld A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"H\u1ecdnd\u00faras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kro\u00e9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Kro\u00e9shia L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"Agh\u1eb9\u0301m L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"J\u00e1m\u00e1n Swis"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ha\u00edti"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Ha\u00edt\u00ed Kriol"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"H\u1ecd\u0301ng\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"H\u1ecdng\u00e1ri L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Arm\u1eb9\u0301ni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Intal\u00edngwu\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kener\u00ed A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"J\u00e1mo"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indon\u00edshia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indon\u00edshia L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"T\u00edb\u1eb9t N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ayaland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Igbo L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"Na\u00e1m\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"S\u00edchuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u00cdzr\u1eb9l"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"A\u00edl \u1ecdf Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u00cdndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Br\u00edt\u00edsh \u00cdndi\u00e1n \u00d3shen T\u1eb9\u0301r\u1eb9\u0301tri"_s)
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
			$of(u"A\u00edsland"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"A\u00edsl\u00e1nd L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u00cdt\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u00cdt\u00e1li L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Matim\u00e1tiks Sains"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Ta\u00ed N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"B\u00e1ngl\u00e1 N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Japan L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Mal\u00e9y\u00e1lam"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"J\u1eb9\u0301si"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"M\u00fasl\u00edm Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jama\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"B\u00e1ngla"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"J\u1ecd\u0301dan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Jav\u00e1n\u00edz L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"Gus\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"K\u00e1nn\u00e1d N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Sw\u00edtzaland Ha\u00ed J\u00e1m\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"Ma\u00edt\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u00cdn\u00e1r\u00ed S\u00e1m\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"J\u1ecd\u0301ji\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"B\u00fad\u00edst Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"K\u1eb9\u0301nya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"L\u00e1t\u00edn Am\u1eb9\u0301r\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"K\u1eb9j\u00edstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamb\u00f3dia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Kirib\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"Kik\u00fay\u00fa L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"Masa\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Kaz\u00e1k L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Kal\u00e1l\u00eds\u00fat L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"K\u1ecd\u0301m\u1ecd\u0301ros"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Kma\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Sent Kits & N\u1eb9\u0301vis"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"K\u00e1nn\u00e1da L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"K\u00e1nnad Ra\u00edt\u00edn S\u00edst\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"K\u00e1n\u00e1d\u00e1 Fr\u1eb9nch"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Kori\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"N\u1ecd\u0301t Koria"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Sa\u00fat Koria"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Kashm\u00edr\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"K\u1ecd\u0301d\u00edsh L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Sw\u00edtzal\u00e1nd Fr\u1eb9nch"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Kuw\u00e9t"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"K\u1ecd\u0301nish L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"K\u00e9man A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Ki\u1eb9\u0301g\u00edz L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"S\u00edr\u00edlik"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"L\u00e1t\u00edn L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"L\u1eb9\u0301b\u00e1n\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"L\u1ecd\u0301ks\u00e9mb\u1ecd\u0301g L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sent L\u00fashia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Mal\u00e9y\u00e1lam N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"G\u00e1nda L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"L\u00f3 J\u00e1m\u00e1n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"L\u00edkt\u1eb9\u0301nstain"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sri L\u00e1nka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"T\u00edb\u1eb9t"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"Ling\u00e1l\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Fri\u00fali\u00e1n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"L\u00e1o L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Imp\u1eb9\u0301ri\u00e1l S\u00edst\u1eb9m f\u1ecd M\u1eb9\u0301zh\u1ecd\u0301m\u1eb9nt"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Laib\u1eb9\u0301ria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"L\u1eb9s\u00f3to"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litu\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Litu\u00e9ni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"L\u1ecd\u0301ks\u1eb9\u0301mb\u1ecdg"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"L\u00fab\u00e1-Kat\u00e1ng\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"L\u00e1tvia"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"L\u00e1tvi\u00e1n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"Kat\u00e1k\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"L\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"V\u00fanjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"Langi L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"T\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Mor\u1ecdko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"M\u1ecd\u0301n\u00e1ko"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"M\u1ecdld\u00f3va"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"M\u1ecdntin\u00edgro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Sent M\u00e1tin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madag\u00e1ska"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malag\u00e1s\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"M\u00e1sh\u00e1l A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Y\u00fan\u00edk\u00f3d M\u00e9n W\u00e8 To Ar\u00e9nj Tins W\u1eb9l"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Ma\u00f3r\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"N\u1ecd\u0301t Masid\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Mas\u1eb9d\u00f3ni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"M\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"Mal\u00e9y\u00e1l\u00e1m L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mi\u00e1nma (B\u1ecd\u0301ma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(metaValue_MN)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"M\u1ecdng\u00f3li\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Mak\u00e1o SAR Cha\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"N\u1ecd\u0301t\u00e1n Mari\u00e1na A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Mat\u00ednik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"M\u1ecdrit\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Mar\u00e1t\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"M\u1ecdnts\u1eb9rat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Mal\u00e9 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"M\u1ecd\u0301lta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"M\u1ecd\u0301lt\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"M\u1ecdr\u00edsh\u1ecds"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"M\u1ecd\u0301ldivs"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Mal\u00e1wi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"M\u1eb9\u0301ks\u00edko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Jap\u00e1n Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Mal\u00e9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"B\u1ecd\u0301ma L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Moz\u00e1mbik"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Arm\u1eb9\u0301nia"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"L\u00f3w\u00e1 Sorbi\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Nam\u00edbia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"J\u1eb9\u0301n\u00e1r\u00e1l Sachin"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u00c1fr\u00edka \u00c9ria Bil\u00f3 Sah\u00e1ra"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"N\u1ecdw\u1eb9\u0301ji\u00e1 Bokm\u00e1l L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"H\u00edbr\u00fa Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Ni\u00fa Kal\u1eb9d\u00f3nia"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"N\u1ecd\u0301t\u00e1n Nd\u1eb9b\u1eb9l\u1eb9 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nizh\u1eb9r"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"N\u1eb9p\u00e1l\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"N\u1ecd\u0301f\u1ecdlk A\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Naij\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nikar\u00e1gwua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"N\u1eb9\u0301dalands"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"D\u1ecdch L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"N\u1ecdw\u1eb9\u0301ji\u00e1 Ni\u00fan\u1ecdsk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"N\u1ecd\u0301we"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"N\u1eb9\u0301pal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"N\u00e1uru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ni\u00fa\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"R\u00f3mbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"Ny\u00e1nja"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Ni\u00fa Z\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"Kabail L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"K\u00e1mb\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"M\u1eb9\u0301r\u00fa L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Arm\u1eb9\u0301ni\u00e1 N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"Or\u00f3m\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u00d3di\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Os\u1eb9\u0301tik"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"Mor\u00edsi\u1eb9\u0301n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"P\u00e1n\u00e1ma"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Punj\u00e1bi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"Du\u00e1la L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Br\u00edt\u00edsh \u00cdnglish"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"P\u1eb9\u0301ru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Fr\u1eb9\u0301nch Polin\u00edshia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"P\u00e1pu\u00e1 Ni\u00fa G\u00edni"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"F\u00edl\u00edpins"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pak\u00edstan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"P\u00f3land"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"P\u00f3l\u00e1nd L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u1eb8wondo L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Sent Pi\u1eb9r & M\u00edk\u1eb9l\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"P\u00edtk\u00e9n A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Dangi Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pu\u1eb9\u0301rto R\u00edk\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"P\u00e1l\u1eb9\u0301sta\u00edn \u00c9ria-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"P\u00e1shto"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"P\u1ecd\u0301t\u00fagal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"P\u1ecdtiugiz"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Ar\u00e9nj Tins W\u1eb9l"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Sm\u1ecd\u0301l Ta\u00edp Gr\u00edk N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"P\u00e1r\u00e1gwue"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Braz\u00edl P\u1ecdtiug\u00edz"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"Mak\u00faw\u00e1-M\u00edt\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"H\u00edbr\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Ha\u00fa To Ar\u00e9nj M\u1ecdn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kata"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"M\u1eb9ta\u2019 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 \u00c1wa S\u00edst\u1eb9m (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 \u00c1wa S\u00edst\u1eb9m (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Mi\u00e1nma N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Rim\u00f3t P\u00e1t \u1ecdf Osh\u1eb9\u0301nia"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"K\u1eb9chu\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"B\u00f3do L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"Mak\u1ecd\u0301nd\u1eb9\u0301 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"W\u1ecdld"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u1eb8ti\u00f3pik"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u00c1fr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"N\u1ecd\u0301t Am\u1eb9\u0301r\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9y\u00fani\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 \u00c1wa S\u00edst\u1eb9m (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Sa\u00fat Am\u1eb9\u0301r\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 \u00c1wa S\u00edst\u1eb9m (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Osh\u1eb9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rom\u00e1nsh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"R\u00fandi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"M\u1ecdn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rum\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rom\u00e1ni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"S\u1eb9\u0301bia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u00d3dia N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Chain\u00edz N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"R\u1ecd\u0301shia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"R\u1ecdshi\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ruw\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Kinyarw\u00e1nda L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"K\u00e1b\u00fav\u1eb9rdi\u00e1nu L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u1eccstr\u00e9li\u00e1 \u00cdnglish"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Sa\u00fad\u00ed Ar\u00e9bia"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"S\u00e1nskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"S\u00f3l\u00f3m\u1ecd\u0301n A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawak"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"W\u1eb9\u0301st\u00e1n \u00c1fr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"S\u1eb9\u0301ch\u1eb9ls"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"S\u00ednd\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"M\u00edd\u00fal Am\u1eb9\u0301r\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Sw\u00edd\u1eb9n"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"N\u1ecd\u0301t\u00e1n S\u00e1m\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u00cdst\u00e1n \u00c1fr\u00edk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"N\u1ecd\u0301t\u00e1n \u00c1fr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singap\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"s\u00e0ngo"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sent H\u1eb9l\u1eb9\u0301na"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"F\u00edksd La\u00edn Br\u1eb9k Sta\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"M\u00edd\u00fal \u00c1fr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slov\u1eb9\u0301nia"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"S\u00ednhala"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Sa\u00fat\u00e1n \u00c1fr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Sv\u00e1lbad & J\u00e9n Mey\u1eb9n"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Am\u1eb9\u0301r\u00edkas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slov\u00e9kia"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Sl\u00f3vak"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Si\u1eb9\u0301ra L\u00edon"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Slov\u1eb9\u0301ni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Mar\u00edno"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Sam\u00f3\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"S\u1eb9\u0301n\u1eb9\u0301gal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Sh\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"S\u1ecdm\u00e1lia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"S\u1ecdm\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Ar\u00e1b\u00edk N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Alb\u00e9ni\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"N\u1ecd\u0301m\u00e1l T\u00e1m\u00edl N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"S\u00far\u00ednam"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"S\u1eb9rbi\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sa\u00fat Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Ak\u00e1unt To T\u00e9k Ar\u00e9nj M\u1ecdn\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao T\u00f3m\u00e9 & Pr\u00edns\u00edp\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Sa\u00fat\u00e1n S\u00f3to"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"S\u1ecd\u0301ndaniz"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"El S\u00e1lv\u00e1d\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Suw\u00edd\u1eb9\u0301n L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Swah\u00edli"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Sint M\u00e1tin"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"S\u00edria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"N\u1ecd\u0301m\u00e1l Chain\u00edz M\u1ecdn\u00ed N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u1eb8swat\u00edni"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Tr\u00edst\u00e1n da K\u00fana"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"t\u00e0mil"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"Asu L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"US S\u00edst\u1eb9m f\u1ecd M\u1eb9\u0301zh\u1ecd\u0301m\u1eb9nt"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"N\u1ecd\u0301t\u00e1n Am\u1eb9\u0301r\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u00c9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"T\u1ecdks an Ka\u00edk\u1ecd\u0301s A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Yangb\u1eb9n"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"M\u00edd\u00fal \u00c9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"T\u1eb9lugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"W\u1eb9\u0301st\u00e1n \u00c9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Fr\u1eb9\u0301nch Sa\u00fat\u00e1n T\u1eb9\u0301r\u1eb9\u0301tris"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"T\u00f3go"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"T\u00e1jik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Ta\u00edland"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Tigr\u00edny\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taj\u00edkstan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"K\u00e1n\u00e1da \u00cdnglish"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Kar\u00edbi\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"T\u00f3k\u1eb9\u0301lau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"T\u1ecd\u0301km\u1eb9n"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u00cdst T\u00edm\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"T\u1ecdkm\u1eb9\u0301n\u00edstan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tun\u00edshia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"T\u00f3nga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"T\u00f3ngan"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"J\u00f3la-F\u00f3nyi L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Jap\u00e1n N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Tr\u00edn\u00eddad & Tob\u00e1go"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Tat\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tuv\u00e1lu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Ast\u00fari\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanz\u00e1nia"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"Kwasi\u00f3 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Ra\u00edt\u00edn S\u00edst\u1eb9m W\u00e9 N\u00f3b\u1ecd\u0301di Sab\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Y\u00farop"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Yukrein"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u00cdst\u00e1n \u00c9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u00cdst\u00e1n Y\u00farop"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"N\u1ecd\u0301t\u00e1n Y\u00farop"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Sa\u00fat\u00e1n \u00c9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"W\u1eb9\u0301st\u00e1n Y\u00farop"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sa\u00fat\u00edst \u00c9shi\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Yug\u00e1nda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Wi\u00fag\u1ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Koria"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"J\u1eb9\u0301n\u00e1ral"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Sa\u00fat\u00e1n Y\u00farop"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Yukr\u00e9nia"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Sinh\u00e1la"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"U.S. Fa\u00e1 Fa\u00e1 A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Yuna\u00edt\u1eb9d N\u00e9sh\u1ecdns"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u00dard\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Yuna\u00edt\u1eb9\u0301d Stets"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawaii L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Y\u00farugwue"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Pr\u00fashia"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzb\u1eb9\u0301kistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u00dazb\u1eb9k"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"M\u00edd\u00fal Atl\u00e1s T\u00e1maz\u00edgt L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Ngi\u1eb9\u0301mb\u1ecdn L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"V\u00e1t\u00edk\u00e1n S\u00edti"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sent V\u00edns\u1eb9nt & Gr\u1eb9\u0301n\u00e1dians"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"V\u1eb9n\u1eb9zu\u1eb9\u0301la"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Rip\u1ecd\u0301bl\u00edk \u1ecdf Cha\u00edn\u00e1 Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Br\u00edt\u00edsh V\u00e1j\u00edn A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"U.S. V\u00e1j\u00edn A\u00edlands"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vi\u1eb9\u0301tn\u00e1m L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Koyra Ch\u00edn\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Aw\u00e1 Sa\u00edkul (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vi\u1eb9\u0301tnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"V\u00f3lapiuk"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanu\u00e1tu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u1eccstral\u00e9shia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"M\u1eb9lan\u1eb9\u00edshia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"W\u1ecd\u0301lis & Fiut\u00fana"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Gr\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Maikron\u00edshia R\u00edj\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"Ng\u00f3mb\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Lak\u00f3t\u00e1 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"W\u00f3lof"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"W\u1ecd\u0301lsa"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"G\u1eb9\u0301n\u00e1r\u00e1l Mor\u00f3k\u00f3 T\u00e1maz\u00edgt L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"G\u1eb9\u0301n\u00e1r\u00e1l Ar\u00e1b\u00edk L\u00e1ngwej f\u1ecd d\u00eds taim"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Sam\u00f3a"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_MN)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"To y\u00faz atif\u00edsh\u00e1l v\u1ecdis w\u1eb9\u0301n yu de t\u1ecdk"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Man\u00edpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"At\u00edf\u00edsh\u00e1l T\u00fa-W\u00e9 Dair\u1eb9\u0301ksh\u1ecdn"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polin\u00edshi\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"L\u00e1tin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u00cdz\u00ed Chain\u00edz N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"N\u1ecd\u0301m\u00e1l Chain\u00edz N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"K\u1ecd\u0301sa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"K\u00f3s\u00f3vo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Sm\u1ecd\u0301l Ta\u00edp R\u00f3m\u00e1n N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Gujar\u00e1ti"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"W\u00e9t\u00edn D\u1eb9m N\u00f3 Rait"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"K\u00e1k\u00f3 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Y\u1eb9\u0301m\u1eb9n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"N\u1ecd\u0301m\u00e1l W\u00e8 To Ar\u00e9nj Tins W\u1eb9l"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Y\u00eddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Yorub\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"M\u1eb9\u0301ksiko Sp\u00e1nish"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Mey\u1ecdt"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"Va\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Sa\u00fat \u00c1fr\u00edka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"L\u00faz La\u00edn Br\u1eb9k Sta\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"K\u00e1l\u1eb9\u0301nj\u00edn L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"D\u1eb9van\u00e1g\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Mandar\u00edn Chain\u00edz L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"J\u1ecd\u0301ji\u00e1 N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Hiag\u00e1na"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Z\u00e1mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Bopom\u00f3fo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"La\u00edn Br\u1eb9k Sta\u00edl"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Z\u00falu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimb\u00e1bw\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"R\u00edj\u1ecdn W\u00e9 N\u00f3b\u1ecd\u0301di Sab\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"M\u1eb9\u0301tr\u00edk S\u00edst\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 Kal\u1eb9\u0301nda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"T\u1eb9\u0301l\u00fagu N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Jap\u00e1n M\u1ecdn\u00ed N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u1eb8mbu L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"Mach\u00e1m\u1eb9\u0301 L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u00cdz\u00ed Chain\u00edz M\u1ecdn\u00ed N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"K\u00f3nk\u00e9n\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u1eb8str\u00e1 Ar\u00e1b\u00edk N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"N\u00faa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"F\u00fal-Waid N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"Ta\u00edta"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"N\u1ecd\u0301t\u00e1n L\u00far\u00ed L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Trad\u00edsh\u1ecd\u0301n\u00e1l Chain\u00edz L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Kmai N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"Mund\u00e1ng L\u00e1ngwej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"G\u00farmukhi N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"Kem\u1eb9\u1eb9"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Pl\u1eb9\u0301nt\u00ed L\u00e1ngwej-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"S\u00edst\u1eb9m f\u1ecd M\u1eb9\u0301zh\u1ecd\u0301m\u1eb9nt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"R\u00f3m\u00e1n N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Sakh\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"T\u00e1m\u00edl N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"Samb\u00faru"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"D\u00e1ri"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"S\u00e1nt\u00e1li"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"N\u1ecd\u0301mba-d\u1eb9m"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"G\u00farmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"T\u1eb9\u0301l\u00fagu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"Bafi\u00e1 L\u00e1ngwej"_s)
		})
	}));
	return data;
}

LocaleNames_pcm::LocaleNames_pcm() {
}

$Class* LocaleNames_pcm::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pcm, name, initialize, &_LocaleNames_pcm_ClassInfo_, allocate$LocaleNames_pcm);
	return class$;
}

$Class* LocaleNames_pcm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun