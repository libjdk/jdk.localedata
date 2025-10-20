#include <sun/util/resources/ext/LocaleNames_ja.h>

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

$MethodInfo _LocaleNames_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ja::*)()>(&LocaleNames_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ja",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ja_MethodInfo_
};

$Object* allocate$LocaleNames_ja($Class* clazz) {
	return $of($alloc(LocaleNames_ja));
}

void LocaleNames_ja::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u4e16\u754c"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u5317\u7c73"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u5357\u30a2\u30e1\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u30aa\u30bb\u30a2\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u897f\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u4e2d\u592e\u30a2\u30e1\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u6771\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u5317\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u4e2d\u90e8\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u5357\u90e8\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u30a2\u30e1\u30ea\u30ab\u5927\u9678"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u5317\u30a2\u30e1\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u30ab\u30ea\u30d6\u6d77"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u6771\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u5357\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u6771\u5357\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u5357\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2\u30fb\u30cb\u30e5\u30fc\u30b8\u30fc\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u30e1\u30e9\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u30df\u30af\u30ed\u30cd\u30b7\u30a2\u5730\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u30dd\u30ea\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u4e2d\u592e\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u897f\u30a2\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u6771\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u5317\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u897f\u30e8\u30fc\u30ed\u30c3\u30d1"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u30e9\u30c6\u30f3\u30a2\u30e1\u30ea\u30ab\u30fb\u30ab\u30ea\u30d6\u5730\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u30a2\u30f3\u30c9\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u30a2\u30e9\u30d6\u9996\u9577\u56fd\u9023\u90a6"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u30a2\u30d5\u30ac\u30cb\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u30a2\u30f3\u30c1\u30b0\u30a2\u30d0\u30fc\u30d6\u30fc\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u30a2\u30f3\u30ae\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u9818\u30a2\u30f3\u30c6\u30a3\u30eb\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u30a2\u30f3\u30b4\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u5357\u6975"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u30a2\u30e1\u30ea\u30ab\u30f3\u30b5\u30e2\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u30a2\u30eb\u30d0\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u30aa\u30fc\u30e9\u30f3\u30c9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u30a2\u30e9\u30d3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u5e1d\u56fd\u30a2\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u30a2\u30f4\u30a7\u30b9\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u30fb\u30d8\u30eb\u30c4\u30a7\u30b4\u30d3\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u30d0\u30eb\u30d0\u30c9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u30d0\u30f3\u30b0\u30e9\u30c7\u30b7\u30e5"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u30d9\u30eb\u30ae\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u30d6\u30eb\u30ad\u30ca\u30d5\u30a1\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u30d0\u30fc\u30ec\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u30d6\u30eb\u30f3\u30b8"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u30d9\u30cb\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u30d0\u30fc\u30df\u30e5\u30fc\u30c0\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u30d6\u30eb\u30cd\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u30d0\u30cf\u30de"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u30d6\u30fc\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u30d6\u30fc\u30d9\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u30dc\u30c4\u30ef\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u30d9\u30ea\u30fc\u30ba"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u30d0\u30ea\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"\u30d0\u30e0\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"\u30d0\u30b5\u8a9e(\u30d0\u30fc)"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u30d0\u30bf\u30af\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u30d9\u30f3\u30ac\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\u30d6\u30ea\u30b9\u30b7\u30f3\u30dc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u6ce8\u97f3\u5b57\u6bcd"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u30d6\u30e9\u30fc\u30d5\u30df\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u30d6\u30e9\u30a4\u30e6\u70b9\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u30d6\u30ae\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u30d6\u30d2\u30c3\u30c9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u30ab\u30ca\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u30b3\u30b3\u30b9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u30b3\u30f3\u30b4\u6c11\u4e3b\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u4e2d\u592e\u30a2\u30d5\u30ea\u30ab\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u30b3\u30f3\u30b4"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u30b9\u30a4\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u30b3\u30fc\u30c8\u30b8\u30dc\u30a2\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u30af\u30c3\u30af\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u30c1\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u30ab\u30e1\u30eb\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u4e2d\u83ef\u4eba\u6c11\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u30b3\u30ed\u30f3\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u30b3\u30b9\u30bf\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2\u30fb\u30e2\u30f3\u30c6\u30cd\u30b0\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u30ad\u30e5\u30fc\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u30ab\u30fc\u30dc\u30d9\u30eb\u30c7"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u30af\u30ea\u30b9\u30de\u30b9\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u30ad\u30d7\u30ed\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u30c1\u30a7\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u30c1\u30e3\u30af\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u7d71\u5408\u30ab\u30ca\u30c0\u5148\u4f4f\u6c11\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u30ab\u30ea\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u30c1\u30e3\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u30c1\u30a7\u30ed\u30ad\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u30ad\u30a2\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u30b3\u30d7\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\u30ad\u30d7\u30ed\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u30ad\u30ea\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u30ad\u30ea\u30eb\u6587\u5b57 (\u53e4\u4ee3\u6559\u4f1a\u30b9\u30e9\u30d6\u8a9e\u306e\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u30c9\u30a4\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u30b8\u30d6\u30c1"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u30c7\u30f3\u30de\u30fc\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u30c9\u30df\u30cb\u30ab\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u30c9\u30df\u30cb\u30ab\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u30a2\u30eb\u30b8\u30a7\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u30c7\u30fc\u30d0\u30ca\u30fc\u30ac\u30ea\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u30c7\u30bb\u30ec\u30c3\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"\u30c7\u30e5\u30d7\u30ed\u30ef\u30a8\u5f0f\u901f\u8a18"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u30a8\u30af\u30a2\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u30a8\u30b9\u30c8\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u897f\u30b5\u30cf\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u30a8\u30ea\u30c8\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8\u6c11\u8846\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8\u795e\u5b98\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8\u8056\u523b\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"\u30a8\u30eb\u30d0\u30b5\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u30d5\u30a9\u30fc\u30af\u30e9\u30f3\u30c9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u30df\u30af\u30ed\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u30d5\u30a7\u30ed\u30fc\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u30ac\u30dc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u30a4\u30ae\u30ea\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u30b0\u30ec\u30ca\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u30b0\u30eb\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u4ecf\u9818\u30ae\u30a2\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u30ac\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u30b8\u30d6\u30e9\u30eb\u30bf\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u30b0\u30ea\u30fc\u30f3\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u30ac\u30f3\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u30ae\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u30b0\u30a2\u30c9\u30eb\u30fc\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u8d64\u9053\u30ae\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u30ae\u30ea\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u30b5\u30a6\u30b9\u30b8\u30e7\u30fc\u30b8\u30a2\u5cf6\u30fb\u30b5\u30a6\u30b9\u30b5\u30f3\u30c9\u30a6\u30a3\u30c3\u30c1\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u30b0\u30a2\u30c6\u30de\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u30b0\u30a2\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u30ae\u30cb\u30a2\u30d3\u30b5\u30a6"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u30ac\u30a4\u30a2\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u30b0\u30eb\u30b8\u30a2\u6587\u5b57\uff08\u30d5\u30c4\u30ea\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u30b0\u30eb\u30b8\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u30b0\u30e9\u30b4\u30fc\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\u30b4\u30fc\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"\u30b0\u30e9\u30f3\u30bf\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\u30b0\u30b8\u30e3\u30e9\u30fc\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u30b0\u30eb\u30e0\u30ad\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u9999\u6e2f"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u30cf\u30fc\u30c9\u30fb\u30de\u30af\u30c9\u30ca\u30eb\u30c9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u30db\u30f3\u30b8\u30e5\u30e9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u30cf\u30a4\u30c1"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u30cf\u30f3\u30ac\u30ea\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u30cf\u30f3\u30b0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u6f22\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\u30cf\u30cc\u30ce\u30aa\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u7c21\u4f53\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u7e41\u4f53\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u30d8\u30d6\u30e9\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u3072\u3089\u304c\u306a"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\u30d1\u30cf\u30a6\u30fb\u30d5\u30e2\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u30ab\u30bf\u30ab\u30ca\u3068\u3072\u3089\u304c\u306a"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u53e4\u4ee3\u30cf\u30f3\u30ac\u30ea\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u30a4\u30b9\u30e9\u30a8\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u30a4\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u82f1\u9818\u30a4\u30f3\u30c9\u6d0b\u5730\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u30a4\u30e9\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u30a4\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u30a4\u30f3\u30c0\u30b9\u6587\u5b57 (\u30cf\u30e9\u30c3\u30d1\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u53e4\u4ee3\u30a4\u30bf\u30ea\u30a2\u306e\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u30b8\u30e3\u30de\u30a4\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u30e8\u30eb\u30c0\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u65e5\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\u30b8\u30e3\u30ef\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u65e5\u672c\u8a9e\u306e\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u30b1\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u30ad\u30eb\u30ae\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u30ab\u30f3\u30dc\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u30ad\u30ea\u30d0\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u30b3\u30e2\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u30bb\u30f3\u30c8\u30af\u30ea\u30b9\u30c8\u30d5\u30a1\u30fc\u30fb\u30cd\u30a4\u30d3\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u671d\u9bae\u6c11\u4e3b\u4e3b\u7fa9\u4eba\u6c11\u5171\u548c\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u5927\u97d3\u6c11\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u30af\u30a6\u30a7\u30fc\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u30b1\u30a4\u30de\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u30ab\u30b6\u30d5\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u30ab\u30e4\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u30ab\u30bf\u30ab\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u30ab\u30ed\u30fc\u30b7\u30e5\u30c6\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u30af\u30e1\u30fc\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u30ab\u30f3\u30ca\u30c0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\u97d3\u56fd\u8a9e\u306e\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"\u30af\u30da\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u30ab\u30a4\u30c6\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u30e9\u30aa\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u30ec\u30d0\u30ce\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u30bb\u30f3\u30c8\u30eb\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u30ea\u30d2\u30c6\u30f3\u30b7\u30e5\u30bf\u30a4\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u30b9\u30ea\u30e9\u30f3\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u30ea\u30d9\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u30ec\u30bd\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u30ea\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u30bf\u30a4\u30fb\u30bf\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u30e9\u30aa\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u30e9\u30c6\u30f3\u6587\u5b57 (\u30c9\u30a4\u30c4\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u30e9\u30c6\u30f3\u6587\u5b57(\u30b2\u30fc\u30eb\u8a9e)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u30e9\u30c6\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u30ec\u30d7\u30c1\u30e3\u6587\u5b57 (\u30ed\u30f3\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u30ea\u30f3\u30d6\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u7dda\u6587\u5b57A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u7dda\u6587\u5b57B"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"\u30ea\u30b9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"\u30ed\u30de\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u30ea\u30e5\u30ad\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u30ea\u30c7\u30a3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u30e2\u30ed\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u30e2\u30ca\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u30e2\u30eb\u30c9\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u30e2\u30f3\u30c6\u30cd\u30b0\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u30de\u30fc\u30b7\u30e3\u30eb\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u30de\u30b1\u30c9\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u30de\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u30de\u30ab\u30aa"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u5317\u30de\u30ea\u30a2\u30ca\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u30de\u30eb\u30c6\u30a3\u30cb\u30fc\u30af\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u30e2\u30fc\u30ea\u30bf\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u30e2\u30f3\u30c8\u30bb\u30e9\u30c8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u30de\u30eb\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u30e2\u30fc\u30ea\u30b7\u30e3\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u30e2\u30eb\u30c7\u30a3\u30d6"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u30de\u30e9\u30a6\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u30e1\u30ad\u30b7\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u30de\u30ec\u30fc\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u30e2\u30b6\u30f3\u30d3\u30fc\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u30de\u30f3\u30c0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\u30de\u30cb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u30de\u30e4\u8c61\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"\u30e1\u30f3\u30c7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"\u30e1\u30ed\u30a8\u6587\u5b57\u8349\u66f8\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u30e1\u30ed\u30a8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u30de\u30e9\u30e4\u30fc\u30e9\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u30e0\u30fc\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u30e1\u30a4\u30c6\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u30ca\u30df\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u30cb\u30e5\u30fc\u30ab\u30ec\u30c9\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u30cb\u30b8\u30a7\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u30ce\u30fc\u30d5\u30a9\u30fc\u30af\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u30ca\u30a4\u30b8\u30a7\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u30cb\u30ab\u30e9\u30b0\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u30cd\u30d1\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u30ca\u30a6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u30cb\u30a6\u30a8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u30cb\u30e5\u30fc\u30b8\u30fc\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"\u53e4\u4ee3\u5317\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"\u30ca\u30d0\u30c6\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"Nakhi Geba\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\u30f3\u30b3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u30aa\u30de\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u30aa\u30ac\u30e0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u30aa\u30eb\u30c1\u30ad\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u30aa\u30eb\u30db\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u30aa\u30ea\u30e4\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u30aa\u30b9\u30de\u30cb\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u30d1\u30ca\u30de"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u30da\u30eb\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u4ecf\u9818\u30dd\u30ea\u30cd\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u30d1\u30d7\u30a2\u30cb\u30e5\u30fc\u30ae\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u30d5\u30a3\u30ea\u30d4\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u30d1\u30ad\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u30b5\u30f3\u30d4\u30a8\u30fc\u30eb\u5cf6\u30fb\u30df\u30af\u30ed\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u30d4\u30c8\u30b1\u30a2\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u30d7\u30a8\u30eb\u30c8\u30ea\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u30d1\u30ec\u30b9\u30c1\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u30d1\u30e9\u30aa"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u30d1\u30e9\u30b0\u30a2\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"\u30d1\u30eb\u30df\u30e9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u53e4\u30da\u30eb\u30df\u30c3\u30af\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u30d1\u30b9\u30d1\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\u7891\u6587\u306e\u30d1\u30d5\u30e9\u30f4\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u8a69\u7bc7\u306e\u30d1\u30d5\u30e9\u30f4\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\u66f8\u7c4d\u306e\u30d1\u30d5\u30e9\u30f4\u30a3\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\u30d5\u30a7\u30cb\u30ad\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u30dd\u30e9\u30fc\u30c9\u97f3\u58f0\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u7891\u6587\u306e\u30d1\u30eb\u30c6\u30a3\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u30ab\u30bf\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u30ec\u30e6\u30cb\u30aa\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u30ed\u30b7\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u30eb\u30ef\u30f3\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u30ec\u30b8\u30e3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u30ed\u30f3\u30b4\u30ed\u30f3\u30b4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u30eb\u30fc\u30f3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u30b5\u30a6\u30b8\u30a2\u30e9\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u30bd\u30ed\u30e2\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u30bb\u30a4\u30b7\u30a7\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u30b9\u30fc\u30c0\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u30b9\u30a6\u30a7\u30fc\u30c7\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u30b7\u30f3\u30ac\u30dd\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u30bb\u30f3\u30c8\u30d8\u30ec\u30ca\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u30b9\u30d0\u30fc\u30eb\u30d0\u30eb\u8af8\u5cf6\u30fb\u30e4\u30f3\u30de\u30a4\u30a8\u30f3\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u30b9\u30ed\u30d0\u30ad\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u30b7\u30a8\u30e9\u30ec\u30aa\u30cd"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u30b5\u30f3\u30de\u30ea\u30ce"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u30bb\u30cd\u30ac\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u30bd\u30de\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u30b5\u30f3\u30c8\u30e1\u30fb\u30d7\u30ea\u30f3\u30b7\u30da"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u30a8\u30eb\u30b5\u30eb\u30d0\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u30b7\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u30b9\u30ef\u30b8\u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u30b5\u30de\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u30b5\u30e9\u30c6\u30a3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"\u53e4\u4ee3\u5357\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u30b5\u30a4\u30e9\u30b7\u30e5\u30c8\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u624b\u8a71\u8a18\u8ff0"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u30b7\u30e7\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"\u30b7\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u30b7\u30f3\u30cf\u30e9\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"\u30b9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u30b7\u30ed\u30c6\u30a3\u30fb\u30ca\u30b0\u30ea\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57 (\u30a8\u30b9\u30c8\u30e9\u30f3\u30b2\u30ed\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57 (\u897f\u65b9\u30b7\u30ea\u30a2\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u30b7\u30ea\u30a2\u6587\u5b57 (\u6771\u65b9\u30b7\u30ea\u30a2\u6587\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u30bf\u30fc\u30af\u30b9\u8af8\u5cf6\u30fb\u30ab\u30a4\u30b3\u30b9\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u30c1\u30e3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9\u9818\u6975\u5357\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u30c8\u30fc\u30b4"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u30bf\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u30bf\u30b8\u30ad\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u30c8\u30b1\u30e9\u30a6\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u6771\u30c6\u30a3\u30e2\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30cb\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u30c1\u30e5\u30cb\u30b8\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u30c8\u30f3\u30ac"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u30c8\u30eb\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u30c8\u30ea\u30cb\u30c0\u30fc\u30c9\u30fb\u30c8\u30d0\u30b4"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u30c4\u30d0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u53f0\u6e7e"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u30bf\u30f3\u30b6\u30cb\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u30bf\u30b0\u30d0\u30f3\u30ef\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u30bf\u30a4\u30ec\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u65b0\u30bf\u30a4\u30fb\u30eb\u30fc\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u30bf\u30df\u30fc\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u30bf\u30a4\u30fb\u30f4\u30a7\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u30c6\u30eb\u30b0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\u30c6\u30f3\u30b0\u30ef\u30fc\u30eb\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u30af\u30e1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\u30bf\u30ac\u30ed\u30b0\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u30bf\u30fc\u30ca\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u30bf\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u30c1\u30d9\u30c3\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u30a6\u30ac\u30f3\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u7c73\u9818\u592a\u5e73\u6d0b\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u30a2\u30e1\u30ea\u30ab\u5408\u8846\u56fd"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u30a6\u30eb\u30b0\u30a2\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u30a6\u30ba\u30d9\u30ad\u30b9\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"\u30a6\u30ac\u30ea\u30c8\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u30d0\u30c1\u30ab\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u30bb\u30f3\u30c8\u30d3\u30f3\u30bb\u30f3\u30c8\u304a\u3088\u3073\u30b0\u30ec\u30ca\u30c7\u30a3\u30fc\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u30d9\u30cd\u30ba\u30a8\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u82f1\u9818\u30d0\u30fc\u30b8\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u7c73\u9818\u30d0\u30fc\u30b8\u30f3\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u30d0\u30cc\u30a2\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"\u30f4\u30a1\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u8996\u8a71\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u30ef\u30ea\u30b9\u30fb\u30d5\u30c6\u30e5\u30ca\u8af8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u897f\u30b5\u30e2\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"\u30ef\u30e9\u30f3\u30b0\u30fb\u30af\u30b7\u30c6\u30a3\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"\u53e4\u4ee3\u30da\u30eb\u30b7\u30a2\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u30b7\u30e5\u30e1\u30fc\u30eb\uff1d\u30a2\u30c3\u30ab\u30c9\u8a9e\u6954\u5f62\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u30a4\u30a8\u30e1\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u30de\u30e8\u30c3\u30c8\u5cf6"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u30a4\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u5357\u30a2\u30d5\u30ea\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u30b6\u30f3\u30d3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u30b8\u30f3\u30d0\u30d6\u30a8"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u7d99\u627f\u7528\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u6570\u5b66\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u53e3\u627f\u8a00\u8a9e\u306e\u30b3\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u5171\u901a\u30b3\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u7528\u5b57\u672a\u30b3\u30fc\u30c9\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u30a2\u30d5\u30a1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of(u"\u30a2\u30d5\u30a1\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u30a2\u30d6\u30cf\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of(u"\u30a2\u30d6\u30cf\u30fc\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u30a2\u30c1\u30a7\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u30a2\u30c1\u30e7\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u30a2\u30c0\u30f3\u30b0\u30e1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u30a2\u30c7\u30a3\u30b2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u30a2\u30f4\u30a7\u30b9\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u30a2\u30d5\u30ea\u30ab\u30fc\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u30a2\u30d5\u30ac\u30cb\u30fc (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u30a2\u30d5\u30ea\u30d2\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of(u"\u30a2\u30d5\u30ea\u30ab\u30fc\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u30a2\u30a4\u30cc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u30a2\u30ab\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of(u"\u30a2\u30ab\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u30a2\u30c3\u30ab\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u30a2\u30ec\u30a6\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of(u"\u30a2\u30eb\u30b4\u30f3\u30ad\u30a2\u30f3\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u5357\u30a2\u30eb\u30bf\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u30a2\u30e0\u30cf\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of(u"\u30a2\u30e0\u30cf\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u30a2\u30e9\u30b4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u9818\u30a2\u30f3\u30c6\u30a3\u30eb \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u30a2\u30f3\u30ae\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of(u"\u30a2\u30d1\u30c3\u30c1\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3 \u30a2\u30a5\u30b9\u30c8\u30e9\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u30a2\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of(u"\u30a2\u30e9\u30b4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u30a2\u30e9\u30a6\u30ab\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3 \u30da\u30bd (1983-1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("art"_s),
			$of(u"\u4eba\u5de5\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u30a2\u30e9\u30ef\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u30a2\u30c3\u30b5\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of(u"\u30a2\u30c3\u30b5\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u30a2\u30b9\u30c8\u30a5\u30ea\u30a2\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of(u"\u30a2\u30b5\u30d1\u30b9\u30ab\u30f3\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u30a2\u30f4\u30a1\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of(u"\u30a2\u30f4\u30a1\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of(u"\u30a2\u30f4\u30a7\u30b9\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u30a2\u30ef\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u30a2\u30a4\u30de\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of(u"\u30a2\u30a4\u30de\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u30d0\u30b7\u30ad\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of(u"\u30d0\u30df\u30ec\u30b1\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of(u"\u30d0\u30b7\u30ad\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u30d0\u30eb\u30fc\u30c1\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2 \u30de\u30eb\u30af (BAM)"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u30d0\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of(u"\u30d0\u30b9\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u30d0\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of(u"\u30d0\u30eb\u30c8\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u767d\u30ed\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u30d9\u30b8\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u30d9\u30eb\u30ae\u30fc \u30d5\u30e9\u30f3 (BEL)"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u30d9\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of(u"\u30d9\u30f3\u30ac\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of(u"\u30d9\u30eb\u30d9\u30eb\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"\u30d3\u30cf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u30dc\u30fc\u30b8\u30d7\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u30d3\u30b9\u30e9\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of(u"\u30d3\u30cf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u30d3\u30b3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u30d3\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of(u"\u30d3\u30b9\u30e9\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u30b7\u30af\u30b7\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u30d0\u30f3\u30d0\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u30d9\u30f3\u30ac\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of(u"\u30d0\u30f3\u30c8\u30a5\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u30c1\u30d9\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u30d6\u30eb\u30c8\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u30d6\u30e9\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u30af\u30eb\u30bc\u30a4\u30ed (1990-1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of(u"\u30d0\u30bf\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u30d6\u30ea\u30e4\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u30d6\u30ae\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of(u"\u30d3\u30eb\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u30d3\u30ea\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u30ab\u30bf\u30ed\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u30ab\u30ca\u30c0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of(u"\u4e2d\u7c73\u30a4\u30f3\u30c7\u30a3\u30a2\u30f3\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u30ab\u30ea\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of(u"\u30ab\u30bf\u30ed\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of(u"\u30b3\u30fc\u30ab\u30b5\u30b9\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u30c1\u30a7\u30c1\u30a7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u30bb\u30d6\u30a2\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of(u"\u30b1\u30eb\u30c8\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u30c1\u30e3\u30e2\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cha"_s),
			$of(u"\u30c1\u30e3\u30e2\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u30c1\u30d6\u30c1\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u30c1\u30a7\u30c1\u30a7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u30c1\u30e3\u30ac\u30bf\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of(u"\u4e2d\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u30c1\u30e5\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u30de\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u30d3\u30fc\u30c1\u30fb\u30e9\u30fb\u30de\u30fc \u7b49"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u30c1\u30e7\u30af\u30c8\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u30c1\u30da\u30ef\u30a4\u30a2\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u30c1\u30a7\u30ed\u30ad\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of(u"\u6559\u4f1a\u30b9\u30e9\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of(u"\u30c1\u30e5\u30f4\u30a1\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u30b7\u30e3\u30a4\u30a2\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of(u"\u30c1\u30e3\u30e0\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u30b3\u30eb\u30b7\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u30b3\u30ed\u30f3\u30d3\u30a2 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of(u"\u30b3\u30fc\u30f3\u30a6\u30a9\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of(u"\u30b3\u30eb\u30b7\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of(u"\u82f1\u8a9e\u304c\u57fa\u76e4\u306e\u6df7\u6210\u8a9e\u30fb\u6df7\u5408\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9\u8a9e\u304c\u57fa\u76e4\u306e\u6df7\u6210\u8a9e\u30fb\u6df7\u5408\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb\u8a9e\u304c\u57fa\u76e4\u306e\u6df7\u6210\u8a9e\u30fb\u6df7\u5408\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u30af\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of(u"\u30af\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u30af\u30ea\u30df\u30a2\u30fb\u30bf\u30bf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of(u"\u305d\u306e\u4ed6\u306e\u6df7\u6210\u8a9e\u30fb\u6df7\u5408\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u30c1\u30a7\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u30ab\u30b7\u30e5\u30fc\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u6559\u4f1a\u30b9\u30e9\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of(u"\u30af\u30b7\u30e5\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u30c1\u30e5\u30f4\u30a1\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u30a6\u30a7\u30fc\u30eb\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("cze"_s),
			$of(u"\u30c1\u30a7\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u30c7\u30f3\u30de\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u30c0\u30b3\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of(u"\u30c7\u30f3\u30de\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u30c0\u30eb\u30ac\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of(u"\u30c0\u30e4\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u30c7\u30e9\u30a6\u30a7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u30b9\u30ec\u30a4\u30d3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u30c9\u30b0\u30ea\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u30c7\u30a3\u30f3\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("div"_s),
			$of(u"\u30c7\u30a3\u30d9\u30d2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u30c9\u30b0\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dra"_s),
			$of(u"\u30c9\u30e9\u30f4\u30a3\u30c0\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u4f4e\u30bd\u30eb\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u30c9\u30a5\u30a2\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u4e2d\u4e16\u30aa\u30e9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u30c7\u30a3\u30d9\u30d2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u30c7\u30a5\u30a6\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u30d6\u30fc\u30bf\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of(u"\u30be\u30f3\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u30a8\u30a6\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u30a8\u30d5\u30a3\u30c3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u53e4\u4ee3\u30a8\u30b8\u30d7\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u30a8\u30ab\u30b8\u30e5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u30ae\u30ea\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u30a8\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of(u"\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u4e2d\u4e16\u82f1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u30a8\u30b9\u30da\u30e9\u30f3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of(u"\u30a8\u30b9\u30da\u30e9\u30f3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of(u"\u30a8\u30b9\u30c8\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u30a8\u30b9\u30c8\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u30d0\u30b9\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ewe"_s),
			$of(u"\u30a8\u30a6\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u30a8\u30a6\u30a9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u30da\u30eb\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u30d5\u30a1\u30f3\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"\u30d5\u30a7\u30ed\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u30d5\u30a1\u30f3\u30c6\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u30d5\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u30d5\u30a3\u30ea\u30d4\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of(u"\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of(u"\u30d5\u30a3\u30f3\u30fb\u30a6\u30b4\u30eb\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u30d5\u30a7\u30ed\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u30d5\u30a9\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u4e2d\u671f\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u53e4\u30d5\u30e9\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u5317\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u6771\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of(u"\u897f\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of(u"\u30d5\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u30d5\u30ea\u30a6\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u30d5\u30ea\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u30ac\u30e8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u30d0\u30e4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u30b9\u30b3\u30c3\u30c8\u30e9\u30f3\u30c9\u30fb\u30b2\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of(u"\u30b2\u30eb\u30de\u30f3\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of(u"\u30b0\u30eb\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of(u"\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u30b2\u30a8\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u30ad\u30ea\u30d0\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u30ac\u30ea\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of(u"\u30b2\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of(u"\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of(u"\u30ac\u30ea\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of(u"\u30de\u30f3\u5cf6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u4e2d\u9ad8\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u30b0\u30ef\u30e9\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u53e4\u9ad8\u30c9\u30a4\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u30b4\u30fc\u30f3\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u30b4\u30ed\u30f3\u30bf\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u30b4\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u30b0\u30ec\u30dc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u53e4\u4ee3\u30ae\u30ea\u30b7\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of(u"\u73fe\u4ee3\u30ae\u30ea\u30b7\u30e3\u8a9e(1453-)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of(u"\u30b0\u30a2\u30e9\u30cb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u30b9\u30a4\u30b9\u30c9\u30a4\u30c4\u8a9e\uff08\u30b9\u30a4\u30b9\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u30b0\u30b8\u30e3\u30e9\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of(u"\u30b0\u30b8\u30e3\u30e9\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u30de\u30f3\u5cf6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u30b0\u30a6\u30a3\u30c3\u30c1\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u30cf\u30a6\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u30cf\u30a4\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of(u"\u30cf\u30a4\u30c1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of(u"\u30cf\u30a6\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u30cf\u30ef\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u30d8\u30d6\u30e9\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of(u"\u30d8\u30d6\u30e9\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of(u"\u30d8\u30ec\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u30d2\u30f3\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u30d2\u30ea\u30ac\u30a4\u30ce\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("him"_s),
			$of(u"\u30d2\u30de\u30c1\u30e3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of(u"\u30d2\u30f3\u30c7\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u30d2\u30c3\u30bf\u30a4\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u30d5\u30e2\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of(u"\u30d2\u30ea\u30e2\u30c8\u30a5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u30d2\u30ea\u30fb\u30e2\u30c4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hrv"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u4e0a\u30bd\u30eb\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u30cf\u30a4\u30c1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u30cf\u30f3\u30ac\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of(u"\u30cf\u30f3\u30ac\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u30a2\u30bf\u30d1\u30b9\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u30d8\u30ec\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u56fd\u969b\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u30a4\u30d0\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ibo"_s),
			$of(u"\u30a4\u30dc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ido"_s),
			$of(u"\u30a4\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u56fd\u969b\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u30a4\u30dc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u56db\u5ddd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iii"_s),
			$of(u"\u56db\u5ddd\u30a4(\u5f5d)\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of(u"\u30a4\u30b8\u30e7\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u30a4\u30cc\u30d4\u30a2\u30c3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iku"_s),
			$of(u"\u30a4\u30cc\u30af\u30a6\u30c6\u30a3\u30c8\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ile"_s),
			$of(u"\u30a4\u30f3\u30bf\u30fc\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u30a4\u30ed\u30ab\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of(u"\u30a4\u30f3\u30bf\u30fc\u30ea\u30f3\u30b0\u30a2\u8a9e(\u56fd\u969b\u88dc\u52a9\u8a9e\u5354\u4f1a)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of(u"\u30a4\u30f3\u30c9\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of(u"\u5370\u6b27\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u30a4\u30f3\u30b0\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u30a4\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of(u"\u30a4\u30cc\u30d4\u30a2\u30c3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of(u"\u30a4\u30e9\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of(u"\u30a4\u30ed\u30b3\u30a4\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ita"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u30a4\u30cc\u30af\u30a6\u30c6\u30a3\u30c8\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"\u30d8\u30d6\u30e9\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u65e5\u672c\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of(u"\u30b8\u30e3\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u30ed\u30b8\u30d0\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"\u30a4\u30c7\u30a3\u30c3\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of(u"\u65e5\u672c\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u30e6\u30c0\u30e4\u30fb\u30da\u30eb\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u30e6\u30c0\u30e4\u30fb\u30a2\u30e9\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u30b8\u30e3\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u30b0\u30eb\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u30ab\u30e9\u30fb\u30ab\u30eb\u30d1\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u30ab\u30d3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u30ab\u30c1\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of(u"\u30ab\u30e9\u30a2\u30ea\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u30ab\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kan"_s),
			$of(u"\u30ab\u30f3\u30ca\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kar"_s),
			$of(u"\u30ab\u30ec\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of(u"\u30ab\u30b7\u30df\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kau"_s),
			$of(u"\u30ab\u30cc\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u30ab\u30a6\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of(u"\u30ab\u30b6\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u30ab\u30d0\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u30b3\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u30ab\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of(u"\u30b3\u30a4\u30b5\u30f3\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of(u"\u4e2d\u592e\u30af\u30e1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u30b3\u30fc\u30bf\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u30ad\u30af\u30e6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kik"_s),
			$of(u"\u30ad\u30af\u30e6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kin"_s),
			$of(u"\u30ad\u30cb\u30e4\u30eb\u30ef\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of(u"\u30ad\u30eb\u30ae\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u30af\u30a5\u30cb\u30e3\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u30ab\u30b6\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u30b0\u30ea\u30fc\u30f3\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u30ab\u30f3\u30dc\u30b8\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u30ad\u30f3\u30d6\u30f3\u30c9\u30a5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u30ab\u30f3\u30ca\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u97d3\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u30b3\u30f3\u30ab\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kom"_s),
			$of(u"\u30b3\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kon"_s),
			$of(u"\u30b3\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of(u"\u97d3\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u30b3\u30b7\u30e3\u30a8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u30af\u30da\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u30ab\u30cc\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u30ab\u30e9\u30c1\u30e3\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u30ab\u30ec\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"\u30af\u30eb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u30af\u30eb\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u30ab\u30b7\u30df\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u30af\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of(u"\u30af\u30a2\u30cb\u30e3\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u30af\u30e0\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of(u"\u30af\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u30af\u30c6\u30ca\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u30b3\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u30b3\u30fc\u30f3\u30a6\u30a9\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u30ad\u30eb\u30ae\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u30e9\u30c6\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u30e9\u30b8\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u30e9\u30d5\u30f3\u30c0\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u30e9\u30f3\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of(u"\u30e9\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of(u"\u30e9\u30c6\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u30ec\u30ba\u30ae\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u30ac\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u30ea\u30f3\u30d6\u30eb\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of(u"\u30ea\u30f3\u30d6\u30eb\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of(u"\u30ea\u30f3\u30ac\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u30ea\u30f3\u30ac\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u30e9\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u30e2\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u30ed\u30ba\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u30eb\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u30eb\u30d0\u30fb\u30eb\u30eb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lub"_s),
			$of(u"\u30eb\u30d0\u30fb\u30ab\u30bf\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lug"_s),
			$of(u"\u30ac\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u30eb\u30a4\u30bb\u30fc\u30cb\u30e7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u30eb\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u30eb\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u30eb\u30b7\u30e3\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2\u8a9e (\u30ec\u30c3\u30c8\u8a9e)"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of(u"\u30de\u30b1\u30c9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u30e2\u30ed\u30c3\u30b3 \u30c7\u30a3\u30eb\u30cf\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u30de\u30ac\u30d2\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of(u"\u30de\u30fc\u30b7\u30e3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u30de\u30a4\u30c6\u30a3\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u30de\u30ab\u30c3\u30b5\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of(u"\u30de\u30e9\u30e4\u30fc\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u30de\u30f3\u30c7\u30a3\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of(u"\u30de\u30aa\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30ed\u30cd\u30b7\u30a2\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of(u"\u30de\u30e9\u30c6\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u30de\u30b5\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of(u"\u30de\u30ec\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u30e2\u30af\u30b7\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u30de\u30f3\u30c0\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u30e1\u30f3\u30c7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u30de\u30e9\u30ac\u30b7\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb \u30a2\u30ea\u30a2\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u30de\u30fc\u30b7\u30e3\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u30de\u30aa\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u30df\u30af\u30de\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u30df\u30ca\u30f3\u30ab\u30d0\u30a6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of(u"\u305d\u306e\u4ed6\u306e\u8a00\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u30de\u30b1\u30c9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of(u"\u30e2\u30f3\u30fb\u30af\u30e1\u30fc\u30eb\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u30de\u30e9\u30e4\u30fc\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of(u"\u30de\u30eb\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u6e80\u5dde\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u30de\u30cb\u30d7\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of(u"\u30de\u30ce\u30dc\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"\u30e2\u30eb\u30c0\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u30e2\u30fc\u30db\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u30e2\u30b7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u30de\u30e9\u30fc\u30c6\u30a3\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u30de\u30e9\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u30de\u30eb\u30bf\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u8907\u6570\u8a00\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of(u"\u30e0\u30f3\u30c0\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u30af\u30ea\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u30df\u30e9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u30de\u30fc\u30eb\u30ef\u30fc\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u30d3\u30eb\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of(u"\u30de\u30e4\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u30a8\u30eb\u30b8\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u30ca\u30a6\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of(u"\u30ca\u30ef\u30c8\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of(u"\u5317\u7c73\u30a4\u30f3\u30c7\u30a3\u30a2\u30f3\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u30ca\u30dd\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of(u"\u30ca\u30a6\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of(u"\u30ca\u30d0\u30db\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e (\u30dc\u30fc\u30af\u30e2\u30fc\u30eb)"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of(u"\u5357\u30f3\u30c7\u30d9\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u5317\u30f3\u30c7\u30d9\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of(u"\u5317\u30f3\u30c7\u30d9\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of(u"\u30f3\u30c9\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u4f4e\u5730\u30c9\u30a4\u30c4\u8a9e\u3001\u4f4e\u5730\u30b5\u30af\u30bd\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u30cd\u30d1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of(u"\u30cd\u30d1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u30cd\u30ef\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u30f3\u30c9\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u30cb\u30a2\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u30cb\u30ab\u30e9\u30b0\u30a2 \u30b3\u30eb\u30c9\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u30cb\u30a6\u30fc\u30a8\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e (\u30cb\u30e5\u30fc\u30ce\u30eb\u30b9\u30af)"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e(\u30cb\u30fc\u30ce\u30b7\u30af)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e(\u30d6\u30fc\u30af\u30e2\u30fc\u30eb)"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u30ce\u30ac\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u53e4\u30ce\u30eb\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u30f3\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u5357\u30f3\u30c7\u30d9\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u5317\u90e8\u30bd\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of(u"\u30cc\u30d3\u30a2\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u30ca\u30d0\u30db\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u53e4\u5178\u30cd\u30ef\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u30cb\u30e3\u30f3\u30b8\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nya"_s),
			$of(u"\u30c1\u30c1\u30a7\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u30cb\u30e3\u30e0\u30a6\u30a7\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u30cb\u30e3\u30f3\u30b3\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u30cb\u30e7\u30ed\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u30f3\u30bc\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u30d7\u30ed\u30d0\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of(u"\u30aa\u30c3\u30af\u8a9e(1500\u4ee5\u5f8c)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u30aa\u30b8\u30d6\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of(u"\u30aa\u30b8\u30d6\u30ef\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u30ac\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u30aa\u30ea\u30e4\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of(u"\u30aa\u30ea\u30e4\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of(u"\u30aa\u30ed\u30e2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u30aa\u30bb\u30c1\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u30aa\u30bb\u30fc\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of(u"\u30aa\u30bb\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u30aa\u30b9\u30de\u30f3\u30c8\u30eb\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of(u"\u30aa\u30c8\u30df\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u30d1\u30f3\u30b8\u30e3\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of(u"\u30d1\u30d7\u30a2\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u30d1\u30f3\u30ac\u30b7\u30ca\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u30d1\u30d5\u30e9\u30f4\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u30d1\u30f3\u30d1\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of(u"\u30d1\u30f3\u30b8\u30e3\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u30d1\u30d4\u30a2\u30e1\u30f3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u30d1\u30e9\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u53e4\u4ee3\u30da\u30eb\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of(u"\u30da\u30eb\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of(u"\u30d5\u30a3\u30ea\u30d4\u30f3\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u30d5\u30a7\u30cb\u30ad\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u30d1\u30fc\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of(u"\u30d1\u30fc\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u30dd\u30f3\u30da\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of(u"\u30d7\u30e9\u30fc\u30af\u30ea\u30c3\u30c8\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u53e4\u671f\u30d7\u30ed\u30d0\u30f3\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u30d1\u30b7\u30e5\u30c8\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("pus"_s),
			$of(u"\u30d7\u30b7\u30e5\u30c8\u30a5\u30fc\u8a9e\u3001\u30d1\u30b7\u30e5\u30c8\u30a5\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u30b1\u30c1\u30e5\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("que"_s),
			$of(u"\u30b1\u30c1\u30e5\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u30e9\u30fc\u30b8\u30e3\u30b9\u30bf\u30fc\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u30e9\u30d1\u30cc\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u30e9\u30ed\u30c8\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u30ec\u30c8\uff1d\u30ed\u30de\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u30eb\u30f3\u30b8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of(u"\u30ed\u30de\u30f3\u30b9\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of(u"\u30ed\u30de\u30f3\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u30ed\u30de\u30fc\u30cb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u30ed\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of(u"\u30eb\u30f3\u30c7\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u30a2\u30eb\u30fc\u30de\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of(u"\u30ed\u30b7\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u30eb\u30ef\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u30b5\u30f3\u30b9\u30af\u30ea\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u30b5\u30f3\u30c0\u30a6\u30a7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of(u"\u30b5\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u30e4\u30af\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of(u"\u5357\u7c73\u30a4\u30f3\u30c7\u30a3\u30a2\u30f3\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of(u"\u30bb\u30a4\u30ea\u30c3\u30b7\u30e5\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u30b5\u30de\u30ea\u30a2\u30fb\u30a2\u30e9\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of(u"\u30b5\u30f3\u30b9\u30af\u30ea\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u30b5\u30b5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u30b5\u30f3\u30bf\u30fc\u30ea\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u30b5\u30eb\u30c7\u30a3\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u30b7\u30c1\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u30b9\u30b3\u30c3\u30c8\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u30b7\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u5317\u30b5\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u30bb\u30ea\u30af\u30d7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of(u"\u30bb\u30e0\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u30b5\u30f3\u30b4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u53e4\u671f\u30a2\u30a4\u30eb\u30e9\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of(u"\u624b\u307e\u306d\u8a00\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u30b7\u30e3\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u30b7\u30f3\u30cf\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u30b7\u30c0\u30e2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of(u"\u30b7\u30f3\u30cf\u30e9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of(u"\u30b9\u30fc\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2 \u30c8\u30e9\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u30b9\u30ed\u30d0\u30ad\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sla"_s),
			$of(u"\u30b9\u30e9\u30d6\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of(u"\u30b9\u30ed\u30d0\u30ad\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u30b5\u30e2\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u5357\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of(u"\u5317\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of(u"\u30b5\u30fc\u30df\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u30eb\u30ec\u30fb\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u30a4\u30ca\u30ea\u30fb\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of(u"\u30b5\u30e2\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u30b9\u30b3\u30eb\u30c8\u30fb\u30b5\u30fc\u30df\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u30b7\u30e7\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of(u"\u30b7\u30e7\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of(u"\u30b7\u30f3\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u30bd\u30cb\u30f3\u30b1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u30bd\u30de\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u30bd\u30b0\u30c9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of(u"\u30bd\u30de\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of(u"\u30bd\u30f3\u30ac\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of(u"\u5357\u90e8\u30bd\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u30bb\u30ec\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u30b7\u30b9\u30ef\u30c6\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of(u"\u30ca\u30a4\u30eb\u30fb\u30b5\u30cf\u30e9\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of(u"\u30b7\u30b9\u30ef\u30c6\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u30bb\u30bd\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u30b9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u30b9\u30af\u30de\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of(u"\u30b9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u30b9\u30b9\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u30b7\u30e5\u30e1\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u30b9\u30a6\u30a7\u30fc\u30c7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u30b9\u30ef\u30d2\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("swa"_s),
			$of(u"\u30b9\u30ef\u30d2\u30ea\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of(u"\u30b9\u30a6\u30a7\u30fc\u30c7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u53e4\u5178\u30b7\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u30b7\u30ea\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u30bf\u30df\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of(u"\u30bf\u30d2\u30c1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of(u"\u30bf\u30a4\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of(u"\u30bf\u30df\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of(u"\u30bf\u30bf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u30c6\u30eb\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tel"_s),
			$of(u"\u30c6\u30eb\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u30c6\u30e0\u30cd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u30c6\u30ec\u30fc\u30ce\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u30c6\u30c8\u30a5\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u30bf\u30b8\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of(u"\u30bf\u30b8\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of(u"\u30bf\u30ac\u30ed\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u30bf\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of(u"\u30bf\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u30c6\u30a3\u30b0\u30ea\u30cb\u30a2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of(u"\u30c1\u30d9\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u30c6\u30a3\u30b0\u30ec\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of(u"\u30c6\u30a3\u30b0\u30ea\u30cb\u30e3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u30c6\u30a3\u30d6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"\u30c8\u30b1\u30e9\u30a6\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u30bf\u30ac\u30ed\u30b0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u30af\u30ea\u30f3\u30b4\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u30c8\u30ea\u30f3\u30ae\u30c3\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\u30bf\u30de\u30b7\u30a7\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u30c4\u30ef\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u30c8\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u30c8\u30f3\u30ac\u8a9e (\u30cb\u30a2\u30b5)"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of(u"\u30c8\u30f3\u30ac\u8a9e(\u30c8\u30f3\u30ac\u8af8\u5cf6)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u30c8\u30af\u30fb\u30d4\u30b7\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u30c8\u30eb\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u30c4\u30a9\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u30c1\u30e0\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tsn"_s),
			$of(u"\u30c4\u30ef\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tso"_s),
			$of(u"\u30c4\u30a9\u30f3\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u30bf\u30bf\u30fc\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u30c8\u30a5\u30f3\u30d6\u30ab\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of(u"\u30c8\u30a5\u30d4\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of(u"\u30c8\u30eb\u30b3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of(u"\u30a2\u30eb\u30bf\u30a4\u8af8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u30c4\u30d0\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u30c8\u30a5\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of(u"\u30c8\u30a6\u30a3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u30bf\u30d2\u30c1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u30c8\u30a5\u30f4\u30a1\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u30a6\u30c9\u30e0\u30eb\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u30a6\u30a4\u30b0\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"\u30a6\u30ac\u30ea\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of(u"\u30a6\u30a4\u30b0\u30eb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u30a6\u30f3\u30d6\u30f3\u30c9\u30a5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u975e\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u30a6\u30eb\u30c9\u30a5\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of(u"\u30a6\u30eb\u30c9\u30a5\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u30a6\u30ba\u30d9\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of(u"\u30a6\u30ba\u30d9\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u30f4\u30a1\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u30d9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ven"_s),
			$of(u"\u30d9\u30f3\u30c0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u30dc\u30e9\u30d4\u30e5\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of(u"\u30f4\u30a9\u30e9\u30d4\u30e5\u30fc\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u30dc\u30fc\u30c8\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u30ef\u30ed\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of(u"\u30ef\u30ab\u30b7\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u30ef\u30c3\u30e9\u30e2\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u30ef\u30e9\u30a4\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u30ef\u30b7\u30e7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of(u"\u30a6\u30a7\u30fc\u30eb\u30ba\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of(u"\u30bd\u30eb\u30d3\u30a2\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of(u"\u30ef\u30ed\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u30a6\u30a9\u30ed\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of(u"\u30a6\u30a9\u30ed\u30d5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u30ab\u30eb\u30e0\u30a4\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u30b3\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("xho"_s),
			$of(u"\u30b3\u30fc\u30b5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u30e4\u30aa\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u30e4\u30c3\u30d7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u30a4\u30c7\u30a3\u30c3\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of(u"\u30a4\u30c7\u30a3\u30c3\u30b7\u30e5\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u30e8\u30eb\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("yor"_s),
			$of(u"\u30e8\u30eb\u30d0\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("ypk"_s),
			$of(u"\u30e6\u30d4\u30c3\u30af\u8a9e\u65cf"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u30c1\u30ef\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u30b6\u30dd\u30c6\u30c3\u30af\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\u30d6\u30ea\u30b9\u30b7\u30f3\u30dc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u30bc\u30ca\u30ac\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u4e2d\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of(u"\u30c1\u30e5\u30ef\u30f3\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of(u"\u30b6\u30f3\u30c7\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u30ba\u30fc\u30eb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of(u"\u30ba\u30fc\u30eb\u30fc\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u30ba\u30cb\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u8a00\u8a9e\u5185\u5bb9\u306a\u3057"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u30b6\u30b6\u8a9e"_s)
		})
	});
}

LocaleNames_ja::LocaleNames_ja() {
}

$Class* LocaleNames_ja::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ja, name, initialize, &_LocaleNames_ja_ClassInfo_, allocate$LocaleNames_ja);
	return class$;
}

$Class* LocaleNames_ja::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun