#include <sun/util/resources/ext/LocaleNames_th.h>

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

$MethodInfo _LocaleNames_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_th::*)()>(&LocaleNames_th::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_th_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_th",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_th_MethodInfo_
};

$Object* allocate$LocaleNames_th($Class* clazz) {
	return $of($alloc(LocaleNames_th));
}

void LocaleNames_th::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_th::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0e2d\u0e31\u0e19\u0e14\u0e2d\u0e23\u0e4c\u0e23\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0e2a\u0e2b\u0e23\u0e31\u0e10\u0e2d\u0e32\u0e2b\u0e23\u0e31\u0e1a\u0e40\u0e2d\u0e21\u0e34\u0e40\u0e23\u0e15\u0e2a\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0e2d\u0e31\u0e1f\u0e01\u0e32\u0e19\u0e34\u0e2a\u0e16\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0e2d\u0e31\u0e19\u0e01\u0e34\u0e25\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0e41\u0e2d\u0e25\u0e40\u0e1a\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0e2d\u0e32\u0e23\u0e4c\u0e21\u0e35\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"\u0e40\u0e19\u0e40\u0e18\u0e2d\u0e23\u0e4c\u0e41\u0e25\u0e19\u0e14\u0e4c\u0e41\u0e2d\u0e19\u0e17\u0e34\u0e25\u0e25\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0e2d\u0e31\u0e19\u0e42\u0e01\u0e25\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0e2d\u0e32\u0e23\u0e4c\u0e40\u0e08\u0e19\u0e15\u0e34\u0e19\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0e2d\u0e2d\u0e2a\u0e40\u0e15\u0e23\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0e2d\u0e2d\u0e2a\u0e40\u0e15\u0e23\u0e40\u0e25\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0e2d\u0e32\u0e23\u0e39\u0e1a\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0e2d\u0e32\u0e40\u0e0b\u0e2d\u0e23\u0e4c\u0e44\u0e1a\u0e08\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0e1a\u0e2d\u0e2a\u0e40\u0e19\u0e35\u0e22 \u0e41\u0e25\u0e30 \u0e40\u0e2e\u0e34\u0e23\u0e4c\u0e0b\u0e42\u0e01\u0e27\u0e34\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u0e1a\u0e32\u0e23\u0e4c\u0e1a\u0e32\u0e14\u0e2d\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u0e1a\u0e31\u0e07\u0e04\u0e25\u0e32\u0e40\u0e17\u0e28"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0e40\u0e1a\u0e25\u0e40\u0e22\u0e35\u0e48\u0e22\u0e21"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u0e40\u0e1a\u0e2d\u0e23\u0e4c\u0e01\u0e34\u0e19\u0e32\u0e1f\u0e32\u0e42\u0e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0e1a\u0e31\u0e25\u0e41\u0e01\u0e40\u0e23\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0e1a\u0e32\u0e2b\u0e4c\u0e40\u0e23\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u0e1a\u0e39\u0e23\u0e31\u0e19\u0e14\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u0e40\u0e1a\u0e19\u0e34\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0e40\u0e1a\u0e2d\u0e23\u0e4c\u0e21\u0e34\u0e27\u0e14\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0e1a\u0e23\u0e39\u0e44\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0e42\u0e1a\u0e25\u0e34\u0e40\u0e27\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0e1a\u0e23\u0e32\u0e0b\u0e34\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0e1a\u0e32\u0e2e\u0e32\u0e21\u0e32\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u0e20\u0e39\u0e10\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0e1a\u0e2d\u0e15\u0e2a\u0e27\u0e32\u0e19\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0e40\u0e1a\u0e25\u0e25\u0e32\u0e23\u0e31\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0e40\u0e1a\u0e25\u0e34\u0e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u0e41\u0e04\u0e19\u0e32\u0e14\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0e2a\u0e32\u0e18\u0e32\u0e23\u0e13\u0e23\u0e31\u0e10\u0e41\u0e2d\u0e1f\u0e23\u0e34\u0e01\u0e32\u0e01\u0e25\u0e32\u0e07"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u0e04\u0e2d\u0e07\u0e42\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0e2a\u0e27\u0e34\u0e2a\u0e40\u0e0b\u0e2d\u0e23\u0e4c\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u0e1d\u0e31\u0e48\u0e07\u0e17\u0e30\u0e40\u0e25\u0e44\u0e2d\u0e27\u0e2d\u0e23\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0e0a\u0e34\u0e25\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u0e04\u0e32\u0e40\u0e21\u0e23\u0e39\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u0e08\u0e35\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u0e42\u0e04\u0e25\u0e31\u0e21\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u0e04\u0e2d\u0e2a\u0e15\u0e32\u0e23\u0e34\u0e01\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u0e04\u0e34\u0e27\u0e1a\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u0e40\u0e04\u0e1e\u0e40\u0e27\u0e2d\u0e23\u0e4c\u0e14"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u0e44\u0e0b\u0e1b\u0e23\u0e31\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0e2a\u0e32\u0e18\u0e32\u0e23\u0e13\u0e23\u0e31\u0e10\u0e40\u0e0a\u0e47\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0e40\u0e22\u0e2d\u0e23\u0e21\u0e19\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u0e14\u0e34\u0e42\u0e1a\u0e15\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0e40\u0e14\u0e19\u0e21\u0e32\u0e23\u0e4c\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u0e42\u0e14\u0e21\u0e34\u0e19\u0e34\u0e01\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0e2a\u0e32\u0e18\u0e32\u0e23\u0e13\u0e23\u0e31\u0e10\u0e42\u0e14\u0e21\u0e34\u0e19\u0e34\u0e01\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0e41\u0e2d\u0e25\u0e08\u0e35\u0e40\u0e23\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0e40\u0e2d\u0e01\u0e27\u0e32\u0e14\u0e2d\u0e23\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0e40\u0e2d\u0e2a\u0e42\u0e15\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0e2d\u0e35\u0e22\u0e34\u0e1b\u0e15\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0e0b\u0e32\u0e2e\u0e32\u0e23\u0e48\u0e32\u0e15\u0e30\u0e27\u0e31\u0e19\u0e15\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0e2d\u0e34\u0e23\u0e34\u0e17\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0e2a\u0e40\u0e1b\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0e40\u0e2d\u0e18\u0e34\u0e42\u0e2d\u0e40\u0e1b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0e1f\u0e34\u0e19\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u0e1f\u0e34\u0e08\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u0e44\u0e21\u0e42\u0e04\u0e23\u0e19\u0e34\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0e1d\u0e23\u0e31\u0e48\u0e07\u0e40\u0e28\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0e01\u0e32\u0e1a\u0e2d\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0e2a\u0e2b\u0e23\u0e32\u0e0a\u0e2d\u0e32\u0e13\u0e32\u0e08\u0e31\u0e01\u0e23"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0e08\u0e2d\u0e23\u0e4c\u0e40\u0e08\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0e40\u0e1f\u0e23\u0e47\u0e19\u0e0a\u0e01\u0e34\u0e27\u0e19\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0e01\u0e32\u0e19\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0e41\u0e01\u0e21\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0e01\u0e34\u0e27\u0e19\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0e01\u0e31\u0e27\u0e40\u0e14\u0e2d\u0e25\u0e39\u0e1b"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u0e40\u0e2d\u0e04\u0e27\u0e32\u0e42\u0e17\u0e40\u0e23\u0e35\u0e22\u0e25\u0e01\u0e34\u0e19\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0e01\u0e23\u0e35\u0e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0e01\u0e31\u0e27\u0e40\u0e15\u0e21\u0e32\u0e25\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0e01\u0e34\u0e27\u0e19\u0e35-\u0e1a\u0e34\u0e2a\u0e42\u0e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0e01\u0e39\u0e22\u0e32\u0e19\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0e2e\u0e48\u0e2d\u0e07\u0e01\u0e07"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0e2e\u0e2d\u0e19\u0e14\u0e39\u0e23\u0e31\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0e42\u0e04\u0e23\u0e40\u0e2d\u0e40\u0e0a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0e44\u0e2e\u0e15\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u0e2e\u0e31\u0e07\u0e01\u0e32\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0e2d\u0e34\u0e19\u0e42\u0e14\u0e19\u0e35\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0e44\u0e2d\u0e23\u0e4c\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0e2d\u0e34\u0e2a\u0e23\u0e32\u0e40\u0e2d\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0e2d\u0e34\u0e19\u0e40\u0e14\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0e2d\u0e34\u0e23\u0e31\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0e2d\u0e34\u0e2b\u0e23\u0e48\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0e44\u0e2d\u0e0b\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0e2d\u0e34\u0e15\u0e32\u0e25\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u0e08\u0e32\u0e44\u0e21\u0e01\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0e08\u0e2d\u0e23\u0e4c\u0e41\u0e14\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u0e0d\u0e35\u0e48\u0e1b\u0e38\u0e48\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u0e40\u0e04\u0e19\u0e22\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u0e40\u0e04\u0e2d\u0e23\u0e4c\u0e01\u0e34\u0e2a\u0e16\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u0e01\u0e31\u0e21\u0e1e\u0e39\u0e0a\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u0e04\u0e34\u0e23\u0e35\u0e1a\u0e32\u0e15\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u0e42\u0e04\u0e42\u0e21\u0e23\u0e2d\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0e40\u0e01\u0e32\u0e2b\u0e25\u0e35\u0e40\u0e2b\u0e19\u0e37\u0e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u0e40\u0e01\u0e32\u0e2b\u0e25\u0e35\u0e43\u0e15\u0e49"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u0e04\u0e39\u0e40\u0e27\u0e15"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u0e04\u0e32\u0e0b\u0e31\u0e04\u0e2a\u0e16\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u0e25\u0e32\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u0e40\u0e25\u0e1a\u0e32\u0e19\u0e2d\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u0e44\u0e25\u0e40\u0e17\u0e19\u0e2a\u0e44\u0e15\u0e19\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0e28\u0e23\u0e35\u0e25\u0e31\u0e07\u0e01\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u0e25\u0e34\u0e40\u0e1a\u0e2d\u0e23\u0e4c\u0e40\u0e25\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u0e40\u0e25\u0e42\u0e0b\u0e42\u0e17"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u0e25\u0e34\u0e40\u0e17\u0e2d\u0e23\u0e4c\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u0e25\u0e31\u0e01\u0e0b\u0e4c\u0e40\u0e0b\u0e21\u0e40\u0e1a\u0e2d\u0e23\u0e4c\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u0e25\u0e32\u0e15\u0e40\u0e27\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u0e25\u0e34\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u0e42\u0e21\u0e23\u0e2d\u0e04\u0e42\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u0e42\u0e21\u0e19\u0e32\u0e42\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u0e42\u0e21\u0e25\u0e42\u0e14\u0e27\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u0e21\u0e32\u0e14\u0e32\u0e01\u0e32\u0e2a\u0e01\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u0e41\u0e21\u0e0b\u0e35\u0e42\u0e14\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u0e21\u0e32\u0e25\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u0e2a\u0e2b\u0e20\u0e32\u0e1e\u0e1e\u0e21\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u0e21\u0e2d\u0e07\u0e42\u0e01\u0e40\u0e25\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u0e21\u0e32\u0e23\u0e4c\u0e15\u0e34\u0e19\u0e34\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u0e21\u0e2d\u0e23\u0e34\u0e17\u0e32\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u0e21\u0e2d\u0e19\u0e15\u0e4c\u0e40\u0e0b\u0e2d\u0e23\u0e32\u0e15"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u0e21\u0e31\u0e25\u0e15\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u0e21\u0e2d\u0e23\u0e34\u0e40\u0e15\u0e35\u0e22\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u0e41\u0e21\u0e47\u0e01\u0e0b\u0e34\u0e42\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u0e21\u0e32\u0e40\u0e25\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u0e42\u0e21\u0e41\u0e0b\u0e21\u0e1a\u0e34\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u0e19\u0e32\u0e21\u0e34\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u0e19\u0e34\u0e27\u0e04\u0e32\u0e25\u0e34\u0e42\u0e14\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u0e44\u0e19\u0e40\u0e08\u0e2d\u0e23\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u0e44\u0e19\u0e08\u0e35\u0e40\u0e23\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u0e19\u0e34\u0e04\u0e32\u0e23\u0e32\u0e01\u0e31\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u0e40\u0e19\u0e40\u0e18\u0e2d\u0e23\u0e4c\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u0e19\u0e2d\u0e23\u0e4c\u0e40\u0e27\u0e22\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u0e40\u0e19\u0e1b\u0e32\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u0e19\u0e35\u0e22\u0e39"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u0e19\u0e34\u0e27\u0e0b\u0e35\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0e42\u0e2d\u0e21\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u0e1b\u0e32\u0e19\u0e32\u0e21\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u0e40\u0e1b\u0e23\u0e39"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u0e40\u0e1f\u0e23\u0e47\u0e19\u0e0a\u0e42\u0e1e\u0e25\u0e34\u0e19\u0e35\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u0e1b\u0e32\u0e1b\u0e31\u0e27\u0e19\u0e34\u0e27\u0e01\u0e35\u0e19\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u0e1f\u0e34\u0e25\u0e34\u0e1b\u0e1b\u0e34\u0e19\u0e2a\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u0e1b\u0e32\u0e01\u0e35\u0e2a\u0e16\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u0e42\u0e1b\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u0e40\u0e1b\u0e2d\u0e23\u0e4c\u0e42\u0e15\u0e23\u0e34\u0e42\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u0e42\u0e1b\u0e15\u0e38\u0e01\u0e31\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u0e1b\u0e32\u0e23\u0e32\u0e01\u0e27\u0e31\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u0e01\u0e32\u0e15\u0e32\u0e23\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0e23\u0e39\u0e40\u0e21\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0e23\u0e31\u0e2a\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u0e23\u0e32\u0e27\u0e31\u0e25\u0e14\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0e0b\u0e32\u0e2d\u0e38\u0e14\u0e34\u0e2d\u0e32\u0e23\u0e30\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u0e40\u0e0b\u0e22\u0e4c\u0e41\u0e0a\u0e25\u0e25\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0e0b\u0e39\u0e14\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0e2a\u0e27\u0e35\u0e40\u0e14\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0e2a\u0e34\u0e07\u0e04\u0e42\u0e1b\u0e23\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0e2a\u0e42\u0e25\u0e27\u0e34\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0e2a\u0e42\u0e25\u0e27\u0e32\u0e40\u0e01\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0e40\u0e0b\u0e35\u0e22\u0e23\u0e4c\u0e23\u0e48\u0e32\u0e25\u0e35\u0e2d\u0e2d\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0e0b\u0e34\u0e19\u0e35\u0e01\u0e31\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0e42\u0e0b\u0e21\u0e32\u0e40\u0e25\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("SP"_s),
			$of(u"\u0e40\u0e0b\u0e2d\u0e23\u0e4c\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0e0b\u0e39\u0e23\u0e34\u0e19\u0e32\u0e21\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0e40\u0e2d\u0e25\u0e0b\u0e32\u0e27\u0e32\u0e14\u0e2d\u0e23\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0e0b\u0e35\u0e40\u0e23\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0e2a\u0e27\u0e32\u0e0b\u0e34\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u0e0a\u0e32\u0e14"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0e2d\u0e32\u0e13\u0e32\u0e40\u0e02\u0e15\u0e17\u0e32\u0e07\u0e43\u0e15\u0e49\u0e02\u0e2d\u0e07\u0e1d\u0e23\u0e31\u0e48\u0e07\u0e40\u0e28\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u0e42\u0e15\u0e42\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u0e1b\u0e23\u0e30\u0e40\u0e17\u0e28\u0e44\u0e17\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u0e17\u0e32\u0e08\u0e34\u0e01\u0e34\u0e2a\u0e16\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u0e42\u0e17\u0e01\u0e34\u0e42\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u0e40\u0e15\u0e34\u0e23\u0e4c\u0e01\u0e40\u0e21\u0e19\u0e34\u0e2a\u0e16\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u0e15\u0e39\u0e19\u0e34\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u0e17\u0e2d\u0e07\u0e01\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("TP"_s),
			$of(u"\u0e15\u0e34\u0e21\u0e2d\u0e23\u0e4c\u0e15\u0e30\u0e27\u0e31\u0e19\u0e2d\u0e2d\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u0e15\u0e38\u0e23\u0e01\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u0e17\u0e23\u0e34\u0e19\u0e34\u0e41\u0e14\u0e14 \u0e41\u0e25\u0e30\u0e42\u0e17\u0e1a\u0e32\u0e42\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u0e44\u0e15\u0e49\u0e2b\u0e27\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u0e17\u0e32\u0e19\u0e0b\u0e32\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0e22\u0e39\u0e40\u0e04\u0e23\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0e2d\u0e39\u0e01\u0e32\u0e19\u0e14\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0e2a\u0e2b\u0e23\u0e31\u0e10\u0e2d\u0e40\u0e21\u0e23\u0e34\u0e01\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0e2d\u0e38\u0e23\u0e39\u0e01\u0e27\u0e31\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0e2d\u0e38\u0e0b\u0e40\u0e1a\u0e01\u0e34\u0e2a\u0e16\u0e32\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u0e27\u0e32\u0e15\u0e34\u0e01\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0e40\u0e27\u0e40\u0e19\u0e0b\u0e39\u0e40\u0e2d\u0e25\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0e1a\u0e23\u0e34\u0e17\u0e34\u0e0a\u0e40\u0e27\u0e2d\u0e23\u0e4c\u0e08\u0e34\u0e19\u0e44\u0e2d\u0e2a\u0e4c\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0e22\u0e39\u0e40\u0e2d\u0e2a\u0e40\u0e27\u0e2d\u0e23\u0e4c\u0e08\u0e34\u0e19\u0e44\u0e2d\u0e2a\u0e4c\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u0e40\u0e27\u0e35\u0e22\u0e14\u0e19\u0e32\u0e21"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u0e27\u0e32\u0e19\u0e31\u0e27\u0e15\u0e39"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0e40\u0e22\u0e40\u0e21\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u0e21\u0e32\u0e22\u0e2d\u0e15"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u0e41\u0e2d\u0e1f\u0e23\u0e34\u0e01\u0e32\u0e43\u0e15\u0e49"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0e41\u0e0b\u0e21\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("ZR"_s),
			$of(u"\u0e41\u0e0b\u0e23\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0e0b\u0e34\u0e21\u0e1a\u0e32\u0e1a\u0e40\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0e2d\u0e32\u0e1f\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0e41\u0e2d\u0e1a\u0e01\u0e32\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0e41\u0e2d\u0e1f\u0e23\u0e34\u0e01\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0e2d\u0e31\u0e21\u0e2e\u0e32\u0e23\u0e34\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0e2d\u0e32\u0e23\u0e30\u0e1a\u0e34\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0e2d\u0e31\u0e2a\u0e2a\u0e31\u0e21\u0e21\u0e34\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u0e44\u0e2d\u0e21\u0e32\u0e23\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0e2d\u0e32\u0e40\u0e0b\u0e2d\u0e23\u0e4c\u0e44\u0e1a\u0e08\u0e32\u0e19\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0e1a\u0e32\u0e2a\u0e0a\u0e4c\u0e01\u0e35\u0e23\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0e1a\u0e32\u0e22\u0e42\u0e25\u0e23\u0e31\u0e2a\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0e1a\u0e31\u0e25\u0e41\u0e01\u0e40\u0e23\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"\u0e1a\u0e34\u0e2e\u0e32\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u0e1a\u0e34\u0e2a\u0e25\u0e32\u0e21\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0e40\u0e1a\u0e19\u0e01\u0e32\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0e17\u0e34\u0e40\u0e1a\u0e15"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0e1a\u0e23\u0e35\u0e17\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u0e41\u0e04\u0e15\u0e32\u0e41\u0e25\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u0e04\u0e2d\u0e23\u0e4c\u0e0b\u0e34\u0e01\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0e40\u0e0a\u0e47\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u0e40\u0e27\u0e25\u0e2a\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0e40\u0e14\u0e19\u0e21\u0e32\u0e23\u0e4c\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u0e40\u0e22\u0e2d\u0e23\u0e21\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0e20\u0e39\u0e10\u0e32\u0e19\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0e01\u0e23\u0e35\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0e2d\u0e31\u0e07\u0e01\u0e24\u0e29"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0e40\u0e2d\u0e2a\u0e40\u0e1b\u0e2d\u0e23\u0e31\u0e19\u0e42\u0e15"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0e2a\u0e40\u0e1b\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0e40\u0e2d\u0e2a\u0e42\u0e15\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0e41\u0e1a\u0e2a\u0e01\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u0e40\u0e1b\u0e2d\u0e23\u0e4c\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0e1f\u0e34\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0e1f\u0e34\u0e08\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0e1f\u0e32\u0e42\u0e23\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0e1d\u0e23\u0e31\u0e48\u0e07\u0e40\u0e28\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u0e1f\u0e23\u0e35\u0e2a\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0e44\u0e2d\u0e23\u0e34\u0e0a"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0e2a\u0e01\u0e47\u0e2d\u0e15\u0e2a\u0e4c\u0e40\u0e01\u0e25\u0e34\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u0e01\u0e30\u0e25\u0e35\u0e40\u0e0a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0e01\u0e31\u0e27\u0e23\u0e32\u0e19\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u0e01\u0e39\u0e08\u0e32\u0e23\u0e32\u0e15\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u0e42\u0e2e\u0e0b\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0e22\u0e34\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0e2e\u0e35\u0e19\u0e14\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0e42\u0e04\u0e23\u0e40\u0e2d\u0e40\u0e17\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0e2e\u0e31\u0e07\u0e01\u0e32\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0e2d\u0e32\u0e23\u0e4c\u0e21\u0e35\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u0e2d\u0e34\u0e19\u0e40\u0e15\u0e2d\u0e23\u0e4c\u0e25\u0e34\u0e07\u0e01\u0e27\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0e2d\u0e34\u0e19\u0e42\u0e14\u0e19\u0e35\u0e40\u0e0a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u0e2d\u0e34\u0e19\u0e40\u0e15\u0e2d\u0e23\u0e4c\u0e25\u0e34\u0e07\u0e04\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u0e44\u0e2d\u0e19\u0e39\u0e40\u0e1b\u0e35\u0e22\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"\u0e2d\u0e34\u0e19\u0e42\u0e14\u0e19\u0e35\u0e40\u0e0a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0e44\u0e2d\u0e0b\u0e4c\u0e41\u0e25\u0e19\u0e14\u0e4c\u0e14\u0e34\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0e2d\u0e34\u0e15\u0e32\u0e25\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0e44\u0e2d\u0e19\u0e38\u0e01\u0e15\u0e34\u0e15\u0e31\u0e17"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"\u0e22\u0e34\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u0e0d\u0e35\u0e48\u0e1b\u0e38\u0e48\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"\u0e22\u0e35\u0e14\u0e34\u0e0a"_s)
		}),
		$$new($ObjectArray, {
			$of("jw"_s),
			$of(u"\u0e0a\u0e27\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0e08\u0e2d\u0e23\u0e4c\u0e40\u0e08\u0e35\u0e22\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u0e04\u0e32\u0e0b\u0e31\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u0e01\u0e23\u0e35\u0e19\u0e41\u0e25\u0e19\u0e14\u0e4c\u0e14\u0e34\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u0e40\u0e02\u0e21\u0e23"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u0e01\u0e32\u0e19\u0e32\u0e14\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u0e40\u0e01\u0e32\u0e2b\u0e25\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u0e04\u0e31\u0e0a\u0e21\u0e35\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u0e40\u0e04\u0e34\u0e14"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u0e40\u0e04\u0e2d\u0e23\u0e4c\u0e01\u0e34\u0e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u0e25\u0e30\u0e15\u0e34\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u0e25\u0e34\u0e07\u0e01\u0e32\u0e25\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u0e25\u0e32\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u0e25\u0e34\u0e18\u0e31\u0e27\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u0e41\u0e25\u0e15\u0e40\u0e27\u0e35\u0e22 (\u0e40\u0e25\u0e17\u0e17\u0e34\u0e2a\u0e0a\u0e4c)"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u0e21\u0e32\u0e25\u0e32\u0e01\u0e32\u0e0b\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u0e40\u0e21\u0e32\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u0e41\u0e21\u0e0b\u0e35\u0e42\u0e14\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u0e41\u0e21\u0e25\u0e30\u0e22\u0e32\u0e25\u0e31\u0e21"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u0e21\u0e2d\u0e07\u0e42\u0e01\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"\u0e42\u0e21\u0e14\u0e32\u0e40\u0e27\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u0e21\u0e32\u0e23\u0e32\u0e17\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u0e21\u0e25\u0e32\u0e22\u0e39"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u0e21\u0e2d\u0e25\u0e15\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0e1e\u0e21\u0e48\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u0e19\u0e2d\u0e23\u0e39"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u0e40\u0e19\u0e1b\u0e32\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u0e2e\u0e2d\u0e25\u0e31\u0e19\u0e14\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u0e19\u0e2d\u0e23\u0e4c\u0e40\u0e27\u0e22\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u0e2d\u0e2d\u0e01\u0e0b\u0e34\u0e17\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u0e42\u0e2d\u0e42\u0e23\u0e42\u0e21 (\u0e2d\u0e32\u0e1f\u0e32\u0e19)"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u0e42\u0e2d\u0e23\u0e34\u0e22\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u0e1b\u0e31\u0e0d\u0e08\u0e32\u0e1b"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u0e42\u0e1b\u0e41\u0e25\u0e19\u0e14\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u0e1e\u0e32\u0e2a\u0e0a\u0e4c\u0e42\u0e15 (\u0e1e\u0e38\u0e2a\u0e0a\u0e4c\u0e42\u0e15)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u0e42\u0e1b\u0e23\u0e15\u0e38\u0e40\u0e01\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u0e04\u0e34\u0e27\u0e0a\u0e31\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0e40\u0e23\u0e42\u0e15-\u0e42\u0e23\u0e41\u0e21\u0e19\u0e0b\u0e4c"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u0e04\u0e34\u0e23\u0e31\u0e19\u0e14\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0e42\u0e23\u0e21\u0e31\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0e23\u0e31\u0e2a\u0e40\u0e0b\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u0e04\u0e34\u0e19\u0e22\u0e32\u0e27\u0e31\u0e19\u0e14\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0e2a\u0e31\u0e19\u0e2a\u0e01\u0e24\u0e15"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0e0b\u0e34\u0e19\u0e14\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u0e2a\u0e31\u0e19\u0e42\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0e2a\u0e34\u0e07\u0e2b\u0e25"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0e2a\u0e42\u0e25\u0e27\u0e31\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0e2a\u0e42\u0e25\u0e40\u0e27\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u0e0b\u0e32\u0e21\u0e31\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0e42\u0e0b\u0e19\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0e42\u0e0b\u0e21\u0e32\u0e25\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0e41\u0e2d\u0e25\u0e40\u0e1a\u0e40\u0e19\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0e40\u0e0b\u0e2d\u0e23\u0e4c\u0e40\u0e1a\u0e35\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u0e0b\u0e35\u0e2a\u0e27\u0e32\u0e15\u0e34"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u0e40\u0e0b\u0e42\u0e2a\u0e42\u0e17"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u0e0b\u0e31\u0e19\u0e14\u0e32\u0e19\u0e35\u0e2a"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0e2a\u0e27\u0e35\u0e40\u0e14\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0e0b\u0e27\u0e32\u0e2e\u0e34\u0e23\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u0e17\u0e21\u0e34\u0e2c"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u0e17\u0e34\u0e25\u0e39\u0e01\u0e39"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u0e17\u0e32\u0e08\u0e34\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u0e44\u0e17\u0e22"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u0e17\u0e34\u0e01\u0e23\u0e34\u0e19\u0e22\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u0e40\u0e15\u0e34\u0e23\u0e4c\u0e01\u0e40\u0e21\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u0e15\u0e32\u0e01\u0e32\u0e25\u0e47\u0e2d\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u0e40\u0e0b\u0e15\u0e2a\u0e27\u0e32\u0e19\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u0e17\u0e2d\u0e07\u0e01\u0e49\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u0e15\u0e38\u0e23\u0e01\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u0e0b\u0e2d\u0e07\u0e01\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u0e15\u0e32\u0e14"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u0e17\u0e27\u0e35"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0e2d\u0e38\u0e22\u0e01\u0e31\u0e27"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0e22\u0e39\u0e40\u0e04\u0e23\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0e2d\u0e34\u0e23\u0e14\u0e39"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0e2d\u0e38\u0e2a\u0e40\u0e1a\u0e04"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0e40\u0e27\u0e35\u0e22\u0e14\u0e19\u0e32\u0e21"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u0e42\u0e27\u0e25\u0e32\u0e1e\u0e38\u0e01"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u0e27\u0e39\u0e25\u0e2d\u0e1f"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u0e42\u0e0b\u0e2a\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0e22\u0e35\u0e14\u0e34\u0e0a"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u0e42\u0e22\u0e23\u0e39\u0e1a\u0e32"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u0e08\u0e27\u0e07"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u0e08\u0e35\u0e19"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0e0b\u0e39\u0e25\u0e39"_s)
		})
	});
}

LocaleNames_th::LocaleNames_th() {
}

$Class* LocaleNames_th::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_th, name, initialize, &_LocaleNames_th_ClassInfo_, allocate$LocaleNames_th);
	return class$;
}

$Class* LocaleNames_th::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun