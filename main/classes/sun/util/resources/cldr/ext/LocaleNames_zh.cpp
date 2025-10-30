#include <sun/util/resources/cldr/ext/LocaleNames_zh.h>

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

$MethodInfo _LocaleNames_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_zh::*)()>(&LocaleNames_zh::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_zh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_zh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_MethodInfo_
};

$Object* allocate$LocaleNames_zh($Class* clazz) {
	return $of($alloc(LocaleNames_zh));
}

void LocaleNames_zh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_zh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_key_nu, u"\u6570\u5b57"_s);
	$var($String, metaValue_type_nu_gong, u"\u9a6c\u8428\u62c9\u59c6\u5188\u5fb7\u6570\u5b57"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u79d1\u9686\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u6b27\u7518\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u7c73\u5170\u5fb7\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\u963f\u707f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u9a6c\u5c14\u74e6\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"\u5170\u7eb3\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u5854\u683c\u73ed\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u8868\u60c5\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Gniva/Njiva \u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u67e5\u514b\u739b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u53e4\u57c3\u53ca\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u62c9\u8d3e\u65af\u5766\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u516b\u601d\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u6cf0\u59c6\u5948\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of(u"\u6885\u5fb7\u6cd5\u4f0a\u5fb7\u6797\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"\u5e93\u8fbe\u74e6\u8fea\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u7279\u7d22\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u62c9\u5e15\u52aa\u4f0a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u7279\u4f26\u8bfa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u963f\u68ee\u677e\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u62c9\u7f57\u6c64\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u5fb7\u987f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of(u"\u4f5b\u5f97\u89d2\u8bed\u5411\u98ce\u65b9\u8a00\u7ec4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"\u50e7\u4f3d\u7f57\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u5b89\u9053\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u963f\u62c9\u4f2f\u8054\u5408\u914b\u957f\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u5f17\u62c9\u8292\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u963f\u5bcc\u6c57"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u5b89\u63d0\u74dc\u548c\u5df4\u5e03\u8fbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"\u8c2c\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9a\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u5b89\u572d\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\u65f6\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u963f\u5c14\u5df4\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u4e9a\u7f8e\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\u817e\u683c\u74e6\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u5b89\u54e5\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u5357\u6781\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u963f\u6839\u5ef7"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u5e15\u63d0\u4e9a\u6587\u7891\u94ed\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u7f8e\u5c5e\u8428\u6469\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u5965\u5730\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u6fb3\u5927\u5229\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u963f\u9c81\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u7f8e\u56fd\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u5965\u5170\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"\u59c6\u8036\u5185\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u963f\u585e\u62dc\u7586"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"\u4e1c\u4e9a\u7f8e\u5c3c\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u6ce2\u65af\u5c3c\u4e9a\u548c\u9ed1\u585e\u54e5\u7ef4\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u5df4\u5df4\u591a\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u5bbf\u52a1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u5b5f\u52a0\u62c9\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u5e93\u6885\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u6bd4\u5229\u65f6"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u4e2d\u53e4\u9ad8\u5730\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of(u"\u53e4\u7c9f\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u5e03\u57fa\u7eb3\u6cd5\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u5df4\u6797"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u5e03\u9686\u8fea"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u8d1d\u5b81"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u5723\u5df4\u6cf0\u52d2\u7c73"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u767e\u6155\u5927"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u5e93\u7279\u5948\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u5384\u5c14\u5179\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u6587\u83b1"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u73bb\u5229\u7ef4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u8377\u5c5e\u52a0\u52d2\u6bd4\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u5df4\u897f"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u5df4\u54c8\u9a6c"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u7d22\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u4e0d\u4e39"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u5e03\u97e6\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u535a\u8328\u74e6\u7eb3"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u767d\u4fc4\u7f57\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u4f2f\u5229\u5179"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u53ef\u89c1\u8bed\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u6ce2\u65af\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of(u"\u514b\u96f7\u6851\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u5e0c\u4f2f\u6765\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u52a0\u62ff\u5927"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of(u"\u5951\u4e39\u5c0f\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u79d1\u79d1\u65af\uff08\u57fa\u6797\uff09\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u9a6c\u8d5e\u5fb7\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u521a\u679c\uff08\u91d1\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u4e2d\u975e\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u521a\u679c\uff08\u5e03\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u745e\u58eb"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u79d1\u7279\u8fea\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u5e93\u514b\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u667a\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u51ef\u63d0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u5580\u9ea6\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u4e2d\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u54e5\u4f26\u6bd4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u514b\u5229\u73c0\u987f\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u54e5\u65af\u8fbe\u9ece\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u53e4\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u4f5b\u5f97\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u5e93\u62c9\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u5723\u8bde\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u585e\u6d66\u8def\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"\u5df4\u5398\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u6377\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u827e\u5361\u6731\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of(u"\u5305\u91d1\u8c6a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"\u53e4\u5178\u6c83\u62c9\u666e\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of(u"\u7c9f\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u5fb7\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u53e4\u9ad8\u5730\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u4e9a\u9f50\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u5947\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u8fea\u6208\u52a0\u897f\u4e9a\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u68b5\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u5409\u5e03\u63d0"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u4e39\u9ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u963f\u4e54\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u5188\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u5e03\u83b1\u53f6\u76f2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u5a46\u7f57\u7c73\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u591a\u7c73\u5c3c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u4e9a\u7f8e\u5c3c\u4e9a\u5c0f\u5199\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u591a\u7c73\u5c3c\u52a0\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u54e5\u4f26\u6253\u6d1b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u54e5\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u66fc\u5c3c\u666e\u5c14\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u7956\u5c3c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u63d0\u683c\u96f7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"\u6cf0\u514b\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u963f\u5c14\u53ca\u5229\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u90a6\u963f\u897f\u5357\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"\u534a\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u5df4\u62c9\u7ef4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u4f11\u8fbe\u53ca\u6885\u5229\u5229\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u5947\u5e03\u67e5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u90a6\u677f\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u5384\u74dc\u591a\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u5e15\u76ae\u963f\u95e8\u6258\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u963f\u5f53\u6885\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u7231\u6c99\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u8482\u592b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u57c3\u53ca"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u897f\u6492\u54c8\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u5bdf\u5408\u53f0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u5e15\u52b3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u695a\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u5947\u52aa\u514b\u6df7\u5408\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u9a6c\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u5947\u4f69\u7ef4\u5b89\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u4e54\u514b\u6258\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"\u6570\u5b66\u7c97\u4f53\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u5207\u7f57\u57fa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u5384\u7acb\u7279\u91cc\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u897f\u73ed\u7259"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u6b27\u76df"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u57c3\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u516c\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u6b27\u5143\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u590f\u5ef6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u53e4\u5409\u62c9\u7279\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u5370\u5ea6\u6cb3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u963f\u8fea\u683c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u82ac\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u6590\u6d4e"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u798f\u514b\u5170\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u5bc6\u514b\u7f57\u5c3c\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"\u8bed\u8a00\u533a\u57df\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u6cd5\u7f57\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u6cf0\u7c73\u5c14\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u6cd5\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"\u514b\u4f69\u5217\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of(u"\u7b80\u5355\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"\u6258\u514b\u52b3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u683c\u5217\u535a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"\u8fbe\u91d1\u79d1\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u5370\u5ea6\u56fd\u5b9a\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u53e4\u5e0c\u814a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u52a0\u84ec"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u6c83\u63d0\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u82f1\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u5c3c\u65e5\u5229\u4e9a\u76ae\u94a6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u683c\u6797\u7eb3\u8fbe"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u683c\u9c81\u5409\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u6cd5\u5c5e\u572d\u4e9a\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u6839\u897f\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u52a0\u7eb3"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u6cf0\u4e50\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u76f4\u5e03\u7f57\u9640"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u963f\u5f17\u91cc\u5e0c\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u683c\u9675\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u4e2d\u53e4\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u5188\u6bd4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u51e0\u5185\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u74dc\u5fb7\u7f57\u666e"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u8d64\u9053\u51e0\u5185\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u5e0c\u814a"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u5357\u4e54\u6cbb\u4e9a\u548c\u5357\u6851\u5a01\u5947\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u5371\u5730\u9a6c\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u5173\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"\u6570\u5b66\u7b49\u5bbd\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u51e0\u5185\u4e9a\u6bd4\u7ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u7279\u6797\u5409\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u514b\u6797\u8d21\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u65b0\u50a3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u572d\u4e9a\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u4e2d\u5e93\u5c14\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u65e0\u8bed\u8a00\u5185\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"\u5973\u771f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of(u"\u7ef4\u74e6\u9c81\u666e\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u5965\u5730\u5229\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u4e2d\u56fd\u9999\u6e2f\u7279\u522b\u884c\u653f\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"\u74e6\u4f9d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u8d6b\u5fb7\u5c9b\u548c\u9ea6\u514b\u5510\u7eb3\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u6d2a\u90fd\u62c9\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u514b\u7f57\u5730\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u4e9a\u7f55\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u745e\u58eb\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"\u4f0a\u65af\u5170\u5386\uff08\u4e4c\u59c6\u5e93\u62c9\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u6d77\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u5308\u7259\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\u5854\u9a6c\u5947\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u52a0\u7eb3\u5229\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"\u95fd\u5357\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u5370\u5ea6\u5c3c\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u53e4\u6ce2\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of(u"\u963f\u5fb7\u62c9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"\u514b\u8036\u5b57\u6bcd\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u7231\u5c14\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u90a3\u4e0d\u52d2\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"Ndyuka \u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u7eb3\u9a6c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"\u7d20\u62c9\u50e7\u5e73\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u624e\u624e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"\u5510\u53e4\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u4ee5\u8272\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"\u7eb3\u5df4\u6cf0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u9a6c\u6069\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u5370\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"\u6b27\u6d32\u6392\u5e8f\u89c4\u5219"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u82f1\u5c5e\u5370\u5ea6\u6d0b\u9886\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u4f0a\u62c9\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u4f0a\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u51b0\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u610f\u5927\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u6570\u5b66\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u6cf0\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"\u7535\u8111"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u5b5f\u52a0\u62c9\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"\u65af\u62c9\u592b\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u6cfd\u897f\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u4f0a\u65af\u5170\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u7259\u4e70\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u5b5f\u52a0\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of(u"\u585e\u5c14\u7ef4\u4e9a\u8bed\u4f0a\u5361\u7ef4\u4e9a\u53d1\u97f3"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u7ea6\u65e6"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u65e5\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"1606 \u5e74\u524d\u4e2d\u540e\u671f\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u963f\u4f0a\u52aa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of(u"\u79d1\u5947\u97e6\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"\u95e8\u8fea\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u53e4\u897f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u5c3c\u4e9a\u8428\u6c64\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u5361\u7eb3\u8fbe\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u514b\u8036\u674e\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"\u6089\u6619"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u745e\u58eb\u9ad8\u5730\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"\u8bed\u97f3\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u4f5b\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u80af\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u62c9\u4e01\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u5409\u5c14\u5409\u65af\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u67ec\u57d4\u5be8"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u57fa\u91cc\u5df4\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u79d1\u6469\u7f57"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u5723\u57fa\u8328\u548c\u5c3c\u7ef4\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u5361\u7eb3\u8fbe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u9057\u4f20\u5b66\u672f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u52a0\u62ff\u5927\u6cd5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u671d\u9c9c"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u97e9\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u6ce2\u62c9\u5fb7\u97f3\u6807\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u745e\u58eb\u6cd5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u79d1\u5a01\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u6258\u514b\u76ae\u8f9b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u5f00\u66fc\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u54c8\u8428\u514b\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u897f\u91cc\u5c14\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u8001\u631d"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u9ece\u5df4\u5ae9"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u5723\u5362\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u8153\u5c3c\u57fa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u897f\u91cc\u5c14\u6587\u5b57\uff08\u53e4\u6559\u4f1a\u65af\u62c9\u592b\u6587\u7684\u53d8\u4f53\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u54e5\u5a01\u8fc5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"\u4fc4\u6587\u62fc\u5b57\uff081918\u5e74\u8d77\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u4f4e\u5730\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u5217\u652f\u6566\u58eb\u767b"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u65af\u91cc\u5170\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u963f\u5361\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u79d1\u666e\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of(u"\u5c3c\u4e9a\u80af\u84b2\u4e18\u82d7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u5229\u6bd4\u91cc\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u83b1\u7d22\u6258"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\u5df4\u5217\u7ef4\u6587\uff08\u4e66\u4f53\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u7acb\u9676\u5b9b"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u5362\u68ee\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u62c9\u8131\u7ef4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u7247\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"\u7d22\u6717\u6851\u670b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u5229\u6bd4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u62c9\u8fea\u8bfa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u6e29\u65e7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"\u4f20\u7edf\u68b5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u5370\u5ea6-\u96c5\u5229\u5b89\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"\u9ed8\u54c8\u91d1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u6717\u5409\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u5854\u5b89\u90a3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u6469\u6d1b\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u6469\u7eb3\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u6469\u5c14\u591a\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"\u5973\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u9ed1\u5c71"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u6cd5\u5c5e\u5723\u9a6c\u4e01"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u5170\u5df4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u9a6c\u8fbe\u52a0\u65af\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u9a6c\u7ecd\u5c14\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u963f\u7559\u7533\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u6cf0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"\u74e6\u4f0a\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u5317\u9a6c\u5176\u987f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"\u6570\u5b66\u7a7a\u5fc3\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u9a6c\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u7f05\u7538"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u8499\u53e4"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u5c3c\u74e6\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u4e2d\u56fd\u6fb3\u95e8\u7279\u522b\u884c\u653f\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u5317\u9a6c\u91cc\u4e9a\u7eb3\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u9a6c\u63d0\u5c3c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u6bdb\u91cc\u5854\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u8499\u7279\u585e\u62c9\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of(u"\u82b1\u62c9\u5b50\u6a21\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u9a6c\u8033\u4ed6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"\u8054\u5408\u56fd\u5730\u540d\u4e13\u5bb6\u7ec4 (UNGEGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u6bdb\u91cc\u6c42\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u5357\u963f\u5c14\u6cf0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u9a6c\u5c14\u4ee3\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u9a6c\u62c9\u7ef4"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u58a8\u897f\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u548c\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u9a6c\u6765\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u83ab\u6851\u6bd4\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\u5df4\u5217\u7ef4\u6587\u7891\u94ed\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u7eb3\u7c73\u6bd4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of(u"\u963f\u5170\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u6492\u54c8\u62c9\u4ee5\u5357\u975e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u5e0c\u4f2f\u6765\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u5b57\u5178\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"WG \u5a01\u6c0f\u62fc\u97f3\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"\u7edf\u4e00\u548c\u4fee\u8ba2\u7684\u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u5c3c\u65e5\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u8bfa\u798f\u514b\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u5c3c\u65e5\u5229\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u8d5b\u5fb7\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u5df4\u5217\u7ef4\u6587\uff08\u5723\u8bd7\u4f53\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u5c3c\u52a0\u62c9\u74dc"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\u6768\u677e\u5f55\u82d7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u8377\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u632a\u5a01"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u5c3c\u6cca\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u7459\u9c81"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u7ebd\u57c3"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\u8153\u5c3c\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u5170\u535a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u94a6\u897f\u5b89\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u65b0\u897f\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"\u9ea6\u7f57\u57c3\u8349\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"1945\u5e74\u8461\u8404\u7259-\u5df4\u897f\u6b63\u5199\u6cd5\u534f\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u5409\u666e\u8d5b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u9ea6\u82e5\u63d0\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u514b\u91cc\u7c73\u4e9a\u571f\u8033\u5176\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u53e4\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of(u"\u683c\u7c73\u65af\u7279\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u963f\u66fc"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"\u4fc4\u6587\u62fc\u5b57\uff081708\u5e74\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u6602\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u585e\u820c\u5c14\u514b\u91cc\u5965\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of(u"\u5c3c\u4e9a\u80af\u84b2\u4e18\u82d7\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"\u53e4\u6ce2\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"\u6768\u677e\u5f55\u82d7\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u5df4\u62ff\u9a6c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u4f0a\u65af\u5170\u5e0c\u5409\u6765\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u5361\u8212\u6bd4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u82f1\u56fd\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u79d8\u9c81"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u6cd5\u5c5e\u6ce2\u5229\u5c3c\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u5df4\u5e03\u4e9a\u65b0\u51e0\u5185\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u83f2\u5f8b\u5bbe"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u5df4\u57fa\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of(u"\u5c3c\u65af\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u6ce2\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u57c3\u7fc1\u591a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u5723\u76ae\u57c3\u5c14\u548c\u5bc6\u514b\u9686\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u76ae\u7279\u51ef\u6069\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u6ce2\u591a\u9ece\u5404"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u5df4\u52d2\u65af\u5766\u9886\u571f"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u5df4\u5398\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u8461\u8404\u7259"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u5e15\u52b3"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u5c3c\u4e9a\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u5e0c\u814a\u5c0f\u5199\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u5df4\u62c9\u572d"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u901a\u5e03\u5361\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u5e0c\u4f2f\u6765\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u5361\u5854\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u82cf\u683c\u5170\u6807\u51c6\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u7ebd\u57c3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u5927\u6d0b\u6d32\u8fb9\u8fdc\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u5217\u5179\u91d1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"\u963f\u970d\u59c6\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA \u97f3\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"\u6cf0\u514b\u91cc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u56fe\u74e6\u5362\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u8d8a\u5357\u50a3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of(u"\u4f5b\u5f97\u89d2\u8bed\u80cc\u98ce\u65b9\u8a00\u7ec4"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of(u"\u671b\u52a0\u9521\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u4e16\u754c"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u975e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u5317\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u7559\u5c3c\u6c6a"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u5357\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u903b\u8f91\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u62c9\u8ba9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u5927\u6d0b\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of(u"\u57c3\u5229\u8fc8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of(u"\u745e\u58eb\u82cf\u745f\u74e6\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u7f57\u9a6c\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u585e\u5c14\u7ef4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"\u8c2c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u4fc4\u7f57\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u5362\u65fa\u8fbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"\u65b0\u50a3\u4ec2\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"\u6885\u7279\u5c14\u79d1\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\u6469\u5c3c\u6559\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"\u4e4c\u52a0\u91cc\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u5361\u7f57\u987b\u63d0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u6c99\u7279\u963f\u62c9\u4f2f"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u6ce2\u7eb3\u4f69\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u963f\u62c9\u7c73\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u6240\u7f57\u95e8\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u5317\u6851\u6d77\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u897f\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u585e\u820c\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u82cf\u4e39"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u4e2d\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u745e\u5178"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u4e1c\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u963f\u62c9\u7c73\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"\u6d1b\u9a6c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u5317\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u65b0\u52a0\u5761"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u5723\u8d6b\u52d2\u62ff"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u4e25\u683c\u6362\u884c\u7b26\u6837\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u4e2d\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u65af\u6d1b\u6587\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"\u7f05\u7538\u6cf0\u5170\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u5357\u90e8\u975e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u65af\u74e6\u5c14\u5df4\u548c\u626c\u9a6c\u5ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u65af\u6d1b\u4f10\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"\u5df4\u59c6\u7a46\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"\u6c83\u83b1\u827e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u585e\u62c9\u5229\u6602"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u5723\u9a6c\u529b\u8bfa"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u585e\u5185\u52a0\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u7d22\u9a6c\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u9a6c\u666e\u5207\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u963f\u62c9\u5e15\u970d\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u4f20\u7edf\u6cf0\u7c73\u5c14\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u82cf\u91cc\u5357"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u5357\u82cf\u4e39"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u5723\u591a\u7f8e\u548c\u666e\u6797\u897f\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u8428\u5c14\u74e6\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u7eb3\u5409\u8fea\u963f\u62c9\u4f2f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u8377\u5c5e\u5723\u9a6c\u4e01"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u53d9\u5229\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u7476\u65cf\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u65af\u5a01\u58eb\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u963f\u62c9\u74e6\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u96c5\u6d66\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u7279\u91cc\u65af\u5766-\u8fbe\u5e93\u5c3c\u4e9a\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u5e15\u96f7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u7f8e\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u7f8e\u6d32\u5317\u90e8"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u7279\u514b\u65af\u548c\u51ef\u79d1\u65af\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u6d0b\u535e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u4e4d\u5f97"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u6cd5\u5c5e\u5357\u90e8\u9886\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u591a\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u6cf0\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u5854\u5409\u514b\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u52a0\u52d2\u6bd4\u5730\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u6258\u514b\u52b3"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u4e1c\u5e1d\u6c76"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u8036\u59c6\u5df4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"\u6309\u97e9\u6587\u5b57\u5f00\u9996\u8f85\u97f3\u6765\u641c\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u571f\u5e93\u66fc\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"\u5e03\u6069\u7279\u6797\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u7a81\u5c3c\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u6c64\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"\u73b0\u4ee3\u6c83\u62c9\u666e\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u571f\u8033\u5176"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u7279\u7acb\u5c3c\u8fbe\u548c\u591a\u5df4\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u56fe\u74e6\u5362"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u53f0\u6e7e"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u963f\u65af\u56fe\u91cc\u4e9a\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u9102\u5c14\u6d51\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u5766\u6851\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u5938\u897f\u5965\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u672a\u77e5\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"\u4fe1\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u4e4c\u514b\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u963f\u7f57\u9a6c\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u4e1c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u56fe\u74e6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u521a\u679c\u65af\u74e6\u5e0c\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u5357\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u6d77\u8fbe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u4e1c\u5357\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u4e4c\u5e72\u8fbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"\u5ba2\u5bb6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u62fc\u97f3\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u5357\u6b27"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u50e7\u4f3d\u7f57\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u7f8e\u56fd\u672c\u571f\u5916\u5c0f\u5c9b\u5c7f"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u8054\u5408\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u7f8e\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u590f\u5a01\u5937\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"\u5b66\u672f"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of(u"\u4f0a\u4e07\u4e54\u592b\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u7b80\u4f53\u4e2d\u6587\u6392\u5e8f - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u4e4c\u62c9\u572d"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u666e\u9c81\u58eb\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u4e4c\u5179\u522b\u514b\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u5854\u9a6c\u9f50\u683c\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u7b14\u753b\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u6069\u7518\u6f8e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u68b5\u8482\u5188"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u53e4\u666e\u7f57\u6587\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u5723\u6587\u68ee\u7279\u548c\u683c\u6797\u7eb3\u4e01\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of(u"\u8d6b\u897f\u65af\u7279\u83ab\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u59d4\u5185\u745e\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u82f1\u5c5e\u7ef4\u5c14\u4eac\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u7f8e\u5c5e\u7ef4\u5c14\u4eac\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of(u"\u5229\u59c6\u8d5e\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of(u"\u7d22\u6c38\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u8d8a\u5357"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u74e6\u52aa\u963f\u56fe"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of(u"\u5927\u739b\u5c14\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u8bfa\u76d6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u7f57\u74e6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u53e4\u8bfa\u5c14\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u6fb3\u5927\u62c9\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"\u897f\u4e9a\u7f8e\u5c3c\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u7f8e\u62c9\u5c3c\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u74e6\u5229\u65af\u548c\u5bcc\u56fe\u7eb3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u4f20\u7edf\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u5bc6\u514b\u7f57\u5c3c\u897f\u4e9a\u5730\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u6069\u826e\u5df4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u62c9\u79d1\u5854\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"\u91d1\u878d\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"\u8d6b\u4f2f\u6069\u7f57\u9a6c\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"\u57fa\u4e8e\u517c\u5bb9\u6027\u6cbf\u7528\u65e2\u5f80\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u74e6\u5c14\u745f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u8428\u6469\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"\u5df4\u8428\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"\u66fc\u5c3c\u666e\u5c14\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u74e6\u62c9\u83ab\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u74e6\u7ecd\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u4f2a\u5730\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u74e6\u745e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u4f2a\u53cc\u5411\u8bed\u8a00\u5730\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u963f\u74e6\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u73bb\u5229\u5c3c\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"\u6807\u51c6\u6b63\u5199\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u79d1\u7d22\u6c83"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"\u5a46\u7f57\u7c73\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\u53e4\u5409\u62c9\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u975e\u4e66\u9762\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u6851\u5854\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u74e6\u5c14\u76ae\u745e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u5df4\u5854\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\u5e03\u5217\u65af\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u4e5f\u95e8"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u897f\u975e\u4e66\u9762\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u6807\u51c6\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of(u"\u672d\u90a3\u5df4\u672d\u5c14\u65b9\u5757\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u82b3\u683c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of(u"\u963f\u5c3c\u8bedBalanka\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"\u96f7\u897f\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"\u745e\u58eb\u82cf\u5e0c\u74e6\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u82b3\u8482\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u4e66\u5199\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u9a6c\u7ea6\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"\u5360\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of(u"\u7ebd\u82ac\u5170\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u5357\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"\u82cf\u4e39\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u5bbd\u677e\u6362\u884c\u7b26\u6837\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u5929\u57ce\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u683c\u9c81\u5409\u4e9a\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"\u6ce8\u97f3\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u5e73\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u8d5e\u6bd4\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"\u62fc\u97f3\u7f57\u9a6c\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u6d25\u5df4\u5e03\u97e6"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u672a\u77e5\u5730\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u53e4\u4ee3\u5317\u6b27\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u516c\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"\u56fd\u9645\u6807\u51c6\u5386\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u8499\u6208\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u5317\u7d22\u6258\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u6cf0\u5362\u56fa\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"\u8def\u6613\u65af\u5b89\u90a3\u514b\u91cc\u5965\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u6d1b\u9f50\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of(u"\u4e30\u5409\u4ec0\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"\u7eb3\u897f\u683c\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of(u"\u963f\u6563\u8482\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of(u"\u81ea\u52a8\u94bb\u673a"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u9a6c\u5207\u59c6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u7b80\u4f53\u4e2d\u6587\u5927\u5199\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u5e0c\u5229\u76d6\u519c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u6269\u5c55\u963f\u62c9\u4f2f-\u5370\u5ea6\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u52aa\u57c3\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u8fbe\u79d1\u4ed6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u5168\u89d2\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u8d6b\u68af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u8fbe\u5c14\u683c\u74e6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u53f0\u5854\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u739b\u96c5\u5723\u7b26\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u5317\u5362\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"\u8868\u60c5\u7b26\u53f7\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u514b\u666e\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u53e4\u5178\u5c3c\u74e6\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u4e4c\u5fb7\u7a46\u5c14\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u9ad8\u68c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of(u"\u798f\u7eb3\u5e15\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"\u6c99\u7279\u963f\u62c9\u4f2f\u4f0a\u65af\u5170\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u6797\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u6851\u8fbe\u97e6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u7f57\u9a6c\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u8428\u54c8\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"\u590f\u62c9\u8fbe\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u8428\u9a6c\u5229\u4e9a\u963f\u62c9\u59c6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"\u9ad8\u52a0\u7d22\u963f\u5c14\u5df4\u5c3c\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"\u5229\u7269\u6d66\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u6851\u5e03\u9c81\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u8428\u8428\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u6851\u5854\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u63d0\u975e\u7eb3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u72b9\u592a\u6ce2\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"\u5f53\u5730\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u7518\u62dc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u679c\u9c81\u7a46\u5947\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"\u963f\u9c81\u5e93\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of(u"\u8fea\u7ef4\u897f\u963f\u5e93\u9c81\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u5362\u5df4-\u5362\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"\u6bd4\u65af\u5f00\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"\u8fc8\u8482\u5229\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u5168\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u6851\u53e4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u5362\u4f0a\u585e\u8bfa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRITAL"_s),
			$of(u"\u683c\u91cc\u9676\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u5c3c\u6602\u79d1\u52d2\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u5c3c\u626c\u97e6\u9f50\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u9686\u8fbe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u5c3c\u5965\u7f57\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u5362\u5965\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u83f2\u5f8b\u5bbe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u82d7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u7279\u62c9\u534e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u7c73\u4f50\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u4ffe\u8def\u652f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u53f2\u62c9\u7ef4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u5df4\u5398\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"\u4e4c\u52a0\u91cc\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"\u74e6\u90ce\u5947\u8482\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u5362\u96c5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u5df4\u8428\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"\u5df4\u59c6\u7a46\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of(u"1943\u5e74\u6b63\u5199\u6cd5\u6784\u60f3"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u72b9\u592a\u963f\u62c9\u4f2f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u6b27\u6d32\u897f\u73ed\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u6069\u6d4e\u9a6c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u82cf\u683c\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u897f\u897f\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u963f\u6cd5\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u963f\u5e03\u54c8\u897f\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"\u6ce2\u65af\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u963f\u7ef4\u65af\u5854\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u5357\u975e\u8377\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u963f\u80af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"\u67e5\u514b\u739b\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"\u6208\u9a6c\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u963f\u59c6\u54c8\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u963f\u62c9\u8d21\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u963f\u62c9\u4f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Stolvizza/Solbica \u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u65e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u963f\u62c9\u4f2f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u5047\u540d\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u963f\u8428\u59c6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u7ebf\u5f62\u6587\u5b57\uff08A\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u963f\u74e6\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u7ebf\u5f62\u6587\u5b57\uff08B\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\u5357\u5e93\u5c14\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u827e\u9a6c\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u963f\u585e\u62dc\u7586\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of(u"\u54c8\u4e43\u6590\u7f57\u5174\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"\u514b\u5409\u5947\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of(u"\u897f\u8428\u666e\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Oseacco/Osojane \u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of(u"Unifon\u97f3\u4f4d\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u5df4\u4ec0\u57fa\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u90e8\u9996\u7b14\u753b\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u767d\u4fc4\u7f57\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u6bd4\u65af\u62c9\u9a6c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"\u722a\u54c7\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u73ed\u5df4\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u5b5f\u52a0\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u85cf\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u591a\u683c\u91cc\u5e03\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u5e03\u5217\u5854\u5c3c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u6ce2\u65af\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of(u"\u62dc\u514b\u8212\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"\u585e\u5185\u5361\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u7f05\u7538\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u8001\u631d\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u585e\u7eb3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\u897f\u975e\u4e66\u9762\u6587\u5b57\uff08N\u2019Ko\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u585e\u5c14\u5e93\u666e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u52a0\u6cf0\u7f57\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u4e1c\u6851\u6d77\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u8f66\u81e3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u67e5\u83ab\u7f57\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\u4fee\u8ba2\u7684\u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u79d1\u897f\u5609\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u5965\u91cc\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u514b\u91cc\u65cf\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u6377\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u6559\u4f1a\u65af\u62c9\u592b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u695a\u74e6\u4ec0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u5a01\u5c14\u58eb\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9a\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u5f5d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u4e39\u9ea6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u6b27\u6d32\u8461\u8404\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u6807\u51c6\u8d27\u5e01\u683c\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u8d1d\u6c99\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u4e01\u5361\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u5e03\u5409\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u672c\u5df4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u53e4\u7231\u5c14\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\u8499\u53e4\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u8fea\u7ef4\u5e0c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u62c9\u4e01\u7f8e\u6d32\u897f\u73ed\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u5b97\u5361\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u8d1d\u7eb3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u519c\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"\u5088\u50f3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u54f2\u5c14\u9a6c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u5e0c\u814a\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u57c3\u7ef4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"\u5df4\u975e\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u6b63\u5e38\u6362\u884c\u7b26\u6837\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u6469\u5c14\u591a\u74e6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u5e0c\u814a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u4e16\u754c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u7e41\u4f53\u4e2d\u6587\u6392\u5e8f - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u897f\u73ed\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u7231\u6c99\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u6c49\u8bed\u6ce8\u97f3"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u5df4\u65af\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u5e03\u5e0c\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u8c1a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u6492\u9a6c\u5229\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u5e0c\u5c14\u54c8\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u4e0a\u7d22\u5e03\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u6c49\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"\u963f\u5c14\u65af\u7279\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u63b8\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\u6c49\u5974\u7f57\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u6ce2\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u7b80\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u897f\u65b9\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u7e41\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"\u5357\u963f\u585e\u62dc\u7586\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u5bcc\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u4e4d\u5f97\u963f\u62c9\u4f2f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"\u6e58\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u82ac\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u6590\u6d4e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u4e30\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u897f\u4ffe\u8def\u652f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u7ca4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u6cd5\u7f57\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"\u7f8e\u56fd\u5730\u540d\u59d4\u5458\u4f1a (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u7fc1\u672c\u675c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u6cd5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of(u"\u963f\u5938\u4f69\u59c6\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u6089\u8fbe\u6469\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u897f\u5f17\u91cc\u897f\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u7231\u5c14\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of(u"\u4e07\u79cb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u82cf\u683c\u5170\u76d6\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of(u"\u8d21\u8d3e\u62c9\u8d21\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u52a0\u5229\u897f\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of(u"\u9a6c\u8428\u62c9\u59c6\u5188\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u74dc\u62c9\u5c3c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u535a\u6770\u666e\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u672a\u77e5\u8bed\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9a\u963f\u7c73\u7279\u963f\u83b1\u59c6\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u53e4\u5409\u62c9\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"\u4f0a\u65af\u5170\u5929\u6587\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u9a6c\u6069\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"\u5965\u65af\u66fc\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u8c6a\u8428\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u5e0c\u4f2f\u6765\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u5370\u5730\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u80e1\u5e15\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u6bd4\u79d1\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u6bd4\u5c3c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u5e0c\u91cc\u83ab\u56fe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u514b\u7f57\u5730\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u6d77\u5730\u514b\u91cc\u5965\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u5308\u7259\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u4e9a\u7f8e\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u8d6b\u96f7\u7f57\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"\u5361\u771f\u6cd5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"\u56fd\u9645\u97f3\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u56fd\u9645\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u97e9\u6587\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u5370\u5ea6\u5c3c\u897f\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u85cf\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u56fd\u9645\u6587\u5b57\uff08E\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of(u"\u52a0\u65af\u79d1\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u4f0a\u535a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u56db\u5ddd\u5f5d\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u4e2d\u53e4\u6cd5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of(u"\u7f57\u66fc\u4ec0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of(u"1990\u5e74\u8461\u8404\u7259\u8bed\u6b63\u5199\u6cd5\u534f\u8bae"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u4f0a\u52aa\u76ae\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u53e4\u6cd5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u4f0a\u591a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u4e1c\u5f17\u91cc\u897f\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u5317\u5f17\u91cc\u897f\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u51b0\u5c9b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u610f\u5927\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u56e0\u7ebd\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of(u"\u79d1\u5c14\u5c3c\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"\u9ad8\u5730\u632a\u5a01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u65e5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u9a6c\u62c9\u96c5\u62c9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"\u53e4\u5357\u963f\u62c9\u4f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u6c99\u62c9\u5824\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u591a\u683c\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"\u96f7\u5e03\u67e5\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"\u79d1\u59c6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u5357\u8428\u7c73\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u722a\u54c7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u8427\u4f2f\u7eb3\u5f0f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"\u4f5b\u9640\u68b5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u9a6c\u90fd\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u5415\u52d2\u8428\u7c73\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u6469\u63ed\u9640\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u9a6c\u6cd5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u8fc8\u8482\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u4f0a\u7eb3\u91cc\u8428\u7c73\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u683c\u9c81\u5409\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u897f\u514b\u897f\u5361\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u671b\u52a0\u9521\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"\u5434\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u65af\u79d1\u7279\u8428\u7c73\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u66fc\u4e01\u54e5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u521a\u679c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\u54e5\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u5409\u5e93\u5c24\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u9a6c\u8d5b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u5bbd\u4e9a\u739b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u54c8\u8428\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u683c\u9675\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u9ad8\u68c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u5361\u7eb3\u8fbe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u97e9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u5361\u52aa\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u514b\u4ec0\u7c73\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u8272\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u96f7\u5e03\u67e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u963f\u7ef4\u65af\u9640\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u5e93\u5c14\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u79d1\u7c73\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u5eb7\u6c83\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u67ef\u5c14\u514b\u5b5c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u7d22\u5b81\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of(u"\u7a46\u5c14\u5766\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u62c9\u4e01\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of(u"\u54c8\u7279\u5170\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u5362\u68ee\u5821\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u9a6c\u62c9\u96c5\u62c9\u59c6\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u5362\u5e72\u8fbe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u6717\u683c\u6717\u683c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u6797\u5821\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u85cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u6797\u52a0\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u5f17\u7559\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u8001\u631d\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u82f1\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"\u8001\u50a3\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u7acb\u9676\u5b9b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u9c81\u5df4\u52a0\u4e39\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u62c9\u8131\u7ef4\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u7c9f\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}\uff0c{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u9a6c\u62c9\u52a0\u65af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u9a6c\u7ecd\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u9ed8\u8ba4 Unicode \u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u6bdb\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u9a6c\u5176\u987f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u9a6c\u62c9\u96c5\u62c9\u59c6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u8499\u53e4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u9a6c\u62c9\u5730\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u9a6c\u6765\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u9a6c\u8033\u4ed6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u7f05\u7538\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u7d22\u62c9\u4ec0\u7279\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u4e9a\u7f8e\u5c3c\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u83ab\u514b\u6c99\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"\u9a6c\u575d\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u4e0b\u7d22\u5e03\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u7687\u5ba4\u4e9a\u62c9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u7459\u9c81\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u5e38\u89c4\u641c\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u4e66\u9762\u632a\u5a01\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u5317\u6069\u5fb7\u8d1d\u52d2\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u5c3c\u6cca\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u6069\u4e1c\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u66fc\u8fbe\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u8377\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u632a\u5a01\u5c3c\u8bfa\u65af\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u632a\u5a01\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of(u"\u666e\u7f57\u65fa\u65af\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u5357\u6069\u5fb7\u8d1d\u52d2\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"\u83ab\u8fea\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(u"\u6b27\u585e\u5947\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u7eb3\u74e6\u970d\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u5361\u62c9\u5361\u5c14\u5e15\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u9f50\u5207\u74e6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u514b\u94a6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u5361\u62dc\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"\u591a\u97f3\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u5965\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u5361\u6377\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u5361\u59c6\u5df4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u95e8\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"\u8fd1\u4ee3\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u5965\u5409\u5e03\u74e6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u6885\u9c81\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u4e9a\u7f8e\u5c3c\u4e9a\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u5965\u7f57\u83ab\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u5361\u5a01\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u5965\u91cc\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"\u83ab\u8fea\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u5965\u585e\u68af\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"1997 \u7248 ALA-LC \u7f57\u9a6c\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u5361\u5df4\u5c14\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u6bdb\u91cc\u6c42\u65af\u514b\u91cc\u5965\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u82cf\u91cc\u5357\u6c64\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u65c1\u906e\u666e\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u675c\u963f\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u585e\u96f7\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"\u96f7\u897f\u4e9a Lipovaz \u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"\u52a0\u6d85\u59c6\u5e03\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u5df4\u5229\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u6ce2\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u4e2d\u53e4\u8377\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"\u7d22\u62c9\u4ec0\u7279\u62c9\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u6a80\u7eaa\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"\u745e\u58eb\u74e6\u52d2\u5fb7\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u666e\u4ec0\u56fe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u8461\u8404\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u4e2d\u53e4\u7231\u5c14\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u5df4\u897f\u8461\u8404\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"\u535a\u970d\u91cc\u5947\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u5361\u5854\u5e03\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u9a6c\u5e93\u963f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u8d27\u5e01\u683c\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"\u66fc\u5fb7\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u5e03\u62c9\u6770\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u65e5\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"\u7c73\u65bd\u6cf0\u5c14\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u8001\u631d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"\u745e\u58eb\u82cf\u8fc8\u62c9\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u6885\u5854\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24\u5c0f\u65f6\u5236\uff080\u201323\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24\u5c0f\u65f6\u5236\uff081\u201324\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\u8428\u970d\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u7f05\u7538\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u514b\u4e18\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u8428\u6ce2\u8482\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u535a\u591a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u5170\u62ff\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u9a6c\u5b54\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"\u5420\u9640\u68b5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of(u"\u7ca4\u8bed\u62fc\u97f3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12\u5c0f\u65f6\u5236\uff081\u201312\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12\u5c0f\u65f6\u5236\uff080\u201311\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u7f57\u66fc\u4ec0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u9686\u8fea\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u8d27\u5e01"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u7f57\u9a6c\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"\u8428\u970d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u5965\u91cc\u4e9a\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u4e2d\u6587\u5341\u8fdb\u5236\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u4fc4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"\u963f\u5e93\u8272\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u5362\u65fa\u8fbe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\u5e03\u91cc\u65af\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u5361\u5e03\u4f5b\u5f97\u9c81\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u5bc6\u514b\u9a6c\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u82cf\u5e93\u9a6c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u6fb3\u5927\u5229\u4e9a\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"\u675c\u666e\u6d1b\u4f0a\u901f\u8bb0"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u68b5\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"\u7edf\u4e00\u7684\u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u8428\u4e01\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u82cf\u82cf\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u4fe1\u5fb7\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u5317\u65b9\u8428\u7c73\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u7c73\u5357\u4f73\u4fdd\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u6851\u6208\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u585e\u5c14\u7ef4\u4e9a-\u514b\u7f57\u5730\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u50e7\u4f3d\u7f57\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u82cf\u7f8e\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u65af\u6d1b\u4f10\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u65af\u6d1b\u6587\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"\u683c\u5170\u5854\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u8428\u6469\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of(u"\u57fa\u672c\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u7ecd\u7eb3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u7d22\u9a6c\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u963f\u62c9\u4f2f-\u5370\u5ea6\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u963f\u5c14\u5df4\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u585e\u5c14\u7ef4\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of(u"{0}\uff1a{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u65af\u74e6\u8482\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u4f1a\u8ba1\u8d27\u5e01\u683c\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u5357\u7d22\u6258\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\u722a\u54c7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u5dfd\u4ed6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Natisone \u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u745e\u5178\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u65af\u74e6\u5e0c\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of(u"\u4e07\u79cb\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u7e41\u4f53\u4e2d\u6587\u5927\u5199\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u4f0a\u6bd4\u6bd4\u5965\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u4f0a\u73ed\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u6cf0\u7c73\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u4e9a\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u5e03\u91cc\u4e9a\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u4e2d\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u6cf0\u5362\u56fa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u5854\u5409\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u6cf0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of(u"\u897f\u73ed\u7259\u5f0f\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u63d0\u683c\u5229\u5c3c\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u5e03\u5409\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u514b\u7f57\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u52a0\u62ff\u5927\u82f1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u571f\u5e93\u66fc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u4ed6\u52a0\u7984\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u8328\u74e6\u7eb3\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u6c64\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"\u5e03\u9c81\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u6731\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u65e5\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u571f\u8033\u5176\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u806a\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u79d1\u6469\u7f57\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u67e5\u514b\u9a6c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u9791\u977c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of(u"\u897f\u897f\u65af\u7279\u83ab\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u8fea\u5c24\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u5951\u7ef4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u5854\u5e0c\u63d0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"\u5723\u4e54\u6cbb/\u6bd4\u62c9\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u6b27\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u4e1c\u6b27"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of(u"\u54c8\u4e43\u6590\u7f57\u5174\u4e9a\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"\u6570\u5b66\u65e0\u886c\u7ebf\u7c97\u4f53\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u5317\u6b27"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u8fbe\u624e\u845b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u897f\u6b27"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u7ef4\u543e\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u53e4\u610f\u5927\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\u97e9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u901a\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u4e4c\u514b\u5170\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\u79d1\u666e\u7279\u5386"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u4e4c\u5c14\u90fd\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"\u6807\u51c6\u96f7\u897f\u4e9a\u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u5361\u5c14\u6885\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u6cfd\u7eb3\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u4e4c\u5179\u522b\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u5361\u897f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 \u5e74\u5fb7\u6587\u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u4f4e\u8428\u514b\u68ee\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u9521\u5c14\u8d6b\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u6587\u8fbe\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"\u74e6\u90ce\u5947\u8482\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u6c11\u56fd\u7eaa\u5e74"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u8d8a\u5357\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u548c\u7530\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u897f\u6851\u6d77\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u5c0f\u65f6\u5236\uff0812\u621624\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskievica \u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u6c83\u62c9\u666e\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u53e4\u5178\u53d9\u5229\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"\u6570\u5b66\u65e0\u886c\u7ebf\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u5965\u65af\u66fc\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u57fa\u5207\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(metaValue_type_nu_gong)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(u"\u5c3c\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u52a0\u65cf\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u74e6\u9686\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u52a0\u544a\u5179\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u53d9\u5229\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of(metaValue_type_nu_gong)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u5e0c\u814a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"\u8d63\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u5415\u5e95\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u82cf\u7f8e\u5c14-\u963f\u5361\u5fb7\u6954\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u6c83\u6d1b\u592b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u6807\u51c6\u6469\u6d1b\u54e5\u5854\u9a6c\u585e\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u73b0\u4ee3\u6807\u51c6\u963f\u62c9\u4f2f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u52a0\u62ff\u5927\u571f\u8457\u7edf\u4e00\u97f3\u8282"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"X-SAMPA \u97f3\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u8fe6\u7ea6\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u8499\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u6ee1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u62c9\u4e01\u6587\uff08\u54e5\u7279\u5f0f\u5b57\u4f53\u53d8\u4f53\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"\u5b89\u90a3\u6258\u5229\u4e9a\u8c61\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u683c\u5df4\u4e9a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u66fc\u5c3c\u666e\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u62c9\u4e01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u62c9\u4e01\u6587\uff08\u76d6\u5c14\u6587\u53d8\u4f53\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of(u"\u6960\u8fea\u68b5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u7b80\u4f53\u4e2d\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u7e41\u4f53\u4e2d\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u79d1\u8428\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u7f57\u9a6c\u5c0f\u5199\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u6bd4\u6797\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of(u"\u591a\u683c\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"Pamaka \u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u5229\u897f\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u5965\u585e\u6cbb\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"\u6885\u6566\u5df4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u97e9\u6587\u8bed\u7cfb"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u6469\u970d\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u5361\u5e93\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"\u65e9\u671f\u73b0\u4ee3\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u610f\u7b2c\u7eea\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u83ab\u897f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"\u53d9\u5229\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u5fb7\u585e\u83b1\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u7ea6\u9c81\u5df4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"\u4f20\u7edf\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u58a8\u897f\u54e5\u897f\u73ed\u7259\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u897f\u53d9\u5229\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u5965\u65af\u66fc\u571f\u8033\u5176\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u798f\u97f3\u4f53\u53d9\u5229\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u74e6\u4f0a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u58ee\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u5361\u91cc\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u5361\u4f26\u91d1\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"\u963f\u6cd5\u5361\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u6c49\u8bed\u62fc\u97f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u53e4\u5f7c\u5c14\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u6362\u884c\u7b26\u6837\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u7956\u9c81\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u7535\u8bdd\u7c3f\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"\u5355\u97f3\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u683c\u9c81\u5409\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"\u590f\u62c9\u8fbe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of(u"\u9686\u683c\u591a\u514b\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u91d1\u90a6\u675c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u65e5\u6587\u5927\u5199\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u5360\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u5409\u5179\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u4e1c\u53d9\u5229\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"\u7f05\u7538\u63b8\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"\u7231\u5c14\u5df4\u6851\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"\u53e4\u5317\u65b9\u963f\u62c9\u4f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"\u6851\u5854\u5229\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u6539\u826f\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\u5854\u52a0\u8def\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u540e\u671f\u57c3\u53ca\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u53e4\u57c3\u53ca\u50e7\u4fa3\u4e66\u5199\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of(u"\u96c5\u5179\u8fea\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"\u53f2\u8bd7\u68b5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"\u5e15\u5c14\u8fc8\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u6069\u5e03\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u53e4\u57c3\u53ca\u8c61\u5f62\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u683c\u9c81\u5409\u4e9a\u6587\uff08\u6559\u5802\u4f53\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u7b80\u4f53\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u79d1\u7c73-\u5f7c\u5c14\u7c73\u4e9a\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u53e4\u5308\u7259\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u5b54\u5361\u5c3c\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\u4f20\u7edf\u5fb7\u6587\u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u79d1\u65af\u62c9\u4f0a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of(u"\u5e15\u54c8\u82d7\u65872\u4ee3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of(u"\u5e15\u54c8\u82d7\u65873\u4ee3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of(u"\u5e15\u54c8\u82d7\u65874\u4ee3"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"\u6797\u5e03\u6587\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u7e41\u4f53\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"\u5dfd\u4ed6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"\u7ef4\u666e\u68ee\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u514b\u4f69\u5217\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of(u"\u7c97\u7c92\u7ea7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u9ad8\u68c9\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"\u8fc8\u8482\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u4f0a\u6d1b\u5361\u8bfa\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"\u74e6\u4f26\u897f\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\u585e\u6d66\u8def\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of(u"\u8fea\u7ef4\u897f\u963f\u5e93\u9c81\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"\u7edf\u4e00\u571f\u8033\u5176\u62c9\u4e01\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"\u585e\u5c14\u7ef4\u4e9a\u8bed\u4f0a\u5409\u5361\u7ef4\u4e9a\u53d1\u97f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u8499\u5f53\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u679c\u9c81\u7a46\u5947\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of(u"\u535a\u6069\u970d\u5c14\u59c6\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u591a\u8bed\u79cd"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"\u745e\u58eb\u666e\u7279\u5c14\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u5361\u591a\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u5ea6\u91cf\u8861\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u514b\u91cc\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u683c\u62c9\u54e5\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u5409\u5c14\u4f2f\u7279\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"\u5e38\u7528\u62fc\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u5207\u7f57\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u52a0\u52d2\u6bd4\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"\u5361\u5c24\u52a0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u6cf0\u7c73\u5c14\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u5361\u62c9\u6070\u4f0a\u5df4\u5c14\u5361\u5c14\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u5370\u53e4\u4ec0\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u8fbe\u91cc\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u5361\u7d2f\u5229\u963f\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of(u"\u300a\u725b\u6d25\u82f1\u8bed\u8bcd\u5178\u300b\u62fc\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u57c3\u83f2\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u5e93\u9c81\u514b\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u9999\u5df4\u62c9\u8bed"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u6cf0\u5362\u56fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u5df4\u83f2\u4e9a\u8bed"_s)
		})
	}));
	return data;
}

LocaleNames_zh::LocaleNames_zh() {
}

$Class* LocaleNames_zh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh, name, initialize, &_LocaleNames_zh_ClassInfo_, allocate$LocaleNames_zh);
	return class$;
}

$Class* LocaleNames_zh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun