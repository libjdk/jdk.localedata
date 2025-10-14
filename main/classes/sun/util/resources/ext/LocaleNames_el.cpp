#include <sun/util/resources/ext/LocaleNames_el.h>

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

$MethodInfo _LocaleNames_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_el::*)()>(&LocaleNames_el::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_el_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_el",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_el_MethodInfo_
};

$Object* allocate$LocaleNames_el($Class* clazz) {
	return $of($alloc(LocaleNames_el));
}

void LocaleNames_el::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_el::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0391\u03bd\u03b4\u03cc\u03c1\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0397\u03bd\u03c9\u03bc\u03ad\u03bd\u03b1 \u0391\u03c1\u03b1\u03b2\u03b9\u03ba\u03ac \u0395\u03bc\u03b9\u03c1\u03ac\u03c4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0391\u03c6\u03b3\u03b1\u03bd\u03b9\u03c3\u03c4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0391\u03bd\u03c4\u03af\u03b3\u03ba\u03bf\u03c5\u03b1 \u03ba\u03b1\u03b9 \u039c\u03c0\u03b1\u03c1\u03bc\u03c0\u03bf\u03cd\u03bd\u03c4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0391\u03bd\u03b3\u03ba\u03bf\u03c5\u03af\u03bb\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0391\u03bb\u03b2\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0391\u03c1\u03bc\u03b5\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"\u039f\u03bb\u03bb\u03b1\u03bd\u03b4\u03b9\u03ba\u03ad\u03c2 \u0391\u03bd\u03c4\u03af\u03bb\u03bb\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0391\u03bd\u03b3\u03ba\u03cc\u03bb\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0391\u03bd\u03c4\u03b1\u03c1\u03ba\u03c4\u03b9\u03ba\u03ae"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0391\u03c1\u03b3\u03b5\u03bd\u03c4\u03b9\u03bd\u03ae"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u0391\u03bc\u03b5\u03c1\u03b9\u03ba\u03b1\u03bd\u03b9\u03ba\u03ae \u03a3\u03b1\u03bc\u03cc\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0391\u03c5\u03c3\u03c4\u03c1\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0391\u03c5\u03c3\u03c4\u03c1\u03b1\u03bb\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0391\u03c1\u03bf\u03cd\u03bc\u03c0\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0391\u03b6\u03b5\u03c1\u03bc\u03c0\u03b1\u03ca\u03c4\u03b6\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0392\u03bf\u03c3\u03bd\u03af\u03b1 - \u0395\u03c1\u03b6\u03b5\u03b3\u03bf\u03b2\u03af\u03bd\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u039c\u03c0\u03b1\u03c1\u03bc\u03c0\u03ac\u03bd\u03c4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u039c\u03c0\u03b1\u03bd\u03b3\u03ba\u03bb\u03b1\u03bd\u03c4\u03ad\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0392\u03ad\u03bb\u03b3\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u039c\u03c0\u03bf\u03c5\u03c1\u03ba\u03af\u03bd\u03b1 \u03a6\u03ac\u03c3\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0392\u03bf\u03c5\u03bb\u03b3\u03b1\u03c1\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u039c\u03c0\u03b1\u03c7\u03c1\u03ad\u03b9\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u039c\u03c0\u03bf\u03c5\u03c1\u03bf\u03cd\u03bd\u03c4\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u039c\u03c0\u03ad\u03bd\u03b9\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0392\u03b5\u03c1\u03bc\u03bf\u03cd\u03b4\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u039c\u03c0\u03c1\u03bf\u03c5\u03bd\u03ad\u03b9 \u039d\u03c4\u03b1\u03c1\u03bf\u03c5\u03c3\u03b1\u03bb\u03ac\u03bc"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0392\u03bf\u03bb\u03b9\u03b2\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0392\u03c1\u03b1\u03b6\u03b9\u03bb\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u039c\u03c0\u03b1\u03c7\u03ac\u03bc\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u039c\u03c0\u03bf\u03c5\u03c4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03c2 \u039c\u03c0\u03bf\u03c5\u03b2\u03ad"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u039c\u03c0\u03bf\u03c4\u03c3\u03bf\u03c5\u03ac\u03bd\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u039b\u03b5\u03c5\u03ba\u03bf\u03c1\u03c9\u03c3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u039c\u03c0\u03b5\u03bb\u03af\u03b6"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u039a\u03b1\u03bd\u03b1\u03b4\u03ac\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u039a\u03cc\u03ba\u03bf\u03c2 (\u039a\u03ae\u03bb\u03b9\u03bd\u03b3\u03ba)"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u039a\u03bf\u03bd\u03b3\u03ba\u03cc, \u039b\u03b1\u03ca\u03ba\u03ae \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1 \u03c4\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u039a\u03b5\u03bd\u03c4\u03c1\u03bf\u03b1\u03c6\u03c1\u03b9\u03ba\u03b1\u03bd\u03b9\u03ba\u03ae \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u039a\u03bf\u03bd\u03b3\u03ba\u03cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0395\u03bb\u03b2\u03b5\u03c4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u0391\u03ba\u03c4\u03ae \u0395\u03bb\u03b5\u03c6\u03b1\u03bd\u03c4\u03cc\u03b4\u03bf\u03bd\u03c4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u039a\u03bf\u03c5\u03ba"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u03a7\u03b9\u03bb\u03ae"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u039a\u03b1\u03bc\u03b5\u03c1\u03bf\u03cd\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u039a\u03af\u03bd\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u039a\u03bf\u03bb\u03bf\u03bc\u03b2\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u039a\u03cc\u03c3\u03c4\u03b1 \u03a1\u03af\u03ba\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"\u03a3\u03b5\u03c1\u03b2\u03af\u03b1 \u03ba\u03b1\u03b9 \u039c\u03b1\u03c5\u03c1\u03bf\u03b2\u03bf\u03cd\u03bd\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u039a\u03bf\u03cd\u03b2\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u03a0\u03c1\u03ac\u03c3\u03b9\u03bd\u03bf\u03c5 \u0391\u03ba\u03c1\u03c9\u03c4\u03b7\u03c1\u03af\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03c2 \u03a7\u03c1\u03b9\u03c3\u03c4\u03bf\u03c5\u03b3\u03ad\u03bd\u03bd\u03c9\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u039a\u03cd\u03c0\u03c1\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u03a4\u03c3\u03b5\u03c7\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0393\u03b5\u03c1\u03bc\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u03a4\u03b6\u03b9\u03bc\u03c0\u03bf\u03c5\u03c4\u03af"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0394\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u039d\u03c4\u03bf\u03bc\u03af\u03bd\u03b9\u03ba\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0394\u03bf\u03bc\u03b9\u03bd\u03b9\u03ba\u03b1\u03bd\u03ae \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0391\u03bb\u03b3\u03b5\u03c1\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0399\u03c3\u03b7\u03bc\u03b5\u03c1\u03b9\u03bd\u03cc\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0395\u03c3\u03b8\u03bf\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0391\u03af\u03b3\u03c5\u03c0\u03c4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0394\u03c5\u03c4\u03b9\u03ba\u03ae \u03a3\u03b1\u03c7\u03ac\u03c1\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0395\u03c1\u03c5\u03b8\u03c1\u03b1\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0399\u03c3\u03c0\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0391\u03b9\u03b8\u03b9\u03bf\u03c0\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u03a6\u03b9\u03bd\u03bb\u03b1\u03bd\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u03a6\u03af\u03c4\u03b6\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u03a6\u03ce\u03ba\u03bb\u03b1\u03bd\u03c4"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u039c\u03b9\u03ba\u03c1\u03bf\u03bd\u03b7\u03c3\u03af\u03b1, \u039f\u03bc\u03cc\u03c3\u03c0\u03bf\u03bd\u03b4\u03b5\u03c2 \u03a0\u03bf\u03bb\u03b9\u03c4\u03b5\u03af\u03b5\u03c2 \u03c4\u03b7\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u03a6\u03b5\u03c1\u03cc\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0393\u03b1\u03bb\u03bb\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0393\u03ba\u03b1\u03bc\u03c0\u03cc\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0397\u03bd\u03c9\u03bc\u03ad\u03bd\u03bf \u0392\u03b1\u03c3\u03af\u03bb\u03b5\u03b9\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u0393\u03c1\u03b5\u03bd\u03ac\u03b4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0393\u03b5\u03c9\u03c1\u03b3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0393\u03b1\u03bb\u03bb\u03b9\u03ba\u03ae \u0393\u03bf\u03c5\u03b9\u03ac\u03bd\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0393\u03ba\u03ac\u03bd\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u0393\u03b9\u03b2\u03c1\u03b1\u03bb\u03c4\u03ac\u03c1"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u0393\u03c1\u03bf\u03b9\u03bb\u03b1\u03bd\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0393\u03ba\u03ac\u03bc\u03c0\u03b9\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0393\u03bf\u03c5\u03b9\u03bd\u03ad\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0393\u03bf\u03c5\u03b1\u03b4\u03b5\u03bb\u03bf\u03cd\u03c0\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u0399\u03c3\u03b7\u03bc\u03b5\u03c1\u03b9\u03bd\u03ae \u0393\u03bf\u03c5\u03b9\u03bd\u03ad\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0395\u03bb\u03bb\u03ac\u03b4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u039d\u03cc\u03c4\u03b9\u03b1 \u0393\u03b5\u03c9\u03c1\u03b3\u03af\u03b1 \u03ba\u03b1\u03b9 \u039d\u03ae\u03c3\u03bf\u03b9 \u039d\u03cc\u03c4\u03b9\u03b5\u03c2 \u03a3\u03ac\u03bd\u03c4\u03bf\u03c5\u03b9\u03c4\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0393\u03bf\u03c5\u03b1\u03c4\u03b5\u03bc\u03ac\u03bb\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u0393\u03ba\u03bf\u03c5\u03ac\u03bc"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0393\u03bf\u03c5\u03b9\u03bd\u03ad\u03b1-\u039c\u03c0\u03b9\u03c3\u03ac\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0393\u03bf\u03c5\u03b9\u03ac\u03bd\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u03a7\u03bf\u03bd\u03b3\u03ba \u039a\u03bf\u03bd\u03b3\u03ba, \u0395\u03b9\u03b4\u03b9\u03ba\u03ae \u0394\u03b9\u03bf\u03b9\u03ba\u03b7\u03c4\u03b9\u03ba\u03ae \u03a0\u03b5\u03c1\u03b9\u03c6\u03ad\u03c1\u03b5\u03b9\u03b1 \u03c4\u03b7\u03c2 \u039a\u03af\u03bd\u03b1\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u03a7\u03b5\u03c1\u03bd\u03c4 \u03ba\u03b1\u03b9 \u039c\u03b1\u03ba\u03bd\u03c4\u03cc\u03bd\u03b1\u03bb\u03bd\u03c4"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u039f\u03bd\u03b4\u03bf\u03cd\u03c1\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u039a\u03c1\u03bf\u03b1\u03c4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0391\u03ca\u03c4\u03ae"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u039f\u03c5\u03b3\u03b3\u03b1\u03c1\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0399\u03bd\u03b4\u03bf\u03bd\u03b7\u03c3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0399\u03c1\u03bb\u03b1\u03bd\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0399\u03c3\u03c1\u03b1\u03ae\u03bb"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0399\u03bd\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u0392\u03c1\u03b5\u03c4\u03b1\u03bd\u03b9\u03ba\u03ac \u0388\u03b4\u03ac\u03c6\u03b7 \u0399\u03bd\u03b4\u03b9\u03ba\u03bf\u03cd \u03a9\u03ba\u03b5\u03b1\u03bd\u03bf\u03cd"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0399\u03c1\u03ac\u03ba"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0399\u03c1\u03ac\u03bd, \u0399\u03c3\u03bb\u03b1\u03bc\u03b9\u03ba\u03ae \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1 \u03c4\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0399\u03c3\u03bb\u03b1\u03bd\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0399\u03c4\u03b1\u03bb\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u03a4\u03b6\u03b1\u03bc\u03ac\u03b9\u03ba\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0399\u03bf\u03c1\u03b4\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u0399\u03b1\u03c0\u03c9\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u039a\u03ad\u03bd\u03c5\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u039a\u03b9\u03c1\u03b3\u03b9\u03b6\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u039a\u03b1\u03bc\u03c0\u03cc\u03c4\u03b6\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u039a\u03b9\u03c1\u03b9\u03bc\u03c0\u03ac\u03c4\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u039a\u03bf\u03bc\u03cc\u03c1\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u03a3\u03b1\u03b9\u03bd\u03c4 \u039a\u03b9\u03c4\u03c2 \u03ba\u03b1\u03b9 \u039d\u03ad\u03b2\u03b9\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u039a\u03bf\u03c1\u03ad\u03b1, \u0392\u03cc\u03c1\u03b5\u03b9\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u039a\u03bf\u03c1\u03ad\u03b1, \u039d\u03cc\u03c4\u03b9\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u039a\u03bf\u03c5\u03b2\u03ad\u03b9\u03c4"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u039a\u03ad\u03b9\u03bc\u03b1\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u039a\u03b1\u03b6\u03b1\u03ba\u03c3\u03c4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u039b\u03b1\u03c4\u03b9\u03bd\u03b9\u03ba\u03ae \u0391\u03bc\u03b5\u03c1\u03b9\u03ba\u03ae"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u039b\u03af\u03b2\u03b1\u03bd\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u0391\u03b3\u03af\u03b1 \u039b\u03bf\u03c5\u03ba\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u039b\u03b9\u03c7\u03c4\u03b5\u03bd\u03c3\u03c4\u03ac\u03b9\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u03a3\u03c1\u03b9 \u039b\u03ac\u03bd\u03ba\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u039b\u03b9\u03b2\u03b5\u03c1\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u039b\u03b5\u03c3\u03cc\u03c4\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u039b\u03b9\u03b8\u03bf\u03c5\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u039b\u03bf\u03c5\u03be\u03b5\u03bc\u03b2\u03bf\u03cd\u03c1\u03b3\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u039b\u03b5\u03c4\u03bf\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u039b\u03b9\u03b2\u03cd\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u039c\u03b1\u03c1\u03cc\u03ba\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u039c\u03bf\u03bd\u03b1\u03ba\u03cc"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u039c\u03bf\u03bb\u03b4\u03b1\u03b2\u03af\u03b1, \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1 \u03c4\u03b7\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u039c\u03b1\u03b4\u03b1\u03b3\u03b1\u03c3\u03ba\u03ac\u03c1\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u039c\u03ac\u03c1\u03c3\u03b1\u03bb"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u03a0\u0393\u0394 \u039c\u03b1\u03ba\u03b5\u03b4\u03bf\u03bd\u03af\u03b1\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u039c\u03ac\u03bb\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u039c\u03b9\u03b1\u03bd\u03bc\u03ac\u03c1"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u039c\u03bf\u03b3\u03b3\u03bf\u03bb\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u039c\u03b1\u03ba\u03ac\u03bf, \u0395\u03b9\u03b4\u03b9\u03ba\u03ae \u0394\u03b9\u03bf\u03b9\u03ba\u03b7\u03c4\u03b9\u03ba\u03ae \u03a0\u03b5\u03c1\u03b9\u03c6\u03ad\u03c1\u03b5\u03b9\u03b1 \u03c4\u03b7\u03c2 \u039a\u03af\u03bd\u03b1\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u0392\u03cc\u03c1\u03b5\u03b9\u03b5\u03c2 \u039c\u03b1\u03c1\u03b9\u03ac\u03bd\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u039c\u03b1\u03c1\u03c4\u03b9\u03bd\u03af\u03ba\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u039c\u03b1\u03c5\u03c1\u03b9\u03c4\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u039c\u03bf\u03bd\u03c3\u03b5\u03c1\u03ac\u03c4"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u039c\u03ac\u03bb\u03c4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u039c\u03b1\u03c5\u03c1\u03af\u03ba\u03b9\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u039c\u03b1\u03bb\u03b4\u03af\u03b2\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u039c\u03b1\u03bb\u03ac\u03bf\u03c5\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u039c\u03b5\u03be\u03b9\u03ba\u03cc"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u039c\u03b1\u03bb\u03b1\u03b9\u03c3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u039c\u03bf\u03b6\u03b1\u03bc\u03b2\u03af\u03ba\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u039d\u03b1\u03bc\u03af\u03bc\u03c0\u03b9\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u039d\u03ad\u03b1 \u039a\u03b1\u03bb\u03b7\u03b4\u03bf\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u039d\u03af\u03b3\u03b7\u03c1"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03c2 \u039d\u03cc\u03c1\u03c6\u03bf\u03bb\u03ba"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u039d\u03b9\u03b3\u03b7\u03c1\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u039d\u03b9\u03ba\u03b1\u03c1\u03ac\u03b3\u03bf\u03c5\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u039f\u03bb\u03bb\u03b1\u03bd\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u039d\u03bf\u03c1\u03b2\u03b7\u03b3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u039d\u03b5\u03c0\u03ac\u03bb"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u039d\u03b1\u03bf\u03cd\u03c1\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u039d\u03b9\u03bf\u03cd\u03b5"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u039d\u03ad\u03b1 \u0396\u03b7\u03bb\u03b1\u03bd\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u039f\u03bc\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u03a0\u03b1\u03bd\u03b1\u03bc\u03ac\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u03a0\u03b5\u03c1\u03bf\u03cd"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u0393\u03b1\u03bb\u03bb\u03b9\u03ba\u03ae \u03a0\u03bf\u03bb\u03c5\u03bd\u03b7\u03c3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u03a0\u03b1\u03c0\u03bf\u03cd\u03b1 - \u039d\u03ad\u03b1 \u0393\u03bf\u03c5\u03b9\u03bd\u03ad\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u03a6\u03b9\u03bb\u03b9\u03c0\u03c0\u03af\u03bd\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u03a0\u03b1\u03ba\u03b9\u03c3\u03c4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u03a0\u03bf\u03bb\u03c9\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u03a3\u03b1\u03b9\u03bd\u03c4 \u03a0\u03b9\u03ad\u03c1 \u03ba\u03b1\u03b9 \u039c\u03b9\u03ba\u03b5\u03bb\u03cc\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u03a0\u03af\u03c4\u03ba\u03b5\u03c1\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u03a0\u03bf\u03c5\u03ad\u03c1\u03c4\u03bf \u03a1\u03af\u03ba\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u03a0\u03b1\u03bb\u03b1\u03b9\u03c3\u03c4\u03b9\u03bd\u03b9\u03b1\u03ba\u03ac \u0395\u03b4\u03ac\u03c6\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u03a0\u03bf\u03c1\u03c4\u03bf\u03b3\u03b1\u03bb\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u03a0\u03b1\u03bb\u03ac\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u03a0\u03b1\u03c1\u03b1\u03b3\u03bf\u03c5\u03ac\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u039a\u03b1\u03c4\u03ac\u03c1"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u03a1\u03b5\u03cb\u03bd\u03b9\u03cc\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u03a1\u03bf\u03c5\u03bc\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u03a1\u03c9\u03c3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u03a1\u03bf\u03c5\u03ac\u03bd\u03c4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u03a3\u03b1\u03bf\u03c5\u03b4\u03b9\u03ba\u03ae \u0391\u03c1\u03b1\u03b2\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u03a3\u03bf\u03bb\u03bf\u03bc\u03ce\u03bd\u03c4\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u03a3\u03b5\u03cb\u03c7\u03ad\u03bb\u03bb\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u03a3\u03bf\u03c5\u03b4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u03a3\u03bf\u03c5\u03b7\u03b4\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u03a3\u03b9\u03b3\u03ba\u03b1\u03c0\u03bf\u03cd\u03c1\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0391\u03b3\u03af\u03b1 \u0395\u03bb\u03ad\u03bd\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u03a3\u03bb\u03bf\u03b2\u03b5\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u03a3\u03b2\u03ac\u03bb\u03bc\u03c0\u03b1\u03c1 \u03ba\u03b1\u03b9 \u0393\u03b9\u03b1\u03bd \u039c\u03b1\u03b3\u03b9\u03ad\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u03a3\u03bb\u03bf\u03b2\u03b1\u03ba\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u03a3\u03b9\u03ad\u03c1\u03b1 \u039b\u03b5\u03cc\u03bd\u03b5"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u0386\u03b3\u03b9\u03bf\u03c2 \u039c\u03b1\u03c1\u03af\u03bd\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u03a3\u03b5\u03bd\u03b5\u03b3\u03ac\u03bb\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u03a3\u03bf\u03bc\u03b1\u03bb\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u03a3\u03bf\u03c5\u03c1\u03b9\u03bd\u03ac\u03bc"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u03a3\u03ac\u03bf \u03a4\u03bf\u03bc\u03ad \u03ba\u03b1\u03b9 \u03a0\u03c1\u03af\u03bd\u03c3\u03b9\u03c0\u03b5"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0395\u03bb \u03a3\u03b1\u03bb\u03b2\u03b1\u03b4\u03cc\u03c1"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u03a3\u03c5\u03c1\u03af\u03b1, \u0391\u03c1\u03b1\u03b2\u03b9\u03ba\u03ae \u0394\u03b7\u03bc\u03bf\u03ba\u03c1\u03b1\u03c4\u03af\u03b1 \u03c4\u03b7\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u03a3\u03bf\u03c5\u03b1\u03b6\u03b9\u03bb\u03ac\u03bd\u03b4\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u03a4\u03b5\u03c1\u03ba\u03c2 \u03ba\u03b1\u03b9 \u039a\u03ac\u03b9\u03ba\u03bf\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u03a4\u03c3\u03b1\u03bd\u03c4"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0393\u03b1\u03bb\u03bb\u03b9\u03ba\u03ac \u039d\u03cc\u03c4\u03b9\u03b1 \u0395\u03b4\u03ac\u03c6\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u03a4\u03cc\u03b3\u03ba\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u03a4\u03b1\u03ca\u03bb\u03ac\u03bd\u03b4\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u03a4\u03b1\u03c4\u03b6\u03b9\u03ba\u03b9\u03c3\u03c4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u03a4\u03bf\u03ba\u03b5\u03bb\u03ac\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u0391\u03bd\u03b1\u03c4\u03bf\u03bb\u03b9\u03ba\u03cc \u03a4\u03b9\u03bc\u03cc\u03c1"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u03a4\u03bf\u03c5\u03c1\u03ba\u03bc\u03b5\u03bd\u03b9\u03c3\u03c4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u03a4\u03c5\u03bd\u03b7\u03c3\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u03a4\u03cc\u03bd\u03b3\u03ba\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u03a4\u03bf\u03c5\u03c1\u03ba\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u03a4\u03c1\u03b9\u03bd\u03b9\u03b4\u03ac\u03b4 \u03ba\u03b1\u03b9 \u03a4\u03bf\u03bc\u03c0\u03ac\u03b3\u03ba\u03bf"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u03a4\u03bf\u03c5\u03b2\u03b1\u03bb\u03bf\u03cd"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u03a4\u03b1\u03ca\u03b2\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u03a4\u03b1\u03bd\u03b6\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u039f\u03c5\u03ba\u03c1\u03b1\u03bd\u03af\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u039f\u03c5\u03b3\u03ba\u03ac\u03bd\u03c4\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u0391\u03c0\u03bf\u03bc\u03b1\u03ba\u03c1\u03c5\u03c3\u03bc\u03ad\u03bd\u03b5\u03c2 \u039d\u03b7\u03c3\u03af\u03b4\u03b5\u03c2 \u03c4\u03c9\u03bd \u0397\u03bd\u03c9\u03bc\u03ad\u03bd\u03c9\u03bd \u03a0\u03bf\u03bb\u03b9\u03c4\u03b5\u03b9\u03ce\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0397\u03bd\u03c9\u03bc\u03ad\u03bd\u03b5\u03c2 \u03a0\u03bf\u03bb\u03b9\u03c4\u03b5\u03af\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u039f\u03c5\u03c1\u03bf\u03c5\u03b3\u03bf\u03c5\u03ac\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u039f\u03c5\u03b6\u03bc\u03c0\u03b5\u03ba\u03b9\u03c3\u03c4\u03ac\u03bd"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u0391\u03b3\u03af\u03b1 \u0388\u03b4\u03c1\u03b1 (\u0392\u03b1\u03c4\u03b9\u03ba\u03b1\u03bd\u03cc)"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0386\u03b3\u03b9\u03bf\u03c2 \u0392\u03b9\u03ba\u03ad\u03bd\u03c4\u03b9\u03bf\u03c2 \u03ba\u03b1\u03b9 \u0393\u03c1\u03b5\u03bd\u03b1\u03b4\u03af\u03bd\u03b5\u03c2"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0392\u03b5\u03bd\u03b5\u03b6\u03bf\u03c5\u03ad\u03bb\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0392\u03c1\u03b5\u03c4\u03b1\u03bd\u03b9\u03ba\u03ad\u03c2 \u03a0\u03b1\u03c1\u03b8\u03ad\u03bd\u03bf\u03b9 \u039d\u03ae\u03c3\u03bf\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0391\u03bc\u03b5\u03c1\u03b9\u03ba\u03b1\u03bd\u03b9\u03ba\u03ad\u03c2 \u03a0\u03b1\u03c1\u03b8\u03ad\u03bd\u03bf\u03b9 \u039d\u03ae\u03c3\u03bf\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u0392\u03b9\u03b5\u03c4\u03bd\u03ac\u03bc"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u0392\u03b1\u03bd\u03bf\u03c5\u03ac\u03c4\u03bf\u03c5"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u039d\u03ae\u03c3\u03bf\u03b9 \u039f\u03c5\u03b1\u03bb\u03bb\u03af\u03c2 \u03ba\u03b1\u03b9 \u03a6\u03bf\u03c5\u03c4\u03bf\u03c5\u03bd\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u03a3\u03b1\u03bc\u03cc\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u03a5\u03b5\u03bc\u03ad\u03bd\u03b7"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u039c\u03b1\u03b3\u03b9\u03cc\u03c4"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u039d\u03cc\u03c4\u03b9\u03b1 \u0391\u03c6\u03c1\u03b9\u03ba\u03ae"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0396\u03ac\u03bc\u03c0\u03b9\u03b1"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0396\u03b9\u03bc\u03c0\u03ac\u03bc\u03c0\u03bf\u03c5\u03b5"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0391\u03c1\u03b1\u03b2\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u039b\u03b5\u03c5\u03ba\u03bf\u03c1\u03c9\u03c3\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0392\u03bf\u03c5\u03bb\u03b3\u03b1\u03c1\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u039c\u03c0\u03b5\u03bd\u03b3\u03ba\u03ac\u03bb\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0398\u03b9\u03b2\u03b5\u03c4\u03b9\u03b1\u03bd\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0392\u03bf\u03c3\u03bd\u03b9\u03b1\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u039a\u03b1\u03c4\u03b1\u03bb\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u039a\u03bf\u03c1\u03c3\u03b9\u03ba\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u03a4\u03c3\u03b5\u03c7\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u039f\u03c5\u03b1\u03bb\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0394\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u0393\u03b5\u03c1\u03bc\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0395\u03bb\u03bb\u03b7\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0391\u03b3\u03b3\u03bb\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0399\u03c3\u03c0\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0395\u03c3\u03b8\u03bf\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0392\u03b1\u03c3\u03ba\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u03a0\u03b5\u03c1\u03c3\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u03a6\u03b9\u03bd\u03bb\u03b1\u03bd\u03b4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0393\u03b1\u03bb\u03bb\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0399\u03c1\u03bb\u03b1\u03bd\u03b4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u03a3\u03ba\u03c9\u03c4\u03b9\u03ba\u03ac \u039a\u03b5\u03bb\u03c4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0395\u03b2\u03c1\u03b1\u03ca\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u03a7\u03af\u03bd\u03c4\u03b9"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u039a\u03c1\u03bf\u03b1\u03c4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u039f\u03c5\u03b3\u03b3\u03c1\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0391\u03c1\u03bc\u03b5\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0399\u03bd\u03b4\u03bf\u03bd\u03b7\u03c3\u03b9\u03b1\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"\u0399\u03bd\u03b4\u03bf\u03bd\u03b7\u03c3\u03b9\u03b1\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0399\u03c3\u03bb\u03b1\u03bd\u03b4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0399\u03c4\u03b1\u03bb\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"\u0395\u03b2\u03c1\u03b1\u03ca\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u0399\u03b1\u03c0\u03c9\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"\u0399\u03bf\u03c5\u03b4\u03b1\u03ca\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0393\u03b5\u03c9\u03c1\u03b3\u03b9\u03b1\u03bd\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u039a\u03bf\u03c1\u03b5\u03b1\u03c4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u039b\u03b1\u03c4\u03b9\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u039b\u03b9\u03b8\u03bf\u03c5\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u039b\u03b5\u03c4\u03bf\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u03a3\u03bb\u03b1\u03b2\u03bf\u03bc\u03b1\u03ba\u03b5\u03b4\u03bf\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u039c\u03bf\u03b3\u03b3\u03bf\u03bb\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"\u039c\u03bf\u03bb\u03b4\u03b1\u03b2\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u039c\u03b1\u03bb\u03c4\u03b5\u03b6\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u039f\u03bb\u03bb\u03b1\u03bd\u03b4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u039d\u03bf\u03c1\u03b2\u03b7\u03b3\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u03a0\u03bf\u03bb\u03c9\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u03a0\u03bf\u03c1\u03c4\u03bf\u03b3\u03b1\u03bb\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u03a1\u03bf\u03c5\u03bc\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u03a1\u03c9\u03c3\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u03a3\u03bb\u03bf\u03b2\u03b1\u03ba\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u03a3\u03bb\u03bf\u03b2\u03b5\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0391\u03bb\u03b2\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u03a3\u03b5\u03c1\u03b2\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u03a3\u03bf\u03c5\u03b7\u03b4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u03a4\u03b1\u03ca\u03bb\u03b1\u03bd\u03b4\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u03a4\u03bf\u03c5\u03c1\u03ba\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u039f\u03c5\u03ba\u03c1\u03b1\u03bd\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0392\u03b9\u03b5\u03c4\u03bd\u03b1\u03bc\u03b5\u03b6\u03b9\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0399\u03bf\u03c5\u03b4\u03b1\u03ca\u03ba\u03ac"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u039a\u03b9\u03bd\u03b5\u03b6\u03b9\u03ba\u03ac"_s)
		})
	});
}

LocaleNames_el::LocaleNames_el() {
}

$Class* LocaleNames_el::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_el, name, initialize, &_LocaleNames_el_ClassInfo_, allocate$LocaleNames_el);
	return class$;
}

$Class* LocaleNames_el::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun