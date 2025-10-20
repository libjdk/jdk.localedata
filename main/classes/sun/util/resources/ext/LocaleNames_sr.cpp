#include <sun/util/resources/ext/LocaleNames_sr.h>

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

$MethodInfo _LocaleNames_sr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_sr::*)()>(&LocaleNames_sr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_sr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_sr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_MethodInfo_
};

$Object* allocate$LocaleNames_sr($Class* clazz) {
	return $of($alloc(LocaleNames_sr));
}

void LocaleNames_sr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_sr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0410\u043d\u0434\u043e\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0423\u0458\u0435\u0434\u0438\u045a\u0435\u043d\u0438 \u0410\u0440\u0430\u043f\u0441\u043a\u0438 \u0415\u043c\u0438\u0440\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0410\u0432\u0433\u0430\u043d\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0410\u043b\u0431\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0410\u0440\u043c\u0435\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"\u0425\u043e\u043b\u0430\u043d\u0434\u0441\u043a\u0438 \u0410\u043d\u0442\u0438\u043b\u0438"_s)
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
			$of(u"\u0410\u0443\u0441\u0442\u0440\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0410\u0443\u0441\u0442\u0440\u0430\u043b\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0410\u0440\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u0410\u043b\u0430\u043d\u0434\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0410\u0437\u0435\u0440\u0431\u0435\u0458\u045f\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0411\u043e\u0441\u043d\u0430 \u0438 \u0425\u0435\u0440\u0446\u0435\u0433\u043e\u0432\u0438\u043d\u0430"_s)
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
			$of(u"\u0411\u0435\u043b\u0433\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u0411\u0443\u0440\u043a\u0438\u043d\u0430 \u0424\u0430\u0441\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0411\u0443\u0433\u0430\u0440\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0411\u0430\u0445\u0440\u0435\u0438\u043d"_s)
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
			$of(u"\u0411\u0435\u0440\u043c\u0443\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0411\u0440\u0443\u043d\u0435\u0458"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0411\u043e\u043b\u0438\u0432\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0411\u0440\u0430\u0455\u0438\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0411\u0430\u0445\u0430\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u0411\u0443\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u0411\u0443\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0411\u043e\u0446\u0432\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0411\u0435\u043b\u043e\u0440\u0443\u0441\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0411\u0435\u043b\u0438\u0441\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u041a\u043e\u043a\u043e\u0441\u043e\u0432\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u0414\u0435\u043c\u043e\u043a\u0440\u0430\u0442\u0441\u043a\u0430 \u0440\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430 \u041a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0426\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u043e \u0410\u0444\u0440\u0438\u0447\u043a\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u041a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0428\u0432\u0430\u0458\u0446\u0430\u0440\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u041e\u0431\u0430\u043b\u0430 \u0421\u043b\u043e\u043d\u043e\u0432\u0430\u0447\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0427\u0438\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u041a\u0430\u043c\u0435\u0440\u0443\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u041a\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u041a\u043e\u043b\u0443\u043c\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u041a\u043e\u0441\u0442\u0430\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"\u0421\u0440\u0431\u0438\u0458\u0430 \u0438 \u0426\u0440\u043d\u0430 \u0413\u043e\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u041a\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u041a\u0430\u043f\u0435 \u0412\u0435\u0440\u0434\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0411\u043e\u0436\u0438\u045b\u043d\u043e \u041e\u0441\u0442\u0440\u0432\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u041a\u0438\u043f\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0427\u0435\u0448\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u041d\u0435\u043c\u0430\u0447\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u040f\u0438\u0431\u0443\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0414\u0430\u043d\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430\u043d\u0441\u043a\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0410\u043b\u0436\u0438\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0415\u043a\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0415\u0441\u0442\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0415\u0433\u0438\u043f\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0417\u0430\u043f\u0430\u0434\u043d\u0430 \u0421\u0430\u0445\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0415\u0440\u0438\u0442\u0440\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0428\u043f\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0415\u0442\u0438\u043e\u043f\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0424\u0438\u043d\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u0424\u0438\u045f\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u0424\u043e\u043b\u043a\u043b\u0430\u043d\u0434\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u041c\u0438\u043a\u0440\u043e\u043d\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u0424\u0430\u0440\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0413\u0430\u0431\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0412\u0435\u043b\u0438\u043a\u0430 \u0411\u0440\u0438\u0442\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u0413\u0440\u0435\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0413\u0440\u0443\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0430 \u0413\u0432\u0430\u0458\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0413\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u0413\u0438\u0431\u0440\u0430\u043b\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u0413\u0440\u0435\u043d\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0413\u0430\u043c\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0413\u0432\u0438\u043d\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0413\u0432\u0430\u0434\u0435\u043b\u0443\u043f\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u0415\u043a\u0432\u0430\u0442\u043e\u0440\u0438\u0458\u0430\u043b\u043d\u0430 \u0413\u0432\u0438\u043d\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0413\u0440\u0447\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u040f\u043e\u0440\u045f\u0438\u0458\u0430 \u0438 \u0408\u0443\u0436\u043d\u0430 \u0421\u0435\u043d\u0434\u0432\u0438\u0447 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0413\u0432\u0430\u0442\u0435\u043c\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u0413\u0443\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0413\u0432\u0438\u043d\u0435\u0458\u0430-\u0411\u0438\u0441\u0430\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0413\u0432\u0430\u0458\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0425\u043e\u043d\u0433 \u041a\u043e\u043d\u0433 (\u0421. \u0410. \u0420. \u041a\u0438\u043d\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u0425\u0435\u0440\u0434 \u0438 \u041c\u0435\u043a\u0434\u043e\u043d\u0430\u043b\u0434 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0425\u043e\u043d\u0434\u0443\u0440\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0425\u0440\u0432\u0430\u0442\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0425\u0430\u0438\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u041c\u0430\u0452\u0430\u0440\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0418\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0418\u0440\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0418\u0437\u0440\u0430\u0435\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0418\u043d\u0434\u0438\u0458\u0430"_s)
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
			$of(u"\u0418\u0441\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0418\u0442\u0430\u043b\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u0408\u0430\u043c\u0430\u0458\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0408\u043e\u0440\u0434\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u0408\u0430\u043f\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u041a\u0435\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u041a\u0438\u0440\u0433\u0438\u0437\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u041a\u0430\u043c\u0431\u043e\u045f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u041a\u0438\u0440\u0438\u0431\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u041a\u043e\u043c\u043e\u0440\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0421\u0435\u043d\u0442 \u041a\u0438\u0442\u0441 \u0438 \u041d\u0435\u0432\u0438\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0421\u0435\u0432\u0435\u0440\u043d\u0430 \u041a\u043e\u0440\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u041a\u043e\u0440\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u041a\u0443\u0432\u0430\u0458\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u041a\u0430\u0458\u043c\u0430\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
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
			$of(u"\u041b\u0438\u0431\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u0421\u0435\u043d\u0442 \u041b\u0443\u0446\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u041b\u0438\u0445\u0442\u0435\u043d\u0448\u0442\u0430\u0458\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0428\u0440\u0438 \u041b\u0430\u043d\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u041b\u0438\u0431\u0435\u0440\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u041b\u0435\u0441\u043e\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u041b\u0438\u0442\u0432\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u041b\u0443\u043a\u0441\u0435\u043c\u0431\u0443\u0440\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u041b\u0435\u0442\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u041b\u0438\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u041c\u0430\u0440\u043e\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u041c\u043e\u043d\u0430\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u041c\u043e\u043b\u0434\u0430\u0432\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u041c\u0430\u0434\u0430\u0433\u0430\u0441\u043a\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u041c\u0430\u0440\u0448\u0430\u043b\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u041c\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u041c\u0438\u0458\u0430\u043d\u043c\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u041c\u043e\u043d\u0433\u043e\u043b\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u041c\u0430\u043a\u0430\u043e (\u0421. \u0410. \u0420. \u041a\u0438\u043d\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u0421\u0435\u0432\u0435\u0440\u043d\u0430 \u041c\u0430\u0440\u0438\u0458\u0430\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u041c\u0430\u0440\u0442\u0438\u043d\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u041c\u0430\u0443\u0440\u0438\u0442\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u041c\u043e\u043d\u0441\u0435\u0440\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u041c\u0430\u043b\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u041c\u0430\u0443\u0440\u0438\u0446\u0438\u0458\u0443\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u041c\u0430\u043b\u0434\u0438\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u041c\u0430\u043b\u0430\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u041c\u0435\u043a\u0441\u0438\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u041c\u0430\u043b\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u041c\u043e\u0437\u0430\u043c\u0431\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u041d\u0430\u043c\u0438\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u041d\u043e\u0432\u0430 \u041a\u0430\u043b\u0435\u0434\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u041d\u0438\u0433\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u041d\u043e\u0440\u0444\u043e\u043b\u043a \u041e\u0441\u0442\u0440\u0432\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u041d\u0438\u0433\u0435\u0440\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u041d\u0438\u043a\u0430\u0440\u0430\u0433\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u0425\u043e\u043b\u0430\u043d\u0434\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u041d\u043e\u0440\u0432\u0435\u0448\u043a\u0430"_s)
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
			$of(u"\u041d\u0438\u0443\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u041d\u043e\u0432\u0438 \u0417\u0435\u043b\u0430\u043d\u0434"_s)
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
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0430 \u041f\u043e\u043b\u0438\u043d\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u041f\u0430\u043f\u0443\u0430 \u041d\u043e\u0432\u0430 \u0413\u0432\u0438\u043d\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u0424\u0438\u043b\u0438\u043f\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u041f\u0430\u043a\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u041f\u043e\u0459\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u0421\u0435\u043d \u041f\u0458\u0435\u0440 \u0438 \u041c\u0438\u043a\u0435\u043b\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u041f\u0438\u0442\u043a\u0435\u0440\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u041f\u043e\u0440\u0442\u043e \u0420\u0438\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u041f\u0430\u043b\u0435\u0441\u0442\u0438\u043d\u0441\u043a\u0430 \u0442\u0435\u0440\u0438\u0442\u043e\u0440\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u041f\u043e\u0440\u0442\u0443\u0433\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u041f\u0430\u043b\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u041f\u0430\u0440\u0430\u0433\u0432\u0430\u0458"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u041a\u0430\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0420\u0435\u0438\u043d\u0438\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0420\u0443\u043c\u0443\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0420\u0443\u0441\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u0420\u0443\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0421\u0430\u0443\u0434\u0438\u0458\u0441\u043a\u0430 \u0410\u0440\u0430\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0421\u043e\u043b\u043e\u043c\u043e\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u0421\u0435\u0458\u0448\u0435\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0421\u0443\u0434\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0428\u0432\u0435\u0434\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0421\u0438\u043d\u0433\u0430\u043f\u0443\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0430 \u0408\u0435\u043b\u0435\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0435\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0421\u0432\u0430\u043b\u0431\u0430\u0440\u0434 \u0438 \u0408\u0430\u043d\u043c\u0430\u0458\u0435\u043d \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0430\u0447\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0421\u0438\u0458\u0435\u0440\u0430 \u041b\u0435\u043e\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u0421\u0430\u043d \u041c\u0430\u0440\u0438\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0421\u0435\u043d\u0435\u0433\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0421\u043e\u043c\u0430\u043b\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0421\u0443\u0440\u0438\u043d\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u0421\u0430\u043e \u0422\u043e\u043c\u0435 \u0438 \u041f\u0440\u0438\u043d\u0446\u0438\u043f\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0421\u0430\u043b\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0421\u0438\u0440\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0421\u0432\u0430\u0437\u0438\u043b\u0435\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u0422\u0443\u0440\u043a\u0441 \u0438 \u041a\u0430\u0458\u043a\u043e\u0441 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u0427\u0430\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0435 \u0408\u0443\u0436\u043d\u0435 \u0422\u0435\u0440\u0438\u0442\u043e\u0440\u0438\u0458\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u0422\u043e\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u0422\u0430\u0458\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u0422\u0430\u045f\u0438\u043a\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u0422\u043e\u043a\u0435\u043b\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u0422\u0438\u043c\u043e\u0440-\u041b\u0435\u0441\u0442\u0435"_s)
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
			$of("TR"_s),
			$of(u"\u0422\u0443\u0440\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u0422\u0440\u0438\u043d\u0438\u0434\u0430\u0434 \u0438 \u0422\u043e\u0431\u0430\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u0422\u0443\u0432\u0430\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u0422\u0430\u0458\u0432\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u0422\u0430\u043d\u0437\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0458\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0423\u0433\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u041c\u0430\u045a\u0430 \u0443\u0434\u0430\u0459\u0435\u043d\u0430 \u043e\u0441\u0442\u0440\u0432\u0430 \u0421\u0410\u0414"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0421\u0458\u0435\u0434\u0438\u045a\u0435\u043d\u0435 \u0410\u043c\u0435\u0440\u0438\u0447\u043a\u0435 \u0414\u0440\u0436\u0430\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0458"_s)
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
			$of("VC"_s),
			$of(u"\u0421\u0435\u043d\u0442 \u0412\u0438\u043d\u0441\u0435\u043d\u0442 \u0438 \u0413\u0440\u0435\u043d\u0430\u0434\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0446\u0443\u0435\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0414\u0435\u0432\u0438\u0447\u0430\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0421.\u0410.\u0414. \u0414\u0435\u0432\u0438\u0447\u0430\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u0412\u0438\u0458\u0435\u0442\u043d\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u0412\u0430\u043d\u0443\u0430\u0442\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u0412\u0430\u043b\u0438\u0441 \u0438 \u0424\u0443\u0442\u0443\u043d\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u0421\u0430\u043c\u043e\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0408\u0435\u043c\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u041c\u0430\u0458\u043e\u0442\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u0408\u0443\u0436\u043d\u043e\u0430\u0444\u0440\u0438\u0447\u043a\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0417\u0430\u043c\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0417\u0438\u043c\u0431\u0430\u0431\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0410\u0444\u0440\u0438\u043a\u0430\u043d\u0435\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0410\u0440\u0430\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0411\u0435\u043b\u043e\u0440\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0411\u0443\u0433\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0411\u0440\u0435\u0442\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u041a\u0430\u0442\u0430\u043b\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u041a\u043e\u0440\u0437\u0438\u043a\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0427\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0414\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u041d\u0435\u043c\u0430\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0413\u0440\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0415\u043d\u0433\u043b\u0435\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0415\u0441\u043f\u0435\u0440\u0430\u043d\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0428\u043f\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0415\u0441\u0442\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0411\u0430\u0441\u043a\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u041f\u0435\u0440\u0441\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0424\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0418\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0425\u0435\u0431\u0440\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0425\u0438\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0425\u0440\u0432\u0430\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u041c\u0430\u0452\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0410\u0440\u043c\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0418\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"\u0418\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043d\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0418\u0442\u0430\u043b\u0438\u0458\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"\u0425\u0435\u0431\u0440\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u0408\u0430\u043f\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"\u0408\u0438\u0434\u0438\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0413\u0440\u0443\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u041a\u043c\u0435\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u041a\u043e\u0440\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u041a\u0443\u0440\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u041a\u0438\u0440\u0433\u0438\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u041b\u0430\u0442\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u041b\u0438\u0442\u0432\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u041b\u0435\u0442\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u041c\u043e\u043d\u0433\u043e\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"\u041c\u043e\u043b\u0434\u0430\u0432\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0411\u0443\u0440\u043c\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u0425\u043e\u043b\u0430\u043d\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u041d\u043e\u0440\u0432\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u041f\u043e\u0459\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u041f\u043e\u0440\u0442\u0443\u0433\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0420\u0435\u0442\u043e-\u0420\u043e\u043c\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0420\u0443\u043c\u0443\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0420\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0421\u0430\u043d\u0441\u043a\u0440\u0438\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0430\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0435\u043d\u0430\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0410\u043b\u0431\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0421\u0440\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0428\u0432\u0435\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0421\u0432\u0430\u0445\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u0422\u0443\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0458\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0412\u0438\u0458\u0435\u0442\u043d\u0430\u043c\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0408\u0438\u0434\u0438\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u041a\u0438\u043d\u0435\u0441\u043a\u0438"_s)
		})
	});
}

LocaleNames_sr::LocaleNames_sr() {
}

$Class* LocaleNames_sr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr, name, initialize, &_LocaleNames_sr_ClassInfo_, allocate$LocaleNames_sr);
	return class$;
}

$Class* LocaleNames_sr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun