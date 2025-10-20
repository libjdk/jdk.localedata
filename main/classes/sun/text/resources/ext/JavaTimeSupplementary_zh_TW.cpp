#include <sun/text/resources/ext/JavaTimeSupplementary_zh_TW.h>

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
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_zh_TW::*)()>(&JavaTimeSupplementary_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_zh_TW",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_zh_TW_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_zh_TW($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_zh_TW));
}

void JavaTimeSupplementary_zh_TW::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1\u5b63"_s,
		u"2\u5b63"_s,
		u"3\u5b63"_s,
		u"4\u5b63"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"\u7b2c1\u5b63"_s,
		u"\u7b2c2\u5b63"_s,
		u"\u7b2c3\u5b63"_s,
		u"\u7b2c4\u5b63"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"\u9031\u65e5"_s,
		u"\u9031\u4e00"_s,
		u"\u9031\u4e8c"_s,
		u"\u9031\u4e09"_s,
		u"\u9031\u56db"_s,
		u"\u9031\u4e94"_s,
		u"\u9031\u516d"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"\u4f0a\u65af\u862d\u66c6"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"\u7a46\u54c8\u862d\u59c6\u6708"_s,
		u"\u8272\u6cd5\u723e\u6708"_s,
		u"\u8cf4\u6bd4\u6708 I"_s,
		u"\u8cf4\u6bd4\u6708 II"_s,
		u"\u4e3b\u99ac\u9054\u6708 I"_s,
		u"\u4e3b\u99ac\u9054\u6708 II"_s,
		u"\u8cf4\u54f2\u535c\u6708"_s,
		u"\u820d\u723e\u90a6\u6708"_s,
		u"\u8cf4\u8cb7\u4e39\u6708"_s,
		u"\u9583\u74e6\u9b6f\u6708"_s,
		u"\u90fd\u723e\u5580\u723e\u5fb7\u6708"_s,
		u"\u90fd\u723e\u9ed1\u54f2\u6708"_s,
		""_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"ah:mm:ss [zzzz]"_s,
		"ah:mm:ss [z]"_s,
		"ah:mm:ss"_s,
		"ah:mm"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"\u4f5b\u66c6"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"\u897f\u5143"_s,
		u"\u660e\u6cbb"_s,
		u"\u5927\u6b63"_s,
		u"\u662d\u548c"_s,
		u"\u5e73\u6210"_s,
		u"\u4ee4\u548c"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras2, $new($StringArray, {
		u"\u897f\u5143\u524d"_s,
		u"\u897f\u5143"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"\u6c11\u570b\u524d"_s,
		u"\u6c11\u570b"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"\u4f5b\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"\u516c\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"\u516c\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"\u4f0a\u65af\u862d\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"\u4f0a\u65af\u862d\u6c11\u7528\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"\u70cf\u59c6\u5eab\u62c9\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"\u65e5\u672c\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"\u6c11\u570b\u66c6"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"\u5e74\u4ee3"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"\u5c0f\u6642"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"\u5206\u9418"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"\u79d2"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"\u9031"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"\u9031\u5929"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"\u6642\u5340"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gy/M/d"_s,
				"Gy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeShortEras2)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\u5e74M\u6708d\u65e5 EEEE"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				u"Gy\u5e74M\u6708d\u65e5"_s,
				"Gy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeShortEras2)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy\u5e74M\u6708d\u65e5 EEEE"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				u"GGGGy\u5e74M\u6708d\u65e5"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"1\u6708"_s,
				u"2\u6708"_s,
				u"3\u6708"_s,
				u"4\u6708"_s,
				u"5\u6708"_s,
				u"6\u6708"_s,
				u"7\u6708"_s,
				u"8\u6708"_s,
				u"9\u6708"_s,
				u"10\u6708"_s,
				u"11\u6708"_s,
				u"12\u6708"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedShortEras)
		})
	});
}

JavaTimeSupplementary_zh_TW::JavaTimeSupplementary_zh_TW() {
}

$Class* JavaTimeSupplementary_zh_TW::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_zh_TW, name, initialize, &_JavaTimeSupplementary_zh_TW_ClassInfo_, allocate$JavaTimeSupplementary_zh_TW);
	return class$;
}

$Class* JavaTimeSupplementary_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun