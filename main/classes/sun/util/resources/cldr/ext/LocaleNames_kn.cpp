#include <sun/util/resources/cldr/ext/LocaleNames_kn.h>

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

$MethodInfo _LocaleNames_kn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_kn::*)()>(&LocaleNames_kn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_kn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_kn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_kn_MethodInfo_
};

$Object* allocate$LocaleNames_kn($Class* clazz) {
	return $of($alloc(LocaleNames_kn));
}

void LocaleNames_kn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"\u0ca8\u0ccc\u0cb0\u0cc1"_s);
	$var($String, metaValue_TK, u"\u0c9f\u0cca\u0c95\u0cc6\u0cb2\u0cbe\u0cb5\u0ccd"_s);
	$var($String, metaValue_TV, u"\u0c9f\u0cc1\u0cb5\u0cbe\u0cb2\u0cc1"_s);
	$var($String, metaValue_ar, u"\u0c85\u0cb0\u0cc7\u0cac\u0cbf\u0c95\u0ccd"_s);
	$var($String, metaValue_el, u"\u0c97\u0ccd\u0cb0\u0cc0\u0c95\u0ccd"_s);
	$var($String, metaValue_gu, u"\u0c97\u0cc1\u0c9c\u0cb0\u0cbe\u0ca4\u0cbf"_s);
	$var($String, metaValue_he, u"\u0cb9\u0cc0\u0cac\u0ccd\u0cb0\u0cc2"_s);
	$var($String, metaValue_hy, u"\u0c85\u0cb0\u0ccd\u0cae\u0cc7\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s);
	$var($String, metaValue_ja, u"\u0c9c\u0cbe\u0caa\u0ca8\u0cc0\u0cb8\u0ccd"_s);
	$var($String, metaValue_ka, u"\u0c9c\u0cbe\u0cb0\u0ccd\u0c9c\u0cbf\u0caf\u0ca8\u0ccd"_s);
	$var($String, metaValue_km, u"\u0c96\u0cae\u0cc7\u0cb0\u0ccd"_s);
	$var($String, metaValue_kn, u"\u0c95\u0ca8\u0ccd\u0ca8\u0ca1"_s);
	$var($String, metaValue_ko, u"\u0c95\u0cca\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s);
	$var($String, metaValue_la, u"\u0cb2\u0ccd\u0caf\u0cbe\u0c9f\u0cbf\u0ca8\u0ccd"_s);
	$var($String, metaValue_lo, u"\u0cb2\u0cbe\u0cb5\u0ccb"_s);
	$var($String, metaValue_ml, u"\u0cae\u0cb2\u0caf\u0cbe\u0cb3\u0c82"_s);
	$var($String, metaValue_mn, u"\u0cae\u0c82\u0c97\u0ccb\u0cb2\u0cbf\u0caf\u0ca8\u0ccd"_s);
	$var($String, metaValue_si, u"\u0cb8\u0cbf\u0c82\u0cb9\u0cb3"_s);
	$var($String, metaValue_su, u"\u0cb8\u0cc1\u0c82\u0ca1\u0cbe\u0ca8\u0cc0\u0cb8\u0ccd"_s);
	$var($String, metaValue_ta, u"\u0ca4\u0cae\u0cbf\u0cb3\u0cc1"_s);
	$var($String, metaValue_te, u"\u0ca4\u0cc6\u0cb2\u0cc1\u0c97\u0cc1"_s);
	$var($String, metaValue_th, u"\u0ca5\u0cbe\u0caf\u0ccd"_s);
	$var($String, metaValue_tl, u"\u0c9f\u0ccd\u0caf\u0cbe\u0c97\u0cb2\u0ccb\u0c97\u0ccd"_s);
	$var($String, metaValue_peo, u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0caa\u0cb0\u0ccd\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s);
	$var($String, metaValue_syr, u"\u0cb8\u0cbf\u0cb0\u0cbf\u0caf\u0cbe\u0c95\u0ccd"_s);
	$var($String, metaValue_uga, u"\u0c89\u0c97\u0cbe\u0cb0\u0cbf\u0c9f\u0cbf\u0c95\u0ccd"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u0c95\u0cb2\u0cca\u0c97\u0ccd\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u0c93\u0c98\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u0cae\u0cbf\u0cb0\u0cbe\u0c82\u0ca1\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u0cb8\u0c82\u0c95\u0cc7\u0ca4\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\u0c85\u0c9f\u0ccd\u0cb8\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u0cae\u0cbe\u0cb0\u0ccd\u0cb5\u0cbe\u0ca1\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u0c9f\u0cbe\u0c97\u0ccd\u0cac\u0cbe\u0ca8\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u0c8e\u0cae\u0ccb\u0c9c\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u0c9a\u0c95\u0ccd\u0cae\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0c88\u0c9c\u0cbf\u0caa\u0ccd\u0c9f\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u0cb0\u0cbe\u0c9c\u0cb8\u0ccd\u0ca5\u0cbe\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u0cab\u0cbe\u0c97\u0ccd\u0cb8\u0ccd-\u0caa\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u0c9f\u0cbf\u0cae\u0ccd\u0ca8\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u0c9f\u0cc6\u0cb8\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u0cb0\u0cbe\u0caa\u0cbe\u0ca8\u0cc1\u0caf\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u0c9f\u0cc6\u0cb0\u0cc6\u0ca8\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u0c85\u0cb8\u0cc6\u0ca8\u0ccd\u0cb6\u0ca8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u0cb0\u0cbe\u0cb0\u0ccb\u0c9f\u0cca\u0c82\u0c97\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u0c9f\u0cc7\u0c9f\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0c85\u0c82\u0ca1\u0ccb\u0cb0\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0caf\u0cc1\u0ca8\u0cc8\u0c9f\u0cc6\u0ca1\u0ccd \u0c85\u0cb0\u0cac\u0ccd \u0c8e\u0cae\u0cbf\u0cb0\u0cc7\u0c9f\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u0cab\u0ccd\u0cb2\u0cc6\u0cae\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0c85\u0cab\u0c98\u0cbe\u0ca8\u0cbf\u0cb8\u0ccd\u0ca5\u0cbe\u0ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0c86\u0c82\u0c9f\u0cbf\u0c97\u0cc1\u0cb5\u0cbe \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0cac\u0cb0\u0ccd\u0cac\u0cc1\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u0c87\u0ca5\u0cbf\u0caf\u0ccb\u0caa\u0cbf\u0c95\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0c86\u0c82\u0c97\u0ccd\u0cb5\u0cbf\u0cb2\u0ccd\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\u0cb8\u0cae\u0caf \u0cb5\u0cb2\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0c85\u0cb2\u0ccd\u0cac\u0cc7\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0c86\u0cb0\u0ccd\u0cae\u0cc7\u0ca8\u0cbf\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\u0ca4\u0cc6\u0c82\u0c97\u0ccd\u200c\u0cb5\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0c85\u0c82\u0c97\u0ccb\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0c85\u0c82\u0c9f\u0cbe\u0cb0\u0ccd\u0c9f\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0c85\u0cb0\u0ccd\u0c9c\u0cc6\u0c82\u0c9f\u0cbf\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u0c87\u0ca8\u0ccd\u0cb8\u0ccd\u200c\u0c95\u0ccd\u0cb0\u0cbf\u0caa\u0ccd\u0cb6\u0ca8\u0cb2\u0ccd \u0caa\u0cbe\u0cb0\u0ccd\u0ca5\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0ca8\u0ccd \u0cb8\u0cae\u0ccb\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0c86\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0c86\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0cc7\u0cb2\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0c85\u0cb0\u0cc1\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0c85\u0cae\u0cc6\u0cb0\u0cbf\u0c95\u0ca8\u0ccd \u0c87\u0c82\u0c97\u0ccd\u0cb2\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u0c86\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0c85\u0c9c\u0cb0\u0ccd\u0cac\u0cc8\u0c9c\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0cac\u0ccb\u0cb8\u0ccd\u0ca8\u0cbf\u0caf\u0cbe \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0cb9\u0cb0\u0ccd\u0c9c\u0cc6\u0c97\u0ccb\u0cb5\u0cbf\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u0cac\u0cbe\u0cb0\u0ccd\u0cac\u0ca1\u0ccb\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u0cb8\u0cc6\u0cac\u0cc1\u0cb5\u0cbe\u0ca8\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u0cac\u0cbe\u0c82\u0c97\u0ccd\u0cb2\u0cbe\u0ca6\u0cc7\u0cb6"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u0c95\u0cc1\u0cae\u0cc8\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0cac\u0cc6\u0cb2\u0ccd\u0c9c\u0cbf\u0caf\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0cb9\u0cc8 \u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u0cac\u0cc1\u0cb0\u0ccd\u0c95\u0cbf\u0ca8\u0cbe \u0cab\u0cbe\u0cb8\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0cac\u0cb2\u0ccd\u0c97\u0cc7\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0cac\u0cb9\u0ccd\u0cb0\u0cc7\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u0cac\u0cc1\u0cb0\u0cc1\u0c82\u0ca1\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u0cac\u0cc6\u0ca8\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u0cb8\u0cc7\u0c82\u0c9f\u0ccd \u0cac\u0cbe\u0cb0\u0ccd\u0ca5\u0cc6\u0cb2\u0cc6\u0cae\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0cac\u0cb0\u0ccd\u0cae\u0cc1\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u0c95\u0cc1\u0c9f\u0cc7\u0ca8\u0cbe\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u0c8e\u0cb0\u0ccd\u0c9d\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cc2\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0cac\u0cca\u0cb2\u0cbf\u0cb5\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u0c95\u0cc6\u0cb0\u0cc0\u0cac\u0cbf\u0caf\u0ca8\u0ccd \u0ca8\u0cc6\u0ca6\u0cb0\u0ccd\u200c\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cc6\u0c9c\u0cbf\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0cac\u0cb9\u0cbe\u0cae\u0cbe\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u0cb8\u0cca\u0c97"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u0cad\u0cc2\u0ca4\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u0cac\u0ccb\u0cb5\u0cc6\u0c9f\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0cac\u0ccb\u0c9f\u0ccd\u0cb8\u0ccd\u200c\u0cb5\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0cac\u0cc6\u0cb2\u0cbe\u0cb0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0cac\u0cc6\u0cb2\u0cbf\u0c9c\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u0cb5\u0cbf\u0cb8\u0cbf\u0cac\u0cb2\u0ccd \u0cb8\u0ccd\u0caa\u0cc0\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u0caa\u0cb0\u0ccd\u0cb7\u0cbf\u0caf\u0ca8\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u0cb9\u0cc0\u0cac\u0ccd\u0cb0\u0cc2 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u0c95\u0cc6\u0ca8\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u0c95\u0cca\u0c95\u0cca\u0cb8\u0ccd (\u0c95\u0cc0\u0cb2\u0cbf\u0c82\u0c97\u0ccd) \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u0cae\u0c9c\u0c82\u0ca6\u0cc6\u0cb0\u0cbe\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u0c95\u0cbe\u0c82\u0c97\u0ccb - \u0c95\u0cbf\u0ca8\u0ccd\u0cb6\u0cbe\u0cb8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe \u0c97\u0ca3\u0cb0\u0cbe\u0c9c\u0ccd\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u0c95\u0cbe\u0c82\u0c97\u0ccb - \u0cac\u0ccd\u0cb0\u0cbe\u0c9c\u0cbe\u0cb5\u0cbf\u0cb2\u0ccd\u0cb2\u0cc7"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbf\u0c9f\u0ccd\u0c9c\u0cb0\u0ccd\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u0c95\u0ccb\u0ca4\u0ccd \u0ca6\u0ccd\u2018\u0c87\u0cb5\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u0c95\u0cc1\u0c95\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0c9a\u0cbf\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u0c95\u0cc8\u0ca5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u0c95\u0ccd\u0caf\u0cbe\u0cae\u0cb0\u0cc2\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u0c9a\u0cc0\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u0c95\u0cca\u0cb2\u0c82\u0cac\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u0c95\u0ccd\u0cb2\u0cbf\u0caa\u0ccd\u0caa\u0cb0\u0ccd\u200c\u0c9f\u0cbe\u0ca8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u0c95\u0cca\u0cb8\u0ccd\u0c9f\u0cbe \u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u0c95\u0ccd\u0caf\u0cc2\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u0c95\u0cc7\u0caa\u0ccd \u0cb5\u0cb0\u0ccd\u0ca1\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u0c95\u0cc1\u0cb0\u0cbe\u0c95\u0cbe\u0cb5\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0c95\u0ccd\u0cb0\u0cbf\u0cb8\u0ccd\u0cae\u0cb8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\u0cb8\u0cc8\u0caa\u0ccd\u0cb0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0c9d\u0cc6\u0c95\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u0c8e\u0c95\u0cbe\u0c9c\u0cc1\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0cb9\u0cc8 \u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u0c85\u0c9b\u0cbf\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u0c9a\u0cbf\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u0ca1\u0cc8\u0c97\u0ccb \u0c97\u0cbe\u0cb0\u0ccd\u0cb8\u0cbf\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u0ca6\u0cc7\u0cb5\u0ca8\u0cbe\u0c97\u0cb0\u0cbf \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u0c9c\u0cbf\u0cac\u0cc2\u0c9f\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u0ca1\u0cc6\u0ca8\u0ccd\u0cae\u0cbe\u0cb0\u0ccd\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u0c85\u0c95\u0ccb\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u0c97\u0cca\u0c82\u0ca1\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cc8\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cbe\u0cb9\u0ccd\u0cae\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u0ca1\u0cca\u0cae\u0cbf\u0ca8\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u0c85\u0cb0\u0ccd\u0cae\u0cc7\u0ca8\u0cbf\u0caf\u0cbe\u0ca6 \u0cb8\u0ca3\u0ccd\u0ca3\u0c95\u0ccd\u0cb7\u0cb0 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0ca1\u0cca\u0cae\u0cc6\u0ca8\u0cbf\u0c95\u0ca8\u0ccd \u0cb0\u0cbf\u0caa\u0cac\u0ccd\u0cb2\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u0c97\u0cca\u0cb0\u0cca\u0c82\u0c9f\u0cbe\u0cb2\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u0c97\u0ccb\u0ca5\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u0cae\u0cc8\u0ca4\u0cbf \u0cae\u0caf\u0cc6\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u0c9d\u0cc2\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u0c9f\u0cc8\u0c97\u0ccd\u0cb0\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0c85\u0cb2\u0ccd\u0c9c\u0cc0\u0cb0\u0cbf\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u0caa\u0c82\u0c97\u0cbe\u0cb8\u0cbf\u0ca8\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"\u0c85\u0cb0\u0cc6\u0c85\u0c97\u0cb2\u0c95\u0ccd\u0c95\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u0caa\u0cb9\u0ccd\u0cb2\u0cb5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0cb8\u0cc6\u0caf\u0cc1\u0c9f\u0cbe \u0cb9\u0cbe\u0c97\u0cc2 \u0cae\u0cc6\u0cb2\u0cbf\u0cb2\u0ccd\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u0c9a\u0cbf\u0cac\u0ccd\u0c9a\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u0caa\u0c82\u0caa\u0cbe\u0c82\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0c88\u0c95\u0ccd\u0cb5\u0cc6\u0ca1\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u0caa\u0caa\u0cbf\u0caf\u0cbe\u0cae\u0cc6\u0c82\u0c9f\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u0c85\u0ca1\u0c82\u0c97\u0ccd\u0cae\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0c8e\u0cb8\u0ccd\u0c9f\u0ccb\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u0c9f\u0cbf\u0cb5\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0c88\u0c9c\u0cbf\u0caa\u0ccd\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u0caa\u0cb6\u0ccd\u0c9a\u0cbf\u0cae \u0cb8\u0cb9\u0cbe\u0cb0\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u0c9a\u0c97\u0c9f\u0cbe\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u0caa\u0cb2\u0cc1\u0c86\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u0c9a\u0cc2\u0c95\u0cbf\u0cb8\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u0c9a\u0cbf\u0ca8\u0cc2\u0c95\u0ccd \u0c9c\u0cbe\u0cb0\u0ccd\u0c97\u0ccb\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u0cae\u0cbe\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u0c9a\u0cbf\u0caa\u0cc6\u0cb5\u0ccd\u0caf\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u0c9a\u0ccb\u0c95\u0ccd\u0c9f\u0cbe\u0cb5\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u0c9a\u0cc6\u0cb0\u0ccb\u0c95\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0c8e\u0cb0\u0cbf\u0c9f\u0ccd\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0cb8\u0ccd\u0caa\u0cc7\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0c87\u0ca5\u0cbf\u0caf\u0ccb\u0caa\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u0caf\u0cc1\u0cb0\u0ccb\u0caa\u0cbf\u0caf\u0ca8\u0ccd \u0c92\u0c95\u0ccd\u0c95\u0cc2\u0c9f"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u0c8e\u0cb2\u0cbe\u0cae\u0cc8\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0c97\u0ccd\u0cb0\u0cc6\u0c97\u0ccb\u0cb0\u0cbf\u0caf\u0ca8\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u0caf\u0cc2\u0cb0\u0ccb\u0c9d\u0ccb\u0ca8\u0ccd\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u0c9a\u0cc0\u0caf\u0cc6\u0ca8\u0ccd\u0ca8\u0cc7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u0c97\u0cc1\u0c9c\u0cb0\u0cbe\u0ca4\u0cbf \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u0cb8\u0cbf\u0c82\u0ca7\u0cc2"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u0c85\u0ca1\u0cc8\u0c98\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0cab\u0cbf\u0ca8\u0ccd\u200c\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u0cab\u0cbf\u0c9c\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u0cab\u0cbe\u0c95\u0ccd\u200c\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u0cae\u0cc8\u0c95\u0ccd\u0cb0\u0ccb\u0ca8\u0cc7\u0cb6\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"\u0cb8\u0ccd\u0ca5\u0cb3\u0cc0\u0caf \u0cad\u0cbf\u0ca8\u0ccd\u0ca8\u0ca4\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u0cab\u0cb0\u0ccb \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0cab\u0ccd\u0cb0\u0cbe\u0ca8\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u0c97\u0ccd\u0cb0\u0cc7\u0cac\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u0cad\u0cbe\u0cb0\u0ca4\u0cc0\u0caf \u0cb0\u0cbe\u0cb7\u0ccd\u0c9f\u0ccd\u0cb0\u0cc0\u0caf \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0c97\u0ccd\u0cb0\u0cc0\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0c97\u0cc6\u0cac\u0cca\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u0cb5\u0ccb\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0caf\u0cc1\u0ca8\u0cc8\u0c9f\u0cc6\u0ca1\u0ccd \u0c95\u0cbf\u0c82\u0c97\u0ccd\u200c\u0ca1\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\u0ca8\u0cc8\u0c9c\u0cc0\u0cb0\u0cbf\u0caf\u0ca8\u0ccd \u0caa\u0cbf\u0ca1\u0ccd\u0c97\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u0c97\u0ccd\u0cb0\u0cc6\u0ca8\u0cc6\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u0c9c\u0cbe\u0cb0\u0ccd\u0c9c\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd \u0c97\u0caf\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u0c97\u0cc1\u0cb0\u0ccd\u0ca8\u0ccd\u200c\u0cb8\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0c98\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u0ca5\u0cbe\u0caf\u0ccd \u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u0c97\u0cbf\u0cac\u0ccd\u0cb0\u0cbe\u0cb2\u0ccd\u0c9f\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0cb9\u0cbf\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u0c97\u0ccd\u0cb0\u0cc0\u0ca8\u0ccd\u200c\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c87\u0c82\u0c97\u0ccd\u0cb2\u0cc0\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u0c97\u0ccd\u0caf\u0cbe\u0c82\u0cac\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u0c97\u0cbf\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u0c97\u0cc1\u0ca1\u0cc6\u0cb2\u0ccb\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u0c88\u0c95\u0ccd\u0cb5\u0cc6\u0c9f\u0ccb\u0cb0\u0cbf\u0caf\u0cb2\u0ccd \u0c97\u0cbf\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u0c97\u0ccd\u0cb0\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0c9c\u0cbe\u0cb0\u0ccd\u0c9c\u0cbf\u0caf\u0cbe \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0cb8\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd\u200d\u0cb5\u0cbf\u0c9a\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u0c97\u0ccd\u0cb5\u0cbe\u0c9f\u0cc6\u0cae\u0cbe\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u0c97\u0cc1\u0cb5\u0cbe\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u0c97\u0cbf\u0ca8\u0cbf-\u0cac\u0cbf\u0cb8\u0ccd\u0cb8\u0cbe\u0cb5\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u0c9f\u0ccd\u0cb2\u0cbf\u0c82\u0c97\u0cbf\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u0c95\u0ccd\u0cb2\u0cbf\u0c82\u0c97\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0cc2 \u0ca5\u0cbe\u0caf\u0ccd \u0cb2\u0cc1\u0c87"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0c97\u0caf\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c95\u0cc1\u0cb0\u0ccd\u0ca6\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u0caf\u0cbe\u0cb5\u0cc1\u0ca6\u0cc7 \u0cad\u0cbe\u0cb7\u0cbe\u0cb8\u0c82\u0cac\u0c82\u0ca7\u0cbf \u0cb5\u0cbf\u0cb7\u0caf\u0cb5\u0cbf\u0cb2\u0ccd\u0cb2"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0c86\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0cbf\u0caf\u0ca8\u0ccd \u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0cb9\u0cbe\u0c82\u0c97\u0ccd \u0c95\u0cbe\u0c82\u0c97\u0ccd SAR \u0c9a\u0cc8\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"\u0cb5\u0cbe\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u0cb9\u0cb0\u0ccd\u0ca1\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0cae\u0ccd\u0caf\u0cbe\u0c95\u0ccd\u200c\u0ca1\u0ccb\u0ca8\u0cbe\u0cb2\u0ccd\u0ca1\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0cb9\u0cca\u0c82\u0ca1\u0cc1\u0cb0\u0cbe\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0c95\u0ccd\u0cb0\u0cca\u0caf\u0cc7\u0cb7\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u0c85\u0c98\u0cc6\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbf\u0cb8\u0ccd \u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbf\u0c95\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd (\u0c89\u0cae\u0ccd \u0c85\u0cb2\u0ccd-\u0c96\u0cc1\u0cb0\u0cbe)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0cb9\u0cc8\u0c9f\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u0cb9\u0c82\u0c97\u0cc7\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\u0c9f\u0cae\u0cbe\u0cb7\u0cc6\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u0c95\u0ccd\u0caf\u0cbe\u0ca8\u0cb0\u0cbf \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"\u0ca8\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0c87\u0c82\u0ca1\u0ccb\u0ca8\u0cc7\u0cb6\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0c90\u0cb0\u0ccd\u0cb2\u0cc6\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u0ca8\u0cbf\u0caf\u0cbe\u0caa\u0cca\u0cb2\u0cbf\u0c9f\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u0ca8\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u0c9c\u0cbe\u0c9d\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb0\u0cc7\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u0c90\u0cb2\u0ccd \u0c86\u0cab\u0ccd \u0cae\u0ccd\u0caf\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0cad\u0cbe\u0cb0\u0ca4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"\u0caf\u0cc1\u0cb0\u0ccb\u0caa\u0cbf\u0ca8 \u0c85\u0ca8\u0cc1\u0c95\u0ccd\u0cb0\u0cae \u0ca8\u0cbf\u0caf\u0cae\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cbf\u0c9f\u0cc0\u0cb7\u0ccd \u0cb9\u0cbf\u0c82\u0ca6\u0cc2 \u0cae\u0cb9\u0cbe\u0cb8\u0cbe\u0c97\u0cb0\u0ca6 \u0caa\u0ccd\u0cb0\u0ca6\u0cc7\u0cb6"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0c87\u0cb0\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0c87\u0cb0\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0c90\u0cb8\u0ccd\u200c\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0c87\u0c9f\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u0c97\u0ca3\u0cbf\u0ca4 \u0cb8\u0c82\u0c95\u0cc7\u0ca4\u0cb2\u0cbf\u0caa\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u0ca5\u0cbe\u0caf\u0ccd \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u0cac\u0cbe\u0c82\u0c97\u0ccd\u0cb2\u0cbe \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u0c9c\u0cc6\u0cb0\u0ccd\u0cb8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbf\u0c95\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u0c9c\u0cae\u0cc8\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u0cac\u0cc6\u0c82\u0c97\u0cbe\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0c9c\u0ccb\u0cb0\u0ccd\u0ca1\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u0c9c\u0caa\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u0c90\u0ca8\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u0c97\u0cc1\u0cb8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0cbe\u0cb8\u0cbe \u0c9f\u0ccb\u0c82\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u0c95\u0ca8\u0ccd\u0ca8\u0ca1 \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u0c95\u0cc6\u0caf\u0cbe \u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbf\u0cb8\u0ccd \u0cb9\u0cc8 \u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"\u0c89\u0c9a\u0ccd\u0c9b\u0cbe\u0cb0\u0ca3\u0cbe\u0ca8\u0cc1\u0cb0\u0cc2\u0caa\u0cb5\u0cbe\u0c97\u0cbf \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u0cac\u0ccc\u0ca6\u0ccd\u0ca7\u0cb0 \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u0c95\u0cc0\u0ca8\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u0cb2\u0ccd\u0caf\u0cbe\u0c9f\u0cbf\u0ca8\u0ccd \u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u0c95\u0cbf\u0cb0\u0ccd\u0c97\u0cbf\u0cb8\u0ccd\u0ca5\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u0c95\u0cbe\u0c82\u0cac\u0ccb\u0ca1\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u0c95\u0cbf\u0cb0\u0cbf\u0cac\u0cbe\u0c9f\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u0c95\u0cca\u0cae\u0cca\u0cb0\u0cca\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0cb8\u0cc7\u0c82\u0c9f\u0ccd \u0c95\u0cbf\u0c9f\u0ccd\u0cb8\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0ca8\u0cc6\u0cb5\u0cbf\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u0c87\u0ca8\u0ccd\u200d\u0cb9\u0cc6\u0cb0\u0cbf\u0c9f\u0cc6\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u0c95\u0cc6\u0ca8\u0cc6\u0ca1\u0cbf\u0caf\u0ca8\u0ccd \u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0c95\u0cca\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0c95\u0cca\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u0caa\u0cca\u0cb2\u0ccd\u0cb2\u0cbe\u0cb0\u0ccd\u0ca1\u0ccd \u0cab\u0cca\u0ca8\u0cc6\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbf\u0cb8\u0ccd \u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u0c95\u0cc1\u0cb5\u0cc8\u0ca4\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u0c9f\u0ccb\u0c95\u0ccd \u0caa\u0cbf\u0cb8\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u0c95\u0cc7\u0cae\u0ca8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u0c95\u0c9d\u0cbe\u0c95\u0cbf\u0cb8\u0ccd\u0ca5\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u0cb8\u0cbf\u0cb0\u0cbf\u0cb2\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u0cb2\u0cbe\u0cb5\u0ccb\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u0cb2\u0cc6\u0cac\u0ca8\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u0cb8\u0cc7\u0c82\u0c9f\u0ccd \u0cb2\u0cc2\u0cb8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u0cab\u0cc0\u0ca8\u0cbf\u0cb7\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0c9a\u0cb0\u0ccd\u0c9a\u0ccd \u0cb8\u0ccd\u0cb2\u0ccb\u0cb5\u0cbe\u0ca8\u0cbf\u0c95\u0ccd \u0cb8\u0cbf\u0cb0\u0cbf\u0cb2\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u0c97\u0ccd\u0cb5\u0cbf\u0c9a\u0ccd\u200c\u0c87\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u0cb2\u0ccb \u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u0cb2\u0cbf\u0c9a\u0cc6\u0ca8\u0ccd\u200c\u0cb8\u0ccd\u0c9f\u0cc8\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0cb6\u0ccd\u0cb0\u0cc0\u0cb2\u0c82\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u0c85\u0c95\u0ccd\u0c95\u0cbe\u0ca1\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0c95\u0cca\u0caa\u0ccd\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u0cb2\u0cbf\u0cac\u0cc7\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u0cb2\u0cc6\u0cb8\u0cca\u0ca5\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\u0cac\u0cc1\u0c95\u0ccd \u0caa\u0cbe\u0cb9\u0ccd\u0cb2\u0cb5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u0cb2\u0cbf\u0ca5\u0cc1\u0cb5\u0cc7\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u0cb2\u0c95\u0ccd\u0cb8\u0cc6\u0c82\u0cac\u0cb0\u0ccd\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u0cb2\u0cbe\u0c9f\u0ccd\u0cb5\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u0c95\u0c9f\u0c95\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u0cb2\u0cbf\u0cac\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u0cb2\u0ccd\u0caf\u0cbe\u0ca1\u0cbf\u0ca8\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u0cb5\u0cc1\u0c82\u0c9c\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u0cb2\u0cb9\u0c82\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u0cb2\u0cbe\u0c82\u0c97\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u0ca5\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u0cae\u0cca\u0cb0\u0cbe\u0c95\u0ccd\u0c95\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u0cae\u0cca\u0ca8\u0cbe\u0c95\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u0cae\u0cca\u0cb2\u0ccd\u0ca1\u0ccb\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u0cae\u0cca\u0c82\u0c9f\u0cc6\u0ca8\u0cc6\u0c97\u0ccd\u0cb0\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u0cb8\u0cc7\u0c82\u0c9f\u0ccd \u0cae\u0cbe\u0cb0\u0ccd\u0c9f\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u0cb2\u0c82\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u0cae\u0ca1\u0c97\u0cbe\u0cb8\u0ccd\u0c95\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u0cae\u0cbe\u0cb0\u0ccd\u0cb7\u0cb2\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u0c85\u0cb2\u0cc6\u0caf\u0cc1\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"\u0cb5\u0cbe\u0caf\u0ccd \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0cae\u0ccd\u0caf\u0cbe\u0cb8\u0cbf\u0ca1\u0ccb\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u0cae\u0cbe\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u0cae\u0caf\u0ca8\u0ccd\u0cae\u0cbe\u0cb0\u0ccd (\u0cac\u0cb0\u0ccd\u0cae\u0cbe)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u0cae\u0c82\u0c97\u0ccb\u0cb2\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u0ca8\u0cc7\u0cb5\u0cbe\u0cb0\u0cc0"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u0cae\u0c95\u0cbe\u0cb5\u0cc1 SAR \u0c9a\u0cc8\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0cae\u0cb0\u0cbf\u0caf\u0cbe\u0ca8\u0cbe \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u0cae\u0cbe\u0cb0\u0ccd\u0c9f\u0cbf\u0ca8\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u0cae\u0cbe\u0cb0\u0cbf\u0c9f\u0cc7\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u0cae\u0cbe\u0c82\u0c9f\u0ccd\u200c\u0cb8\u0cc6\u0cb0\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u0cae\u0cbe\u0cb2\u0ccd\u0c9f\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"\u0caf\u0cc1\u0c8e\u0cb8\u0ccd \u0c9c\u0cbf\u0c87\u0c9c\u0cbf\u0c8e\u0ca8\u0ccd \u0cb2\u0cbf\u0caa\u0ccd\u0caf\u0c82\u0ca4\u0cb0\u0ca3"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u0cae\u0cbe\u0cb0\u0cbf\u0cb7\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0c85\u0cb2\u0ccd\u0c9f\u0cbe\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u0cae\u0cbe\u0cb2\u0ccd\u0ca1\u0cc0\u0cb5\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u0cae\u0cb2\u0cbe\u0cb5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u0cae\u0cc6\u0c95\u0ccd\u0cb8\u0cbf\u0c95\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u0c9c\u0caa\u0cbe\u0ca8\u0cc0\u0cb8\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u0cae\u0cb2\u0cc7\u0cb6\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u0cae\u0cca\u0c9c\u0cbe\u0c82\u0cac\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\u0c87\u0ca8\u0ccd\u0cb8\u0ccd\u200c\u0c95\u0ccd\u0cb0\u0cbf\u0caa\u0ccd\u0cb6\u0ca8\u0cb2\u0ccd \u0caa\u0cbe\u0cb9\u0ccd\u0cb2\u0cb5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u0ca8\u0cae\u0cc0\u0cac\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u0c89\u0caa-\u0cb8\u0cb9\u0cbe\u0cb0\u0ca8\u0ccd \u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u0cb9\u0cc0\u0cac\u0ccd\u0cb0\u0cc2 \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u0ca1\u0cbf\u0c95\u0ccd\u0cb7\u0ca8\u0cb0\u0cbf \u0c85\u0ca8\u0cc1\u0c95\u0ccd\u0cb0\u0cae \u0cb5\u0cbf\u0ca8\u0ccd\u0caf\u0cbe\u0cb8"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0cc2 \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cbf\u0ca1\u0ccb\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"\u0cb5\u0cc7\u0ca1\u0ccd-\u0c97\u0cc8\u0cb2\u0ccd\u0cb8\u0ccd \u0cb0\u0ccb\u0cae\u0ca8\u0cc8\u0cb8\u0cc7\u0cb6\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u0ca8\u0cc8\u0c9c\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u0ca8\u0cbe\u0cb0\u0ccd\u0cab\u0ccb\u0c95\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u0ca8\u0cc8\u0c9c\u0cc0\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u0c9f\u0cb0\u0cca\u0c95\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u0cb8\u0cbe\u0cb2\u0ccd\u0c9f\u0cb0\u0ccd \u0caa\u0cbe\u0cb9\u0ccd\u0cb2\u0cb5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u0ca8\u0cbf\u0c95\u0cbe\u0cb0\u0cbe\u0c97\u0cc1\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\u0caa\u0cb9\u0cb5\u0ccd \u0cb9\u0ccd\u0cae\u0ccb\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u0ca8\u0cc6\u0ca6\u0cb0\u0ccd\u200c\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u0ca8\u0cbe\u0cb0\u0ccd\u0cb5\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u0ca8\u0cc7\u0caa\u0cbe\u0cb3"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u0ca8\u0cbf\u0caf\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\u0cab\u0cc0\u0ca8\u0cbf\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u0cb0\u0cca\u0c82\u0cac\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u0cb8\u0cbf\u0c82\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0cc2\u0c9c\u0cbf\u0cb2\u0cc6\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u0cb0\u0ccb\u0cae\u0cbe\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u0cae\u0cc6\u0cb0\u0cca\u0caf\u0cbf\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u0c95\u0ccd\u0cb0\u0cbf\u0cae\u0cc0\u0caf\u0ca8\u0ccd \u0c9f\u0cb0\u0ccd\u0c95\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0c87\u0c82\u0c97\u0ccd\u0cb2\u0cc0\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0c93\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u0c86\u0c82\u0c97\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\u0cb8\u0cc6\u0cb8\u0cc6\u0cb2\u0ccd\u0cb5\u0cbe \u0c95\u0ccd\u0cb0\u0caf\u0ccb\u0cb2\u0ccd \u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u0caa\u0ca8\u0cbe\u0cae\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbf\u0c95\u0ccd-\u0cb8\u0cbf\u0cb5\u0cbf\u0cb2\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u0c95\u0cb6\u0cc1\u0cac\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cbf\u0c9f\u0cbf\u0cb7\u0ccd \u0c87\u0c82\u0c97\u0ccd\u0cb2\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u0caa\u0cc6\u0cb0\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd \u0caa\u0cbe\u0cb2\u0cbf\u0ca8\u0cc7\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u0caa\u0caa\u0cc1\u0cb5\u0cbe \u0ca8\u0ccd\u0caf\u0cc2\u0c97\u0cbf\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u0cab\u0cbf\u0cb2\u0cbf\u0cab\u0cc8\u0ca8\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u0caa\u0cbe\u0c95\u0cbf\u0cb8\u0ccd\u0ca4\u0cbe\u0ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u0caa\u0ccb\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u0c87\u0cb5\u0cbe\u0c82\u0ca1\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u0cb8\u0cc7\u0c82\u0c9f\u0ccd \u0caa\u0cbf\u0caf\u0cb0\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0cae\u0cbf\u0c95\u0ccd\u0cb5\u0cc6\u0cb2\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u0caa\u0cbf\u0c9f\u0ccd\u200c\u0c95\u0cc8\u0cb0\u0ccd\u0ca8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u0caa\u0ccd\u0caf\u0cc2\u0cb0\u0ccd\u0c9f\u0ccb \u0cb0\u0cbf\u0c95\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u0caa\u0ccd\u0caf\u0cbe\u0cb2\u0cc7\u0cb8\u0ccd\u0c9f\u0cc7\u0ca8\u0cbf\u0caf\u0ca8\u0ccd \u0caa\u0ccd\u0cb0\u0ca6\u0cc7\u0cb6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u0cac\u0cbe\u0cb2\u0cbf\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u0caa\u0ccb\u0cb0\u0ccd\u0c9a\u0cc1\u0c97\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u0caa\u0cb2\u0cbe\u0cb5\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u0ca8\u0cbf\u0caf\u0cbe\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u0c97\u0ccd\u0cb0\u0cc0\u0c95\u0ccd \u0cb2\u0ccb\u0cb5\u0cb0\u0ccd\u200c\u0c95\u0cc7\u0cb8\u0ccd \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u0caa\u0cb0\u0cbe\u0c97\u0ccd\u0cb5\u0cc7"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u0ca4\u0cc1\u0c82\u0cac\u0cc1\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u0c96\u0ca4\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u0ca8\u0cbf\u0caf\u0cc1\u0cb5\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u0c94\u0c9f\u0ccd \u0cb2\u0cc8\u0caf\u0cbf\u0c82\u0c97\u0ccd \u0c93\u0cb7\u0cbf\u0caf\u0cbe\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u0cb2\u0cc6\u0c9c\u0ccd\u0c98\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u0ca5\u0cbe\u0caf\u0ccd \u0cb5\u0cbf\u0caf\u0cc6\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0caa\u0c82\u0c9a"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0cb0\u0cbf\u0caf\u0cc2\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u0cb2\u0cca\u0c9c\u0ccd\u0cac\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u0cb0\u0cc6\u0c9c\u0cbe\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u0c93\u0cb6\u0cbf\u0caf\u0cc7\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0cb0\u0cca\u0cae\u0cc7\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u0cb8\u0cc6\u0cb0\u0ccd\u0cac\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0cb0\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u0cb0\u0cc1\u0cb5\u0cbe\u0c82\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\u0cae\u0ca8\u0cbf\u0c9a\u0cc8\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u0c96\u0cb0\u0ccb\u0cb6\u0ccd\u0ca4\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0cb8\u0ccc\u0ca6\u0cbf \u0c85\u0cb0\u0cc7\u0cac\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u0caa\u0ccb\u0ca8\u0ccd\u200c\u200c\u0caa\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u0cae\u0c82\u0ca1\u0cc7\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0cb8\u0cbe\u0cb2\u0cca\u0cae\u0ca8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u0c9f\u0cb8\u0cb5\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u0caa\u0cb6\u0ccd\u0c9a\u0cbf\u0cae \u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u0cb8\u0cc0\u0cb6\u0cc6\u0cb2\u0ccd\u0cb2\u0cc6\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0cb8\u0cc1\u0ca1\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cc0\u0ca1\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0cb5 \u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u0c85\u0cb0\u0cbe\u0cae\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0cb8\u0cbf\u0c82\u0c97\u0caa\u0cc1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0cb8\u0cc7\u0c82\u0c9f\u0ccd \u0cb9\u0cc6\u0cb2\u0cc6\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u0c95\u0c9f\u0ccd\u0c9f\u0cc1\u0ca8\u0cbf\u0c9f\u0ccd\u0c9f\u0cbe\u0ca6 \u0cb2\u0cc8\u0ca8\u0ccd \u0cac\u0ccd\u0cb0\u0cc7\u0c95\u0ccd \u0cb6\u0cc8\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0cb8\u0ccd\u0cb2\u0ccb\u0cb5\u0cc7\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe\u0ca6 \u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0cad\u0cbe\u0c97"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbe\u0cb2\u0ccd\u0cac\u0cbe\u0cb0\u0ccd\u0ca1\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0c9c\u0cbe\u0ca8\u0ccd \u0cae\u0cc6\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0c85\u0cae\u0cc6\u0cb0\u0cbf\u0c95\u0cbe\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0cb8\u0ccd\u0cb2\u0cca\u0cb5\u0cbe\u0c95\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0cb8\u0cbf\u0caf\u0cc6\u0cb0\u0ccd\u0cb0\u0cbe \u0cb2\u0cbf\u0caf\u0ccb\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u0cb8\u0ccd\u0caf\u0cbe\u0ca8\u0ccd \u0cae\u0cc6\u0cb0\u0cbf\u0ca8\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0cb8\u0cc6\u0ca8\u0cc6\u0c97\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0cb8\u0cca\u0cae\u0cbe\u0cb2\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u0cae\u0caa\u0cc1\u0c9a\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0c85\u0cb0\u0caa\u0cbe\u0cb9\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95 \u0ca4\u0cae\u0cbf\u0cb3\u0cc1 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0cb8\u0cc1\u0cb0\u0cbf\u0ca8\u0cbe\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0cb8\u0cc1\u0ca1\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u0cb8\u0cbe\u0cb5\u0ccb \u0c9f\u0ccb\u0cae\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0caa\u0ccd\u0cb0\u0cbf\u0ca8\u0ccd\u0cb8\u0cbf\u0caa\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0c8e\u0cb2\u0ccd \u0cb8\u0cbe\u0cb2\u0ccd\u0cb5\u0cc7\u0ca1\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u0cb8\u0cbf\u0c82\u0c9f\u0ccd \u0cae\u0cbe\u0cb0\u0ccd\u0c9f\u0cc6\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0cb8\u0cbf\u0cb0\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u0caf\u0cbe\u0cb5\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbe\u0ca4\u0cbf\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u0c85\u0cb0\u0cbe\u0cb5\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u0caf\u0caa\u0cc0\u0cb8\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u0c9f\u0ccd\u0cb0\u0cbf\u0cb8\u0ccd\u0ca4\u0ca8\u0ccd \u0ca1\u0cbe \u0c95\u0cc1\u0ca8\u0ccd\u0cb9\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u0c85\u0cb8\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0cbe\u0ca6 \u0cae\u0cbe\u0caa\u0ca8\u0cbe \u0cb5\u0ccd\u0caf\u0cb5\u0cb8\u0ccd\u0ca5\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0cbe\u0ca6 \u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0cad\u0cbe\u0c97"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u0c9f\u0cb0\u0ccd\u0c95\u0ccd\u0cb8\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0c95\u0cc8\u0c95\u0ccb\u0cb8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u0caf\u0cbe\u0c82\u0c97\u0ccd\u0cac\u0cc6\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u0c9a\u0cbe\u0ca6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd \u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0caa\u0ccd\u0cb0\u0ca6\u0cc7\u0cb6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u0c9f\u0ccb\u0c97\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u0ca5\u0cc8\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u0ca4\u0c9c\u0cbf\u0c95\u0cbf\u0cb8\u0ccd\u0ca4\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u0c95\u0cc6\u0cb0\u0cc0\u0cac\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0cb5 \u0ca4\u0cbf\u0cae\u0ccb\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u0caf\u0cc6\u0c82\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"\u0cb9\u0c82\u0c97\u0cc1\u0cb2\u0ccd \u0c86\u0ca6\u0ccd\u0caf\u0c95\u0ccd\u0cb7\u0cb0 \u0cb5\u0ccd\u0caf\u0c82\u0c9c\u0ca8\u0ca6 \u0cae\u0cc2\u0cb2\u0c95 \u0cb9\u0cc1\u0ca1\u0cc1\u0c95\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u0ca4\u0cc1\u0cb0\u0ccd\u0c95\u0cae\u0cc6\u0ca8\u0cbf\u0cb8\u0ccd\u0ca4\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u0c9f\u0cc1\u0ca8\u0cc0\u0cb6\u0cbf\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u0c9f\u0cca\u0c82\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u0c9f\u0cb0\u0ccd\u0c95\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u0c9f\u0ccd\u0cb0\u0cbf\u0ca8\u0cbf\u0ca1\u0cbe\u0ca1\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0c9f\u0cca\u0cac\u0cbe\u0c97\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u0ca4\u0cc8\u0cb5\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u0c86\u0cb8\u0ccd\u0c9f\u0cc1\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u0c93\u0cb0\u0ccd\u0c96\u0ccb\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u0ca4\u0cbe\u0c82\u0c9c\u0cc7\u0ca8\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u0c96\u0ccd\u0cb5\u0cbe\u0cb8\u0cbf\u0caf\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u0c85\u0caa\u0cb0\u0cbf\u0c9a\u0cbf\u0ca4 \u0cb2\u0cbf\u0caa\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0c89\u0c95\u0ccd\u0cb0\u0cc8\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u0c85\u0cb0\u0ccb\u0cae\u0cbe\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0cb5 \u0c8f\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u0c9f\u0cc1\u0cb5\u0cbf\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u0c95\u0cbe\u0c82\u0c97\u0cca \u0cb8\u0ccd\u0cb5\u0cb9\u0cbf\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0c8f\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u0cb9\u0cc8\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u0c86\u0c97\u0ccd\u0ca8\u0cc7\u0caf \u0c8f\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0c89\u0c97\u0cbe\u0c82\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"\u0cb9\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u0caa\u0cbf\u0ca8\u0ccd\u200c\u0caf\u0cbf\u0ca8\u0ccd \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0caf\u0cc2\u0cb0\u0ccb\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u0caf\u0cc1\u0c8e\u0cb8\u0ccd\u200c \u0c94\u0c9f\u0ccd\u200c\u0cb2\u0cc7\u0caf\u0cbf\u0c82\u0c97\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u0cb8\u0c82\u0caf\u0cc1\u0c95\u0ccd\u0ca4 \u0cb8\u0c82\u0cb8\u0ccd\u0ca5\u0cbe\u0ca8\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0caf\u0cc1\u0ca8\u0cc8\u0c9f\u0cc6\u0ca1\u0ccd \u0cb8\u0ccd\u0c9f\u0cc7\u0c9f\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u0cb9\u0cb5\u0cbe\u0caf\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u0cb8\u0cb0\u0cb3\u0cc0\u0c95\u0cc3\u0ca4 \u0c9a\u0cc8\u0ca8\u0cc0\u0cb8\u0ccd \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0c89\u0cb0\u0cc1\u0c97\u0ccd\u0cb5\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0c89\u0c9c\u0ccd\u0cac\u0cc7\u0c95\u0cbf\u0cb8\u0ccd\u0ca5\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c85\u0c9f\u0ccd\u0cb2\u0cbe\u0cb8\u0ccd \u0c9f\u0cae\u0c9c\u0cc8\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0ccb\u0c95\u0ccd \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u0ca8\u0cbf\u0c82\u0cac\u0cc2\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u0cb5\u0ccd\u0caf\u0cbe\u0c9f\u0cbf\u0c95\u0ca8\u0ccd \u0cb8\u0cbf\u0c9f\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0caa\u0ccd\u0cb0\u0cca\u0cb5\u0cc6\u0ca8\u0ccd\u0cb6\u0cbf\u0caf\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0cb8\u0cc7\u0c82\u0c9f\u0ccd. \u0cb5\u0cbf\u0ca8\u0ccd\u0cb8\u0cc6\u0c82\u0c9f\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0c97\u0ccd\u0cb0\u0cc6\u0ca8\u0cc6\u0ca1\u0cc8\u0ca8\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0cb5\u0cc6\u0ca8\u0cc6\u0c9c\u0cc1\u0cb5\u0cc6\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cbf\u0c9f\u0cbf\u0cb7\u0ccd \u0cb5\u0cb0\u0ccd\u0c9c\u0cbf\u0ca8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0caf\u0cc1.\u0c8e\u0cb8\u0ccd. \u0cb5\u0cb0\u0ccd\u0c9c\u0cbf\u0ca8\u0ccd \u0ca6\u0ccd\u0cb5\u0cc0\u0caa\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u0cb5\u0cbf\u0caf\u0cc6\u0c9f\u0ccd\u0ca8\u0cbe\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u0cb5\u0ca8\u0ccc\u0c9f\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u0ca8\u0cca\u0c97\u0cbe\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u0cb0\u0cc1\u0cb5"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0ca8\u0ccb\u0cb0\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u0c86\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0cc7\u0cb2\u0cc7\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u0cae\u0cc6\u0cb2\u0ca8\u0cc7\u0cb7\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u0cb5\u0cbe\u0cb2\u0cbf\u0cb8\u0ccd \u0cae\u0ca4\u0ccd\u0ca4\u0cc1 \u0cab\u0cc1\u0c9f\u0cc1\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95 \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u0cae\u0cc8\u0c95\u0ccd\u0cb0\u0ccb\u0ca8\u0cc7\u0cb6\u0cbf\u0caf\u0ca8\u0ccd \u0caa\u0ccd\u0cb0\u0ca6\u0cc7\u0cb6"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u0ca8\u0cca\u0c82\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\u0cb2\u0c95\u0cca\u0c9f"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"\u0c86\u0cb0\u0ccd\u0ca5\u0cbf\u0c95 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"\u0cb9\u0cca\u0c82\u0ca6\u0cbe\u0ca3\u0cbf\u0c95\u0cc6\u0caf \u0cb8\u0cb2\u0cc1\u0cb5\u0cbe\u0c97\u0cbf \u0cb9\u0cbf\u0c82\u0ca6\u0cbf\u0ca8 \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cbe \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u0cb5\u0cbe\u0cb2\u0ccd\u0cb8\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u0cb8\u0cae\u0ccb\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u0cb5\u0cb2\u0cbe\u0caf\u0ccd\u0ca4\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u0cb5\u0cbe\u0cb7\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u0cb8\u0ccd\u0caf\u0cc1\u0ca1\u0cca \u0c89\u0c9a\u0ccd\u0c9b\u0cbe\u0cb0\u0ca3\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u0cb5\u0cb0\u0cbe\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u0cb8\u0ccd\u0caf\u0cc1\u0ca1\u0cca-\u0cac\u0cbf\u0ca1\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u0c85\u0cb5\u0ca7\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u0caa\u0cbe\u0cb2\u0cbf\u0ca8\u0cc7\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u0c95\u0cca\u0cb8\u0cca\u0cb5\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u0c85\u0cb2\u0cbf\u0c96\u0cbf\u0ca4"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u0c93\u0cb2\u0ccd \u0c9a\u0cbf\u0c95\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\u0cb5\u0cbe\u0cb0\u0ccd\u0cb2\u0ccd\u200c\u0caa\u0cbf\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u0cac\u0cbe\u0c9f\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\u0cac\u0ccd\u0cb2\u0cbf\u0cb8\u0ccd\u200c\u0cb8\u0cbf\u0c82\u0cac\u0cb2\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0caf\u0cc6\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u0c8e\u0ca8\u0ccd\u200c\u0c95\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cae\u0cbe\u0ca3\u0cc0\u0c95\u0cc3\u0ca4 \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u0cab\u0cbe\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u0cab\u0cbe\u0c82\u0c9f\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u0cb8\u0cc8\u0ca8\u0ccd\u200c\u0cb0\u0cc8\u0c9f\u0cbf\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u0cae\u0caf\u0cca\u0c9f\u0ccd\u0c9f\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\u0cb2\u0cc2\u0cb8\u0ccd \u0cb2\u0cc8\u0ca8\u0ccd \u0cac\u0ccd\u0cb0\u0cc7\u0c95\u0ccd \u0cb6\u0cc8\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u0ca6\u0cc7\u0cb5\u0ca8\u0cbe\u0c97\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u0c9c\u0cbe\u0cb0\u0ccd\u0c9c\u0cbf\u0caf\u0cbe\u0ca6 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u0cb9\u0cbf\u0cb0\u0cbe\u0c97\u0ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0c9c\u0cbe\u0c82\u0cac\u0cbf\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"\u0caa\u0cbf\u0ca8\u0ccd\u200c\u0caf\u0cbf\u0ca8\u0ccd \u0cb0\u0ccb\u0cae\u0ca8\u0cc8\u0cb8\u0cc7\u0cb6\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0c9c\u0cbf\u0c82\u0cac\u0cbe\u0cac\u0ccd\u0cb5\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u0c85\u0c9c\u0ccd\u0c9e\u0cbe\u0ca4 \u0caa\u0ccd\u0cb0\u0ca6\u0cc7\u0cb6"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u0cb0\u0cc2\u0ca8\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u0cae\u0cc6\u0c9f\u0ccd\u0cb0\u0cbf\u0c95\u0ccd \u0caa\u0ca6\u0ccd\u0ca7\u0ca4\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u0cae\u0cca\u0c82\u0c97\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0cb8\u0ccb\u0ca5\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u0ca4\u0cc6\u0cb2\u0cc1\u0c97\u0cc1 \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"\u0cb2\u0cc2\u0caf\u0cbf\u0cb8\u0cbf\u0caf\u0cbe\u0ca8 \u0c95\u0ccd\u0cb0\u0cbf\u0caf\u0ccb\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u0cb2\u0ccb\u0c9d\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u0cae\u0ccd\u0caf\u0c95\u0cae\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u0cb8\u0cb0\u0cb3\u0cc0\u0c95\u0cc3\u0ca4 \u0c9a\u0cc0\u0ca8\u0cbf \u0c86\u0cb0\u0ccd\u0ca5\u0cbf\u0c95 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u0cb9\u0cbf\u0cb2\u0cbf\u0c97\u0cc7\u0ca8\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u0cb5\u0cbf\u0cb8\u0ccd\u0ca4\u0cb0\u0cbf\u0cb8\u0cb2\u0cbe\u0ca6 \u0c85\u0cb0\u0cc7\u0cac\u0cbf\u0c95\u0ccd-\u0c87\u0c82\u0ca1\u0cbf\u0c95\u0ccd \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u0ca8\u0cc2\u0caf\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u0ca1\u0c95\u0ccb\u0c9f\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0ca3 \u0c85\u0c97\u0cb2\u0cb5\u0cbe\u0ca6 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u0cb9\u0cbf\u0c9f\u0ccd\u0c9f\u0cbf\u0c9f\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u0ca6\u0cb0\u0ccd\u0c97\u0ccd\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u0c9f\u0cc8\u0c9f"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u0cae\u0caf\u0cbe\u0ca8\u0ccd \u0cb9\u0cc0\u0cb0\u0ccb\u0c97\u0ccd\u0cb2\u0cbf\u0cab\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0cb2\u0cc2\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u0c95\u0cbe\u0caa\u0ccd\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u0cb6\u0cbe\u0cb8\u0ccd\u0ca4\u0ccd\u0cb0\u0cc0\u0caf \u0ca8\u0cc7\u0cb5\u0cbe\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u0c89\u0ca1\u0ccd\u200c\u0cae\u0cc1\u0cb0\u0ccd\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"\u0c87\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbf\u0c95\u0ccd\u200c \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd\u200c (\u0cb8\u0ccc\u0ca6\u0cbf \u0c85\u0cb0\u0cc7\u0cac\u0cbf\u0caf\u0cbe, \u0cb8\u0cc8\u0c9f\u0cbf\u0c82\u0c97\u0ccd\u200c)bia, sighting)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u0cb2\u0cbf\u0c82\u0cac\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u0cb8\u0c82\u0ca1\u0cbe\u0cb5\u0cc7"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u0cb0\u0ccb\u0cae\u0ca8\u0ccd \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u0cb8\u0c96\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u0cb8\u0cae\u0cb0\u0cbf\u0c9f\u0ca8\u0ccd \u0c85\u0cb0\u0cbe\u0cae\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u0cb8\u0c82\u0cac\u0cc1\u0cb0\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u0cb8\u0cb8\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u0cb8\u0c82\u0ca4\u0cbe\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u0c9f\u0cbf\u0cab\u0cbf\u0ca8\u0cbe\u0c98\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u0c9c\u0cc2\u0ca1\u0cbf\u0caf\u0ccb-\u0caa\u0cb0\u0ccd\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"\u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"\u0cb8\u0ccd\u0ca5\u0cb3\u0cc0\u0caf \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u0ca8\u0c82\u0cac\u0cc7"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u0c97\u0cc1\u0cb0\u0ccd\u0cae\u0cc1\u0c96\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u0cb2\u0cc1\u0cac-\u0cb2\u0cc1\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0ca3\u0c85\u0c97\u0cb2\u0c95\u0ccd\u0c95\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u0cb8\u0c82\u0c97\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u0cb2\u0cc2\u0caf\u0cbf\u0cb8\u0cc6\u0ca8\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0cbe\u0ca8\u0ccd\u200c\u0c95\u0ccb\u0cb2\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0cbe\u0cae\u0ccd\u200c\u0cb5\u0cc6\u0c82\u0c9c\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u0cb2\u0cc1\u0c82\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0ccb\u0cb0\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u0cb2\u0cc1\u0cb5\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u0cab\u0cbf\u0cb2\u0cbf\u0caa\u0cbf\u0ca8\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u0cae\u0ccb\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u0ca1\u0cc6\u0cb2\u0cbe\u0cb5\u0cc7\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u0cae\u0cbf\u0c9d\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u0cac\u0cb2\u0cc2\u0c9a\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u0cb8\u0ccd\u0cb2\u0cc7\u0cb5\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u0cac\u0cb2\u0cbf\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u0cb2\u0cc1\u0caf\u0cbf\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u0cac\u0cb8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u0c9c\u0cc2\u0ca1\u0cbf\u0caf\u0ccb-\u0c85\u0cb0\u0cc7\u0cac\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u0caf\u0cc1\u0cb0\u0ccb\u0caa\u0cbf\u0caf\u0ca8\u0ccd \u0cb8\u0ccd\u0caa\u0ccd\u0caf\u0cbe\u0ca8\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u0c9c\u0cc0\u0cae\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0cb8\u0ccd\u0c95\u0ccb\u0c9f\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u0cb8\u0cbf\u0cb8\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0c85\u0cab\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0c85\u0cac\u0ccd\u0c96\u0cbe\u0c9c\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u0c85\u0cb5\u0cc6\u0cb8\u0ccd\u0c9f\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0c86\u0cab\u0ccd\u0cb0\u0cbf\u0c95\u0cbe\u0ca8\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u0c85\u0c95\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0c85\u0c82\u0cb9\u0cb0\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u0c85\u0cb0\u0c97\u0cca\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u0c9c\u0caa\u0cbe\u0ca8\u0cc0\u0cb8\u0ccd \u0cb8\u0cbf\u0cb2\u0cac\u0cb0\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0c85\u0cb8\u0ccd\u0cb8\u0cbe\u0cae\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u0cb2\u0cc0\u0ca8\u0caf\u0cb0\u0ccd \u0c8e"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u0c85\u0cb5\u0cb0\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u0cb2\u0cc0\u0ca8\u0caf\u0cb0\u0ccd \u0cac\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0c95\u0cc1\u0cb0\u0ccd\u0ca6\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u0c85\u0caf\u0ccd\u0cae\u0cbe\u0cb0\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0c85\u0c9c\u0cc6\u0cb0\u0ccd\u0cac\u0cc8\u0c9c\u0cbe\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0cac\u0cb6\u0ccd\u0c95\u0cbf\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u0cb0\u0ccd\u0caf\u0cbe\u0ca1\u0cbf\u0c95\u0cb2\u0ccd-\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0ccb\u0c95\u0ccd \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0cac\u0cc6\u0cb2\u0cb0\u0cc2\u0cb8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0cac\u0cb2\u0ccd\u0c97\u0cc7\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u0cac\u0cbf\u0cb8\u0ccd\u0cb2\u0cbe\u0cae\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u0cac\u0c82\u0cac\u0cbe\u0cb0\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0cac\u0cbe\u0c82\u0c97\u0ccd\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0c9f\u0cbf\u0cac\u0cc7\u0c9f\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u0ca1\u0ccb\u0c97\u0ccd\u0cb0\u0cbf\u0cac\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cc6\u0c9f\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0cac\u0ccb\u0cb8\u0ccd\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u0cae\u0ccd\u0caf\u0cbe\u0ca8\u0ccd\u0cae\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u0cb2\u0cbe\u0cb5\u0ccb \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u0cb8\u0cc6\u0ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\u0c8e\u0ca8\u0ccd\u200d\u0c95\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u0cb8\u0cc6\u0cb2\u0ccd\u0c95\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u0c95\u0cc6\u0c9f\u0cb2\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u0c95\u0cca\u0caf\u0ccd\u0cb0\u0cac\u0cca\u0cb0\u0cca \u0cb8\u0cc6\u0ca8\u0ccd\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u0c9a\u0c9a\u0cc6\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u0c95\u0cae\u0cca\u0cb0\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u0c95\u0ccb\u0cb0\u0ccd\u0cb8\u0cbf\u0c95\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u0c92\u0ca1\u0cbf\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u0c95\u0ccd\u0cb0\u0cc0"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0c9c\u0cc6\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u0c9a\u0cb0\u0ccd\u0c9a\u0ccd \u0cb8\u0ccd\u0cb2\u0cbe\u0cb5\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u0c9a\u0cc1\u0cb5\u0cbe\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u0cb5\u0cc6\u0cb2\u0ccd\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u0c87\u0ca5\u0cbf\u0caf\u0ccb\u0caa\u0cbf\u0caf\u0cbe\u0ca6 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u0caf\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0ca1\u0ccd\u0caf\u0cbe\u0ca8\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u0caf\u0cc2\u0cb0\u0ccb\u0caa\u0cbf\u0caf\u0ca8\u0ccd \u0caa\u0ccb\u0cb0\u0ccd\u0c9a\u0cc1\u0c97\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u0c9c\u0cb0\u0ccd\u0cae\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cae\u0cbe\u0ca3\u0cbf\u0ca4 \u0c95\u0cb0\u0cc6\u0ca8\u0ccd\u0cb8\u0cbf \u0cb8\u0ccd\u0cb5\u0cb0\u0cc2\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u0cac\u0cc7\u0c9c\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u0ca1\u0cbf\u0c82\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u0cac\u0c97\u0cbf\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u0cac\u0cc6\u0c82\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0c90\u0cb0\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\u0cae\u0c82\u0c97\u0ccb\u0cb2\u0cbf\u0caf\u0cbe\u0ca6 \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u0ca6\u0cbf\u0cb5\u0cc6\u0cb9\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u0cb2\u0ccd\u0caf\u0cbe\u0c9f\u0cbf\u0ca8\u0ccd \u0c85\u0cae\u0cc7\u0cb0\u0cbf\u0c95\u0ca8\u0ccd \u0cb8\u0ccd\u0caa\u0ccd\u0caf\u0cbe\u0ca8\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0c9c\u0ccb\u0c82\u0c97\u0ccd\u200c\u0c96\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u0cac\u0cc6\u0ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u0c9a\u0cc8\u0ca8\u0cc0\u0cb8\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u0c9c\u0cb0\u0ccd\u0cae\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u0c97\u0ccd\u0cb0\u0cc0\u0c95\u0ccd \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u0c88\u0cb5\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u0cb8\u0cbe\u0cae\u0cbe\u0ca8\u0ccd\u0caf \u0cb2\u0cc8\u0ca8\u0ccd \u0cac\u0ccd\u0cb0\u0cc7\u0c95\u0ccd \u0cb6\u0cc8\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u0cae\u0cbe\u0cb2\u0ccd\u0ca1\u0cc7\u0cb5\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0c87\u0c82\u0c97\u0ccd\u0cb2\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0c8e\u0cb8\u0ccd\u0caa\u0cc6\u0cb0\u0cbe\u0c82\u0c9f\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95 \u0c9a\u0cc0\u0ca8\u0cbe\u0ca6 \u0c85\u0ca8\u0cc1\u0c95\u0ccd\u0cb0\u0cae \u0cb5\u0cbf\u0ca8\u0ccd\u0caf\u0cbe\u0cb8 - \u0ca6\u0cca\u0ca1\u0ccd\u0ca1 \u0c90\u0ca6\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0cb8\u0ccd\u0caa\u0ccd\u0caf\u0cbe\u0ca8\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0c8e\u0cb8\u0ccd\u0c9f\u0cca\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u0cac\u0ccb\u0caa\u0ccb\u0cae\u0cca\u0cab\u0ccb \u0c9c\u0cca\u0ca4\u0cc6\u0c97\u0cc6 \u0cb9\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0cac\u0cbe\u0cb8\u0ccd\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u0cac\u0cc1\u0cb9\u0cbf\u0ca6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u0cb9\u0ccd\u0caf\u0cbe\u0c82\u0c97\u0cc1\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u0cb8\u0cae\u0cbe\u0cb0\u0cbf\u0c9f\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u0c9f\u0cb7\u0cc6\u0cb2\u0ccd\u200d\u0cb9\u0cbf\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u0c85\u0caa\u0ccd\u0caa\u0cb0\u0ccd \u0cb8\u0cb0\u0ccd\u0cac\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u0cb9\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0cb6\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\u0cb9\u0ca8\u0cc2\u0ca8\u0cc2"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u0caa\u0cb0\u0ccd\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u0cb8\u0cb0\u0cb3\u0cc0\u0c95\u0cc3\u0ca4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u0caa\u0cbe\u0cb6\u0ccd\u0c9a\u0cbf\u0cae\u0cbe\u0ca4\u0ccd\u0caf \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u0cab\u0cc1\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"\u0cb6\u0caf\u0cbe\u0c82\u0c97\u0ccd \u0c9a\u0cc0\u0ca8\u0cc0\u0cb8\u0cc7"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0cab\u0cbf\u0ca8\u0ccd\u0ca8\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0cab\u0cbf\u0c9c\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u0cab\u0ccb\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u0caa\u0cb6\u0ccd\u0c9a\u0cbf\u0cae \u0cac\u0cb2\u0cca\u0c9a\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u0c95\u0ccd\u0caf\u0cbe\u0c82\u0c9f\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0cab\u0cb0\u0ccb\u0cb8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"\u0caf\u0cc1\u0c8e\u0cb8\u0ccd \u0cac\u0cbf\u0c9c\u0cbf\u0c8e\u0ca8\u0ccd \u0cb2\u0cbf\u0caa\u0ccd\u0caf\u0c82\u0ca4\u0cb0\u0ca3"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u0c89\u0c82\u0cac\u0cc1\u0c82\u0ca1\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u0cb8\u0cbf\u0ca1\u0cbe\u0cae\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u0caa\u0cb6\u0ccd\u0c9a\u0cbf\u0cae \u0cab\u0ccd\u0cb0\u0cbf\u0cb8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0c90\u0cb0\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0cb8\u0ccd\u0c95\u0cbe\u0c9f\u0cbf\u0cb6\u0ccd \u0c97\u0cc6\u0cb2\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u0c97\u0ccd\u0caf\u0cbe\u0cb2\u0cbf\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0c97\u0ccc\u0cb0\u0cbe\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u0cad\u0ccb\u0c9c\u0caa\u0cc1\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u0c85\u0caa\u0cb0\u0cbf\u0c9a\u0cbf\u0ca4 \u0cad\u0cbe\u0cb7\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u0c87\u0ca5\u0cbf\u0caf\u0ccb\u0caa\u0cbf\u0c95\u0ccd \u0c85\u0cae\u0cc6\u0c9f\u0cc6 \u0c85\u0cb2\u0cc6\u0cae\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u0cae\u0ccd\u0caf\u0cbe\u0c82\u0c95\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u0cb9\u0ccc\u0cb8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0cb9\u0cbf\u0c82\u0ca6\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u0cb9\u0cc2\u0caa\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u0cac\u0cbf\u0c95\u0cca\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u0cac\u0cbf\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u0cb9\u0cbf\u0cb0\u0cbf \u0cae\u0cca\u0c9f\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0c95\u0ccd\u0cb0\u0cca\u0caf\u0cc7\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u0cb9\u0cc8\u0c9f\u0cbf\u0caf\u0ca8\u0ccd \u0c95\u0ccd\u0cb0\u0cbf\u0caf\u0ccb\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u0cb9\u0c82\u0c97\u0cc7\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u0cb9\u0cc6\u0cb0\u0cc6\u0cb0\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"\u0c95\u0cbe\u0c9c\u0cc1\u0ca8\u0ccd \u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u0c87\u0c82\u0c9f\u0cb0\u0ccd\u200c\u0cb2\u0cbf\u0c82\u0c97\u0ccd\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u0c9c\u0cae\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0c87\u0c82\u0ca1\u0ccb\u0ca8\u0cc7\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u0c9f\u0cbf\u0cac\u0cc7\u0c9f\u0cbf\u0caf\u0ca8\u0ccd \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u0c87\u0c82\u0c9f\u0cb0\u0ccd\u0cb2\u0cbf\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u0c87\u0c97\u0ccd\u0cac\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u0cb8\u0cbf\u0c9a\u0cc1\u0c85\u0ca8\u0ccd \u0caf\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u0c87\u0ca8\u0cc1\u0caa\u0cbf\u0caf\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0cab\u0ccd\u0cb0\u0cc6\u0c82\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u0c87\u0ca1\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0cb5 \u0cab\u0ccd\u0cb0\u0cbf\u0cb8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0cab\u0ccd\u0cb0\u0cbf\u0cb8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0c90\u0cb8\u0ccd\u200c\u0cb2\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0c87\u0c9f\u0cbe\u0cb2\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0c87\u0ca8\u0cc1\u0c95\u0ccd\u0c9f\u0cbf\u0c9f\u0cc1\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u0cb8\u0cb0\u0cbe\u0c9f\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u0ca1\u0ccb\u0c97\u0ccd\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0cb8\u0cbe\u0cae\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u0c9c\u0cbe\u0cb5\u0cbe\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u0cb6\u0cbe\u0cb5\u0cbf\u0caf\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0cae\u0ca6\u0cc1\u0cb0\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u0cb2\u0cc2\u0cb2\u0ccd \u0cb8\u0cbe\u0cae\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u0cae\u0c97\u0cbe\u0cb9\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u0cae\u0cc8\u0ca5\u0cbf\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u0c87\u0ca8\u0cbe\u0cb0\u0cbf \u0cb8\u0cae\u0cc0"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u0cb8\u0cbf\u0c95\u0ccd\u0cb8\u0cbf\u0c95\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u0cae\u0c95\u0cbe\u0cb8\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"\u0cb5\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u0cb8\u0ccd\u0c95\u0ccb\u0c9f\u0ccd \u0cb8\u0cbe\u0cae\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u0cae\u0c82\u0ca1\u0cbf\u0c82\u0c97\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u0c95\u0cbe\u0c82\u0c97\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\u0c97\u0ccb\u0ca4\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u0c95\u0cbf\u0c95\u0cc1\u0caf\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u0cae\u0cb8\u0cbe\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u0c95\u0ccd\u0cb5\u0cbe\u0ca8\u0ccd\u200c\u0caf\u0cbe\u0cae\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u0c95\u0c9d\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u0c95\u0cb2\u0cbe\u0cb2\u0ccd\u0cb2\u0cbf\u0cb8\u0cc1\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u0c95\u0ca8\u0cc1\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u0c95\u0cbe\u0cb6\u0ccd\u0cae\u0cc0\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u0cb8\u0cbf\u0cb0\u0ccd\u0ca5\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u0cb2\u0cc6\u0caa\u0ccd\u0c9a\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u0c85\u0cb5\u0cc6\u0cb8\u0ccd\u0ca4\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u0c95\u0cc1\u0cb0\u0ccd\u0ca6\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u0c95\u0ccb\u0cae\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u0c95\u0cbe\u0cb0\u0ccd\u0ca8\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u0c95\u0cbf\u0cb0\u0ccd\u0c97\u0cbf\u0c9c\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u0cb8\u0ccb\u0ca8\u0cbf\u0c82\u0c95\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u0cb2\u0c95\u0ccd\u0cb8\u0c82\u0cac\u0cb0\u0ccd\u0c97\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u0cae\u0cb2\u0caf\u0cbe\u0cb3\u0c82 \u0c85\u0c82\u0c95\u0cbf\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u0c97\u0cbe\u0c82\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u0cb0\u0ccb\u0c82\u0c97\u0ccb\u0cb0\u0ccb\u0c82\u0c97\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u0cb2\u0cbf\u0c82\u0cac\u0cb0\u0ccd\u0c97\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u0c9f\u0cbf\u0cac\u0cc7\u0c9f\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u0cb2\u0cbf\u0c82\u0c97\u0cbe\u0cb2"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u0cab\u0ccd\u0cb0\u0cbf\u0caf\u0cc1\u0cb2\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u0c87\u0c82\u0caa\u0cbf\u0cb0\u0cbf\u0caf\u0cb2\u0ccd \u0cae\u0cbe\u0caa\u0ca8 \u0cb5\u0ccd\u0caf\u0cb5\u0cb8\u0ccd\u0ca5\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u0cb2\u0cbf\u0ca5\u0cc1\u0cb5\u0cc7\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u0cb2\u0cc2\u0cac\u0cbe-\u0c95\u0c9f\u0cbe\u0c82\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u0cb2\u0cbe\u0c9f\u0ccd\u0cb5\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u0cb8\u0ccb\u0c97\u0ccd\u0ca1\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u0cae\u0cb2\u0c97\u0cbe\u0cb8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u0cae\u0cbe\u0cb0\u0ccd\u0cb6\u0cb2\u0ccd\u0cb2\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u0ca1\u0cc0\u0cab\u0cbe\u0cb2\u0ccd\u0c9f\u0ccd \u0caf\u0cc2\u0ca8\u0cbf\u0c95\u0ccb\u0ca1\u0ccd \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u0cae\u0cbe\u0cb5\u0ccb\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u0cae\u0cc6\u0cb8\u0cbf\u0ca1\u0ccb\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
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
			$of(u"\u0cae\u0cb0\u0cbe\u0ca0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u0cae\u0cb2\u0caf\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u0cae\u0cbe\u0cb2\u0ccd\u0c9f\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0cac\u0cb0\u0ccd\u0cae\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u0cb8\u0ccc\u0cb0\u0cbe\u0cb7\u0ccd\u0c9f\u0ccd\u0cb0"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u0cae\u0ccb\u0c95\u0ccd\u0cb7"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u0cb2\u0ccb\u0cb5\u0cb0\u0ccd \u0cb8\u0cb0\u0ccd\u0cac\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u0c87\u0c82\u0caa\u0cc0\u0cb0\u0cbf\u0caf\u0cb2\u0ccd \u0c85\u0cb0\u0cc6\u0cae\u0cbe\u0caf\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u0cb8\u0cbe\u0cae\u0cbe\u0ca8\u0ccd\u0caf- \u0c89\u0ca6\u0ccd\u0ca6\u0cc7\u0cb6 \u0cb9\u0cc1\u0ca1\u0cc1\u0c95\u0cbe\u0c9f"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u0ca8\u0cbe\u0cb0\u0ccd\u0cb5\u0cc6\u0c9c\u0cbf\u0caf\u0ca8\u0ccd \u0cac\u0cca\u0c95\u0ccd\u0cae\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0ca6\u0cc6\u0cac\u0cc6\u0cb2\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u0ca8\u0cc7\u0caa\u0cbe\u0cb3\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u0ca1\u0ccb\u0c82\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u0cae\u0c82\u0ca6\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u0ca1\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u0ca8\u0cbe\u0cb0\u0ccd\u0cb5\u0cc7\u0c9c\u0cbf\u0caf\u0ca8\u0ccd \u0ca8\u0cc8\u0ca8\u0cbe\u0cb0\u0ccd\u0cb8\u0ccd\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u0ca8\u0cbe\u0cb0\u0ccd\u0cb5\u0cc7\u0c9c\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0ca6\u0cc6\u0cac\u0cc6\u0cb2\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u0ca8\u0cb5\u0cbe\u0c9c\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u0c95\u0cbe\u0cb0\u0cbe-\u0c95\u0cb2\u0ccd\u0caa\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u0ca8\u0ccd\u0caf\u0cbe\u0c82\u0c9c\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u0c95\u0c9a\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u0c95\u0cac\u0cc8\u0cb2\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u0c92\u0cb8\u0cbf\u0c9f\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u0c9c\u0ccd\u0c9c\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u0c95\u0c82\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u0cae\u0cc6\u0c82\u0ca1\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u0c92\u0c9c\u0cbf\u0cac\u0ccd\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u0cae\u0cc6\u0cb0\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u0c86\u0cb0\u0ccd\u0cae\u0cc7\u0ca8\u0cbf\u0caf\u0cbe\u0ca6 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u0c92\u0cb0\u0cca\u0cae\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u0c95\u0cbe\u0cb5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u0c92\u0ca1\u0cbf\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u0c92\u0cb8\u0ccd\u0cb8\u0cc6\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u0c95\u0cac\u0cb0\u0ccd\u0ca1\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u0cae\u0cca\u0cb0\u0cbf\u0cb8\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u0cb8\u0ccd\u0cb0\u0cbe\u0ca8\u0ca8\u0ccd \u0c9f\u0ccb\u0c82\u0c97\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u0caa\u0c82\u0c9c\u0cbe\u0cac\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u0ca1\u0cc1\u0cb5\u0cbe\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u0cb8\u0cc7\u0cb0\u0cc7\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u0caa\u0cbe\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u0caa\u0cca\u0cb2\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0ca1\u0c9a\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u0ca1\u0cbe\u0c82\u0c97\u0cbf \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u0caa\u0cbe\u0cb7\u0ccd\u0c9f\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u0caa\u0ccb\u0cb0\u0ccd\u0c9a\u0cc1\u0c97\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c90\u0cb0\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0cc6\u0c9c\u0cbf\u0cb2\u0cbf\u0caf\u0ca8\u0ccd \u0caa\u0ccb\u0cb0\u0ccd\u0c9a\u0cc1\u0c97\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u0c9f\u0ccd\u0caf\u0cbe\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u0cae\u0ccd\u0caf\u0c96\u0cc1\u0cb5\u0cbe- \u0cae\u0cc0\u0c9f\u0ccd\u0c9f\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u0c95\u0cb0\u0cc6\u0ca8\u0ccd\u0cb8\u0cbf \u0cb8\u0ccd\u0cb5\u0cb0\u0cc2\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u0cac\u0ccd\u0cb0\u0c9c\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u0cae\u0cc6\u0c9f\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 \u0c97\u0c82\u0c9f\u0cc6 \u0cb5\u0ccd\u0caf\u0cb5\u0cb8\u0ccd\u0ca5\u0cc6 (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 \u0c97\u0c82\u0c9f\u0cc6 \u0cb5\u0ccd\u0caf\u0cb5\u0cb8\u0ccd\u0ca5\u0cc6 (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\u0cb8\u0cb9\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u0cae\u0ccd\u0caf\u0cbe\u0ca8\u0ccd\u0cae\u0cbe\u0cb0\u0ccd \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u0c95\u0ccd\u0cb5\u0cc6\u0c9a\u0cc1\u0cb5\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u0c9d\u0ccb\u0caa\u0cca\u0c9f\u0cc6\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u0cac\u0ccb\u0ca1\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u0cb2\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u0cae\u0ccd\u0caf\u0cbe\u0c95\u0cca\u0c82\u0ca1\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u0c87\u0ca5\u0cbf\u0caf\u0ccb\u0caa\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 \u0c97\u0c82\u0c9f\u0cc6 \u0cb5\u0ccd\u0caf\u0cb5\u0cb8\u0ccd\u0ca5\u0cc6 (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 \u0c97\u0c82\u0c9f\u0cc6 \u0cb5\u0ccd\u0caf\u0cb5\u0cb8\u0ccd\u0ca5\u0cc6 (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0cb0\u0cca\u0cae\u0cbe\u0ca8\u0ccd\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u0cb0\u0cc1\u0c82\u0ca1\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u0c95\u0cb0\u0cc6\u0ca8\u0ccd\u0cb8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0cb0\u0cca\u0cae\u0cc7\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u0c92\u0cb0\u0cbf\u0caf\u0cbe \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u0c9a\u0cc0\u0ca8\u0cbe\u0ca6 \u0ca6\u0cb6\u0cae\u0cbe\u0c82\u0cb6 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0cb0\u0cb7\u0ccd\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u0c95\u0cbf\u0ca8\u0ccd\u0caf\u0cbe\u0cb0\u0ccd\u200c\u0cb5\u0cbe\u0c82\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\u0cac\u0ccd\u0cb2\u0cbf\u0cb8\u0ccd\u0cb8\u0cbf\u0c82\u0cac\u0cb2\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u0c95\u0cac\u0cc1\u0cb5\u0cc6\u0cb0\u0ccd\u0ca1\u0cbf\u0caf\u0ca8\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u0cae\u0cbf\u0c95\u0ccd\u200c\u0cae\u0ccd\u0caf\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u0cb8\u0cc1\u0c95\u0cc1\u0cae\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0c86\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0cc7\u0cb2\u0cbf\u0caf\u0ca8\u0ccd \u0c87\u0c82\u0c97\u0ccd\u0cb2\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0cb8\u0c82\u0cb8\u0ccd\u0c95\u0cc3\u0ca4"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u0cb8\u0cb0\u0ccd\u0ca1\u0cc0\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u0cb8\u0cc1\u0cb8\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0cb8\u0cbf\u0c82\u0ca7\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0cb8\u0cbe\u0cae\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u0cae\u0cbf\u0ca8\u0c82\u0c97\u0ccd\u200c\u0c95\u0cac\u0cbe\u0cb5\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0c97\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u0cb8\u0cb0\u0ccd\u0cac\u0ccb-\u0c95\u0ccd\u0cb0\u0cca\u0caf\u0cc7\u0cb6\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u0cb8\u0cc1\u0cae\u0cc7\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0cb8\u0ccd\u0cb2\u0ccb\u0cb5\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0cb8\u0ccd\u0cb2\u0ccb\u0cb5\u0cc7\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u0cb8\u0cae\u0ccb\u0cb5\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0cb6\u0ccb\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0cb8\u0cca\u0cae\u0cbe\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0c85\u0cb0\u0cc7\u0cac\u0cbf\u0c95\u0ccd-\u0c87\u0c82\u0ca1\u0cbf\u0c95\u0ccd \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0c85\u0cb2\u0ccd\u0cac\u0cc7\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0cb8\u0cc6\u0cb0\u0ccd\u0cac\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbe\u0ca4\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u0c85\u0c95\u0ccc\u0c82\u0c9f\u0cbf\u0c82\u0c97\u0ccd \u0c95\u0cb0\u0cc6\u0ca8\u0ccd\u0cb8\u0cbf \u0cb8\u0ccd\u0cb5\u0cb0\u0cc2\u0caa"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u0ca6\u0c95\u0ccd\u0cb7\u0cbf\u0ca3 \u0cb8\u0ccb\u0ca5\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\u0c9c\u0cbe\u0cb5\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cc0\u0ca1\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cb9\u0cbf\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95 \u0c9a\u0cc0\u0ca8\u0cbf \u0c86\u0cb0\u0ccd\u0ca5\u0cbf\u0c95 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u0c87\u0cac\u0cbf\u0cac\u0cbf\u0caf\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u0c87\u0cac\u0cbe\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0c8f\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u0cac\u0cc1\u0cb0\u0cbf\u0caf\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u0cae\u0ca7\u0ccd\u0caf \u0c8f\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u0caa\u0cb6\u0ccd\u0c9a\u0cbf\u0cae \u0c8f\u0cb7\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u0ca4\u0cbe\u0c9c\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u0c9f\u0cbf\u0c97\u0ccd\u0cb0\u0cbf\u0ca8\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u0cac\u0cc1\u0c97\u0cbf\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u0c95\u0ccb\u0cb0\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0c95\u0cc6\u0ca8\u0cc6\u0ca1\u0cbf\u0caf\u0ca8\u0ccd \u0c87\u0c82\u0c97\u0ccd\u0cb2\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u0c9f\u0cb0\u0ccd\u0c95\u0ccd\u200c\u0cae\u0cc6\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u0cb8\u0ccd\u0cb5\u0cbe\u0ca8\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u0c9f\u0ccb\u0c82\u0c97\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u0c9c\u0cca\u0cb2-\u0cab\u0cca\u0ca8\u0ccd\u0caf\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u0c9c\u0caa\u0cbe\u0ca8\u0cc0 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u0c9f\u0cb0\u0ccd\u0c95\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u0cb8\u0ccb\u0c82\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u0c95\u0cca\u0cae\u0cca\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u0c95\u0cbe\u0c95\u0c82"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u0c9f\u0cbe\u0c9f\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u0ca1\u0ccd\u0caf\u0cc2\u0cb2\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u0c9f\u0ccd\u0cb5\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u0c9f\u0cb9\u0cc0\u0c9f\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u0caf\u0cc2\u0cb0\u0ccb\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0cb5 \u0caf\u0cc2\u0cb0\u0ccb\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u0c89\u0ca4\u0ccd\u0ca4\u0cb0 \u0caf\u0cc2\u0cb0\u0ccb\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u0ca1\u0c9c\u0cbe\u0c97"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u0caa\u0cb6\u0ccd\u0c9a\u0cbf\u0cae \u0caf\u0cc2\u0cb0\u0ccb\u0caa\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0c89\u0caf\u0cbf\u0c98\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8\u0ccd \u0c87\u0c9f\u0cbe\u0cb2\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u0cb8\u0cbe\u0cae\u0cbe\u0ca8\u0ccd\u0caf"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0c89\u0c95\u0ccd\u0cb0\u0cc7\u0ca8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\u0c95\u0ccb\u0caa\u0ccd\u0c9f\u0cbf\u0c95\u0ccd \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0c89\u0cb0\u0ccd\u0ca6\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u0c95\u0cb2\u0ccd\u0cae\u0cc8\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u0c9d\u0cc6\u0ca8\u0cbe\u0c97\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0c89\u0c9c\u0ccd\u0cac\u0cc7\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u0c96\u0cbe\u0cb8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\u0cb2\u0ccb \u0cb8\u0ccd\u0caf\u0cbe\u0c95\u0ccd\u0cb8\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u0cb8\u0cc8\u0cb2\u0ccb\u0c9f\u0cbf \u0ca8\u0c97\u0ccd\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u0cb5\u0cc6\u0c82\u0ca1\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u0cae\u0cbf\u0c82\u0c97\u0ccb \u0c95\u0ccd\u0caf\u0cbe\u0cb2\u0cc6\u0c82\u0ca1\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0cb5\u0cbf\u0caf\u0cc6\u0c9f\u0ccd\u0ca8\u0cbe\u0cae\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u0c96\u0ccb\u0c9f\u0cbe\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u0c95\u0cca\u0caf\u0ccd\u0cb0 \u0c9a\u0cc0\u0ca8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u0c95\u0cbe\u0cb2 \u0c9a\u0c95\u0ccd\u0cb0 (12 \u0cb5\u0cbf\u0cb0\u0cc1\u0ca6\u0ccd\u0ca7 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u0cb5\u0ccb\u0cb2\u0cbe\u0caa\u0cc1\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u0cb6\u0cbe\u0cb8\u0ccd\u0ca4\u0ccd\u0cb0\u0cc0\u0caf \u0cb8\u0cbf\u0cb0\u0cbf\u0caf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u0c93\u0cb8\u0ccd\u0cae\u0cbe\u0ca8\u0ccd\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\u0c95\u0cbf\u0cb7\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u0c97"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u0cb5\u0cbe\u0cb2\u0cc2\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\u0c97\u0c97\u0ccc\u0c9c\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"\u0c97\u0cbe\u0ca8\u0ccd \u0c9a\u0cc0\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u0cb2\u0cbf\u0ca1\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u0cb8\u0cc1\u0cae\u0cc7\u0cb0\u0ccb-\u0c85\u0c95\u0ccd\u0c95\u0cbe\u0ca1\u0cbf\u0caf\u0ca8\u0ccd \u0c95\u0ccd\u0caf\u0cc2\u0ca8\u0cbf\u0cab\u0cbe\u0cb0\u0ccd\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u0cb5\u0ccb\u0cb2\u0ccb\u0cab\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u0cb8\u0ccd\u0c9f\u0ccd\u0caf\u0cbe\u0c82\u0ca1\u0cb0\u0ccd\u0ca1\u0ccd \u0cae\u0cca\u0cb0\u0cca\u0c95\u0ccd\u0c95\u0ca8\u0ccd \u0c9f\u0cae\u0c9c\u0cc8\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0c86\u0ca7\u0cc1\u0ca8\u0cbf\u0c95 \u0caa\u0ccd\u0cb0\u0cae\u0cbe\u0ca3\u0cbf\u0ca4 \u0c85\u0cb0\u0cc7\u0cac\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u0caf\u0cc1\u0ca8\u0cbf\u0c9f\u0cc6\u0ca1\u0ccd \u0c95\u0cc6\u0ca8\u0cc6\u0ca1\u0cbf\u0caf\u0ca8\u0ccd \u0c85\u0cac\u0cca\u0cb0\u0cbf\u0c9c\u0cbf\u0ca8\u0cb2\u0ccd \u0cb8\u0cbf\u0cb2\u0ccd\u0caf\u0cbe\u0cac\u0cbf\u0c95\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u0c97\u0cbe\u0caf\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u0cae\u0c82\u0c9a\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u0cab\u0ccd\u0cb0\u0cbe\u0c95\u0ccd\u0ca4\u0cb0\u0ccd \u0cb2\u0ccd\u0caf\u0cbe\u0c9f\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u0c97\u0ccd\u0cac\u0cbe\u0caf\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u0cae\u0ca3\u0cbf\u0caa\u0cc1\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u0c97\u0cc7\u0cb2\u0cbf\u0c95\u0ccd \u0cb2\u0ccd\u0caf\u0cbe\u0c9f\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u0cb8\u0cb0\u0cb3\u0cc0\u0c95\u0cc3\u0ca4 \u0c9a\u0cc0\u0ca8\u0cbf \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95 \u0c9a\u0cc0\u0ca8\u0cbf \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u0c95\u0ccd\u0cb8\u0ccb\u0cb8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u0cb0\u0ccb\u0cae\u0ca8\u0ccd \u0cb2\u0ccb\u0cb5\u0cb0\u0ccd\u200c\u0c95\u0cc7\u0cb8\u0ccd \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0cac\u0ccd\u0cb2\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u0cb2\u0cc8\u0cb8\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u0c93\u0cb8\u0cbe\u0c9c\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u0cae\u0cc2\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u0cae\u0cca\u0cb9\u0cbe\u0cb5\u0ccd\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u0c95\u0cbe\u0c95\u0cca"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0caf\u0cbf\u0ca1\u0ccd\u0ca1\u0cbf\u0cb6\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u0cae\u0cca\u0cb8\u0ccd\u0cb8\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u0ca1\u0cb8\u0cb0\u0ccd\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u0caf\u0cca\u0cb0\u0cc1\u0cac\u0cbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u0cae\u0cc6\u0c95\u0ccd\u0cb8\u0cbf\u0c95\u0ca8\u0ccd \u0cb8\u0ccd\u0caa\u0ccd\u0caf\u0cbe\u0ca8\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u0caa\u0cb6\u0ccd\u0c9a\u0cbf\u0cae \u0cb8\u0cbf\u0cb0\u0cbf\u0caf\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u0c92\u0c9f\u0ccd\u0c9f\u0ccb\u0cae\u0ca8\u0ccd \u0ca4\u0cc1\u0cb0\u0ccd\u0c95\u0cbf\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u0c8e\u0cb8\u0ccd\u0c9f\u0ccd\u0cb0\u0cbe\u0c82\u0c9c\u0cbf\u0cb2\u0ccb \u0cb8\u0cbf\u0cb0\u0cbf\u0caf\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u0cb5\u0cbe\u0caf\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u0c9d\u0cc2\u0cb5\u0cbe\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u0c95\u0cb0\u0cc7\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u0c95\u0cb2\u0cc6\u0c82\u0c9c\u0cbf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u0c9a\u0cc8\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u0cac\u0ccb\u0caa\u0cca\u0cae\u0ccb\u0cab\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0caa\u0cc6\u0cb0\u0ccd\u0cae\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u0cb2\u0cc8\u0ca8\u0ccd \u0cac\u0ccd\u0cb0\u0cc7\u0c95\u0ccd \u0cb6\u0cc8\u0cb2\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0c9c\u0cc1\u0cb2\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u0cab\u0ccb\u0ca8\u0ccd\u200c\u0cac\u0cc1\u0c95\u0ccd \u0cb5\u0cbf\u0c82\u0c97\u0ca1\u0ca3\u0cc6 \u0c95\u0ccd\u0cb0\u0cae"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u0c95\u0cbf\u0c82\u0cac\u0cc1\u0c82\u0ca1\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u0c9c\u0caa\u0cbe\u0ca8\u0cc0 \u0c86\u0cb0\u0ccd\u0ca5\u0cbf\u0c95 \u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u0c9a\u0cbe\u0cae\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u0c97\u0cc0\u0c9d\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u0caa\u0cc2\u0cb0\u0ccd\u0cb5 \u0cb8\u0cbf\u0cb0\u0cbf\u0caf\u0cbe\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u0caa\u0cb0\u0cbf\u0cb7\u0ccd\u0c95\u0cc3\u0ca4 \u0c85\u0ca8\u0cc1\u0c95\u0ccd\u0cb0\u0cae \u0cb5\u0cbf\u0ca8\u0ccd\u0caf\u0cbe\u0cb8"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u0c88\u0c9c\u0cbf\u0caa\u0ccd\u0c9f\u0cbf\u0caf\u0ca8\u0ccd \u0ca1\u0cc6\u0cae\u0ccb\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u0c88\u0c9c\u0cbf\u0caa\u0ccd\u0c9f\u0cbf\u0caf\u0ca8\u0ccd \u0cb9\u0caf\u0cbe\u0cb0\u0cbf\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u0c8e\u0c82\u0cac\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u0c88\u0c9c\u0cbf\u0caa\u0ccd\u0c9f\u0cbf\u0caf\u0ca8\u0ccd \u0cb9\u0cc0\u0cb0\u0ccb\u0c97\u0ccd\u0cb2\u0cbf\u0cab\u0ccd\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u0c9c\u0cbe\u0cb0\u0ccd\u0c9c\u0cbf\u0caf\u0ca8\u0ccd \u0c96\u0cc1\u0cb8\u0ccd\u0ca4\u0cc1\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u0cb8\u0cb0\u0cb3\u0cc0\u0c95\u0cc3\u0ca4 \u0c9a\u0cc8\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\u0c95\u0ccb\u0cae\u0cbf-\u0caa\u0cb0\u0ccd\u0cae\u0ccd\u0caf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u0caa\u0ccd\u0cb0\u0cbe\u0c9a\u0cc0\u0ca8 \u0cb9\u0c82\u0c97\u0cc7\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u0c95\u0cca\u0c82\u0c95\u0ca3\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u0c95\u0cca\u0cb8\u0cb0\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"\u0cb8\u0cbe\u0c82\u0caa\u0ccd\u0cb0\u0ca6\u0cbe\u0caf\u0cbf\u0c95 \u0c9a\u0cc8\u0ca8\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u0c95\u0caa\u0cc6\u0cb2\u0ccd\u0cb2\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u0c96\u0cae\u0cc6 \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u0c87\u0cb2\u0ccd\u0cb2\u0cbf\u0c95\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\u0cb8\u0cbf\u0caa\u0ccd\u0cb0\u0cbf\u0caf\u0cbe\u0c9f\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u0cae\u0cc1\u0c82\u0ca1\u0c82\u0c97\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u0c97\u0cc1\u0cb0\u0ccd\u0cae\u0cc1\u0c96\u0cbf \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u0cac\u0cb9\u0cc1\u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0caf \u0cad\u0cbe\u0cb7\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0c95\u0ccd\u0caf\u0cbe\u0ca1\u0ccd\u0ca1\u0ccb"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u0cae\u0cbe\u0caa\u0ca8 \u0cb5\u0ccd\u0caf\u0cb5\u0cb8\u0ccd\u0ca5\u0cc6"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u0c95\u0ccd\u0cb0\u0cc0\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u0c97\u0ccd\u0cb2\u0cbe\u0c97\u0ccb\u0cb2\u0cbf\u0c9f\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u0c97\u0cbf\u0cb2\u0ccd\u0cac\u0cb0\u0ccd\u0c9f\u0cc0\u0cb8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u0c9a\u0cc6\u0cb0\u0ccb\u0c95\u0cc0"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u0c95\u0cbe\u0cb0\u0cbf\u0cac\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u0ca4\u0cae\u0cbf\u0cb3\u0cc1 \u0c85\u0c82\u0c95\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u0c95\u0cb0\u0c9a\u0caf\u0ccd-\u0cac\u0cb2\u0ccd\u0c95\u0cbe\u0cb0\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u0c87\u0c82\u0c97\u0cc1\u0cb7\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\u0ca6\u0cb0\u0cbf"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u0c95\u0cb0\u0cc7\u0cb2\u0cbf\u0caf\u0ca8\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u0c8e\u0cab\u0cbf\u0c95\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u0cb8\u0c82\u0c96\u0ccd\u0caf\u0cc6\u0c97\u0cb3\u0cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u0c95\u0cc1\u0cb0\u0cc1\u0c96\u0ccd"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0cb6\u0c82\u0cac\u0cb2"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u0cac\u0cab\u0cbf\u0caf"_s)
		})
	}));
	return data;
}

LocaleNames_kn::LocaleNames_kn() {
}

$Class* LocaleNames_kn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_kn, name, initialize, &_LocaleNames_kn_ClassInfo_, allocate$LocaleNames_kn);
	return class$;
}

$Class* LocaleNames_kn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun