#include <sun/util/resources/cldr/ext/TimeZoneNames_yue.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_yue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_yue::*)()>(&TimeZoneNames_yue::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_yue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_yue",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_yue_MethodInfo_
};

$Object* allocate$TimeZoneNames_yue($Class* clazz) {
	return $of($alloc(TimeZoneNames_yue));
}

void TimeZoneNames_yue::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_yue::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\u683c\u6797\u5a01\u6cbb\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"\u827e\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u827e\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u827e\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"\u963f\u76ae\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u963f\u76ae\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u963f\u76ae\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"\u5eab\u514b\u7fa4\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5eab\u514b\u7fa4\u5cf6\u534a\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5eab\u514b\u7fa4\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"\u53e4\u5df4\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u53e4\u5df4\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u53e4\u5df4\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"\u6590\u6fdf\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6590\u6fdf\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6590\u6fdf\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u6ce2\u65af\u7063\u6d77\u57df\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"\u79d1\u5e03\u591a\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u79d1\u5e03\u591a\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u79d1\u5e03\u591a\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u4f0a\u6717\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4f0a\u6717\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4f0a\u6717\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"\u7d10\u57c3\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"\u9102\u6728\u65af\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u9102\u6728\u65af\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u9102\u6728\u65af\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"\u79d8\u9b6f\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u79d8\u9b6f\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u79d8\u9b6f\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"\u695a\u514b\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"\u5a01\u514b\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Casey, $new($StringArray, {
		u"\u51f1\u897f\u7ad9\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\u667a\u5229\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u667a\u5229\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u667a\u5229\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u4e2d\u570b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e2d\u570b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e2d\u570b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"\u79d1\u79d1\u65af\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"\u6234\u7dad\u65af\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u5370\u5ea6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\u65e5\u672c\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u65e5\u672c\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u65e5\u672c\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\u97d3\u570b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u97d3\u570b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u97d3\u570b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"\u8afe\u9b6f\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"\u5c3c\u6cca\u723e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"\u5e1b\u7409\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"\u85a9\u6469\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u85a9\u6469\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u85a9\u6469\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"\u662d\u548c\u57fa\u5730\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"\u6771\u52a0\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6771\u52a0\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6771\u52a0\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"\u963f\u62c9\u65af\u52a0\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u963f\u62c9\u65af\u52a0\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u963f\u62c9\u65af\u52a0\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"\u4e9e\u99ac\u905c\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u99ac\u905c\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u99ac\u905c\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"\u963f\u90a3\u5e95\u6cb3\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u963f\u90a3\u5e95\u6cb3\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u963f\u7d0d\u5fb7\u723e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"\u4e9e\u901f\u723e\u7fa4\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u901f\u723e\u7fa4\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u901f\u723e\u7fa4\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"\u4e0d\u4e39\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"\u6c76\u840a\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"\u5fa9\u6d3b\u7bc0\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5fa9\u6d3b\u7bc0\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5fa9\u6d3b\u7bc0\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\u84cb\u4e9e\u90a3\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u4ee5\u8272\u5217\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4ee5\u8272\u5217\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4ee5\u8272\u5217\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"\u79d1\u65af\u745e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"\u83ab\u68ee\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\u83ab\u65af\u79d1\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u83ab\u65af\u79d1\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u83ab\u65af\u79d1\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"\u6ce2\u7d0d\u4f69\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"\u85a9\u99ac\u62c9\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u85a9\u99ac\u62c9\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u85a9\u99ac\u62c9\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"\u5927\u6eaa\u5730\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"\u53f0\u5317\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u53f0\u5317\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u53f0\u5317\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"\u5410\u74e6\u9b6f\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"\u6c83\u65af\u6258\u514b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"\u74e6\u5229\u65af\u548c\u5bcc\u5716\u7d0d\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u963f\u62c9\u4f2f\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u963f\u62c9\u4f2f\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u963f\u62c9\u4f2f\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\u4e9e\u7f8e\u5c3c\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u7f8e\u5c3c\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u7f8e\u5c3c\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"\u73bb\u5229\u7dad\u4e9e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"\u67e5\u5766\u7fa4\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u67e5\u5766\u7fa4\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u67e5\u5766\u7fa4\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"\u5354\u8abf\u4e16\u754c\u6642\u9593"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\u5384\u74dc\u591a\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"\u7518\u6bd4\u723e\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u55ac\u6cbb\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u55ac\u6cbb\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u55ac\u6cbb\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\u4f0a\u723e\u5eab\u6b21\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4f0a\u723e\u5eab\u6b21\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4f0a\u723e\u5eab\u6b21\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"\u99ac\u52a0\u4e39\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u99ac\u52a0\u4e39\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u99ac\u52a0\u4e39\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"\u7dec\u7538\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"\u8afe\u798f\u514b\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u8afe\u798f\u514b\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u8afe\u798f\u514b\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\u8cbb\u723e\u5357\u591a - \u8fea\u8afe\u7f85\u5c3c\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u8cbb\u723e\u5357\u591a - \u8fea\u8afe\u7f85\u5c3c\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u8cbb\u723e\u5357\u591a - \u8fea\u8afe\u7f85\u5c3c\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"\u7559\u5c3c\u65fa\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"\u7f85\u745f\u62c9\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"\u7d22\u7f85\u9580\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"\u6258\u514b\u52de\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"\u70cf\u62c9\u572d\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u70cf\u62c9\u572d\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u70cf\u62c9\u572d\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"\u842c\u90a3\u675c\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u842c\u90a3\u675c\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u842c\u90a3\u675c\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\u96c5\u5eab\u6b21\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u96c5\u5eab\u6b21\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u96c5\u5eab\u6b21\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\u5927\u897f\u6d0b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5927\u897f\u6d0b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5927\u897f\u6d0b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"\u5df4\u897f\u5229\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5df4\u897f\u5229\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5df4\u897f\u5229\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"\u67e5\u83ab\u6d1b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"\u54e5\u502b\u6bd4\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u54e5\u502b\u6bd4\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u54e5\u502b\u6bd4\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"\u798f\u514b\u862d\u7fa4\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u798f\u514b\u862d\u7fa4\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u798f\u514b\u862d\u7fa4\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"\u99ac\u4f86\u897f\u4e9e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\u99ac\u723e\u5730\u592b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"\u70cf\u862d\u5df4\u6258\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u70cf\u862d\u5df4\u6258\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u70cf\u862d\u5df4\u6258\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\u5df4\u57fa\u65af\u5766\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5df4\u57fa\u65af\u5766\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5df4\u57fa\u65af\u5766\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"\u5df4\u62c9\u572d\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5df4\u62c9\u572d\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5df4\u62c9\u572d\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"\u76ae\u7279\u80af\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"\u5eab\u9801\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5eab\u9801\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5eab\u9801\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\u8607\u5229\u5357\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"\u963f\u6839\u5ef7\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u963f\u6839\u5ef7\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u963f\u6839\u5ef7\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"\u8056\u8a95\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\u52a0\u62c9\u5df4\u54e5\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"\u9999\u6e2f\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u9999\u6e2f\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u9999\u6e2f\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"\u5370\u5ea6\u652f\u90a3\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"\u5f7c\u5f97\u7f85\u5df4\u752b\u6d1b\u592b\u65af\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5f7c\u5f97\u7f85\u5df4\u752b\u6d1b\u592b\u65af\u514b\u65e5\u5149\u7bc0\u7d04\u6642\u9593"_s,
		""_s,
		u"\u5f7c\u5f97\u7f85\u5df4\u752b\u6d1b\u592b\u65af\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"\u5409\u723e\u5409\u65af\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"\u8c6a\u52f3\u7235\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u8c6a\u52f3\u7235\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u8c6a\u52f3\u7235\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"\u99ac\u53ef\u85a9\u65af\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"\u6a21\u91cc\u897f\u65af\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6a21\u91cc\u897f\u65af\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6a21\u91cc\u897f\u65af\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"\u65b0\u52a0\u5761\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"\u59d4\u5167\u745e\u62c9\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"\u4f0f\u723e\u52a0\u683c\u52d2\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4f0f\u723e\u52a0\u683c\u52d2\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4f0f\u723e\u52a0\u683c\u52d2\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\u4e9e\u585e\u62dc\u7136\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u585e\u62dc\u7136\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e9e\u585e\u62dc\u7136\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"\u5b5f\u52a0\u62c9\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5b5f\u52a0\u62c9\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5b5f\u52a0\u62c9\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"\u7dad\u5fb7\u89d2\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u7dad\u5fb7\u89d2\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u7dad\u5fb7\u89d2\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"\u6771\u5e1d\u6c76\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"\u585e\u5e2d\u723e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"\u5854\u5409\u514b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"\u70cf\u8332\u5225\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u70cf\u8332\u5225\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u70cf\u8332\u5225\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\u963f\u5bcc\u6c57\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"\u514b\u62c9\u65af\u8afe\u4e9e\u723e\u65af\u514b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u514b\u62c9\u65af\u8afe\u4e9e\u723e\u65af\u514b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u514b\u62c9\u65af\u8afe\u4e9e\u723e\u65af\u514b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u7d10\u897f\u862d\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u7d10\u897f\u862d\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u7d10\u897f\u862d\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"\u65b0\u897f\u4f2f\u5229\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u65b0\u897f\u4f2f\u5229\u4e9e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u65b0\u897f\u4f2f\u5229\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"\u83f2\u5f8b\u8cd3\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u83f2\u5f8b\u8cd3\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u83f2\u5f8b\u8cd3\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"\u6d77\u53c3\u5d34\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6d77\u53c3\u5d34\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6d77\u53c3\u5d34\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"\u5370\u5ea6\u6d0b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"\u840a\u6069\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"\u7d10\u82ac\u862d\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u7d10\u82ac\u862d\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u7d10\u82ac\u862d\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"\u571f\u5eab\u66fc\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u571f\u5eab\u66fc\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u571f\u5eab\u66fc\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"\u6cd5\u5c6c\u572d\u4e9e\u90a3\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9e\u7fa4\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u65b0\u5580\u91cc\u591a\u5c3c\u4e9e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"\u5357\u55ac\u6cbb\u4e9e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"\u8449\u5361\u6377\u7433\u5821\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u8449\u5361\u6377\u7433\u5821\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u8449\u5361\u6377\u7433\u5821\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"\u4e2d\u975e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"\u6771\u975e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"\u897f\u975e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u897f\u975e\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u897f\u975e\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"\u675c\u8499\u675c\u6bd4\u723e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u4e2d\u6b50\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e2d\u6b50\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e2d\u6b50\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u6771\u6b50\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6771\u6b50\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6771\u6b50\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u897f\u6b50\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u897f\u6b50\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u897f\u6b50\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"\u58a8\u897f\u54e5\u592a\u5e73\u6d0b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u58a8\u897f\u54e5\u592a\u5e73\u6d0b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u58a8\u897f\u54e5\u592a\u5e73\u6d0b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"\u5357\u975e\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u4e2d\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u4e2d\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u4e2d\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u6771\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6771\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6771\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u592a\u5e73\u6d0b\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u592a\u5e73\u6d0b\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u592a\u5e73\u6d0b\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"\u6cd5\u570b\u5357\u65b9\u53ca\u5357\u6975\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"\u5409\u723e\u4f2f\u7279\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"\u590f\u5a01\u5937-\u963f\u7559\u7533\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u590f\u5a01\u5937-\u963f\u7559\u7533\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u590f\u5a01\u5937-\u963f\u7559\u7533\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"\u9cf3\u51f0\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"\u8056\u76ae\u57c3\u723e\u548c\u5bc6\u514b\u9686\u7fa4\u5cf6\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u8056\u76ae\u57c3\u723e\u548c\u5bc6\u514b\u9686\u7fa4\u5cf6\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u8056\u76ae\u57c3\u723e\u548c\u5bc6\u514b\u9686\u7fa4\u5cf6\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u5c71\u5340\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u5c71\u5340\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u5c71\u5340\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"\u99ac\u7d39\u723e\u7fa4\u5cf6\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"\u58a8\u897f\u54e5\u897f\u5317\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u58a8\u897f\u54e5\u897f\u5317\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u58a8\u897f\u54e5\u897f\u5317\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"\u5df4\u5e03\u4e9e\u7d10\u5e7e\u5167\u4e9e\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"\u6fb3\u6d32\u4e2d\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u4e2d\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u4e2d\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\u6fb3\u6d32\u6771\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u6771\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u6771\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\u6fb3\u6d32\u897f\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u897f\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u897f\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"\u683c\u9675\u862d\u6771\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u683c\u9675\u862d\u6771\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u683c\u9675\u862d\u6771\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"\u683c\u9675\u862d\u897f\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u683c\u9675\u862d\u897f\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u683c\u9675\u862d\u897f\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"\u5370\u5c3c\u4e2d\u90e8\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"\u5370\u5c3c\u6771\u90e8\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"\u5370\u5c3c\u897f\u90e8\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\u6771\u54c8\u85a9\u514b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"\u897f\u54c8\u85a9\u514b\u6642\u9593"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"\u6fb3\u6d32\u4e2d\u897f\u90e8\u6a19\u6e96\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u4e2d\u897f\u90e8\u590f\u4ee4\u6642\u9593"_s,
		""_s,
		u"\u6fb3\u6d32\u4e2d\u897f\u90e8\u6642\u9593"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(Israel)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Etc/GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of(Azerbaijan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dili"_s),
			$of(East_Timor)
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of(Hovd)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of(Afghanistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Almaty"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Anadyr"_s),
			$of(Anadyr)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Atyrau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of(Brunei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of(Philippines)
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Saigon"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(Taipei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(Iran)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of(Seychelles)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Yap"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bangkok"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of(Kyrgystan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(Irkutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jakarta"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of(Magadan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Rangoon"_s),
			$of(Myanmar)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of(Georgia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimphu"_s),
			$of(Bhutan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of(Cocos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of(Fiji)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guam"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of(Niue)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Truk"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wake"_s),
			$of(Wake)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Banjul"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bissau"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Douala"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(Turkmenistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dushanbe"_s),
			$of(Tajikistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jayapura"_s),
			$of(Indonesia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(Nepal)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Makassar"_s),
			$of(Indonesia_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qostanay"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of($$new($StringArray, {
				u"\u683c\u6797\u5a01\u6cbb\u6a19\u6e96\u6642\u9593"_s,
				""_s,
				u"\u611b\u723e\u862d\u6a19\u6e96\u6642\u9593"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of($$new($StringArray, {
				u"\u683c\u6797\u5a01\u6cbb\u6a19\u6e96\u6642\u9593"_s,
				""_s,
				u"\u82f1\u570b\u590f\u4ee4\u6642\u9593"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Samara"_s),
			$of(Samara)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Chagos"_s),
			$of(Indian_Ocean)
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of(Vanuatu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of(Nauru)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Palau"_s),
			$of(Palau)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of(Colombia)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of(Guyana)
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(Cuba)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of(Bolivia)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(Hong_Kong)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of(Kamchatka)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pontianak"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vientiane"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of($$new($StringArray, {
				u"\u683c\u6797\u5a01\u6cbb\u6a19\u6e96\u6642\u9593"_s,
				""_s,
				u"\u82f1\u570b\u590f\u4ee4\u6642\u9593"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of(Reunion)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(Easter)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of(Kosrae)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Majuro"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of(New_Caledonia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Ponape"_s),
			$of(Ponape)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tahiti"_s),
			$of(Tahiti)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of(Gilbert_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of(Wallis)
		}),
		$$new($ObjectArray, {
			$of("Africa/Blantyre"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Sao_Tome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Timbuktu"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Windhoek"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Caracas"_s),
			$of(Venezuela)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of(French_Guiana)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(Greenland_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(Noronha)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Phnom_Penh"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of(Azores)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of(Australia_CentralWestern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of(Maldives)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(Chatham)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of(Tokelau)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Gambier"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of(Norfolk)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of(Paraguay)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Eirunepe"_s),
			$of(Acre)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of(Pierre_Miquelon)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(Chile)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Casey"_s),
			$of(Casey)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Davis"_s),
			$of(Davis)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Syowa"_s),
			$of(Syowa)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(Novosibirsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of(Falkland)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(Volgograd)
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of(Christmas)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of(French_Southern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of(Tuvalu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of(Mawson)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of(Vostok)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of(Phoenix_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kwajalein"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of(Marquesas)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of(Cook)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of(Tonga)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of(Uruguay)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of(Suriname)
		}),
		$$new($ObjectArray, {
			$of("America/Rio_Branco"_s),
			$of(Acre)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Rothera"_s),
			$of(Rothera)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of(Yekaterinburg)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of(Line_Islands)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of(Cape_Verde)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(Lord_Howe)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(Mexico_Northwest)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(Greenland_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Port_Moresby"_s),
			$of(Papua_New_Guinea)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/South_Georgia"_s),
			$of(South_Georgia)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of(DumontDUrville)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aden"_s),
			$of(u"\u4e9e\u4e01"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"\u5df4\u5eab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of(u"\u5e1d\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"\u52a0\u85a9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hovd"_s),
			$of(u"\u79d1\u5e03\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"\u9102\u6728\u65af\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Oral"_s),
			$of(u"\u70cf\u62c9\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Amman"_s),
			$of(u"\u5b89\u66fc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of(u"\u963f\u514b\u5957"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"\u8d64\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of(u"\u9054\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"\u675c\u62dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"\u5580\u5e03\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of(u"\u4e2d\u83ef\u4eba\u6c11\u5171\u548c\u570b\u6fb3\u9580\u7279\u5225\u884c\u653f\u5340"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of(u"\u5361\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of(u"\u9996\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of(u"\u6771\u4eac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tomsk"_s),
			$of(u"\u6258\u6728\u65af\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Juba"_s),
			$of(u"\u6731\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"\u6d1b\u7f8e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"\u963f\u62c9\u6728\u5716"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"\u963f\u90a3\u5e95"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of(u"\u963f\u514b\u6258\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of(u"\u963f\u7279\u52de"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of(u"\u8c9d\u9b6f\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of(u"\u6c76\u840a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"\u8d6b\u5e03\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of(u"\u79d1\u5a01\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of(u"\u99ac\u5c3c\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of(u"\u99ac\u65af\u958b\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of(u"\u5229\u96c5\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"\u80e1\u5fd7\u660e\u5e02"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of(u"\u53f0\u5317"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of(u"\u5fb7\u9ed1\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"\u70cf\u9b6f\u6728\u9f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u672a\u77e5\u57ce\u5e02"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of(u"\u57fa\u8f14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of(u"\u5967\u65af\u9678"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of(u"\u91cc\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of(u"\u7f85\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of(u"\u99ac\u57c3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of(u"\u963f\u514b\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"\u958b\u7f85"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of(u"\u4f11\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"\u9054\u5580\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of(u"\u62c9\u54e5\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"\u7a81\u5c3c\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of(u"\u827e\u9054\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lima"_s),
			$of(u"\u5229\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nome"_s),
			$of(u"\u8afe\u59c6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"\u5df4\u683c\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"\u5df4\u6797"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of(u"\u66fc\u8c37"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"\u5df4\u723e\u7459\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"\u6bd4\u4ec0\u51f1\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"\u53ef\u502b\u5761"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"\u4f0a\u723e\u5eab\u6b21\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of(u"\u96c5\u52a0\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"\u5580\u62c9\u86a9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of(u"\u53e4\u6649"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"\u99ac\u52a0\u4e39"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of(u"\u5c3c\u53e4\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of(u"\u4ef0\u5149"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of(u"\u7b2c\u6bd4\u5229\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"\u5ef7\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"\u96c5\u5eab\u6b21\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"\u8449\u91cc\u6eab"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kirov"_s),
			$of(u"\u57fa\u6d1b\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of(u"\u99ac\u723e\u4ed6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of(u"\u660e\u65af\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Paris"_s),
			$of(u"\u5df4\u9ece"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of(u"\u7d22\u83f2\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of(u"\u74e6\u90fd\u8332"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of(u"\u79d1\u79d1\u65af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"\u963f\u76ae\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of(u"\u6590\u6fdf"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of(u"\u95dc\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of(u"\u7d10\u57c3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of(u"\u695a\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of(u"\u5a01\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"\u963f\u65af\u746a\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of(u"\u5df4\u99ac\u79d1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of(u"\u73ed\u5409"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of(u"\u73ed\u7af9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of(u"\u6bd4\u7d39"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of(u"\u675c\u963f\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of(u"\u54c8\u62c9\u96f7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of(u"\u57fa\u52a0\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of(u"\u7f85\u5b89\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of(u"\u8def\u6c99\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Malabo"_s),
			$of(u"\u99ac\u62c9\u535a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maputo"_s),
			$of(u"\u99ac\u666e\u6258"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of(u"\u99ac\u8cfd\u9b6f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Niamey"_s),
			$of(u"\u5c3c\u4e9e\u7f8e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of(u"\u963f\u8def\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of(u"\u5df4\u4f0a\u963f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of(u"\u8c9d\u502b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of(u"\u6ce2\u5915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jujuy"_s),
			$of(u"\u80e1\u80e1\u4f0a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sitka"_s),
			$of(u"\u932b\u7279\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"\u675c\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"\u963f\u4ec0\u54c8\u5df4\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of(u"\u52a0\u723e\u5404\u7b54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"\u5927\u99ac\u58eb\u9769"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"\u675c\u6851\u8c9d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of(u"\u52a0\u4e9e\u5e03\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of(u"\u52a0\u5fb7\u6eff\u90fd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"\u582a\u5730\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of(u"\u99ac\u5361\u6c99\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qostanay"_s),
			$of(u"\u79d1\u65af\u5854\u5948"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"\u5eab\u9801\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of(u"\u4e0a\u6d77"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"\u5854\u4ec0\u5e72"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"\u70cf\u65af\u5167\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"\u96c5\u5178"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of(u"\u67cf\u6797"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of(u"\u90fd\u67cf\u6797"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of(u"\u6fa4\u897f\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of(u"\u91cc\u65af\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of(u"\u502b\u6566"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of(u"\u99ac\u5fb7\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of(u"\u6469\u7d0d\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"\u83ab\u65af\u79d1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of(u"\u5e03\u62c9\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"\u6c99\u99ac\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of(u"\u53f2\u9ad8\u6bd4\u8036"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of(u"\u5730\u62c9\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of(u"\u7dad\u4e5f\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of(u"\u83ef\u6c99"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of(u"\u672d\u683c\u745e\u5e03"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"\u8607\u9ece\u4e16"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"\u67e5\u6208\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of(u"\u79d1\u6469\u7f85\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Efate"_s),
			$of(u"\u57c3\u6cd5\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of(u"\u8afe\u9b6f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Palau"_s),
			$of(u"\u5e1b\u7409"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Abidjan"_s),
			$of(u"\u963f\u6bd4\u8b93"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of(u"\u963f\u723e\u53ca\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of(u"\u67ef\u90a3\u514b\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kampala"_s),
			$of(u"\u574e\u5e15\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mbabane"_s),
			$of(u"\u58a8\u5df4\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of(u"\u5948\u6d1b\u6bd4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"\u7684\u9ece\u6ce2\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"\u8c9d\u91cc\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"\u6ce2\u54e5\u5927"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of(u"\u574e\u6606"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"\u958b\u66fc\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"\u53e4\u96c5\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"\u9053\u68ee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of(u"\u4e39\u4f5b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"\u84cb\u4e9e\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of(u"\u54c8\u74e6\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"\u4f0a\u5974\u7dad\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of(u"\u6731\u8afe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"\u62c9\u5df4\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"\u99ac\u745f\u6b50"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of(u"\u746a\u7459\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of(u"\u6885\u91cc\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of(u"\u62ff\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"\u5df4\u62ff\u99ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of(u"\u96f7\u897f\u975e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"\u91cc\u8cc8\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of(u"\u6cd5\u99ac\u53e4\u65af\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of(u"\u4e2d\u83ef\u4eba\u6c11\u5171\u548c\u570b\u9999\u6e2f\u7279\u5225\u884c\u653f\u5340"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"\u8036\u8def\u6492\u51b7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"\u582a\u5bdf\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of(u"\u5764\u7538"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of(u"\u5e73\u58e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of(u"\u514b\u5b5c\u52d2\u5967\u723e\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"\u6492\u99ac\u723e\u7f55"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of(u"\u65b0\u52a0\u5761"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of(u"\u6c38\u73cd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Andorra"_s),
			$of(u"\u5b89\u9053\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of(u"\u85a9\u62c9\u6258\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"\u5854\u6797"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of(u"\u68b5\u8482\u5ca1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of(u"\u7dad\u723e\u7d10\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of(u"\u99ac\u7d04\u7279\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"\u7559\u5c3c\u65fa\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of(u"\u5fa9\u6d3b\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of(u"\u79d1\u65af\u745e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of(u"\u99ac\u6731\u8afe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of(u"\u4e2d\u9014\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of(u"\u8afe\u7f8e\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Ponape"_s),
			$of(u"\u6ce2\u7d0d\u4f69"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of(u"\u585e\u73ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of(u"\u5927\u6eaa\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of(u"\u5854\u62c9\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of(u"\u74e6\u5229\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of(u"\u5e03\u862d\u592a\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"\u5409\u5e03\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"\u963f\u5c24\u6069"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of(u"\u81ea\u7531\u57ce"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of(u"\u5609\u67cf\u9686\u91cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"\u5580\u571f\u7a46"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"\u91d1\u590f\u6c99"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of(u"\u8499\u7f85\u7dad\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of(u"\u6069\u8cc8\u6885\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"\u8056\u591a\u7f8e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"\u6eab\u5f97\u548c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"\u5b89\u5730\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of(u"\u5361\u62c9\u5361\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of(u"\u958b\u96f2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"\u829d\u52a0\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"\u54e5\u591a\u83ef"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of(u"\u514b\u96f7\u65af\u9813"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"\u5eab\u62c9\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of(u"\u5e95\u7279\u5f8b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Godthab"_s),
			$of(u"\u52aa\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of(u"\u683c\u745e\u7d0d\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"\u54c8\u91cc\u6cd5\u514b\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of(u"\u4f0a\u9b41\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of(u"\u7259\u8cb7\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of(u"\u99ac\u62ff\u74dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of(u"\u99ac\u91cc\u6208\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of(u"\u9580\u591a\u85a9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"\u8499\u514b\u9813"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"\u5c3c\u76ae\u5ca1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of(u"\u8afe\u502b\u54c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of(u"\u5967\u5e0c\u7d0d\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of(u"\u9cf3\u51f0\u57ce"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"\u63d0\u83ef\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"\u591a\u502b\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of(u"\u6258\u723e\u6258\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"\u96c5\u5eab\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"\u55ac\u5df4\u5c71"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of(u"\u91d1\u908a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of(u"\u4e9e\u901f\u723e\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"\u52a0\u7d0d\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"\u6cd5\u7f85\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of(u"\u5c24\u514b\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of(u"\u4f2f\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"\u8c9d\u723e\u683c\u52d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"\u5e03\u9b6f\u585e\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"\u5e03\u9054\u4f69\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of(u"\u5e03\u8f9b\u6839"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"\u5947\u897f\u7459"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of(u"\u6839\u606f\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"\u8d6b\u723e\u8f9b\u57fa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"\u4f0a\u65af\u5766\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of(u"\u585e\u62c9\u8036\u4f5b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"\u70cf\u8332\u54e5\u6d1b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of(u"\u99ac\u723e\u5730\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"\u67e5\u5766"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of(u"\u6cd5\u8003\u798f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of(u"\u7518\u6bd4\u723e\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Norfolk"_s),
			$of(u"\u8afe\u798f\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bujumbura"_s),
			$of(u"\u5e03\u677e\u5e03\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"\u6469\u52a0\u8fea\u4f11"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of(u"\u5b89\u5409\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"\u4e9e\u677e\u68ee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"\u5df4\u8c9d\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"\u591a\u660e\u5c3c\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"\u827e\u5fb7\u8499\u541e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"\u827e\u9b6f\u5167\u4f69"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of(u"\u99ac\u85a9\u7279\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of(u"\u5bc6\u555f\u5d19"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of(u"\u7d10\u7d04"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"\u7f85\u65af\u9b6f\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of(u"\u8056\u5854\u502b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"\u8056\u5730\u7259\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"\u8056\u7d04\u7ff0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of(u"\u8056\u57fa\u8328"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"\u8056\u9732\u897f\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of(u"\u6eab\u5c3c\u4f2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of(u"\u51f1\u897f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"\u6234\u7dad\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of(u"\u662d\u548c\u57fa\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of(u"\u7dbd\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"\u514b\u62c9\u65af\u8afe\u4e9e\u723e\u65af\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"\u65b0\u897f\u4f2f\u5229\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"\u70cf\u862d\u5df4\u6258"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of(u"\u6d77\u53c3\u5d34"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"\u767e\u6155\u9054"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of(u"\u99ac\u5f97\u62c9\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of(u"\u53f2\u5766\u5229"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of(u"\u514b\u9ece"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of(u"\u9054\u723e\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of(u"\u8377\u5df4\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of(u"\u96ea\u68a8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Amsterdam"_s),
			$of(u"\u963f\u59c6\u65af\u7279\u4e39"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"\u963f\u65af\u7279\u62c9\u7f55"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of(u"\u5e03\u52a0\u52d2\u65af\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of(u"\u76f4\u5e03\u7f85\u9640"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of(u"\u76e7\u6bd4\u5b89\u7d0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of(u"\u746a\u9e97\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of(u"\u6ce2\u591a\u91cc\u5bdf"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of(u"\u65af\u5fb7\u54e5\u723e\u6469"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"\u70cf\u91cc\u63da\u8afe\u592b\u65af\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of(u"\u4f0f\u723e\u52a0\u683c\u52d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of(u"\u8056\u8a95\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of(u"\u51f1\u723e\u84cb\u6717\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of(u"\u6a21\u91cc\u897f\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of(u"\u5967\u514b\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of(u"\u5bcc\u90a3\u5bcc\u63d0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of(u"\u6a80\u9999\u5c71"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of(u"\u5f37\u65af\u9813"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of(u"\u76ae\u7279\u80af\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of(u"\u5361\u85a9\u5e03\u862d\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of(u"\u81ea\u7531\u5e02"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of(u"\u76e7\u672c\u5df4\u5e0c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"\u8afe\u514b\u5c11"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of(u"\u6ce2\u591a\u8afe\u4f5b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of(u"\u5b89\u514b\u62c9\u6cbb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"\u963f\u62c9\u572d\u90a3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of(u"\u4fdd\u7dad\u65af\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of(u"\u5361\u5854\u99ac\u5361"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"\u5947\u83ef\u83ef"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of(u"\u798f\u5854\u529b\u838e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"\u683c\u96f7\u65af\u8c9d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"\u9d5d\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"\u74dc\u5730\u99ac\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of(u"\u74dc\u4e9e\u57fa\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of(u"\u99ac\u5854\u83ab\u7f85\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of(u"\u7f8e\u8afe\u7c73\u5c3c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of(u"\u8499\u7279\u745e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"\u8056\u4fdd\u7f85"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of(u"\u8056\u6258\u99ac\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of(u"\u6eab\u54e5\u83ef"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"\u83ab\u68ee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of(u"\u5e15\u9ea5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of(u"\u6c83\u65af\u6258\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuala_Lumpur"_s),
			$of(u"\u5409\u9686\u5761"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of(u"\u65b0\u5eab\u8332\u6d85\u8328\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of(u"\u5e03\u62c9\u63d0\u65af\u62c9\u74e6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"\u54e5\u672c\u54c8\u6839"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of(u"\u76e7\u68ee\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of(u"\u8056\u99ac\u5229\u8afe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"\u8f9b\u975e\u6d1b\u6d66"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of(u"\u672d\u6ce2\u7f85\u7d50"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"\u6069\u5f97\u4f2f\u7406\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of(u"\u52a0\u62c9\u5df4\u54e5\u7fa4\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of(u"\u74dc\u52a0\u6797\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of(u"\u99ac\u53ef\u85a9\u65af\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of(u"\u5df4\u54e5\u5df4\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of(u"\u62c9\u7f85\u6e6f\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of(u"\u6771\u52a0\u5854\u5e03\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"\u963f\u8fea\u65af\u963f\u8c9d\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of(u"\u5e03\u62c9\u67f4\u7dad\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of(u"\u74e6\u52a0\u675c\u53e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"\u54e5\u65af\u5927\u9ece\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of(u"\u5927\u7279\u514b\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of(u"\u74dc\u5730\u6d1b\u666e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of(u"\u57c3\u83ab\u897f\u7d04"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of(u"\u514b\u62c9\u502b\u4ee3\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of(u"\u8def\u6613\u65af\u7dad\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of(u"\u99ac\u4e01\u5c3c\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Metlakatla"_s),
			$of(u"\u6885\u7279\u62c9\u5361\u7279\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of(u"\u8499\u7279\u7dad\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of(u"\u8499\u54f2\u81d8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of(u"\u5df4\u62c9\u99ac\u5229\u6ce2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"\u91cc\u7d04\u5e03\u862d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of(u"\u8056\u6587\u68ee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of(u"\u61f7\u7279\u970d\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of(u"\u9ea5\u514b\u9ed8\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of(u"\u7f85\u745f\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"\u4e2d\u79d1\u96f7\u59c6\u65af\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"\u8449\u5361\u6377\u6797\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"\u96f7\u514b\u96c5\u7dad\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of(u"\u8056\u8d6b\u52d2\u62ff\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of(u"\u963f\u5f97\u96f7\u5fb7"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of(u"\u5e03\u5229\u65af\u73ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of(u"\u6797\u5fb7\u66fc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"\u66fc\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"\u52a0\u91cc\u5be7\u683c\u52d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of(u"\u57fa\u91cc\u5730\u99ac\u5730\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of(u"\u7d04\u7ff0\u5c3c\u65af\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"\u85a9\u723e\u74e6\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of(u"\u7d0d\u723e\u905c\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of(u"\u6d1b\u6749\u78ef"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"\u58a8\u897f\u54e5\u5e02"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"\u6f58\u5c3c\u723e\u6771"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of(u"\u7dad\u7559\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of(u"\u6ce2\u591a\u9ece\u5404"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"\u96e8\u6cb3\u93ae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"\u5fb7\u53e4\u65af\u52a0\u5df4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"\u73ca\u5fb7\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of(u"\u8036\u6d1b\u5948\u592b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of(u"\u9686\u610f\u8033\u62dc\u6069"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of(u"\u7dad\u5fb7\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of(u"\u8c6a\u52f3\u7235\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of(u"\u58a8\u723e\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of(u"\u5b89\u5854\u90a3\u90a3\u5229\u4f5b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of(u"\u74dc\u9054\u5eb7\u7d0d\u723e\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of(u"\u6c99\u862d\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of(u"\u767d\u6717\u85a9\u5e03\u9686"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of(u"\u5e03\u5b9c\u8afe\u65af\u827e\u5229\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of(u"\u683c\u862d\u5834"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"\u4e39\u99ac\u6c99\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"\u9053\u68ee\u514b\u91cc\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u5dde\u8afe\u514b\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u6ce2\u91cc\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of(u"\u84ec\u5854\u963f\u96f7\u7d0d\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"\u862d\u4eca\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of(u"\u8056\u4f0a\u85a9\u8c9d\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"\u4f0a\u6258\u79d1\u723e\u6258\u7c73\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of(u"\u9ea5\u89ba\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of(u"\u5e03\u5e72\u7dad\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of(u"\u83ab\u58eb\u6bd4\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"\u528d\u6a4b\u7063"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"\u963f\u8482\u79d1\u80af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u5dde\u7dad\u5a01"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"\u4e0b\u592a\u5b50\u5340"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"\u897f\u73ed\u7259\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"\u8056\u591a\u660e\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"\u8056\u5df4\u6258\u6d1b\u7e46\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"\u65af\u5a01\u592b\u7279\u5361\u502b\u7279"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of(u"\u5e03\u7f85\u80af\u5e0c\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"\u5df4\u4f0a\u4e9e\u73ed\u5fb7\u62c9\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of(u"\u592a\u5b50\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"\u5357\u55ac\u6cbb\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of(u"\u85a9\u723e\u5854"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u5dde\u99ac\u502b\u54e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u5dde\u5a01\u7d0d\u99ac\u514b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of(u"\u5410\u5eab\u66fc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of(u"\u70cf\u65af\u61f7\u4e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u5dde\u6cf0\u723e\u57ce"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u5dde\u6eab\u68ee\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"\u675c\u8499\u675c\u6bd4\u723e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of(u"\u62c9\u7565\u54c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of(u"\u8056\u80e1\u5b89"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of(u"\u8056\u8def\u6613"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of(u"\u5370\u7b2c\u5b89\u90a3\u5dde\u5f7c\u5f97\u5821"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of(u"\u80af\u5854\u57fa\u5dde\u8499\u5730\u537b\u7f85"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"\u5317\u9054\u79d1\u4ed6\u5dde\u5e03\u7531\u62c9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"\u5317\u9054\u79d1\u4ed6\u5dde\u4e2d\u5fc3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of(u"\u91cc\u5967\u52a0\u8036\u6208\u65af"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of(u"\u5317\u9054\u79d1\u4ed6\u5dde\u7d10\u6c99\u502b"_s)
		})
	}));
	return data;
}

TimeZoneNames_yue::TimeZoneNames_yue() {
}

$Class* TimeZoneNames_yue::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_yue, name, initialize, &_TimeZoneNames_yue_ClassInfo_, allocate$TimeZoneNames_yue);
	return class$;
}

$Class* TimeZoneNames_yue::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun