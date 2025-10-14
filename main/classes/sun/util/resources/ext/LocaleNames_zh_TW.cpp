#include <sun/util/resources/ext/LocaleNames_zh_TW.h>

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

$MethodInfo _LocaleNames_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_zh_TW::*)()>(&LocaleNames_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_zh_TW",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_TW_MethodInfo_
};

$Object* allocate$LocaleNames_zh_TW($Class* clazz) {
	return $of($alloc(LocaleNames_zh_TW));
}

void LocaleNames_zh_TW::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_zh_TW::getContents() {
	return $new($ObjectArray2, {
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
			$of("005"_s),
			$of(u"\u5357\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u5927\u6d0b\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u897f\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u4e2d\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u6771\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u5317\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u4e2d\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u975e\u6d32\u5357\u90e8"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u7f8e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u7f8e\u6d32\u5317\u90e8"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u52a0\u52d2\u6bd4\u6d77"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u6771\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u5357\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u6771\u5357\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u5357\u6b50"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u6fb3\u6d32\u8207\u7d10\u897f\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u7f8e\u62c9\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u5bc6\u514b\u7f85\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u73bb\u91cc\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u4e9e\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u4e2d\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u6b50\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u6771\u6b50"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u5317\u6b50"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u897f\u6b50"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u62c9\u4e01\u7f8e\u6d32\u548c\u52a0\u52d2\u6bd4\u6d77"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u5b89\u9053\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u963f\u62c9\u4f2f\u806f\u5408\u5927\u516c\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u963f\u5bcc\u6c57"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u5b89\u5730\u5361\u53ca\u5df4\u5e03\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u5b89\u572d\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u963f\u723e\u5df4\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u4e9e\u7f8e\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"\u8377\u5c6c\u5b89\u66ff\u5217\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u5b89\u54e5\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u5357\u6975\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u963f\u6839\u5ef7"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u7f8e\u5c6c\u85a9\u6469\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u5967\u5730\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u6fb3\u5927\u5229\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u963f\u8def\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u5967\u862d\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u4e9e\u585e\u62dc\u7136"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u963f\u62c9\u4f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u7687\u5ba4\u4e9e\u7f8e\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u4e9e\u7f8e\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u963f\u672a\u65af\u5854\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u6ce2\u58eb\u5c3c\u4e9e\u8d6b\u585e\u54e5\u7dad\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u5df4\u8c9d\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u5b5f\u52a0\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u6bd4\u5229\u6642"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u5e03\u5409\u7d0d\u6cd5\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u5df4\u6797"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u6d66\u9686\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u8c9d\u5357"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u767e\u6155\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u6c76\u840a"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u73bb\u5229\u7dad\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u5df4\u897f"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u5df4\u54c8\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u4e0d\u4e39"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u5e03\u5a01\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u6ce2\u672d\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u767d\u4fc4\u7f85\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u8c9d\u91cc\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u5cc7\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"\u5df4\u66fc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"\u5df4\u85a9\u4f10\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u5df4\u5854\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u5b5f\u52a0\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\u5e03\u5217\u65af\u7b26\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u6ce8\u97f3\u7b26\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u5a46\u7f85\u7c73\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u76f2\u4eba\u7528\u9ede\u5b57\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u5e03\u5409\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u5e03\u5e0c\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u52a0\u62ff\u5927"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u53ef\u53ef\u65af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u525b\u679c\u6c11\u4e3b\u5171\u548c\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u4e2d\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u525b\u679c"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u745e\u58eb"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u8c61\u7259\u6d77\u5cb8"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u5eab\u514b\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u667a\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u5580\u9ea5\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u4e2d\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u54e5\u502b\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u54e5\u65af\u5927\u9ece\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"\u585e\u723e\u7dad\u4e9e\u53ca\u8499\u7279\u5c3c\u54e5\u7f85"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u53e4\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u7dad\u5fb7\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u8056\u8a95\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u8cfd\u666e\u52d2\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u6377\u514b\u5171\u548c\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u67e5\u514b\u99ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u52a0\u62ff\u5927\u539f\u4f4f\u6c11\u901a\u7528\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u5361\u91cc\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u5360\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u67f4\u7f85\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u8272\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u79d1\u666e\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\u585e\u6d66\u8def\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u897f\u91cc\u4fc4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u897f\u91cc\u723e\u6587 (\u53e4\u6559\u6703\u65af\u62c9\u592b\u6587\u8b8a\u9ad4)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u5fb7\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u5409\u5e03\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u4e39\u9ea5"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u591a\u7c73\u5c3c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u591a\u660e\u5c3c\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u963f\u723e\u53ca\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u68b5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u5fb7\u745f\u96f7\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duployan \u901f\u8a18\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u5384\u74dc\u591a\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u611b\u6c99\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u57c3\u53ca"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u897f\u6492\u54c8\u62c9\u6c99\u6f20"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u5384\u5229\u5782\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u897f\u73ed\u7259"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u8863\u7d22\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u53e4\u57c3\u53ca\u4e16\u4fd7\u9ad4"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u53e4\u57c3\u53ca\u50e7\u4fb6\u9ad4"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u53e4\u57c3\u53ca\u8c61\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"\u611b\u723e\u5df4\u6851\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u8863\u7d22\u5339\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u82ac\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u6590\u6fdf"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u798f\u514b\u862d\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u5bc6\u514b\u7f85\u5c3c\u897f\u4e9e\u806f\u90a6"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u6cd5\u9b6f\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u6cd5\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u52a0\u5f6d"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u82f1\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u683c\u745e\u90a3\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u55ac\u6cbb\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u6cd5\u5c6c\u84cb\u4e9e\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u8fe6\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u76f4\u5e03\u7f85\u9640"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u683c\u9675\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u7518\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u5e7e\u5167\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u683c\u9675\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u8d64\u9053\u5e7e\u5167\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u5e0c\u81d8"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u5357\u55ac\u6cbb\u4e9e\u548c\u5357\u6851\u5a01\u5947\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u74dc\u5730\u99ac\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u95dc\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u6bd4\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u84cb\u4e9e\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u683c\u9b6f\u5409\u4e9e\u8a9e\u7cfb (\u963f\u7d22\u4ed6\u8def\u91cc\u548c\u52aa\u65af\u514b\u80e1\u91cc\u6587)"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u55ac\u6cbb\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u683c\u62c9\u54e5\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\u54e5\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"\u683c\u862d\u85a9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u5e0c\u81d8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\u53e4\u5409\u62c9\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u53e4\u723e\u7a46\u5947\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u9999\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u8cc0\u5f97\u5cf6\u548c\u9ea5\u514b\u5510\u7d0d\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u5b8f\u90fd\u62c9\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u514b\u7f85\u57c3\u897f\u4e9e"_s)
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
			$of("Hang"_s),
			$of(u"\u8afa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u6f22\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\u54c8\u52aa\u8afe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u7c21\u9ad4\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u7e41\u9ad4\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u5e0c\u4f2f\u4f86\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u5e73\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\u694a\u677e\u9304\u82d7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u7247\u5047\u540d\u6216\u5e73\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u53e4\u5308\u7259\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u5370\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u611b\u723e\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u4ee5\u8272\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u5370\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u82f1\u5c6c\u5370\u5ea6\u6d0b\u5730\u5340"_s)
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
			$of(u"\u51b0\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u7fa9\u5927\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u5370\u5ea6\u6cb3\u6d41\u57df (\u54c8\u62c9\u5e15\u6587)"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u53e4\u610f\u5927\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u7259\u8cb7"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u7d04\u65e6"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u65e5\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\u722a\u54c7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u65e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u80af\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u5409\u723e\u5409\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u67ec\u57d4\u5be8"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u5409\u91cc\u5df4\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u845b\u6469"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u8056\u514b\u91cc\u65af\u591a\u798f\u53ca\u5c3c\u7dad\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u5317\u97d3"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u5357\u97d3"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u79d1\u5a01\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u958b\u66fc\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u54c8\u85a9\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u514b\u8036\u674e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u7247\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u5361\u7f85\u9808\u63d0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u67ec\u57d4\u5be8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u574e\u90a3\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\u97d3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"\u514b\u4f69\u5217\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u5361\u5e1d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u5bee\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u9ece\u5df4\u5ae9"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u8056\u9732\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u5217\u652f\u6566\u65af\u767b"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u65af\u91cc\u862d\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u8cf4\u6bd4\u745e\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u8cf4\u7d22\u6258"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u7acb\u9676\u5b9b"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u76e7\u68ee\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u62c9\u812b\u7dad\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u5229\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u85cd\u62ff\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u5bee\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u62c9\u4e01\u6587 (\u5c16\u89d2\u9ad4\u6d3b\u5b57\u8b8a\u9ad4)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u62c9\u4e01\u6587 (\u84cb\u723e\u8a9e\u8b8a\u9ad4)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u62c9\u4e01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u96f7\u5e03\u67e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u6797\u4f48\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u7dda\u6027\u6587\u5b57 A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u7dda\u6027\u6587\u5b57 B"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"\u9ece\u50f3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"\u6d1b\u99ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u5442\u897f\u4e9e\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u91cc\u5e95\u4e9e\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u6469\u6d1b\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u6469\u7d0d\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u6469\u723e\u591a\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u8499\u7279\u5c3c\u683c\u7f85"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u99ac\u9054\u52a0\u65af\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u99ac\u7d39\u723e\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u99ac\u5176\u9813"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u99ac\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u7dec\u7538"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u8499\u53e4"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u6fb3\u9580"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u99ac\u91cc\u4e9e\u7d0d\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u6cd5\u5c6c\u73bb\u91cc\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u8305\u5229\u5854\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u8499\u7279\u8272\u62c9\u7279\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u99ac\u723e\u4ed6"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u6a21\u91cc\u897f\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u99ac\u723e\u5730\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u99ac\u62c9\u5a01"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u58a8\u897f\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u99ac\u4f86\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u83ab\u4e09\u6bd4\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u66fc\u5b89\u5e95\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\u6469\u5c3c\u6559\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u746a\u96c5\u8c61\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"\u9580\u8fea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"\u9ea5\u7f85\u57c3\u6587\u884c\u8349"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u9ea5\u7f85\u57c3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u99ac\u4f86\u4e9e\u62c9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u8499\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u7a46\u6069\u9ad4\u76f2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u66fc\u5c3c\u666e\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u7dec\u7538\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u7d0d\u7c73\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9e\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u5c3c\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u8afe\u798f\u514b\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u5948\u53ca\u5229\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u5c3c\u52a0\u62c9\u74dc"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u8377\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u632a\u5a01"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u5c3c\u6cca\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u8afe\u9b6f"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u7d10\u5a01\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u7d10\u897f\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"\u5317\u963f\u62c9\u4f2f\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"\u7d0d\u5df4\u6cf0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"\u7d0d\u897f\u8fe6\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\u897f\u975e\u66f8\u9762\u8a9e\u8a00 (N\'Ko)"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u963f\u66fc"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u6b50\u7518\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u6851\u5854\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u9102\u723e\u6e3e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u6b50\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u6b50\u65af\u66fc\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u5df4\u62ff\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u7955\u9b6f\u5171\u548c\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u6cd5\u5c6c\u73bb\u91cc\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u5df4\u5e03\u4e9e\u7d10\u5e7e\u5167\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u83f2\u5f8b\u8cd3"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u5df4\u57fa\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u6ce2\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u8056\u76ae\u57c3\u723e\u548c\u5bc6\u514b\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u76ae\u7279\u5eb7"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u6ce2\u591a\u9ece\u5404"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u5df4\u52d2\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u8461\u8404\u7259"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u5e1b\u7409"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u5df4\u62c9\u572d"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"\u5e15\u7c73\u745e\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u53e4\u5f7c\u723e\u59c6\u8af8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u516b\u601d\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\u7891\u8a18\u6587\u6d3e\u9f8d\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u8a69\u7bc7\u96c6\u6d3e\u9f8d\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\u66f8\u7c4d\u6d3e\u9f8d\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\u8153\u5c3c\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u67cf\u683c\u7406\u62fc\u97f3\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u7891\u8a18\u6587\u5df4\u5e95\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u5361\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u7559\u5c3c\u65fa\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u7f85\u99ac\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u585e\u723e\u7dad\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u4fc4\u7f85\u65af\u806f\u90a6"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u76e7\u5b89\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u62c9\u8b93\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u6717\u683c\u6717\u683c\u8c61\u5f62\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u53e4\u5317\u6b50\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u6c99\u70cf\u5730\u963f\u62c9\u4f2f"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u7d22\u7f85\u9580\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u585e\u5e2d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u8607\u4e39"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u745e\u5178"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u65b0\u52a0\u5761"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u8056\u8d6b\u62ff\u52d2\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u65af\u6d1b\u7dad\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u51b7\u5cb8\u548c\u592e\u9ea5\u6069\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u65af\u6d1b\u4f10\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u7345\u5b50\u5c71"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u8056\u99ac\u529b\u8afe"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u585e\u5167\u52a0\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u7d22\u99ac\u5229\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u8607\u5229\u5357"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u8056\u591a\u7f8e"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u85a9\u723e\u74e6\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u6558\u5229\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u53f2\u74e6\u6fdf\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u6492\u99ac\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u6c99\u62c9\u5824\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"\u5357\u963f\u62c9\u4f2f\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u7d22\u62c9\u4ec0\u7279\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u624b\u8a9e\u66f8\u5beb\u7b26\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u7c2b\u67cf\u7d0d\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"\u4fe1\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u932b\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"\u5dfd\u4e39\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u5e0c\u6d1b\u5f1f\u7d0d\u683c\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"\u6558\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u6558\u5229\u4e9e\u6587 (\u798f\u97f3\u9ad4\u6587\u5b57\u8b8a\u9ad4)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u6558\u5229\u4e9e\u6587 (\u897f\u65b9\u6587\u5b57\u8b8a\u9ad4)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u6558\u5229\u4e9e\u6587 (\u6771\u65b9\u6587\u5b57\u8b8a\u9ad4)"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u571f\u514b\u65af\u548c\u958b\u5361\u65af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u67e5\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u6cd5\u570b\u5357\u65b9\u9818\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u591a\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u6cf0\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u5854\u5409\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u6258\u514b\u52de\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u6771\u5e1d\u6c76"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u571f\u5eab\u66fc"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u7a81\u5c3c\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u6771\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u571f\u8033\u5176"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u5343\u91cc\u9054\u53ca\u6258\u5df4\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u5410\u74e6\u9b6f"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u53f0\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u5766\u5c1a\u5c3c\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u5357\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u50a3\u54ea\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u65b0\u50a3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u5766\u7c73\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u50a3\u8d8a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u7279\u62c9\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\u8ac7\u683c\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u63d0\u975e\u7d0d (\u67cf\u67cf\u723e\u6587)"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\u5854\u52a0\u62c9\u65cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u5854\u5b89\u90a3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u6cf0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u897f\u85cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u70cf\u514b\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u70cf\u5e72\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u7f8e\u570b\u5916\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u7f8e\u570b"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u70cf\u62c9\u572d"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u70cf\u8332\u5225\u514b\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"\u70cf\u52a0\u5217\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u68b5\u5e1d\u5d17"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u8056\u6587\u68ee\u53ca\u683c\u745e\u90a3\u4e01"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u59d4\u5167\u745e\u62c9"_s)
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
			$of("VN"_s),
			$of(u"\u8d8a\u5357"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u842c\u90a3\u675c"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"\u8d8a\u5357\u6587 Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u53ef\u898b\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u6c83\u5229\u65af\u548c\u5bcc\u7a81\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u85a9\u6469\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"\u53e4\u6ce2\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u8607\u7c73\u9b6f\u4e9e\u7532\u6587\u6954\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u8449\u9580"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u99ac\u7d04\u7279\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u5f5d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u5357\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u5c1a\u6bd4\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u8f9b\u5df4\u5a01"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u907a\u50b3\u5b78\u8853\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u6578\u5b78\u7b26\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u7b26\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u64a4\u92b7\u5beb\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u4e00\u822c\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u8173\u672c\u672a\u77e5\u6216\u8005\u7121\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u963f\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of(u"\u963f\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u963f\u5e03\u54c8\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of(u"\u963f\u5e03\u54c8\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u4e9e\u9f4a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u963f\u50d1\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u963f\u7576\u83ab\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u963f\u8fea\u5404\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u963f\u672a\u65af\u5854\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u5357\u975e\u8377\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u4e9e\u975e\u8a9e\u7cfb"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u963f\u5f17\u91cc\u5e0c\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of(u"\u5357\u975e\u8377\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u963f\u4f0a\u52aa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u963f\u5bd2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of(u"\u963f\u5bd2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u963f\u5361\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of(u"\u963f\u723e\u5df4\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u963f\u7559\u7533\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of(u"\u963f\u723e\u5ca1\u6606\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u5357\u963f\u723e\u6cf0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u8863\u7d22\u6bd4\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of(u"\u8863\u7d22\u6bd4\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u4e9e\u62c9\u5ca1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u53e4\u82f1\u6587 (\u7d04\u897f\u5143 450-1100)"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u6602\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of(u"\u963f\u5e15\u5207\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u963f\u62c9\u4f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u963f\u62c9\u4f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u963f\u62c9\u7c73\u6587 (700-300 BCE)"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of(u"\u4e9e\u62c9\u5ca1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\u4e9e\u7f8e\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u963f\u52de\u574e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u963f\u62c9\u5e15\u970d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("art"_s),
			$of(u"\u4eba\u5de5\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u963f\u62c9\u74e6\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u963f\u85a9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of(u"\u963f\u85a9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u963f\u65af\u5716\u91cc\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of(u"\u963f\u85a9\u5e15\u65af\u574e\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of(u"\u6fb3\u6d32\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u963f\u74e6\u96f7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of(u"\u963f\u74e6\u96f7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of(u"\u963f\u672a\u65af\u5854\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u963f\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u4e9e\u6469\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of(u"\u4e9e\u6469\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u4e9e\u585e\u62dc\u7136\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of(u"\u4e9e\u585e\u62dc\u7136\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u5df4\u4ec0\u5580\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u73ed\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of(u"\u5df4\u7c73\u7d2f\u514b\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of(u"\u5df4\u4ec0\u5580\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u4ffe\u8def\u652f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u73ed\u5df4\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u5cc7\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of(u"\u5df4\u65af\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u5df4\u85a9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of(u"\u6ce2\u7f85\u7684\u6d77\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u767d\u4fc4\u7f85\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u8c9d\u624e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u767d\u4fc4\u7f85\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u5225\u59c6\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of(u"\u5b5f\u52a0\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of(u"\u67cf\u67cf\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"\u6bd4\u54c8\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u535a\u5091\u666e\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u6bd4\u65af\u62c9\u99ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of(u"\u6bd4\u54c8\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u6bd4\u79d1\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u6bd4\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of(u"\u6bd4\u65af\u62c9\u99ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u932b\u514b\u932b\u5361\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u73ed\u5df4\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u5b5f\u52a0\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of(u"\u73ed\u5716\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u897f\u85cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of(u"\u6ce2\u58eb\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u4e0d\u5217\u5854\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u5e03\u62c9\u6770\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u4e0d\u5217\u5854\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u6ce2\u58eb\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of(u"\u5df4\u5854\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u5e03\u91cc\u963f\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u5e03\u5409\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of(u"\u4fdd\u52a0\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of(u"\u7dec\u7538\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u5e03\u6797\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u5609\u6cf0\u7f85\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u5361\u591a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of(u"\u4e2d\u7f8e\u5370\u7b2c\u5b89\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u5df4\u52d2\u6bd4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of(u"\u5609\u6cf0\u7f85\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of(u"\u9ad8\u52a0\u7d22\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u8d64\u6b3d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u5bbf\u9727\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of(u"\u51f1\u723e\u7279\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u67e5\u6469\u6d1b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cha"_s),
			$of(u"\u67e5\u6469\u6d1b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u5947\u5e03\u67e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u8eca\u81e3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u67e5\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of(u"\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u8655\u5947\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u99ac\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u5951\u5974\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u55ac\u514b\u6258\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u5947\u4f69\u74e6\u63da\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u67f4\u7f85\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of(u"\u6559\u6703\u65af\u62c9\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of(u"\u695a\u74e6\u58eb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u6c99\u4f0a\u5b89\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of(u"\u67e5\u7c73\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u79d1\u897f\u5609\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u79d1\u666e\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of(u"\u5eb7\u74e6\u8033\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of(u"\u79d1\u897f\u5609\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of(u"\u6b50\u6d32\u8154\u8abf\u548c\u6d0b\u6d87\u6ff1\uff0c\u6e90\u81ea\u82f1\u6587\u7684(\u5176\u4ed6)"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"\u6b50\u6d32\u8154\u8abf\u548c\u6d0b\u6d87\u6ff1\uff0c\u6e90\u81ea\u6cd5\u6587\u7684(\u5176\u4ed6)"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of(u"\u6b50\u6d32\u8154\u8abf\u548c\u6d0b\u6d87\u6ff1\uff0c\u6e90\u81ea\u8461\u8404\u7259\u6587\u7684(\u5176\u4ed6)"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u514b\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of(u"\u514b\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u514b\u91cc\u7c73\u4e9e\u534a\u5cf6\u7684\u571f\u8033\u5176\u6587\uff1b\u514b\u91cc\u7c73\u4e9e\u534a\u5cf6\u7684\u5854\u5854\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of(u"\u5176\u4ed6\u514b\u91cc\u5967\u723e\u6df7\u548c\u8a9e\u7cfb"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u6377\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u5361\u8212\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u6559\u6703\u65af\u62c9\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of(u"\u5eab\u65bd\u7279\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u695a\u74e6\u58eb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u5a01\u723e\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cze"_s),
			$of(u"\u6377\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u4e39\u9ea5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u9054\u79d1\u4ed6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of(u"\u4e39\u9ea5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u9054\u723e\u683c\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of(u"\u8fea\u96c5\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u5fb7\u62c9\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u65af\u62c9\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u591a\u683c\u91cc\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u4e01\u5361\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("div"_s),
			$of(u"\u8fea\u7dad\u897f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u591a\u683c\u4f86\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dra"_s),
			$of(u"\u5fb7\u62c9\u5a01\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u4e0b\u7d22\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u675c\u4e9e\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u4e2d\u53e4\u8377\u862d\u6587 (\u7d04 1050-1350)"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"\u8377\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u8fea\u7dad\u897f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u8fea\u5c24\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u4e0d\u4e39\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of(u"\u4e0d\u4e39\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u57c3\u7dad\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u57c3\u83f2\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u53e4\u57c3\u53ca\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u827e\u5361\u6731\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u5e0c\u81d8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u827e\u62c9\u7c73\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of(u"\u82f1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u4e2d\u53e4\u82f1\u6587 (1100-1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u4e16\u754c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of(u"\u4e16\u754c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u897f\u73ed\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of(u"\u611b\u6c99\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u611b\u6c99\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u5df4\u65af\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ewe"_s),
			$of(u"\u57c3\u7dad\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u4f9d\u6c6a\u90fd\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u6ce2\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u82b3\u65cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"\u6cd5\u7f85\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u82b3\u8482\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u5bcc\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u82ac\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of(u"\u6590\u6fdf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u83f2\u5f8b\u8cd3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of(u"\u82ac\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of(u"\u82ac\u70cf\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u6590\u6fdf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u6cd5\u7f85\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u8c50\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of(u"\u6cd5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u4e2d\u53e4\u6cd5\u6587 (\u7d04 1400-1600)"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u53e4\u6cd5\u6587 (842-\u7d04 1400)"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u5317\u5f17\u91cc\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u6771\u5f17\u91cc\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of(u"\u897f\u5f17\u91cc\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of(u"\u5bcc\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u5f17\u7559\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u5f17\u5229\u7136\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u611b\u723e\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u52a0\u65cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u52a0\u7d04\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u845b\u5df4\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u8607\u683c\u862d\u84cb\u723e\u65b9\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of(u"\u5176\u4ed6\u65e5\u8033\u66fc\u8a9e\u7cfb"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of(u"\u55ac\u6cbb\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of(u"\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u5409\u8332\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u5409\u723e\u4f2f\u7279\u7fa4\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u52a0\u91cc\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of(u"\u84cb\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of(u"\u611b\u723e\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of(u"\u52a0\u91cc\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of(u"\u66fc\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u4e2d\u53e4\u9ad8\u5730\u5fb7\u6587 (\u7d04 1050-1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u74dc\u62c9\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u53e4\u9ad8\u5730\u5fb7\u6587 (\u7d04 750-1050)"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u5ca1\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u79d1\u9686\u9054\u7f85\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u54e5\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u683c\u5217\u535a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u53e4\u5e0c\u81d8\u6587 (\u76f4\u5230 1453)"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of(u"\u4e2d\u53e4\u5e0c\u81d8\u6587 (1453-)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of(u"\u74dc\u62c9\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u5fb7\u6587 (\u745e\u58eb)"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u53e4\u5409\u62c9\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of(u"\u53e4\u5409\u62c9\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u66fc\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u572d\u5951\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u8c6a\u85a9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u6d77\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of(u"\u6d77\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of(u"\u8c6a\u85a9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u590f\u5a01\u5937\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u5e0c\u4f2f\u4f86\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of(u"\u5e0c\u4f2f\u4f86\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of(u"\u8d6b\u96f7\u7f85\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u5317\u5370\u5ea6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u5e0c\u5229\u84cb\u8fb2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("him"_s),
			$of(u"\u8d6b\u99ac\u67e5\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of(u"\u5317\u5370\u5ea6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u8d6b\u68af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u5b5f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of(u"\u65b0\u91cc\u6728\u6258\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u65b0\u91cc\u6728\u6258\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u514b\u7f85\u57c3\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hrv"_s),
			$of(u"\u514b\u7f85\u57c3\u897f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u4e0a\u7d22\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u6d77\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u5308\u7259\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of(u"\u5308\u7259\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u80e1\u5e15\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u4e9e\u7f8e\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u8d6b\u96f7\u7f85\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u4eba\u5de5\u570b\u969b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u4f0a\u73ed\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ibo"_s),
			$of(u"\u4f0a\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of(u"\u51b0\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u5370\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ido"_s),
			$of(u"\u4f0a\u591a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u4eba\u5de5\u570b\u969b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u4f0a\u5e03\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u56db\u5ddd\u5937\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("iii"_s),
			$of(u"\u56db\u5ddd\u5937\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of(u"\u4f0a\u55ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u4f9d\u5974\u76ae\u7dad\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("iku"_s),
			$of(u"\u4f0a\u52aa\u4f0a\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ile"_s),
			$of(u"\u4eba\u5de5\u570b\u969b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u4f0a\u6d1b\u95ca\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"\u5370\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of(u"\u4eba\u5de5\u570b\u969b\u6587 (\u570b\u969b\u8f14\u52a9\u8a9e\u8a00\u5354\u6703)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of(u"\u5370\u5ea6\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of(u"\u5370\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of(u"\u5370\u6b50\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u5370\u53e4\u4ec0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u4f0a\u591a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of(u"\u4f9d\u5974\u76ae\u7dad\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of(u"\u4f0a\u6717\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of(u"\u6613\u6d1b\u9b41\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u51b0\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u7fa9\u5927\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ita"_s),
			$of(u"\u7fa9\u5927\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u611b\u65af\u57fa\u6469\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"\u5e0c\u4f2f\u4f86\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u65e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of(u"\u722a\u54c7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u908f\u8f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"\u610f\u7b2c\u7dd2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of(u"\u65e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u7336\u592a\u6559-\u6ce2\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u7336\u592a\u963f\u62c9\u4f2f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u722a\u54c7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u55ac\u6cbb\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u5361\u62c9\u5361\u723e\u5e15\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u5361\u6bd4\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u5361\u7434\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of(u"\u683c\u9675\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u5361\u59c6\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kan"_s),
			$of(u"\u574e\u90a3\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kar"_s),
			$of(u"\u514b\u502b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of(u"\u5580\u4ec0\u7c73\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kau"_s),
			$of(u"\u5361\u52aa\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u5361\u5a01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of(u"\u54c8\u85a9\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u5361\u5df4\u723e\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u525b\u679c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u5361\u897f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of(u"\u79d1\u4f9d\u6851\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of(u"\u4e2d\u592e\u67ec\u57d4\u5be8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u548c\u95d0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u57fa\u5eab\u7336\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kik"_s),
			$of(u"\u57fa\u5eab\u7336\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kin"_s),
			$of(u"\u91d1\u63da\u842c\u7b54\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of(u"\u5409\u723e\u5409\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u5361\u7063\u4e9e\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u54c8\u85a9\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u683c\u9675\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u67ec\u57d4\u5be8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u91d1\u90a6\u675c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u574e\u90a3\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u97d3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u8ca2\u6839\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kom"_s),
			$of(u"\u79d1\u5bc6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kon"_s),
			$of(u"\u525b\u679c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of(u"\u97d3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u79d1\u65af\u96f7\u6069\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u514b\u4f69\u5217\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u5361\u52aa\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u5361\u62c9\u67f4-\u5305\u723e\u5361\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u5361\u7d2f\u5229\u963f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"\u514b\u9b6f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u5eab\u9b6f\u79d1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u5580\u4ec0\u7c73\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u5eab\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of(u"\u95dc\u4e9e\u99ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u5eab\u5bc6\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of(u"\u5eab\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u5eab\u7279\u5948\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u79d1\u5bc6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u5eb7\u74e6\u8033\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u5409\u723e\u5409\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u62c9\u4e01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u62c9\u8fea\u8afe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u62c9\u4ea8\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u862d\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of(u"\u5bee\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of(u"\u62c9\u4e01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of(u"\u62c9\u812b\u7dad\u4e9e\u6587 (\u5217\u7279\u6587)"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u76e7\u68ee\u5821\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u83dc\u8332\u4f9d\u6602\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u5e72\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u6797\u5821\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of(u"\u5229\u535a\u574e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of(u"\u9675\u52a0\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of(u"\u7acb\u9676\u5b9b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u9675\u52a0\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u5bee\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u8292\u6208\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u6d1b\u9f4a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u7acb\u9676\u5b9b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of(u"\u76e7\u68ee\u5821\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u76e7\u5df4-\u52a0\u4e39\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u9b6f\u5df4\u9b6f\u9b6f\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lub"_s),
			$of(u"\u76e7\u5df4-\u52a0\u4e39\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lug"_s),
			$of(u"\u5e72\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u8def\u6613\u585e\u8afe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u76e7\u6069\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u76e7\u5967\u6587 (\u80af\u4e9e\u8207\u5766\u5c1a\u5c3c\u4e9e)"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u76e7\u6652\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u62c9\u812b\u7dad\u4e9e\u6587 (\u5217\u7279\u6587)"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of(u"\u99ac\u5176\u9813\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u99ac\u90fd\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u99ac\u52a0\u4f0a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of(u"\u99ac\u7d39\u723e\u7fa4\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u9081\u8482\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u671b\u52a0\u932b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of(u"\u99ac\u4f86\u4e9e\u62c9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u66fc\u4e01\u54e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of(u"\u6bdb\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of(u"\u5357\u5cf6\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of(u"\u99ac\u62c9\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u99ac\u8cfd\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of(u"\u99ac\u4f86\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u83ab\u514b\u6c99\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u66fc\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u9580\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u99ac\u62c9\u52a0\u897f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u4e2d\u53e4\u611b\u723e\u862d\u6587 (900-1200)"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u99ac\u7d39\u723e\u7fa4\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u6bdb\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u7c73\u514b\u99ac\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u7c73\u5357\u5361\u5821\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of(u"\u6df7\u96dc\u8a9e\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u99ac\u5176\u9813\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of(u"\u5b5f\u9ad8\u68c9\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u99ac\u4f86\u4e9e\u62c9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of(u"\u99ac\u62c9\u52a0\u897f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of(u"\u99ac\u723e\u4ed6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u8499\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u6eff\u65cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u66fc\u5c3c\u666e\u88e1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of(u"\u99ac\u8afe\u535a\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"\u6469\u723e\u9054\u7dad\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u83ab\u970d\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of(u"\u8499\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u83ab\u897f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u99ac\u62c9\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u99ac\u4f86\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u99ac\u723e\u4ed6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u591a\u7a2e\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of(u"\u8499\u9054\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u514b\u91cc\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u7c73\u862d\u5fb7\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u99ac\u723e\u5c3c\u88e1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u7dec\u7538\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of(u"\u99ac\u96c5\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u5384\u723e\u8332\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u8afe\u9b6f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of(u"\u7d0d\u74e6\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of(u"\u5317\u7f8e\u5370\u7b2c\u5b89\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u62ff\u6ce2\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of(u"\u8afe\u9b6f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of(u"\u7d0d\u74e6\u8377\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u632a\u5a01\u6ce2\u514b\u9ed8\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of(u"\u5357\u6069\u5fb7\u6bd4\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u5317\u6069\u5fb7\u8c9d\u52d2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of(u"\u5317\u6069\u5fb7\u6bd4\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of(u"\u6069\u6771\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u4f4e\u5730\u5fb7\u6587; \u4f4e\u5730\u6492\u514b\u905c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u5c3c\u6cca\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of(u"\u5c3c\u6cca\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u5c3c\u74e6\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u6069\u6771\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u5c3c\u4e9e\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u5c3c\u52a0\u62c9\u74dc\u79d1\u591a\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u7d10\u57c3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u8377\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u632a\u5a01(\u8010\u8afe\u65af\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of(u"\u632a\u5a01\u8010\u8afe\u65af\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u632a\u5a01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"\u535a\u514b\u99ac\u723e\u6587\uff0c\u632a\u5a01"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u8afe\u84cb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u53e4\u8afe\u723e\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of(u"\u632a\u5a01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u897f\u975e\u66f8\u9762\u8a9e\u8a00 (N\'Ko)"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u5357\u6069\u5fb7\u8c9d\u52d2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u5317\u7d22\u6258\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of(u"\u52aa\u6bd4\u4e9e\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u7d0d\u74e6\u8377\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u53e4\u5c3c\u74e6\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u5c3c\u63da\u8cc8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nya"_s),
			$of(u"\u9f4a\u5207\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u5c3c\u63da\u97cb\u9f4a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u5c3c\u63da\u79d1\u840a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u5c3c\u5967\u56c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u5c3c\u8332\u99ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u5967\u897f\u5766\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of(u"\u6b50\u897f\u5766\u6587 (\u524d 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u5967\u6770\u5e03\u97cb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of(u"\u5967\u6770\u5e03\u97cb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u5967\u7f85\u8499\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u6b50\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of(u"\u6b50\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of(u"\u5967\u7f85\u8499\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u5967\u585e\u68af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u6b50\u585e\u5947\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of(u"\u5967\u585e\u68af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u9102\u5716\u66fc\u571f\u8033\u5176\u6587 (1500-1928)"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of(u"\u5967\u6258\u7c73\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u65c1\u906e\u666e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of(u"\u5df4\u5e03\u4e9e\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u6f58\u52a0\u8f9b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u5df4\u5217\u7dad\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u6f58\u5e15\u5609\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of(u"\u65c1\u906e\u666e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u5e15\u76ae\u963f\u9580\u6258\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u5e1b\u7409\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u53e4\u6ce2\u65af\u6587 (ca.600-400 B.C.)"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of(u"\u6ce2\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of(u"\u83f2\u5f8b\u8cd3\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u8153\u5c3c\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u5e15\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u6ce2\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of(u"\u5e15\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of(u"\u6ce2\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u6ce2\u90a3\u8c9d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of(u"\u8461\u8404\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of(u"\u666e\u62c9\u514b\u91cc\u7279\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u53e4\u666e\u7f85\u6587\u65af\u6587 (\u76f4\u5230 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u666e\u4ec0\u5716\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u8461\u8404\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("pus"_s),
			$of(u"\u666e\u4ec0\u5716\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u84cb\u695a\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("que"_s),
			$of(u"\u84cb\u695a\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u62c9\u8cc8\u65af\u5766\u8af8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u5fa9\u6d3b\u5cf6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u62c9\u7f85\u901a\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u91cc\u6258\u7f85\u66fc\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u79d1\u9686\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u7f85\u99ac\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of(u"\u7f85\u66fc\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of(u"\u7f85\u66fc\u4ec0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u5409\u666e\u8cfd\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u4fc4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of(u"\u7f85\u99ac\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of(u"\u79d1\u9686\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u7f85\u99ac\u5c3c\u4e9e\u8a9e\u7cfb"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of(u"\u4fc4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u91d1\u63da\u842c\u7b54\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u68b5\u6587\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u6851\u9054\u97cb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of(u"\u6851\u6208\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u96c5\u5eab\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of(u"\u5176\u4ed6\u5357\u7f8e\u5370\u7b2c\u5b89\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of(u"\u85a9\u5229\u4ec0\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u85a9\u746a\u5229\u4e9e\u963f\u62c9\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of(u"\u68b5\u6587\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u6492\u6492\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u6563\u5854\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u85a9\u4e01\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u897f\u897f\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u8607\u683c\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u4fe1\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u5317\u6c99\u5bc6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u745f\u723e\u5361\u666e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of(u"\u9583\u8a9e\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u6851\u683c\u9b6f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u53e4\u611b\u723e\u862d\u6587 (\u81f3 900)"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of(u"\u624b\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u64a3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u932b\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u5e0c\u9054\u6469\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of(u"\u932b\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of(u"\u8607\u8a9e\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u6f22\u85cf\u8a9e\u7cfb"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u65af\u6d1b\u4f10\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u65af\u62c9\u7dad\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sla"_s),
			$of(u"\u65af\u62c9\u592b\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of(u"\u65af\u6d1b\u4f10\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of(u"\u65af\u6d1b\u7dad\u5c3c\u4e9e\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u85a9\u6469\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u5357\u85a9\u7c73\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of(u"\u5317\u6c99\u5bc6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of(u"\u85a9\u7c73\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u9b6f\u52d2\u85a9\u7c73\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u4f0a\u7d0d\u88e1\u85a9\u7c73\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of(u"\u85a9\u6469\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u65af\u79d1\u7279\u85a9\u7c73\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u980c\u54c8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of(u"\u980c\u54c8\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of(u"\u4fe1\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u7d22\u5c3c\u57fa\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u7d22\u99ac\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u7d22\u683c\u5e95\u4e9e\u7d0d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of(u"\u7d22\u99ac\u5229\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of(u"\u6851\u6d77\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of(u"\u7d22\u6258\u6587, \u5357\u90e8"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of(u"\u897f\u73ed\u7259\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u963f\u723e\u5df4\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u585e\u723e\u7dad\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u85a9\u4e01\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"Sranan Tongo (\u6e90\u65bc\u514b\u91cc\u5967\u723e\u8a9e)"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of(u"\u585e\u723e\u7dad\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u585e\u96f7\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u897f\u65af\u74e6\u63d0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of(u"\u5c3c\u7f85\u6492\u54c8\u62c9\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of(u"\u897f\u65af\u74e6\u63d0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u8cf4\u7d22\u6258\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u5dfd\u4e39\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u8607\u5eab\u99ac\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of(u"\u5dfd\u4e39\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u8607\u8607\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u8607\u7f8e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u745e\u5178\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u53f2\u74e6\u897f\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("swa"_s),
			$of(u"\u53f2\u74e6\u897f\u91cc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of(u"\u745e\u5178\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u53e4\u6558\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u6558\u5229\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u5766\u7c73\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of(u"\u5927\u6eaa\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of(u"\u50a3\u8a9e\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of(u"\u5766\u7c73\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of(u"\u97c3\u977c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u7279\u62c9\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tel"_s),
			$of(u"\u7279\u62c9\u53e4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u63d0\u59c6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u6cf0\u96f7\u8afe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u6cf0\u9813\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u5854\u5409\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of(u"\u5854\u5409\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of(u"\u5854\u52a0\u62c9\u65cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u6cf0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of(u"\u6cf0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u63d0\u683c\u5229\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of(u"\u897f\u85cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u8482\u683c\u96f7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of(u"\u63d0\u683c\u5229\u5c3c\u4e9e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u63d0\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u571f\u5eab\u66fc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"\u6258\u514b\u52de\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u5854\u52a0\u62c9\u65cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u514b\u6797\u8ca2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u7279\u6797\u57fa\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\u5854\u99ac\u5947\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u585e\u8332\u74e6\u7d0d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u6771\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u6771\u52a0\u6587(\u5c3c\u4e9e\u85a9\u6587)"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of(u"\u6771\u52a0\u6587 (\u6771\u52a0\u7fa4\u5cf6)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u6258\u6bd4\u8f9b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u571f\u8033\u5176\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u980c\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u6b3d\u897f\u5b89\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tsn"_s),
			$of(u"\u585e\u8332\u74e6\u7d0d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tso"_s),
			$of(u"\u980c\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u97c3\u977c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of(u"\u571f\u5eab\u66fc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u5716\u59c6\u5e03\u5361\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of(u"\u5716\u76ae\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of(u"\u571f\u8033\u5176\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of(u"\u963f\u723e\u6cf0\u8af8\u8a9e\u8a00 (\u5176\u4ed6)"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u5410\u74e6\u9b6f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u5951\u7dad\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of(u"\u5951\u7dad\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u5927\u6eaa\u5730\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u571f\u51e1\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u6c83\u8482\u827e\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u7dad\u543e\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"\u70cf\u52a0\u5217\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of(u"\u7dad\u543e\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u70cf\u514b\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of(u"\u70cf\u514b\u862d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u59c6\u672c\u675c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u672a\u78ba\u5b9a\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u70cf\u90fd\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of(u"\u70cf\u90fd\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u70cf\u8332\u5225\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of(u"\u70cf\u8332\u5225\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u8d8a\u5357\u6587 Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u6587\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ven"_s),
			$of(u"\u6587\u9054\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u8d8a\u5357\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of(u"\u8d8a\u5357\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u6c83\u62c9\u666e\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of(u"\u6c83\u62c9\u666e\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u6c83\u63d0\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u83ef\u9686\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of(u"\u74e6\u5361\u4ec0\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u74e6\u62c9\u83ab\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u74e6\u745e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u74e6\u7d39\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of(u"\u5a01\u723e\u65af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of(u"\u7d22\u5e03\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of(u"\u83ef\u9686\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u6c83\u6d1b\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of(u"\u6c83\u6d1b\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u5361\u723e\u6885\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u5ed3\u85a9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("xho"_s),
			$of(u"\u5ed3\u85a9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u7464\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u96c5\u6d66\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u610f\u7b2c\u7dd2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of(u"\u610f\u7b2c\u7dd2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u512a\u9b6f\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("yor"_s),
			$of(u"\u512a\u9b6f\u5df4\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ypk"_s),
			$of(u"\u5c24\u76ae\u514b\u8af8\u8a9e\u8a00"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u58ef\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u85a9\u6ce2\u7279\u514b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\u5e03\u5217\u65af\u7b26\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u6fa4\u7d0d\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of(u"\u58ef\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of(u"\u8d0a\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u7956\u9b6f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of(u"\u7956\u9b6f\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u7956\u5c3c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u7121\u8a9e\u8a00\u5167\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u624e\u624e\u6587"_s)
		})
	});
}

LocaleNames_zh_TW::LocaleNames_zh_TW() {
}

$Class* LocaleNames_zh_TW::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh_TW, name, initialize, &_LocaleNames_zh_TW_ClassInfo_, allocate$LocaleNames_zh_TW);
	return class$;
}

$Class* LocaleNames_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun