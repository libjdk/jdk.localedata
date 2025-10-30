#include <sun/util/resources/cldr/ext/CurrencyNames_zh_Hant_HK.h>

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

$MethodInfo _CurrencyNames_zh_Hant_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_zh_Hant_HK::*)()>(&CurrencyNames_zh_Hant_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_zh_Hant_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_zh_Hant_HK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_Hant_HK_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_Hant_HK($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_Hant_HK));
}

void CurrencyNames_zh_Hant_HK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_Hant_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of(u"\u20a9"_s)
		}),
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("NT$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u963f\u62c9\u4f2f\u806f\u5408\u914b\u9577\u570b\u8fea\u723e\u6c57"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u6fb3\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u963f\u9b6f\u5df4\u76fe"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u4e9e\u585e\u62dc\u7586\u99ac\u7d0d\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u6ce2\u65af\u5c3c\u4e9e-\u8d6b\u585e\u54e5\u7dad\u7d0d\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u6ce2\u65af\u5c3c\u4e9e-\u8d6b\u585e\u54e5\u7dad\u7d0d\u53ef\u8f49\u63db\u99ac\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u5df4\u5df4\u591a\u65af\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u6bd4\u5229\u6642\u6cd5\u90ce\uff08\u53ef\u514c\u63db\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u5e03\u9686\u8fea\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u767e\u6155\u9054\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u535a\u8328\u74e6\u7d0d\u666e\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u4f2f\u5229\u8332\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u52a0\u62ff\u5927\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u54e5\u65af\u9054\u9ece\u52a0\u79d1\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u4f5b\u5f97\u89d2\u57c3\u65af\u5eab\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u5409\u5e03\u63d0\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u591a\u7c73\u5c3c\u52a0\u62ab\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u57c3\u585e\u4fc4\u6bd4\u4e9e\u6bd4\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u683c\u9b6f\u5409\u4e9e\u62c9\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u52a0\u7d0d\u585e\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u5ca1\u6bd4\u4e9e\u9054\u62c9\u897f"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u5371\u5730\u99ac\u62c9\u683c\u67e5\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u6e2f\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u514b\u7f85\u5730\u4e9e\u5eab\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u610f\u5927\u5229\u91cc\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u80af\u96c5\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u67ec\u57d4\u5be8\u91cc\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u5317\u97d3\u571c"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u54c8\u85a9\u514b\u5766\u5409"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u8001\u64be\u57fa\u666e"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u5229\u6bd4\u5229\u4e9e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u6469\u723e\u591a\u74e6\u5217\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u6bdb\u91cc\u5854\u5c3c\u4e9e\u70cf\u5409\u4e9e (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u6bdb\u91cc\u5854\u5c3c\u4e9e\u70cf\u5409\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u6bdb\u91cc\u88d8\u65af\u76e7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u99ac\u723e\u4ee3\u592b\u76e7\u975e\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u83ab\u6851\u6bd4\u514b\u6885\u8482\u5361\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u5c3c\u65e5\u5229\u4e9e\u5948\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u7d10\u897f\u862d\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u963f\u66fc\u91cc\u5967"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u5df4\u5e03\u4e9e\u65b0\u5e7e\u5167\u4e9e\u57fa\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u5361\u5854\u723e\u91cc\u4e9e\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u585e\u723e\u7dad\u4e9e\u7b2c\u7d0d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u76e7\u65fa\u9054\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u6c99\u7279\u963f\u62c9\u4f2f\u91cc\u4e9e\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u6240\u7f85\u9580\u7fa4\u5cf6\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u585e\u820c\u723e\u76e7\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u65b0\u52a0\u5761\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u585e\u62c9\u5229\u6602\u5229\u6602"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u7d22\u99ac\u91cc\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u8607\u91cc\u5357\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u8056\u591a\u7f8e\u548c\u666e\u6797\u897f\u6bd4\u591a\u5e03\u62c9 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u8056\u591a\u7f8e\u548c\u666e\u6797\u897f\u6bd4\u591a\u5e03\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u654d\u5229\u4e9e\u938a"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u65af\u5a01\u58eb\u862d\u91cc\u6717\u5409\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u6e6f\u52a0\u6f58\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u5343\u91cc\u9054\u548c\u591a\u5df4\u54e5\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u5766\u6851\u5c3c\u4e9e\u5148\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u74e6\u52aa\u963f\u5716\u74e6\u5716"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u4e2d\u975e\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u6771\u52a0\u52d2\u6bd4\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u591a\u54e5\u975e\u6d32\u5171\u540c\u9ad4\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u592a\u5e73\u6d0b\u6cd5\u90ce"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u4e5f\u9580\u91cc\u96c5"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u8d0a\u6bd4\u4e9e\u514b\u74e6\u67e5"_s)
		})
	}));
	return data;
}

CurrencyNames_zh_Hant_HK::CurrencyNames_zh_Hant_HK() {
}

$Class* CurrencyNames_zh_Hant_HK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_Hant_HK, name, initialize, &_CurrencyNames_zh_Hant_HK_ClassInfo_, allocate$CurrencyNames_zh_Hant_HK);
	return class$;
}

$Class* CurrencyNames_zh_Hant_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun