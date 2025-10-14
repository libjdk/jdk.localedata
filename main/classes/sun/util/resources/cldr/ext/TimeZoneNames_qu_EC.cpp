#include <sun/util/resources/cldr/ext/TimeZoneNames_qu_EC.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_qu_EC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_qu_EC::*)()>(&TimeZoneNames_qu_EC::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_qu_EC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_qu_EC",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_qu_EC_MethodInfo_
};

$Object* allocate$TimeZoneNames_qu_EC($Class* clazz) {
	return $of($alloc(TimeZoneNames_qu_EC));
}

void TimeZoneNames_qu_EC::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_qu_EC::getContents() {
	$var($StringArray, Peru, $new($StringArray, {
		u"Hora Estandar de Per\u00fa"_s,
		u"\u2205\u2205\u2205"_s,
		u"Hora de Verano de Per\u00fa"_s,
		u"\u2205\u2205\u2205"_s,
		u"Hora de Per\u00fa"_s,
		u"\u2205\u2205\u2205"_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		"Hora de Ecuador"_s,
		"ECT"_s,
		""_s,
		""_s,
		""_s,
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
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
		})
	}));
	return data;
}

TimeZoneNames_qu_EC::TimeZoneNames_qu_EC() {
}

$Class* TimeZoneNames_qu_EC::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_qu_EC, name, initialize, &_TimeZoneNames_qu_EC_ClassInfo_, allocate$TimeZoneNames_qu_EC);
	return class$;
}

$Class* TimeZoneNames_qu_EC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun