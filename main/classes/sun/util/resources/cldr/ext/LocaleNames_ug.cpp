#include <sun/util/resources/cldr/ext/LocaleNames_ug.h>

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

$MethodInfo _LocaleNames_ug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ug::*)()>(&LocaleNames_ug::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ug",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ug_MethodInfo_
};

$Object* allocate$LocaleNames_ug($Class* clazz) {
	return $of($alloc(LocaleNames_ug));
}

void LocaleNames_ug::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ug::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_BD, u"\u0628\u06d0\u0646\u06af\u0627\u0644"_s);
	$var($String, metaValue_CY, u"\u0633\u0649\u067e\u0631\u06c7\u0633"_s);
	$var($String, metaValue_bo, u"\u062a\u0649\u0628\u06d5\u062a\u0686\u06d5"_s);
	$var($String, metaValue_el, u"\u06af\u0649\u0631\u06d0\u0643\u0686\u06d5"_s);
	$var($String, metaValue_gu, u"\u06af\u06c7\u062c\u0627\u0631\u0627\u062a\u0686\u06d5"_s);
	$var($String, metaValue_ja, u"\u064a\u0627\u067e\u0648\u0646\u0686\u06d5"_s);
	$var($String, metaValue_jv, u"\u064a\u0627\u06cb\u0627\u0686\u06d5"_s);
	$var($String, metaValue_kn, u"\u0643\u0627\u0646\u0646\u0627\u062f\u0627\u0686\u06d5"_s);
	$var($String, metaValue_ko, u"\u0643\u0648\u0631\u06d0\u064a\u06d5\u0686\u06d5"_s);
	$var($String, metaValue_la, u"\u0644\u0627\u062a\u0649\u0646\u0686\u06d5"_s);
	$var($String, metaValue_lo, u"\u0644\u0627\u0626\u0648\u0633\u0686\u06d5"_s);
	$var($String, metaValue_mn, u"\u0645\u0648\u06ad\u063a\u06c7\u0644\u0686\u06d5"_s);
	$var($String, metaValue_my, u"\u0628\u0649\u0631\u0645\u0627\u0686\u06d5"_s);
	$var($String, metaValue_su, u"\u0633\u06c7\u0646\u062f\u0627\u0686\u06d5"_s);
	$var($String, metaValue_ta, u"\u062a\u0627\u0645\u0649\u0644\u0686\u06d5"_s);
	$var($String, metaValue_te, u"\u062a\u06d0\u0644\u06c7\u06af\u06c7\u0686\u06d5"_s);
	$var($String, metaValue_th, u"\u062a\u0627\u064a\u0644\u0627\u0646\u062f\u0686\u06d5"_s);
	$var($String, metaValue_tl, u"\u062a\u0627\u06af\u0627\u0644\u0648\u06af\u0686\u06d5"_s);
	$var($String, metaValue_got, u"\u06af\u0648\u062a\u0686\u06d5"_s);
	$var($String, metaValue_hmn, u"\u0645\u06c6\u06ad\u0686\u06d5"_s);
	$var($String, metaValue_men, u"\u0645\u06d0\u0646\u062f\u06d0\u0686\u06d5"_s);
	$var($String, metaValue_nqo, u"\u0646\u0649\u0643\u0648\u0686\u06d5"_s);
	$var($String, metaValue_peo, u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u067e\u0627\u0631\u0649\u0633\u0686\u06d5"_s);
	$var($String, metaValue_ssy, u"\u0633\u0627\u062e\u0648\u0686\u06d5"_s);
	$var($String, metaValue_uga, u"\u0626\u06c7\u06af\u0627\u0631\u0649\u062a\u0649\u0643\u0686\u06d5"_s);
	$var($String, metaValue_vai, u"\u06cb\u0627\u064a\u0686\u06d5"_s);
	$var($String, metaValue_zbl, u"\u0628\u0649\u0644\u0649\u0633 \u0628\u06d5\u0644\u06af\u0649\u0644\u0649\u0631\u0649"_s);
	$var($String, metaValue_Hans, u"\u0626\u0627\u062f\u062f\u0649\u064a \u062e\u06d5\u0646\u0686\u06d5"_s);
	$var($String, metaValue_Hant, u"\u0645\u06c7\u0631\u06d5\u0643\u0643\u06d5\u067e \u062e\u06d5\u0646\u0686\u06d5"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u0643\u0648\u0644\u0649\u0634\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u0626\u0648\u06af\u06d5\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u0645\u0649\u0631\u0627\u0646\u062f\u06d0\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u0628\u06d5\u0644\u06af\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\u0626\u0627\u062a\u0633\u0627\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u0645\u0627\u0631\u06cb\u0627\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"\u062a\u0627\u064a \u062a\u0627\u0645\u0686\u06d5 \u062a\u0627\u0645 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u062a\u0627\u06af\u0628\u0627\u0646\u06cb\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"\u06af\u0649\u0646\u0649\u06cb\u0627/\u0646\u0649\u062c\u0649\u06cb\u0627 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0645\u0649\u0633\u0649\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u0631\u0627\u062c\u0627\u0633\u062a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u067e\u0627\u0633\u067e\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u062a\u06d0\u0645\u0646\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u062a\u06d0\u0633\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u0631\u0627\u067e\u0627\u0646\u0649\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u062a\u06d0\u0631\u06d0\u0646\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u0626\u0627\u0633\u0633\u06d0\u0646\u0633\u0649\u064a\u0648\u0646 \u0626\u0627\u0631\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u062a\u06d0\u062a\u06c7\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0626\u0627\u0646\u062f\u0648\u0631\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0626\u06d5\u0631\u06d5\u0628 \u0628\u0649\u0631\u0644\u06d5\u0634\u0645\u06d5 \u062e\u06d5\u0644\u0649\u067e\u0649\u0644\u0649\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0626\u0627\u0641\u063a\u0627\u0646\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0626\u0627\u0646\u062a\u0649\u06af\u06c7\u0626\u0627 \u06cb\u06d5 \u0628\u0627\u0631\u0628\u06c7\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u0626\u06d0\u0641\u0649\u064a\u0648\u067e\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0626\u0627\u0646\u06af\u06cb\u0649\u0644\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0626\u0627\u0644\u0628\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\u0626\u06d5\u0631\u0645\u06d0\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\u062a\u06d0\u06ad\u06cb\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0626\u0627\u0646\u06af\u0648\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0626\u0627\u0646\u062a\u0627\u0631\u0643\u062a\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0626\u0627\u0631\u06af\u06d0\u0646\u062a\u0649\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u067e\u0627\u0631\u062a\u0649\u0626\u0627\u0646\u0686\u06d5 \u0626\u0648\u064a\u0645\u0627 \u062e\u06d5\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u0633\u0627\u0645\u0648\u0626\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\u0626\u0627\u06cb\u0649\u0633\u062a\u0649\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\u0626\u0627\u0631\u06c7\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"\u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u0626\u0627\u0644\u0627\u0646\u062f \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"\u0645\u064a\u06d0\u0646\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0626\u06d5\u0632\u06d5\u0631\u0628\u06d5\u064a\u062c\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0626\u06d5\u0631\u0645\u06d5\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0628\u0648\u0633\u0649\u0646\u0649\u064a\u06d5 \u06cb\u06d5 \u06af\u06d0\u0631\u062a\u0633\u06d0\u06af\u0648\u06cb\u0649\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\u0628\u0627\u0631\u0628\u0627\u062f\u0648\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\u0633\u06d0\u0628\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(metaValue_BD)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u0642\u06c7\u0645\u06c7\u0642\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0628\u06d0\u0644\u06af\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u06d5\u0633\u0649\u0631 \u0626\u06d0\u06af\u0649\u0632\u0644\u0649\u0643 \u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\u0628\u06c7\u0631\u0643\u0649\u0646\u0627 \u0641\u0627\u0633\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0628\u06c7\u0644\u063a\u0627\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\u0628\u06d5\u06be\u0631\u06d5\u064a\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\u0628\u06c7\u0631\u06c7\u0646\u062f\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\u0628\u06d0\u0646\u0649\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\u0633\u0627\u064a\u0646\u062a \u0628\u0627\u0631\u062a\u06d0\u0644\u06d0\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0628\u06d0\u0631\u0645\u06c7\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u0643\u06c7\u062a\u06d5\u0646\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u0626\u06d0\u0631\u0632\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0628\u0649\u0631\u06c7\u0646\u06d0\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0628\u0648\u0644\u0649\u06cb\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\u0643\u0627\u0631\u0649\u0628 \u062f\u06d0\u06ad\u0649\u0632\u0649 \u06af\u0648\u0644\u0644\u0627\u0646\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0628\u0627\u06be\u0627\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\u0633\u0648\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\u0628\u06c7\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\u0628\u0648\u06cb\u06d0\u062a \u0626\u0627\u0631\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0628\u0648\u062a\u0633\u06cb\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0628\u06d0\u0644\u0627\u0631\u06c7\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0628\u06d0\u0644\u0649\u0632"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u0643\u06c6\u0631\u06c8\u0646\u06c8\u0634\u0686\u0627\u0646 \u062a\u0627\u06cb\u06c7\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u067e\u0627\u0631\u0649\u0633 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u0626\u0649\u0628\u0631\u0627\u0646\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u0643\u0627\u0646\u0627\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u0643\u0648\u0643\u0648\u0633 (\u0643\u0649\u0644\u0649\u06ad) \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u0643\u0648\u0646\u06af\u0648 - \u0643\u0649\u0646\u0634\u0627\u0633\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u062c\u06c7\u0645\u06be\u06c7\u0631\u0649\u064a\u0649\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u0643\u0648\u0646\u06af\u0648 - \u0628\u0649\u0631\u0627\u0632\u0632\u0627\u06cb\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0634\u0649\u06cb\u06d0\u062a\u0633\u0627\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u0643\u0648\u062a\u06d0 \u062f\u06d0 \u0626\u0649\u06cb\u0648\u0626\u0649\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u0643\u06c7\u0643 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0686\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u0643\u0627\u064a\u0627\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\u0643\u0627\u0645\u06d0\u0631\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\u062c\u06c7\u06ad\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u0643\u0648\u0644\u0648\u0645\u0628\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\u0643\u0649\u0644\u0649\u067e\u067e\u06d0\u0631\u062a\u0648\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u0643\u0648\u0633\u062a\u0627\u0631\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u0643\u06c7\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u064a\u06d0\u0634\u0649\u0644 \u062a\u06c7\u0645\u0634\u06c7\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u0643\u06c7\u0631\u0627\u0686\u0627\u06cb"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0645\u0649\u0644\u0627\u062f \u0626\u0627\u0631\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"\u0628\u0627\u0644\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\u0686\u06d0\u062e \u062c\u06c7\u0645\u06be\u06c7\u0631\u0649\u064a\u0649\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\u0626\u06d0\u0643\u0627\u062c\u06c7\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"\u0626\u06d5\u0646\u0626\u06d5\u0646\u0649\u06cb\u0649 \u06cb\u0648\u0644\u0627\u067e\u06c7\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u06af\u06d0\u0631\u0645\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0626\u06d0\u06af\u0649\u0632\u0644\u0649\u0643 \u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u0626\u0627\u062a\u062c\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u0686\u0649\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u062f\u06d0\u06af\u0648-\u06af\u0627\u0631\u0634\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u062f\u06d0\u06cb\u0627\u0646\u0627\u06af\u0627\u0631\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\u062c\u0649\u0628\u06c7\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u062f\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\u0626\u0627\u0686\u0648\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u06af\u0648\u0646\u062f\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u0628\u0631\u0627\u0626\u0649\u0644 \u0626\u06d5\u0645\u0627\u0644\u0627\u0631 \u064a\u06d0\u0632\u0649\u0642\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u0628\u0631\u0627\u062e\u0645\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u062f\u0648\u0645\u0649\u0646\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631 (\u0643\u0649\u0686\u0649\u0643 \u06be\u06d5\u0631\u067e)"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u062f\u0648\u0645\u0649\u0646\u0649\u0643\u0627 \u062c\u06c7\u0645\u06be\u06c7\u0631\u0649\u064a\u0649\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u06af\u0648\u0631\u0648\u0646\u062a\u0627\u0644\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u0645\u0627\u0646\u0649\u067e\u06c7\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u0632\u06c7\u0646\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u062a\u0649\u06af\u0631\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"\u062a\u0627\u0643\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0626\u0627\u0644\u062c\u0649\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u067e\u0627\u0646\u06af\u0627\u0633\u0649\u0646\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u067e\u06d5\u06be\u0644\u06d5\u06cb\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0633\u06d0\u064a\u062a\u0627 \u06cb\u06d5 \u0645\u06d0\u0644\u0649\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u0686\u0649\u0628\u0686\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u067e\u0627\u0645\u067e\u0627\u0646\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0626\u06d0\u0643\u06cb\u0627\u062a\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u067e\u0627\u067e\u0649\u064a\u0627\u0645\u06d0\u0646\u062a\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u0626\u0627\u062f\u0627\u06ad\u0645\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0626\u06d0\u0633\u062a\u0648\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u062a\u0649\u06cb\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\u0645\u0649\u0633\u0649\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0633\u0627\u062e\u0627\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\u0686\u0627\u063a\u0627\u062a\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u067e\u0627\u0644\u0627\u06cb\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u0686\u06c7\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u0686\u0649\u0646\u06c7\u0643-\u0698\u0627\u0631\u06af\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u0645\u0627\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u0686\u0649\u067e\u06d0\u06cb\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u0686\u0648\u0643\u062a\u0627\u06cb\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u0686\u06d0\u0631\u0648\u0643\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0626\u06d0\u0631\u0649\u062a\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0626\u0649\u0633\u067e\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0626\u06d0\u0641\u0649\u064a\u0648\u067e\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u0626\u0649\u062a\u062a\u0649\u067e\u0627\u0642\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u0626\u06d0\u0644\u0627\u0645\u0649\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0645\u0649\u0644\u0627\u062f\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u0686\u06d0\u064a\u06d0\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u06af\u06c7\u062c\u0627\u0631\u0627\u062a\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u0626\u0649\u0646\u062f\u06c7\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u0626\u0627\u062f\u0649\u06af\u06d0\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0641\u0649\u0646\u0644\u0627\u0646\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\u0641\u0649\u062c\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\u0641\u0627\u0644\u0643\u0644\u0627\u0646\u062f \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u0645\u0649\u0643\u0631\u0648\u0646\u06d0\u0632\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u0641\u0627\u0631\u0648 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"\u0643\u067e\u06d0\u0644\u0644\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"\u062a\u0648\u0643\u06d0\u0644\u0627\u06cb\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u06af\u0631\u06d0\u0628\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"\u062f\u0627\u0698\u0649\u0646\u0643\u0648 \u0626\u06d0\u0644\u0649\u067e\u0628\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u06be\u0649\u0646\u062f\u0649\u0633\u062a\u0627\u0646 \u062f\u06c6\u0644\u06d5\u062a \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u06af\u0649\u0631\u06d0\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u06af\u0627\u0628\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u06cb\u0648\u062a\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0628\u0649\u0631\u0644\u06d5\u0634\u0645\u06d5 \u067e\u0627\u062f\u0649\u0634\u0627\u06be\u0644\u0649\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u06af\u0649\u0631\u06d0\u0646\u0627\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\u06af\u0649\u0631\u06c7\u0632\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5\u06af\u06d5 \u0642\u0627\u0631\u0627\u0634\u0644\u0649\u0642 \u06af\u0649\u06cb\u0649\u064a\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\u06af\u06c7\u0631\u0646\u0633\u06d0\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u06af\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u062a\u0627\u064a-\u0644\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u062c\u06d5\u0628\u0649\u0644\u062a\u0627\u0631\u0649\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u0626\u0627\u0641\u0631\u0649\u062e\u0649\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u06d5\u0633\u0649\u0631 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\u06af\u0627\u0645\u0628\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\u06af\u0649\u06cb\u0627\u062f\u06d0\u0644\u06c7\u067e"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u0626\u06d0\u0643\u06cb\u0627\u062a\u0648\u0631 \u06af\u0649\u06cb\u0649\u0646\u0649\u064a\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\u06af\u0649\u0631\u06d0\u062a\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u062c\u0648\u0631\u062c\u0649\u064a\u06d5 \u06cb\u06d5 \u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0633\u0627\u0646\u062f\u06cb\u0649\u0686 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u06af\u0649\u06cb\u0627\u062a\u06d0\u0645\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\u06af\u06c7\u0626\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u0646\u0649\u064a\u06d5 \u0628\u0649\u0633\u0633\u0627\u0626\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u062a\u0649\u0644\u0649\u0646\u06af\u0649\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u0643\u0649\u0644\u0649\u0646\u06af\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u064a\u06d0\u06ad\u0649 \u062a\u0627\u064a-\u0644\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u064a\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u0645\u06d5\u0631\u0643\u0649\u0632\u0649\u064a \u0643\u06c7\u0631\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u062a\u0649\u0644 \u0645\u06d5\u0632\u0645\u06c7\u0646\u0649 \u064a\u0648\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"\u062c\u06c7\u0631\u0686\u06d0\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"\u0626\u0627\u06cb\u0633\u062a\u0649\u0631\u0649\u064a\u06d5 \u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0634\u064a\u0627\u06ad\u06af\u0627\u06ad \u0626\u0627\u0644\u0627\u06be\u0649\u062f\u06d5 \u0645\u06d5\u0645\u06c7\u0631\u0649\u064a \u0631\u0627\u064a\u0648\u0646\u0649 (\u062c\u06c7\u06ad\u06af\u0648)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\u06be\u06d0\u0631\u062f \u0626\u0627\u0631\u0649\u0644\u0649 \u06cb\u06d5 \u0645\u0627\u0643\u062f\u0648\u0646\u0627\u0644\u062f \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u06be\u0648\u0646\u062f\u06c7\u0631\u0627\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u0643\u0649\u0631\u0648\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\u0626\u0627\u06af\u06d5\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5 \u0634\u0649\u06cb\u0649\u062a\u0633\u0627\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649 (\u0626\u06c7\u0645 \u0626\u06d5\u0644\u0642\u06c7\u0631\u0627)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u06be\u0627\u064a\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\u06cb\u06d0\u0646\u06af\u0649\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\u062a\u0627\u0645\u0627\u0634\u06d0\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u0643\u0627\u0646\u0627\u0631\u0649 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u06be\u0649\u0646\u062f\u0648\u0646\u06d0\u0632\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"\u0643\u0627\u064a\u0627\u06be\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0626\u0649\u0631\u06d0\u0644\u0627\u0646\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u0646\u0627\u067e\u0648\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"\u0646\u0649\u062f\u064a\u06c7\u0643\u0627 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u0646\u0627\u0645\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"\u0633\u0648\u0631\u0627 \u0633\u0648\u0645\u067e\u06d0\u06ad \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u0632\u0627\u0632\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"\u062a\u0627\u06ad\u063a\u06c7\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0626\u0649\u0633\u0631\u0627\u0626\u0649\u0644\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"\u0626\u0627\u0646\u0628\u0627\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u0645\u0627\u0646 \u0626\u0627\u0631\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u06be\u0649\u0646\u062f\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u0626\u06d5\u0646\u06af\u0644\u0649\u064a\u06d5\u06af\u06d5 \u0642\u0627\u0631\u0627\u0634\u0644\u0649\u0642 \u06be\u0649\u0646\u062f\u0649 \u0626\u0648\u0643\u064a\u0627\u0646 \u062a\u06d0\u0631\u0631\u0649\u062a\u0648\u0631\u0649\u064a\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\u0626\u0649\u0631\u0627\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\u0626\u0649\u0631\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0646\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\u0626\u0649\u062a\u0627\u0644\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\u0645\u0627\u062a\u06d0\u0645\u0627\u062a\u0649\u0643\u0649\u0644\u0649\u0642 \u0628\u06d5\u0644\u06af\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u062a\u0627\u064a\u0644\u0627\u0646\u062f\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"\u0643\u0648\u0645\u067e\u064a\u06c7\u062a\u06d0\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u0628\u06d0\u0646\u06af\u0627\u0644\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u062c\u06d0\u0631\u0633\u06d0\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_BD)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u064a\u0627\u0645\u0627\u064a\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\u0626\u0649\u064a\u0648\u0631\u062f\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u064a\u0627\u067e\u0648\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u0627\u062e\u0649\u0631\u0642\u0649 \u062f\u06d5\u06cb\u0631\u062f\u0649\u0643\u0649 \u0641\u0649\u0631\u0627\u0646\u0633\u06c7\u0632\u0686\u06d5 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u0626\u0627\u064a\u0646\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u06af\u06c7\u0633\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u0646\u064a\u0627\u0633\u0627 \u062a\u0648\u06ad\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u0643\u0627\u0646\u0646\u0627\u062f\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u0643\u0627\u064a\u0627\u06be\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0634\u0649\u06cb\u0649\u062a\u0633\u0627\u0631\u0649\u064a\u06d5 \u0626\u06d0\u06af\u0649\u0632\u0644\u0649\u0643 \u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u0628\u06c7\u062f\u062f\u0627 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u0643\u06d0\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u0644\u0627\u062a\u0649\u0646 \u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\u0642\u0649\u0631\u063a\u0649\u0632\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u0643\u0627\u0645\u0628\u0648\u062f\u0698\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\u0643\u0649\u0631\u0649\u0628\u0627\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\u0643\u0648\u0645\u0648\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0633\u0627\u064a\u0646\u062a \u0643\u0649\u062a\u0649\u0633 \u06cb\u06d5 \u0646\u06d0\u06cb\u0649\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u0626\u0649\u0631\u0633\u0649\u064a\u06d5\u062a \u0626\u0627\u062a\u0627\u0644\u063a\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"\u0643\u0627\u0646\u0627\u062f\u0627 \u0641\u0649\u0631\u0627\u0646\u0633\u06c7\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0686\u0627\u06cb\u0634\u064a\u06d5\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u0643\u0648\u0631\u06d0\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u067e\u0648\u0644\u0644\u0627\u0631\u062f \u062a\u0627\u06cb\u06c7\u0634\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0634\u0649\u06cb\u0649\u062a\u0633\u0627\u0631\u0649\u064a\u06d5 \u0641\u0649\u0631\u0627\u0646\u0633\u06c7\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u0643\u06c7\u06cb\u06d5\u064a\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u062a\u0648\u0643-\u067e\u0649\u0633\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u0643\u0627\u064a\u0645\u0627\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u0642\u0627\u0632\u0627\u0642\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u0643\u0649\u0631\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\u0644\u0627\u0626\u0648\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\u0644\u0649\u06cb\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\u0633\u0627\u064a\u0646\u062a \u0644\u06c7\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u0641\u0649\u0646\u0649\u0643\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0686\u0649\u0631\u0643\u0627\u06cb \u0633\u0649\u0644\u0627\u06cb\u064a\u0627\u0646\u0686\u06d5 \u0643\u0649\u0631\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u06af\u0649\u06cb\u0649\u0686\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u062a\u06c6\u06cb\u06d5\u0646 \u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\u0644\u0649\u0643\u062a\u06d0\u0646\u0633\u062a\u06d0\u064a\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0633\u0649\u0631\u0649\u0644\u0627\u0646\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\u0626\u0627\u0643\u0643\u0627\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0643\u0648\u067e\u062a\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\u0644\u0649\u0628\u06d0\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u0644\u06d0\u0633\u0648\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\u067e\u06d5\u06be\u0644\u0649\u06cb\u0649\u0686\u06d5 \u0643\u0649\u062a\u0627\u0628\u0649 \u062a\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u0644\u0649\u062a\u06cb\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\u0644\u0649\u064a\u06c7\u0643\u0633\u06d0\u0645\u0628\u06c7\u0631\u06af"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u0644\u0627\u062a\u06cb\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u0643\u0627\u062a\u0627\u0643\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"\u0633\u0648\u0631\u0627 \u0633\u0627\u0645\u067e\u0649\u06ad"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u0644\u0649\u06cb\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u0644\u0627\u062f\u0649\u0646\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u06cb\u06c7\u0646\u062c\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u0644\u0627\u0646\u062f\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u0644\u0627\u0646\u06af\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u062a\u0627\u0646\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\u0645\u0627\u0631\u0627\u0643\u06d5\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\u0645\u0648\u0646\u0627\u0643\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\u0645\u0648\u0644\u062f\u0648\u06cb\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"\u0646\u06c8\u0634\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\u0642\u0627\u0631\u0627 \u062a\u0627\u063a"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u0633\u0627\u064a\u0646\u062a \u0645\u0627\u0631\u062a\u0649\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u0644\u0627\u0645\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u0645\u0627\u062f\u0627\u063a\u0627\u0633\u0642\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\u0645\u0627\u0631\u0634\u0627\u0644 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\u0626\u0627\u0644\u06d0\u064a\u06c7\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"\u06cb\u0627\u064a\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0645\u0627\u0643\u06d0\u062f\u0648\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u0645\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u0628\u0649\u0631\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u0645\u0648\u06ad\u063a\u06c7\u0644\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u0646\u06d0\u06cb\u0627\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u0626\u0627\u06cb\u0645\u06d0\u0646 \u0626\u0627\u0644\u0627\u06be\u0649\u062f\u06d5 \u0645\u06d5\u0645\u06c7\u0631\u0649\u064a \u0631\u0627\u064a\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0645\u0627\u0631\u0649\u064a\u0627\u0646\u0627 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\u0645\u0627\u0631\u062a\u0649\u0646\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\u0645\u0648\u0646\u062a\u0633\u06d0\u0631\u0631\u0627\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u0645\u0627\u0644\u062a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u0645\u0627\u06cb\u0631\u0649\u062a\u0649\u064a\u06c7\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649 \u0626\u0627\u0644\u062a\u0627\u064a \u062a\u0649\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\u0645\u0627\u0644\u062f\u0649\u06cb\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\u0645\u0627\u0644\u0627\u06cb\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\u064a\u0627\u067e\u0648\u0646\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u0645\u0627\u0644\u0627\u064a\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u0645\u0648\u0632\u0627\u0645\u0628\u0649\u0643"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\u067e\u06d5\u06be\u0644\u0649\u06cb\u0649\u0686\u06d5 \u0626\u0648\u064a\u0645\u0627 \u062e\u06d5\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u0646\u0627\u0645\u0649\u0628\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u064a\u06d5\u06be\u06c7\u062f\u0649 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u0644\u06c7\u063a\u06d5\u062a \u062a\u0649\u0632\u0649\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\u064a\u06d0\u06ad\u0649 \u0643\u0627\u0644\u06d0\u062f\u0648\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"\u06cb\u06d0\u064a \u0626\u0627\u0626\u0649\u0644\u0649\u0633\u0649 \u067e\u0649\u0646\u064a\u0649\u0646 \u0644\u0627\u062a\u0649\u0646\u0644\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"\u0628\u0649\u0631\u0644\u0649\u0643\u0643\u06d5 \u0643\u06d5\u0644\u06af\u06d5\u0646 \u062a\u06c8\u0632\u0649\u062a\u0649\u0644\u06af\u06d5\u0646 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\u0646\u0649\u06af\u06d0\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\u0646\u0648\u0631\u0641\u0648\u0644\u0643 \u0626\u0627\u0631\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u0646\u0649\u06af\u06d0\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\u062a\u0648\u0631\u0648\u0643\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u067e\u06d5\u06be\u0644\u0649\u06cb\u0649\u0686\u06d5 \u0634\u06d0\u0626\u0649\u0631\u0649\u064a \u062a\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u0646\u0649\u0643\u0627\u0631\u0627\u06af\u06c7\u0626\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(metaValue_hmn)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u06af\u0648\u0644\u0644\u0627\u0646\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u0646\u0648\u0631\u06cb\u06d0\u06af\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u0646\u06d0\u067e\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\u0646\u0627\u06cb\u0631\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\u0646\u064a\u06c7\u0626\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\u0641\u0649\u0646\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u0631\u0648\u0645\u0628\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u0633\u0649\u0645\u0634\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u064a\u06d0\u06ad\u0649 \u0632\u06d0\u0644\u0627\u0646\u062f\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"\u0645\u06d0\u062a\u0631\u0648\u0626\u0649\u062a \u064a\u0627\u0632\u0645\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u0633\u0649\u06af\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u0645\u06d0\u062a\u0631\u0648\u0626\u0649\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u0642\u0649\u0631\u0649\u0645 \u062a\u06c8\u0631\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u0626\u0648\u0645\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u0626\u0627\u0646\u06af\u0649\u0643\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u067e\u0627\u0646\u0627\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649 (\u0645\u06d5\u062f\u0649\u0646\u06d5)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u0643\u0627\u0633\u0632\u06c7\u0628\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"\u0626\u06d5\u0646\u06af\u0644\u0649\u064a\u06d5 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u067e\u06d0\u0631\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5\u06af\u06d5 \u0642\u0627\u0631\u0627\u0634\u0644\u0649\u0642 \u067e\u0648\u0644\u0649\u0646\u06d0\u0632\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u067e\u0627\u067e\u06c7\u0626\u0627 \u064a\u06d0\u06ad\u0649 \u06af\u0649\u06cb\u0649\u0646\u0649\u064a\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\u0641\u0649\u0644\u0649\u067e\u067e\u0649\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\u067e\u0627\u0643\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u067e\u0648\u0644\u0634\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\u0626\u06d0\u06cb\u0648\u0646\u062f\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\u0633\u0627\u064a\u0646\u062a \u067e\u0649\u064a\u06d0\u0631 \u06cb\u06d5 \u0645\u0649\u0643\u06d0\u0644\u0648\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\u067e\u0649\u062a\u0643\u0627\u064a\u0631\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\u067e\u06c7\u0626\u06d0\u0631\u062a\u0648 \u0631\u0649\u0643\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u067e\u06d5\u0644\u06d5\u0633\u062a\u0649\u0646 \u0632\u06d0\u0645\u0649\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u0628\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u067e\u0648\u0631\u062a\u06c7\u06af\u0627\u0644\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\u067e\u0627\u0644\u0627\u0626\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\u0646\u0649\u0626\u0627\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u06af\u0649\u0631\u06d0\u0643\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631 (\u0643\u0649\u0686\u0649\u0643 \u06be\u06d5\u0631\u067e)"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u067e\u0627\u0631\u0627\u06af\u06cb\u0627\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u062a\u06c7\u0645\u0628\u06c7\u0643\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u0626\u0649\u0628\u0631\u0627\u0646\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u0642\u0627\u062a\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u0634\u0648\u062a\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u0646\u064a\u06c7\u0626\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u0626\u0648\u0643\u064a\u0627\u0646\u0649\u064a\u06d5 \u0626\u06d5\u062a\u0631\u0627\u067e\u0649\u062f\u0649\u0643\u0649 \u0626\u0627\u0631\u0627\u0644\u0644\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u0644\u06d0\u0632\u06af\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA \u062a\u0627\u06cb\u06c7\u0634\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"\u062a\u0627\u0643\u0631\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u062a\u06c7\u06cb\u0627\u0644\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u062a\u0627\u064a\u0644\u0627\u0646\u062f\u0686\u06d5-\u06cb\u0649\u064a\u06d0\u062a\u0646\u0627\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u062f\u06c7\u0646\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0626\u0627\u0641\u0631\u0649\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0631\u06d0\u064a\u06c7\u0646\u0649\u064a\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u0644\u0648\u062c\u0628\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u0631\u06d0\u062c\u0627\u06ad\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u0626\u0648\u0643\u064a\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0631\u0648\u0645\u0649\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u0633\u06d0\u0631\u0628\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"\u0645\u0631\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\u0631\u06c7\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\u0631\u0649\u06cb\u0627\u0646\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"\u064a\u06d0\u06ad\u0649 \u062a\u0627\u064a-\u0644\u06d5\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"\u0645\u06d0\u062a\u06d0\u0644\u0643\u0648 \u0626\u06d0\u0644\u0649\u067e\u0628\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\u0645\u0627\u0646\u06d5\u0643\u06d0\u0632\u06d5\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u0643\u0627\u0631\u0648\u0634\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0633\u06d5\u0626\u06c7\u062f\u0649\u064a \u0626\u06d5\u0631\u06d5\u0628\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u067e\u0648\u0646\u0627\u067e\u06d0\u0626\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u0645\u0627\u0646\u062f\u0627\u0626\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0633\u0648\u0644\u0648\u0645\u0648\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0633\u0648\u06ad\u062e\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\u0633\u06d0\u064a\u0634\u06d0\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\u0633\u06c7\u062f\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0634\u0649\u06cb\u06d0\u062a\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u0626\u0627\u0631\u0627\u0645\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"\u0644\u0648\u0645\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0633\u0649\u0646\u06af\u0627\u067e\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0633\u0627\u064a\u0646\u0649\u062a \u06be\u06d0\u0644\u06d0\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u0627\u0641\u0631\u0649\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0633\u0649\u0644\u0648\u06cb\u06d0\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627 \u0631\u0627\u064a\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0633\u0649\u06cb\u0627\u0644\u0628\u0627\u0631\u062f \u06cb\u06d5 \u064a\u0627\u0646 \u0645\u0627\u064a\u06d0\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0633\u0649\u0644\u0648\u06cb\u0627\u0643\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"\u0628\u0627\u0645\u06c7\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"\u06cb\u0648\u0644\u0649\u0626\u0627\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0633\u06d0\u0631\u0631\u0627\u0644\u06d0\u0626\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\u0633\u0627\u0646 \u0645\u0627\u0631\u0649\u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0633\u06d0\u0646\u06d0\u06af\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0633\u0648\u0645\u0627\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\u0645\u0627\u067e\u06c7\u062f\u06c7\u0646\u06af\u06c7\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0626\u0627\u0631\u0627\u067e\u0627\u062e\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u0626\u06d5\u0646\u0626\u06d5\u0646\u0649\u06cb\u0649 \u062a\u0627\u0645\u0649\u0644\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0633\u06c7\u0631\u0649\u0646\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0633\u06c7\u062f\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u0633\u0627\u0646 \u062a\u0648\u0645\u06d0 \u06cb\u06d5 \u067e\u0631\u0649\u0646\u0633\u0649\u067e\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0633\u0627\u0644\u06cb\u0627\u062f\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u0633\u0649\u0646\u062a \u0645\u0627\u0631\u062a\u06d0\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0633\u06c7\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u064a\u0627\u06cb\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0633\u0649\u06cb\u06d0\u0632\u0649\u0644\u0627\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u0626\u0627\u0631\u0627\u06cb\u0627\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u064a\u0627\u067e\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u062a\u0631\u0649\u0633\u062a\u0627\u0646 \u062f\u0627\u0643\u06c7\u0646\u06be\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u0626\u0627\u0633\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u0631\u0627\u064a\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u062a\u06c7\u0631\u0643\u0633 \u06cb\u06d5 \u0643\u0627\u064a\u0643\u0648\u0633 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u064a\u0627\u06ad\u0628\u06d5\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\u0686\u0627\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u0649\u064a\u06d5\u0646\u0649\u06ad \u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0632\u06d0\u0645\u0649\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\u062a\u0648\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\u062a\u0627\u064a\u0644\u0627\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u062a\u0627\u062c\u0649\u0643\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\u0643\u0627\u0631\u0649\u0628 \u062f\u06d0\u06ad\u0649\u0632\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\u062a\u0648\u0643\u06d0\u0644\u0627\u06cb"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u062a\u0649\u0645\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\u064a\u06d0\u0645\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"\u0643\u0648\u0631\u0649\u064a\u06d5\u0686\u06d5 \u0626\u06c8\u0632\u06c8\u0643 \u062a\u0627\u06cb\u06c7\u0634 \u0628\u0648\u064a\u0649\u0686\u06d5 \u0626\u0649\u0632\u062f\u06d5\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0645\u06d5\u0646\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"\u0628\u06c7\u0646\u062a\u0644\u0649\u06ad\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\u062a\u06c7\u0646\u0649\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\u062a\u0648\u0646\u06af\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"\u0632\u0627\u0645\u0627\u0646\u0649\u06cb\u0649 \u06cb\u0648\u0644\u0627\u067e\u06c7\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\u062a\u0649\u0631\u0649\u0646\u0649\u062f\u0627\u062f \u06cb\u06d5 \u062a\u0648\u0628\u0627\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\u062a\u06c7\u06cb\u0627\u0644\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\u062a\u06d5\u064a\u06cb\u06d5\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u0626\u0627\u0633\u062a\u06c7\u0631\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u0626\u0648\u0631\u062e\u06c7\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u062a\u0627\u0646\u0632\u0627\u0646\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u0643\u06cb\u0627\u0633\u0649\u064a\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u064a\u0648\u0686\u06c7\u0646 \u064a\u06d0\u0632\u0649\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"\u0643\u06c7\u062f\u0627\u06cb\u0627\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0626\u06c7\u0643\u0631\u0627\u0626\u0649\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u0626\u0627\u0631\u0648\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0626\u0627\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u062a\u0648\u06cb\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\u0643\u0648\u0646\u06af\u0648 \u0633\u0649\u06cb\u0627\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u06be\u06d5\u064a\u062f\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0626\u06c7\u06af\u0627\u0646\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u067e\u0649\u0646\u064a\u0649\u0646 \u062a\u0649\u0632\u0649\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u0633\u0649\u0646\u062e\u0627\u0644\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u0626\u0627 \u0642 \u0634 \u062a\u0627\u0634\u0642\u0649 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u0642\u0648\u0634\u0645\u0627 \u0626\u0649\u0634\u062a\u0627\u062a\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u06be\u0627\u06cb\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"\u0626\u0627\u0643\u0627\u062f\u06d0\u0645\u0649\u0643"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u0626\u0627\u062f\u062f\u0649\u064a \u062e\u06d5\u0646\u0686\u06d5 \u062a\u0649\u0632\u0649\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649 - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0626\u06c7\u0631\u06c7\u06af\u06cb\u0627\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0626\u06c6\u0632\u0628\u06d0\u0643\u0649\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u0645\u06d5\u0631\u0643\u0649\u0632\u0649\u064a \u0626\u0627\u062a\u0644\u0627\u0633 \u062a\u0627\u0645\u0627\u0632\u0627\u064a\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u0633\u0649\u0632\u0649\u0642 \u0628\u0648\u064a\u0649\u0686\u06d5 \u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u0646\u06af\u06d0\u0645\u0628\u06c7\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u06cb\u0627\u062a\u0649\u0643\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u067e\u0631\u0648\u06cb\u06d0\u0646\u0686\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0633\u0627\u064a\u0646\u062a \u06cb\u0649\u0646\u0633\u06d0\u0646\u062a \u06cb\u06d5 \u06af\u0649\u0631\u06d0\u0646\u0627\u062f\u0649\u0646\u06d0\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u06cb\u06d0\u0646\u06d0\u0633\u06c7\u0626\u06d0\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0626\u06d5\u0646\u06af\u0644\u0649\u064a\u06d5 \u06cb\u0649\u0631\u06af\u0649\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0626\u0627 \u0642 \u0634 \u06cb\u0649\u0631\u06af\u0649\u0646 \u0626\u0627\u0631\u0627\u0644\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\u06cb\u0649\u064a\u06d0\u062a\u0646\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\u06cb\u0627\u0646\u06c7\u0626\u0627\u062a\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\u0646\u0648\u063a\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u0631\u0649\u06cb\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0646\u0648\u0631\u06cb\u06d0\u06af\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0626\u0627\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0626\u06d5\u0631\u0645\u06d5\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u0645\u06d0\u0644\u0627\u0646\u06d0\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u06cb\u0627\u0644\u0644\u0649\u0633 \u06cb\u06d5 \u0641\u06c7\u062a\u06c7\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u0626\u06d5\u0646\u0626\u06d5\u0646\u0649\u06cb\u0649 \u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u0645\u0649\u0643\u0631\u0648\u0646\u06d0\u0632\u0649\u064a\u06d5 \u0631\u0627\u064a\u0648\u0646\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\u0646\u06af\u0648\u0645\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"\u062e\u06d0\u067e\u0628\u06c7\u0631\u0646 \u0644\u0627\u062a\u0649\u0646\u0644\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\u06cb\u0627\u0644\u0633\u06d0\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u0633\u0627\u0645\u0648\u0626\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"\u0628\u0627\u0633\u0633\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"\u0645\u0627\u0646\u0649\u067e\u06c7\u0631\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u06cb\u0648\u0644\u0627\u064a\u062a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u06cb\u0627\u0634\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u06cb\u0627\u0631\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u0626\u0627\u06cb\u0627\u062f\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u067e\u0648\u0644\u0649\u0646\u0649\u0632\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"\u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u0643\u0648\u0633\u0648\u06cb\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"\u0628\u0649\u0631\u0627\u062e\u0645\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u064a\u06d0\u0632\u0649\u0644\u0645\u0649\u063a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u0626\u0648\u0644-\u0686\u0649\u0643\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u0628\u0627\u062a\u0627\u0643"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u064a\u06d5\u0645\u06d5\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u0641\u0627\u06ad\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"\u0631\u06d0\u0633\u0649\u064a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u0641\u0627\u0646\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u0626\u0649\u0634\u0627\u0631\u06d5\u062a \u062a\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\u0645\u0627\u064a\u0648\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"\u0686\u0627\u0645\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0626\u0627\u0641\u0631\u0649\u0642\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"\u0633\u06c7\u0646\u062f\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u062f\u06d0\u06cb\u0627\u0646\u0627\u06af\u0627\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u06af\u0649\u0631\u06c7\u0632\u0649\u0646\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"\u062a\u0631\u0627\u0646\u0633\u0643\u0631\u0649\u067e\u0633\u0649\u064a\u06d5 \u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u062e\u0649\u0631\u0627\u06af\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\u0632\u0627\u0645\u0628\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"\u067e\u0649\u0646\u064a\u0649\u0646 \u0644\u0627\u062a\u0649\u0646\u0644\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0632\u0649\u0645\u0628\u0627\u0628\u06cb\u06d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\u064a\u0648\u0686\u06c7\u0646 \u062c\u0627\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u0631\u06c7\u0646\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u0645\u0648\u0646\u06af\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0633\u0648\u062a\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u062a\u06d0\u0644\u06c7\u06af\u06c7\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u0644\u0648\u0632\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"\u0646\u0627\u0634\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u0645\u0627\u0686\u0627\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u0626\u0627\u062f\u062f\u0649\u064a \u062e\u06d5\u0646\u0686\u06d5 \u067e\u06c7\u0644-\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u062e\u0649\u0644\u0649\u06af\u0627\u064a\u0646\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u0643\u06d0\u06ad\u06d5\u064a\u062a\u0649\u0644\u06af\u06d5\u0646 \u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5-\u06be\u0649\u0646\u062f\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u0645\u06c7\u0626\u06d0\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u062f\u0627\u0643\u0648\u062a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u062a\u0648\u0644\u06c7\u0642 \u0643\u06d5\u06ad\u0644\u0649\u0643\u062a\u0649\u0643\u0649 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u062e\u0649\u062a\u062a\u0649\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u062f\u0627\u0631\u06af\u0649\u06cb\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u062a\u0627\u064a\u062a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u0645\u0627\u064a\u0627\u0686\u06d5 \u062a\u06d5\u0633\u06cb\u0649\u0631\u0649\u064a \u064a\u06d0\u0632\u0649\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u0643\u0648\u067e\u062a\u0649\u0643"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u0646\u06d0\u06cb\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u0626\u06c7\u062f\u0645\u06c7\u0631\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u0643\u06d0\u062e\u0645\u06d0\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649 (\u0633\u06d5\u0626\u06c7\u062f\u0649 \u0626\u06d5\u0631\u06d5\u0628\u0649\u0633\u062a\u0627\u0646 \u0626\u0627\u064a)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u0644\u0649\u0645\u0628\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u0633\u0627\u0646\u062f\u0627\u06cb\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u0631\u0649\u0645 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u0633\u0627\u062e\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"\u0634\u0627\u0631\u0627\u062f\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u0633\u0627\u0645\u0627\u0631\u0649\u062a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"\u0633\u0649\u0643\u0627\u06cb\u06c7\u0632"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u0633\u0627\u0645\u0628\u06c7\u0631\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u0633\u0627\u0633\u0627\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u0633\u0627\u0646\u062a\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u062a\u0649\u0641\u0649\u0646\u0627\u063a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u0626\u0649\u0628\u0631\u0627\u0646\u0649 \u067e\u0627\u0631\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\u0646\u06af\u0627\u0645\u0628\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u06af\u06c7\u0631\u0645\u06c7\u0643\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"\u0626\u0627\u0644\u06c7\u0643\u06c7 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u0644\u06c7\u0628\u0627-\u0644\u06c7\u0626\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u0633\u0627\u0646\u06af\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u0644\u06c7\u064a\u0633\u06d0\u0646\u06af\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u0646\u0649\u064a\u0627\u0646\u0643\u0648\u0644\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u0646\u064a\u0627\u0645\u06cb\u06d0\u0632\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u0644\u06c7\u0646\u062f\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u0646\u0649\u0626\u0648\u0631\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u0644\u06c7\u0626\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(metaValue_hmn)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u0641\u0649\u0644\u0649\u067e\u067e\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u062f\u06d0\u0644\u0627\u06cb\u0627\u0631\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u0645\u0649\u0632\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u0628\u06d0\u0644\u06c7\u062c\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u0633\u0644\u0627\u06cb\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u0628\u0627\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u0644\u06c7\u064a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u0628\u0627\u0633\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"\u0628\u0627\u0645\u06c7\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u0626\u0649\u0628\u0631\u0627\u0646\u0649 \u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u0626\u0649\u0633\u067e\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u0646\u0649\u0632\u06d5\u0645\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0634\u0648\u062a\u0644\u0627\u0646\u062f\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u0633\u0649\u062a\u0633\u0649\u0644\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0626\u0627\u0641\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0626\u0627\u0628\u062e\u0627\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u0626\u0627\u06cb\u06d0\u0633\u062a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0626\u0627\u0641\u0631\u0649\u0643\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u0626\u0627\u0643\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"\u0686\u0627\u0643\u0645\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"\u06af\u0648\u0645\u0627\u0644\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0626\u0627\u0645\u06be\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u0626\u0627\u0631\u0627\u06af\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0626\u06d5\u0631\u06d5\u0628"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"\u0633\u0649\u062a\u0648\u0644\u06cb\u0649\u0632\u0632\u0627/\u0633\u0648\u0644\u0628\u0649\u0643\u0627 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u064a\u0627\u067e\u0648\u0646\u0686\u06d5 \u062e\u0649\u0631\u0627\u06af\u0627\u0646\u0627 \u064a\u0627\u0643\u0649 \u0643\u0627\u062a\u0627\u0643\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0626\u0627\u0633\u0627\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u0633\u0649\u0632\u0649\u0642\u0644\u0649\u0642 A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u0626\u0627\u06cb\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u0633\u0649\u0632\u0649\u0642\u0644\u0649\u0642 B"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u0626\u0627\u064a\u0645\u0627\u0631\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0626\u06d5\u0632\u06d5\u0631\u0628\u06d5\u064a\u062c\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"\u062e\u0648\u062c\u0643\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"\u0626\u0648\u0633\u06d0\u0626\u0627\u0643\u0643\u0648/\u0626\u0648\u0633\u0648\u062c\u06d5\u0646 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0628\u0627\u0634\u0642\u0649\u0631\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u064a\u0627\u0646 \u0628\u06c6\u0644\u06d5\u0643 \u0633\u0649\u0632\u0649\u0642 \u0628\u0648\u064a\u0686\u06d5 \u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0628\u06d0\u0644\u0627\u0631\u06c7\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0628\u06c7\u0644\u063a\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u0628\u0649\u0633\u0644\u0627\u0645\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"\u064a\u0627\u06cb\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u0628\u0627\u0645\u0628\u0627\u0631\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0628\u06d0\u0646\u06af\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u062f\u0648\u06af\u0631\u0649\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0628\u0649\u0631\u06d0\u062a\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0628\u0648\u0633\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"\u0633\u06d0\u0643\u0646\u06d0\u0643\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u0644\u0627\u0626\u0648\u0633\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u0633\u06d0\u0646\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u0633\u06d0\u0644\u0643\u0627\u067e\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u0643\u0627\u062a\u0627\u0644\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0633\u0648\u06ad\u062e\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u0686\u06d0\u0686\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u0686\u0627\u0645\u0648\u0631\u0631\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\u062a\u06c8\u0632\u0649\u062a\u0649\u0644\u06af\u06d5\u0646 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u0643\u0648\u0631\u0633\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u0626\u0648\u0631\u0649\u064a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u0643\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0686\u06d0\u062e\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0633\u0644\u0627\u06cb\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u0686\u06c7\u06cb\u0627\u0634\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u06cb\u06d0\u0644\u0634\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u0626\u06d0\u0641\u0649\u064a\u0648\u067e\u0649\u064a\u06d5\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u064a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u062f\u0627\u0646\u0649\u0634\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627 \u067e\u0648\u0631\u062a\u06c7\u06af\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u0628\u06d0\u062c\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u062f\u0649\u0646\u0643\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u0628\u06c7\u06af\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u0628\u06d0\u0645\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0626\u0649\u0631\u06d0\u0644\u0627\u0646\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\u0645\u0648\u06ad\u063a\u06c7\u0644\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u062f\u0649\u06cb\u06d0\u062e\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"\u0644\u0627\u062a\u0649\u0646 \u0626\u0627\u0645\u06d0\u0631\u0649\u0643\u0627 \u0626\u0649\u0633\u067e\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u0632\u0648\u06ad\u062e\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u0628\u06d0\u0646\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u062f\u06d0\u06be\u0642\u0627\u0646\u0644\u0627\u0631 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"\u0641\u0631\u0627\u0633\u06d0\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u0632\u0627\u0631\u0645\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u06af\u0649\u0631\u06d0\u0643\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u0626\u06d0\u06cb\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"\u0628\u0627\u0641\u06c7\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0626\u06d0\u0633\u067e\u0631\u0627\u0646\u062a\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u0645\u06c7\u0631\u06d5\u0643\u0643\u06d5\u067e \u062e\u06d5\u0646\u0686\u06d5 \u062a\u0649\u0632\u0649\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649 - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0626\u0649\u0633\u067e\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0626\u06d0\u0633\u062a\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0628\u0627\u0633\u0643\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u0628\u06c7\u062e\u0649\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u0633\u0627\u0645\u0627\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u0634\u0649\u0644\u062e\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u0626\u06c8\u0633\u062a\u06c8\u0646 \u0633\u0648\u0631\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\u062e\u06d5\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\u0634\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\u062e\u0627\u0646\u06c7\u0646\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u067e\u0627\u0631\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u0641\u06c7\u0644\u0627\u06be\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\u0686\u0627\u062f \u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0641\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0641\u0649\u062c\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u0641\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u06af\u06c7\u0627\u06ad\u062f\u0648\u06ad\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0641\u0627\u0626\u06d0\u0631\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u0626\u06c7\u0645\u0628\u06c7\u0646\u062f\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0646\u0633\u06c7\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u0633\u0649\u062f\u0627\u0645\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0641\u0649\u0631\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0626\u0649\u0631\u06d0\u0644\u0627\u0646\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0634\u0648\u062a\u0644\u0627\u0646\u062f\u0649\u064a\u06d5 \u06af\u0627\u064a\u0644\u0686\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u06af\u0627\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u06af\u06c7\u0626\u0627\u0631\u0627\u0646\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u0628\u0648\u062c\u067e\u06c7\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u064a\u0648\u0686\u06c7\u0646 \u062a\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u0626\u06d0\u0641\u0649\u064a\u0648\u067e\u0649\u064a\u06d5 \u0626\u0627\u0645\u06d0\u062a\u06d0 \u0626\u0627\u0644\u06d0\u0645 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0645 \u06be\u0649\u062c\u0631\u0649\u064a\u06d5 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649 (\u0626\u0627\u0633\u062a\u0631\u0648\u0646\u0648\u0645\u0649\u064a\u06d5 \u062f\u06d5\u06cb\u0631\u0649)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u0645\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"\u0626\u0648\u0633\u0645\u0627\u0646\u0649\u064a\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u062e\u0627\u0626\u06c7\u0633\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0626\u0649\u0628\u0631\u0627\u0646\u0649\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u06be\u0649\u0646\u062f\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u062e\u06c7\u067e\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u0628\u0649\u0643\u0648\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u0628\u0649\u0646\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u06be\u0649\u0631\u0649 \u0645\u0648\u062a\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0643\u0649\u0631\u0648\u062f\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u06be\u0627\u064a\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u06cb\u06d0\u0646\u06af\u0649\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0626\u06d5\u0631\u0645\u06d0\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u062e\u06d0\u0631\u06d0\u0631\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"IPA \u062a\u0627\u06cb\u06c7\u0634\u0644\u0649\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u0626\u0627\u0631\u0649\u0644\u0649\u0642 \u062a\u0649\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u06be\u0649\u0646\u062f\u0648\u0646\u06d0\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u062a\u0649\u0628\u06d5\u062a\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u0626\u0649\u0646\u062a\u0649\u0631\u0644\u0649\u06ad\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u0626\u0649\u06af\u0628\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u064a\u0649\u0686\u06d5 (\u0633\u0649\u0686\u06c8\u06d5\u0646)"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u06d5\u0633\u0649\u0631 \u0641\u0649\u0631\u0627\u0646\u0633\u06c7\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u0626\u0649\u0646\u06c7\u067e\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0641\u0649\u0631\u0627\u0646\u0633\u06c7\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u0626\u0649\u062f\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649 \u0641\u0649\u0631\u0649\u0632\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649 \u0641\u0649\u0631\u0649\u0632\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0626\u0649\u0633\u0644\u0627\u0646\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0626\u0649\u062a\u0627\u0644\u0649\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0626\u0649\u0646\u06c7\u0643\u062a\u0649\u062a\u06c7\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u0645\u0627\u0644\u0627\u064a\u0627\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u062c\u06d5\u0646\u06c7\u0628\u0649 \u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u0633\u0627\u0631\u0627\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u062f\u0648\u06af\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"\u0644\u06d5\u067e\u0686\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"\u0643\u0648\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649\u064a \u0633\u0627\u0645\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u0634\u0627\u06cb\u0649\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u0645\u0627\u062f\u06c7\u0631\u06d0\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u0644\u06c7\u0644\u06d0 \u0633\u0627\u0645\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u0645\u0627\u06af\u0627\u062e\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u0645\u0627\u0641\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u0645\u0627\u064a\u062a\u0649\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u0626\u0649\u0646\u0627\u0631\u0649 \u0633\u0627\u0645\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u06af\u0649\u0631\u06c7\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u0633\u0649\u0643\u0633\u0649\u0643\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u0645\u0627\u0643\u0627\u0633\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u0633\u0643\u0648\u0644\u062a \u0633\u0627\u0645\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u0645\u0627\u0646\u062f\u0649\u0646\u06af\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u0643\u0648\u0646\u06af\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u0643\u0649\u0643\u06c7\u064a\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u0645\u0627\u0633\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u0643\u0649\u06cb\u0627\u0646\u064a\u0627\u0645\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u0642\u0627\u0632\u0627\u0642\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u06af\u0649\u0631\u06d0\u0646\u0644\u0627\u0646\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u0643\u0649\u0645\u06d0\u0631\u0686\u06d5"_s)
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
			$of(u"\u0643\u0627\u0646\u06c7\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u0643\u06d5\u0634\u0645\u0649\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u0643\u0649\u0631\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u0644\u06d5\u067e\u0686\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u0626\u0627\u06cb\u06d0\u0633\u062a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u0643\u06c7\u0631\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u0643\u0648\u0645\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u0643\u0648\u0631\u0646\u0649\u0634\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u0642\u0649\u0631\u063a\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u0633\u0648\u0646\u0649\u0646\u0643\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u0644\u0649\u064a\u06c7\u0643\u0633\u06d0\u0645\u0628\u06c7\u0631\u06af\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u0645\u0627\u0644\u0627\u064a\u0627\u0644\u0627\u0645\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u06af\u0627\u0646\u062f\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u0631\u0648\u06ad\u06af\u0648\u0631\u0648\u06ad\u06af\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u0644\u0649\u0645\u0628\u06c7\u0631\u06af\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u0644\u0649\u0646\u06af\u0627\u0644\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u0641\u0649\u0631\u0649\u0626\u06c7\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"\u062a\u0627\u064a \u062a\u0627\u0645\u0686\u06d5 \u062e\u0648\u0631\u0627 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u0644\u0649\u062a\u06cb\u0627\u0646\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u0644\u06c7\u0628\u0627-\u0643\u0627\u062a\u0627\u0646\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u0644\u0627\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u0633\u0648\u063a\u062f\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}\u060c {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u0645\u0627\u0644\u0627\u06af\u0627\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u0645\u0627\u0631\u0634\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u0643\u06c6\u06ad\u06c8\u0644\u062f\u0649\u0643\u0649 \u064a\u06c7\u0646\u0649\u0643\u0648\u062f \u062a\u0649\u0632\u0649\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u0645\u0627\u06cb\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u0645\u0627\u0643\u06d0\u062f\u0648\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u0645\u0627\u0644\u0627\u064a\u0627\u0644\u0627\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u0645\u0627\u0631\u0627\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u0645\u0627\u0644\u0627\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u0645\u0627\u0644\u062a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u0633\u0627\u0626\u06c7\u0631\u0627\u0634\u062a\u0649\u0631\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u0626\u06d5\u0631\u0645\u06d5\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u0645\u0648\u0643\u0634\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"\u0645\u0627\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u062a\u06c6\u06cb\u06d5\u0646 \u0633\u0648\u0631\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u062e\u0627\u0646 \u062c\u06d5\u0645\u06d5\u062a\u0649 \u0626\u0627\u0631\u0627\u0645\u06c7"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u0646\u0627\u06cb\u0631\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u0626\u0627\u062f\u06d5\u062a\u062a\u0649\u0643\u0649 \u0626\u0649\u0632\u062f\u06d5\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u0646\u0648\u0631\u06cb\u0649\u06af\u0649\u064a\u06d5 \u0628\u0648\u0643\u0645\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649 \u0646\u062f\u06d5\u0628\u06d5\u0644\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u0646\u06d0\u067e\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u0646\u062f\u0648\u0646\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u0645\u0627\u0646\u062f\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u06af\u0648\u0644\u0644\u0627\u0646\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u064a\u06d0\u06ad\u0649 \u0646\u0648\u0631\u06cb\u06d0\u06af\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u0646\u0648\u0631\u06cb\u06d0\u06af\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u062c\u06d5\u0646\u06c7\u0628\u0649 \u0646\u062f\u06d5\u0628\u06d5\u0644\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u0646\u0627\u06cb\u0627\u062e\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u0642\u0627\u0631\u0627-\u0642\u0627\u0644\u067e\u0627\u0642\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u0646\u0649\u064a\u0627\u0646\u062c\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u0643\u0627\u0686\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u0643\u0627\u0628\u0649\u0644\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"\u067e\u0648\u0644\u0649\u062a\u0648\u0646\u0649\u0643"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u0626\u0648\u0643\u0633\u0649\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u062c\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u0643\u0627\u0645\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"\u062f\u06d5\u0633\u0644\u06d5\u067e\u0643\u0649 \u0645\u06d5\u0632\u06af\u0649\u0644\u062f\u0649\u0643\u0649 \u0632\u0627\u0645\u0627\u0646\u0649\u06cb\u0649 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u0626\u0648\u062c\u0649\u0628\u06cb\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u0645\u06d0\u0631\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u0626\u06d5\u0631\u0645\u06d5\u0646\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u0626\u0648\u0631\u0648\u0645\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u0643\u0627\u06cb\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u0626\u0648\u062f\u0649\u064a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u0626\u0648\u0633\u0633\u06d0\u062a\u0686\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC \u0644\u0627\u062a\u0649\u0646\u0644\u0627\u0634\u062a\u06c7\u0631\u06c7\u0634\u060c 1997 \u0646\u06d5\u0634\u0631\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u0643\u0627\u0628\u0627\u0631\u062f\u06d5\u064a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u0645\u0648\u0631\u0649\u0633\u064a\u06d0\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u0633\u0649\u0631\u0627\u0646\u0627\u0646-\u062a\u0648\u06ad\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u067e\u06d5\u0646\u062c\u0627\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u062f\u06c7\u0626\u0627\u0644\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u0633\u06d0\u0631\u06d0\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"\u0631\u06d0\u0633\u0649\u064a\u0627\u0646\u0646\u0649\u06ad \u0644\u0649\u067e\u0648\u06cb\u0627\u0632 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"\u0643\u0627\u0646\u06d0\u0645\u0628\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u067e\u0627\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u067e\u0648\u0644\u06d5\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u06af\u0648\u0644\u0644\u0627\u0646\u062f\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"\u0633\u0627\u0626\u06c7\u0631\u0627\u0634\u062a\u0649\u0631\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u062f\u0627\u0646\u06af\u0649 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u067e\u06c7\u0634\u062a\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u067e\u0648\u0631\u062a\u06c7\u06af\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u06d5\u0633\u0649\u0631 \u0626\u0649\u0631\u06d0\u0644\u0627\u0646\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"\u0628\u0649\u0631\u0627\u0632\u0649\u0644\u0649\u064a\u06d5 \u067e\u0648\u0631\u062a\u06c7\u06af\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"\u0628\u0648\u062e\u0648\u0631\u0649\u0686 \u0626\u06d0\u0644\u0649\u067e\u0628\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u062a\u064a\u0627\u067e\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u0645\u0627\u0643\u06c7\u06cb\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"\u0646\u0649\u0643\u0648\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u0628\u0649\u0631\u0627\u062c\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u064a\u0649\u0644\u0646\u0627\u0645\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u0645\u06d0\u062a\u0627\u0686\u06d5\u2019"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u0628\u06d0\u0631\u0645\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u0643\u06d0\u0686\u0649\u06cb\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u0632\u0627\u067e\u0648\u062a\u06d0\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u0628\u0648\u062f\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u0644\u0627\u0646\u0646\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u0645\u0627\u0643\u0648\u0646\u062f\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u0626\u06d0\u0641\u0649\u064a\u0648\u067e\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0631\u0648\u0645\u0627\u0646\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u0631\u06c7\u0646\u062f\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u067e\u06c7\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0631\u0648\u0645\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u0626\u0648\u0631\u0649\u064a\u0627\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u062e\u06d5\u0646\u0686\u06d5 \u0626\u0648\u0646\u0644\u06c7\u0642 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0631\u06c7\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"\u0626\u0627\u0643\u06c7\u0633\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u0643\u06d0\u0646\u0649\u064a\u06d5\u0631\u0649\u06cb\u0627\u0646\u062f\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u0643\u0627\u0628\u06c7\u06cb\u06d0\u0631\u062f\u0649\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u0645\u0649\u0643\u0645\u0627\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u0633\u06c7\u0643\u06c7\u0645\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"\u0626\u0627\u06cb\u0633\u062a\u0631\u0627\u0644\u0649\u064a\u06d5 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"\u062f\u06c7\u067e\u0644\u0648\u064a\u0627\u0646 \u062a\u06d0\u0632 \u062e\u0627\u062a\u0649\u0631\u0649\u0644\u06d5\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0633\u0627\u0646\u0633\u0643\u0631\u0649\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"\u0628\u0649\u0631\u0644\u0649\u0643\u0643\u06d5 \u0643\u06d5\u0644\u06af\u06d5\u0646 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u0633\u0627\u0631\u062f\u0649\u0646\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u0633\u06c7\u0633\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0633\u0649\u0646\u062f\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0633\u0627\u0645\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u0645\u0649\u0646\u0627\u06ad\u0643\u0627\u0628\u0627\u0626\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u0633\u0627\u0646\u06af\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u0633\u06d0\u0631\u0628-\u0643\u0631\u0648\u062f\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0633\u0649\u0646\u06af\u0627\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u0633\u06c8\u0645\u06d5\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0633\u0649\u0644\u0648\u06cb\u0627\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0633\u0649\u0644\u0648\u06cb\u06d0\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"\u06af\u0649\u0631\u0627\u0646\u062a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u0633\u0627\u0645\u0648\u0626\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0634\u0648\u0646\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0633\u0648\u0645\u0627\u0644\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5-\u06be\u0649\u0646\u062f\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0626\u0627\u0644\u0628\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0633\u06d0\u0631\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u0633\u0649\u06cb\u0627\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u0633\u0648\u062a\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"\u0646\u0627\u062a\u0649\u0633\u0648\u0646 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0634\u0649\u06cb\u06d0\u062f\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0633\u0649\u06cb\u0627\u06be\u0649\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u0645\u06c7\u0631\u06d5\u0643\u0643\u06d5\u067e \u062e\u06d5\u0646\u0686\u06d5 \u067e\u06c7\u0644-\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\u0626\u0649\u0628\u0649\u0628\u0649\u0626\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u0626\u0649\u0628\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0626\u0627\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u0628\u06c7\u0631\u0649\u064a\u0627\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u0626\u0648\u062a\u062a\u06c7\u0631\u0627 \u0626\u0627\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0626\u0627\u0633\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u062a\u0627\u062c\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u062a\u0649\u06af\u0631\u0649\u0646\u064a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u0628\u06c7\u06af\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u0643\u0648\u0631\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"\u0643\u0627\u0646\u0627\u062f\u0627 \u0626\u0649\u0646\u06af\u0644\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0645\u06d5\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u0633\u0649\u06cb\u0627\u0646\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u062a\u0648\u0646\u06af\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"\u0628\u06c7\u0644\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u062c\u0648\u0644\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u064a\u0627\u067e\u0648\u0646\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u062a\u06c8\u0631\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u0633\u0648\u0646\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u0643\u0648\u0645\u0648\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u0686\u0627\u0643\u0645\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u062a\u0627\u062a\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u062f\u0649\u064a\u06c7\u0644\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u062a\u0649\u06cb\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u062a\u0627\u062e\u062a\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"\u0633\u0627\u0646 \u06af\u0649\u064a\u0648\u0631\u06af\u0649\u064a\u0648/\u0628\u0649\u0644\u0627 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u064a\u0627\u06cb\u0631\u0648\u067e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u0634\u0649\u0645\u0627\u0644\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\u062f\u0627\u0632\u0627\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0649\u064a \u064a\u0627\u06cb\u0631\u0648\u067e\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0626\u06c7\u064a\u063a\u06c7\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0626\u0649\u062a\u0627\u0644\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u0626\u0648\u0631\u062a\u0627\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0626\u06c7\u0643\u0631\u0627\u0626\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\u0643\u0648\u067e\u062a\u0649\u0643 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0626\u0648\u0631\u062f\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"\u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u06d5\u0634\u062a\u06c8\u0631\u06c8\u0644\u06af\u06d5\u0646 \u0631\u06d0\u0633\u0649\u064a\u0627\u0646 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u0642\u0627\u0644\u0645\u0627\u0642\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u0632\u06d0\u0646\u0627\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0626\u06c6\u0632\u0628\u06d0\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u0643\u0627\u0633\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"\u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u0633\u0649\u064a\u0648\u0644\u0648\u062a\u0649-\u0646\u0627\u06af\u0631\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u06cb\u06d0\u0646\u062f\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"\u06cb\u0627\u0631\u0627\u06ad \u0643\u0649\u0634\u0649\u062a\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u0645\u0649\u0646\u06af\u0648 \u064a\u0649\u0644\u0646\u0627\u0645\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u06cb\u0649\u064a\u06d0\u062a\u0646\u0627\u0645\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u062e\u0648\u062a\u06d5\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u0643\u0648\u064a\u0631\u0627 \u0686\u0649\u0646\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"\u062a\u0627\u0631\u0627\u0633\u0643\u0649\u06cb\u0649\u062a\u0633\u0627 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u06cb\u0648\u0644\u0627\u067e\u06c7\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0649\u064a \u0633\u06c7\u0631\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u0626\u0648\u0633\u0645\u0627\u0646\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u06cb\u0627\u0644\u0644\u06c7\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u0633\u06c7\u0631\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u0644\u0649\u062f\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u0633\u06c7\u0645\u06d0\u0631-\u0626\u0627\u0643\u0643\u0627\u062f\u0649\u064a\u0627\u0646 \u0645\u0649\u062e \u062e\u06d5\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u06cb\u0648\u0644\u0648\u0641\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u0645\u0627\u0631\u0627\u0643\u06d5\u0634 \u062a\u0627\u0645\u0627\u0632\u0649\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u06be\u0627\u0632\u0649\u0631\u0642\u0649 \u0632\u0627\u0645\u0627\u0646 \u0626\u06c6\u0644\u0686\u06d5\u0645\u0644\u0649\u0643 \u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u0628\u0649\u0631\u0644\u0649\u0643\u0643\u06d5 \u0643\u06d5\u0644\u06af\u06d5\u0646 \u0643\u0627\u0646\u0627\u062f\u0627 \u064a\u06d5\u0631\u0644\u0649\u0643 \u0628\u0648\u063a\u06c7\u0645 \u062c\u06d5\u062f\u06cb\u0649\u0644\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u06af\u0627\u064a\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u0645\u0627\u0646\u062c\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u0641\u0649\u0631\u0627\u0643\u062a\u06c7\u0631 \u0644\u0627\u062a\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"\u0626\u0627\u0646\u0627\u062a\u0648\u0644\u0649\u064a\u06d5 \u062a\u06d5\u0633\u06cb\u0649\u0631\u0649\u064a \u064a\u06d0\u0632\u0649\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u06af\u0649\u0628\u0627\u064a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u0645\u0627\u0646\u0649\u067e\u06c7\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u0633\u0649\u0643\u0648\u062a \u0644\u0627\u062a\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u0626\u0627\u062f\u062f\u0649\u064a \u062e\u06d5\u0646\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u0645\u06c7\u0631\u06d5\u0643\u0643\u06d5\u067e \u062e\u06d5\u0646\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u062e\u0648\u0633\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u0631\u0649\u0645 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631 (\u0643\u0649\u0686\u0649\u0643 \u06be\u06d5\u0631\u067e)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0628\u0649\u0644\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"\u067e\u0627\u0645\u0627\u0643\u0627 \u0634\u0649\u06cb\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u0644\u0649\u0633\u0649\u064a\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u0626\u0648\u0633\u0627\u06af\u06d0\u0644\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"\u0645\u06d0\u062f\u06c7\u0645\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u0643\u0648\u0631\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u0645\u0648\u062e\u0627\u06cb\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u0643\u0627\u0643\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"\u062f\u06d5\u0633\u0644\u06d5\u067e\u0643\u0649 \u0645\u06d5\u0632\u06af\u0649\u0644\u062f\u0649\u0643\u0649 \u0632\u0627\u0645\u0627\u0646\u0649\u06cb\u0649 \u0641\u0649\u0631\u0627\u0646\u0633\u06c7\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u064a\u0649\u062f\u062f\u0649\u0634\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u0645\u0648\u0633\u0633\u0649\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"\u0633\u06c8\u0631\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u062f\u06d0\u0632\u06d0\u0631\u06d0\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u064a\u0648\u0631\u06c7\u0628\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"\u0645\u06d0\u0643\u0633\u0649\u0643\u0627 \u0626\u0649\u0633\u067e\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u063a\u06d5\u0631\u0628\u0649\u064a \u0633\u06c8\u0631\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u0626\u0648\u0633\u0645\u0627\u0646 \u062a\u06c8\u0631\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u0633\u06c8\u0631\u0649\u064a\u06d5\u0686\u06d5 \u0626\u06d5\u0628\u062c\u06d5\u062a"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u062c\u06c7\u0627\u06ad\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u0643\u0627\u0631\u0649\u064a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u0643\u0627\u0644\u06d0\u0646\u062c\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u062e\u06d5\u0646\u0632\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"\u0626\u0627\u0641\u0627\u0643\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u062e\u06d5\u0646\u0686\u06d5 \u067e\u0649\u0646\u064a\u0649\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u067e\u06d0\u0631\u0645\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0632\u06c7\u0644\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u062a\u06d0\u0644\u06d0\u0641\u0648\u0646 \u0646\u0648\u0645\u06c7\u0631 \u062a\u0649\u0632\u0649\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"\u0626\u0627\u062f\u062f\u0649\u064a"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u06af\u0649\u0631\u06c7\u0632\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"\u0634\u0627\u0631\u0627\u062f\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u0643\u0649\u0645\u0628\u06c7\u0646\u062f\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u064a\u0627\u067e\u0648\u0646\u0686\u06d5 \u067e\u06c7\u0644-\u0645\u06c7\u0626\u0627\u0645\u0649\u0644\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u0686\u0627\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u06af\u0649\u0632\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u0634\u06d5\u0631\u0642\u0649\u064a \u0633\u06c8\u0631\u0649\u064a\u06d5\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"\u0628\u06d0\u0631\u0645\u0627 \u0634\u0627\u0646\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0634\u0649\u0645\u0627\u0644\u0649\u064a \u0626\u06d5\u0631\u06d5\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"\u0626\u0648\u0644-\u0686\u0649\u0643\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u064a\u0627\u062e\u0634\u0649\u0644\u0627\u0646\u063a\u0627\u0646 \u062a\u06d5\u0631\u062a\u0649\u067e\u0644\u06d5\u0634 \u062a\u06d5\u0631\u062a\u0649\u067e\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u062f\u06d0\u0645\u0648\u062a\u0649\u0643\u0686\u06d5 \u0645\u0649\u0633\u0649\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u062e\u0649\u064a\u06d5\u0631\u0627\u062a\u0649\u0643\u0686\u06d5 \u0645\u0649\u0633\u0649\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"\u067e\u0627\u0644\u0645\u0649\u0631\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u0626\u06d0\u0645\u0628\u06c7\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u062a\u06d5\u0633\u06cb\u0649\u0631\u0649\u064a \u064a\u06d0\u0632\u0649\u0642 \u0645\u0649\u0633\u0649\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u062e\u06c7\u062a\u0633\u06c7\u0631\u0649 \u06af\u0649\u0631\u06c7\u0632\u0649\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u0642\u06d5\u062f\u0649\u0645\u0643\u0649 \u0645\u0627\u062c\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u0643\u0648\u0646\u0643\u0627\u0646\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\u0626\u06d5\u0646\u0626\u06d5\u0646\u0649\u06cb\u0649 \u06af\u06d0\u0631\u0645\u0627\u0646\u0686\u06d5 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u0643\u0648\u0633\u0631\u0627\u064a\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"\u0644\u0649\u0645\u0628\u06c7\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u0643\u0649\u067e\u06d5\u0644\u0644\u06d0\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u0643\u06d0\u062e\u0645\u06d0\u0631\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"\u062a\u0649\u0631\u062e\u06c7\u062a\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u0626\u0649\u0644\u0648\u0643\u0627\u0646\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"\u06cb\u0627\u0644\u06d0\u0646\u0633\u0649\u064a\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"\u0628\u0649\u0631\u0644\u0649\u0643\u0643\u06d5 \u0643\u06d5\u0644\u06af\u06d5\u0646 \u062a\u06c8\u0631\u0643 \u0644\u0627\u062a\u0649\u0646 \u0626\u06d0\u0644\u0649\u067e\u0628\u06d5\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u0645\u06c7\u0646\u062f\u0627\u06ad\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u06af\u06c7\u0631\u0645\u06c7\u0643\u0649\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u0643\u06c6\u067e \u062a\u0649\u0644\u0644\u0627\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0643\u0627\u062f\u062f\u0648\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u0643\u0649\u0631\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u06af\u0649\u0644\u0627\u06af\u0648\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u06af\u0649\u0644\u0628\u06d0\u0631\u062a\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"\u0626\u0648\u0631\u062a\u0627\u0642 \u0626\u0649\u0645\u0644\u0627 \u0642\u0627\u0626\u0649\u062f\u0649\u0633\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u0686\u06d0\u0631\u0648\u0643\u0649"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u0643\u0627\u0631\u0649\u0628\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"\u0643\u0627\u064a\u06c7\u06af\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u062a\u0627\u0645\u0649\u0644\u0686\u06d5 \u0631\u06d5\u0642\u06d5\u0645\u0644\u06d5\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u0642\u0627\u0631\u0627\u0686\u0627\u064a-\u0628\u0627\u0644\u0642\u0627\u0631\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u0626\u0649\u0646\u06af\u06c7\u0634\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u0643\u0627\u0631\u06d5\u0644\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u0626\u06d0\u0641\u0649\u0643\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u0633\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u0643\u06c7\u0631\u06c7\u062e\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0634\u0627\u0645\u0628\u0627\u0644\u0627\u0686\u06d5"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u0628\u0627\u0641\u0649\u064a\u0627\u0686\u06d5"_s)
		})
	}));
	return data;
}

LocaleNames_ug::LocaleNames_ug() {
}

$Class* LocaleNames_ug::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ug, name, initialize, &_LocaleNames_ug_ClassInfo_, allocate$LocaleNames_ug);
	return class$;
}

$Class* LocaleNames_ug::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun