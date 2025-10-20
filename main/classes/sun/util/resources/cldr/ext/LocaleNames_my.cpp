#include <sun/util/resources/cldr/ext/LocaleNames_my.h>

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

$MethodInfo _LocaleNames_my_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_my::*)()>(&LocaleNames_my::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_my_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_my",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_my_MethodInfo_
};

$Object* allocate$LocaleNames_my($Class* clazz) {
	return $of($alloc(LocaleNames_my));
}

void LocaleNames_my::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_my::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_AL, u"\u1021\u101a\u103a\u101c\u103a\u1018\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_AM, u"\u1021\u102c\u1019\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_AZ, u"\u1021\u1007\u102c\u1018\u102d\u102f\u1004\u103a\u1002\u103b\u1014\u103a"_s);
	$var($String, metaValue_BG, u"\u1018\u1030\u101c\u103a\u1002\u1031\u1038\u101b\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_BY, u"\u1018\u102e\u101c\u102c\u101b\u102f\u1005\u103a"_s);
	$var($String, metaValue_CD, u"\u1000\u103d\u1014\u103a\u1002\u102d\u102f"_s);
	$var($String, metaValue_CN, u"\u1010\u101b\u102f\u1010\u103a"_s);
	$var($String, metaValue_DK, u"\u1012\u102d\u1014\u103a\u1038\u1019\u1010\u103a"_s);
	$var($String, metaValue_ES, u"\u1005\u1015\u102d\u1014\u103a"_s);
	$var($String, metaValue_ET, u"\u1021\u102e\u101e\u102e\u101a\u102d\u102f\u1038\u1015\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_FI, u"\u1016\u1004\u103a\u101c\u1014\u103a"_s);
	$var($String, metaValue_FJ, u"\u1016\u102e\u1002\u103b\u102e"_s);
	$var($String, metaValue_FR, u"\u1015\u103c\u1004\u103a\u101e\u1005\u103a"_s);
	$var($String, metaValue_GE, u"\u1002\u103b\u1031\u102c\u103a\u1002\u103b\u102e\u101a\u102c"_s);
	$var($String, metaValue_GR, u"\u1002\u101b\u102d"_s);
	$var($String, metaValue_HR, u"\u1001\u101b\u102d\u102f\u1021\u1031\u1038\u101b\u103e\u102c\u1038"_s);
	$var($String, metaValue_HT, u"\u101f\u1031\u1010\u102e"_s);
	$var($String, metaValue_HU, u"\u101f\u1014\u103a\u1002\u1031\u101b\u102e"_s);
	$var($String, metaValue_ID, u"\u1021\u1004\u103a\u1012\u102d\u102f\u1014\u102e\u1038\u101b\u103e\u102c\u1038"_s);
	$var($String, metaValue_IT, u"\u1021\u102e\u1010\u101c\u102e"_s);
	$var($String, metaValue_JP, u"\u1002\u103b\u1015\u1014\u103a"_s);
	$var($String, metaValue_LA, u"\u101c\u102c\u1021\u102d\u102f"_s);
	$var($String, metaValue_LT, u"\u101c\u1005\u103a\u101e\u1030\u101d\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_LU, u"\u101c\u1030\u1007\u1004\u103a\u1018\u1010\u103a"_s);
	$var($String, metaValue_LV, u"\u101c\u1010\u103a\u1017\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_MM, u"\u1019\u103c\u1014\u103a\u1019\u102c"_s);
	$var($String, metaValue_MU, u"\u1019\u1031\u102c\u101b\u1005\u103a\u101b\u103e"_s);
	$var($String, metaValue_NP, u"\u1014\u102e\u1015\u1031\u102b"_s);
	$var($String, metaValue_NR, u"\u1014\u1031\u102c\u103a\u101b\u1030\u1038"_s);
	$var($String, metaValue_PH, u"\u1016\u102d\u101c\u1005\u103a\u1015\u102d\u102f\u1004\u103a"_s);
	$var($String, metaValue_PL, u"\u1015\u102d\u102f\u101c\u1014\u103a"_s);
	$var($String, metaValue_PT, u"\u1015\u1031\u102b\u103a\u1010\u1030\u1002\u102e"_s);
	$var($String, metaValue_PW, u"\u1015\u101c\u102c\u1021\u102d\u102f"_s);
	$var($String, metaValue_RS, u"\u1006\u102c\u1038\u1018\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_SD, u"\u1006\u1030\u1012\u1014\u103a"_s);
	$var($String, metaValue_SE, u"\u1006\u103d\u102e\u1012\u1004\u103a"_s);
	$var($String, metaValue_SI, u"\u1006\u101c\u102d\u102f\u1017\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_SY, u"\u1006\u102e\u1038\u101b\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_SZ, u"\u1006\u103d\u102c\u1007\u102e\u101c\u1014\u103a"_s);
	$var($String, metaValue_TH, u"\u1011\u102d\u102f\u1004\u103a\u1038"_s);
	$var($String, metaValue_TM, u"\u1010\u102c\u1037\u1001\u103a\u1019\u1004\u103a\u1014\u1005\u1039\u1005\u1010\u1014\u103a"_s);
	$var($String, metaValue_TO, u"\u1010\u103d\u1014\u103a\u1002\u102b"_s);
	$var($String, metaValue_TR, u"\u1010\u1030\u101b\u1000\u102e"_s);
	$var($String, metaValue_UA, u"\u101a\u1030\u1000\u101b\u102d\u1014\u103a\u1038"_s);
	$var($String, metaValue_VN, u"\u1017\u102e\u101a\u1000\u103a\u1014\u1019\u103a"_s);
	$var($String, metaValue_ZA, u"\u1010\u1031\u102c\u1004\u103a\u1021\u102c\u1016\u101b\u102d\u1000"_s);
	$var($String, metaValue_bn, u"\u1018\u1004\u103a\u1039\u1002\u102b\u101c\u102e"_s);
	$var($String, metaValue_bo, u"\u1010\u102d\u1018\u1000\u103a"_s);
	$var($String, metaValue_km, u"\u1001\u1019\u102c"_s);
	$var($String, metaValue_ko, u"\u1000\u102d\u102f\u101b\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_la, u"\u101c\u1000\u103a\u1010\u1004\u103a"_s);
	$var($String, metaValue_ml, u"\u1019\u101c\u1031\u101a\u102c\u101c\u1019\u103a"_s);
	$var($String, metaValue_mn, u"\u1019\u103d\u1014\u103a\u1002\u102d\u102f\u101c\u102e\u1038\u101a\u102c\u1038"_s);
	$var($String, metaValue_ta, u"\u1010\u1019\u102e\u1038\u101c\u103a"_s);
	$var($String, metaValue_peo, u"\u1015\u102b\u101b\u103e\u1014\u103a \u1021\u101f\u1031\u102c\u1004\u103a\u1038"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u1000\u102d\u102f\u101c\u102d\u102f\u1014\u102e\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u1019\u102e\u101b\u1014\u103a\u1012\u102e\u1038\u1007\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u101e\u1004\u103a\u1039\u1000\u1031\u1010"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u1021\u102e\u1019\u102d\u102f\u1002\u103b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u1001\u103b\u1010\u103a\u1001\u103a\u1019\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u101b\u103e\u1031\u1038\u101f\u1031\u102c\u1004\u103a\u1038 \u1021\u102e\u1002\u103b\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u1010\u1004\u103a\u1019\u103a\u1014\u1032"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u1010\u102e\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u101b\u1015\u1014\u103a\u1014\u1030\u1021\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u1021\u1006\u1014\u103a\u1038\u101b\u103e\u1004\u103a\u1038\u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u101b\u101b\u102d\u102f\u1010\u103d\u1014\u103a\u1002\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u1010\u102e\u1010\u103d\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u1021\u1014\u103a\u1012\u102d\u102f\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u101a\u1030\u1021\u1031\u1021\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u1016\u101c\u102e\u1019\u1005\u103a\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u1021\u102c\u1016\u1002\u1014\u103a\u1014\u1005\u1039\u1005\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u1021\u1014\u103a\u1010\u102e\u1002\u103d\u102b\u1014\u103e\u1004\u1037\u103a \u1018\u102c\u1018\u1030\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u1021\u102e\u101e\u102e\u101a\u102d\u102f\u1038\u1015\u102e\u1038\u101a\u102c\u1038 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u1021\u1014\u103a\u1002\u102e\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(metaValue_AL)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(metaValue_AM)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u1021\u1014\u103a\u1002\u102d\u102f\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u1021\u1014\u103a\u1010\u102c\u1010\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u1021\u102c\u1002\u103b\u1004\u103a\u1010\u102e\u1038\u1014\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a \u1006\u1019\u102d\u102f\u1038\u1021\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u1029\u1005\u1010\u103c\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u1029\u1005\u1010\u103c\u1031\u1038\u101c\u103b"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u1021\u102c\u101b\u1030\u1038\u1017\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a \u1021\u1004\u103a\u1039\u1002\u101c\u102d\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u1021\u102c\u101c\u1014\u103a\u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(metaValue_AZ)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037\u1015\u102d\u102f\u1004\u103a\u1038\u1021\u102c\u1019\u1031\u1038\u1014\u102e\u1038\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u1018\u1031\u102c\u1037\u1005\u1014\u102e\u1038\u101a\u102c\u1038\u1014\u103e\u1004\u1037\u103a \u101f\u102c\u1007\u102e\u1002\u102d\u102f\u1017\u102e\u1014\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u1018\u102c\u1018\u1031\u1038\u1012\u102d\u102f\u1038\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u1005\u102e\u1017\u1030\u1021\u102c\u1014\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u1018\u1004\u103a\u1039\u1002\u101c\u102c\u1038\u1012\u1031\u1037\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u1000\u103d\u1019\u103a\u1019\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u1018\u101a\u103a\u101c\u103a\u1002\u103b\u102e\u101a\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1021\u1019\u103c\u1004\u1037\u103a \u1002\u103b\u102c\u1019\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u1018\u102c\u1000\u102e\u1038\u1014\u102c\u1038 \u1016\u102c\u1038\u1006\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(metaValue_BG)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u1018\u102c\u101b\u102d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u1018\u1030\u101b\u103d\u1014\u103a\u1012\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u1018\u102e\u1014\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u1018\u102c\u101e\u101a\u103a\u101c\u103a\u1019\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u1018\u102c\u1019\u103c\u1030\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u1021\u102e\u1007\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u1018\u101b\u1030\u1014\u102d\u102f\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u1018\u102d\u102f\u101c\u102e\u1038\u1017\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u1000\u102c\u101b\u1005\u103a\u1018\u102e\u101a\u1036 \u1014\u101a\u103a\u101e\u102c\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u1018\u101b\u102c\u1007\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u1018\u101f\u102c\u1038\u1019\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u1006\u102d\u102f\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u1018\u1030\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u1018\u1030\u1017\u1000\u103a\u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u1018\u1031\u102c\u1037\u1006\u103d\u102c\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u1018\u101c\u102d\u1007\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u1019\u103c\u1004\u103a\u1014\u102d\u102f\u1004\u103a\u101e\u1031\u102c \u1005\u1000\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u1015\u102b\u101b\u103e\u102c\u1038 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u101f\u102e\u1018\u101b\u1030\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u1000\u1014\u1031\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u1000\u102d\u102f\u1000\u102d\u102f\u1038\u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u1019\u102c\u1007\u1014\u103a\u1012\u102b\u101b\u1014\u103a\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(metaValue_CD)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u1017\u101f\u102d\u102f \u1021\u102c\u1016\u101b\u102d\u1000 \u1015\u103c\u100a\u103a\u1011\u1031\u102c\u1004\u103a\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u1000\u103d\u1014\u103a\u1002\u102d\u102f-\u1018\u101b\u102c\u1007\u102c\u1017\u102e\u1038\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u1006\u103d\u1005\u103a\u1007\u102c\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u1000\u102d\u102f\u1037\u1010\u103a \u1012\u102e\u1017\u103d\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u1000\u103d\u1010\u103a \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u1001\u103b\u102e\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u1000\u1004\u103a\u1019\u101b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(metaValue_CN)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u1000\u102d\u102f\u101c\u1036\u1018\u102e\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u1000\u101c\u1005\u103a\u1015\u102b\u1010\u1014\u103a\u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u1000\u102d\u102f\u1037\u1005\u103a\u1010\u102c\u101b\u102e\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u1000\u103b\u1030\u1038\u1018\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u1000\u102d\u1010\u103a\u1017\u102c\u1012\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u1000\u103b\u1030\u101b\u1031\u1038\u1000\u102d\u102f\u1038\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u1001\u101b\u1005\u103a\u1005\u1019\u1010\u103a \u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u1006\u102d\u102f\u1000\u103a\u1015\u101b\u1015\u103a\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u1001\u103b\u1000\u103a\u1000\u102e\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u1021\u102e\u1000\u102c\u1002\u103b\u102f\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u1002\u103b\u102c\u1019\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u1021\u102c\u1001\u103b\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u1001\u103b\u102e\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u1012\u102e\u1021\u1032\u1002\u102d\u102f\u1002\u102b\u1005\u102e\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u1012\u102e\u1017\u102c\u1014\u102c\u1002\u101b\u102e \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u1002\u103b\u102e\u1018\u1030\u1010\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(metaValue_DK)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u1018\u101b\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u1017\u103d\u101f\u103a\u1019\u1019\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u1012\u102d\u102f\u1019\u102e\u1014\u102e\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u1021\u102c\u1019\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031 \u1005\u102c\u101c\u102f\u1036\u1038\u101e\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u1012\u102d\u102f\u1019\u102e\u1014\u102e\u1000\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u1002\u102d\u102f\u101b\u102d\u102f\u1010\u102c\u101c\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u1007\u1030\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u1010\u102e\u1002\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u1021\u101a\u103a\u101c\u103a\u1002\u103b\u102e\u1038\u101b\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u1015\u1014\u103a\u1002\u102b\u1005\u102e\u1014\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u1006\u101a\u103a\u1025\u1010\u102c\u1014\u103e\u1004\u1037\u103a\u1019\u101a\u103a\u101c\u102e\u101c\u103a\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u1015\u1019\u103a\u1015\u1014\u103a\u100a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u1021\u102e\u1000\u103d\u1031\u1012\u1031\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u1015\u102b\u1015\u102e\u1019\u1004\u103a\u1010\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u1012\u1014\u103a\u1019\u1032"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u1021\u1000\u103a\u1005\u1010\u102d\u102f\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u1021\u102e\u1002\u103b\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a \u1006\u102c\u101f\u102c\u101b"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u1001\u103b\u1030\u1000\u102e\u1038\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u1019\u102c\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u1001\u103b\u1031\u102c\u1037\u1010\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u1001\u103b\u102c\u101b\u102d\u102f\u1000\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u1021\u102e\u101b\u102e\u1011\u101b\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u1025\u101b\u1031\u102c\u1015\u101e\u1019\u1002\u1039\u1002"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1004\u1036\u1010\u1000\u102c\u101e\u102f\u1036\u1038 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u1025\u101b\u1031\u102c\u1015\u1012\u1031\u101e"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u1001\u103b\u1031\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u1002\u102f\u1002\u103b\u102c\u101b\u1010\u102e \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u1021\u1012\u102d\u102f\u1004\u103a\u1002\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(metaValue_FI)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u1016\u1031\u102c\u1037\u1000\u101c\u1014\u103a \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u1019\u102d\u102f\u1004\u103a\u1001\u101b\u102d\u102f\u1014\u102e\u101b\u103e\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u1016\u102c\u101b\u102d\u102f\u1038 \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f\u1019\u103b\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u1021\u102d\u1014\u1039\u1012\u103c\u102d\u101a \u1021\u1019\u103b\u102d\u102f\u1038\u101e\u102c\u1038 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u101b\u103e\u1031\u1038\u101f\u1031\u102c\u1004\u103a\u1038 \u1002\u101b\u102d"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u1002\u102b\u1018\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u101a\u1030\u1014\u102d\u102f\u1000\u103a\u1010\u1000\u103a\u1000\u1004\u103a\u1038\u1012\u1019\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1002\u103b\u102e\u1038\u101b\u102e\u1038\u101a\u102c\u1038 \u1015\u1005\u103a\u1002\u103b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u1002\u101b\u102e\u1014\u1031\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u1015\u103c\u1004\u103a\u101e\u1005\u103a \u1002\u102e\u101a\u102c\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u1002\u103d\u1014\u103a\u1038\u1007\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u1002\u102b\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u1010\u102d\u102f\u1004\u103a\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u1002\u103b\u102e\u1018\u101b\u1031\u102c\u103a\u101c\u103a\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u1002\u101b\u1004\u103a\u1038\u101c\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1021\u1004\u103a\u1039\u1002\u101c\u102d\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u1002\u1019\u103a\u1018\u102e\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u1002\u102e\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u1002\u103d\u102b\u1012\u102e\u101c\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u1021\u102e\u1000\u103d\u1031\u1010\u102c \u1002\u102e\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a \u1002\u103b\u1031\u102c\u103a\u1002\u103b\u102e\u101a\u102c \u1014\u103e\u1004\u1037\u103a \u1010\u1031\u102c\u1004\u103a \u1006\u1004\u103a\u1038\u1012\u101d\u1005\u103a\u1002\u103b\u103a \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f\u1019\u103b\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u1002\u103d\u102b\u1010\u102e\u1019\u102c\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u1002\u1030\u1021\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u1002\u102e\u1014\u102e-\u1018\u102e\u1005\u1031\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u1000\u101c\u1004\u103a\u1002\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u1002\u102d\u102f\u1004\u103a\u101a\u102c\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u1006\u102d\u102f\u101b\u102c\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u1018\u102c\u101e\u102c\u1005\u1000\u102c\u1038\u1014\u103e\u1004\u1037\u103a \u1015\u1010\u103a\u101e\u1000\u103a\u101e\u1031\u102c\u1021\u101b\u102c \u1019\u101b\u103e\u102d\u1015\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u1029\u1005\u1010\u103c\u102e\u1038\u101a\u102c\u1038 \u1002\u103b\u102c\u1019\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u101f\u1031\u102c\u1004\u103a\u1000\u1031\u102c\u1004\u103a (\u1010\u101b\u102f\u1010\u103a\u1015\u103c\u100a\u103a)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u101f\u1010\u103a\u1000\u103b\u103d\u1014\u103a\u1038\u1014\u103e\u1004\u1037\u103a\u1019\u1000\u103a\u1012\u1031\u102b\u1014\u101a\u103a\u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u101f\u103d\u1014\u103a\u1012\u1030\u1038\u101b\u1015\u103a\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(metaValue_HR)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u1021\u102c\u1002\u103a\u101f\u102d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u1006\u103d\u1005\u103a \u1002\u103b\u102c\u1019\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(metaValue_HT)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(metaValue_HU)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u1000\u1014\u1031\u101b\u102e \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(metaValue_ID)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u1021\u102d\u102f\u1004\u103a\u101a\u102c\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u1014\u1015\u102d\u102f\u101c\u102e\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u1014\u102c\u1019\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u1007\u102c\u1007\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u1021\u1005\u1039\u1005\u101b\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u1019\u1014\u103a\u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u1021\u102d\u1014\u1039\u1012\u102d\u101a"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u1017\u103c\u102d\u1010\u102d\u101e\u103b\u103e\u1015\u102d\u102f\u1004\u103a \u1021\u102d\u1014\u1039\u1012\u102d\u101a\u101e\u1019\u102f\u1012\u1039\u1012\u101b\u102c\u1000\u103b\u103d\u1014\u103a\u1038\u1019\u103b\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u1021\u102e\u101b\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u1021\u102e\u101b\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u1021\u102d\u102f\u1000\u103a\u1005\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u1002\u100f\u1014\u103a\u1038\u101e\u1004\u103a\u1039\u1001\u103b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u1011\u102d\u102f\u1004\u103a\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"\u1000\u103d\u1014\u103a\u1015\u103b\u1030\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u1018\u1004\u103a\u1039\u1002\u102b\u101c\u102e \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u1002\u103b\u102c\u1005\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u1021\u1005\u1039\u1005\u101c\u102c\u1019\u103a \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u1002\u103b\u1019\u1031\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u1002\u103b\u1031\u102c\u103a\u1012\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1015\u102d\u102f\u1004\u103a\u1038\u1014\u1031\u102c\u1000\u103a\u1000\u103b\u101e\u1031\u102c\u1015\u103c\u1004\u103a\u101e\u1005\u103a\u1019\u103e \u1041\u1046\u1040\u1046"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u1021\u102d\u1014\u103a\u1014\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u1002\u1030\u1005\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u1001\u1014\u1039\u1014\u1012\u102b \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u1000\u101a\u102c\u1038\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u1021\u101c\u102e\u1019\u1032\u1014\u103a\u1014\u1005\u103a \u1002\u103b\u102c\u1019\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u1017\u102f\u1012\u1039\u1013 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u1000\u1004\u103a\u100a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u101c\u1000\u103a\u1010\u1004\u103a\u1021\u1019\u1031\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u1000\u102c\u1002\u103b\u1005\u1039\u1005\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u1000\u1019\u1039\u1018\u1031\u102c\u1012\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u1001\u102e\u101b\u102e\u1018\u102c\u1010\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u1000\u102d\u102f\u1019\u102d\u102f\u101b\u102d\u102f\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u1000\u1005\u103a\u1014\u103e\u1004\u1037\u103a\u1014\u102e\u1017\u102e\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u1001\u1014\u103a\u1014\u102c\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u1000\u1014\u1031\u1012\u102b \u1015\u103c\u1004\u103a\u101e\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a\u1000\u102d\u102f\u101b\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a\u1000\u102d\u102f\u101b\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u1006\u103d\u1005\u103a \u1015\u103c\u1004\u103a\u101e\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u1000\u1030\u101d\u102d\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u1010\u1031\u102c\u1037\u1001\u103a \u1015\u102d\u1005\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u1000\u1031\u1019\u1014\u103a \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u1000\u102c\u1007\u1000\u103a\u1005\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u1005\u1005\u103a\u101b\u102d\u101c\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u101c\u1000\u103a\u1018\u1014\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u101c\u1030\u1005\u102e\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u1002\u103d\u1005\u103a\u1001\u103b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u1021\u1014\u102d\u1019\u1037\u103a \u1002\u103b\u102c\u1019\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u101c\u1005\u103a\u1010\u1014\u103a\u1005\u1010\u102d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u101e\u102e\u101b\u102d\u101c\u1004\u103a\u1039\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u101c\u102d\u102f\u1000\u103a\u1018\u1031\u1038\u101b\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u101c\u102e\u1006\u102d\u102f\u101e\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(metaValue_LT)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(metaValue_LU)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(metaValue_LV)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u1001\u1010\u1001\u1014"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u101c\u1005\u103a\u1017\u103b\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u101c\u102c\u1012\u102e\u1014\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u1017\u103d\u1014\u103a\u1002\u103b\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u101c\u1014\u103a\u1002\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u101e\u102c\u1021\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101b\u102d\u102f\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u1019\u102d\u102f\u1014\u102c\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u1019\u1031\u102c\u101c\u103a\u1012\u102d\u102f\u1017\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u1019\u103d\u1014\u103a\u1010\u102e\u1014\u102d\u1002\u101b\u102d\u102f\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u1019\u102c\u1010\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u1019\u1012\u102b\u1002\u1010\u103a\u1005\u1000\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_TH)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u1019\u102c\u101b\u103e\u101a\u103a \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u1021\u102c\u101c\u102e\u101a\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1019\u1000\u103a\u1006\u102e\u1012\u102d\u102f\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u1019\u102c\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(metaValue_MM)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u1019\u103d\u1014\u103a\u1002\u102d\u102f\u1038\u101c\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u1014\u102e\u101d\u102b\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u1019\u1000\u102c\u1021\u102d\u102f (\u1010\u101b\u102f\u1010\u103a\u1015\u103c\u100a\u103a)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a\u1015\u102d\u102f\u1004\u103a\u1038\u1019\u102c\u101b\u102e\u1021\u102c\u1014\u102c\u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u1019\u102c\u1010\u102e\u1014\u102d\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101b\u102e\u1010\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u1019\u1031\u102c\u1004\u1037\u103a\u1005\u1032\u101b\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u1019\u1031\u102c\u101c\u103a\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(metaValue_MU)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a \u1021\u102c\u101c\u103a\u1010\u102d\u102f\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101c\u103a\u1012\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u1019\u102c\u101c\u102c\u101d\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u1019\u1000\u103a\u1000\u1006\u102e\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u1002\u103b\u1015\u1014\u103a \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u1019\u101c\u1031\u1038\u101b\u103e\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u1019\u102d\u102f\u1007\u1019\u103a\u1018\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u1014\u1019\u102e\u1038\u1018\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u1006\u102c\u101f\u102c\u101b-\u1021\u1031\u102c\u1000\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1021\u102c\u1016\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u101f\u102e\u1018\u101b\u1030\u1038 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u1014\u101a\u1030\u1038 \u1000\u101a\u103a\u101c\u102e\u1012\u102d\u102f\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1002\u103b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u1014\u1031\u102c\u1016\u102f\u1010\u103a\u1000\u103b\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1002\u103b\u102e\u1038\u101b\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u1010\u101b\u102d\u102f\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u1014\u102e\u1000\u102c\u101b\u102c\u1002\u103d\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u1014\u101a\u103a\u101e\u102c\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u1014\u1031\u102c\u103a\u101d\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u1014\u102e\u1025\u1030\u1021\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u101b\u103d\u1019\u103a\u1018\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u1014\u101a\u1030\u1038\u1007\u102e\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u1021\u1004\u103a\u1002\u101c\u102d\u102f \u1006\u1000\u1039\u1000\u1005\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u1021\u102d\u102f\u1019\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u1021\u1014\u103a\u1002\u102e\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u1001\u101b\u102e\u1021\u102d\u102f\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u1015\u1014\u102c\u1038\u1019\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u1017\u103c\u102d\u1010\u102d\u101e\u103b\u103e \u1021\u1004\u103a\u1039\u1002\u101c\u102d\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u1015\u102e\u101b\u1030\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u1015\u103c\u1004\u103a\u101e\u1005\u103a \u1015\u1031\u102b\u103a\u101c\u102e\u1014\u102e\u1038\u101b\u103e\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u1015\u102b\u1015\u1030\u1021\u102c \u1014\u101a\u1030\u1038\u1002\u102e\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(metaValue_PH)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u1015\u102b\u1000\u1005\u1039\u1005\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(metaValue_PL)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u1021\u102e\u101d\u1014\u103a\u1012\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u1015\u102e\u1021\u1032\u101b\u103a\u1014\u103e\u1004\u1037\u103a \u1019\u102e\u1000\u103d\u102e\u101c\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u1015\u1005\u103a\u1010\u103a\u1000\u102d\u1014\u103a\u1038\u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u1015\u1031\u102b\u103a\u1010\u102d\u102f\u101b\u102e\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u1015\u102b\u101c\u1000\u103a\u1005\u1010\u102d\u102f\u1004\u103a\u1038 \u1015\u102d\u102f\u1004\u103a\u1014\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(metaValue_PT)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u1014\u102e\u1038\u101b\u1015\u103a\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u1002\u101b\u102d \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031 \u1005\u102c\u101c\u102f\u1036\u1038\u101e\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u1015\u102b\u101b\u102c\u1002\u103d\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u1010\u1019\u103a\u1018\u1030\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u101f\u102e\u1017\u101b\u1030\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u1000\u102c\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u1005\u1000\u1031\u102c\u1037 \u1005\u1036 \u1021\u1004\u103a\u1039\u1002\u101c\u102d\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u1014\u1030\u1021\u1032\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u101e\u1019\u102f\u1012\u1039\u1012\u101b\u102c \u1021\u1015\u103c\u1004\u103a\u1018\u1000\u103a\u101b\u103e\u102d \u1000\u103b\u103d\u1014\u103a\u1038\u1014\u102d\u102f\u1004\u103a\u1004\u1036\u1019\u103b\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u101c\u1000\u103a\u1007\u103a\u1002\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA \u1021\u101e\u1036\u1011\u103d\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u1010\u1030\u1017\u102c\u101c\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u1000\u1019\u1039\u1018\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u1021\u102c\u1016\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1021\u1019\u1031\u101b\u102d\u1000\u1010\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u101b\u102e\u101a\u1030\u1014\u102e\u101a\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a \u1021\u1019\u1031\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u101c\u102d\u102f\u1002\u103b\u103a\u1018\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u101e\u1019\u102f\u1012\u1039\u1012\u101b\u102c\u1012\u1031\u101e"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u101b\u102d\u102f\u1019\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(metaValue_RS)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u101b\u102f\u101b\u103e\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u101b\u101d\u1014\u103a\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u1006\u1031\u102c\u103a\u1012\u102e\u1021\u102c\u101b\u1031\u1038\u1018\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u1006\u1031\u102c\u103a\u101c\u1019\u103d\u1014\u103a\u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u1010\u102c\u1006\u102c\u101d\u102b\u1001\u103b"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a \u1021\u102c\u1016\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u1006\u1031\u1038\u101b\u103e\u1032"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(metaValue_SD)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u1017\u101f\u102d\u102f \u1021\u1019\u1031\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037 \u1021\u102c\u1016\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1021\u102c\u1016\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u1005\u1004\u103a\u1039\u1000\u102c\u1015\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u101f\u101a\u103a\u101c\u101a\u103a\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u1000\u1014\u1037\u103a\u101e\u1010\u103a\u1011\u102c\u1038\u101e\u1031\u102c \u1005\u102c\u1015\u102d\u102f\u1012\u103a\u1001\u103d\u1032\u1015\u102f\u1036\u1005\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(metaValue_SI)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u1021\u101c\u101a\u103a \u1021\u102c\u1016\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u1021\u102c\u1016\u101b\u102d\u1000 \u1010\u1031\u102c\u1004\u103a\u1015\u102d\u102f\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u1005\u1017\u102d\u102f\u101c\u103a\u1018\u1010\u103a\u1014\u103e\u1004\u1037\u103a\u1002\u103b\u1014\u103a\u1019\u1031\u101b\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u1006\u101c\u102d\u102f\u1017\u1000\u103a\u1000\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u1006\u102e\u101a\u102c\u101b\u102c \u101c\u102e\u101a\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u1006\u1014\u103a\u1019\u102c\u101b\u102e\u1014\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u1006\u102e\u1014\u102e\u1002\u1031\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u1006\u102d\u102f\u1019\u102c\u101c\u102e\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u1019\u102c\u1015\u102f\u1001\u103b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u1021\u102c\u101b\u102c\u1015\u102b\u101f\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u101b\u102d\u102f\u1038\u101b\u102c \u1010\u1019\u102e\u1038\u101c\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u1006\u1030\u101b\u102c\u1014\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a \u1006\u1030\u1012\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u1006\u1031\u102c\u1004\u103a\u1010\u1030\u1019\u1031\u1038\u1014\u103e\u1004\u1037\u103a \u1015\u101b\u1004\u103a\u1005\u102e\u1015\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u1021\u101a\u103a\u101c\u103a\u1006\u102c\u1017\u1031\u1038\u1012\u102d\u102f\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u1005\u1004\u1037\u103a\u1019\u102c\u1010\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(metaValue_SY)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(metaValue_SZ)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u1011\u101b\u1005\u1039\u1005\u1010\u1014\u103a \u1012\u102b \u1000\u103d\u1014\u103a\u101f\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u1021\u102c\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a\u1010\u102d\u102f\u1004\u103a\u1038\u1010\u102c\u1005\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1021\u1019\u1031\u101b\u102d\u1000"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u1010\u1001\u103a\u1005\u103a\u1014\u103e\u1004\u1037\u103a\u1000\u102c\u1021\u102e\u1000\u102d\u102f\u1005\u103a\u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u101b\u1014\u103a\u1018\u1032\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u1001\u103b\u1012\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u1015\u103c\u1004\u103a\u101e\u1005\u103a \u1010\u1031\u102c\u1004\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1015\u102d\u102f\u1004\u103a\u1014\u1000\u103a\u1019\u103b\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u1010\u102d\u102f\u1002\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(metaValue_TH)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u1010\u102c\u1002\u103b\u102e\u1000\u1005\u1039\u1005\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u1000\u102c\u101b\u1005\u103a\u1018\u102e\u101a\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u1010\u102d\u102f\u1000\u101c\u1031\u102c\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037\u1010\u102e\u1019\u1031\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u101b\u1019\u103a\u1018\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(metaValue_TM)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u1010\u1030\u1014\u102e\u1038\u101b\u103e\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u1011\u101b\u102e\u1014\u102e\u1012\u1010\u103a\u1014\u103e\u1004\u1037\u103a \u1010\u102d\u102f\u1018\u1000\u103a\u1002\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u1010\u1030\u1017\u102c\u1038\u101c\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u1011\u102d\u102f\u1004\u103a\u101d\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u1021\u1000\u103a\u1005\u103a\u1010\u102d\u102f\u1038\u101b\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u1010\u1014\u103a\u1007\u1014\u103a\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u1000\u103d\u102c\u1005\u102e\u1021\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u1019\u101e\u102d \u101e\u102d\u102f\u1037\u1019\u101f\u102f\u1010\u103a \u1019\u101b\u103e\u102d\u101e\u1031\u102c \u1005\u1000\u102c\u1038\u101c\u102f\u1036\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u1021\u102c\u101b\u102d\u102f\u1019\u1014\u103a\u1038\u1014\u102e\u1038\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037\u1021\u102c\u101b\u103e"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u1010\u1030\u1017\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u1000\u103d\u1014\u103a\u1002\u102d\u102f \u1006\u103d\u102c\u101f\u102e\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a\u1021\u102c\u101b\u103e"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037\u1010\u1031\u102c\u1004\u103a\u1021\u102c\u101b\u103e"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u101a\u1030\u1002\u1014\u103a\u1038\u1012\u102b\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a\u1025\u101b\u1031\u102c\u1015"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u1006\u1004\u103a\u101f\u102c\u101c"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u101a\u1030\u1014\u102d\u102f\u1000\u103a\u1010\u1000\u103a\u1005\u1010\u102d\u1010\u103a \u1000\u103b\u103d\u1014\u103a\u1038\u1014\u102d\u102f\u1004\u103a\u1004\u1036\u1019\u103b\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u1000\u102f\u101c\u101e\u1019\u1002\u1039\u1002"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u1021\u1019\u1031\u101b\u102d\u1000\u1014\u103a \u1015\u103c\u100a\u103a\u1011\u1031\u102c\u1004\u103a\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u101f\u102c\u101d\u102d\u102f\u1004\u103a\u101a\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u1025\u101b\u102f\u1002\u103d\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u1015\u101b\u1030\u101b\u103e\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u1025\u1007\u1018\u1000\u103a\u1000\u1005\u1039\u1005\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1021\u102c\u1037\u1010\u101c\u102c\u1005\u103a \u1010\u102c\u1019\u102c\u1007\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u1021\u103d\u1014\u103a\u101b\u1032\u1018\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u1017\u102c\u1010\u102e\u1000\u1014\u103a\u1005\u102e\u1038\u1010\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u1005\u102d\u1014\u1037\u103a\u1017\u1004\u103a\u1038\u1006\u1004\u1037\u103a\u1014\u103e\u1004\u1037\u103a \u1002\u101b\u102d\u1014\u1031\u1012\u102d\u102f\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u1017\u1004\u103a\u1014\u102e\u1007\u103d\u1032\u101c\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u1017\u103c\u102d\u1010\u102d\u101e\u103b\u103e \u1017\u102c\u1002\u103b\u1004\u103a\u1038 \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u101a\u1030\u1021\u1000\u103a\u1005\u103a \u1017\u102c\u1002\u103b\u1004\u103a\u1038 \u1000\u103b\u103d\u1014\u103a\u1038\u1005\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u1017\u1014\u103d\u102c\u1038\u1010\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u1014\u102d\u102f\u1002\u102d\u102f\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u101b\u1030\u101d\u1019\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u1029\u1005\u1010\u103c\u1031\u1038\u101c\u103b\u1014\u103e\u1004\u1037\u103a \u1014\u101a\u1030\u1038\u1007\u102e\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u1019\u102e\u101c\u102c\u1014\u102e\u1038\u101b\u103e\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u101d\u1031\u102b\u101c\u1005\u103a\u1014\u103e\u1004\u1037\u103a \u1016\u1030\u1000\u103b\u1030\u1038\u1014\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u1019\u102d\u102f\u1000\u103a\u1001\u101b\u102d\u102f\u1014\u102e\u1038\u101b\u103e\u102c\u1038 \u1012\u1031\u101e"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u1002\u103d\u1019\u103a\u1018\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u101c\u102c\u1000\u102d\u102f\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u101d\u1031\u102b\u101c\u103a\u1006\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u1006\u1019\u102d\u102f\u1038\u1021\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u101d\u102d\u102f\u101c\u1000\u103a\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1004\u1036\u1001\u103c\u102c\u1038\u101e\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u101d\u102b\u101b\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u1005\u102c\u1015\u103c\u1031\u102c\u1004\u103a\u1038\u1015\u103c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u1021\u102c\u101d\u102b\u1012\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u1015\u102d\u102f\u101c\u102e\u1014\u102e\u101b\u103e\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u1000\u102d\u102f\u1006\u102d\u102f\u1017\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\u1002\u102f\u1002\u103b\u102c\u101b\u101e\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u1011\u102f\u1036\u1038\u1010\u1019\u103a\u1038\u101e\u1016\u103d\u101a\u103a\u101c\u102d\u102f\u1000\u103a\u1014\u102c\u101c\u103b\u1000\u103a\u101b\u103e\u102d\u101e\u1031\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u101d\u1031\u102b\u101c\u103a\u1015\u102e\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u101a\u102e\u1019\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u1021\u103d\u1014\u103a\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u1015\u102f\u1036\u1019\u103e\u1014\u103a\u1005\u102e\u1011\u102c\u1038\u101e\u1031\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u1019\u1031\u101a\u1031\u102c\u1037"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(metaValue_ZA)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u1000\u1014\u1037\u103a\u101e\u1010\u103a\u1019\u1011\u102c\u1038\u101e\u1031\u102c \u1005\u102c\u1015\u102d\u102f\u1012\u103a\u1001\u103d\u1032\u1015\u102f\u1036\u1005\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u1012\u102e\u1017\u1014\u102c\u1002\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u1014\u102d\u102f\u1004\u103a\u1004\u1036\u1010\u1000\u102c\u101e\u102f\u1036\u1038\u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u101f\u102e\u101b\u1002\u1014"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u1007\u1019\u103a\u1018\u102e\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u1007\u1004\u103a\u1018\u102c\u1018\u103d\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u1019\u101e\u102d (\u101e\u102d\u102f\u1037) \u1019\u101b\u103e\u102d\u101e\u1031\u102c \u1012\u1031\u101e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u1019\u1000\u103a\u1011\u101b\u1005\u103a\u1005\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1006\u102d\u102f\u101e\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u1010\u101c\u102f\u1002\u102f \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u101c\u102d\u102f\u1007\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u1019\u1001\u103b\u102c\u1019\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u101b\u102d\u102f\u1038\u101b\u103e\u1004\u103a\u1038 \u1010\u101b\u102f\u1010\u103a \u1018\u100f\u1039\u100d\u102c\u101b\u1031\u1038\u101e\u102f\u1036\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u101f\u102e\u101c\u102e\u1002\u1031\u1014\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u1010\u102d\u102f\u1038\u1001\u103b\u1032\u1037\u1021\u102c\u101b\u1015\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u1014\u1030\u1021\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u1012\u102b\u1000\u102d\u102f\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u1017\u103c\u1000\u103a\u1015\u103c\u100a\u1037\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u1012\u102b\u1002\u103a\u101d\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u1010\u102d\u102f\u1004\u103a\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a\u101c\u1030\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u1021\u1030\u1019\u1030\u101b\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u1006\u1014\u103a\u1012\u102b\u101d\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u101b\u1031\u102c\u1019 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u1006\u1001\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u1006\u1019\u103a\u1018\u1030\u101b\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u1006\u1014\u103a\u1010\u102c\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u1002\u103b\u1030\u1012\u102e\u101a\u102d\u102f-\u1015\u102b\u101b\u103e\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u1021\u103d\u1014\u103a\u1002\u1019\u103a\u1038\u1018\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u1002\u1030\u101b\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u101c\u1030\u1018\u102c-\u101c\u1030\u101c\u1030\u1021\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u1006\u1014\u103a\u1002\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u1014\u101b\u1014\u103a\u1000\u102d\u102f\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u101c\u103d\u1014\u103a\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u101c\u1030\u1021\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(metaValue_PH)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u1019\u102f\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u1012\u101a\u103a\u101c\u102c\u101d\u1032\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u1019\u102e\u1007\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u1018\u102c\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u101c\u1030\u101b\u102e\u1021\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u1018\u102c\u1006\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u1002\u103b\u1030\u1012\u102e\u101a\u102d\u102f-\u1021\u102c\u101b\u1017\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u1005\u1015\u102d\u1014\u103a (\u1025\u101b\u1031\u102c\u1015)"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u1005\u1000\u1031\u102c\u1037\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u1005\u1005\u1039\u1005\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u1021\u102c\u1016\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u1021\u1018\u103a\u1001\u102b\u1007\u102e\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(metaValue_ZA)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u1021\u102c\u1000\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u1021\u1019\u103a\u101f\u102c\u101b\u1005\u103a\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u1021\u102c\u101b\u102c\u1002\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u1021\u102c\u101b\u1031\u1017\u103b"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u1021\u102c\u101b\u1017\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u1002\u103b\u1015\u1014\u103a \u1021\u1000\u1039\u1001\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u1021\u102c\u101e\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u1021\u102c\u1017\u102c\u101b\u1005\u103a\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u1021\u102d\u102f\u1004\u103a\u1019\u102c\u101b"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(metaValue_AZ)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u1018\u1000\u103a\u101b\u103e\u103a\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(metaValue_BG)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u1018\u1005\u103a\u1005\u103a\u101c\u102c\u1019\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u1018\u1014\u103a\u1018\u102c\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u1012\u1031\u102b\u1037\u1002\u103a\u101b\u1005\u103a\u1018\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u1018\u101b\u102e\u1010\u103d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u1018\u1031\u102c\u1037\u1005\u103a\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_MM)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u101c\u102c\u1021\u102d\u102f \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u1005\u102e\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u1000\u1010\u103a\u1010\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u1000\u102d\u102f\u101b\u102c\u1018\u102d\u102f\u101b\u102d\u102f \u1006\u1019\u103a\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u1001\u103b\u1000\u103a\u1001\u103b\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u1001\u103b\u1019\u102d\u102f\u101b\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\u1015\u103c\u1014\u103a\u101c\u100a\u103a\u1005\u102e\u1005\u1005\u103a\u1011\u102c\u1038\u101e\u1031\u102c \u101b\u1031\u1038\u1011\u102f\u1036\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u1001\u102d\u102f\u1005\u102e\u1000\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u1021\u102d\u102f\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u1001\u101b\u102e\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u1001\u103b\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u1001\u103b\u1015\u103a\u1001\u103b\u103a \u1005\u101c\u102c\u1017\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u1001\u103b\u1030\u1017\u1000\u103a\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u101d\u1031\u101c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u1021\u102e\u101e\u102e\u101a\u102d\u102f\u1015\u102e\u1038\u101a\u102c\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(metaValue_DK)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u1025\u101b\u1031\u102c\u1015 \u1015\u1031\u102b\u103a\u1010\u1030\u1002\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u1002\u103b\u102c\u1019\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u1015\u102f\u1036\u1019\u103e\u1014\u103a \u1004\u103d\u1031\u101b\u1031\u1010\u103d\u1000\u103a\u1015\u102f\u1036\u1005\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u1018\u102d\u1014\u103a\u1018\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u1021\u102d\u102f\u1004\u103a\u1038\u101b\u1005\u103a \u101f\u1031\u102c\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u1012\u102e\u1017\u102c\u101f\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u1012\u1007\u103d\u1014\u103a\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u1018\u102e\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u1010\u101b\u102f\u1010\u103a \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u1007\u102c\u1019\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u1002\u101b\u102d \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u1021\u102e\u101d\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u1015\u102f\u1036\u1019\u103e\u1014\u103a\u1005\u102c\u1015\u102d\u102f\u1012\u103a\u1001\u103d\u1032\u1015\u102f\u1036\u1005\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101c\u1012\u102d\u102f\u1017\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u1021\u1004\u103a\u1039\u1002\u101c\u102d\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u1021\u1000\u103a\u1005\u103a\u1015\u101b\u1014\u103a\u1010\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u1021\u1000\u103a\u1005\u103a\u1010\u102d\u102f\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u101f\u1014\u103a\u1018\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u1018\u102c\u1005\u103a\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u101f\u1014\u103a\u1002\u1030\u1038\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u1010\u102c\u1001\u103b\u101a\u103a\u101c\u103a\u101f\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u1006\u1000\u1039\u1000\u1006\u102d\u102f\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u101f\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u101b\u103e\u1019\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u1015\u102b\u101b\u103e\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u101b\u102d\u102f\u1038\u101b\u103e\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a\u1010\u102d\u102f\u1004\u103a\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u101b\u102d\u102f\u1038\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u1016\u1030\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(metaValue_FI)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u1016\u1031\u102c\u103a\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a \u1018\u1032\u101c\u102d\u102f\u1001\u103b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u1000\u103d\u1019\u103a\u1038\u1010\u102f\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u1016\u102c\u101b\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u1021\u1030\u1018\u1014\u103a\u1012\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a \u1016\u101b\u102e\u1005\u102e\u101b\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u1021\u102d\u102f\u1004\u103a\u1038\u101b\u1005\u103a\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u1005\u1000\u1031\u102c\u1037\u1010\u1005\u103a\u101b\u103e\u103a \u1002\u1031\u1038\u101c\u1005\u103a\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u1002\u102b\u101c\u102e\u1005\u102e\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u1002\u1030\u1021\u102c\u101b\u102c\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u1018\u102d\u102f\u1037\u1002\u103b\u103a\u1015\u1030\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u1019\u101e\u102d\u101e\u1031\u102c \u1018\u102c\u101e\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\u1002\u1030\u1002\u103b\u102c\u101b\u101e\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u1019\u1014\u103a\u1038\u1007\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u101f\u102c\u1025\u1005\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u101f\u102e\u1038\u1018\u101b\u1030\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u101f\u102d\u1014\u103a\u1012\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u101f\u1030\u1015\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u1018\u102e\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(metaValue_HR)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(metaValue_HT)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(metaValue_HU)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_AM)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u101f\u102e\u101b\u1032\u101b\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"IPA \u1021\u101e\u1036\u1011\u103d\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u1021\u1004\u103a\u1010\u102c\u101c\u1004\u103a\u1002\u103d\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u1002\u103b\u1019\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(metaValue_ID)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u1010\u102d\u1018\u1000\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u1021\u1005\u1039\u1002\u1018\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u1005\u102e\u1001\u103b\u103d\u1019\u103a \u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1015\u103c\u1004\u103a\u101e\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u1016\u101b\u1014\u103a\u1005\u102e\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u1021\u102e\u1012\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037 \u1016\u101b\u102e\u1005\u102e\u101b\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1016\u101b\u102e\u1005\u102e\u101b\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u1021\u102d\u102f\u1000\u103a\u1005\u103a\u101c\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u1021\u102e\u1014\u102f\u1001\u103a\u1010\u102e\u1010\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a \u1006\u102c\u1019\u102d"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u1002\u103b\u102c\u1017\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u1019\u1012\u1030\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u101c\u1030\u101c\u102e \u1006\u102c\u1019\u102d"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u1019\u1002\u102b\u101f\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u1019\u102d\u102f\u1004\u103a\u101e\u102e\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u1021\u102e\u1014\u102c\u101b\u102e \u1006\u102c\u1019\u102d"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u1005\u1005\u1039\u1005\u102e\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u1019\u1000\u102c\u1006\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u1005\u1001\u102d\u102f\u1038\u101c\u103a \u1006\u102c\u1019\u102d"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(metaValue_CD)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u1000\u102e\u1000\u1030\u101a\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u1019\u102c\u1006\u102d\u102f\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u1000\u103d\u1014\u103a\u1038\u101a\u102c\u1019\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u1000\u102c\u1007\u102c\u1001\u103b"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u1000\u101c\u102c\u1021\u103a\u101c\u102e\u1006\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u1000\u1014\u103a\u1014\u102c\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u1000\u1014\u1030\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u1000\u1000\u103a\u101b\u103e\u103a\u1019\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u1000\u1012\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u1000\u102d\u102f\u1019\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u1001\u102d\u102f\u1014\u102e\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u1000\u102c\u1002\u103b\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u1006\u102d\u102f\u1014\u1004\u103a\u1000\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(metaValue_LU)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u1019\u101c\u1031\u101a\u102c\u101c\u1019\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u1002\u1014\u103a\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u101c\u1004\u103a\u1018\u102c\u1002\u1005\u103a\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u101c\u1004\u103a\u1002\u102b\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u1016\u101b\u1030\u101c\u102e\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u1017\u103c\u102d\u1010\u102d\u101e\u103b\u103e\u1010\u102d\u102f\u1004\u103a\u1038\u1010\u102c\u1005\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(metaValue_LT)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u101c\u1030\u1018\u102c-\u1000\u1010\u1014\u103a\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(metaValue_LV)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}\u104a {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u1019\u102c\u101c\u1002\u1000\u103a\u1005\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u1019\u102c\u101b\u103e\u101a\u103a\u101c\u102d\u1007\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u1021\u1005\u1009\u103a\u101c\u102d\u102f\u1000\u103a\u1005\u102e\u1011\u102c\u1038\u101e\u1031\u102c \u101a\u1030\u1014\u102e\u1000\u102f\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u1019\u102c\u1021\u102d\u102f\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u1019\u1000\u103a\u1006\u102e\u1012\u102d\u102f\u1038\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u1019\u102c\u101b\u101e\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u1019\u101c\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u1019\u1031\u102c\u103a\u101c\u103a\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_MM)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_AM)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u1019\u102d\u102f\u1037\u1001\u103a\u101b\u103e\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u1021\u1014\u102d\u1019\u1037\u103a \u1006\u102d\u102f\u1018\u102e\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u101a\u1031\u1018\u102f\u101a\u103b\u101b\u103e\u102c\u1001\u103c\u1004\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u1014\u1031\u102c\u103a\u101d\u1031 \u1018\u103d\u1010\u103a\u1001\u103a\u1019\u1031\u102c\u103a\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1021\u103d\u1014\u103a\u1014\u103a\u1012\u102e\u1018\u102e\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u1021\u103d\u1014\u103a\u1012\u103d\u1014\u103a\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u1012\u1010\u103a\u1001\u103a\u103b"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u1014\u1031\u102c\u103a\u101d\u1031 \u1014\u102e\u1038\u1014\u1031\u102c\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u1014\u1031\u102c\u103a\u101d\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a \u1021\u103d\u1014\u103a\u1014\u103a\u1018\u102e\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u1014\u102c\u1017\u102c\u101f\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u1014\u101b\u1014\u103a\u1002\u103b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u1000\u1001\u103b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u1000\u1018\u102d\u102f\u1004\u103a\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u1021\u102d\u102f\u1005\u102e\u1010\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u1002\u103b\u1030\u1021\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u1000\u1019\u103a\u1018\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u1019\u1014\u103a\u1012\u1032"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u1019\u102e\u101b\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u1021\u102c\u1019\u1031\u1038\u1014\u102e\u1038\u101a\u102c\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u1021\u102d\u102f\u101b\u102d\u102f\u1019\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u1021\u102d\u102f\u101b\u102e\u101b\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u1021\u102d\u102f\u1006\u1032\u1010\u1005\u103a\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u1000\u1018\u102c\u1012\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(metaValue_MU)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u1006\u101b\u102c\u1014\u1014\u103a \u1010\u103d\u1014\u103a\u1002\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u1015\u1014\u103a\u1001\u103b\u102c\u1015\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u1012\u1030\u1021\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u1015\u102b\u1020\u102d"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(metaValue_PL)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1012\u1010\u103a\u1001\u103b\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u1012\u1014\u103a\u1038\u1002\u102d \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u1015\u1000\u103a\u101b\u103e\u103a\u1010\u103d\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(metaValue_PT)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1021\u102d\u102f\u1004\u103a\u1038\u101b\u1005\u103a\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u1021\u1005\u1009\u103a\u101c\u102d\u102f\u1000\u103a\u1005\u102e\u101b\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u1018\u101b\u102c\u1007\u102e\u1038 \u1015\u1031\u102b\u103a\u1010\u1030\u1002\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u1010\u102d\u102f\u1004\u103a\u1021\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u1019\u102c\u1001\u1030\u101d\u102b-\u1019\u102e\u1021\u102e\u1010\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u1004\u103d\u1031\u101b\u1031\u1010\u103d\u1000\u103a\u1015\u102f\u1036\u1005\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u1019\u102e\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"\u1042\u1044 \u1014\u102c\u101b\u102e \u1005\u1014\u1005\u103a (\u1040\u2013\u1042\u1043)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"\u1042\u1044 \u1014\u102c\u101b\u102e \u1005\u1014\u1005\u103a(\u1041\u2013\u1042\u1044)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\u1006\u102c\u101f\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u1019\u103c\u1014\u103a\u1019\u102c \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u1001\u102e\u1001\u103b\u1030\u101d\u102b\u1021\u102d\u102f\u101d\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u1017\u102d\u102f\u1012\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u1019\u102c\u1001\u103d\u1014\u103a\u1012\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"\u1041\u1042 \u1014\u102c\u101b\u102e\u1005\u1014\u1005\u103a (\u1041\u2013\u1041\u1042)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"\u1041\u1042 \u1014\u102c\u101b\u102e \u1005\u1014\u1005\u103a (\u1040\u2013\u1041\u1041)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u101b\u1031\u102c\u1019"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u101b\u103d\u1014\u103a\u1012\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u1004\u103d\u1031\u1000\u103c\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u101b\u102d\u102f\u1019\u1031\u1014\u102e\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u1029\u101b\u102e\u101b\u102c \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u1010\u101b\u102f\u1010\u103a \u1006\u101a\u103a\u101c\u102e\u1005\u1014\u1005\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u101b\u102f\u101b\u103e"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u1000\u1004\u103a\u101b\u102c\u101d\u1014\u103a\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u1000\u1018\u1030\u1017\u102c\u1012\u102e\u1021\u102c\u1014\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u1019\u1005\u103a\u1001\u103a\u1019\u1000\u103a\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u1006\u1030\u1000\u1030\u1019\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u1029\u1005\u1010\u103c\u1031\u1038\u101c\u103b \u1021\u1004\u103a\u1039\u1002\u101c\u102d\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u101e\u1004\u103a\u1039\u101e\u1000\u101b\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u1006\u102c\u1012\u102e\u1014\u102e\u1038\u101a\u102c\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u1005\u1004\u103a\u1012\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1006\u102c\u1019\u102d"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u1005\u1030\u1000\u1030\u1019\u102e\u1014\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u1006\u1014\u103a\u1002\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u1005\u1004\u103a\u101f\u102c\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u1006\u101c\u102d\u102f\u1017\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(metaValue_SI)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u1006\u1019\u102d\u102f\u1021\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u101b\u103e\u102d\u102f\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u1006\u102d\u102f\u1019\u102c\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u1021\u102c\u101b\u1015\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(metaValue_AL)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(metaValue_RS)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of("{0}- {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(metaValue_SZ)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u1005\u102c\u101b\u1004\u103a\u1038\u1000\u102d\u102f\u1004\u103a\u101e\u102f\u1036\u1038 \u1004\u103d\u1031\u101b\u1031\u1010\u103d\u1000\u103a\u1015\u102f\u1036\u1005\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u1010\u1031\u102c\u1004\u103a\u1015\u102d\u102f\u1004\u103a\u1038 \u1006\u102d\u102f\u101e\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\u1002\u103b\u102c\u1017\u102c\u1038\u1014\u102e\u1038\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_SD)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u1006\u103d\u102c\u101f\u102e\u101c\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u101b\u102d\u102f\u1038\u101b\u102c \u1010\u101b\u102f\u1010\u103a \u1018\u100f\u1039\u100d\u102c\u101b\u1031\u1038\u101e\u102f\u1036\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u1021\u102e\u1018\u102e\u1018\u102e\u101a\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u1021\u102e\u1017\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u1021\u102c\u101b\u103e"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u1021\u101c\u101a\u103a\u1021\u102c\u101b\u103e"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u1010\u102e\u101c\u102e\u1002\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a\u1021\u102c\u101b\u103e"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u1010\u102c\u1002\u103b\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_TH)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u1010\u102e\u1002\u103a\u101b\u1004\u103a\u101a\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u1018\u1030\u1002\u1005\u103a\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u1000\u102d\u102f\u101b\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u1000\u1014\u1031\u1012\u102b \u1021\u1004\u103a\u1039\u1002\u101c\u102d\u1015\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(metaValue_TM)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u1010\u102e\u1006\u101d\u102b\u1014\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u1002\u103b\u102d\u102f\u101c\u102c-\u1016\u103d\u1014\u103a\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u1002\u103b\u1015\u1014\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u1006\u103d\u1014\u103a\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u1000\u102d\u102f\u1019\u102d\u102f\u101b\u102e\u1038\u101a\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u1010\u102c\u1010\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u1010\u101f\u102e\u1010\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u1025\u101b\u1031\u102c\u1015"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u1021\u101b\u103e\u1031\u1037 \u1025\u101b\u1031\u102c\u1015"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u1019\u103c\u1031\u102c\u1000\u103a \u1025\u101b\u1031\u102c\u1015"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u1012\u1007\u102c\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u1021\u1014\u1031\u102c\u1000\u103a \u1025\u101b\u1031\u102c\u1015"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u101d\u102e\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u1021\u1019\u103b\u102c\u1038\u1014\u103e\u1004\u1037\u103a\u101e\u1000\u103a\u1006\u102d\u102f\u1004\u103a\u101e\u1031\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u1021\u1030\u101b\u103a\u1012\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u1000\u102c\u101c\u103a\u1019\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u1025\u1007\u1018\u1010\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u1001\u102b\u1005\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"\u1041\u1049\u1049\u1046 \u1002\u103b\u102c\u1019\u1014\u103a \u101b\u1031\u1038\u1011\u102f\u1036\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u1002\u103b\u102c\u1019\u1014\u103a (\u1014\u101a\u103a\u101e\u102c\u101c\u1014\u103a)"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u1017\u1004\u103a\u1014\u103a\u1012\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u1019\u1004\u103a\u1002\u102f\u1021\u102d\u102f \u1015\u103c\u1000\u1039\u1001\u1012\u102d\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u1000\u102d\u102f\u101b\u102c \u1001\u103b\u102e\u1021\u102e\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u1014\u102c\u101b\u102e\u1005\u1000\u103a\u101d\u1014\u103a\u1038 (\u1041\u1042 \u1014\u103e\u1004\u1037\u103a \u1042\u1044)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u1017\u102d\u102f\u101c\u102c\u1015\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u1000\u102e\u1001\u103a\u1021\u102e\u1001\u103b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u1002\u102b"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u101d\u102b\u101c\u1030\u1038\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u1002\u102b\u1002\u102f\u1007\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_SY)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u101d\u1030\u101c\u102d\u102f\u1016\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u1019\u102d\u102f\u101b\u102d\u102f\u1000\u102d\u102f \u1010\u1019\u1007\u102d\u102f\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u1001\u1031\u1010\u103a\u101e\u1005\u103a \u101b\u103e\u1031\u1037\u1006\u1031\u102c\u1004\u103a \u1021\u102c\u101b\u1017\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u1019\u1014\u103a\u1001\u103b\u1030\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u1019\u1014\u102d\u1015\u1030\u101b"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u101b\u102d\u102f\u1038\u101b\u103e\u1004\u103a\u1038 \u1010\u101b\u102f\u1010\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u101b\u102d\u102f\u1038\u101b\u102c \u1010\u101b\u102f\u1010\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u1007\u102d\u102f\u1005\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u101b\u1031\u102c\u1019 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031 \u1005\u102c\u101c\u102f\u1036\u1038\u101e\u1031\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u1018\u101c\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u1019\u102d\u102f\u101f\u1031\u102c\u1037\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u1000\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"\u1041\u1046\u1049\u1044ACAD"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u1002\u103b\u1030\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u1019\u102d\u102f\u1005\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u101a\u102d\u102f\u101b\u1030\u1018\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u1005\u1015\u102d\u1014\u103a (\u1019\u1000\u1039\u1000\u1006\u102e\u1000\u102d\u102f)"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u1017\u102d\u102f\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u1000\u101c\u1014\u103a\u1002\u103b\u1004\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(metaValue_CN)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u1018\u102d\u102f\u1015\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u1005\u102c\u1015\u102d\u102f\u1012\u103a\u1001\u103d\u1032\u1015\u102f\u1036\u1005\u1036"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u1007\u1030\u1038\u101c\u1030\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u1016\u102f\u1014\u103a\u1038\u1005\u102c\u1021\u102f\u1015\u103a \u1021\u1005\u102e\u1021\u1005\u1009\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u1000\u1004\u103a\u1018\u103d\u1014\u103a\u1012\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u1002\u103b\u1015\u1014\u103a \u1018\u100f\u1039\u100d\u102c\u101b\u1031\u1038\u101e\u102f\u1036\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u1002\u102e\u1038\u1007\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"\u101b\u103e\u1019\u103a\u1038 \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\u1010\u1002\u101c\u1031\u102c\u1037\u1002\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u1021\u1019\u103a\u1018\u1030"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u1000\u102d\u102f\u1019\u102e-\u1015\u102b\u1019\u103c\u1000\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u1000\u103d\u1014\u103a\u1000\u1014\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\u101b\u103e\u1031\u1038\u101b\u102d\u102f\u1038\u1005\u1009\u103a\u101c\u102c \u1002\u103b\u102c\u1019\u1014\u103a \u101b\u1031\u1038\u1011\u102f\u1036\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u1000\u1015\u103a\u1015\u1032\u101c\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u1001\u1019\u102c \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u1021\u102e\u101c\u102d\u102f\u1000\u102d\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"\u1015\u1031\u102b\u1004\u103a\u1038\u1005\u1015\u103a\u1011\u102c\u1038\u101e\u1031\u102c \u1010\u1030\u101b\u1000\u102e \u101c\u1000\u103a\u1010\u1004\u103a\u1005\u1000\u102c\u1038\u101c\u102f\u1036\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u1019\u103d\u1014\u103a\u1012\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u1002\u1030\u1019\u1030\u1001\u102e \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u1018\u102c\u101e\u102c\u1005\u1000\u102c\u1038 \u1021\u1019\u103b\u102d\u102f\u1038\u1019\u103b\u102d\u102f\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u1010\u102d\u102f\u1004\u103a\u1038\u1010\u102c\u101b\u1031\u1038\u1005\u1014\u1005\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u1001\u101b\u102d\u1001\u103b"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u1000\u102c\u101b\u102e\u1017\u102c\u1010\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u1010\u1019\u102e\u1038\u101c\u103a \u1002\u100f\u1014\u103a\u1038\u1001\u103c\u1031"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u1000\u101b\u102c\u1001\u103b\u1031\u1038-\u1018\u102c\u1000\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u1021\u1004\u103a\u1002\u102f\u101b\u103e\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u1012\u102b\u101b\u102e"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u1000\u102c\u101b\u102e\u101c\u102e\u101a\u1014\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u1021\u102c\u1016\u102d\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u1000\u102d\u1014\u103a\u1038\u1002\u100f\u1014\u103a\u1038"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u1000\u1030\u101b\u102f\u1015\u103a\u1001\u103a"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u101b\u103e\u1014\u103a\u1018\u102c\u101c\u102c"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u1010\u102e\u101c\u102f"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u1018\u102c\u1016\u102e\u1021\u102c"_s)
		})
	}));
	return data;
}

LocaleNames_my::LocaleNames_my() {
}

$Class* LocaleNames_my::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_my, name, initialize, &_LocaleNames_my_ClassInfo_, allocate$LocaleNames_my);
	return class$;
}

$Class* LocaleNames_my::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun