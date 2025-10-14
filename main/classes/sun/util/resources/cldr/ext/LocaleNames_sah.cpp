#include <sun/util/resources/cldr/ext/LocaleNames_sah.h>

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
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_sah_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sah::*)()>(&LocaleNames_sah::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sah_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sah",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sah_MethodInfo_
};

$Object* allocate$LocaleNames_sah($Class* clazz) {
	return $of($alloc(LocaleNames_sah));
}

void LocaleNames_sah::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sah::getContents() {
	$var($String, metaValue_el, u"\u0413\u0438\u0440\u0438\u044d\u043a\u0442\u0438\u0438"_s);
	$var($String, metaValue_hy, u"\u042d\u0440\u043c\u044d\u044d\u043d\u043d\u0438\u0438"_s);
	$var($String, metaValue_ja, u"\u0414\u044c\u043e\u043f\u043f\u0443\u043e\u043d\u043d\u0443\u0443"_s);
	$var($String, metaValue_ko, u"\u041a\u044d\u0440\u0438\u044d\u0439\u0434\u0438\u0438"_s);
	$var($String, metaValue_la, u"\u041b\u0430\u0442\u044b\u044b\u043d\u043d\u044b\u044b"_s);
	$var($String, metaValue_mn, u"\u041c\u043e\u0495\u0443\u043e\u043b\u043b\u0443\u0443"_s);
	$var($String, metaValue_ru, u"\u041d\u0443\u0443\u0447\u0447\u0430\u043b\u044b\u044b"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u041f\u043e\u0440\u0442\u0443\u0433\u0430\u0430\u043b\u043b\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u041f\u0438\u043b\u0438\u043f\u0438\u0438\u043d\u043d\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0411\u044d\u04a5\u0433\u0438\u044d\u0440\u0434\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u0425\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 \u0447\u0430\u0430\u0441\u0442\u0430\u0430\u0445 \u0442\u0438\u04bb\u0438\u043a (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 \u0447\u0430\u0430\u0441\u0442\u0430\u0430\u0445 \u0442\u0438\u04bb\u0438\u043a (0\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0418\u0440\u043b\u0430\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0410\u0431\u0445\u0430\u0430\u0441\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u041c\u044d\u043d \u0430\u0440\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0410\u043f\u043f\u044b\u0440\u044b\u043a\u0430\u0430\u043d\u044b\u0441\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u042b\u0442\u0430\u0430\u043b\u044b\u0439\u0430\u043b\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0410\u043c\u0445\u0430\u0430\u0440\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0410\u0440\u0430\u0430\u043f\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u041a\u044b\u0442\u0430\u0439\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0410\u0430\u043d \u0434\u043e\u0439\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0410\u0440\u0430\u0430\u0431\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0410\u0430\u043f\u044b\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0425\u043e\u0442\u0443\u0433\u0443 \u042d\u043c\u0438\u044d\u0440\u0438\u043a\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 \u0447\u0430\u0430\u0441\u0442\u0430\u0430\u0445 \u0442\u0438\u04bb\u0438\u043a (0\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u0421\u043e\u0495\u0443\u0440\u0443\u0443 \u042d\u043c\u0438\u044d\u0440\u0438\u043a\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u0410\u0432\u0430\u0430\u0440\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 \u0447\u0430\u0430\u0441\u0442\u0430\u0430\u0445 \u0442\u0438\u04bb\u0438\u043a (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0410\u0434\u044c\u044b\u0440\u0431\u0430\u0439\u0434\u044c\u0430\u0430\u043d\u043d\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0417\u0443\u0443\u043b\u0443\u043b\u0443\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u0418\u0441\u043b\u0430\u0430\u043c \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u0423\u043b\u0430\u0440\u044b\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0420\u0443\u043c\u044b\u044b\u043d\u043d\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(metaValue_ru)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u0414\u044c\u0430\u043c\u0430\u0430\u0439\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0410\u0440\u0430\u0441\u0441\u044b\u044b\u0439\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0411\u04e9\u043b\u04e9\u0440\u04af\u04af\u0441\u0442\u04af\u04af"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0411\u0443\u043b\u0495\u0430\u0430\u0440\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0411\u0435\u043d\u0433\u0430\u043b\u043b\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0422\u0438\u0431\u0438\u044d\u0442\u0442\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0421\u0443\u0434\u0430\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0411\u043e\u0441\u043d\u044b\u0439\u0430\u043b\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0428\u0432\u0435\u0446\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u041a\u0443\u0440\u0443\u0441\u0443\u0443\u043d\u043d\u0443\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u0411\u0443\u0443\u0434\u0434\u0430 \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0430\u0430\u043a\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u041a\u0430\u0442\u0430\u043b\u0430\u0430\u043d\u043d\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0410\u043b\u0431\u0430\u0430\u043d\u043d\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u0425\u0430\u04bb\u0430\u0430\u0445\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u0427\u044d\u0447\u0438\u044d\u043d\u043d\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0427\u0438\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u041a\u044b\u0442\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u0422\u0430\u043c\u044b\u043b\u043b\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u041a\u044b\u0440\u0433\u044b\u0441\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(metaValue_ru)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0427\u0438\u044d\u0445\u0442\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u0422\u04e9\u043b\u04af\u0433\u04af\u043b\u04af\u04af"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u041a\u0443\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u0422\u0430\u0434\u044c\u044b\u044b\u043a\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0414\u0430\u0430\u0442\u0441\u043a\u0430\u0439\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u0422\u0430\u0442\u0430\u0430\u0440\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u041d\u0438\u044d\u043c\u044d\u0441\u0442\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u0410\u0441\u0442\u0443\u0443\u0440\u0434\u0443\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u041b\u0438\u0442\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u041b\u0430\u0442\u0432\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u0411\u0438\u043b\u043b\u0438\u0431\u044d\u0442 \u0441\u0443\u0440\u0443\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u041b\u0438\u0438\u0431\u0438\u0439\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0423\u0439\u0433\u0443\u0443\u0440\u0434\u0443\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0439\u044b\u044b\u043d\u044c\u044b\u0441\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u041a\u044b\u0442\u0430\u0439 \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u0410\u043b\u0435\u0443\u0442\u0442\u0443\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u0422\u0430\u0430\u0439\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0410\u043c\u0435\u0440\u0438\u043a\u0430 \u0425\u043e\u043b\u0431\u043e\u04bb\u0443\u043a\u0442\u0430\u0430\u0445 \u0428\u0442\u0430\u0430\u0442\u0442\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u042d\u0441\u0442\u043e\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u04ae\u0437\u0431\u0438\u044d\u043a\u0442\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0430\u0439\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0410\u0430\u04a5\u044b\u043b\u043b\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u041c\u0438\u044d\u043a\u0441\u0438\u043a\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u0414\u044c\u043e\u043f\u043f\u0443\u043e\u043d \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u042b\u0441\u043f\u0430\u0430\u043d\u043d\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u042d\u0441\u0442\u0438\u044d\u043d\u0438\u0439\u044d\u043b\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u0414\u044c\u044d\u0431\u0438\u0440\u0438\u044d\u0439 \u0445\u0430\u043b\u0430\u043d\u0434\u0430\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u041d\u044c\u044b\u043f\u0430\u0430\u043b\u043b\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u041f\u0438\u044d\u0440\u0438\u0441\u0442\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u041d\u043e\u0440\u0432\u0435\u0433\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0424\u0438\u043d\u043b\u044f\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u041f\u0438\u0438\u043d\u043d\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u041d\u0430\u0433\u0430\u0430\u0439\u0434\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0411\u043e\u0440\u043e\u043d\u0441\u0443\u0443\u0441\u0442\u0443\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0423\u043b\u0443\u0443 \u0411\u0440\u0438\u0442\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u0441\u0430\u0445\u0430 \u0442\u044b\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u041f\u0430\u043d\u0434\u044c\u0430\u0430\u0431\u0442\u044b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0421\u0443\u0440\u0443\u043b\u043b\u0443\u0431\u0430\u0442\u0430\u0445"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u041a\u0438\u0438\u043d \u043a\u0443\u0443\u0440\u0434\u0443\u0443"_s)
		})
	}));
	return data;
}

LocaleNames_sah::LocaleNames_sah() {
}

$Class* LocaleNames_sah::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sah, name, initialize, &_LocaleNames_sah_ClassInfo_, allocate$LocaleNames_sah);
	return class$;
}

$Class* LocaleNames_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun