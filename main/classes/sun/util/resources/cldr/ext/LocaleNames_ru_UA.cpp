#include <sun/util/resources/cldr/ext/LocaleNames_ru_UA.h>

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

$MethodInfo _LocaleNames_ru_UA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ru_UA::*)()>(&LocaleNames_ru_UA::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ru_UA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ru_UA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ru_UA_MethodInfo_
};

$Object* allocate$LocaleNames_ru_UA($Class* clazz) {
	return $of($alloc(LocaleNames_ru_UA));
}

void LocaleNames_ru_UA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ru_UA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u041e-\u0432 \u0412\u043e\u0437\u043d\u0435\u0441\u0435\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u041e\u0431\u044a\u0435\u0434\u0438\u043d\u0435\u043d\u043d\u044b\u0435 \u0410\u0440\u0430\u0431\u0441\u043a\u0438\u0435 \u042d\u043c\u0438\u0440\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u041e-\u0432 \u0411\u0443\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u041e-\u0432\u0430 \u041a\u0443\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u041e-\u0432 \u041a\u043b\u0438\u043f\u043f\u0435\u0440\u0442\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u041e-\u0432 \u0420\u043e\u0436\u0434\u0435\u0441\u0442\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u041e-\u0432\u0430 \u0425\u0435\u0440\u0434 \u0438 \u041c\u0430\u043a\u0434\u043e\u043d\u0430\u043b\u044c\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u041e-\u0432 \u041d\u043e\u0440\u0444\u043e\u043b\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u0422\u0438\u043c\u043e\u0440-\u041b\u0435\u0441\u0442\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u041c\u0430\u043b\u044b\u0435 \u0422\u0438\u0445\u043e\u043e\u043a\u0435\u0430\u043d\u0441\u043a\u0438\u0435 \u041e\u0442\u0434\u0430\u043b\u0435\u043d\u043d\u044b\u0435 \u041e\u0441\u0442\u0440\u043e\u0432\u0430 \u0421\u0428\u0410"_s)
		})
	}));
	return data;
}

LocaleNames_ru_UA::LocaleNames_ru_UA() {
}

$Class* LocaleNames_ru_UA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ru_UA, name, initialize, &_LocaleNames_ru_UA_ClassInfo_, allocate$LocaleNames_ru_UA);
	return class$;
}

$Class* LocaleNames_ru_UA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun