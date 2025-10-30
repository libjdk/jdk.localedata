#include <sun/util/resources/cldr/ext/TimeZoneNames_ug.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE
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

$MethodInfo _TimeZoneNames_ug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ug::*)()>(&TimeZoneNames_ug::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ug",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ug_MethodInfo_
};

$Object* allocate$TimeZoneNames_ug($Class* clazz) {
	return $of($alloc(TimeZoneNames_ug));
}

void TimeZoneNames_ug::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ug::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\u06af\u0649\u0631\u0649\u0646\u06cb\u0649\u0686 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"\u0626\u0627\u0643\u0631\u06d0 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0643\u0631\u0649 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0643\u0631\u06d0 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"\u0643\u06c7\u0643 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u06c7\u0643 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u064a\u06d0\u0631\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u06c7\u0643 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"\u0643\u06c7\u0628\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u06c7\u0628\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u06c7\u0628\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"\u0641\u0649\u062c\u0649 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u0649\u062c\u0649 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u0649\u062c\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u06af\u06c7\u0644\u0641 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"\u062e\u0648\u06cb\u062f \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062e\u0648\u06cb\u062f \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062e\u0648\u06cb\u062f \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u0626\u0649\u0631\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0649\u0631\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0649\u0631\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"\u0646\u0649\u064a\u06c7\u0626\u06d0 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"\u0626\u0648\u0645\u0633\u0643 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0648\u0645\u0633\u0643 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0648\u0645\u0633\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"\u067e\u06d0\u0631\u06c7 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u06d0\u0631\u06c7 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u06d0\u0631\u06c7 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"\u0686\u06c7\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"\u06cb\u06d0\u064a\u0643 \u0626\u0627\u0631\u0649\u0644\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Casey, $new($StringArray, {
		u"\u0643\u0627\u0633\u06d0\u064a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\u0686\u0649\u0644\u0649 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0686\u0649\u0644\u0649 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0686\u0649\u0644\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u062c\u06c7\u06ad\u06af\u0648 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062c\u06c7\u06ad\u06af\u0648 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062c\u06c7\u06ad\u06af\u0648 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"\u0643\u0648\u0643\u06c7\u0633 \u0626\u0627\u0631\u0649\u0644\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"\u062f\u0627\u06cb\u0649\u0633 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u06be\u0649\u0646\u062f\u0649\u0633\u062a\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\u064a\u0627\u067e\u0648\u0646\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u0627\u067e\u0648\u0646\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u0627\u067e\u0648\u0646\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\u0643\u0648\u0631\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u0648\u0631\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u0648\u0631\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"\u0646\u0627\u06cb\u0631\u06c7 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"\u0646\u06d0\u067e\u0627\u0644 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"\u067e\u0627\u0644\u0627\u06cb \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"\u0633\u0627\u0645\u0648\u0626\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u06d5\u0645\u06d5\u0631\u0642\u06d5\u0646\u062a \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u0627\u0645\u0648\u0626\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"\u0634\u0648\u06cb\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"\u062a\u0648\u0646\u06af\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u0648\u0646\u06af\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u0648\u0646\u06af\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"\u0626\u0627\u0644\u064a\u0627\u0633\u0643\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0644\u064a\u0627\u0633\u0643\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0644\u064a\u0627\u0633\u0643\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"\u0626\u0627\u0645\u0627\u0632\u0648\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0645\u0627\u0632\u0648\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0645\u0627\u0632\u0648\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"\u0626\u0627\u0646\u0627\u062f\u0649\u0631 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0646\u0627\u062f\u0649\u0631 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0646\u0627\u062f\u0649\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"\u0626\u0627\u0632\u0648\u0631 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0632\u0648\u0631 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0632\u0648\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"\u0628\u06c7\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"\u0628\u0649\u0631\u06c7\u0646\u0649\u064a \u062f\u0627\u0631\u06c7\u0633\u0633\u0627\u0644\u0627\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"\u067e\u0627\u0633\u0643\u0627\u0644\u064a\u0627 \u0626\u0627\u0631\u0649\u0644\u0649 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d0\u0633\u062a\u06d0\u0631 \u0626\u0627\u0631\u0649\u0644\u0649 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d0\u0633\u062a\u06d0\u0631 \u0626\u0627\u0631\u0649\u0644\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\u06af\u0649\u06cb\u0649\u064a\u0627\u0646\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u0626\u0649\u0633\u0631\u0627\u0626\u0649\u0644\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0649\u0633\u0631\u0627\u0626\u0649\u0644\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0649\u0633\u0631\u0627\u0626\u0649\u0644\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"\u0643\u0648\u0633\u0631\u0627\u0626\u06d0 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"\u0645\u0627\u06cb\u0633\u0648\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\u0645\u0648\u0633\u0643\u06cb\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u0648\u0633\u0643\u06cb\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u0648\u0633\u0643\u06cb\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"\u067e\u0648\u0646\u067e\u06d0\u064a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"\u0633\u0627\u0645\u0627\u0631\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u0627\u0645\u0627\u0631\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u0627\u0645\u0627\u0631\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"\u062a\u0627\u064a\u062a\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"\u062a\u06d5\u064a\u0628\u06d0\u064a \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u06d5\u064a\u0628\u06d0\u064a \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u06d5\u064a\u0628\u06d0\u064a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"\u062a\u06c7\u06cb\u0627\u0644\u06c7 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"\u06cb\u0648\u0633\u062a\u0648\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"\u06cb\u0627\u0644\u0644\u0649\u0633 \u06cb\u06d5 \u0641\u06c7\u062a\u06c7\u0646\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u0626\u06d5\u0631\u06d5\u0628 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d5\u0631\u06d5\u0628 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d5\u0631\u06d5\u0628 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\u0626\u06d5\u0631\u0645\u06d0\u0646\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d5\u0631\u0645\u06d0\u0646\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d5\u0631\u0645\u06d0\u0646\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"\u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"\u0686\u0627\u062a\u0627\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0686\u0627\u062a\u0627\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0686\u0627\u062a\u0627\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\u0626\u06d0\u0643\u06cb\u0627\u062f\u0648\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"\u06af\u0627\u0645\u0628\u0649\u064a\u06d0\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u06af\u0649\u0631\u06c7\u0632\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06af\u0649\u0631\u06c7\u0632\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06af\u0649\u0631\u06c7\u0632\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\u0626\u0649\u0631\u0643\u06c7\u062a\u0633\u0643 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0649\u0631\u0643\u06c7\u062a\u0633\u0643 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0649\u0631\u0643\u06c7\u062a\u0633\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"\u0645\u0627\u06af\u0627\u062f\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u0627\u06af\u0627\u062f\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u0627\u06af\u0627\u062f\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"\u0628\u0649\u0631\u0645\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"\u0646\u0648\u0631\u0641\u0648\u0644\u0643 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0646\u0648\u0631\u0641\u0648\u0644\u0643 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0646\u0648\u0631\u0641\u0648\u0644\u0643 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\u0641\u06d0\u0631\u0646\u0627\u0646\u062f\u0648-\u0646\u0648\u0631\u0648\u0646\u062e\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u06d0\u0631\u0646\u0627\u0646\u062f\u0648-\u0646\u0648\u0631\u0648\u0646\u062e\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u06d0\u0631\u0646\u0627\u0646\u062f\u0648-\u0646\u0648\u0631\u0648\u0646\u062e\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"\u0631\u06d0\u0626\u0648\u0646\u0649\u064a\u0648\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"\u0631\u0648\u062a\u06d0\u0631\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"\u0633\u0648\u0644\u0648\u0645\u0648\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"\u062a\u0648\u0643\u06d0\u0644\u0627\u06cb \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"\u0626\u06c7\u0631\u06c7\u06af\u06cb\u0627\u064a \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06c7\u0631\u06c7\u06af\u06cb\u0627\u064a \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06c7\u0631\u06c7\u06af\u06cb\u0627\u064a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"\u06cb\u0627\u0646\u06c7\u0626\u0627\u062a\u06c7 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06cb\u0627\u0646\u06c7\u0626\u0627\u062a\u06c7 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06cb\u0627\u0646\u06c7\u0626\u0627\u062a\u06c7 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\u064a\u0627\u0643\u06c7\u062a\u0633\u0643 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u0627\u0643\u06c7\u062a\u0633\u0643 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u0627\u0643\u06c7\u062a\u0633\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\u0626\u0627\u062a\u0644\u0627\u0646\u062a\u0649\u0643 \u0626\u0648\u0643\u064a\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u062a\u0644\u0627\u0646\u062a\u0649\u0643 \u0626\u0648\u0643\u064a\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u062a\u0644\u0627\u0646\u062a\u0649\u0643 \u0626\u0648\u0643\u064a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"\u0686\u0627\u0645\u0648\u0631\u0631\u0648 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"\u0643\u0648\u0644\u0648\u0645\u0628\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u0648\u0644\u0648\u0645\u0628\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u0648\u0644\u0648\u0645\u0628\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"\u0641\u0627\u0644\u0643\u0644\u0627\u0646\u062f \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u0627\u0644\u0643\u0644\u0627\u0646\u062f \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u0627\u0644\u0643\u0644\u0627\u0646\u062f \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"\u0645\u0627\u0644\u0627\u064a\u0634\u0649\u064a\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\u0645\u0627\u0644\u062f\u0649\u06cb\u06d0 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"\u0626\u06c7\u0644\u0627\u0646\u0628\u0627\u062a\u0648\u0631 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06c7\u0644\u0627\u0646\u0628\u0627\u062a\u0648\u0631 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06c7\u0644\u0627\u0646\u0628\u0627\u062a\u0648\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\u067e\u0627\u0643\u0649\u0633\u062a\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u0627\u0643\u0649\u0633\u062a\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u0627\u0643\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"\u067e\u0627\u0631\u0627\u06af\u06cb\u0627\u064a \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u0627\u0631\u0627\u06af\u06cb\u0627\u064a \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u0627\u0631\u0627\u06af\u06cb\u0627\u064a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"\u067e\u0649\u062a\u0643\u0627\u064a\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"\u0633\u0627\u062e\u0627\u0631\u0649\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u0627\u062e\u0627\u0631\u0649\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u0627\u062e\u0627\u0631\u0649\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\u0633\u06c7\u0631\u0649\u0646\u0627\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"\u0631\u0648\u0698\u062f\u06d0\u0633\u062a\u06cb\u0648 \u0626\u0627\u0631\u0649\u0644\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\u06af\u0627\u0644\u0627\u067e\u0627\u06af\u0648\u0633 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"\u0634\u064a\u0627\u06ad\u06af\u0627\u06ad \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u064a\u0627\u06ad\u06af\u0627\u06ad \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u064a\u0627\u06ad\u06af\u0627\u06ad \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"\u06be\u0649\u0646\u062f\u0649 \u0686\u0649\u0646\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"\u067e\u06d0\u062a\u0631\u0648\u067e\u0627\u06cb\u0644\u0648\u06cb\u0633\u0643-\u0643\u0627\u0645\u0686\u0627\u062a\u0643\u0633\u0643\u0649 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u06d0\u062a\u0631\u0648\u067e\u0627\u06cb\u0644\u0648\u06cb\u0633\u0643-\u0643\u0627\u0645\u0686\u0627\u062a\u0643\u0633\u0643\u0649 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u067e\u06d0\u062a\u0631\u0648\u067e\u0627\u06cb\u0644\u0648\u06cb\u0633\u0643-\u0643\u0627\u0645\u0686\u0627\u062a\u0643\u0633\u0643\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"\u0642\u0649\u0631\u063a\u0649\u0632\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"\u0644\u0648\u0631\u062f-\u062e\u0627\u064a \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0644\u0648\u0631\u062f-\u062e\u0627\u064a \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0644\u0648\u0631\u062f-\u062e\u0627\u064a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"\u0645\u0627\u0631\u0643\u0649\u0632 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0649\u0626\u06c7\u0633 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0649\u0626\u06c7\u0633 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0649\u0626\u06c7\u0633 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"\u0633\u0649\u0646\u06af\u0627\u067e\u0648\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"\u06cb\u06d0\u0646\u06d0\u0632\u06c7\u0626\u06d0\u0644\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"\u06cb\u0648\u0644\u06af\u0627\u06af\u0631\u0627\u062f \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06cb\u0648\u0644\u06af\u0627\u06af\u0631\u0627\u062f \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06cb\u0648\u0644\u06af\u0627\u06af\u0631\u0627\u062f \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\u0626\u06d5\u0632\u06d5\u0631\u0628\u06d5\u064a\u062c\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d5\u0632\u06d5\u0631\u0628\u06d5\u064a\u062c\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06d5\u0632\u06d5\u0631\u0628\u06d5\u064a\u062c\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"\u0628\u0627\u06ad\u0644\u0627\u062f\u0649\u0634 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0628\u0627\u06ad\u0644\u0627\u062f\u0649\u0634 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0628\u0627\u06ad\u0644\u0627\u062f\u0649\u0634 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"\u064a\u06d0\u0634\u0649\u0644 \u062a\u06c7\u0645\u0634\u06c7\u0642 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u0634\u0649\u0644 \u062a\u06c7\u0645\u0634\u06c7\u0642 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u0634\u0649\u0644 \u062a\u06c7\u0645\u0634\u06c7\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u062a\u0649\u0645\u0648\u0631 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"\u0633\u06d0\u064a\u0634\u06d0\u0644 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"\u062a\u0627\u062c\u0649\u0643\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"\u0626\u06c6\u0632\u0628\u06d0\u0643\u0649\u0633\u062a\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06c6\u0632\u0628\u06d0\u0643\u0649\u0633\u062a\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u06c6\u0632\u0628\u06d0\u0643\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\u0626\u0627\u0641\u063a\u0627\u0646\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"\u0643\u0649\u0631\u0627\u0633\u0646\u0648\u064a\u0627\u0631\u0633\u0643 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u0649\u0631\u0627\u0633\u0646\u0648\u064a\u0627\u0631\u0633\u0643 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0643\u0649\u0631\u0627\u0633\u0646\u0648\u064a\u0627\u0631\u0633\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u064a\u06d0\u06ad\u0649 \u0632\u06d0\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u06ad\u0649 \u0632\u06d0\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u06ad\u0649 \u0632\u06d0\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"\u0646\u0648\u06cb\u0648\u0633\u0649\u0628\u0649\u0631\u0633\u0643 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0646\u0648\u06cb\u0648\u0633\u0649\u0628\u0649\u0631\u0633\u0643 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0646\u0648\u06cb\u0648\u0633\u0649\u0628\u0649\u0631\u0633\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"\u0641\u0649\u0644\u0649\u067e\u067e\u0649\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u0649\u0644\u0649\u067e\u067e\u0649\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0641\u0649\u0644\u0649\u067e\u067e\u0649\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"\u06cb\u0649\u0644\u0627\u062f\u0649\u06cb\u0648\u0633\u062a\u0648\u0643 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06cb\u0649\u0644\u0627\u062f\u0649\u06cb\u0648\u0633\u062a\u0648\u0643 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06cb\u0649\u0644\u0627\u062f\u0649\u06cb\u0648\u0633\u062a\u0648\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"\u06be\u0649\u0646\u062f\u0649 \u0626\u0648\u0643\u064a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"\u0644\u0627\u064a\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"\u0646\u0649\u06cb\u0641\u0648\u0626\u06c7\u0646\u0644\u0627\u0646\u062f \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0646\u0649\u06cb\u0641\u0648\u0626\u06c7\u0646\u0644\u0627\u0646\u062f \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0646\u0649\u06cb\u0641\u0648\u0626\u06c7\u0646\u0644\u0627\u0646\u062f \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"\u062a\u06c8\u0631\u0643\u0645\u06d5\u0646\u0649\u0633\u062a\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u06c8\u0631\u0643\u0645\u06d5\u0646\u0649\u0633\u062a\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u06c8\u0631\u0643\u0645\u06d5\u0646\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5\u06af\u06d5 \u0642\u0627\u0631\u0627\u0634\u0644\u0649\u0642 \u06af\u0649\u06cb\u0649\u064a\u0627\u0646\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"\u064a\u06d0\u06ad\u0649 \u0643\u0627\u0644\u06d0\u062f\u0648\u0646\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u06ad\u0649 \u0643\u0627\u0644\u06d0\u062f\u0648\u0646\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u06ad\u0649 \u0643\u0627\u0644\u06d0\u062f\u0648\u0646\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u062c\u0648\u0631\u062c\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"\u064a\u06d0\u0643\u0627\u062a\u06d0\u0631\u0649\u0646\u0628\u06c7\u0631\u06af \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u0643\u0627\u062a\u06d0\u0631\u0649\u0646\u0628\u06c7\u0631\u06af \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u064a\u06d0\u0643\u0627\u062a\u06d0\u0631\u0649\u0646\u0628\u06c7\u0631\u06af \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"\u062f\u06c7\u0645\u0648\u0646\u062a-\u062f\u06c7\u0631\u06cb\u0649\u0644 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u062a\u0649\u0646\u0686 \u0626\u0648\u0643\u064a\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u062a\u0649\u0646\u0686 \u0626\u0648\u0643\u064a\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u062a\u0649\u0646\u0686 \u0626\u0648\u0643\u064a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0642\u0649\u0633\u0649\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0642\u0649\u0633\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0642\u0649\u0633\u0649\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u062a\u0649\u0646\u0686 \u0626\u0648\u0643\u064a\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u0649\u0646\u0686 \u0626\u0648\u0643\u064a\u0627\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u0649\u0646\u0686 \u0626\u0648\u0643\u064a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5\u06af\u06d5 \u0642\u0627\u0631\u0627\u0634\u0644\u0649\u0642 \u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u06cb\u06d5 \u0626\u0627\u0646\u062a\u0627\u0631\u0643\u062a\u0649\u0643\u0627 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"\u06af\u0649\u0644\u0628\u06d0\u0631\u062a \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"\u06be\u0627\u06cb\u0627\u064a-\u0626\u0627\u0644\u06d0\u064a\u06c7\u062a \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06be\u0627\u06cb\u0627\u064a-\u0626\u0627\u0644\u06d0\u064a\u06c7\u062a \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u06be\u0627\u06cb\u0627\u064a-\u0626\u0627\u0644\u06d0\u064a\u06c7\u062a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"\u0641\u06d0\u0646\u0649\u0643\u0633 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"\u0633\u0627\u064a\u0646\u0649\u062a \u067e\u0649\u0626\u06d0\u0631 \u06cb\u06d5 \u0645\u0649\u0643\u06d0\u0644\u0648\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u0627\u064a\u0646\u0649\u062a \u067e\u0649\u0626\u06d0\u0631 \u06cb\u06d5 \u0645\u0649\u0643\u06d0\u0644\u0648\u0646 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0633\u0627\u064a\u0646\u0649\u062a \u067e\u0649\u0626\u06d0\u0631 \u06cb\u06d5 \u0645\u0649\u0643\u06d0\u0644\u0648\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u062a\u0627\u063a \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u0627\u063a \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u062a\u0627\u063a \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"\u0645\u0627\u0631\u0634\u0627\u0644 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u063a\u06d5\u0631\u0628\u0649\u064a \u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u063a\u06d5\u0631\u0628\u0649\u064a \u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u063a\u06d5\u0631\u0628\u0649\u064a \u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"\u067e\u0627\u067e\u06c7\u0626\u0627 \u064a\u06d0\u06ad\u0649 \u06af\u0649\u06cb\u0649\u0646\u06d0\u064a\u06d5\u0633\u0649 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0642\u0649\u0633\u0649\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0642\u0649\u0633\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0642\u0649\u0633\u0649\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0634\u06d5\u0631\u0642\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0634\u06d5\u0631\u0642\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0634\u06d5\u0631\u0642\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u063a\u06d5\u0631\u0628\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u063a\u06d5\u0631\u0628\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u063a\u06d5\u0631\u0628\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u06be\u0649\u0646\u062f\u0648\u0646\u06d0\u0632\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u06be\u0649\u0646\u062f\u0648\u0646\u06d0\u0632\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u06be\u0649\u0646\u062f\u0648\u0646\u06d0\u0632\u0649\u064a\u06d5 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0642\u0627\u0632\u0627\u0642\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0642\u0627\u0632\u0627\u0642\u0649\u0633\u062a\u0627\u0646 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"\u0626\u0627\u06cb\u0633\u062a\u0649\u0631\u0627\u0644\u0649\u064a\u06d5 \u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u063a\u06d5\u0631\u0628\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u063a\u06d5\u0631\u0628\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
		""_s,
		u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u063a\u06d5\u0631\u0628\u0649\u064a \u0642\u0649\u0633\u0649\u0645 \u06cb\u0627\u0642\u062a\u0649"_s,
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
			$of(EMPTY_ZONE)
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
				u"\u06af\u0649\u0631\u0649\u0646\u06cb\u0649\u0686 \u06cb\u0627\u0642\u062a\u0649"_s,
				""_s,
				u"\u0626\u0649\u0631\u06d0\u0644\u0627\u0646\u062f \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
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
				u"\u06af\u0649\u0631\u0649\u0646\u06cb\u0649\u0686 \u06cb\u0627\u0642\u062a\u0649"_s,
				""_s,
				u"\u0626\u06d5\u0646\u06af\u0644\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
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
				u"\u06af\u0649\u0631\u0649\u0646\u06cb\u0649\u0686 \u06cb\u0627\u0642\u062a\u0649"_s,
				""_s,
				u"\u0626\u06d5\u0646\u06af\u0644\u0649\u064a\u06d5 \u064a\u0627\u0632\u0644\u0649\u0642 \u06cb\u0627\u0642\u062a\u0649"_s,
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
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"\u062e\u0648\u0686\u0649\u0645\u0649\u0646 \u0634\u06d5\u06be\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u064a\u0648\u0686\u06c7\u0646 \u0634\u06d5\u06be\u06d5\u0631"_s)
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
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"\u0631\u06d0\u0626\u0648\u0646\u0649\u064a\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"\u0633\u0627\u0646-\u062a\u0648\u0645\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"\u0643\u06c7\u0631\u0627\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"\u0626\u0627\u0633\u06c7\u0646\u0633\u0649\u064a\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"\u0633\u0627\u064a\u0646\u0649\u062a-\u0628\u0627\u0631\u062a\u06be\u06d0\u0644\u06d5\u0645\u0649\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"\u062f\u06c7\u0645\u0648\u0646\u062a \u062f\u06c7\u0631\u06cb\u0649\u0644\u0644\u06d0"_s)
		})
	}));
	return data;
}

TimeZoneNames_ug::TimeZoneNames_ug() {
}

$Class* TimeZoneNames_ug::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ug, name, initialize, &_TimeZoneNames_ug_ClassInfo_, allocate$TimeZoneNames_ug);
	return class$;
}

$Class* TimeZoneNames_ug::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun