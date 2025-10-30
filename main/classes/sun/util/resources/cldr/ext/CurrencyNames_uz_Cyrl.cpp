#include <sun/util/resources/cldr/ext/CurrencyNames_uz_Cyrl.h>

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

$MethodInfo _CurrencyNames_uz_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_uz_Cyrl::*)()>(&CurrencyNames_uz_Cyrl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_uz_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_uz_Cyrl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_uz_Cyrl_MethodInfo_
};

$Object* allocate$CurrencyNames_uz_Cyrl($Class* clazz) {
	return $of($alloc(CurrencyNames_uz_Cyrl));
}

void CurrencyNames_uz_Cyrl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_uz_Cyrl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"\u0e3f"_s)
		}),
		$$new($ObjectArray, {
			$of("UZS"_s),
			$of(u"\u0441\u045e\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0413\u043e\u043b\u043b\u0430\u043d\u0434 \u0410\u043d\u0442\u0438\u043b \u0433\u0443\u043b\u044c\u0434\u0435\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0410\u0440\u0433\u0435\u043d\u0442\u0438\u043d\u0430 \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0410\u0440\u0443\u0431\u0430 \u0444\u043b\u043e\u0440\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u0411\u0430\u0440\u0431\u0430\u0434\u043e\u0441 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u0411\u0435\u0440\u043c\u0443\u0434\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u0411\u043e\u043b\u0438\u0432\u0438\u044f \u0431\u043e\u043b\u0432\u0438\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b \u0440\u0435\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u0411\u0430\u0433\u0430\u043c\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u0411\u0435\u043b\u0438\u0437 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0434\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u0427\u0438\u043b\u0438 \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u0425\u0438\u0442\u043e\u0439 \u044e\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u041a\u043e\u043b\u0443\u043c\u0431\u0438\u044f \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u041a\u043e\u0441\u0442\u0430-\u0420\u0438\u043a\u0430 \u043a\u043e\u043b\u043e\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u041a\u0443\u0431\u0430 \u0410\u0439\u0438\u0440\u0431\u043e\u0448\u043b\u0430\u0448 \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u041a\u0443\u0431\u0430 \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430\u043d \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0416\u0430\u0437\u043e\u0438\u0440 \u0434\u0438\u043d\u043e\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u041c\u0438\u0441\u0440 \u0444\u0443\u043d\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u0415\u0432\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u0424\u043e\u043b\u044c\u043a\u043b\u0435\u043d\u0434 \u043e\u0440\u043e\u043b\u0438 \u0444\u0443\u043d\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0418\u043d\u0433\u043b\u0438\u0437 \u0444\u0443\u043d\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0413\u0432\u0430\u0442\u0435\u043c\u0430\u043b\u0430 \u043a\u0432\u0435\u0442\u0437\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0413\u0430\u044f\u043d\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0413\u043e\u043d\u0434\u0443\u0440\u0430\u0441 \u043b\u0435\u043c\u043f\u0438\u0440\u0430\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0413\u0430\u0438\u0442\u0438 \u0433\u0443\u0440\u0434\u0430\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u04b2\u0438\u043d\u0434 \u0440\u0443\u043f\u0438\u044f\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u042f\u043c\u0430\u0439\u043a\u0430 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u042f\u043f\u043e\u043d \u0439\u0435\u043d\u0430\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u041a\u0430\u0439\u043c\u0430\u043d \u043e\u0440\u043e\u043b\u0438 \u0414\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u041b\u0438\u0432\u0438\u044f \u0434\u0438\u043d\u043e\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u041c\u0430\u0440\u043e\u043a\u0430\u0448 \u0434\u0438\u0440\u04b3\u0430\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u041c\u0435\u043a\u0441\u0438\u043a\u0430 \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u041d\u0438\u043a\u0430\u0440\u0430\u0433\u0443\u0430 \u043a\u043e\u0440\u0434\u043e\u0431\u0430\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u041f\u0430\u043d\u0430\u043c\u0430 \u0431\u0430\u043b\u044c\u0431\u043e\u0430\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u041f\u0435\u0440\u0443 \u0441\u043e\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u041f\u0430\u0440\u0430\u0433\u0432\u0430\u0439 \u0433\u0443\u0430\u0440\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0420\u0443\u0441 \u0440\u0443\u0431\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0421\u0443\u0440\u0438\u043d\u0430\u043c \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0422\u0440\u0438\u043d\u0438\u0434\u0430\u0434 \u0432\u0430 \u0422\u043e\u0431\u0430\u0433\u043e \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0410\u049a\u0428 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0439 \u043f\u0435\u0441\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u040e\u0437\u0431\u0435\u043a\u0438\u0441\u0442\u043e\u043d \u0441\u045e\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0441\u0443\u044d\u043b\u0430 \u0431\u043e\u043b\u0438\u0432\u0430\u0440\u0438 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0441\u0443\u044d\u043b\u0430 \u0431\u043e\u043b\u0438\u0432\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0428\u0430\u0440\u049b\u0438\u0439 \u041a\u0430\u0440\u0438\u0431 \u0434\u043e\u043b\u043b\u0430\u0440\u0438"_s)
		})
	}));
	return data;
}

CurrencyNames_uz_Cyrl::CurrencyNames_uz_Cyrl() {
}

$Class* CurrencyNames_uz_Cyrl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_uz_Cyrl, name, initialize, &_CurrencyNames_uz_Cyrl_ClassInfo_, allocate$CurrencyNames_uz_Cyrl);
	return class$;
}

$Class* CurrencyNames_uz_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun