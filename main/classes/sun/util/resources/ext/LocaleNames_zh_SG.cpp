#include <sun/util/resources/ext/LocaleNames_zh_SG.h>

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

$MethodInfo _LocaleNames_zh_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_zh_SG::*)()>(&LocaleNames_zh_SG::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_zh_SG_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_zh_SG",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_SG_MethodInfo_
};

$Object* allocate$LocaleNames_zh_SG($Class* clazz) {
	return $of($alloc(LocaleNames_zh_SG));
}

void LocaleNames_zh_SG::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_zh_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u7f8e\u5c5e\u8428\u6469\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u6fb3\u6d32"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u6ce2\u65af\u5c3c\u4e9a\u548c\u9ed1\u585e\u54e5\u7ef4\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u5b5f\u52a0\u62c9\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u5e03\u7ef4\u7279\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u4f2f\u5229\u5179"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u79d1\u79d1\u65af\uff08\u57fa\u6797\uff09\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u521a\u679c\uff08\u91d1\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u521a\u679c\uff08\u5e03\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u6377\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u591a\u7c73\u5c3c\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u5384\u7acb\u7279\u91cc\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u798f\u514b\u5170\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u5bc6\u514b\u7f57\u5c3c\u897f\u4e9a\u8054\u90a6"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u5357\u4f50\u6cbb\u4e9a\u548c\u5357\u4e09\u660e\u6cbb\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u51e0\u5185\u4e9a\u6bd4\u7ecd"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u4e2d\u56fd\u9999\u6e2f\u7279\u522b\u884c\u653f\u533a"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u8d6b\u5fb7\u4e0e\u9ea6\u514b\u5510\u7eb3\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u5370\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u5409\u5c14\u5409\u65af\u65af\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u5317\u671d\u9c9c"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u5357\u97e9"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u8001\u631d\u4eba\u6c11\u6c11\u4e3b\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u9a6c\u5176\u987f"_s)
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
			$of(u"\u9a6c\u63d0\u5c3c\u514b\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u8499\u585e\u62c9\u7279\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u65b0\u5361\u91cc\u591a\u5c3c\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u7ebd\u57c3"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u7ebd\u897f\u5170"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u6cd5\u5c5e\u6ce2\u5229\u5c3c\u897f\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u5723\u76ae\u57c3\u5c14\u548c\u5bc6\u514b\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u76ae\u7279\u51ef\u6069"_s)
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
			$of("RE"_s),
			$of(u"\u7559\u5c3c\u6c6a"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u6c99\u5730\u963f\u62c9\u4f2f"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u5723\u8d6b\u52d2\u62ff"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u65af\u74e6\u5c14\u5df4\u7279\u548c\u626c\u9a6c\u5ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u585e\u62c9\u5229\u6602"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u7279\u514b\u65af\u548c\u51ef\u79d1\u65af\u7fa4\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u6cd5\u5c5e\u5357\u90e8\u9886\u571f"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u6258\u514b\u52b3"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u53f0\u6e7e"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u7f8e\u56fd\u8fb9\u8fdc\u5c0f\u5c9b"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u74e6\u5229\u65af\u548c\u5bcc\u56fe\u7eb3"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u8428\u6469\u4e9a"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u9a6c\u7ea6\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u963f\u7ef4\u65af\u5854\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u963f\u80af\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u85cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u514b\u91cc\u65cf\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u5b97\u6559\u65af\u62c9\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u592b\u62c9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u82cf\u683c\u5170\u76d6\u5c14\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u9a6c\u6069\u5c9b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u5e0c\u91cc\u83ab\u56fe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u56fd\u9645\u6587 A"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u56fd\u9645\u6587 E"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u4f0a\u683c\u535a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u56db\u5ddd\u8bdd"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u4f0a\u52aa\u4f0a\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u5bbd\u4e9a\u739b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u574e\u7eb3\u8fbe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u97e9\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u51ef\u5c14\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u5362\u5e72\u8fbe\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u6dcb\u5e03\u5c14\u5409\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u9c81\u5df4\u52a0\u4e39\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u62c9\u8131\u7ef4\u4e9a\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u5317\u6069\u5fb7\u8d1d\u52d2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u5357\u90e8\u6069\u5fb7\u8d1d\u52d2\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u5c3c\u626c\u8d3e\u6587\uff1b\u9f50\u5207\u74e6\u6587\uff1b\u5207\u74e6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u5965\u514b\u897f\u5510\u6587(1500\u4ee5\u540e)"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u5965\u6d1b\u83ab\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u5217\u6258\uff0d\u7f57\u66fc\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u8428\u4e01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u4fe1\u5fb7\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u5317\u8428\u7c73\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u7ecd\u7eb3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u65af\u74e6\u7279\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u5dfd\u4ed6\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u4ed6\u52a0\u7984\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u585e\u8328\u74e6\u7eb3\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u5b97\u52a0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u5854\u5854\u5c14\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u7279\u5a01\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u5854\u897f\u63d0\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u74e6\u9686\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u6c83\u6d1b\u592b\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u79d1\u8428\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u58ee\u8bed"_s)
		})
	});
}

LocaleNames_zh_SG::LocaleNames_zh_SG() {
}

$Class* LocaleNames_zh_SG::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh_SG, name, initialize, &_LocaleNames_zh_SG_ClassInfo_, allocate$LocaleNames_zh_SG);
	return class$;
}

$Class* LocaleNames_zh_SG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun