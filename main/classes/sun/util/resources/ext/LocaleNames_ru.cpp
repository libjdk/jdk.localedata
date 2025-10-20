#include <sun/util/resources/ext/LocaleNames_ru.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ru::*)()>(&LocaleNames_ru::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ru_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ru",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ru_MethodInfo_
};

$Object* allocate$LocaleNames_ru($Class* clazz) {
	return $of($alloc(LocaleNames_ru));
}

void LocaleNames_ru::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ru::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0410\u043d\u0434\u043e\u0440\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u041e\u0431\u044a\u0435\u0434\u0438\u043d\u0435\u043d\u043d\u044b\u0435 \u0410\u0440\u0430\u0431\u0441\u043a\u0438\u0435 \u042d\u043c\u0438\u0440\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0410\u0444\u0433\u0430\u043d\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0410\u043d\u0433\u0443\u0438\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0410\u043b\u0431\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0410\u0440\u043c\u0435\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"\u041d\u0438\u0434\u0435\u0440\u043b\u0430\u043d\u0434\u0441\u043a\u0438\u0435 \u0410\u043d\u0442\u0438\u043b\u044c\u0441\u043a\u0438\u0435 \u043e\u0441\u0442\u0440\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0410\u043d\u0433\u043e\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0410\u0440\u0433\u0435\u043d\u0442\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0410\u0432\u0441\u0442\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0410\u0432\u0441\u0442\u0440\u0430\u043b\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0410\u0440\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0410\u0437\u0435\u0440\u0431\u0430\u0439\u0434\u0436\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0411\u043e\u0441\u043d\u0438\u044f \u0438 \u0413\u0435\u0440\u0446\u0435\u0433\u043e\u0432\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u0411\u0430\u0440\u0431\u0430\u0434\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u0411\u0430\u043d\u0433\u043b\u0430\u0434\u0435\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0411\u0435\u043b\u044c\u0433\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u0411\u0443\u0440\u043a\u0438\u043d\u0430-\u0424\u0430\u0441\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0411\u043e\u043b\u0433\u0430\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0411\u0430\u0445\u0440\u0435\u0439\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u0411\u0443\u0440\u0443\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u0411\u0435\u043d\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0411\u0435\u0440\u043c\u0443\u0434\u0441\u043a\u0438\u0435 \u043e\u0441\u0442\u0440\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0411\u0440\u0443\u043d\u0435\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0411\u043e\u043b\u0438\u0432\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0411\u0430\u0433\u0430\u043c\u0441\u043a\u0438\u0435 \u043e\u0441\u0442\u0440\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u0411\u0443\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0411\u043e\u0442\u0441\u0432\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0411\u0435\u043b\u0430\u0440\u0443\u0441\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0411\u0435\u043b\u0438\u0437"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0426\u0435\u043d\u0442\u0440\u0430\u043b\u044c\u043d\u043e\u0430\u0444\u0440\u0438\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0420\u0435\u0441\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u041a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0428\u0432\u0435\u0439\u0446\u0430\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u041a\u043e\u0442-\u0434\'\u0418\u0432\u0443\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0427\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u041a\u0430\u043c\u0435\u0440\u0443\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u041a\u0438\u0442\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u041a\u043e\u043b\u0443\u043c\u0431\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u041a\u043e\u0441\u0442\u0430-\u0420\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u041a\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u0417\u0435\u043b\u0435\u043d\u044b\u0439 \u041c\u044b\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u041a\u0438\u043f\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0427\u0435\u0445\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0413\u0435\u0440\u043c\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u0414\u0436\u0438\u0431\u0443\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0414\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430\u043d\u0441\u043a\u0430\u044f \u0420\u0435\u0441\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0410\u043b\u0436\u0438\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u042d\u043a\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u042d\u0441\u0442\u043e\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0415\u0433\u0438\u043f\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0417\u0430\u043f\u0430\u0434\u043d\u0430\u044f \u0421\u0430\u0445\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u042d\u0440\u0438\u0442\u0440\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0418\u0441\u043f\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u042d\u0444\u0438\u043e\u043f\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0424\u0438\u043d\u043b\u044f\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u0424\u0438\u0434\u0436\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u041c\u0438\u043a\u0440\u043e\u043d\u0435\u0437\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0413\u0430\u0431\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0421\u043e\u0435\u0434\u0438\u043d\u0435\u043d\u043d\u043e\u0435 \u041a\u043e\u0440\u043e\u043b\u0435\u0432\u0441\u0442\u0432\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0413\u0440\u0443\u0437\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f \u0413\u0432\u0438\u043d\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0413\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0413\u0430\u043c\u0431\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0413\u0432\u0438\u043d\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0413\u0432\u0430\u0434\u0435\u043b\u0443\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u042d\u043a\u0432\u0430\u0442\u043e\u0440\u0438\u0430\u043b\u044c\u043d\u0430\u044f \u0413\u0432\u0438\u043d\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0413\u0440\u0435\u0446\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0413\u0432\u0430\u0442\u0435\u043c\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0413\u0432\u0438\u043d\u0435\u044f-\u0411\u0438\u0441\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0413\u0430\u0439\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0413\u043e\u043d\u043a\u043e\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0413\u043e\u043d\u0434\u0443\u0440\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0425\u043e\u0440\u0432\u0430\u0442\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0413\u0430\u0438\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u0412\u0435\u043d\u0433\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0418\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0418\u0440\u043b\u0430\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0418\u0437\u0440\u0430\u0438\u043b\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0418\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0418\u0440\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0418\u0440\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0418\u0442\u0430\u043b\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u042f\u043c\u0430\u0439\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0418\u043e\u0440\u0434\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u042f\u043f\u043e\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u041a\u0435\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u041a\u0438\u0440\u0433\u0438\u0437\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u041a\u0430\u043c\u0431\u043e\u0434\u0436\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u041a\u0438\u0440\u0438\u0431\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u041a\u043e\u043c\u043e\u0440\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0421\u0435\u0432\u0435\u0440\u043d\u0430\u044f \u041a\u043e\u0440\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u042e\u0436\u043d\u0430\u044f \u041a\u043e\u0440\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u041a\u0443\u0432\u0435\u0439\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u041a\u0430\u0437\u0430\u0445\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u041b\u0430\u043e\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u041b\u0438\u0432\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u041b\u0438\u0445\u0442\u0435\u043d\u0448\u0442\u0435\u0439\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0428\u0440\u0438-\u041b\u0430\u043d\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u041b\u0438\u0431\u0435\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u041b\u0435\u0441\u043e\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u041b\u0438\u0442\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u041b\u044e\u043a\u0441\u0435\u043c\u0431\u0443\u0440\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u041b\u0430\u0442\u0432\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u041b\u0438\u0432\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u041c\u0430\u0440\u043e\u043a\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u041c\u043e\u043d\u0430\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u041c\u043e\u043b\u0434\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u041c\u0430\u0434\u0430\u0433\u0430\u0441\u043a\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u041c\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u041c\u044c\u044f\u043d\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u041c\u043e\u043d\u0433\u043e\u043b\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u041c\u0430\u0440\u0442\u0438\u043d\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u0442\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u041c\u043e\u043d\u0442\u0441\u0435\u0440\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u041c\u0430\u043b\u044c\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u041c\u0430\u0432\u0440\u0438\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u041c\u0435\u043a\u0441\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0439\u0437\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u041c\u043e\u0437\u0430\u043c\u0431\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u041d\u0430\u043c\u0438\u0431\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u041d\u043e\u0432\u0430\u044f \u041a\u0430\u043b\u0435\u0434\u043e\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u041d\u0438\u0433\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u041d\u0438\u0433\u0435\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u041d\u0438\u043a\u0430\u0440\u0430\u0433\u0443\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u041d\u0438\u0434\u0435\u0440\u043b\u0430\u043d\u0434\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u041d\u043e\u0440\u0432\u0435\u0433\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u041d\u0435\u043f\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u041d\u0438\u044e"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u041d\u043e\u0432\u0430\u044f \u0417\u0435\u043b\u0430\u043d\u0434\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u041e\u043c\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u041f\u0430\u043d\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u041f\u0435\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0430\u044f \u041f\u043e\u043b\u0438\u043d\u0435\u0437\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u041f\u0430\u043f\u0443\u0430 - \u041d\u043e\u0432\u0430\u044f \u0413\u0432\u0438\u043d\u0435\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u0424\u0438\u043b\u0438\u043f\u043f\u0438\u043d\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u041f\u0430\u043a\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u041f\u043e\u043b\u044c\u0448\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u041f\u0443\u044d\u0440\u0442\u043e-\u0420\u0438\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u041f\u043e\u0440\u0442\u0443\u0433\u0430\u043b\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u041f\u0430\u0440\u0430\u0433\u0432\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u041a\u0430\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0420\u0443\u043c\u044b\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0420\u043e\u0441\u0441\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u0420\u0443\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0421\u0430\u0443\u0434\u043e\u0432\u0441\u043a\u0430\u044f \u0410\u0440\u0430\u0432\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u0421\u0435\u0439\u0448\u0435\u043b\u044c\u0441\u043a\u0438\u0435 \u041e\u0441\u0442\u0440\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0421\u0443\u0434\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0428\u0432\u0435\u0446\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0421\u0438\u043d\u0433\u0430\u043f\u0443\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0435\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0430\u043a\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0421\u044c\u0435\u0440\u0440\u0430-\u041b\u0435\u043e\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0421\u0435\u043d\u0435\u0433\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0421\u043e\u043c\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("SP"_s),
			$of(u"\u0421\u0435\u0440\u0431\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0421\u0443\u0440\u0438\u043d\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0421\u0430\u043b\u044c\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0421\u0438\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0421\u0432\u0430\u0437\u0438\u043b\u0435\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u0427\u0430\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0444\u0440\u0430\u043d\u0446\u0443\u0437\u0441\u043a\u0438\u0435 \u044e\u0436\u043d\u044b\u0435 \u0442\u0435\u0440\u0440\u0438\u0442\u043e\u0440\u0438\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u0422\u043e\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u0422\u0430\u0438\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u0422\u0430\u0434\u0436\u0438\u043a\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u0422\u043e\u043a\u0435\u043b\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u0422\u0443\u0440\u043a\u043c\u0435\u043d\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u0422\u0443\u043d\u0438\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u0422\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TP"_s),
			$of(u"\u0412\u043e\u0441\u0442\u043e\u0447\u043d\u044b\u0439 \u0422\u0438\u043c\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u0422\u0443\u0440\u0446\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u0422\u0440\u0438\u043d\u0438\u0434\u0430\u0434 \u0438 \u0422\u043e\u0431\u0430\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u0422\u0430\u0439\u0432\u0430\u043d\u044c"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u0422\u0430\u043d\u0437\u0430\u043d\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0423\u0433\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0421\u043e\u0435\u0434\u0438\u043d\u0435\u043d\u043d\u044b\u0435 \u0428\u0442\u0430\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0423\u0437\u0431\u0435\u043a\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u0412\u0430\u0442\u0438\u043a\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0441\u0443\u044d\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0438\u0435 \u0412\u0438\u0440\u0433\u0438\u043d\u0441\u043a\u0438\u0435 \u043e\u0441\u0442\u0440\u043e\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0412\u0438\u0440\u0433\u0438\u043d\u0441\u043a\u0438\u0435 \u043e\u0441\u0442\u0440\u043e\u0432\u0430 \u0421\u043e\u0435\u0434\u0438\u043d\u0435\u043d\u043d\u044b\u0445 \u0428\u0442\u0430\u0442\u043e\u0432"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u0412\u044c\u0435\u0442\u043d\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u0412\u0430\u043d\u0443\u0430\u0442\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0419\u0435\u043c\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u041c\u0430\u0439\u043e\u0442\u0442\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u042e\u0436\u043d\u0430\u044f \u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0417\u0430\u043c\u0431\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("ZR"_s),
			$of(u"\u0417\u0430\u0438\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0417\u0438\u043c\u0431\u0430\u0431\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0430\u0444\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0430\u0431\u0445\u0430\u0437\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0430\u0444\u0440\u0438\u043a\u0430\u0430\u043d\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0430\u043c\u0445\u0430\u0440\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0430\u0440\u0430\u0431\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0430\u0441\u0441\u0430\u043c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u0430\u0439\u043c\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0430\u0437\u0435\u0440\u0431\u0430\u0439\u0434\u0436\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0431\u0430\u0448\u043a\u0438\u0440\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0431\u0435\u043b\u043e\u0440\u0443\u0441\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0431\u043e\u043b\u0433\u0430\u0440\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"\u0431\u0438\u0445\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u0431\u0438\u0441\u043b\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0431\u0435\u043d\u0433\u0430\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0442\u0438\u0431\u0435\u0442\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0431\u0440\u0435\u0442\u043e\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u043a\u0430\u0442\u0430\u043b\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u043a\u043e\u0440\u0441\u0438\u043a\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0447\u0435\u0448\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u0432\u0430\u043b\u043b\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0434\u0430\u0442\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u043d\u0435\u043c\u0435\u0446\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0431\u0443\u0442\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0433\u0440\u0435\u0447\u0435\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0430\u043d\u0433\u043b\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u044d\u0441\u043f\u0435\u0440\u0430\u043d\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0438\u0441\u043f\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u044d\u0441\u0442\u043e\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0431\u0430\u0441\u043a\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u043f\u0435\u0440\u0441\u0438\u0434\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0444\u0438\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0444\u0438\u0434\u0436\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0444\u0430\u0440\u0435\u0440\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0444\u0440\u0430\u043d\u0446\u0443\u0437\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u0444\u0440\u0438\u0437\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0438\u0440\u043b\u0430\u043d\u0434\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0433\u0430\u044d\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u0433\u0430\u043b\u0438\u0441\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0433\u0443\u0430\u0440\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u0433\u0443\u044f\u0440\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u0445\u0430\u0443\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0438\u0432\u0440\u0438\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0445\u0438\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0445\u043e\u0440\u0432\u0430\u0442\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0432\u0435\u043d\u0433\u0435\u0440\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0430\u0440\u043c\u044f\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u0438\u043d\u0442\u0435\u0440\u043b\u0438\u043d\u0433\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0438\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u0438\u043d\u0442\u0435\u0440\u043b\u0438\u043d\u0433\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u0438\u043d\u0443\u043f\u0438\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"\u0438\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0438\u0441\u043b\u0430\u043d\u0434\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0438\u0442\u0430\u043b\u044c\u044f\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0438\u043d\u0443\u043a\u0442\u0438\u0442\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"\u0434\u0440\u0435\u0432\u043d\u0435\u0435\u0432\u0440\u0435\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u044f\u043f\u043e\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"\u0438\u0434\u0438\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("jw"_s),
			$of(u"\u044f\u0432\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0438\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u043a\u0430\u0437\u0430\u0445\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u0433\u0440\u0435\u043d\u043b\u0430\u043d\u0434\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u043a\u0430\u043c\u0431\u043e\u0434\u0436\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u043a\u043e\u0440\u0435\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u043a\u0430\u0448\u043c\u0438\u0440\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u043a\u0443\u0440\u0434\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u043a\u0438\u0440\u0433\u0438\u0437\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u043b\u0430\u0442\u0438\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u043b\u0438\u043d\u0433\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u043b\u0430\u043e\u0441\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u043b\u0438\u0442\u043e\u0432\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u043b\u0430\u0442\u0432\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0433\u0430\u0441\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u043c\u0430\u043e\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u043c\u0430\u043a\u0435\u0434\u043e\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0439\u044f\u043b\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u043c\u043e\u043d\u0433\u043e\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"\u043c\u043e\u043b\u0434\u0430\u0432\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u043c\u0430\u0440\u0430\u0442\u0445\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u043c\u0430\u043b\u044c\u0442\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0431\u0438\u0440\u043c\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u043d\u0430\u0443\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u043d\u0435\u043f\u0430\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u043d\u0438\u0434\u0435\u0440\u043b\u0430\u043d\u0434\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u043d\u043e\u0440\u0432\u0435\u0436\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u043e\u0441\u0435\u0442\u0438\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u043e\u0440\u043e\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u043e\u0440\u0438\u044f"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u043f\u0435\u043d\u0434\u0436\u0430\u0431\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u043f\u043e\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u043f\u0430\u0448\u0442\u043e (\u043f\u0443\u0448\u0442\u043e)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u043f\u043e\u0440\u0442\u0443\u0433\u0430\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u043a\u0435\u0447\u0443\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0440\u0435\u0442\u043e\u0440\u043e\u043c\u0430\u043d\u0441\u043a\u0438\u0435 \u0434\u0438\u0430\u043b\u0435\u043a\u0442\u044b"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u043a\u0438\u0440\u0443\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0440\u0443\u043c\u044b\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0440\u0443\u0441\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u043a\u0438\u043d\u0438\u0430\u0440\u0432\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0441\u0430\u043d\u0441\u043a\u0440\u0438\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0441\u0438\u043d\u0445\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u0441\u0430\u043d\u0445\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0441\u0438\u043d\u0433\u0430\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0441\u043b\u043e\u0432\u0430\u0446\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0441\u043b\u043e\u0432\u0435\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u043f\u043e\u043b\u0438\u043d\u0435\u0437\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0448\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0441\u043e\u043c\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0430\u043b\u0431\u0430\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0441\u0435\u0440\u0431\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u0441\u0438\u0441\u0432\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u0441\u0435\u0441\u043e\u0437\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u0441\u0430\u043d\u0434\u0430\u043d\u0435\u0437\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0448\u0432\u0435\u0434\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0441\u0443\u0430\u0445\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u0442\u0430\u043c\u0438\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u0442\u0435\u043b\u0443\u0433\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u0442\u0430\u0434\u0436\u0438\u043a\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u0442\u0430\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u0442\u0438\u0433\u0440\u0438\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u0442\u0443\u0440\u043a\u043c\u0435\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u0442\u0430\u0433\u0430\u043b\u044c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u0441\u0435\u0442\u0441\u0432\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u0442\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u0442\u0443\u0440\u0435\u0446\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u0442\u0441\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u0442\u0430\u0442\u0430\u0440\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u0442\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0441\u0438\u043d\u0446\u0437\u044f\u043d-\u0423\u0439\u0433\u0443\u0440\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0443\u043a\u0440\u0430\u0438\u043d\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0443\u0440\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0443\u0437\u0431\u0435\u043a\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0432\u044c\u0435\u0442\u043d\u0430\u043c\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u0432\u043e\u043b\u044f\u043f\u044e\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u0432\u043e\u043b\u043e\u0444"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u0445\u043e\u0441\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0435\u0432\u0440\u0435\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u0439\u043e\u0440\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u0436\u0430\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u043a\u0438\u0442\u0430\u0439\u0441\u043a\u0438\u0439"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0437\u0443\u043b\u0443\u0441\u0441\u043a\u0438\u0439"_s)
		})
	});
}

LocaleNames_ru::LocaleNames_ru() {
}

$Class* LocaleNames_ru::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ru, name, initialize, &_LocaleNames_ru_ClassInfo_, allocate$LocaleNames_ru);
	return class$;
}

$Class* LocaleNames_ru::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun