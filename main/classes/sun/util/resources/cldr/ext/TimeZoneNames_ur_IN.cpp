#include <sun/util/resources/cldr/ext/TimeZoneNames_ur_IN.h>

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

$MethodInfo _TimeZoneNames_ur_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ur_IN::*)()>(&TimeZoneNames_ur_IN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ur_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ur_IN",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ur_IN_MethodInfo_
};

$Object* allocate$TimeZoneNames_ur_IN($Class* clazz) {
	return $of($alloc(TimeZoneNames_ur_IN));
}

void TimeZoneNames_ur_IN::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ur_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\u06af\u0631\u06cc\u0646 \u0648\u0686 \u0645\u06cc\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u062e\u0644\u06cc\u062c \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u0627\u06cc\u0631\u0627\u0646 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u06cc\u0631\u0627\u0646 \u0688\u06d2 \u0644\u0627\u0626\u0679 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u06cc\u0631\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"\u067e\u06cc\u0631\u0648 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u067e\u06cc\u0631\u0648 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u067e\u06cc\u0631\u0648 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\u0686\u0644\u06cc \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0686\u0644\u06cc \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0686\u0644\u06cc \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u0627\u0646\u0688\u06cc\u0627 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"\u0646\u06cc\u067e\u0627\u0644 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"\u0627\u06cc\u0645\u06cc\u0632\u0648\u0646 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u06cc\u0645\u06cc\u0632\u0648\u0646 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u06cc\u0645\u06cc\u0632\u0648\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"\u0628\u06be\u0648\u0679\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"\u0627\u06cc\u0633\u0679\u0631 \u0622\u0626\u0644\u06cc\u0646\u0688 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u06cc\u0633\u0679\u0631 \u0622\u0626\u0644\u06cc\u0646\u0688 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u06cc\u0633\u0679\u0631 \u0622\u0626\u0644\u06cc\u0646\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\u06af\u06cc\u0627\u0646\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u0627\u0633\u0631\u0627\u0626\u06cc\u0644 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u0633\u0631\u0627\u0626\u06cc\u0644 \u0688\u06d2 \u0644\u0627\u0626\u0679 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u0633\u0631\u0627\u0626\u06cc\u0644 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"\u0648\u0648\u0633\u0679\u0627\u06a9 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u0639\u0631\u0628 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0639\u0631\u0628 \u0688\u06d2 \u0644\u0627\u0626\u0679 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0639\u0631\u0628 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\u0622\u0631\u0645\u06cc\u0646\u06cc\u0627 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0622\u0631\u0645\u06cc\u0646\u06cc\u0627 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0622\u0631\u0645\u06cc\u0646\u06cc\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"\u0628\u0648\u0644\u06cc\u0648\u06cc\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\u0627\u06cc\u06a9\u0648\u0627\u0688\u0648\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u062c\u0627\u0631\u062c\u06cc\u0627 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u062c\u0627\u0631\u062c\u06cc\u0627 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u062c\u0627\u0631\u062c\u06cc\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\u0641\u0631\u0646\u0627\u0646\u0688\u0648 \u0688\u06cc \u0646\u0648\u0631\u0646\u06c1\u0627 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0641\u0631\u0646\u0627\u0646\u0688\u0648 \u0688\u06cc \u0646\u0648\u0631\u0648\u0646\u06c1\u0627 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0641\u0631\u0646\u0627\u0646\u0688\u0648 \u0688\u06cc \u0646\u0648\u0631\u0646\u06c1\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"\u0631\u0648\u062a\u06be\u06cc\u0631\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"\u06cc\u0648\u0631\u0648\u06af\u0648\u0626\u06d2 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u06cc\u0648\u0631\u0648\u06af\u0648\u0626\u06d2 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u06cc\u0648\u0631\u0648\u06af\u0648\u0626\u06d2 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"\u0628\u0631\u0627\u0632\u06cc\u0644\u06cc\u0627 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0628\u0631\u0627\u0632\u06cc\u0644\u06cc\u0627 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0628\u0631\u0627\u0632\u06cc\u0644\u06cc\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"\u06a9\u0648\u0644\u0645\u0628\u06cc\u0627 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u06a9\u0648\u0644\u0645\u0628\u06cc\u0627 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u06a9\u0648\u0644\u0645\u0628\u06cc\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"\u0641\u0627\u06a9 \u0644\u06cc\u0646\u0688 \u0622\u0626\u0644\u06cc\u0646\u0688\u0632 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0641\u0627\u06a9 \u0644\u06cc\u0646\u0688 \u0622\u0626\u0644\u06cc\u0646\u0688\u0632 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0641\u0627\u06a9 \u0644\u06cc\u0646\u0688 \u0622\u0626\u0644\u06cc\u0646\u0688\u0632 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\u0645\u0627\u0644\u062f\u06cc\u067e \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\u067e\u0627\u06a9\u0633\u062a\u0627\u0646 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u067e\u0627\u06a9\u0633\u062a\u0627\u0646 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u067e\u0627\u06a9\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"\u067e\u06cc\u0631\u0627\u06af\u0648\u0626\u06d2 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u067e\u06cc\u0631\u0627\u06af\u0648\u0626\u06d2 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u067e\u06cc\u0631\u0627\u06af\u0648\u0626\u06d2 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\u0633\u0648\u0631\u06cc\u0646\u0627\u0645 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\u06af\u0627\u0644\u0627\u067e\u0627\u06af\u0648\u0632 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"\u06a9\u0631\u063a\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"\u0648\u06cc\u0646\u0632\u0648\u0626\u06cc\u0644\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\u0622\u0630\u0631\u0628\u0627\u0626\u06cc\u062c\u0627\u0646 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0622\u0630\u0631\u0628\u0627\u0626\u06cc\u062c\u0627\u0646 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0622\u0630\u0631\u0628\u0627\u0626\u06cc\u062c\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"\u0628\u0646\u06af\u0644\u06c1 \u062f\u06cc\u0634 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0628\u0646\u06af\u0644\u06c1 \u062f\u06cc\u0634 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0628\u0646\u06af\u0644\u06c1 \u062f\u06cc\u0634 \u0679\u0627\u0626\u0645"_s,
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
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"\u062a\u0627\u062c\u06a9\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"\u0627\u0632\u0628\u06a9\u0633\u062a\u0627\u0646 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u0632\u0628\u06a9\u0633\u062a\u0627\u0646 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0627\u0632\u0628\u06a9\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\u0627\u0641\u063a\u0627\u0646\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u0646\u06cc\u0648\u0632\u06cc \u0644\u06cc\u0646\u0688 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0646\u06cc\u0648\u0632\u06cc \u0644\u06cc\u0646\u0688 \u0688\u06d2 \u0644\u0627\u0626\u0679 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u0646\u06cc\u0648\u0632\u06cc \u0644\u06cc\u0646\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"\u062a\u0631\u06a9\u0645\u0627\u0646\u0633\u062a\u0627\u0646 \u0633\u0679\u06cc\u0646\u0688\u0631\u0688 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u062a\u0631\u06a9\u0645\u0627\u0646\u0633\u062a\u0627\u0646 \u0633\u0645\u0631 \u0679\u0627\u0626\u0645"_s,
		""_s,
		u"\u062a\u0631\u06a9\u0645\u0627\u0646\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"\u0641\u0631\u06cc\u0646\u0686 \u06af\u06cc\u0627\u0646\u0627 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u0648\u0633\u0637\u06cc \u06cc\u0648\u0631\u067e \u06a9\u0627 \u0645\u0639\u06cc\u0627\u0631\u06cc \u0648\u0642\u062a"_s,
		""_s,
		u"\u0648\u0633\u0637\u06cc \u06cc\u0648\u0631\u067e \u06a9\u0627 \u0645\u0648\u0633\u0645 \u06af\u0631\u0645\u0627 \u06a9\u0627 \u0648\u0642\u062a"_s,
		""_s,
		u"\u0648\u0633\u0637\u06cc \u06cc\u0648\u0631\u067e \u06a9\u0627 \u0648\u0642\u062a"_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\u0645\u0634\u0631\u0642\u06cc \u0642\u0632\u0627\u062e\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"\u0645\u063a\u0631\u0628\u06cc \u0642\u0632\u0627\u062e\u0633\u062a\u0627\u0646 \u0679\u0627\u0626\u0645"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
			$of("UTC"_s),
			$of(EMPTY_ZONE)
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
			$of("ECT"_s),
			$of(Europe_Central)
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
			$of("Etc/GMT"_s),
			$of(GMT)
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
			$of("Asia/Oral"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of(Kazakhstan_Western)
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
			$of("Asia/Qatar"_s),
			$of(Arabian)
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
			$of("Asia/Aqtobe"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Atyrau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
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
			$of("Asia/Tehran"_s),
			$of(Iran)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GMT)
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
			$of("Africa/Tunis"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
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
			$of("Asia/Bishkek"_s),
			$of(Kyrgystan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(Pakistan)
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
			$of("Asia/Yerevan"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
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
			$of("America/Bahia"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(Brasilia)
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
			$of("Asia/Dushanbe"_s),
			$of(Tajikistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(Nepal)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qostanay"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of(GMT)
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
			$of("Europe/Prague"_s),
			$of(Europe_Central)
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
			$of("America/Bogota"_s),
			$of(Colombia)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of(Guyana)
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
			$of("America/Recife"_s),
			$of(Brasilia)
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
			$of("Europe/Andorra"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(Easter)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
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
			$of("America/Caracas"_s),
			$of(Venezuela)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of(French_Guiana)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(Noronha)
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
			$of("Europe/Guernsey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of(Maldives)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of(Paraguay)
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
			$of("Antarctica/Troll"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of(Falkland)
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
			$of("Europe/Podgorica"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
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
			$of("America/Fortaleza"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of(Vostok)
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
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of(Uruguay)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of(Suriname)
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
			$of("Europe/Isle_of_Man"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
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
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of(u"\u0627\u06a9\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"\u062a\u06be\u0648\u0644\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"\u0628\u0648\u0688\u0627\u067e\u06cc\u0633\u0679"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"\u06af\u0644\u06cc\u0633 \u0628\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"\u06af\u0648\u0633 \u0628\u06d2"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of(u"\u06af\u0631\u06cc\u0646\u0688 \u062a\u0631\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"\u0627\u062a\u062a\u0648\u0642\u0642\u0648\u0631\u062a\u0648\u0631\u0645\u06cc\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"\u06a9\u06cc\u0645\u0628\u0631\u062c \u0628\u06d2"_s)
		})
	}));
	return data;
}

TimeZoneNames_ur_IN::TimeZoneNames_ur_IN() {
}

$Class* TimeZoneNames_ur_IN::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ur_IN, name, initialize, &_TimeZoneNames_ur_IN_ClassInfo_, allocate$TimeZoneNames_ur_IN);
	return class$;
}

$Class* TimeZoneNames_ur_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun