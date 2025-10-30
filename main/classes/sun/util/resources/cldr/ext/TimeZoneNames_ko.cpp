#include <sun/util/resources/cldr/ext/TimeZoneNames_ko.h>

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

$MethodInfo _TimeZoneNames_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ko::*)()>(&TimeZoneNames_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ko",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ko_MethodInfo_
};

$Object* allocate$TimeZoneNames_ko($Class* clazz) {
	return $of($alloc(TimeZoneNames_ko));
}

void TimeZoneNames_ko::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"\uc544\ud06c\ub808 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ud06c\ub808 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ud06c\ub808 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"\uc544\ud53c\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ud53c\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ud53c\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"\ucfe1 \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucfe1 \uc81c\ub3c4 \uc808\ubc18 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucfe1 \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"\ucfe0\ubc14 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucfe0\ubc14 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucfe0\ubc14 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"\ud53c\uc9c0 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud53c\uc9c0 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud53c\uc9c0 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\uac78\ud504\ub9cc \ud45c\uc900\uc2dc"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"\ud638\ube0c\ub4dc \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud638\ube0c\ub4dc \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud638\ube0c\ub4dc \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\uc774\ub780 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\ub780 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\ub780 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"\ub2c8\uc6b0\uc5d0 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"\uc634\uc2a4\ud06c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc634\uc2a4\ud06c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc634\uc2a4\ud06c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"\ud398\ub8e8 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud398\ub8e8 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud398\ub8e8 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"\ucd94\ud06c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"\uc6e8\uc774\ud06c\uc12c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Casey, $new($StringArray, {
		u"\ucf00\uc774\uc2dc \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\uce60\ub808 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uce60\ub808 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uce60\ub808 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\uc911\uad6d \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc911\uad6d \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc911\uad6d \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"\ucf54\ucf54\uc2a4 \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"\ub370\uc774\ube44\uc2a4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\uc778\ub3c4 \ud45c\uc900\uc2dc"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\uc77c\ubcf8 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc77c\ubcf8 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc77c\ubcf8 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\ub300\ud55c\ubbfc\uad6d \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub300\ud55c\ubbfc\uad6d \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub300\ud55c\ubbfc\uad6d \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"\ub098\uc6b0\ub8e8 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"\ub124\ud314 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"\ud314\ub77c\uc6b0 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"\uc0ac\ubaa8\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc0ac\ubaa8\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc0ac\ubaa8\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"\uc1fc\uc640 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"\ud1b5\uac00 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud1b5\uac00 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud1b5\uac00 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"\uc54c\ub798\uc2a4\uce74 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc54c\ub798\uc2a4\uce74 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc54c\ub798\uc2a4\uce74 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"\uc544\ub9c8\uc874 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub9c8\uc874 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub9c8\uc874 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"\uc544\ub098\ub514\ub9ac \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub098\ub514\ub9ac \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub098\ub514\ub9ac \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"\uc544\uc870\ub808\uc2a4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\uc870\ub808\uc2a4 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\uc870\ub808\uc2a4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"\ubd80\ud0c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"\ube0c\ub8e8\ub098\uc774 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"\uc774\uc2a4\ud130\uc12c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\uc2a4\ud130\uc12c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\uc2a4\ud130\uc12c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\uac00\uc774\uc544\ub098 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\uc774\uc2a4\ub77c\uc5d8 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\uc2a4\ub77c\uc5d8 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\uc2a4\ub77c\uc5d8 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"\ucf54\uc2a4\ub77c\uc5d0\uc12c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"\ubaa8\uc2a8 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\ubaa8\uc2a4\ud06c\ubc14 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubaa8\uc2a4\ud06c\ubc14 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubaa8\uc2a4\ud06c\ubc14 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"\ud3ec\ub098\ud398 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"\uc0ac\ub9c8\ub77c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc0ac\ub9c8\ub77c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc0ac\ub9c8\ub77c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"\ud0c0\ud788\ud2f0 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"\ub300\ub9cc \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub300\ub9cc \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub300\ub9cc \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"\ud22c\ubc1c\ub8e8 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"\ubcf4\uc2a4\ud1a1 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"\uc6d4\ub9ac\uc2a4\ud478\ud22c\ub098 \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\uc544\ub77c\ube44\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub77c\ube44\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub77c\ube44\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\uc544\ub974\uba54\ub2c8\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub974\uba54\ub2c8\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub974\uba54\ub2c8\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"\ubcfc\ub9ac\ube44\uc544 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"\ucc44\ud140 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucc44\ud140 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucc44\ud140 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"\ud611\uc815 \uc138\uacc4\uc2dc"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\uc5d0\ucf70\ub3c4\ub974 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"\uac10\ube44\uc5d0 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\uc870\uc9c0\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc870\uc9c0\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc870\uc9c0\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\uc774\ub974\ucfe0\uce20\ud06c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\ub974\ucfe0\uce20\ud06c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc774\ub974\ucfe0\uce20\ud06c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"\ub9c8\uac00\ub2e8 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub9c8\uac00\ub2e8 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub9c8\uac00\ub2e8 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"\ubbf8\uc580\ub9c8 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"\ub178\ud37d\uc12c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub178\ud37d\uc12c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub178\ud37d\uc12c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\ud398\ub974\ub09c\ub3c4 \ub370 \ub178\ub85c\ub0d0 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud398\ub974\ub09c\ub3c4 \ub370 \ub178\ub85c\ub0d0 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud398\ub974\ub09c\ub3c4 \ub370 \ub178\ub85c\ub0d0 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"\ub808\uc704\ub2c8\uc639 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"\ub85c\ub370\ub77c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"\uc194\ub85c\ubaac \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"\ud1a0\ucf08\ub77c\uc6b0 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"\uc6b0\ub8e8\uacfc\uc774 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc6b0\ub8e8\uacfc\uc774 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc6b0\ub8e8\uacfc\uc774 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"\ubc14\ub204\uc544\ud22c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubc14\ub204\uc544\ud22c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubc14\ub204\uc544\ud22c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\uc57c\ucfe0\uce20\ud06c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc57c\ucfe0\uce20\ud06c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc57c\ucfe0\uce20\ud06c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\ub300\uc11c\uc591 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub300\uc11c\uc591 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub300\uc11c\uc591 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"\ube0c\ub77c\uc9c8\ub9ac\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ube0c\ub77c\uc9c8\ub9ac\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ube0c\ub77c\uc9c8\ub9ac\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"\ucc28\ubaa8\ub85c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"\ucf5c\ub86c\ube44\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucf5c\ub86c\ube44\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ucf5c\ub86c\ube44\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"\ud3ec\ud074\ub79c\ub4dc \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud3ec\ud074\ub79c\ub4dc \uc81c\ub3c4 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud3ec\ud074\ub79c\ub4dc \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"\ub9d0\ub808\uc774\uc2dc\uc544 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\ubab0\ub514\ube0c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"\uc6b8\ub780\ubc14\ud1a0\ub974 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc6b8\ub780\ubc14\ud1a0\ub974 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc6b8\ub780\ubc14\ud1a0\ub974 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\ud30c\ud0a4\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud30c\ud0a4\uc2a4\ud0c4 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud30c\ud0a4\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"\ud30c\ub77c\uacfc\uc774 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud30c\ub77c\uacfc\uc774 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud30c\ub77c\uacfc\uc774 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"\ud54f\ucf00\uc5b8 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"\uc0ac\ud560\ub9b0 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc0ac\ud560\ub9b0 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc0ac\ud560\ub9b0 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\uc218\ub9ac\ub0a8 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"\uc544\ub974\ud5e8\ud2f0\ub098 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub974\ud5e8\ud2f0\ub098 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\ub974\ud5e8\ud2f0\ub098 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"\ud06c\ub9ac\uc2a4\ub9c8\uc2a4\uc12c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\uac08\ub77c\ud30c\uace0\uc2a4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"\ud64d\ucf69 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud64d\ucf69 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud64d\ucf69 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"\uc778\ub3c4\ucc28\uc774\ub098 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"\ud398\ud2b8\ub85c\ud30c\ube14\ub86d\uc2a4\ud06c-\uce84\ucc28\uce20\ud0a4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud398\ud2b8\ub85c\ud30c\ube14\ub86d\uc2a4\ud06c-\uce84\ucc28\uce20\ud0a4 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud398\ud2b8\ub85c\ud30c\ube14\ub86d\uc2a4\ud06c-\uce84\ucc28\uce20\ud0a4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"\ud0a4\ub974\uae30\uc2a4\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"\ub85c\ub4dc \ud558\uc6b0 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub85c\ub4dc \ud558\uc6b0 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub85c\ub4dc \ud558\uc6b0 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"\ub9c8\ub974\ud0a4\uc988 \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"\ubaa8\ub9ac\uc154\uc2a4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubaa8\ub9ac\uc154\uc2a4 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubaa8\ub9ac\uc154\uc2a4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"\uc2f1\uac00\ud3ec\ub974 \ud45c\uc900\uc2dc"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"\ubca0\ub124\uc218\uc5d8\ub77c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"\ubcfc\uace0\uadf8\ub77c\ub4dc \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubcfc\uace0\uadf8\ub77c\ub4dc \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubcfc\uace0\uadf8\ub77c\ub4dc \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\uc544\uc81c\ub974\ubc14\uc774\uc794 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\uc81c\ub974\ubc14\uc774\uc794 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc544\uc81c\ub974\ubc14\uc774\uc794 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"\ubc29\uae00\ub77c\ub370\uc2dc \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubc29\uae00\ub77c\ub370\uc2dc \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubc29\uae00\ub77c\ub370\uc2dc \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"\uce74\ubcf4 \ubca0\ub974\ub370 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uce74\ubcf4 \ubca0\ub974\ub370 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uce74\ubcf4 \ubca0\ub974\ub370 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"\ub3d9\ud2f0\ubaa8\ub974 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"\uc138\uc774\uc178 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"\ud0c0\uc9c0\ud0a4\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\uc544\ud504\uac00\ub2c8\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"\ud06c\ub77c\uc2a4\ub178\uc57c\ub974\uc2a4\ud06c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud06c\ub77c\uc2a4\ub178\uc57c\ub974\uc2a4\ud06c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud06c\ub77c\uc2a4\ub178\uc57c\ub974\uc2a4\ud06c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\ub274\uc9c8\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub274\uc9c8\ub79c\ub4dc \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub274\uc9c8\ub79c\ub4dc \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"\ub178\ubcf4\uc2dc\ube44\ub974\uc2a4\ud06c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub178\ubcf4\uc2dc\ube44\ub974\uc2a4\ud06c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub178\ubcf4\uc2dc\ube44\ub974\uc2a4\ud06c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"\ud544\ub9ac\ud540 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud544\ub9ac\ud540 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud544\ub9ac\ud540 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"\ube14\ub77c\ub514\ubcf4\uc2a4\ud1a0\ud06c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ube14\ub77c\ub514\ubcf4\uc2a4\ud1a0\ud06c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ube14\ub77c\ub514\ubcf4\uc2a4\ud1a0\ud06c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"\uc778\ub3c4\uc591 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"\ub77c\uc778 \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"\ub274\ud380\ub4e4\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub274\ud380\ub4e4\ub79c\ub4dc \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub274\ud380\ub4e4\ub79c\ub4dc \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"\ud504\ub791\uc2a4\ub839 \uac00\uc774\uc544\ub098 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"\ub274\uce7c\ub808\ub3c4\ub2c8\uc544 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub274\uce7c\ub808\ub3c4\ub2c8\uc544 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub274\uce7c\ub808\ub3c4\ub2c8\uc544 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"\uc0ac\uc6b0\uc2a4 \uc870\uc9c0\uc544 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"\uc608\uce74\ud14c\ub9b0\ubd80\ub974\ud06c \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc608\uce74\ud14c\ub9b0\ubd80\ub974\ud06c \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc608\uce74\ud14c\ub9b0\ubd80\ub974\ud06c \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"\uc911\uc559\uc544\ud504\ub9ac\uce74 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"\ub3d9\uc544\ud504\ub9ac\uce74 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"\uc11c\uc544\ud504\ub9ac\uce74 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc11c\uc544\ud504\ub9ac\uce74 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc11c\uc544\ud504\ub9ac\uce74 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"\ub4a4\ubabd\ub4a4\ub974\ube4c \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\uc911\ubd80\uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc911\ubd80\uc720\ub7fd \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc911\ubd80\uc720\ub7fd \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\ub3d9\uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub3d9\uc720\ub7fd \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ub3d9\uc720\ub7fd \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\uc11c\uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc11c\uc720\ub7fd \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc11c\uc720\ub7fd \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"\uba55\uc2dc\ucf54 \ud0dc\ud3c9\uc591 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uba55\uc2dc\ucf54 \ud0dc\ud3c9\uc591 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uba55\uc2dc\ucf54 \ud0dc\ud3c9\uc591 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"\ub0a8\uc544\ud504\ub9ac\uce74 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\ubbf8 \uc911\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \uc911\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \uc911\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\ubbf8 \ub3d9\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \ub3d9\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \ub3d9\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\ubbf8 \ud0dc\ud3c9\uc591 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \ud0dc\ud3c9\uc591 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \ud0dc\ud3c9\uc591 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"\ud504\ub791\uc2a4\ub839 \ub0a8\ubd80 \uc2dd\ubbfc\uc9c0 \ubc0f \ub0a8\uadf9 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"\uae38\ubc84\ud2b8 \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"\ud558\uc640\uc774 \uc54c\ub958\uc0e8 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud558\uc640\uc774 \uc54c\ub958\uc0e8 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ud558\uc640\uc774 \uc54c\ub958\uc0e8 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"\ud53c\ub2c9\uc2a4 \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"\uc138\uc778\ud2b8\ud53c\uc5d0\ub974 \ubbf8\ud074\ub871 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc138\uc778\ud2b8\ud53c\uc5d0\ub974 \ubbf8\ud074\ub871 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc138\uc778\ud2b8\ud53c\uc5d0\ub974 \ubbf8\ud074\ub871 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\ubbf8 \uc0b0\uc545 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \uc0b0\uc9c0 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\ubbf8 \uc0b0\uc9c0 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"\ub9c8\uc15c \uc81c\ub3c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"\uba55\uc2dc\ucf54 \ubd81\uc11c\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uba55\uc2dc\ucf54 \ubd81\uc11c\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uba55\uc2dc\ucf54 \ubd81\uc11c\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"\ud30c\ud478\uc544\ub274\uae30\ub2c8 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc911\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc911\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc911\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \ub3d9\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \ub3d9\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \ub3d9\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc11c\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc11c\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc11c\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"\uadf8\ub9b0\ub780\ub4dc \ub3d9\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uadf8\ub9b0\ub780\ub4dc \ub3d9\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uadf8\ub9b0\ub780\ub4dc \ub3d9\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"\uadf8\ub9b0\ub780\ub4dc \uc11c\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uadf8\ub9b0\ub780\ub4dc \uc11c\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uadf8\ub9b0\ub780\ub4dc \uc11c\ubd80 \uc2dc\uac04"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"\uc911\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"\ub3d9\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"\uc11c\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\ub3d9\ubd80 \uce74\uc790\ud750\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"\uc11c\ubd80 \uce74\uc790\ud750\uc2a4\ud0c4 \uc2dc\uac04"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc911\uc11c\ubd80 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc911\uc11c\ubd80 \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
		""_s,
		u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544 \uc911\uc11c\ubd80 \uc2dc\uac04"_s,
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
				u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
				""_s,
				u"\uc544\uc77c\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
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
				u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
				""_s,
				u"\uc601\uad6d \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
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
				u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
				""_s,
				u"\uc601\uad6d \ud558\uacc4 \ud45c\uc900\uc2dc"_s,
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
			$of(u"\uc544\ub374"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"\ubc14\ucfe0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of(u"\ub51c\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"\uac00\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hovd"_s),
			$of(u"\ud638\ube0c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"\uc634\uc2a4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Oral"_s),
			$of(u"\uc624\ub784"_s)
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
			$of(u"\uc554\ub9cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of(u"\uc544\ud06c\ud0c0\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"\uce58\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of(u"\ub2e4\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"\ub450\ubc14\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"\uce74\ubd88"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of(u"\ub9c8\uce74\uc624"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of(u"\uce74\ud0c0\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of(u"\uc11c\uc6b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of(u"\ub3c4\ucfc4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tomsk"_s),
			$of(u"\ud1b0\uc2a4\ud06c"_s)
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
			$of(u"\uc8fc\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"\ub85c\uba54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"\uc54c\ub9c8\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"\uc544\ub098\ub514\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of(u"\uc545\ud1a0\ube0c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of(u"\uc544\ud2f0\ub77c\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of(u"\ubca0\uc774\ub8e8\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of(u"\ube0c\ub8e8\ub098\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"\ud5e4\ube0c\ub860"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of(u"\ucfe0\uc6e8\uc774\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of(u"\ub9c8\ub2d0\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of(u"\ubb34\uc2a4\uce74\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of(u"\ub9ac\uc57c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"\uc0ac\uc774\uacf5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of(u"\ud0c0\uc774\ubca0\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of(u"\ud14c\ud5e4\ub780"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"\uc6b0\ub8e8\ubb34\uce58"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \uc7a5\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of(u"\ud0a4\uc608\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of(u"\uc624\uc2ac\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of(u"\ub9ac\uac00"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of(u"\ub85c\ub9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of(u"\ub9c8\ud5e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of(u"\uc544\ud06c\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"\uce74\uc774\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of(u"\uc138\uc6b0\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"\ub2e4\uce74\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of(u"\ub77c\uace0\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"\ud280\ub2c8\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of(u"\uc5d0\uc774\ub2e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lima"_s),
			$of(u"\ub9ac\ub9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nome"_s),
			$of(u"\ub188"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"\ubc14\uadf8\ub2e4\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"\ubc14\ub808\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of(u"\ubc29\ucf55"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"\ubc14\ub974\ub098\uc6b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"\ube44\uc288\ucf00\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"\ucf5c\ub86c\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"\uc774\ub974\ucfe0\uce20\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of(u"\uc790\uce74\ub974\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"\uce74\ub77c\uce58"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of(u"\ucfe0\uce6d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"\ub9c8\uac00\ub2e8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of(u"\ub2c8\ucf54\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of(u"\ub791\uad70"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of(u"\ud2b8\ube4c\ub9ac\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"\ud300\ubd80"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"\uc57c\ucfe0\uce20\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"\uc608\ub808\ubc18"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kirov"_s),
			$of(u"\ud0a4\ub85c\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of(u"\ubab0\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of(u"\ubbfc\uc2a4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Paris"_s),
			$of(u"\ud30c\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of(u"\uc18c\ud53c\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of(u"\ud30c\ub450\uce20"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of(u"\ucf54\ucf54\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"\uc544\ud53c\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of(u"\ud53c\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of(u"\uad0c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of(u"\ub2c8\uc6b0\uc5d0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of(u"\ud2b8\ub8e8\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of(u"\uc6e8\uc774\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"\uc544\uc2a4\uba54\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of(u"\ubc14\ub9c8\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of(u"\ubc29\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of(u"\ubc18\uc904"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of(u"\ube44\uc0ac\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of(u"\ub450\uc54c\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of(u"\ud558\ub77c\ub808"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of(u"\ud0a4\uac08\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of(u"\ub8e8\uc548\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of(u"\ub8e8\uc0ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Malabo"_s),
			$of(u"\ub9d0\ub77c\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maputo"_s),
			$of(u"\ub9c8\ud478\ud1a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of(u"\ub9c8\uc138\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Niamey"_s),
			$of(u"\ub2c8\uc544\uba54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of(u"\uc544\ub8e8\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of(u"\ubc14\ud788\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of(u"\ubca8\ub818"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of(u"\ubcf4\uc774\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jujuy"_s),
			$of(u"\ud6c4\ud6c4\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sitka"_s),
			$of(u"\uc2ef\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"\ud234\ub808"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"\uc544\uc288\ud558\ubc14\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of(u"\ucf5c\uce74\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"\ub2e4\ub9c8\uc2a4\ucfe0\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"\ub450\uc0e8\ubca0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of(u"\uc790\uc57c\ud478\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of(u"\uce74\ud2b8\ub9cc\ub450"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"\ud55c\ub514\uac00"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of(u"\ub9c8\uce74\uc0ac\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qostanay"_s),
			$of(u"\ucf54\uc2a4\ud0c0\ub098\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"\uc0ac\ud560\ub9b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of(u"\uc0c1\ud558\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"\ud0c0\uc288\ucf04\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"\uc6b0\uc2a4\ud2f0\ub124\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"\uc544\ud14c\ub124"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of(u"\ubca0\ub97c\ub9b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of(u"\ub354\ube14\ub9b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of(u"\uc800\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of(u"\ub9ac\uc2a4\ubcf8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of(u"\ub7f0\ub358"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of(u"\ub9c8\ub4dc\ub9ac\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of(u"\ubaa8\ub098\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"\ubaa8\uc2a4\ud06c\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of(u"\ud504\ub77c\ud558"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"\uc0ac\ub9c8\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of(u"\uc2a4\ucf54\ud398"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of(u"\ud2f0\ub77c\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of(u"\ube44\uc5d4\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of(u"\ubc14\ub974\uc0e4\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of(u"\uc790\uadf8\ub808\ube0c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"\ucde8\ub9ac\ud788"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"\ucc28\uace0\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of(u"\ucf54\ubaa8\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Efate"_s),
			$of(u"\uc5d0\ud30c\ud14c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of(u"\ub098\uc6b0\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Palau"_s),
			$of(u"\ud314\ub77c\uc6b0"_s)
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
			$of(u"\uc544\ube44\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of(u"\uc54c\uc81c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of(u"\ucf54\ub098\ud06c\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kampala"_s),
			$of(u"\uce84\ud314\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mbabane"_s),
			$of(u"\uc74c\ubc14\ubc14\ub124"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of(u"\ub098\uc774\ub85c\ube44"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"\ud2b8\ub9ac\ud3f4\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"\ubca8\ub9ac\uc988"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"\ubcf4\uace0\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of(u"\uce78\ucfe4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"\ucf00\uc774\ub9e8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"\ucfe0\uc774\uc544\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"\ub3c4\uc2a8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of(u"\ub374\ubc84"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"\uac00\uc774\uc544\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of(u"\ud558\ubc14\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"\uc774\ub204\ube45"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of(u"\uc8fc\ub178"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"\ub77c\ud30c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"\ub9c8\uc138\uc774\uc624"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of(u"\ub9c8\ub098\uc6b0\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of(u"\uba54\ub9ac\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of(u"\ub098\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"\ud30c\ub098\ub9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of(u"\ub808\uc2dc\ud398"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"\ub9ac\uc790\uc774\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of(u"\ud30c\ub9c8\uad6c\uc2a4\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of(u"\ud64d\ucf69"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"\uc608\ub8e8\uc0b4\ub818"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"\uce84\ucc28\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of(u"\ud3f0\ud2f0\uc544\ub098\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of(u"\ud3c9\uc591"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of(u"\ud0a4\uc9c8\ub85c\ub974\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"\uc0ac\ub9c8\ub974\uce78\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of(u"\uc2f1\uac00\ud3ec\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of(u"\ube44\uc5d4\ud2f0\uc548"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Andorra"_s),
			$of(u"\uc548\ub3c4\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of(u"\uc0ac\ub77c\ud1a0\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"\ud0c8\ub9b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of(u"\ubc14\ud2f0\uce78"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of(u"\ube4c\ub2c8\uc6b0\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of(u"\uba54\uc694\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"\ub808\uc704\ub2c8\uc639"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of(u"\uc774\uc2a4\ud130 \uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of(u"\ucf54\uc2a4\ub808"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of(u"\ub9c8\uc8fc\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of(u"\ubbf8\ub4dc\uc6e8\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of(u"\ub204\uba54\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Ponape"_s),
			$of(u"\ud3ec\ub098\ud398"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of(u"\uc0ac\uc774\ud310"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of(u"\ud0c0\ud788\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of(u"\ud0c0\ub77c\uc640"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of(u"\uc6d4\ub9ac\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of(u"\ube14\ub79c\ud0c0\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"\uc9c0\ubd80\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"\uc5d8\uc544\uc774\uc6b4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of(u"\ud504\ub9ac\ud0c0\uc6b4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of(u"\uac00\ubcf4\ub85c\ub124"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"\uce74\ub974\ud23c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"\ud0a8\uc0e4\uc0ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of(u"\ubaac\ub85c\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of(u"\uc5d4\uc790\uba54\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"\uc0c1\ud22c\uba54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"\ube48\ud2b8\ud6c4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"\uc548\ud2f0\uacfc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of(u"\uce74\ub77c\uce74\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of(u"\uce74\uc60c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"\uc2dc\uce74\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"\ucf54\ub974\ub3c4\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of(u"\ud06c\ub808\uc2a4\ud1a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"\ud034\ub77c\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of(u"\ub514\ud2b8\ub85c\uc774\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Godthab"_s),
			$of(u"\uace0\ub4dc\ud638\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of(u"\uadf8\ub808\ub098\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"\ud57c\ub9ac\ud329\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of(u"\uc774\uce7c\ub8e8\uc774\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of(u"\uc790\uba54\uc774\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of(u"\ub9c8\ub098\uacfc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of(u"\ub9c8\ub9ac\uacf3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of(u"\uba58\ub3c4\uc0ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"\ubabd\ud134"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"\ub2c8\ud53c\uace4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of(u"\ub178\ub871\uc57c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of(u"\uc624\ud788\ub098\uac00"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of(u"\ud53c\ub2c9\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"\ud2f0\ud6c4\uc544\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"\ud1a0\ub860\ud1a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of(u"\ud1a0\ub974\ud1a8\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"\uc57c\ucfe0\ud0c0\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"\ucd08\uc774\ubc1c\uc0b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of(u"\ud504\ub188\ud39c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of(u"\uc544\uc870\ub808\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"\uce74\ub098\ub9ac\uc544 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"\ud398\ub85c \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of(u"\uc720\ud074\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of(u"\ud37c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"\ubca0\uc624\uadf8\ub77c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"\ube0c\ub93c\uc140"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"\ubd80\ub2e4\ud398\uc2a4\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of(u"\ubdd4\uc9c0\uac90"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"\ud0a4\uc2dc\ub098\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of(u"\uac74\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"\ud5ec\uc2f1\ud0a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"\uc774\uc2a4\ud0c4\ubd88"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of(u"\uc0ac\ub77c\uc608\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"\uc6b0\uc8fc\uace0\ub85c\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of(u"\ubab0\ub514\ube0c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"\ucc44\ud140"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of(u"\ud30c\uce74\uc624\ud478"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of(u"\uac10\ube44\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Norfolk"_s),
			$of(u"\ub178\ud37d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bujumbura"_s),
			$of(u"\ubd80\uc90c\ubd80\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"\ubaa8\uac00\ub514\uc288"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of(u"\uc559\uadc8\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"\uc544\uc21c\uc2dc\uc628"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"\ubc14\ubca0\uc774\ub3c4\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"\ub3c4\ubbf8\ub2c8\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"\uc5d0\ub4dc\uba3c\ud134"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"\uc544\uc774\ub8e8\ub124\ud398"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of(u"\ub9c8\uc0ac\ud2c0\ub780"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of(u"\ubbf8\ud074\ub871"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of(u"\ub274\uc695"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"\ub9ac\uc878\ub8e8\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of(u"\uc0b0\ud0c0\ub818"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"\uc0b0\ud2f0\uc544\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"\uc138\uc778\ud2b8\uc874\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of(u"\uc138\uc778\ud2b8\ud0a4\uce20"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"\uc138\uc778\ud2b8\ub8e8\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of(u"\uc704\ub2c8\ud399"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of(u"\ucf00\uc774\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"\ub370\uc774\ube44\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of(u"\uc1fc\uc640"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of(u"\ud2b8\ub864"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"\ud06c\ub77c\uc2a4\ub178\uc57c\ub974\uc2a4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"\ub178\ubcf4\uc2dc\ube44\ub974\uc2a4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"\uc6b8\ub780\ubc14\ud1a0\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of(u"\ube14\ub77c\ub514\ubcf4\uc2a4\ud1a0\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"\ubc84\ubba4\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of(u"\ub9c8\ub370\uc774\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of(u"\uc2a4\ud0e0\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of(u"\ud034\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of(u"\ub2e4\uc708"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of(u"\ud638\ubc14\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of(u"\uc2dc\ub4dc\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Amsterdam"_s),
			$of(u"\uc554\uc2a4\ud14c\ub974\ub2f4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"\uc544\uc2a4\ud2b8\ub77c\ud55c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of(u"\ubd80\ucfe0\ub808\uc288\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of(u"\uc9c0\ube0c\ub864\ud130"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of(u"\ub958\ube14\ub7b4\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of(u"\ub9c8\ub9ac\uc5d0\ud568"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of(u"\ud3ec\ub4dc\uace0\ub9ac\ucc28"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of(u"\uc2a4\ud1a1\ud640\ub984"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"\uc6b8\ub9ac\uc57c\ub178\ud504\uc2a4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of(u"\ubcfc\uace0\uadf8\ub77c\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of(u"\ud06c\ub9ac\uc2a4\ub9c8\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of(u"\ucf00\ub974\ucf08\ub80c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of(u"\ubaa8\ub9ac\uc154\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of(u"\uc624\ud074\ub79c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of(u"\ud478\ub098\ud478\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of(u"\ud638\ub180\ub8f0\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of(u"\uc874\uc2a4\ud1a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of(u"\ud54f\ucf00\uc5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of(u"\uce74\uc0ac\ube14\ub791\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of(u"\ub9ac\ube0c\ub974\ube4c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of(u"\ub8e8\ubd90\ubc14\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"\ub204\uc545\uc1fc\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of(u"\ud3ec\ub974\ud1a0\ub178\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of(u"\uc575\ucee4\ub9ac\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"\uc544\ub77c\uacfc\uc774\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of(u"\ubcf4\uc544 \ube44\uc2a4\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of(u"\uce74\ud0c0\ub9c8\ub974\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"\uce58\uc640\uc640"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of(u"\ud3ec\ub974\ud0c8\ub808\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"\uae00\ub77c\uc2a4\ubca0\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"\uad6c\uc988\ubca0\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"\uacfc\ud14c\ub9d0\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of(u"\uacfc\uc57c\ud0ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of(u"\ub9c8\ud0c0\ubaa8\ub85c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of(u"\uba54\ub178\ubbf8\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of(u"\ubaac\ud14c\ub808\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"\uc0c1\ud30c\uc6b8\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of(u"\uc138\uc778\ud2b8\ud1a0\ub9c8\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of(u"\ubca4\ucfe0\ubc84"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"\ubaa8\uc2a8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of(u"\ud30c\uba38"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of(u"\ubcf4\uc2a4\ud1a0\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuala_Lumpur"_s),
			$of(u"\ucfe0\uc54c\ub77c\ub8f8\ud478\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of(u"\ub178\ubcf4\ucfe0\uc988\ub124\uce20\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of(u"\ube0c\ub77c\ud2f0\uc2ac\ub77c\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"\ucf54\ud39c\ud558\uac90"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of(u"\ub8e9\uc148\ubd80\ub974\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of(u"\uc0b0\ub9c8\ub9ac\ub178"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"\uc2ec\ud398\ub85c\ud3f4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of(u"\uc790\ud3ec\ub85c\uc9c0\uc608"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"\uc5d4\ub354\ubca0\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of(u"\uac08\ub77c\ud30c\uace0\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of(u"\ucf70\uc798\ub80c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of(u"\ub9c8\ud018\uc0ac\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of(u"\ud30c\uace0\ud30c\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of(u"\ub77c\ub85c\ud1b5\uac00"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of(u"\ud1b5\uac00\ud0c0\ud478"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"\uc544\ub514\uc2a4\uc544\ubc14\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of(u"\ube0c\ub77c\uc790\ube4c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of(u"\uc640\uac00\ub450\uad6c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"\ucf54\uc2a4\ud0c0\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of(u"\uadf8\ub79c\ub4dc \ud130\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of(u"\uacfc\ub4e4\ub8e8\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of(u"\uc5d0\ub974\ubaa8\uc2dc\uc694"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of(u"\ud06c\ub77c\ub80c\ub514\uc988\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of(u"\ub8e8\uc774\ube4c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of(u"\ub9c8\ud2f0\ub2c8\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Metlakatla"_s),
			$of(u"\uba54\ud2c0\ub77c\uce74\ud2c0\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of(u"\ubaac\ud14c\ube44\ub370\uc624"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of(u"\ubaac\uc138\ub77c\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of(u"\ud30c\ub77c\ub9c8\ub9ac\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"\ud788\uc6b0 \ube0c\ub791\ucfe0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of(u"\uc138\uc778\ud2b8\ube48\uc13c\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of(u"\ud654\uc774\ud2b8\ud638\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of(u"\ub9e5\uba38\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of(u"\ub85c\ub370\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"\uc2a4\ub808\ub4dc\ub124\ucf5c\ub9bc\uc2a4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"\uc608\uce74\ud14c\ub9b0\ubd80\ub974\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"\ub808\uc774\uceac\ube44\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of(u"\uc138\uc778\ud2b8 \ud5ec\ub808\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of(u"\uc560\ub4e4\ub808\uc774\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of(u"\ube0c\ub9ac\uc2a4\ubca0\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of(u"\ub9b0\ub370\ub9cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"\ub9e8\uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"\uce7c\ub9ac\ub2cc\uadf8\ub77c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of(u"\ud0a4\ub9ac\ud2f0\ub9c8\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of(u"\uc694\ud558\ub124\uc2a4\ubc84\uadf8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"\uc5d8\uc0b4\ubc14\ub3c4\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of(u"\ud3ec\ud2b8 \ub12c\uc2a8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of(u"\ub85c\uc2a4\uc564\uc824\ub808\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"\uba55\uc2dc\ucf54 \uc2dc\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"\ud321\ub2c8\ub974\ud241"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of(u"\ud3ec\ub974\ud1a0\ubca8\ub8cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of(u"\ud478\uc5d0\ub974\ud1a0\ub9ac\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"\ub808\uc774\ub2c8\uac15"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"\ud14c\uad6c\uc2dc\uac08\ud30c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"\uc120\ub354\ubca0\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of(u"\uc610\ub85c\ub098\uc774\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of(u"\ub871\uc774\uc5b4\ube44\uc5d4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of(u"\uce74\ubcf4 \ubca0\ub974\ub370"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of(u"\ub85c\ub4dc \ud558\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of(u"\uba5c\ubc84\ub978"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of(u"\uc548\ud0c0\ub098\ub098\ub9ac\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of(u"\uacfc\ub2ec\uce74\ub0a0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of(u"\ub2e4\ub974\uc5d0\uc2a4\uc0b4\ub78c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of(u"\ube14\ub791 \uc0ac\ube14\ub871"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of(u"\ubd80\uc5d0\ub178\uc2a4 \uc544\uc774\ub808\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of(u"\uce84\ud3ec \uadf8\ub780\ub370"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"\ub374\ub9c8\ud06c\uc0e4\ube10"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"\ub3c4\uc2a8\ud06c\ub9ad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of(u"\uc778\ub514\uc560\ub098\uc8fc, \ub179\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"\uc778\ub514\uc560\ub098\ud3f4\ub9ac\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of(u"\ud47c\ud0c0\uc544\ub808\ub098\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"\ub7ad\ud0b9 \uc778\ub81b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of(u"\uc0b0\ud0c0 \uc774\uc0ac\ubca8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"\uc2a4\ucf54\ub808\uc2a4\ubc14\uc774\uc120\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of(u"\ub9e5\ucffc\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of(u"\ubd80\uac31\ube4c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of(u"\ud3ec\ud2b8\ubaa8\ub974\uc988\ube44"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"\ucf00\uc784\ube0c\ub9ac\uc9c0 \ubca0\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"\ucf54\ub784\ud558\ubc84"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of(u"\uc778\ub514\uc560\ub098\uc8fc, \ube44\ube44"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"\ub85c\uc6cc \ud504\ub9b0\uc2a4 \ucffc\ud130"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"\ud3ec\ud2b8\uc624\ube0c\uc2a4\ud398\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"\uc0b0\ud1a0\ub3c4\ubc0d\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"\uc0dd\ubc14\ub974\ud154\ub808\ubbf8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"\uc2a4\uc704\ud504\ud2b8\ucee4\ub7f0\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of(u"\ube0c\ub85c\ucee8\ud790"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"\ubc14\uc774\uc544 \ubc18\ub370\ub77c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of(u"\ud3ec\ub974\ud1a0\ud504\ub7ad\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"\uc0ac\uc6b0\uc2a4\uc870\uc9c0\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of(u"\uc0b4\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of(u"\uc778\ub514\uc560\ub098\uc8fc, \uba38\ub81d\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of(u"\uc778\ub514\uc560\ub098\uc8fc, \uc704\ub108\ub9e5"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of(u"\ud22c\ucfe0\ub9cc"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of(u"\uc6b0\uc218\uc544\uc774\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of(u"\uc778\ub514\uc560\ub098\uc8fc, \ud154\uc2dc\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of(u"\uc778\ub514\uc560\ub098\uc8fc, \ube48\uc13c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"\ub4a4\ubabd \ub4a4\ub974\ube4c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of(u"\ub77c \ub9ac\uc624\ud558"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of(u"\uc0b0\ud6c4\uc548"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of(u"\uc0b0\ub8e8\uc774\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of(u"\uc778\ub514\uc560\ub098\uc8fc, \ud53c\uce20\ubc84\uadf8"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of(u"\ucf04\ud130\ud0a4\uc8fc, \ubaac\ud2f0\uccbc\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"\ub178\uc2a4\ub2e4\ucf54\ud0c0\uc8fc, \ubca0\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"\uc911\ubd80, \ub178\uc2a4\ub2e4\ucf54\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of(u"\ub9ac\uc624 \uac00\uc608\uace0\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of(u"\ub178\uc2a4\ub2e4\ucf54\ud0c0\uc8fc, \ub274\uc0b4\ub818"_s)
		})
	}));
	return data;
}

TimeZoneNames_ko::TimeZoneNames_ko() {
}

$Class* TimeZoneNames_ko::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ko, name, initialize, &_TimeZoneNames_ko_ClassInfo_, allocate$TimeZoneNames_ko);
	return class$;
}

$Class* TimeZoneNames_ko::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun