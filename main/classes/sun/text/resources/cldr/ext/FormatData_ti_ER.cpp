#include <sun/text/resources/cldr/ext/FormatData_ti_ER.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_ti_ER_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_ti_ER::*)()>(&FormatData_ti_ER::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ti_ER_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ti_ER",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ti_ER_MethodInfo_
};

$Object* allocate$FormatData_ti_ER($Class* clazz) {
	return $of($alloc(FormatData_ti_ER));
}

void FormatData_ti_ER::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ti_ER::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u1361 dd MMMM \u1218\u12d3\u120d\u1272 y G"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE\u1361 dd MMMM \u1218\u12d3\u120d\u1272 y GGGG"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"\u1230"_s,
				u"\u1230"_s,
				u"\u1230"_s,
				u"\u1228"_s,
				u"\u1213"_s,
				u"\u12d3"_s,
				u"\u1240"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"\u12d3\u1218\u1270 \u12d3\u1208\u121d"_s,
				u"\u12d3\u1218\u1270 \u121d\u1205\u1228\u1275"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		})
	}));
	return data;
}

FormatData_ti_ER::FormatData_ti_ER() {
}

$Class* FormatData_ti_ER::load$($String* name, bool initialize) {
	$loadClass(FormatData_ti_ER, name, initialize, &_FormatData_ti_ER_ClassInfo_, allocate$FormatData_ti_ER);
	return class$;
}

$Class* FormatData_ti_ER::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun