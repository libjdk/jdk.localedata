#include <sun/util/resources/cldr/ext/LocaleNames_be.h>

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

$MethodInfo _LocaleNames_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_be::*)()>(&LocaleNames_be::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_be_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_be",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_be_MethodInfo_
};

$Object* allocate$LocaleNames_be($Class* clazz) {
	return $of($alloc(LocaleNames_be));
}

void LocaleNames_be::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_be::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"\u0433\u0443\u0434\u0436\u0430\u0440\u0430\u0446\u0456"_s);
	$var($String, metaValue_kn, u"\u043a\u0430\u043d\u0430\u0434\u0430"_s);
	$var($String, metaValue_ml, u"\u043c\u0430\u043b\u0430\u044f\u043b\u0430\u043c"_s);
	$var($String, metaValue_or, u"\u043e\u0440\u044b\u044f"_s);
	$var($String, metaValue_te, u"\u0442\u044d\u043b\u0443\u0433\u0443"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u043a\u0451\u043b\u044c\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u043c\u0456\u0440\u0430\u043d\u0434\u044b\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u0441\u0456\u043c\u0432\u0430\u043b\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u044d\u043c\u043e\u0434\u0437\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u0447\u0430\u043a\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u0436\u044b\u0442\u043d\u0430\u0435\u0433\u0456\u043f\u0435\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u0440\u0430\u0434\u0436\u0430\u0441\u0442\u0445\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u0442\u044d\u043c\u043d\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u0442\u044d\u0441\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u0440\u0430\u043f\u0430\u043d\u0443\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u0423\u0437\u043d\u044f\u0441\u0435\u043d\u043d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u0440\u0430\u0440\u0430\u0442\u043e\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u0442\u044d\u0442\u0443\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0410\u043d\u0434\u043e\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0410\u0431\u2019\u044f\u0434\u043d\u0430\u043d\u044b\u044f \u0410\u0440\u0430\u0431\u0441\u043a\u0456\u044f \u042d\u043c\u0456\u0440\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u0444\u043b\u0430\u043c\u0430\u043d\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0410\u0444\u0433\u0430\u043d\u0456\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0410\u043d\u0442\u044b\u0433\u0443\u0430 \u0456 \u0411\u0430\u0440\u0431\u0443\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u044d\u0444\u0456\u043e\u043f\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0410\u043d\u0433\u0456\u043b\u044c\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0410\u043b\u0431\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0410\u0440\u043c\u0435\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0410\u043d\u0433\u043e\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0410\u043d\u0442\u0430\u0440\u043a\u0442\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0410\u0440\u0433\u0435\u043d\u0446\u0456\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u0410\u043c\u0435\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0430\u0435 \u0421\u0430\u043c\u043e\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0410\u045e\u0441\u0442\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0410\u045e\u0441\u0442\u0440\u0430\u043b\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0410\u0440\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0430\u043c\u0435\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0430\u043d\u0433\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u0410\u043b\u0430\u043d\u0434\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0410\u0437\u0435\u0440\u0431\u0430\u0439\u0434\u0436\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0411\u043e\u0441\u043d\u0456\u044f \u0456 \u0413\u0435\u0440\u0446\u0430\u0433\u0430\u0432\u0456\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u0411\u0430\u0440\u0431\u0430\u0434\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u0441\u0435\u0431\u0443\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u0411\u0430\u043d\u0433\u043b\u0430\u0434\u044d\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u043a\u0443\u043c\u044b\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0411\u0435\u043b\u044c\u0433\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u0411\u0443\u0440\u043a\u0456\u043d\u0430-\u0424\u0430\u0441\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0411\u0430\u043b\u0433\u0430\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0411\u0430\u0445\u0440\u044d\u0439\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u0411\u0443\u0440\u0443\u043d\u0434\u0437\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u0411\u0435\u043d\u0456\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u0421\u0435\u043d-\u0411\u0430\u0440\u0442\u044d\u043b\u044c\u043c\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0411\u0435\u0440\u043c\u0443\u0434\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u044d\u0440\u0437\u044f\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0411\u0440\u0443\u043d\u0435\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0411\u0430\u043b\u0456\u0432\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u041a\u0430\u0440\u044b\u0431\u0441\u043a\u0456\u044f \u041d\u0456\u0434\u044d\u0440\u043b\u0430\u043d\u0434\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0456\u043b\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0411\u0430\u0433\u0430\u043c\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u0441\u043e\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u0411\u0443\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u0411\u0443\u0432\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0411\u0430\u0442\u0441\u0432\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0411\u0435\u043b\u0430\u0440\u0443\u0441\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0411\u0435\u043b\u0456\u0437"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u043f\u0435\u0440\u0441\u0456\u0434\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u044f\u045e\u0440\u044d\u0439\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u041a\u0430\u043a\u043e\u0441\u0430\u0432\u044b\u044f (\u041a\u0456\u043b\u0456\u043d\u0433) \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u043c\u0430\u0437\u0430\u043d\u0434\u044d\u0440\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u041a\u043e\u043d\u0433\u0430 (\u041a\u0456\u043d\u0448\u0430\u0441\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0426\u044d\u043d\u0442\u0440\u0430\u043b\u044c\u043d\u0430-\u0410\u0444\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0420\u044d\u0441\u043f\u0443\u0431\u043b\u0456\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u041a\u043e\u043d\u0433\u0430 - \u0411\u0440\u0430\u0437\u0430\u0432\u0456\u043b\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0428\u0432\u0435\u0439\u0446\u0430\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u041a\u043e\u0442-\u0434\u2019\u0406\u0432\u0443\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u0410\u0441\u0442\u0440\u0430\u0432\u044b \u041a\u0443\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0427\u044b\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u041a\u0430\u043c\u0435\u0440\u0443\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u041a\u0456\u0442\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u041a\u0430\u043b\u0443\u043c\u0431\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u041a\u043b\u0456\u043f\u0435\u0440\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u041a\u043e\u0441\u0442\u0430-\u0420\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u041a\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u041a\u0430\u0431\u0430-\u0412\u0435\u0440\u0434\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u041a\u044e\u0440\u0430\u0441\u0430\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u041a\u0430\u043b\u044f\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u041a\u0456\u043f\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0427\u044d\u0445\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u044d\u043a\u0430\u0434\u0436\u0443\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0413\u0435\u0440\u043c\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u0430\u0447\u044d\u0445"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u0447\u044b\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u0414\u044b\u0435\u0433\u0430-\u0413\u0430\u0440\u0441\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b \u0434\u044d\u0432\u0430\u043d\u0430\u0433\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u0414\u0436\u044b\u0431\u0443\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0414\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u0448\u0440\u044b\u0444\u0442 \u0411\u0440\u0430\u0439\u043b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u0414\u0430\u043c\u0456\u043d\u0456\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u0430\u0440\u043c\u044f\u043d\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b \u045e \u043d\u0456\u0436\u043d\u0456\u043c \u0440\u044d\u0433\u0456\u0441\u0442\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0414\u0430\u043c\u0456\u043d\u0456\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0420\u044d\u0441\u043f\u0443\u0431\u043b\u0456\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u0433\u0430\u0440\u0430\u043d\u0442\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u0437\u0443\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u0442\u044b\u0433\u0440\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0410\u043b\u0436\u044b\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u043f\u0430\u043d\u0433\u0430\u0441\u0456\u043d\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0421\u0435\u0443\u0442\u0430 \u0456 \u041c\u0435\u043b\u0456\u043b\u044c\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u0447\u044b\u0431\u0447\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u043f\u0430\u043c\u043f\u0430\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u042d\u043a\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u043f\u0430\u043f\u2019\u044f\u043c\u0435\u043d\u0442\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u0430\u0434\u0430\u043d\u0433\u043c\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u042d\u0441\u0442\u043e\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0415\u0433\u0456\u043f\u0435\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0417\u0430\u0445\u043e\u0434\u043d\u044f\u044f \u0421\u0430\u0445\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u043f\u0430\u043b\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u0447\u0443\u0443\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u043c\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u0447\u043e\u043a\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u0447\u044d\u0440\u043e\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u042d\u0440\u044b\u0442\u0440\u044d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0406\u0441\u043f\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u042d\u0444\u0456\u043e\u043f\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u0415\u045e\u0440\u0430\u043f\u0435\u0439\u0441\u043a\u0456 \u0441\u0430\u044e\u0437"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0433\u0440\u044b\u0433\u0430\u0440\u044b\u044f\u043d\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u0415\u045e\u0440\u0430\u0437\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u0448\u044d\u0439\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b \u0433\u0443\u0434\u0436\u0430\u0440\u0430\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u0430\u0434\u044b\u0433\u0435\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0424\u0456\u043d\u043b\u044f\u043d\u0434\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u0424\u0456\u0434\u0436\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u0424\u0430\u043b\u043a\u043b\u0435\u043d\u0434\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u041c\u0456\u043a\u0440\u0430\u043d\u0435\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u0424\u0430\u0440\u044d\u0440\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u0442\u0430\u043c\u0456\u043b\u044c\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u0436\u044b\u0442\u043d\u0430\u0433\u0440\u044d\u0447\u0430\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0413\u0430\u0431\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0412\u044f\u043b\u0456\u043a\u0430\u0431\u0440\u044b\u0442\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u043d\u0456\u0433\u0435\u0440\u044b\u0439\u0441\u043a\u0456 \u043f\u0456\u0434\u0436\u044b\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u0413\u0440\u044d\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0413\u0440\u0443\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f \u0413\u0432\u0456\u044f\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u0413\u0435\u0440\u043d\u0441\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0413\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u0413\u0456\u0431\u0440\u0430\u043b\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u0413\u0440\u044d\u043d\u043b\u0430\u043d\u0434\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0413\u0430\u043c\u0431\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0413\u0432\u0456\u043d\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0413\u0432\u0430\u0434\u044d\u043b\u0443\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u042d\u043a\u0432\u0430\u0442\u0430\u0440\u044b\u044f\u043b\u044c\u043d\u0430\u044f \u0413\u0432\u0456\u043d\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0413\u0440\u044d\u0446\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u0413\u0435\u043e\u0440\u0433\u0456\u044f \u0456 \u041f\u0430\u045e\u0434\u043d\u0451\u0432\u044b\u044f \u0421\u0430\u043d\u0434\u0432\u0456\u0447\u0430\u0432\u044b \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0413\u0432\u0430\u0442\u044d\u043c\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u0413\u0443\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0413\u0432\u0456\u043d\u0435\u044f-\u0411\u0456\u0441\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u043a\u043b\u0456\u043d\u0433\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0413\u0430\u044f\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u0446\u044d\u043d\u0442\u0440\u0430\u043b\u044c\u043d\u0430\u043a\u0443\u0440\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u043d\u044f\u043c\u0430 \u043c\u043e\u045e\u043d\u0430\u0433\u0430 \u043c\u0430\u0442\u044d\u0440\u044b\u044f\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0430\u045e\u0441\u0442\u0440\u044b\u0439\u0441\u043a\u0430\u044f \u043d\u044f\u043c\u0435\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0413\u0430\u043d\u043a\u043e\u043d\u0433, \u0421\u0410\u0420 (\u041a\u0456\u0442\u0430\u0439)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u0410\u0441\u0442\u0440\u0430\u0432\u044b \u0425\u0435\u0440\u0434 \u0456 \u041c\u0430\u043a\u0434\u043e\u043d\u0430\u043b\u044c\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0413\u0430\u043d\u0434\u0443\u0440\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0425\u0430\u0440\u0432\u0430\u0442\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u0430\u0433\u0435\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0448\u0432\u0435\u0439\u0446\u0430\u0440\u0441\u043a\u0430\u044f \u043d\u044f\u043c\u0435\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0413\u0430\u0456\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u0412\u0435\u043d\u0433\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0440\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0406\u043d\u0434\u0430\u043d\u0435\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u043f\u0435\u0440\u0441\u0456\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0406\u0440\u043b\u0430\u043d\u0434\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u043d\u0435\u0430\u043f\u0430\u043b\u0456\u0442\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u043d\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u0437\u0430\u0437\u0430\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0406\u0437\u0440\u0430\u0456\u043b\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u041c\u044d\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0406\u043d\u0434\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u0411\u0440\u044b\u0442\u0430\u043d\u0441\u043a\u0430\u044f \u0442\u044d\u0440\u044b\u0442\u043e\u0440\u044b\u044f \u045e \u0406\u043d\u0434\u044b\u0439\u0441\u043a\u0456\u043c \u0430\u043a\u0456\u044f\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0406\u0440\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0406\u0440\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0406\u0441\u043b\u0430\u043d\u0434\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0406\u0442\u0430\u043b\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u043c\u0430\u0442\u044d\u043c\u0430\u0442\u044b\u0447\u043d\u044b\u044f \u0437\u043d\u0430\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u0442\u0430\u0439\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u0431\u0435\u043d\u0433\u0430\u043b\u044c\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u0414\u0436\u044d\u0440\u0441\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u043c\u0443\u0441\u0443\u043b\u044c\u043c\u0430\u043d\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u042f\u043c\u0430\u0439\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u0431\u0435\u043d\u0433\u0430\u043b\u044c\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0406\u0430\u0440\u0434\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u042f\u043f\u043e\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u0430\u0439\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u0433\u0443\u0441\u0456\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b \u043a\u0430\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0448\u0432\u0435\u0439\u0446\u0430\u0440\u0441\u043a\u0430\u044f \u043b\u0456\u0442\u0430\u0440\u0430\u0442\u0443\u0440\u043d\u0430\u044f \u043d\u044f\u043c\u0435\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u0431\u0443\u0434\u044b\u0439\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u041a\u0435\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u041b\u0430\u0446\u0456\u043d\u0441\u043a\u0430\u044f \u0410\u043c\u0435\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u041a\u044b\u0440\u0433\u044b\u0437\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u041a\u0430\u043c\u0431\u043e\u0434\u0436\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u041a\u0456\u0440\u044b\u0431\u0430\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u041a\u0430\u043c\u043e\u0440\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0421\u0435\u043d\u0442-\u041a\u0456\u0442\u0441 \u0456 \u041d\u0435\u0432\u0456\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u0441\u043a\u0430\u044f \u0444\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u041a\u0430\u0440\u044d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u041a\u0430\u0440\u044d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0448\u0432\u0435\u0439\u0446\u0430\u0440\u0441\u043a\u0430\u044f \u0444\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u041a\u0443\u0432\u0435\u0439\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u0442\u043e\u043a-\u043f\u0456\u0441\u0456\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u041a\u0430\u0439\u043c\u0430\u043d\u0430\u0432\u044b \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u041a\u0430\u0437\u0430\u0445\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u043a\u0456\u0440\u044b\u043b\u0456\u0446\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u041b\u0430\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u041b\u0456\u0432\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u0421\u0435\u043d\u0442-\u041b\u044e\u0441\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u0444\u0456\u043d\u0456\u043a\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u0433\u0443\u0456\u0447\u2019\u0456\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u043d\u0456\u0436\u043d\u0435\u043d\u044f\u043c\u0435\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u041b\u0456\u0445\u0442\u044d\u043d\u0448\u0442\u044d\u0439\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0428\u0440\u044b-\u041b\u0430\u043d\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u0430\u043a\u0430\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u043a\u043e\u043f\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u041b\u0456\u0431\u0435\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u041b\u0435\u0441\u043e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u041b\u0456\u0442\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u041b\u044e\u043a\u0441\u0435\u043c\u0431\u0443\u0440\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u041b\u0430\u0442\u0432\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u043a\u0430\u0442\u0430\u043a\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u041b\u0456\u0432\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u043b\u0430\u0434\u044b\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u0432\u0443\u043d\u0434\u0436\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u043b\u0430\u043d\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u0442\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u041c\u0430\u0440\u043e\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u041c\u0430\u043d\u0430\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u041c\u0430\u043b\u0434\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u0427\u0430\u0440\u043d\u0430\u0433\u043e\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u0421\u0435\u043d-\u041c\u0430\u0440\u0442\u044d\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u041c\u0430\u0434\u0430\u0433\u0430\u0441\u043a\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u041c\u0430\u0440\u0448\u0430\u043b\u0430\u0432\u044b \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u0430\u043b\u0435\u0443\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u0442\u0430\u0439\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u041c\u0430\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u041c\u2019\u044f\u043d\u043c\u0430 (\u0411\u0456\u0440\u043c\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u041c\u0430\u043d\u0433\u043e\u043b\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u043d\u0435\u045e\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u041c\u0430\u043a\u0430\u0430, \u0421\u0410\u0420 (\u041a\u0456\u0442\u0430\u0439)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u044b\u044f \u041c\u0430\u0440\u044b\u044f\u043d\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u041c\u0430\u0440\u0446\u0456\u043d\u0456\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u041c\u0430\u045e\u0440\u044b\u0442\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u041c\u0430\u043d\u0442\u0441\u0435\u0440\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u041c\u0430\u043b\u044c\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u041c\u0430\u045e\u0440\u044b\u043a\u0456\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u043f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u0430\u043b\u0442\u0430\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u041c\u0430\u043b\u044c\u0434\u044b\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0432\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u041c\u0435\u043a\u0441\u0456\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0439\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u041c\u0430\u0437\u0430\u043c\u0431\u0456\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u041d\u0430\u043c\u0456\u0431\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u0422\u0440\u0430\u043f\u0456\u0447\u043d\u0430\u044f \u0410\u0444\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u044f\u045e\u0440\u044d\u0439\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u041d\u043e\u0432\u0430\u044f \u041a\u0430\u043b\u0435\u0434\u043e\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u041d\u0456\u0433\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u041d\u043e\u0440\u0444\u0430\u043b\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u041d\u0456\u0433\u0435\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u0442\u0430\u0440\u043e\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u041d\u0456\u043a\u0430\u0440\u0430\u0433\u0443\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u041d\u0456\u0434\u044d\u0440\u043b\u0430\u043d\u0434\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u041d\u0430\u0440\u0432\u0435\u0433\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u041d\u0435\u043f\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u041d\u0430\u0443\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u041d\u0456\u0443\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u0440\u043e\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u041d\u043e\u0432\u0430\u044f \u0417\u0435\u043b\u0430\u043d\u0434\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u0430\u043d\u0433\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0410\u043c\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u0430\u043d\u0433\u0456\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u0441\u044d\u0441\u044d\u043b\u044c\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u041f\u0430\u043d\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u043c\u0443\u0441\u0443\u043b\u044c\u043c\u0430\u043d\u0441\u043a\u0456 \u0441\u0432\u0435\u0446\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0431\u0440\u044b\u0442\u0430\u043d\u0441\u043a\u0430\u044f \u0430\u043d\u0433\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u041f\u0435\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f \u041f\u0430\u043b\u0456\u043d\u0435\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u041f\u0430\u043f\u0443\u0430-\u041d\u043e\u0432\u0430\u044f \u0413\u0432\u0456\u043d\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u0424\u0456\u043b\u0456\u043f\u0456\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u041f\u0430\u043a\u0456\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u041f\u043e\u043b\u044c\u0448\u0447\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u044d\u0432\u043e\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u0421\u0435\u043d-\u041f\u2019\u0435\u0440 \u0456 \u041c\u0456\u043a\u0435\u043b\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u0410\u0441\u0442\u0440\u0430\u0432\u044b \u041f\u0456\u0442\u043a\u044d\u0440\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u041f\u0443\u044d\u0440\u0442\u0430-\u0420\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u041f\u0430\u043b\u0435\u0441\u0446\u0456\u043d\u0441\u043a\u0456\u044f \u0422\u044d\u0440\u044b\u0442\u043e\u0440\u044b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u041f\u0430\u0440\u0442\u0443\u0433\u0430\u043b\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u041f\u0430\u043b\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u043d\u0456\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u0433\u0440\u044d\u0447\u0430\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b \u045e \u043d\u0456\u0436\u043d\u0456\u043c \u0440\u044d\u0433\u0456\u0441\u0442\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u041f\u0430\u0440\u0430\u0433\u0432\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u0442\u0443\u043c\u0431\u0443\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u044f\u045e\u0440\u044d\u0439\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u041a\u0430\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u043d\u0456\u045e\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u0410\u0434\u0434\u0430\u043b\u0435\u043d\u044b\u044f \u0442\u044d\u0440\u044b\u0442\u043e\u0440\u044b\u0456 \u0410\u043a\u0456\u044f\u043d\u0456\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u043b\u0435\u0437\u0433\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u0442\u0443\u0432\u0430\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0421\u0432\u0435\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0410\u0444\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u0410\u043c\u0435\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0420\u044d\u044e\u043d\u044c\u0451\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u0410\u043c\u0435\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u043b\u043e\u0436\u0431\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u0410\u043a\u0456\u044f\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0420\u0443\u043c\u044b\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u0421\u0435\u0440\u0431\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0420\u0430\u0441\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u0420\u0443\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0421\u0430\u0443\u0434\u0430\u045e\u0441\u043a\u0430\u044f \u0410\u0440\u0430\u0432\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0421\u0430\u043b\u0430\u043c\u043e\u043d\u0430\u0432\u044b \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u0442\u0430\u0441\u0430\u045e\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u0417\u0430\u0445\u043e\u0434\u043d\u044f\u044f \u0410\u0444\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u0421\u0435\u0439\u0448\u044d\u043b\u044c\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0421\u0443\u0434\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u0426\u044d\u043d\u0442\u0440\u0430\u043b\u044c\u043d\u0430\u044f \u0410\u043c\u0435\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0428\u0432\u0435\u0446\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u0423\u0441\u0445\u043e\u0434\u043d\u044f\u044f \u0410\u0444\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u0430\u0440\u0430\u043c\u0435\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u0410\u0444\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0421\u0456\u043d\u0433\u0430\u043f\u0443\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0412\u043e\u0441\u0442\u0440\u0430\u045e \u0421\u0432\u044f\u0442\u043e\u0439 \u0410\u043b\u0435\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u0441\u0442\u0440\u043e\u0433\u0456\u044f \u043f\u0440\u0430\u0432\u0456\u043b\u044b \u0440\u0430\u0437\u0440\u044b\u0432\u0443 \u0440\u0430\u0434\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u0421\u044f\u0440\u044d\u0434\u043d\u044f\u044f \u0410\u0444\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0421\u043b\u0430\u0432\u0435\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u0410\u0444\u0440\u044b\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0428\u043f\u0456\u0446\u0431\u0435\u0440\u0433\u0435\u043d \u0456 \u042f\u043d-\u041c\u0430\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u0456 \u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u0410\u043c\u0435\u0440\u044b\u043a\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0421\u043b\u0430\u0432\u0430\u043a\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0421\u044c\u0435\u0440\u0430-\u041b\u0435\u043e\u043d\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u0421\u0430\u043d-\u041c\u0430\u0440\u044b\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0421\u0435\u043d\u0435\u0433\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0421\u0430\u043c\u0430\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u043c\u0430\u043f\u0443\u0434\u0443\u043d\u0433\u0443\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0430\u0440\u0430\u043f\u0430\u0445\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u0442\u0430\u043c\u0456\u043b\u044c\u0441\u043a\u0456\u044f \u0442\u0440\u0430\u0434\u044b\u0446\u044b\u0439\u043d\u044b\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0421\u0443\u0440\u044b\u043d\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u044b \u0421\u0443\u0434\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u0421\u0430\u043d-\u0422\u0430\u043c\u044d \u0456 \u041f\u0440\u044b\u043d\u0441\u0456\u043f\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0421\u0430\u043b\u044c\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u0421\u0456\u043d\u0442-\u041c\u0430\u0440\u0442\u044d\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0421\u0456\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u042d\u0441\u0432\u0430\u0442\u044b\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u0422\u0440\u044b\u0441\u0442\u0430\u043d-\u0434\u0430-\u041a\u0443\u043d\u044c\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u0430\u0441\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u0430\u043c\u0435\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0441\u0456\u0441\u0442\u044d\u043c\u0430 \u043c\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u0430\u043c\u0435\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0456 \u0440\u044d\u0433\u0456\u0451\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u0410\u0441\u0442\u0440\u0430\u0432\u044b \u0426\u0451\u0440\u043a\u0441 \u0456 \u041a\u0430\u0439\u043a\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u044f\u043d\u0433\u0431\u044d\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u0427\u0430\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0456\u044f \u043f\u0430\u045e\u0434\u043d\u0451\u0432\u044b\u044f \u0442\u044d\u0440\u044b\u0442\u043e\u0440\u044b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u0422\u043e\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u0422\u0430\u0439\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u0422\u0430\u0434\u0436\u044b\u043a\u0456\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u041a\u0430\u0440\u044b\u0431\u0441\u043a\u0456 \u0440\u044d\u0433\u0456\u0451\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u0422\u0430\u043a\u0435\u043b\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u0422\u044b\u043c\u043e\u0440-\u041b\u0435\u0448\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u0439\u0435\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u0422\u0443\u0440\u043a\u043c\u0435\u043d\u0456\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u0422\u0443\u043d\u0456\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u0422\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u0422\u0443\u0440\u0446\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u0422\u0440\u044b\u043d\u0456\u0434\u0430\u0434 \u0456 \u0422\u0430\u0431\u0430\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u0422\u0443\u0432\u0430\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u0422\u0430\u0439\u0432\u0430\u043d\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u0430\u0441\u0442\u0443\u0440\u044b\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u0422\u0430\u043d\u0437\u0430\u043d\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u043d\u0433\u0443\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u043d\u0435\u0432\u044f\u0434\u043e\u043c\u0430\u0435 \u043f\u0456\u0441\u044c\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0456\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u0430\u0440\u0443\u043c\u0443\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u0423\u0441\u0445\u043e\u0434\u043d\u044f\u044f \u0410\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u0442\u0443\u0432\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u043a\u0430\u043d\u0433\u0430\u043b\u0435\u0437\u0441\u043a\u0430\u044f \u0441\u0443\u0430\u0445\u0456\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u0410\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430-\u0423\u0441\u0445\u043e\u0434\u043d\u044f\u044f \u0410\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0423\u0433\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u0415\u045e\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u0441\u0456\u043d\u0433\u0430\u043b\u044c\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u041c\u0430\u043b\u044b\u044f \u0410\u0434\u0434\u0430\u043b\u0435\u043d\u044b\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b \u0417\u0428\u0410"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u0410\u0440\u0433\u0430\u043d\u0456\u0437\u0430\u0446\u044b\u044f \u0410\u0431\u2019\u044f\u0434\u043d\u0430\u043d\u044b\u0445 \u041d\u0430\u0446\u044b\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0417\u043b\u0443\u0447\u0430\u043d\u044b\u044f \u0428\u0442\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u0433\u0430\u0432\u0430\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u043f\u0440\u0443\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0423\u0437\u0431\u0435\u043a\u0456\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u0441\u044f\u0440\u044d\u0434\u043d\u0435\u0430\u0442\u043b\u0430\u0441\u043a\u0430\u044f \u0442\u0430\u043c\u0430\u0437\u0456\u0433\u0445\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u043d\u0433\u2019\u0435\u043c\u0431\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u0412\u0430\u0442\u044b\u043a\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u043f\u0440\u0430\u0432\u0430\u043d\u0441\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0421\u0435\u043d\u0442-\u0412\u0456\u043d\u0441\u0435\u043d\u0442 \u0456 \u0413\u0440\u044d\u043d\u0430\u0434\u0437\u0456\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0441\u0443\u044d\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0411\u0440\u044b\u0442\u0430\u043d\u0441\u043a\u0456\u044f \u0412\u0456\u0440\u0433\u0456\u043d\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0410\u043c\u0435\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0456\u044f \u0412\u0456\u0440\u0433\u0456\u043d\u0441\u043a\u0456\u044f \u0430\u0441\u0442\u0440\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u0412\u2019\u0435\u0442\u043d\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u0412\u0430\u043d\u0443\u0430\u0442\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u043d\u0430\u0433\u0430\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u0440\u0443\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u043d\u0430\u0440\u0432\u0435\u0436\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u0410\u045e\u0441\u0442\u0440\u0430\u043b\u0430\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u041c\u0435\u043b\u0430\u043d\u0435\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u0423\u043e\u043b\u0456\u0441 \u0456 \u0424\u0443\u0442\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u041c\u0456\u043a\u0440\u0430\u043d\u0435\u0437\u0456\u0439\u0441\u043a\u0456 \u0440\u044d\u0433\u0456\u0451\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u043d\u0433\u043e\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u043b\u0430\u043a\u043e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u0432\u0430\u043b\u044c\u0448\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u0421\u0430\u043c\u043e\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u0432\u043e\u043b\u0430\u0439\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u041f\u0441\u0435\u045e\u0434\u0430\u0430\u043a\u0446\u044d\u043d\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u0432\u0430\u0440\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u043f\u0441\u0435\u045e\u0434\u0430\u0434\u0432\u0443\u0445\u043d\u0430\u043f\u0440\u0430\u043c\u043a\u0430\u0432\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u0430\u0432\u0430\u0434\u0445\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u041f\u0430\u043b\u0456\u043d\u0435\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u041a\u043e\u0441\u0430\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0431\u0435\u0441\u043f\u0456\u0441\u044c\u043c\u0435\u043d\u043d\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u0432\u0430\u0440\u043b\u043f\u0456\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0415\u043c\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u043d\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043d\u044b \u043f\u0430\u0440\u0430\u0434\u0430\u043a \u0441\u0430\u0440\u0442\u0430\u0432\u0430\u043d\u043d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u041c\u0430\u0451\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u041f\u0430\u045e\u0434\u043d\u0451\u0432\u0430-\u0410\u0444\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0420\u044d\u0441\u043f\u0443\u0431\u043b\u0456\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u043d\u044f\u0441\u0442\u0440\u043e\u0433\u0456\u044f \u043f\u0440\u0430\u0432\u0456\u043b\u044b \u0440\u0430\u0437\u0440\u044b\u0432\u0443 \u0440\u0430\u0434\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u0434\u044d\u0432\u0430\u043d\u0430\u0433\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0456\u043d\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u0445\u0456\u0440\u0430\u0433\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0417\u0430\u043c\u0431\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0417\u0456\u043c\u0431\u0430\u0431\u0432\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u041d\u0435\u0432\u044f\u0434\u043e\u043c\u044b \u0440\u044d\u0433\u0456\u0451\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u043c\u0435\u0442\u0440\u044b\u0447\u043d\u0430\u044f \u0441\u0456\u0441\u0442\u044d\u043c\u0430 \u043c\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"\u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440 ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u043c\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u043f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u0441\u043e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b \u0442\u044d\u043b\u0443\u0433\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u043b\u043e\u0437\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u043c\u0430\u0447\u0430\u043c\u0431\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0456\u044f \u0441\u043f\u0440\u043e\u0448\u0447\u0430\u043d\u044b\u044f \u043b\u0456\u0447\u0431\u044b (\u0444\u0456\u043d\u0430\u043d\u0441\u044b)"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u0445\u0456\u043b\u0456\u0433\u0430\u0439\u043d\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u043f\u0430\u0448\u044b\u0440\u0430\u043d\u0430\u044f \u0441\u0456\u0441\u0442\u044d\u043c\u0430 \u0430\u0440\u0430\u0431\u0441\u043a\u0430-\u0456\u043d\u0434\u044b\u0439\u0441\u043a\u0456\u0445 \u043b\u0456\u0447\u0431\u0430\u045e"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u043d\u0443\u044d\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u0434\u0430\u043a\u043e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u043f\u043e\u045e\u043d\u0430\u0448\u044b\u0440\u044b\u043d\u043d\u044b\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u0434\u0430\u0440\u0433\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u0442\u0430\u0456\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u043f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u043b\u0443\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u0443\u0434\u043c\u0443\u0440\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u043a\u0445\u043c\u0435\u0440\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u0441\u0430\u043d\u0434\u0430\u045e\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u0440\u044b\u043c\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u044f\u043a\u0443\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u0441\u0430\u043c\u0431\u0443\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u0441\u0430\u043d\u0442\u0430\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u043d\u0433\u0430\u043c\u0431\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u0433\u0443\u0440\u043c\u0443\u043a\u0445\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u043b\u0443\u0431\u0430-\u043a\u0430\u0441\u0430\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u0441\u0430\u043d\u0433\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u043d\u044c\u044f\u043d\u043a\u043e\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u043b\u0443\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u043b\u0443\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u0444\u0456\u043b\u0456\u043f\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u0445\u043c\u043e\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u043c\u0456\u0437\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u0431\u0430\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u043b\u0443\u0439\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u0431\u0430\u0441\u0430\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0435\u045e\u0440\u0430\u043f\u0435\u0439\u0441\u043a\u0430\u044f \u0456\u0441\u043f\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0448\u0430\u0442\u043b\u0430\u043d\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u0441\u0456\u0446\u044b\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0430\u0444\u0430\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0430\u0431\u0445\u0430\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0430\u0444\u0440\u044b\u043a\u0430\u0430\u043d\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u0430\u043a\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0430\u043c\u0445\u0430\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u0430\u0440\u0430\u0433\u043e\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0430\u0440\u0430\u0431\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0430\u0440\u0430\u0431\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0456\u044f \u0441\u043a\u043b\u0430\u0434\u043e\u0432\u044b\u044f \u043f\u0456\u0441\u044c\u043c\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0430\u0441\u0430\u043c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u0430\u0432\u0430\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\u043f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u043a\u0443\u0440\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u0430\u0439\u043c\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0430\u0437\u0435\u0440\u0431\u0430\u0439\u0434\u0436\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0431\u0430\u0448\u043a\u0456\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0431\u0435\u043b\u0430\u0440\u0443\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0431\u0430\u043b\u0433\u0430\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u0431\u0456\u0441\u043b\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u0431\u0430\u043c\u0431\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0431\u0435\u043d\u0433\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0442\u044b\u0431\u0435\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u0434\u043e\u0433\u0440\u044b\u0431"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0431\u0440\u044d\u0442\u043e\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0431\u0430\u0441\u043d\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u0431\u0456\u0440\u043c\u0430\u043d\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u043b\u0430\u043e\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u0441\u0435\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u043a\u0430\u0442\u0430\u043b\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u043a\u0430\u0439\u0440\u0430\u0431\u043e\u0440\u0430 \u0441\u044d\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u0447\u0430\u0447\u044d\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u0447\u0430\u043c\u043e\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u043a\u0430\u0440\u0441\u0456\u043a\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0447\u044d\u0448\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u0446\u0430\u0440\u043a\u043e\u045e\u043d\u0430\u0441\u043b\u0430\u0432\u044f\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u0447\u0443\u0432\u0430\u0448\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u0432\u0430\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u044d\u0444\u0456\u043e\u043f\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0434\u0430\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u0435\u045e\u0440\u0430\u043f\u0435\u0439\u0441\u043a\u0430\u044f \u043f\u0430\u0440\u0442\u0443\u0433\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u043d\u044f\u043c\u0435\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043d\u044b \u0444\u0430\u0440\u043c\u0430\u0442 \u0432\u0430\u043b\u044e\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u0431\u0435\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u0456\u0440\u043b\u0430\u043d\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u043c\u0430\u043b\u044c\u0434\u044b\u045e\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u043b\u0430\u0446\u0456\u043d\u0430\u0430\u043c\u0435\u0440\u044b\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0456\u0441\u043f\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0434\u0437\u043e\u043d\u0433-\u043a\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u0431\u0435\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0456 \u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u0437\u0430\u0440\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u0433\u0440\u044d\u0447\u0430\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u044d\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u0437\u0432\u044b\u0447\u0430\u0439\u043d\u044b\u044f \u043f\u0440\u0430\u0432\u0456\u043b\u044b \u0440\u0430\u0437\u0440\u044b\u0432\u0443 \u0440\u0430\u0434\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u043c\u0430\u043b\u0434\u0430\u045e\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0433\u0440\u044d\u0447\u0430\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0430\u043d\u0433\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u044d\u0441\u043f\u0435\u0440\u0430\u043d\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0456\u0441\u043f\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u044d\u0441\u0442\u043e\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u0445\u0430\u043d \u0437 \u0431\u0430\u043f\u0430\u043c\u043e\u0444\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0431\u0430\u0441\u043a\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u0445\u0430\u043d\u0433\u044b\u043b\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u0442\u0430\u0448\u044d\u043b\u044c\u0445\u0456\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u0432\u0435\u0440\u0445\u043d\u044f\u043b\u0443\u0436\u044b\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u0445\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0448\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u0444\u0430\u0440\u0441\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u0441\u043f\u0440\u043e\u0448\u0447\u0430\u043d\u0430\u0435 \u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u0441\u0443\u0447\u0430\u0441\u043d\u044b\u044f \u0430\u0440\u0430\u0431\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0442\u0440\u0430\u0434\u044b\u0446\u044b\u0439\u043d\u0430\u0435 \u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u0444\u0443\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0444\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0444\u0456\u0434\u0436\u044b\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u0444\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0437\u0430\u0445\u043e\u0434\u043d\u044f\u044f \u0431\u0435\u043b\u0443\u0434\u0436\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u043a\u0430\u043d\u0442\u043e\u043d\u0441\u043a\u0456 \u0434\u044b\u044f\u043b\u0435\u043a\u0442 \u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0444\u0430\u0440\u044d\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u0443\u043c\u0431\u0443\u043d\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0444\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u0437\u0430\u0445\u043e\u0434\u043d\u044f\u044f \u0444\u0440\u044b\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0456\u0440\u043b\u0430\u043d\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0448\u0430\u0442\u043b\u0430\u043d\u0434\u0441\u043a\u0430\u044f \u0433\u044d\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u0433\u0430\u043b\u0456\u0441\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0433\u0443\u0430\u0440\u0430\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u0431\u0445\u0430\u0434\u0436\u043f\u0443\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u043d\u0435\u0432\u044f\u0434\u043e\u043c\u0430\u044f \u043c\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u043c\u044d\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u0445\u0430\u0443\u0441\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0456\u045e\u0440\u044b\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0445\u0456\u043d\u0434\u0437\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u0445\u0443\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u044d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0445\u0430\u0440\u0432\u0430\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u0433\u0430\u0456\u0446\u044f\u043d\u0441\u043a\u0430\u044f \u043a\u0440\u044d\u043e\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0432\u0435\u043d\u0433\u0435\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0430\u0440\u043c\u044f\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u0433\u0435\u0440\u044d\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u0456\u043d\u0442\u044d\u0440\u043b\u0456\u043d\u0433\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u0447\u0430\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0456\u043d\u0434\u0430\u043d\u0435\u0437\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u0442\u044b\u0431\u0435\u0446\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u0456\u043d\u0442\u044d\u0440\u043b\u0456\u043d\u0433\u0432\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u0456\u0433\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u0441\u044b\u0447\u0443\u0430\u043d\u044c\u0441\u043a\u0430\u044f \u0439\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u0444\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u0456\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0456\u0441\u043b\u0430\u043d\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0456\u0442\u0430\u043b\u044c\u044f\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0456\u043d\u0443\u043a\u0442\u044b\u0442\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u043f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u0441\u0430\u0430\u043c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u044f\u0432\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u043c\u0430\u0434\u0443\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u043b\u0443\u043b\u0435-\u0441\u0430\u0430\u043c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u043c\u0430\u0433\u0430\u0445\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u043c\u0430\u0439\u0442\u0445\u0456\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u0456\u043d\u0430\u0440\u044b-\u0441\u0430\u0430\u043c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u0431\u043b\u044d\u043a\u0444\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u043c\u0430\u043a\u0430\u0441\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u043a\u043e\u043b\u0442\u0430-\u0441\u0430\u0430\u043c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u043c\u0430\u043d\u0434\u044b\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u043a\u0456\u043a\u0443\u0439\u044e"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u043c\u0430\u0430\u0441\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u043a\u0443\u0430\u043d\u044c\u044f\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u043a\u0430\u0437\u0430\u0445\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u0433\u0440\u044d\u043d\u043b\u0430\u043d\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u043a\u0445\u043c\u0435\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u043a\u0430\u0440\u044d\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u043a\u0430\u043d\u0443\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u043a\u0430\u0448\u043c\u0456\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u043a\u0443\u0440\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u043a\u043e\u043c\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u043a\u043e\u0440\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u043a\u0456\u0440\u0433\u0456\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u0441\u0430\u043d\u0456\u043d\u043a\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u043b\u0430\u0446\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u043b\u044e\u043a\u0441\u0435\u043c\u0431\u0443\u0440\u0433\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b \u043c\u0430\u043b\u0430\u044f\u043b\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u0433\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u043b\u0456\u043c\u0431\u0443\u0440\u0433\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u0442\u044b\u0431\u0435\u0446\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u043b\u0456\u043d\u0433\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u0444\u0440\u044b\u0443\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u043b\u0430\u043e\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u0431\u0440\u044b\u0442\u0430\u043d\u0441\u043a\u0430\u044f \u0441\u0456\u0441\u0442\u044d\u043c\u0430 \u043c\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u043b\u0456\u0442\u043e\u045e\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u043b\u0443\u0431\u0430-\u043a\u0430\u0442\u0430\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u043b\u0430\u0442\u044b\u0448\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0433\u0430\u0441\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u043c\u0430\u0440\u0448\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043d\u044b \u043f\u0430\u0440\u0430\u0434\u0430\u043a \u0441\u0430\u0440\u0442\u0430\u0432\u0430\u043d\u043d\u044f \u0423\u043d\u0456\u043a\u043e\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u043c\u0430\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u043c\u0430\u043a\u0435\u0434\u043e\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u043c\u0430\u043d\u0433\u043e\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u043c\u0430\u0440\u0430\u0442\u0445\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u043c\u0430\u043b\u044c\u0442\u044b\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0431\u0456\u0440\u043c\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u0430\u0440\u043c\u044f\u043d\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u043c\u0430\u043a\u0448\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u043d\u0456\u0436\u043d\u044f\u043b\u0443\u0436\u044b\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u043d\u0430\u0443\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u0443\u043d\u0456\u0432\u0435\u0440\u0441\u0430\u043b\u044c\u043d\u044b \u043f\u043e\u0448\u0443\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u043d\u0430\u0440\u0432\u0435\u0436\u0441\u043a\u0430\u044f (\u0431\u0443\u043a\u043c\u043e\u043b)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u043f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u043d\u0434\u044d\u0431\u0435\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u043d\u0435\u043f\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u043d\u0434\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u043d\u0456\u0434\u044d\u0440\u043b\u0430\u043d\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u043d\u0430\u0440\u0432\u0435\u0436\u0441\u043a\u0430\u044f (\u043d\u044e\u043d\u043e\u0448\u043a)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u043d\u0430\u0440\u0432\u0435\u0436\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u043f\u0430\u045e\u0434\u043d\u0451\u0432\u0430\u044f \u043d\u0434\u044d\u0431\u0435\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u043d\u0430\u0432\u0430\u0445\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u043d\u044c\u044f\u043d\u0434\u0436\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u043a\u0430\u0447\u044b\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u043a\u0430\u0431\u0456\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u0430\u043a\u0441\u0456\u0442\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u0434\u0434\u0436\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u043a\u0430\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u043c\u0435\u043d\u0434\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u0430\u0434\u0436\u044b\u0431\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u043c\u0435\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u0430\u0440\u043c\u044f\u043d\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u0430\u0440\u043e\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u0430\u0441\u0435\u0446\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u043a\u0430\u0431\u0430\u0440\u0434\u0437\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u043c\u0430\u0440\u044b\u0441\u044c\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u0441\u0440\u0430\u043d\u0430\u043d-\u0442\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u043f\u0430\u043d\u0434\u0436\u0430\u0431\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u0434\u0443\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u043f\u043e\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440 \u0434\u0430\u043d\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u043f\u0443\u0448\u0442\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u043f\u0430\u0440\u0442\u0443\u0433\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u043f\u0430\u0440\u0430\u0434\u0430\u043a \u0441\u0430\u0440\u0442\u0430\u0432\u0430\u043d\u043d\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u0431\u0440\u0430\u0437\u0456\u043b\u044c\u0441\u043a\u0430\u044f \u043f\u0430\u0440\u0442\u0443\u0433\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u0442\u2019\u044f\u043f"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u043c\u0430\u043a\u0443\u045e\u0430-\u043c\u0435\u0435\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u0444\u0430\u0440\u043c\u0430\u0442 \u0432\u0430\u043b\u044e\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u043b\u0430\u043e\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u043c\u0435\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-\u0433\u0430\u0434\u0437\u0456\u043d\u043d\u044b \u0444\u0430\u0440\u043c\u0430\u0442 \u0447\u0430\u0441\u0443 (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-\u0433\u0430\u0434\u0437\u0456\u043d\u043d\u044b \u0444\u0430\u0440\u043c\u0430\u0442 \u0447\u0430\u0441\u0443 (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\u0441\u0430\u0445\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u0431\u0456\u0440\u043c\u0430\u043d\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u043a\u0435\u0447\u0443\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u0441\u0430\u043f\u0430\u0442\u044d\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u0431\u043e\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u043c\u0430\u043a\u043e\u043d\u0434\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u044d\u0444\u0456\u043e\u043f\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-\u0433\u0430\u0434\u0437\u0456\u043d\u043d\u044b \u0444\u0430\u0440\u043c\u0430\u0442 \u0447\u0430\u0441\u0443 (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-\u0433\u0430\u0434\u0437\u0456\u043d\u043d\u044b \u0444\u0430\u0440\u043c\u0430\u0442 \u0447\u0430\u0441\u0443 (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0440\u044d\u0442\u0430\u0440\u0430\u043c\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u0440\u0443\u043d\u0434\u0437\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u0432\u0430\u043b\u044e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0440\u0443\u043c\u044b\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b \u043e\u0440\u044b\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0456\u044f \u0434\u0437\u0435\u0441\u044f\u0442\u043a\u043e\u0432\u044b\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0440\u0443\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u0440\u0443\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u043a\u0430\u0431\u0443\u0432\u0435\u0440\u0434\u044b\u044f\u043d\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u043c\u0456\u043a\u043c\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u0441\u0443\u043a\u0443\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0430\u045e\u0441\u0442\u0440\u0430\u043b\u0456\u0439\u0441\u043a\u0430\u044f \u0430\u043d\u0433\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0441\u0430\u043d\u0441\u043a\u0440\u044b\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u0441\u0430\u0440\u0434\u0437\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0441\u0456\u043d\u0434\u0445\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u043f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u0441\u0430\u0430\u043c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u043c\u0456\u043d\u0430\u043d\u0433\u043a\u0430\u0431\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u0441\u0430\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u0441\u0435\u0440\u0431\u0441\u043a\u0430\u0445\u0430\u0440\u0432\u0430\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0441\u0456\u043d\u0433\u0430\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u0448\u0443\u043c\u0435\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0441\u043b\u0430\u0432\u0430\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0441\u043b\u0430\u0432\u0435\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u0441\u0430\u043c\u043e\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0448\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0441\u0430\u043c\u0430\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0430\u0440\u0430\u0431\u0441\u043a\u0430-\u0456\u043d\u0434\u044b\u0439\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0430\u043b\u0431\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0441\u0435\u0440\u0431\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u0441\u0443\u0430\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u0431\u0443\u0445\u0433\u0430\u043b\u0442\u0430\u0440\u0441\u043a\u0456 \u0444\u0430\u0440\u043c\u0430\u0442 \u0432\u0430\u043b\u044e\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u0441\u0435\u0441\u0443\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u0441\u0443\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0448\u0432\u0435\u0434\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0441\u0443\u0430\u0445\u0456\u043b\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0456\u044f \u0442\u0440\u0430\u0434\u044b\u0446\u044b\u0439\u043d\u044b\u044f \u043b\u0456\u0447\u0431\u044b (\u0444\u0456\u043d\u0430\u043d\u0441\u044b)"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u0456\u0431\u0456\u0431\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u0456\u0431\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u0442\u0430\u043c\u0456\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0410\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u0431\u0443\u0440\u0430\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u0426\u044d\u043d\u0442\u0440\u0430\u043b\u044c\u043d\u0430\u044f \u0410\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u0417\u0430\u0445\u043e\u0434\u043d\u044f\u044f \u0410\u0437\u0456\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u0442\u0430\u0434\u0436\u044b\u043a\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u0442\u0430\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u0442\u044b\u0433\u0440\u044b\u043d\u044c\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u0431\u0443\u0433\u0456\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u043a\u043e\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u0441\u043a\u0430\u044f \u0430\u043d\u0433\u043b\u0456\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u0442\u0443\u0440\u043a\u043c\u0435\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u0442\u0441\u0432\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u0442\u0430\u043d\u0433\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u0434\u0436\u043e\u043b\u0430-\u0444\u043e\u043d\u044c\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u0442\u0443\u0440\u044d\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u0442\u0441\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u043a\u0430\u043c\u043e\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u0442\u0430\u0442\u0430\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u0442\u0430\u0456\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u0415\u045e\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u0423\u0441\u0445\u043e\u0434\u043d\u044f\u044f \u0415\u045e\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u041f\u0430\u045e\u043d\u043e\u0447\u043d\u0430\u044f \u0415\u045e\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u0434\u0430\u0437\u0430\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u0417\u0430\u0445\u043e\u0434\u043d\u044f\u044f \u0415\u045e\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0443\u0439\u0433\u0443\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\u043a\u0430\u0440\u044d\u0439\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u0430\u0433\u0443\u043b\u044c\u043d\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0443\u043a\u0440\u0430\u0456\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0443\u0440\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u043a\u0430\u043b\u043c\u044b\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0443\u0437\u0431\u0435\u043a\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u043a\u0445\u0430\u0441\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u043d\u0456\u0436\u043d\u0435\u0441\u0430\u043a\u0441\u043e\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u0432\u0435\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u043a\u0430\u043b\u044f\u043d\u0434\u0430\u0440 \u041c\u0456\u043d\u044c\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0432\u2019\u0435\u0442\u043d\u0430\u043c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u043a\u043e\u0439\u0440\u0430 \u0447\u044b\u0456\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u0433\u0430\u0434\u0437\u0456\u043d\u043d\u044b \u0446\u044b\u043a\u043b (12 \u0430\u0431\u043e 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u0432\u0430\u043b\u0430\u043f\u044e\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u043a\u0456\u0447\u044d"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u0432\u0430\u043b\u043e\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u0433\u0430\u0433\u0430\u0443\u0437\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u0441\u0456\u0440\u044b\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u0433\u0440\u044d\u0447\u0430\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u0432\u0430\u043b\u043e\u0444"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043d\u0430\u044f \u043c\u0430\u0440\u0430\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0442\u0430\u043c\u0430\u0437\u0456\u0445\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0441\u0443\u0447\u0430\u0441\u043d\u0430\u044f \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0442\u043d\u0430\u044f \u0430\u0440\u0430\u0431\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0430\u043c\u0430\u043d\u0433\u043e\u043b\u044c\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u043c\u0435\u0439\u0442\u044d\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u043b\u0430\u0446\u0456\u043d\u0456\u0446\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0456\u044f \u0441\u043f\u0440\u043e\u0448\u0447\u0430\u043d\u044b\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0456\u044f \u0442\u0440\u0430\u0434\u044b\u0446\u044b\u0439\u043d\u044b\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u043a\u043e\u0441\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u0440\u044b\u043c\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b \u045e \u043d\u0456\u0436\u043d\u0456\u043c \u0440\u044d\u0433\u0456\u0441\u0442\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0431\u0456\u043b\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u043c\u043e\u0445\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u043a\u0430\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0456\u0434\u044b\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u043c\u043e\u0441\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u0451\u0440\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u043c\u0435\u043a\u0441\u0456\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0456\u0441\u043f\u0430\u043d\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u0432\u0430\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u043a\u0430\u043b\u0435\u043d\u0434\u0436\u044b\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u0431\u0430\u043f\u0430\u043c\u043e\u0444\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u043f\u0440\u0430\u0432\u0456\u043b\u044b \u0440\u0430\u0437\u0440\u044b\u0432\u0443 \u0440\u0430\u0434\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0437\u0443\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0456\u043d\u0441\u043a\u0430\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u043a\u0456\u043c\u0431\u0443\u043d\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b (\u0444\u0456\u043d\u0430\u043d\u0441\u044b)"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u0433\u0435\u044d\u0437"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u044d\u043c\u0431\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0430\u044f (\u0441\u043f\u0440\u043e\u0448\u0447\u0430\u043d\u044b\u044f \u0456\u0435\u0440\u043e\u0433\u043b\u0456\u0444\u044b)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u043a\u043e\u043c\u0456-\u043f\u044f\u0440\u043c\u044f\u0446\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u043a\u0430\u043d\u043a\u0430\u043d\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u043a\u0456\u0442\u0430\u0439\u0441\u043a\u0430\u044f (\u0442\u0440\u0430\u0434\u044b\u0446\u044b\u0439\u043d\u044b\u044f \u0456\u0435\u0440\u043e\u0433\u043b\u0456\u0444\u044b)"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u043a\u043f\u0435\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u043a\u0445\u043c\u0435\u0440\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u0456\u043b\u0430\u043a\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u043c\u0443\u043d\u0434\u0430\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b \u0433\u0443\u0440\u043c\u0443\u043a\u0445\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u043d\u0435\u043a\u0430\u043b\u044c\u043a\u0456 \u043c\u043e\u045e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u0441\u0456\u0441\u0442\u044d\u043c\u0430 \u043c\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u043c\u0443\u0441\u043a\u043e\u0433\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u043a\u0456\u0440\u044b\u0431\u0430\u0446\u0456"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u0442\u0430\u043c\u0456\u043b\u044c\u0441\u043a\u0456\u044f \u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u043a\u0430\u0440\u0430\u0447\u0430\u0439-\u0431\u0430\u043b\u043a\u0430\u0440\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u0456\u043d\u0433\u0443\u0448\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u0434\u0430\u0440\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u043a\u0430\u0440\u044d\u043b\u044c\u0441\u043a\u0430\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u044d\u0444\u0456\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u043b\u0456\u0447\u0431\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u043a\u0443\u0440\u0443\u0445"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0448\u0430\u043c\u0431\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u0431\u0430\u0444\u0456\u044f"_s)
		})
	}));
	return data;
}

LocaleNames_be::LocaleNames_be() {
}

$Class* LocaleNames_be::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_be, name, initialize, &_LocaleNames_be_ClassInfo_, allocate$LocaleNames_be);
	return class$;
}

$Class* LocaleNames_be::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun