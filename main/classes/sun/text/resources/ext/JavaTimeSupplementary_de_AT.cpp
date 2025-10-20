#include <sun/text/resources/ext/JavaTimeSupplementary_de_AT.h>

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

$MethodInfo _JavaTimeSupplementary_de_AT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_de_AT::*)()>(&JavaTimeSupplementary_de_AT::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_de_AT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_de_AT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_de_AT_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_de_AT($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_de_AT));
}

void JavaTimeSupplementary_de_AT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_de_AT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"J\u00e4n."_s,
				"Feb."_s,
				u"M\u00e4rz"_s,
				"Apr."_s,
				"Mai"_s,
				"Juni"_s,
				"Juli"_s,
				"Aug."_s,
				"Sep."_s,
				"Okt."_s,
				"Nov."_s,
				"Dez."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"J\u00e4nner"_s,
				"Februar"_s,
				u"M\u00e4rz"_s,
				"April"_s,
				"Mai"_s,
				"Juni"_s,
				"Juli"_s,
				"August"_s,
				"September"_s,
				"Oktober"_s,
				"November"_s,
				"Dezember"_s,
				""_s
			}))
		})
	});
}

JavaTimeSupplementary_de_AT::JavaTimeSupplementary_de_AT() {
}

$Class* JavaTimeSupplementary_de_AT::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_de_AT, name, initialize, &_JavaTimeSupplementary_de_AT_ClassInfo_, allocate$JavaTimeSupplementary_de_AT);
	return class$;
}

$Class* JavaTimeSupplementary_de_AT::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun