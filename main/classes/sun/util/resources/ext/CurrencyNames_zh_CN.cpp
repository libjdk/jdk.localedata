#include <sun/util/resources/ext/CurrencyNames_zh_CN.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_zh_CN::*)()>(&CurrencyNames_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_zh_CN",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_CN_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_CN($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_CN));
}

void CurrencyNames_zh_CN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_CN::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"\uffe5"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"\u5b89\u9053\u5c14\u6bd4\u585e\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u963f\u8054\u914b\u8fea\u62c9\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u963f\u5bcc\u6c57\u5c3c (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u963f\u5bcc\u6c57\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u963f\u5c14\u5df4\u5c3c\u4e9a\u5217\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u4e9a\u7f8e\u5c3c\u4e9a\u5fb7\u62c9\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u8377\u5170\u5b89\u66ff\u5170\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u5b89\u54e5\u62c9\u5bbd\u624e"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u963f\u6839\u5ef7\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u5965\u5730\u5229\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u6fb3\u5927\u5229\u4e9a\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u963f\u9c81\u5df4\u57fa\u5c14\u5fb7\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u963f\u585e\u62dc\u7586\u9a6c\u7eb3\u7279 (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u963f\u585e\u62dc\u7586\u9a6c\u7eb3\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u6ce2\u58eb\u5c3c\u4e9a-\u8d6b\u585e\u54e5\u7ef4\u7eb3\u5151\u6362\u5238"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u5df4\u5df4\u591a\u65af\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u5b5f\u52a0\u62c9\u5854\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u6bd4\u5229\u65f6\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9a\u786c\u5217\u5f17"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9a\u65b0\u5217\u5f17"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u5df4\u6797\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u5e03\u9686\u8fea\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u767e\u6155\u5927\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u6587\u83b1\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u73bb\u5229\u7ef4\u4e9a\u8bfa"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u73bb\u5229\u7ef4\u4e9a Mvdol\uff08\u8d44\u91d1\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u5df4\u897f\u96f7\u4e9a\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u5df4\u54c8\u9a6c\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u4e0d\u4e39\u52aa\u624e\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u535a\u8328\u74e6\u7eb3\u666e\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u767d\u4fc4\u7f57\u65af\u65b0\u5362\u5e03 (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u767d\u4fc4\u7f57\u65af\u5362\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u4f2f\u5229\u5179\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u52a0\u62ff\u5927\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u521a\u679c\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u745e\u58eb\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u667a\u5229 Unidades de Fomento\uff08\u8d44\u91d1\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u667a\u5229\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u4eba\u6c11\u5e01"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u54e5\u4f26\u6bd4\u4e9a\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u54e5\u65af\u8fbe\u9ece\u52a0\u79d1\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u65e7\u585e\u5c14\u7ef4\u4e9a\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u53e4\u5df4\u53ef\u5151\u6362\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u53e4\u5df4\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u4f5b\u5f97\u89d2\u57c3\u65af\u5e93\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u585e\u6d66\u8def\u65af\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u6377\u514b\u514b\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u5fb7\u56fd\u9a6c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u5409\u5e03\u63d0\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u4e39\u9ea6\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u591a\u7c73\u5c3c\u52a0\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u963f\u5c14\u53ca\u5229\u4e9a\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u7231\u6c99\u5c3c\u4e9a\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u57c3\u53ca\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u5384\u7acb\u7279\u91cc\u4e9a\u7eb3\u514b\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u897f\u73ed\u7259\u6bd4\u585e\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9a\u6bd4\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u6b27\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u82ac\u5170\u9a6c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u6590\u6d4e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u798f\u514b\u5170\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u6cd5\u56fd\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u82f1\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u4e54\u6cbb\u4e9a\u62c9\u745e"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u52a0\u7eb3\u585e\u7b2c"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u52a0\u7eb3\u585e\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u76f4\u5e03\u7f57\u9640\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u5188\u6bd4\u4e9a\u8fbe\u62c9\u897f"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u51e0\u5185\u4e9a\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u5e0c\u814a\u5fb7\u62c9\u514b\u9a6c"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u5371\u5730\u9a6c\u62c9\u683c\u67e5\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u51e0\u5185\u4e9a\u6bd4\u7ecd\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u572d\u4e9a\u90a3\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u6e2f\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u6d2a\u90fd\u62c9\u65af\u62c9\u4f26\u76ae\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u514b\u7f57\u5730\u4e9a\u5e93\u7eb3"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u6d77\u5730\u53e4\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u5308\u7259\u5229\u798f\u6797"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u5370\u5ea6\u5c3c\u897f\u4e9a\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u7231\u5c14\u5170\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u4ee5\u8272\u5217\u65b0\u8c22\u514b\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u5370\u5ea6\u5362\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u4f0a\u62c9\u514b\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u4f0a\u6717\u91cc\u4e9a\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u51b0\u5c9b\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u610f\u5927\u5229\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u7259\u4e70\u52a0\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u7ea6\u65e6\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u65e5\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u80af\u5c3c\u4e9a\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u5409\u5c14\u5409\u65af\u65af\u5766\u7d22\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u67ec\u57d4\u5be8\u745e\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u79d1\u6469\u7f57\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u671d\u9c9c\u5706"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u97e9\u5706"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u79d1\u5a01\u7279\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u5f00\u66fc\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u54c8\u8428\u514b\u65af\u5766\u575a\u6208"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u8001\u631d\u57fa\u666e"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u9ece\u5df4\u5ae9\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u65af\u91cc\u5170\u5361\u5362\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u5229\u6bd4\u4e9a\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u83b1\u7d22\u6258\u6d1b\u8482"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u7acb\u9676\u5b9b\u7acb\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u5362\u68ee\u5821\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u62c9\u8131\u7ef4\u4e9a\u62c9\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u5229\u6bd4\u4e9a\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u6469\u6d1b\u54e5\u8fea\u62c9\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u6469\u5c14\u591a\u74e6\u5217\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u9a6c\u8fbe\u52a0\u65af\u52a0\u963f\u91cc\u4e9a\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u9a6c\u8fbe\u52a0\u65af\u52a0\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u9a6c\u5176\u987f\u6234\u4ee3\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u7f05\u7538\u5f00\u4e9a\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u8499\u53e4\u56fe\u683c\u91cc\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u6fb3\u95e8\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u6bdb\u91cc\u5854\u5c3c\u4e9a\u4e4c\u5409\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u9a6c\u8033\u4ed6\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u6bdb\u91cc\u6c42\u65af\u5362\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u9a6c\u5c14\u4ee3\u592b\u62c9\u83f2\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u9a6c\u62c9\u7ef4\u514b\u74e6\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u58a8\u897f\u54e5\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u58a8\u897f\u54e5 Unidad de Inversion (UDI)\uff08\u8d44\u91d1\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u9a6c\u6765\u897f\u4e9a\u6797\u5409\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u65e7\u83ab\u6851\u6bd4\u514b\u7f8e\u63d0\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u83ab\u6851\u6bd4\u514b\u7f8e\u63d0\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u7eb3\u7c73\u6bd4\u4e9a\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u5c3c\u65e5\u5229\u4e9a\u5948\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u5c3c\u52a0\u62c9\u74dc\u91d1\u79d1\u591a\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u8377\u5170\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u632a\u5a01\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u5c3c\u6cca\u5c14\u5362\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u65b0\u897f\u5170\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u963f\u66fc\u91cc\u4e9a\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u5df4\u62ff\u9a6c\u5df4\u6ce2\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u79d8\u9c81\u65b0\u7d22\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u5df4\u5e03\u4e9a\u65b0\u51e0\u5185\u4e9a\u57fa\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u83f2\u5f8b\u5bbe\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u5df4\u57fa\u65af\u5766\u5362\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u6ce2\u5170\u5179\u7f57\u63d0"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u8461\u8404\u7259\u57c3\u65af\u5e93\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u5df4\u62c9\u572d\u74dc\u62c9\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u5361\u5854\u5c14\u91cc\u4e9a\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u65e7\u7f57\u9a6c\u5c3c\u4e9a\u5217\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u7f57\u9a6c\u5c3c\u4e9a\u5217\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u585e\u5c14\u7ef4\u4e9a\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u4fc4\u56fd\u5362\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u4fc4\u56fd\u5362\u5e03 (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u5362\u65fa\u8fbe\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u6c99\u7279\u91cc\u4e9a\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u6240\u7f57\u95e8\u7fa4\u5c9b\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u585e\u820c\u5c14\u5362\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u82cf\u4e39\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u82cf\u4e39\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u745e\u5178\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u65b0\u52a0\u5761\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u5723\u8d6b\u52d2\u62ff\u7fa4\u5c9b\u78c5"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u65af\u6d1b\u6587\u5c3c\u4e9a\u6258\u62c9\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u65af\u6d1b\u4f10\u514b\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u585e\u62c9\u5229\u6602\u5229\u6602"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u7d22\u9a6c\u91cc\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u82cf\u91cc\u5357\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u82cf\u91cc\u5357\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u5723\u591a\u7f8e\u548c\u666e\u6797\u897f\u6bd4\u591a\u5e03\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u8428\u5c14\u74e6\u591a\u79d1\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u53d9\u5229\u4e9a\u9551"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u65af\u5a01\u58eb\u5170\u91cc\u5170\u5409\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u6cf0\u94e2"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u5854\u5409\u514b\u65af\u5766\u7d22\u83ab\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u571f\u5e93\u66fc\u65af\u5766\u9a6c\u7eb3\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u571f\u5e93\u66fc\u65af\u5766\u65b0\u9a6c\u7eb3\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u7a81\u5c3c\u65af\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u6c64\u52a0\u6f58\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u5e1d\u6c76\u57c3\u65af\u5e93\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u571f\u8033\u5176\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u65b0\u571f\u8033\u5176\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u7279\u7acb\u5c3c\u8fbe\u548c\u591a\u5df4\u54e5\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u65b0\u53f0\u5e01"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u5766\u6851\u5c3c\u4e9a\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u4e4c\u514b\u5170\u683c\u91cc\u592b\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u4e4c\u5e72\u8fbe\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u7f8e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u7f8e\u5143\uff08\u6b21\u65e5\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u7f8e\u5143\uff08\u5f53\u65e5\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u4e4c\u62c9\u572d\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u4e4c\u5179\u522b\u514b\u65af\u82cf\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u59d4\u5185\u745e\u62c9\u535a\u5229\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u59d4\u5185\u745e\u62c9\u5f3a\u52bf\u73bb\u5229\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u8d8a\u5357\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u74e6\u52aa\u963f\u56fe\u74e6\u56fe"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u897f\u8428\u6469\u4e9a\u5854\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u4e2d\u975e\u91d1\u878d\u5408\u4f5c\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u94f6"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u9ec4\u91d1"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u6b27\u6d32\u590d\u5408\u5355\u4f4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u6b27\u6d32\u8d27\u5e01\u8054\u76df"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u6b27\u6d32\u8ba1\u7b97\u5355\u4f4d (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u6b27\u6d32\u8ba1\u7b97\u5355\u4f4d (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u4e1c\u52a0\u52d2\u6bd4\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u7279\u522b\u63d0\u6b3e\u6743"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u6cd5\u56fd\u91d1\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u6cd5\u56fd UIC \u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u975e\u6d32\u91d1\u878d\u5171\u540c\u4f53\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u94af"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u592a\u5e73\u6d0b\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u94c2"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u4e3a\u6d4b\u8bd5\u4fdd\u7559\u7684\u4ee3\u7801"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u8d27\u5e01\u672a\u77e5\u6216\u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u4e5f\u95e8\u91cc\u4e9a\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u5357\u65af\u62c9\u592b\u504c\u5a01\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u5357\u975e\u5170\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u8d5e\u6bd4\u4e9a\u514b\u74e6\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u6d25\u5df4\u5e03\u97e6\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u6d25\u5df4\u5e03\u97e6\u5143 (2009)"_s)
		})
	});
}

CurrencyNames_zh_CN::CurrencyNames_zh_CN() {
}

$Class* CurrencyNames_zh_CN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_CN, name, initialize, &_CurrencyNames_zh_CN_ClassInfo_, allocate$CurrencyNames_zh_CN);
	return class$;
}

$Class* CurrencyNames_zh_CN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun