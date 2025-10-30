#include <sun/util/resources/ext/CurrencyNames_zh_TW.h>

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

$MethodInfo _CurrencyNames_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_zh_TW::*)()>(&CurrencyNames_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_zh_TW",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_TW_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_TW($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_TW));
}

void CurrencyNames_zh_TW::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("NT$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"\u5b89\u9053\u723e\u966a\u58eb\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u963f\u62c9\u4f2f\u806f\u5408\u5927\u516c\u570b\u8fea\u723e\u6c57"_s)
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
			$of(u"\u963f\u723e\u5df4\u5c3c\u4e9e\u5217\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u4e9e\u7f8e\u5c3c\u4e9e\u5fb7\u62c9\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u53e4\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u5b89\u54e5\u62c9\u5bec\u624e"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u963f\u6839\u5ef7\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u5967\u5730\u5229\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u6fb3\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u963f\u9b6f\u5df4\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u4e9e\u585e\u62dc\u7136\u99ac\u7d0d\u7279 (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u4e9e\u585e\u62dc\u7136\u99ac\u7d0d\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u6ce2\u58eb\u5c3c\u4e9e-\u9ed1\u585e\u54e5\u7dad\u90a3\u53ef\u8f49\u63db\u99ac\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u5df4\u8c9d\u591a\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u5b5f\u52a0\u62c9\u5854\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u6bd4\u5229\u6642\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9e\u786c\u5217\u5f17"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9e\u65b0\u5217\u5f17"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u5df4\u6797\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u84b2\u9686\u5730\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u767e\u6155\u9054\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u6c76\u840a\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u73bb\u5229\u7dad\u4e9e\u8ca8\u5e63\u55ae\u4f4d"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u73bb\u5229\u7dad\u4e9e\u5e55\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u5df4\u897f\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u5df4\u54c8\u99ac\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u4e0d\u4e39\u52aa\u624e\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u6ce2\u672d\u90a3\u666e\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u767d\u4fc4\u7f85\u65af\u65b0\u76e7\u5e03 (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u767d\u4fc4\u7f85\u65af\u76e7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u8c9d\u91cc\u65af\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u52a0\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u525b\u679c\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u745e\u58eb\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u5361\u6797\u6cb9\u9054\u4f5b\u66fc\u8dce"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u667a\u5229\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u4eba\u6c11\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u54e5\u502b\u6bd4\u4e9e\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u54e5\u65af\u5927\u9ece\u52a0\u79d1\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u65e7\u585e\u5c14\u7ef4\u4e9a\u7b2c\u7eb3\u5c14"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u53e4\u5df4\u53ef\u8f49\u63db\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u53e4\u5df4\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u7dad\u5fb7\u89d2\u57c3\u65af\u5eab\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u8cfd\u666e\u52d2\u65af\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u6377\u514b\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u5fb7\u570b\u99ac\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u5409\u5e03\u5730\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u4e39\u9ea5\u514b\u7f85\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u591a\u660e\u5c3c\u52a0\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u963f\u723e\u53ca\u5229\u4e9e\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u611b\u6c99\u5c3c\u4e9e\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u57c3\u53ca\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u5384\u7acb\u7279\u91cc\u4e9e\u7d0d\u514b\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u897f\u73ed\u7259\u966a\u58eb\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u8863\u7d22\u6bd4\u4e9e\u6bd4\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u6b50\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u82ac\u862d\u99ac\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u6590\u6fdf\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u798f\u514b\u862d\u7fa4\u5cf6\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u6cd5\u570b\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u82f1\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u55ac\u6cbb\u62c9\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u8fe6\u7d0d\u4ed9\u8515 (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u8fe6\u7d0d\u4ed9\u8515"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u76f4\u5e03\u7f85\u9640\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u7518\u6bd4\u4e9e\u9054\u62c9\u897f"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u5e7e\u5167\u4e9e\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u5e0c\u81d8\u5fb7\u62c9\u514b\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u74dc\u5730\u99ac\u62c9\u683c\u67e5\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u5e7e\u5167\u4e9e\u6bd4\u7d22\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u572d\u4e9e\u90a3\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u6e2f\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u6d2a\u90fd\u62c9\u65af\u502b\u76ae\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u514b\u7f85\u5730\u4e9e\u5eab\u7d0d"_s)
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
			$of(u"\u5370\u5c3c\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u611b\u723e\u862d\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u4ee5\u8272\u5217\u65b0\u8b1d\u514b\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u5370\u5ea6\u76e7\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u4f0a\u62c9\u514b\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u4f0a\u6717\u91cc\u4e9e\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u51b0\u5cf6\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u7fa9\u5927\u5229\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u7259\u8cb7\u52a0\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u7d04\u65e6\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u65e5\u5713"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u80af\u5c3c\u4e9e\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u5409\u723e\u5409\u65af\u7d22\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u67ec\u57d4\u5be8\u745e\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u79d1\u6469\u7f85\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u5317\u97d3\u571c"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u97d3\u571c"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u79d1\u5a01\u7279\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u958b\u66fc\u7fa4\u5cf6\u7f8e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u5361\u624e\u514b\u65af\u5766\u5766\u5409"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u8001\u631d\u57fa\u666e"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u9ece\u5df4\u5ae9\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u65af\u91cc\u862d\u5361\u76e7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u8cf4\u6bd4\u745e\u4e9e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u8cf4\u7d22\u6258\u7f85\u8482"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u7acb\u9676\u5b9b\u91cc\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u76e7\u68ee\u5821\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u62c9\u812b\u7dad\u4e9e\u62c9\u7279\u9280\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u5229\u6bd4\u4e9e\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u6469\u6d1b\u54e5\u8fea\u62c9\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u6469\u675c\u96f2\u5217\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u99ac\u9054\u52a0\u65af\u52a0\u827e\u745e\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u99ac\u9054\u52a0\u65af\u52a0\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u99ac\u5176\u9813\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u7dec\u7538\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u8499\u53e4\u5716\u683c\u91cc\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u6fb3\u9580\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u8305\u5229\u5854\u5c3c\u4e9e\u70cf\u5409\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u99ac\u723e\u4ed6\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u6a21\u91cc\u897f\u65af\u76e7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u99ac\u723e\u5730\u592b\u6d77\u5cf6\u76e7\u975e\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u99ac\u62c9\u7dad\u514b\u74e6\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u58a8\u897f\u54e5\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u58a8\u897f\u54e5 Unidad de Inversion (UDI)\uff08\u8d44\u91d1\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u99ac\u4f86\u897f\u4e9e\u4ee4\u5409"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u83ab\u4e09\u6bd4\u514b\u6885\u8482\u5361\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u83ab\u4e09\u6bd4\u514b\u7f8e\u63d0\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u7d0d\u7c73\u6bd4\u4e9e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u5948\u53ca\u5229\u4e9e\u5948\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u5c3c\u52a0\u62c9\u74dc\u91d1\u79d1\u591a\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u8377\u862d\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u632a\u5a01\u514b\u7f85\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u5c3c\u6cca\u723e\u76e7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u7d10\u897f\u862d\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u963f\u66fc\u91cc\u5967"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u5df4\u62ff\u99ac\u5df4\u6ce2\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u79d8\u9b6f\u65b0\u592a\u967d\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u5df4\u5e03\u4e9e\u7d10\u5e7e\u5167\u4e9e\u57fa\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u83f2\u5f8b\u8cd3\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u5df4\u57fa\u65af\u5766\u76e7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u6ce2\u862d\u8332\u7f85\u63d0"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u8461\u8404\u7259\u57c3\u65af\u5eab\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u5df4\u62c9\u572d\u74dc\u62c9\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u5361\u9054\u723e\u91cc\u4e9e\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u65e7\u7f57\u9a6c\u5c3c\u4e9a\u5217\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u7f85\u99ac\u5c3c\u4e9e\u5217\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u585e\u723e\u7dad\u4e9e\u6234\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u4fc4\u7f85\u65af\u76e7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u4fc4\u7f85\u65af\u76e7\u5e03 (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u76e7\u5b89\u9054\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u6c99\u70cf\u5730\u91cc\u96c5"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u7d22\u7f85\u9580\u7fa4\u5cf6\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u585e\u5e2d\u723e\u76e7\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u8607\u4e39\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u8607\u4e39\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u745e\u5178\u514b\u7f85\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u65b0\u52a0\u5761\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u5723\u8d6b\u52d2\u62ff\u7fa4\u5c9b\u78c5"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u65af\u6d1b\u7dad\u5c3c\u4e9e\u6258\u52d2"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u65af\u6d1b\u4f10\u514b\u514b\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u7345\u5b50\u5c71\u5229\u6602"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u7d22\u99ac\u5229\u4e9e\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u82cf\u91cc\u5357\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u8607\u5229\u5357\u57fa\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u8056\u591a\u7f8e\u5cf6\u548c\u666e\u6797\u897f\u6bd4\u5cf6\u591a\u5e03\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u8428\u5c14\u74e6\u591a\u79d1\u6717"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u6558\u5229\u4e9e\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u65af\u5a01\u58eb\u5170\u91cc\u5170\u5409\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u6cf0\u9296"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u5854\u5409\u514b\u65af\u5766\u7d22\u83ab\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u571f\u5eab\u66fc\u99ac\u7d0d\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u571f\u5eab\u66fc\u65b0\u99ac\u7d0d\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u7a81\u5c3c\u897f\u4e9e\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u6771\u52a0\u6f58\u52a0"_s)
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
			$of(u"\u65b0\u81fa\u5e63"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u5766\u6851\u5c3c\u4e9a\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u70cf\u514b\u862d\u683c\u91cc\u592b\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u70cf\u5e72\u9054\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u7f8e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u7f8e\u5143 (\u7b2c\u4e8c\u5929)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u7f8e\u5143 (\u540c\u4e00\u5929)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u70cf\u62c9\u572d\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u70cf\u8332\u5225\u514b\u7d22\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u59d4\u5167\u745e\u62c9\u73bb\u5229\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u59d4\u5167\u745e\u62c9\u5f37\u52e2\u73bb\u5229\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u8d8a\u5357\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u842c\u90a3\u675c\u842c\u675c"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u897f\u85a9\u6469\u4e9e\u5854\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u897f\u975e\u6cd5\u90ce BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("XAG"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u9ec3\u91d1"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u6b50\u6d32\u7d9c\u5408\u55ae\u4f4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u6b50\u6d32\u8ca8\u5e63\u55ae\u4f4d XBB"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u6b50\u6d32\u6703\u8a08\u55ae\u4f4d (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u6b50\u6d32\u6703\u8a08\u55ae\u4f4d (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u683c\u745e\u90a3\u9054\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u7279\u6b8a\u63d0\u6b3e\u6b0a"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u6cd5\u570b\u91d1\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u6cd5\u570b UIC \u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u897f\u975e\u6cd5\u90ce BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u94af"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u94c2"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("XTS"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("XXX"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u8449\u9580\u91cc\u96c5"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u5357\u65af\u62c9\u592b\u632a\u5a01\u4e9e\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u5357\u975e\u862d\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u5c1a\u6bd4\u4e9e\u514b\u74e6\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u8f9b\u5df4\u5a01\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u8f9b\u5df4\u5a01\u5143 (2009)"_s)
		})
	});
}

CurrencyNames_zh_TW::CurrencyNames_zh_TW() {
}

$Class* CurrencyNames_zh_TW::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_TW, name, initialize, &_CurrencyNames_zh_TW_ClassInfo_, allocate$CurrencyNames_zh_TW);
	return class$;
}

$Class* CurrencyNames_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun