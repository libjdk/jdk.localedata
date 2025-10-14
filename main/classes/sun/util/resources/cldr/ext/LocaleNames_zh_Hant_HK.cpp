#include <sun/util/resources/cldr/ext/LocaleNames_zh_Hant_HK.h>

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

$MethodInfo _LocaleNames_zh_Hant_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_zh_Hant_HK::*)()>(&LocaleNames_zh_Hant_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_zh_Hant_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_zh_Hant_HK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_Hant_HK_MethodInfo_
};

$Object* allocate$LocaleNames_zh_Hant_HK($Class* clazz) {
	return $of($alloc(LocaleNames_zh_Hant_HK));
}

void LocaleNames_zh_Hant_HK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_zh_Hant_HK::getContents() {
	$var($String, metaValue_ka, u"\u683c\u9b6f\u5409\u4e9e\u6587"_s);
	$var($String, metaValue_kn, u"\u574e\u7d0d\u9054\u6587"_s);
	$var($String, metaValue_lo, u"\u8001\u64be\u6587"_s);
	$var($String, metaValue_ml, u"\u99ac\u62c9\u96c5\u62c9\u59c6\u6587"_s);
	$var($String, metaValue_or, u"\u5967\u91cc\u96c5\u6587"_s);
	$var($String, metaValue_ta, u"\u6cf0\u7c73\u723e\u6587"_s);
	$var($String, metaValue_type_nu_taml, u"\u6cf0\u7c73\u723e\u6578\u5b57"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u5967\u5730\u5229\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u5df4\u52d2\u65af\u5766\u9818\u571f"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u74e6\u723e\u76ae\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u6d2a\u90fd\u62c9\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u76e7\u6b50\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u82d7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u514b\u7f85\u5730\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u514b\u7f85\u5730\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u745e\u58eb\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u5df4\u897f\u8461\u8404\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u4e5f\u9580"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u65af\u62c9\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u897f\u975e\u66f8\u9762\u8a9e\u8a00\uff08N\u2019ko\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u5361\u5854\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u8607\u683c\u862d\u6a19\u6e96\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u58a8\u897f\u54e5\u897f\u73ed\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u99ac\u7d04\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u6b50\u6d32\u897f\u73ed\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u963f\u6cd5\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u963f\u62c9\u4f2f\u806f\u5408\u914b\u9577\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u99ac\u6069\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u6bd4\u5229\u6642\u8377\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u5b89\u63d0\u74dc\u548c\u5df4\u5e03\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9e\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u610f\u5927\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u610f\u5927\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u683c\u9b6f\u5409\u4e9e\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u8d0a\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u963f\u9b6f\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u7f8e\u570b\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u4e9e\u585e\u62dc\u7586"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u963f\u585e\u62dc\u7586\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u6d25\u5df4\u5e03\u97cb"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u6ce2\u65af\u5c3c\u4e9e\u548c\u9ed1\u585e\u54e5\u7dad\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u5df4\u4ec0\u57fa\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u5df4\u5df4\u591a\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u5967\u91cc\u4e9e\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u5e03\u57fa\u7d0d\u6cd5\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u76e7\u65fa\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u76e7\u65fa\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u5e03\u9686\u8fea"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u8c9d\u5be7"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u6fb3\u6d32\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u8056\u5df4\u6cf0\u52d2\u7c73"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u6c99\u5730\u963f\u62c9\u4f2f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u5361\u7d0d\u9054\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u6240\u7f85\u9580\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u585e\u820c\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u5e03\u91cc\u591a\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u6ce2\u65af\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u4e2d\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u745e\u58eb\u5fb7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u9b91\u5a01\u7279\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u535a\u8328\u74e6\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u65af\u6d1b\u6587\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u8001\u64be\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u65af\u74e6\u723e\u5df4\u7279\u7fa4\u5cf6\u53ca\u63da\u99ac\u5ef6\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u4f2f\u5229\u8332"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u585e\u62c9\u5229\u6602"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u65af\u6d1b\u6587\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u80af\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u4fee\u7d0d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u7d22\u99ac\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u7d22\u99ac\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u52a0\u6cf0\u9686\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u8607\u91cc\u5357"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u79d1\u79d1\u65af (\u57fa\u6797) \u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u8056\u591a\u7f8e\u548c\u666e\u6797\u897f\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u79d1\u6469\u7f85"_s)
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
			$of(u"\u8056\u57fa\u8328\u548c\u5c3c\u7dad\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u52a0\u62ff\u5927\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u79d1\u7279\u8fea\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u65af\u5a01\u58eb\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\u5df2\u4fee\u8a02\u62fc\u5b57\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u6539\u9769\u7248\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u745e\u58eb\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u514b\u91cc\u73c0\u9813\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u7f8e\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u54e5\u65af\u9054\u9ece\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u7279\u514b\u65af\u548c\u51f1\u79d1\u65af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u4e4d\u5f97"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u897f\u91cc\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u6cd5\u5c6c\u5357\u90e8\u9818\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u4f5b\u5f97\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u8001\u64be"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u585e\u6d66\u8def\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u52a0\u62ff\u5927\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u52a0\u52d2\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u8056\u76e7\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9e\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u99ac\u62c9\u96c5\u62c9\u59c6\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u7a81\u5c3c\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u6e6f\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u6e6f\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u5217\u652f\u6566\u58eb\u767b"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u6b50\u6d32\u8461\u8404\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u5343\u91cc\u9054\u548c\u591a\u5df4\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u5716\u74e6\u76e7"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u82f1\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u5929\u57ce\u9ad4\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u5409\u5e03\u63d0"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u5229\u6bd4\u91cc\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u5766\u6851\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u840a\u7d22\u6258"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\u50b3\u7d71\u5fb7\u570b\u62fc\u5b57\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u591a\u7c73\u5c3c\u52a0\u5171\u548c\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u963f\u7f85\u99ac\u5c3c\u4e9e\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u525b\u679c\u53f2\u74e6\u5e0c\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u62c9\u4e01\u7f8e\u6d32\u897f\u73ed\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u5b83\u62ff\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u50e7\u4f3d\u7f85\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u9ed1\u5c71"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u99ac\u62c9\u52a0\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u70cf\u723e\u90fd\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u5384\u74dc\u591a\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u99ac\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u7c21\u9ad4\u4e2d\u6587\u6392\u5e8f (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u6469\u723e\u591a\u74e6\u7f85\u99ac\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u6bdb\u91cc\u5854\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u8499\u7279\u585e\u62c9\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 \u5fb7\u570b\u62fc\u5b57\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u99ac\u8033\u4ed6"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u99ac\u8033\u4ed6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u6bdb\u91cc\u88d8\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u99ac\u723e\u4ee3\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u99ac\u62c9\u7dad"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u4e16\u754c\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u5384\u7acb\u7279\u91cc\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u83ab\u6851\u6bd4\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u8056\u6587\u68ee\u7279\u548c\u683c\u6797\u7d0d\u4e01\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u7e41\u9ad4\u4e2d\u6587\u6392\u5e8f (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u82f1\u5c6c\u7dad\u723e\u4eac\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u7f8e\u5c6c\u7dad\u723e\u4eac\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u8a5e\u5178\u6392\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u5c3c\u65e5\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u5c3c\u65e5\u5229\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u7c21\u9ad4\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u7e41\u9ad4\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"\u5357\u963f\u585e\u62dc\u7586\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u74e6\u52aa\u963f\u5716"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u7459\u9b6f"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(u"\u5c3c\u74e6\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u5ee3\u6771\u8a71"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u5ea6\u91cf\u8861\u7cfb\u7d71"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u5409\u723e\u4f2f\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u654d\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u6fb3\u5927\u62c9\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"\u624e\u624e\u5176\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u514b\u91cc\u7c73\u4e9e\u97c3\u977c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u52a0\u84ec"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u6469\u6d1b\u54e5\u6a19\u6e96\u5854\u99ac\u9f4a\u683c\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u5c3c\u65e5\u5229\u4e9e\u76ae\u6b3d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u683c\u6797\u7d0d\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u683c\u9b6f\u5409\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u52a0\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"\u514b\u88e1\u5967\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u9054\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u52a0\u91cc\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u585e\u820c\u723e\u514b\u91cc\u5967\u723e\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u5ca1\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u6ce2\u5229\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u62c9\u4e01\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9e\u963f\u7f8e\u5fb7\u963f\u840a\u59c6\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u5357\u4f50\u6cbb\u4e9e\u5cf6\u8207\u5357\u6851\u5a01\u5947\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u5371\u5730\u99ac\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u7336\u592a\u6ce2\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u6bdb\u91cc\u88d8\u65af\u514b\u91cc\u5967\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u5e7e\u5167\u4e9e\u6bd4\u7d39"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u572d\u4e9e\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u53e4\u6728\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u82f1\u570b\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u6cd5\u5c6c\u6ce2\u5229\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u5df4\u5e03\u4e9e\u65b0\u5e7e\u5167\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u76ae\u7279\u51f1\u6069\u5cf6"_s)
		})
	}));
	return data;
}

LocaleNames_zh_Hant_HK::LocaleNames_zh_Hant_HK() {
}

$Class* LocaleNames_zh_Hant_HK::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh_Hant_HK, name, initialize, &_LocaleNames_zh_Hant_HK_ClassInfo_, allocate$LocaleNames_zh_Hant_HK);
	return class$;
}

$Class* LocaleNames_zh_Hant_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun