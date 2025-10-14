#include <sun/util/resources/cldr/ext/LocaleNames_bs_Cyrl.h>

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

$MethodInfo _LocaleNames_bs_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_bs_Cyrl::*)()>(&LocaleNames_bs_Cyrl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_bs_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bs_Cyrl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bs_Cyrl_MethodInfo_
};

$Object* allocate$LocaleNames_bs_Cyrl($Class* clazz) {
	return $of($alloc(LocaleNames_bs_Cyrl));
}

void LocaleNames_bs_Cyrl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bs_Cyrl::getContents() {
	$var($String, metaValue_gu, u"\u0433\u0443\u045f\u0430\u0440\u0430\u0442\u0438"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u043a\u0435\u043b\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\u043e\u0433\u0430\u043c\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\u043c\u0438\u0440\u0430\u043d\u0434\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\u0441\u0438\u043c\u0431\u043e\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\u0430\u0442\u0441\u0430\u043c\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\u043c\u0430\u0440\u0432\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\u0442\u0430\u0433\u0431\u0430\u043d\u0432\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\u0435\u043c\u043e\u045f\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"\u0413\u045a\u0438\u0432\u0430/\u040a\u0438\u0432\u0430 \u0434\u0438\u0458\u0430\u043b\u043a\u0435\u043a\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\u0447\u0430\u043a\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u0435\u0433\u0438\u043f\u0430\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\u0440\u0430\u0452\u0430\u0441\u0442\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\u043f\u0430\u0433\u0441-\u043f\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\u0442\u0438\u043c\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\u0442\u0435\u0441\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\u0440\u0430\u043f\u0430\u043d\u0443\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\u0442\u0435\u0440\u0435\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\u041e\u0441\u0442\u0440\u0432\u043e \u0410\u0441\u0435\u043d\u0441\u0438\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\u0440\u0430\u0440\u043e\u0442\u043e\u043d\u0433\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\u0442\u0435\u0442\u0443\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0410\u043d\u0434\u043e\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\u0423\u0458\u0435\u0434\u0438\u045a\u0435\u043d\u0438 \u0410\u0440\u0430\u043f\u0441\u043a\u0438 \u0415\u043c\u0438\u0440\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u0444\u043b\u0430\u043c\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\u0410\u0444\u0433\u0430\u043d\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0410\u043d\u0442\u0438\u0433\u0432\u0430 \u0438 \u0411\u0430\u0440\u0431\u0443\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\u0435\u0442\u0438\u043e\u043f\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\u0410\u043d\u0433\u0432\u0438\u043b\u0430"_s)
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
			$of("Teng"_s),
			$of(u"\u0442\u0435\u043d\u0433\u0432\u0430\u0440 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0410\u043d\u0433\u043e\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0410\u043d\u0442\u0430\u0440\u043a\u0442\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0410\u0440\u0433\u0435\u043d\u0442\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\u043f\u0438\u0441\u0430\u043d\u0438 \u043f\u0430\u0440\u0442\u0438\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\u0410\u043c\u0435\u0440\u0438\u0447\u043a\u0430 \u0421\u0430\u043c\u043e\u0430"_s)
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
			$of(u"\u041e\u043b\u0430\u043d\u0434\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\u0410\u0437\u0435\u0440\u0431\u0435\u0458\u045f\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"\u0418\u0441\u0442\u043e\u0447\u043d\u0438 \u0430\u0440\u043c\u0435\u043d\u0438\u0458\u0441\u043a\u0438"_s)
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
			$of("ceb"_s),
			$of(u"\u0446\u0435\u0431\u0443\u0430\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u0411\u0430\u043d\u0433\u043b\u0430\u0434\u0435\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\u043a\u0443\u043c\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0411\u0435\u043b\u0433\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\u0441\u0440\u0435\u0434\u045a\u0438 \u0432\u0438\u0441\u043e\u043a\u0438 \u043d\u0435\u043c\u0430\u0447\u043a\u0438"_s)
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
			$of("BL"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u0411\u0430\u0440\u0442\u043e\u043b\u043e\u043c\u0435\u0458"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\u0411\u0435\u0440\u043c\u0443\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\u043a\u0443\u0442\u0435\u043d\u0430\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\u0435\u0440\u0437\u0438\u0458\u0430"_s)
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
			$of("BQ"_s),
			$of(u"\u041a\u0430\u0440\u0438\u043f\u0441\u043a\u0430 \u0425\u043e\u043b\u0430\u043d\u0434\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0411\u0440\u0430\u0437\u0438\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0411\u0430\u0445\u0430\u043c\u0438"_s)
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
			$of(u"\u041e\u0441\u0442\u0440\u0432\u043e \u0411\u0443\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\u0411\u043e\u0446\u0432\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\u0411\u0458\u0435\u043b\u043e\u0440\u0443\u0441\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\u0411\u0435\u043b\u0438\u0437\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\u0432\u0438\u0434\u0459\u0438\u0432\u0438 \u0433\u043e\u0432\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\u043f\u0435\u0440\u0441\u0438\u0458\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\u0445\u0435\u0431\u0440\u0435\u0458\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\u041a\u043e\u043a\u043e\u0441 (\u041a\u0435\u043b\u0438\u043d\u0433) \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u043c\u0430\u0437\u0430\u043d\u0434\u0435\u0440\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u0414\u0435\u043c\u043e\u043a\u0440\u0430\u0442\u0441\u043a\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430 \u041a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\u0426\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u043e\u0430\u0444\u0440\u0438\u0447\u043a\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u041a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0428\u0432\u0438\u0446\u0430\u0440\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\u041e\u0431\u0430\u043b\u0430 \u0421\u043b\u043e\u043d\u043e\u0432\u0430\u0447\u0435 (\u041a\u043e\u0442 \u0434\u2019\u0418\u0432\u043e\u0430\u0440)"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\u041a\u0443\u043a\u043e\u0432\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0427\u0438\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\u043a\u0430\u0438\u0442\u0438"_s)
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
			$of("CP"_s),
			$of(u"\u041e\u0441\u0442\u0440\u0432\u043e \u041a\u043b\u0438\u043f\u0435\u0440\u0442\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u041a\u043e\u0441\u0442\u0430\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u041a\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\u0417\u0435\u043b\u0435\u043d\u043e\u0440\u0442\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\u041a\u0443\u0440\u0430\u0441\u0430\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\u0411\u043e\u0436\u0438\u045b\u043d\u043e \u043e\u0441\u0442\u0440\u0432\u043e"_s)
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
			$of("eka"_s),
			$of(u"\u0435\u043a\u0430\u0458\u0443\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\u040a\u0435\u043c\u0430\u0447\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u043d\u0435\u043c\u0430\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\u0430\u0447\u0438\u043d\u0435\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\u0447\u0438\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\u0414\u0438\u0458\u0435\u0433\u043e \u0413\u0430\u0440\u0441\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\u0434\u0435\u0432\u0430\u043d\u0433\u0430\u0440\u0438 \u0446\u0438\u0444\u0440\u0435"_s)
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
			$of("ach"_s),
			$of(u"\u0430\u043a\u043e\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\u0433\u043e\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\u0411\u0440\u0430\u0458\u0435\u0432\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\u0431\u0440\u0430\u043c\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\u043c\u0430\u043b\u0438 \u0458\u0435\u0440\u043c\u0435\u043d\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\u0414\u043e\u043c\u0438\u043d\u0438\u043a\u0430\u043d\u0441\u043a\u0430 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\u0433\u043e\u0440\u043e\u043d\u0442\u0430\u043b\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\u0433\u043e\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\u043c\u0435\u0438\u0442\u0435\u0438 \u043c\u0430\u0458\u0435\u043a \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\u0437\u0443\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\u0442\u0438\u0433\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\u0410\u043b\u0436\u0438\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\u043f\u0430\u043d\u0433\u0430\u0441\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"\u043f\u043e\u043b\u0430 \u0448\u0438\u0440\u0438\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\u043f\u0430\u0445\u043b\u0430\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0421\u0435\u0443\u0442\u0430 \u0438 \u041c\u0435\u043b\u0438\u0459\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\u0447\u0438\u0431\u0447\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\u043f\u0430\u043c\u043f\u0430\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\u0415\u043a\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\u043f\u0430\u043f\u0438\u0430\u043c\u0435\u043d\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\u0430\u0434\u0430\u043d\u0433\u043c\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0415\u0441\u0442\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\u0442\u0438\u0432"_s)
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
			$of("chg"_s),
			$of(u"\u0447\u0430\u0433\u0430\u0442\u0430\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\u043f\u0430\u043b\u0430\u0443\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\u0447\u0443\u043a\u0435\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\u0447\u0438\u043d\u0443\u043a\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\u043c\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\u0447\u0438\u043f\u0432\u0438\u0458\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\u0447\u043e\u043a\u0442\u0430\u0432\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\u0447\u0435\u0440\u043e\u043a\u0438"_s)
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
			$of("EU"_s),
			$of(u"\u0415\u0432\u0440\u043e\u043f\u0441\u043a\u0430 \u0443\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\u0435\u043b\u0430\u043c\u0438\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\u0433\u0440\u0435\u0433\u043e\u0440\u0438\u0458\u0430\u043d\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\u0415\u0443\u0440\u043e\u0437\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\u0447\u0435\u0458\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\u0433\u0443\u045f\u0430\u0440\u0430\u0442\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\u0438\u043d\u0434\u0443\u0448\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\u0430\u0434\u0438\u0433\u0435\u0458\u0441\u043a\u0438"_s)
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
			$of(u"\u0424\u043e\u043a\u043b\u0430\u043d\u0434\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u041c\u0438\u043a\u0440\u043e\u043d\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\u0424\u0430\u0440\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\u0442\u0430\u043c\u0438\u043b\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"\u0442\u043e\u043a\u0435\u043b\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\u0433\u0440\u0435\u0431\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\u0418\u043d\u0434\u0438\u0458\u0441\u043a\u0438 \u043d\u0430\u0446\u0438\u043e\u043d\u0430\u043b\u043d\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u0433\u0440\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\u0413\u0430\u0431\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\u0432\u043e\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\u0423\u0458\u0435\u0434\u0438\u045a\u0435\u043d\u043e \u041a\u0440\u0430\u0459\u0435\u0432\u0441\u0442\u0432\u043e"_s)
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
			$of("GG"_s),
			$of(u"\u0413\u0435\u0440\u043d\u0437\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u0413\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\u0442\u0430\u0438 \u043b\u0435 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\u0413\u0438\u0431\u0440\u0430\u043b\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\u0430\u0444\u0440\u0438\u0445\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\u0413\u0440\u0435\u043d\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\u0441\u0440\u0435\u0434\u045a\u0438 \u0435\u043d\u0433\u043b\u0435\u0441\u043a\u0438"_s)
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
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u040f\u043e\u0440\u045f\u0438\u0458\u0430 \u0438 \u0408\u0443\u0436\u043d\u0430 \u0421\u0435\u043d\u0434\u0432\u0438\u0447\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
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
			$of(u"\u0413\u0432\u0438\u043d\u0435\u0458\u0430-\u0411\u0438\u0441\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\u0442\u043b\u0438\u043d\u0433\u0438\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\u043a\u043b\u0438\u043d\u0433\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\u043d\u043e\u0432\u0438 \u0442\u0430\u0438 \u043b\u0443\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u0413\u0432\u0430\u0458\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u0446\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u043e\u043a\u0443\u0440\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\u0431\u0435\u0437 \u043b\u0438\u043d\u0433\u0432\u0438\u0441\u0442\u0438\u0447\u043a\u043e\u0433 \u0441\u0430\u0434\u0440\u0436\u0430\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0425\u043e\u043d\u0433 \u041a\u043e\u043d\u0433 \u0421. \u0410. \u0420."_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"\u0432\u0430\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
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
			$of("agq"_s),
			$of(u"\u0430\u0445\u0435\u043c\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\u045a\u0435\u043c\u0430\u0447\u043a\u0438 (\u0428\u0432\u0438\u0446\u0430\u0440\u0441\u043a\u0430)"_s)
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
			$of("tmh"_s),
			$of(u"\u0442\u0430\u043c\u0430\u0448\u0435\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\u041a\u0430\u043d\u0430\u0440\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0418\u043d\u0434\u043e\u043d\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u043f\u0435\u0440\u0441\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0418\u0440\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\u043d\u0435\u0430\u043f\u043e\u043b\u0438\u0442\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\u043d\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u0437\u0430\u0437\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\u0418\u0437\u0440\u0430\u0435\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\u041e\u0441\u0442\u0440\u0432\u043e \u041c\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\u0418\u043d\u0434\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0442\u0435\u0440\u0438\u0442\u043e\u0440\u0438\u0458\u0430 \u0443 \u0418\u043d\u0434\u0438\u0458\u0441\u043a\u043e\u043c \u043e\u043a\u0435\u0430\u043d\u0443"_s)
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
			$of("Zmth"_s),
			$of(u"\u043c\u0430\u0442\u0435\u043c\u0430\u0442\u0438\u0447\u043a\u0430 \u043d\u043e\u0442\u0430\u0446\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\u0442\u0430\u0458\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"\u041a\u043e\u043c\u043f\u0458\u0443\u0442\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\u0431\u0435\u043d\u0433\u0430\u043b\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\u040f\u0435\u0440\u0437\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\u0438\u0441\u043b\u0430\u043c\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\u0408\u0430\u043c\u0430\u0458\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\u0431\u0435\u043d\u0433\u0430\u043b\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
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
			$of("%%1606NICT"_s),
			$of(u"\u0424\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0438 \u0438\u0437 \u043a\u0430\u0441\u043d\u043e\u0433 \u0441\u0440\u0435\u0434\u045a\u0435\u0433 \u0432\u0435\u043a\u0430 \u0434\u043e 1606."_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\u0430\u0438\u043d\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\u0433\u0443\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\u045a\u0430\u0441\u0430 \u0442\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u0430 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\u043a\u0430\u0458\u0430\u0445-\u043b\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0432\u0438\u0441\u043e\u043a\u0438 \u045a\u0435\u043c\u0430\u0447\u043a\u0438 (\u0428\u0432\u0438\u0446\u0430\u0440\u0441\u043a\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\u0431\u0443\u0434\u0438\u0441\u0442\u0438\u0447\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u041a\u0435\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\u041b\u0430\u0442\u0438\u043d\u0441\u043a\u0430 \u0410\u043c\u0435\u0440\u0438\u043a\u0430"_s)
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
			$of(u"\u041a\u043e\u043c\u043e\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u041a\u0438\u0442\u0441 \u0438 \u041d\u0435\u0432\u0438\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\u043d\u0430\u0441\u043b\u0435\u0434\u043d\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u041a\u043e\u0440\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u041a\u043e\u0440\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\u043f\u043e\u0440\u0430\u043b\u0434 \u0444\u043e\u043d\u0435\u0442\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\u041a\u0443\u0432\u0430\u0458\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\u0442\u043e\u043a \u043f\u0438\u0441\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\u041a\u0430\u0458\u043c\u0430\u043d\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\u041a\u0430\u0437\u0430\u0445\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\u045b\u0438\u0440\u0438\u043b\u0438\u0446\u0430"_s)
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
			$of(u"\u0421\u0432\u0435\u0442\u0430 \u041b\u0443\u0446\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\u0444\u0435\u043d\u0438\u0447\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\u0421\u0442\u0430\u0440\u043e\u0441\u043b\u043e\u0432\u0435\u043d\u0441\u043a\u0430 \u0446\u0440\u043a\u0432\u0435\u043d\u0430 \u045b\u0438\u0440\u0438\u043b\u0438\u0446\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\u0433\u0432\u0438\u0447\u2019\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\u043d\u0438\u0441\u043a\u0438 \u045a\u0435\u043c\u0430\u0447\u043a\u0438"_s)
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
			$of("akk"_s),
			$of(u"\u0430\u043a\u0430\u0434\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u043a\u043e\u043f\u0442\u0441\u043a\u0438"_s)
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
			$of("Phlv"_s),
			$of(u"\u043f\u0430\u0445\u043b\u0430\u0432\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
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
			$of(u"\u041b\u0430\u0442\u0432\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\u043a\u0430\u0442\u0430\u043a\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u041b\u0438\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\u043b\u0430\u0434\u0438\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\u0432\u0443\u043d\u0458\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\u043b\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\u043b\u0430\u043d\u0433\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\u0442\u0430\u043d\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
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
			$of("ME"_s),
			$of(u"\u0426\u0440\u043d\u0430 \u0413\u043e\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u041c\u0430\u0440\u0442\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\u043b\u0430\u043c\u0431\u0430"_s)
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
			$of("ale"_s),
			$of(u"\u0430\u0459\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\u0442\u0430\u0458\u043b\u0430\u043d\u0434\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u041c\u0430\u043a\u0435\u0434\u043e\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\u041c\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\u041c\u0458\u0430\u043d\u043c\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u041c\u043e\u043d\u0433\u043e\u043b\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\u043d\u0435\u0432\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\u041c\u0430\u043a\u0430\u043e \u0421. \u0410. \u0420."_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u041c\u0430\u0440\u0438\u0458\u0430\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
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
			$of("type.m0.ungegn"_s),
			$of(u"\u0423\u041d\u0413\u0415\u0413\u041d (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\u041c\u0430\u0443\u0440\u0438\u0446\u0438\u0458\u0443\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\u0458\u0443\u0436\u043d\u0438 \u0430\u043b\u0442\u0430\u0438"_s)
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
			$of("type.ca.japanese"_s),
			$of(u"\u0458\u0430\u043f\u0430\u043d\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
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
			$of("Phli"_s),
			$of(u"\u043f\u0438\u0441\u0430\u043d\u0438 \u043f\u0430\u0445\u043b\u0430\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\u041d\u0430\u043c\u0438\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\u041f\u043e\u0434\u0441\u0430\u0445\u0430\u0440\u0441\u043a\u0430 \u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\u0445\u0435\u0431\u0440\u0435\u0458\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\u0420\u0435\u0434\u043e\u0441\u043b\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430 \u0443 \u0440\u0435\u0447\u043d\u0438\u043a\u0443"_s)
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
			$of(u"\u041e\u0441\u0442\u0440\u0432\u043e \u041d\u043e\u0440\u0444\u043e\u043b\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u041d\u0438\u0433\u0435\u0440\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\u043f\u0441\u0430\u043b\u0442\u0435\u0440 \u043f\u0430\u0445\u043b\u0430\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u041d\u0438\u043a\u0430\u0440\u0430\u0433\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\u043f\u0430\u0445\u0430\u0432 \u0445\u043c\u043e\u043d\u0433 \u043f\u0438\u0441\u043c\u043e"_s)
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
			$of("Phnx"_s),
			$of(u"\u0424\u0435\u043d\u0438\u0447\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\u0440\u043e\u043c\u0431\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\u0442\u0441\u0438\u043c\u0448\u0438\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u041d\u043e\u0432\u0438 \u0417\u0435\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\u0440\u043e\u043c\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\u043c\u0435\u0440\u043e\u0438\u0442\u0438\u043a \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\u043a\u0440\u0438\u043c\u0435\u0430\u043d\u0441\u043a\u0438 \u0442\u0443\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u0435\u043d\u0433\u043b\u0435\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\u041e\u043c\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\u0430\u043d\u0433\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u043f\u0435\u0440\u0441\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u041f\u0430\u043d\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\u0418\u0441\u043b\u0430\u043c\u0441\u043a\u0438 \u0446\u0438\u0432\u0438\u043b\u043d\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\u043a\u0430\u0448\u0443\u0431\u0438\u0458\u0430\u043d\u0441\u043a\u0438"_s)
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
			$of("ewo"_s),
			$of(u"\u0435\u0432\u043e\u043d\u0434\u043e"_s)
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
			$of(u"\u041f\u043e\u0440\u0442\u043e\u0440\u0438\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\u041f\u0430\u043b\u0435\u0441\u0442\u0438\u043d\u0441\u043a\u0435 \u0442\u0435\u0440\u0438\u0442\u043e\u0440\u0438\u0458\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\u0431\u0430\u043b\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
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
			$of("nia"_s),
			$of(u"\u043d\u0438\u0430\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\u043c\u0430\u043b\u0438 \u0433\u0440\u0447\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u041f\u0430\u0440\u0430\u0433\u0432\u0430\u0458"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\u0442\u0443\u043c\u0431\u0443\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\u0445\u0435\u0431\u0440\u0435\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\u041a\u0430\u0442\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\u0428\u043a\u043e\u0442\u0441\u043a\u0438 \u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438 \u0415\u043d\u0433\u043b\u0435\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\u043d\u0438\u0443\u0435\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\u041e\u0441\u0442\u0430\u043b\u0430 \u043e\u043a\u0435\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\u043b\u0435\u0437\u0433\u0438\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"\u0423\u041f\u0410 \u0444\u043e\u043d\u0435\u0442\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\u0442\u0443\u0432\u0430\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\u0442\u0430\u0438 \u0432\u0438\u0435\u0442 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\u0421\u0432\u0438\u0458\u0435\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u043e\u0430\u043c\u0435\u0440\u0438\u0447\u043a\u0438 \u043a\u043e\u043d\u0442\u0438\u043d\u0435\u043d\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\u0420\u0435\u0438\u043d\u0438\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u0410\u043c\u0435\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\u043b\u043e\u0458\u0431\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\u0440\u0435\u0458\u0430\u043d\u0433 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\u041e\u043a\u0435\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0420\u0443\u043c\u0443\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\u0421\u0440\u0431\u0438\u0458\u0430"_s)
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
			$of("Mani"_s),
			$of(u"\u043c\u0430\u043d\u0438\u0445\u0435\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"\u0443\u0433\u0430\u0440\u0438\u0442\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\u043a\u0430\u0440\u043e\u0448\u0442\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\u0421\u0430\u0443\u0434\u0438\u0458\u0441\u043a\u0430 \u0410\u0440\u0430\u0431\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\u043f\u043e\u043d\u043f\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\u043c\u0430\u043d\u0434\u0435\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\u0421\u043e\u043b\u043e\u043c\u043e\u043d\u0441\u043a\u0430 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\u0442\u0430\u0441\u0430\u0432\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\u0417\u0430\u043f\u0430\u0434\u043d\u0430 \u0410\u0444\u0440\u0438\u043a\u0430"_s)
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
			$of("013"_s),
			$of(u"\u0426\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u0430 \u0410\u043c\u0435\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0428\u0432\u0435\u0434\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\u0418\u0441\u0442\u043e\u0447\u043d\u0430 \u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\u0430\u0440\u043c\u0430\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0421\u0438\u043d\u0433\u0430\u043f\u0443\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0430 \u0425\u0435\u043b\u0435\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\u0441\u0442\u0440\u043e\u0433\u0438 \u0441\u0442\u0438\u043b \u0437\u0430\u0432\u0440\u0448\u0435\u0442\u043a\u0430 \u0440\u0435\u0442\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\u0426\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u0430 \u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0421\u043b\u043e\u0432\u0435\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u0410\u0444\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0421\u0432\u0430\u043b\u0431\u0430\u0440\u0434 \u0438 \u0408\u0430\u043d \u041c\u0430\u0458\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0438 \u0408\u0443\u0436\u043d\u0430 \u0410\u043c\u0435\u0440\u0438\u043a\u0430"_s)
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
			$of("arn"_s),
			$of(u"\u0430\u0440\u043e\u043a\u0430\u043d\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0430\u0440\u0430\u043f\u0430\u0445\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\u0442\u0430\u043c\u0438\u043b\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\u0421\u0443\u0440\u0438\u043d\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0438 \u0421\u0443\u0434\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\u0421\u0430\u043e \u0422\u043e\u043c\u0435 \u0438 \u041f\u0440\u0438\u043d\u0446\u0438\u043f\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0421\u0430\u043b\u0432\u0430\u0434\u043e\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u041c\u0430\u0440\u0442\u0438\u043d (\u0425\u043e\u043b\u0430\u043d\u0434\u0438\u0458\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\u0421\u0438\u0440\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\u0458\u0430\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\u0415\u0441\u0432\u0430\u0442\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\u0430\u0440\u0430\u0432\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\u0458\u0430\u043f\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\u0422\u0440\u0438\u0441\u0442\u0430\u043d \u0434\u0430 \u041a\u0443\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\u0430\u0441\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\u0430\u043c\u0435\u0440\u0438\u0447\u043a\u0438 \u0441\u0438\u0441\u0442\u0435\u043c \u043c\u0458\u0435\u0440\u0435\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0410\u043c\u0435\u0440\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\u0422\u0443\u0440\u043a\u0441 \u0438 \u041a\u0430\u0458\u043a\u043e\u0441 \u041e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\u0458\u0430\u043d\u0433\u0431\u0435\u043d"_s)
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
			$of("029"_s),
			$of(u"\u041a\u0430\u0440\u0438\u0431\u0438"_s)
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
			$of("%%BOONT"_s),
			$of(u"\u0411\u0443\u043d\u0442\u043b\u0438\u043d\u0433"_s)
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
			$of("ast"_s),
			$of(u"\u0430\u0441\u0442\u0443\u0440\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\u043e\u0440\u043a\u043e\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\u0422\u0430\u043d\u0437\u0430\u043d\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\u043a\u0432\u0430\u0441\u0438\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\u043d\u0435\u043f\u043e\u0437\u043d\u0430\u0442\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\u0423\u043a\u0440\u0430\u0458\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\u0430\u0440\u043e\u043c\u0430\u043d\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\u0418\u0441\u0442\u043e\u0447\u043d\u0430 \u0410\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\u0442\u0443\u0432\u0438\u043d\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u0410\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\u0445\u0430\u0438\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\u0408\u0443\u0433\u043e\u0438\u0441\u0442\u043e\u0447\u043d\u0430 \u0410\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u0423\u0433\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\u041f\u0438\u045a\u0438\u043d \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\u0408\u0443\u0436\u043d\u0430 \u0415\u0432\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\u0441\u0438\u043d\u0445\u0430\u043b\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\u041c\u0430\u045a\u0430 \u0443\u0434\u0430\u0459\u0435\u043d\u0430 \u043e\u0441\u0442\u0440\u0432\u0430 \u0421\u0410\u0414"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\u0423\u0458\u0435\u0434\u0438\u045a\u0435\u043d\u0435 \u043d\u0430\u0446\u0438\u0458\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\u0421\u0458\u0435\u0434\u0438\u045a\u0435\u043d\u0435 \u0410\u043c\u0435\u0440\u0438\u0447\u043a\u0435 \u0414\u0440\u0436\u0430\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\u0445\u0430\u0432\u0430\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\u041f\u043e\u0458\u0435\u0434\u043d\u043e\u0441\u0442\u0430\u0432\u0459\u0435\u043d\u043e \u043a\u0438\u043d\u0435\u0441\u043a\u043e \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u0423\u0440\u0443\u0433\u0432\u0430\u0458"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\u043f\u0440\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\u0423\u0437\u0431\u0435\u043a\u0438\u0441\u0442\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\u0446\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u043e\u0430\u0442\u043b\u0430\u0441\u043a\u0438 \u0442\u0430\u043c\u0430\u0437\u0438\u0445\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\u0421\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0435 \u043f\u043e \u0431\u0440\u043e\u0458\u0443 \u0446\u0440\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\u043d\u0433\u0438\u0435\u043c\u0431\u0443\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\u0412\u0430\u0442\u0438\u043a\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u043f\u0440\u043e\u0432\u0430\u043d\u0441\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0421\u0432\u0435\u0442\u0438 \u0412\u0438\u043d\u0441\u0435\u043d\u0442 \u0438 \u0413\u0440\u0435\u043d\u0430\u0434\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0412\u0435\u043d\u0435\u0446\u0443\u0435\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\u0411\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0430 \u0414\u0458\u0435\u0432\u0438\u0447\u0430\u043d\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\u0410\u043c\u0435\u0440\u0438\u0447\u043a\u0430 \u0414\u0458\u0435\u0432\u0438\u0447\u0430\u043d\u0441\u043a\u0430 \u043e\u0441\u0442\u0440\u0432\u0430"_s)
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
			$of("nog"_s),
			$of(u"\u043d\u043e\u0433\u0430\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\u0440\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0438 \u043d\u043e\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\u0410\u0443\u0441\u0442\u0440\u0430\u043b\u0438\u0458\u0430 \u0438 \u041d\u043e\u0432\u0438 \u0417\u0435\u043b\u0430\u043d\u0434"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"\u0417\u0430\u043f\u0430\u0434\u043d\u043e \u0458\u0435\u0440\u043c\u0435\u043d\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\u041c\u0435\u043b\u0430\u043d\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\u0412\u0430\u043b\u0438\u0441 \u0438 \u0424\u0443\u0442\u0443\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\u0422\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d\u0430\u043b\u043d\u043e \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\u041c\u0438\u043a\u0440\u043e\u043d\u0435\u0437\u0438\u0458\u0441\u043a\u0438 \u0440\u0435\u0433\u0438\u043e\u043d"_s)
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
			$of(u"\u0432\u0430\u043b\u0441\u0435\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\u0421\u0430\u043c\u043e\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\u0432\u0430\u043b\u0430\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\u0432\u0430\u0448\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\u043f\u0441\u0435\u0443\u0434\u043e \u0430\u043a\u0446\u0435\u043d\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\u0432\u0430\u0440\u0430\u0458"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\u043f\u0441\u0435\u0443\u0434\u043e \u0434\u0432\u043e\u0441\u043c\u0458\u0435\u0440\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\u0430\u0432\u0430\u0434\u0445\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\u041f\u043e\u043b\u0438\u043d\u0435\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u041a\u043e\u0441\u043e\u0432\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\u043d\u0435\u043f\u0438\u0441\u0430\u043d\u0438 \u0458\u0435\u0437\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\u043e\u043b \u0447\u0438\u043a\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\u0431\u0430\u0442\u0430\u043a \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\u0431\u043b\u0438\u0441\u0438\u043c\u0431\u043e\u043b\u0438\u0447\u043d\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\u0408\u0435\u043c\u0435\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\u043d\u2019\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438 \u0440\u0435\u0434\u043e\u0441\u043b\u0438\u0458\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\u0444\u0430\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"\u0420\u0435\u0441\u0438\u0458\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\u0444\u0430\u043d\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\u0437\u043d\u0430\u043a\u043e\u0432\u043d\u043e \u043f\u0438\u0441\u043c\u043e"_s)
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
			$of("type.lb.loose"_s),
			$of(u"\u0441\u043b\u043e\u0431\u043e\u0434\u0430\u043d \u0441\u0442\u0438\u043b \u0437\u0430\u0432\u0440\u0448\u0435\u0442\u043a\u0430 \u0440\u0435\u0442\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\u0434\u0435\u0432\u0430\u043d\u0430\u0433\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0438\u0458\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\u0445\u0438\u0440\u0430\u0433\u0430\u043d\u0430"_s)
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
			$of("ZZ"_s),
			$of(u"\u041d\u0435\u043f\u043e\u0437\u043d\u0430\u0442\u0430 \u0438\u043b\u0438 \u043d\u0435\u0432\u0430\u0436\u0435\u045b\u0430 \u043e\u0431\u043b\u0430\u0441\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\u0440\u0443\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\u043c\u0435\u0442\u0440\u0438\u0447\u043a\u0438 \u0441\u0438\u0441\u0442\u0435\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\u043c\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\u0441\u0458\u0435\u0432\u0435\u0440\u043d\u0438 \u0441\u043e\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\u0442\u0435\u043b\u0443\u0433\u0443 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\u043b\u043e\u0437\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\u043c\u0430\u0447\u0430\u043c\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\u043f\u043e\u0458\u0435\u0434\u043d\u043e\u0441\u0442\u0430\u0432\u0459\u0435\u043d\u0438 \u043a\u0438\u043d\u0435\u0441\u043a\u0438 \u0444\u0438\u043d\u0430\u043d\u0441\u0438\u0458\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\u0445\u0438\u043b\u0438\u0433\u0430\u0458\u043d\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\u043f\u0440\u043e\u0434\u0443\u0436\u0435\u043d\u0435 \u0430\u0440\u0430\u043f\u0441\u043a\u043e-\u0438\u043d\u0434\u0438\u0458\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\u043d\u0443\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\u0434\u0430\u043a\u043e\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\u0446\u0438\u0444\u0440\u0435 \u043f\u0443\u043d\u0435 \u0448\u0438\u0440\u0438\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\u0445\u0438\u0442\u0438\u0442\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\u0434\u0430\u0440\u0433\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\u0442\u0430\u0438\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\u043c\u0430\u0458\u0430\u043d\u0441\u043a\u0438 \u0445\u0438\u0458\u0435\u0440\u043e\u0433\u043b\u0438\u0444\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\u0441\u0458\u0435\u0432\u0435\u0440\u043d\u0438 \u043b\u0443\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\u043a\u043e\u043f\u0442\u0438\u0447\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\u043a\u043b\u0430\u0441\u0438\u0447\u043d\u0438 \u043d\u0435\u0432\u0430\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\u0443\u0434\u043c\u0443\u0440\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\u043a\u043c\u0435\u0440\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\u043b\u0438\u043c\u0431\u0443 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\u0441\u0430\u043d\u0434\u0430\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\u0440\u0438\u043c\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\u0458\u0430\u043a\u0443\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\u0441\u0430\u043c\u0430\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0438 \u0430\u0440\u0430\u043c\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"\u0421\u043a\u0430\u0443\u0437"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\u0441\u0430\u043c\u0431\u0443\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\u0441\u0430\u0441\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\u0441\u0430\u043d\u0442\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\u0442\u0438\u0444\u0438\u043d\u0430\u0433 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\u0458\u0443\u0434\u0435\u043e-\u043f\u0435\u0440\u0441\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"\u041d\u0443\u043c\u0435\u0440\u0438\u0447\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\u0433\u0443\u0440\u043c\u0443\u043a\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\u043b\u0443\u0431\u0430-\u043b\u0443\u043b\u0443\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\u043f\u0443\u043d\u0430 \u0448\u0438\u0440\u0438\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\u0441\u0430\u043d\u0433\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\u043b\u0443\u0438\u0441\u0435\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\u045a\u0430\u043d\u043a\u043e\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\u045a\u0430\u043c\u0432\u0435\u0437\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\u043b\u0443\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\u045a\u043e\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\u043b\u0443\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\u0444\u0438\u043b\u0438\u043f\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\u0445\u043c\u043e\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\u0434\u0435\u043b\u0430\u0432\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u043b\u0443\u0448\u0430\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\u0431\u0430\u043b\u0443\u0447\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\u0441\u043b\u0430\u0432\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u0431\u0430\u043b\u0438\u043d\u0435\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"\u0443\u0433\u0430\u0440\u0438\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\u043b\u0443\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\u0431\u0430\u0441\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\u0458\u0443\u0434\u0435\u043e-\u0430\u0440\u0430\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\u043d\u0437\u0438\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\u0448\u043a\u043e\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\u0441\u0438\u0446\u0438\u043b\u0438\u0458\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\u0430\u0444\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0430\u0431\u043a\u0430\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\u0430\u0432\u0435\u0441\u0442\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\u0430\u0444\u0440\u0438\u043a\u0430\u043d\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\u0430\u043a\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\u0430\u043c\u0445\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\u0430\u0440\u0430\u0433\u043e\u043d\u0435\u0436\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\u0430\u0440\u0430\u043f\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"\u0421\u0442\u043e\u043b\u0432\u0438\u0446\u0430/\u0421\u043e\u043b\u0431\u0438\u0446\u0430 \u0434\u0438\u0458\u0430\u043b\u0435\u043a\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\u0458\u0430\u043f\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\u0430\u0440\u0430\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"\u0458\u0430\u043f\u0430\u043d\u0441\u043a\u043e \u0441\u043b\u043e\u0433\u043e\u0432\u043d\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0430\u0441\u0435\u043c\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\u043b\u0438\u043d\u0435\u0430\u0440\u043d\u043e \u0410 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\u0430\u0432\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\u043b\u0438\u043d\u0435\u0430\u0440\u043d\u043e \u0411 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\u0430\u0458\u043c\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0430\u0437\u0435\u0440\u0431\u0435\u0458\u045f\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"\u041e\u0441\u0435\u0430\u043a\u043e/\u041e\u0441\u043e\u0458\u0430\u043d\u0435 \u0434\u0438\u0458\u0430\u043b\u0435\u043a\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\u0431\u0430\u0448\u043a\u0438\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\u0420\u0435\u0434\u043e\u0441\u043b\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430 \u0440\u0430\u0434\u0438\u043a\u0430\u043b\u043d\u0438\u043c \u0446\u0440\u0442\u0438\u0446\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\u0431\u0458\u0435\u043b\u043e\u0440\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\u0431\u0443\u0433\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\u0431\u0438\u0441\u043b\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\u0431\u0430\u043c\u0431\u0430\u0440\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\u0431\u0435\u043d\u0433\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\u0442\u0438\u0431\u0435\u0442\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\u0434\u043e\u0433\u0440\u0438\u0431"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\u0431\u0440\u0435\u0442\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\u0431\u043e\u0441\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\u043c\u0438\u0458\u0430\u043d\u043c\u0430\u0440\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\u043b\u0430\u043e\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\u0441\u0435\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\u043d\u2019\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\u0441\u0435\u043b\u043a\u0430\u043f"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\u043a\u0430\u0442\u0430\u043b\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\u043a\u043e\u0458\u0440\u0430\u0431\u043e\u0440\u043e \u0441\u0435\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\u0447\u0435\u0447\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\u0447\u0430\u043c\u043e\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\u0420\u0435\u0432\u0438\u0434\u0438\u0440\u0430\u043d\u0430 \u043e\u0440\u0442\u043e\u0433\u0440\u0430\u0444\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\u043a\u043e\u0440\u0437\u0438\u043a\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\u043e\u0434\u0438\u0458\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\u043a\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\u0447\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u0441\u043b\u0430\u0432\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\u0447\u0443\u0432\u0430\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\u0432\u0435\u043b\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\u0435\u0442\u0438\u043e\u043f\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\u0458\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\u0434\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\u045a\u0435\u043c\u0430\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438 \u0444\u043e\u0440\u043c\u0430\u0442 \u0432\u0430\u043b\u0443\u0442\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\u0431\u0435\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\u0434\u0438\u043d\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\u0431\u0443\u0433\u0438\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\u0431\u0435\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u0438\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\u043c\u043e\u043d\u0433\u043e\u043b\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u0434\u0438\u0432\u0435\u0445\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\u045f\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\u0431\u0435\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\u043a\u0438\u043d\u0435\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\u0437\u0430\u0440\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\u0433\u0440\u0447\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\u0435\u0432\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\u043d\u043e\u0440\u043c\u0430\u043b\u043d\u0438 \u0441\u0442\u0438\u043b \u0437\u0430\u0432\u0440\u0448\u0435\u0442\u043a\u0430 \u0440\u0435\u0442\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\u043c\u043e\u043b\u0434\u0430\u0432\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\u0433\u0440\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\u0435\u043d\u0433\u043b\u0435\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\u0435\u0441\u043f\u0435\u0440\u0430\u043d\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\u0422\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d\u0430\u043b\u043d\u043e \u043a\u0438\u043d\u0435\u0441\u043a\u043e \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0448\u043f\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\u0435\u0441\u0442\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\u0445\u0430\u043d \u0441 \u0431\u043e\u043f\u043e\u043c\u043e\u0444\u043e \u043f\u0438\u0441\u043c\u043e\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\u0431\u0430\u0441\u043a\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\u0431\u0443\u0445\u0438\u0434\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\u0445\u0430\u043d\u0433\u0443\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\u0441\u0430\u043c\u0430\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\u0442\u0430\u0448\u0435\u043b\u0445\u0438\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\u0433\u043e\u0440\u045a\u043e\u043b\u0443\u0436\u0438\u0447\u043a\u043e\u0441\u0440\u043f\u0441\u043a\u0438"_s)
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
			$of("Hano"_s),
			$of(u"\u0445\u0430\u043d\u0443\u043d\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\u043f\u0435\u0440\u0441\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u043f\u043e\u0458\u0435\u0434\u043d\u043e\u0441\u0442\u0430\u0432\u0459\u0435\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\u0437\u0430\u043f\u0430\u0434\u043d\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u0442\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d\u0430\u043b\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\u0444\u0443\u043b\u0430\u0445"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0444\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\u0444\u0438\u0434\u0436\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\u0444\u043e\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\u043a\u0430\u043d\u0442\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\u0444\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"\u0411\u0413\u041d (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\u0443\u043c\u0431\u0443\u043d\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\u0444\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\u0441\u0438\u0434\u0430\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\u0437\u0430\u043f\u0430\u0434\u043d\u0438 \u0444\u0440\u0438\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0438\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\u0448\u043a\u043e\u0442\u0441\u043a\u0438 \u0433\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\u0433\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\u0433\u0432\u0430\u0440\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\u0431\u043e\u0458\u043f\u0443\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\u043d\u0435\u043f\u043e\u0437\u043d\u0430\u0442\u0438 \u0458\u0435\u0437\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\u0435\u0442\u0438\u043e\u043f\u0441\u043a\u0438 \u0430\u043c\u0435\u0442 \u0430\u043b\u0435\u043c \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\u043c\u0430\u043d\u043a\u0441"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\u0445\u0430\u0443\u0441\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\u0445\u0435\u0431\u0440\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\u0445\u0438\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\u0445\u0443\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\u0431\u0438\u043a\u043e\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\u0431\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\u0445\u0438\u0440\u0438 \u043c\u043e\u0442\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u0445\u0440\u0432\u0430\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\u0445\u0430\u0438\u045b\u0430\u043d\u0441\u043a\u0438 \u043a\u0440\u0435\u043e\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\u043c\u0430\u0452\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\u0458\u0435\u0440\u043c\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\u0445\u0435\u0440\u0435\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"\u0418\u041f\u0410 \u0444\u043e\u043d\u0435\u0442\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u0438\u043d\u0442\u0435\u0440\u043b\u0438\u043d\u0433\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\u045f\u0430\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0438\u043d\u0434\u043e\u043d\u0435\u0436\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\u0442\u0438\u0431\u0435\u0442\u0430\u043d\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\u043c\u0435\u0452\u0443\u0458\u0435\u0437\u0438\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\u0438\u0433\u0431\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\u0441\u0435\u0447\u0443\u0430\u043d \u0458\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\u0441\u0440\u0435\u0434\u045a\u0438 \u0444\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\u0443\u043d\u0443\u043f\u0438\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u0444\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\u0438\u0434\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\u0438\u0441\u0442\u043e\u0447\u043d\u0438 \u0444\u0440\u0438\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\u0441\u0435\u0432\u0435\u0440\u043d\u043e-\u0444\u0440\u0438\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0438\u0441\u043b\u0430\u043d\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0438\u0442\u0430\u043b\u0438\u0458\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\u0438\u043d\u0443\u043a\u0442\u0438\u0442\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u0458\u0430\u043f\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0458\u0430\u043b\u0430\u043c \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\u0441\u0430\u0440\u0430\u0442\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\u0434\u043e\u0433\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\u0458\u0443\u0436\u043d\u0438 \u0441\u0430\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\u0458\u0430\u0432\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\u0448\u0430\u0432\u0438\u0458\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u043c\u0430\u0434\u0443\u0440\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\u043b\u0443\u043b\u0435 \u0441\u0430\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\u043c\u0430\u0433\u0430\u0445\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u043c\u0430\u0438\u0442\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\u0438\u043d\u0430\u0440\u0438 \u0441\u0430\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\u0441\u0438\u0441\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\u043c\u0430\u043a\u0430\u0441\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\u0441\u043a\u043e\u043b\u0442\u0441\u043a\u0438 \u0458\u0435\u0437\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\u043c\u0430\u043d\u0434\u0438\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\u043a\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\u0413\u043e\u0442\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\u043a\u0438\u043a\u0443\u0458\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\u043c\u0430\u0441\u0430\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\u043a\u0443\u0430\u045a\u0430\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\u043a\u0430\u0437\u0430\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\u043a\u0430\u043b\u0430\u043b\u0438\u0441\u0443\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\u043a\u043c\u0435\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\u043a\u0430\u043d\u0430\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u043a\u043e\u0440\u0435\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\u043a\u0430\u043d\u0443\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\u043a\u0430\u0448\u043c\u0438\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\u0446\u0438\u0440\u0442 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\u043b\u0435\u043f\u0447\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\u0430\u0432\u0435\u0441\u0442\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\u043a\u0443\u0440\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\u043a\u043e\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\u043a\u043e\u0440\u043d\u0438\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u043a\u0438\u0440\u0433\u0438\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\u0441\u043e\u043d\u0438\u043d\u043a\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\u043b\u0430\u0442\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\u043b\u0443\u043a\u0441\u0435\u043c\u0431\u0443\u0440\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0458\u0430\u043b\u0430\u043c \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\u0433\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\u0440\u043e\u043d\u0433\u043e\u0440\u043e\u043d\u0433\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\u043b\u0438\u043c\u0431\u0443\u0440\u0433\u0438\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\u0442\u0438\u0431\u0435\u0442\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\u043b\u0438\u043d\u0433\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\u0444\u0440\u0438\u0443\u043b\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\u043b\u0430\u043e\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\u0438\u043c\u043f\u0435\u0440\u0438\u0458\u0430\u043b\u043d\u0438 \u0441\u0438\u0441\u0442\u0435\u043c \u043c\u0458\u0435\u0440\u0435\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\u043b\u0438\u0442\u0432\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\u043b\u0443\u0431\u0430-\u043a\u0430\u0442\u0430\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\u043b\u0430\u0442\u0432\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\u0441\u043e\u045f\u0438\u0458\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0433\u0430\u0441\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\u043c\u0430\u0440\u0448\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\u0437\u0430\u0434\u0430\u043d\u0438 Unicode \u0440\u0435\u0434\u043e\u0441\u043b\u0438\u0458\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\u043c\u0430\u043e\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\u043c\u0430\u043a\u0435\u0434\u043e\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0458\u0430\u043b\u0430\u043c"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\u043c\u043e\u043d\u0433\u043e\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\u043c\u0430\u0440\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\u043c\u0430\u043b\u0430\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\u043c\u0430\u043b\u0442\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\u0431\u0443\u0440\u043c\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\u0441\u0430\u0443\u0440\u0430\u0448\u0442\u0440\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\u0458\u0435\u0440\u043c\u0435\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\u043c\u043e\u043a\u0448\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\u0434\u043e\u045a\u043e\u043b\u0443\u0436\u0438\u0447\u043a\u043e\u0441\u0440\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\u0438\u043c\u043f\u0435\u0440\u0438\u0458\u0441\u043a\u043e \u0430\u0440\u0430\u043c\u0435\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\u043d\u0430\u0443\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\u043f\u0440\u0435\u0442\u0440\u0430\u0433\u0430 \u043e\u043f\u0448\u0442\u0435 \u043d\u0430\u043c\u0435\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u043d\u043e\u0440\u0432\u0435\u0448\u043a\u0438 \u0431\u043e\u043a\u043c\u0430\u043b"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\u0441\u0458\u0435\u0432\u0435\u0440\u043d\u0438 \u043d\u0434\u0435\u0431\u0435\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u043d\u0435\u043f\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\u043d\u0434\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\u043c\u0430\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u0445\u043e\u043b\u0430\u043d\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u043d\u043e\u0440\u0432\u0435\u0448\u043a\u0438 \u043d\u0438\u043d\u043e\u0440\u0441\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u043d\u043e\u0440\u0432\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\u0458\u0443\u0436\u043d\u0438 \u043d\u0434\u0435\u0431\u0435\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\u043d\u0430\u0432\u0430\u0445\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\u043a\u0430\u0440\u0430-\u043a\u0430\u043b\u043f\u0430\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\u045a\u0430\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\u043a\u0430\u0447\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\u043a\u0430\u0431\u0438\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"\u041f\u043e\u043b\u0438\u0442\u043e\u043d\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\u043f\u0440\u043e\u0432\u0430\u043d\u0441\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\u0452\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\u043a\u0430\u043c\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\u043c\u0435\u043d\u0434\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\u043e\u0458\u0438\u0431\u0432\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\u043c\u0435\u0440\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\u0458\u0435\u0440\u043c\u0435\u043d\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\u043e\u0440\u043e\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\u043a\u0430\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u043e\u0434\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\u043e\u0441\u0435\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\u043a\u0430\u0431\u0430\u0440\u0434\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\u043c\u0430\u0443\u0440\u0438\u0442\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u0441\u0440\u0430\u043d\u0430\u043d\u0441\u043a\u0438 \u0442\u043e\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\u043f\u0435\u043d\u045f\u0430\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\u0434\u0443\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\u0441\u0435\u0440\u0435\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"\u041b\u0438\u043f\u043e\u0432\u0438\u0447\u043a\u0438 \u0434\u0438\u0458\u0430\u043b\u0435\u043a\u0442 \u0440\u0435\u0441\u0438\u0458\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\u043f\u0430\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u043f\u043e\u0459\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\u0441\u0440\u0435\u0434\u045a\u0438 \u0445\u043e\u043b\u0430\u043d\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\u0434\u0430\u043d\u0433\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\u043f\u0430\u0448\u0442\u0443\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u043f\u043e\u0440\u0442\u0443\u0433\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u0441\u0440\u0435\u0434\u045a\u0438 \u0438\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\u0442\u0458\u0430\u043f"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\u043c\u0430\u043a\u0443\u0430-\u043c\u0435\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\u0444\u043e\u0440\u043c\u0430\u0442 \u0432\u0430\u043b\u0443\u0442\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\u0431\u0440\u0430\u0458"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\u041a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\u043b\u0430\u043e\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\u043c\u0435\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-\u0441\u0430\u0442\u043d\u0438 \u0441\u0438\u0441\u0442\u0435\u043c (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-\u0441\u0430\u0442\u043d\u0438 \u0441\u0438\u0441\u0442\u0435\u043c (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\u043c\u0438\u0458\u0430\u043d\u043c\u0430\u0440\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\u043a\u0432\u0435\u043d\u0447\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\u0437\u0430\u043f\u043e\u0442\u0435\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\u0431\u043e\u0434\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\u043b\u0430\u043d\u043d\u0430 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\u043c\u0430\u043a\u043e\u043d\u0434\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\u0435\u0442\u0438\u043e\u043f\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-\u0441\u0430\u0442\u043d\u0438 \u0441\u0438\u0441\u0442\u0435\u043c (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-\u0441\u0430\u0442\u043d\u0438 \u0441\u0438\u0441\u0442\u0435\u043c (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\u0440\u0435\u0442\u043e-\u0440\u043e\u043c\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\u0440\u0443\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\u0432\u0430\u043b\u0443\u0442\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\u0440\u0443\u043c\u0443\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"\u0421\u0430\u0445\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\u043e\u0440\u0438\u0458\u0430 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\u043a\u0438\u043d\u0435\u0441\u043a\u0438 \u0434\u0435\u0446\u0438\u043c\u0430\u043b\u043d\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\u0440\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\u043a\u0438\u043d\u0458\u0430\u0440\u0443\u0430\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\u0431\u043b\u0438\u0441\u0438\u043c\u0431\u043e\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\u043a\u0430\u0431\u043e\u0432\u0435\u0440\u0434\u0438\u0458\u0430\u043d\u0441\u043a\u0438 \u043a\u0440\u0435\u043e\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\u043c\u0438\u043a\u043c\u0430\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\u0441\u0443\u043a\u0443\u043c\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\u0441\u0430\u043d\u0441\u043a\u0440\u0438\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\u0441\u0430\u0440\u0434\u0438\u045a\u0430\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\u0441\u0443\u0441\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\u0441\u0438\u043d\u0434\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\u0441\u0458\u0435\u0432\u0435\u0440\u043d\u0438 \u0441\u0430\u043c\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\u043c\u0438\u043d\u0430\u043d\u0433\u043a\u0430\u0431\u0430\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\u0441\u0430\u043d\u0433\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\u0441\u0440\u043f\u0441\u043a\u043e\u0445\u0440\u0432\u0430\u0442\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\u0441\u0438\u043d\u0445\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\u0441\u0443\u043c\u0435\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\u0441\u043b\u043e\u0432\u0430\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\u0441\u043b\u043e\u0432\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\u0441\u0430\u043c\u043e\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\u0448\u043e\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\u0441\u043e\u043c\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\u0430\u0440\u0430\u043f\u0441\u043a\u043e-\u0438\u043d\u0434\u0438\u0458\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0430\u043b\u0431\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\u0441\u0440\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\u0441\u0432\u0430\u0442\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\u0440\u0430\u0447\u0443\u043d\u043e\u0432\u043e\u0434\u0441\u0442\u0432\u0435\u043d\u0438 \u0444\u043e\u0440\u043c\u0430\u0442 \u0432\u0430\u043b\u0443\u0442\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\u0441\u0435\u0441\u043e\u0442\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\u0458\u0430\u0432\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\u0441\u0443\u043d\u0434\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"\u041d\u0430\u0442\u0438\u0441\u043e\u043d\u0435 \u0434\u0438\u0458\u0430\u043b\u0435\u043a\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0448\u0432\u0435\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0441\u0432\u0430\u0445\u0438\u043b\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\u0442\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d\u0430\u043b\u043d\u0438 \u043a\u0438\u043d\u0435\u0441\u043a\u0438 \u0444\u0438\u043d\u0430\u043d\u0441\u0438\u0458\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\u0438\u0431\u0430\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\u0442\u0430\u043c\u0438\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\u0410\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\u0431\u0443\u0440\u0438\u0430\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\u0426\u0435\u043d\u0442\u0440\u0430\u043b\u043d\u0430 \u0410\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\u0442\u0435\u043b\u0443\u0433\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\u0417\u0430\u043f\u0430\u0434\u043d\u0430 \u0410\u0437\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u0442\u0430\u045f\u0438\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\u0442\u0430\u0458\u043b\u0430\u043d\u0434\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\u0442\u0438\u0433\u0440\u0438\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\u0431\u0443\u0433\u0438\u043d\u0435\u0436\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\u043a\u043e\u0440\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\u0442\u0443\u0440\u043a\u043c\u0435\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\u0442\u0430\u0433\u0430\u043b\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\u0442\u0441\u0432\u0430\u043d\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\u0442\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\u0458\u043e\u043b\u0430-\u0444\u043e\u045a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\u0458\u0430\u043f\u0430\u043d\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\u0442\u0443\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\u0442\u0441\u043e\u043d\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\u043a\u043e\u043c\u043e\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\u0447\u0430\u043a\u043c\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\u0442\u0430\u0442\u0430\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\u0452\u0443\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\u0442\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\u0442\u0430\u0445\u0438\u045b\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"\u0421\u0430\u043d \u0402\u043e\u0440\u0452\u0438\u043e/\u0411\u0438\u043b\u0430 \u0434\u0438\u0458\u0430\u043b\u0435\u043a\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\u0415\u0432\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\u0418\u0441\u0442\u043e\u0447\u043d\u0430 \u0415\u0432\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\u0421\u0458\u0435\u0432\u0435\u0440\u043d\u0430 \u0415\u0432\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\u0417\u0430\u043f\u0430\u0434\u043d\u0430 \u0415\u0432\u0440\u043e\u043f\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\u0443\u0458\u0433\u0443\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\u0441\u0442\u0430\u0440\u0438 \u0438\u0442\u0430\u043b\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\u043a\u043e\u0440\u0435\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\u0437\u0430\u0458\u0435\u0434\u043d\u0438\u0447\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\u0443\u043a\u0440\u0430\u0458\u0438\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\u043a\u043e\u043f\u0442\u0441\u043a\u0438 \u043a\u0430\u043b\u0435\u043d\u0434\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\u0443\u0440\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"\u0421\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438\u0437\u043e\u0432\u0430\u043d\u0430 \u0440\u0435\u0441\u0438\u0458\u0430\u043d\u0441\u043a\u0430 \u043e\u0440\u0442\u043e\u0433\u0440\u0430\u0444\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\u043a\u0430\u043b\u043c\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\u0437\u0435\u043d\u0430\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\u0443\u0437\u0431\u0435\u0447\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\u043a\u0430\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"\u041d\u0435\u043c\u0430\u0447\u043a\u0430 \u043e\u0440\u0442\u043e\u0433\u0440\u0430\u0444\u0438\u0458\u0430 \u0438\u0437 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\u0441\u0438\u043b\u043e\u0442\u0438 \u043d\u0430\u0433\u0440\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\u0432\u0435\u043d\u0434\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\u041a\u0430\u043b\u0435\u043d\u0434\u0430\u0440 \u0420\u0435\u043f\u0443\u0431\u043b\u0438\u043a\u0435 \u041a\u0438\u043d\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\u0432\u0438\u0458\u0435\u0442\u043d\u0430\u043c\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\u043a\u043e\u0442\u0430\u043d\u0435\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\u043a\u043e\u0458\u0440\u0430 \u0447\u0438\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\u0441\u0430\u0442 (12-\u0441\u0430\u0442\u0438 / 24-\u0441\u0430\u0442\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"\u0422\u0430\u0440\u0430\u0441\u043a\u0438\u0458\u0435\u0432\u0438\u0447\u043a\u0430 \u043e\u0440\u0442\u043e\u0433\u0440\u0430\u0444\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u0432\u043e\u043b\u0430\u043f\u0443\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\u043a\u043b\u0430\u0441\u0438\u0447\u043d\u0438 \u0441\u0438\u0440\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\u043e\u0441\u043c\u0430\u045a\u0430\u043d\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\u0433\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\u0432\u0430\u043b\u0443\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\u0441\u0438\u0440\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\u0433\u0440\u0447\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\u043b\u0438\u0434\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\u0441\u0443\u043c\u0435\u0440\u0441\u043a\u043e-\u0430\u043a\u0430\u0434\u0441\u043a\u043e \u043a\u0443\u043d\u0435\u0438\u0444\u043e\u0440\u043c \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\u0432\u043e\u043b\u043e\u0444"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438 \u043c\u0430\u0440\u043e\u043a\u0430\u043d\u0441\u043a\u0438 \u0442\u0430\u043c\u0430\u0437\u0438\u0445\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0430\u0440\u0430\u043f\u0441\u043a\u0438 (\u0441\u0442\u0430\u043d\u0434\u0430\u0440\u0434\u043d\u0438)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\u0443\u0458\u0435\u0434\u0438\u045a\u0435\u043d\u0438 \u043a\u0430\u043d\u0430\u0434\u0441\u043a\u0438 \u0430\u0431\u043e\u0440\u0438\u045f\u0438\u043d\u0441\u043a\u0438 \u0441\u0438\u043b\u0430\u0431\u0438\u0446\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\u0433\u0430\u0458\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\u043c\u043e\u043d\u0433\u043e\u043b\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\u043c\u0430\u043d\u0447\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\u043b\u0430\u0442\u0438\u043d\u0438\u0446\u0430 (\u0444\u0440\u0430\u043a\u0442\u0443\u0440 \u0432\u0430\u0440\u0438\u0458\u0430\u043d\u0442\u0430)"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\u0433\u0431\u0430\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\u043c\u0430\u043d\u0438\u043f\u0443\u0440\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\u043b\u0430\u0442\u0438\u043d\u0438\u0446\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\u0433\u0430\u043b\u0441\u043a\u0430 \u043b\u0430\u0442\u0438\u043d\u0438\u0446\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\u043f\u043e\u0458\u0435\u0434\u043d\u043e\u0441\u0442\u0430\u0432\u0459\u0435\u043d\u0438 \u043a\u0438\u043d\u0435\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\u0442\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d\u0430\u043b\u043d\u0438 \u043a\u0438\u043d\u0435\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\u043a\u043e\u0441\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\u043c\u0430\u043b\u0438 \u0440\u0438\u043c\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u0431\u043b\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\u043b\u0438\u0441\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\u043e\u0441\u0430\u0433\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\u043c\u0435\u0441\u0435\u0447\u0435\u0432\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\u043c\u0430\u0445\u0430\u0432\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\u043a\u0430\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"\u0420\u0430\u043d\u0438 \u043c\u043e\u0434\u0435\u0440\u043d\u0438 \u0444\u0440\u0430\u043d\u0446\u0443\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\u0458\u0438\u0434\u0438\u0448"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\u043c\u043e\u0441\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"\u0441\u0438\u0440\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\u0414\u0435\u0437\u0435\u0440\u0435\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\u0458\u043e\u0440\u0443\u0431\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\u0437\u0430\u043f\u0430\u0434\u043d\u043e\u0441\u0438\u0440\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\u043e\u0442\u043e\u043c\u0430\u043d\u0441\u043a\u0438 \u0442\u0443\u0440\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\u0441\u0438\u0440\u0438\u0458\u0441\u043a\u043e \u0435\u0441\u0442\u0440\u0430\u043d\u0433\u0435\u043b\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\u0432\u0430\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\u0436\u0443\u0430\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\u043a\u0430\u0440\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\u043a\u0430\u043b\u0435\u045a\u0438\u043d"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\u043a\u0438\u043d\u0435\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\u0431\u043e\u043f\u043e\u043c\u043e\u0444\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e \u043f\u0435\u0440\u043c\u0438\u043a\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\u0441\u0442\u0438\u043b \u0437\u0430\u0432\u0440\u0448\u0435\u0442\u043a\u0430 \u0440\u0435\u0442\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\u0437\u0443\u043b\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\u0421\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0435 \u043a\u0430\u043e \u0442\u0435\u043b\u0435\u0444\u043e\u043d\u0441\u043a\u0438 \u0438\u043c\u0435\u043d\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"\u041c\u043e\u043d\u043e\u0442\u043e\u043d\u0438\u043a"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0438\u0458\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\u043a\u0438\u043c\u0431\u0443\u043d\u0434\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\u0458\u0430\u043f\u0430\u043d\u0441\u043a\u0438 \u0444\u0438\u043d\u0430\u043d\u0441\u0438\u0458\u0441\u043a\u0438 \u0431\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\u0447\u0430\u043c\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\u045f\u0438\u0437"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\u043f\u0438\u0441\u043c\u043e \u0438\u0441\u0442\u043e\u0447\u043d\u0435 \u0421\u0438\u0440\u0438\u0458\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\u0420\u0435\u0444\u043e\u0440\u043c\u0438\u0441\u0430\u043d\u0438 \u0440\u0435\u0434\u043e\u0441\u043b\u0435\u0434 \u0441\u043e\u0440\u0442\u0438\u0440\u0430\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\u0422\u0430\u0433\u0430\u043b\u043e\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\u0435\u0433\u0438\u043f\u0430\u0442\u0441\u043a\u043e \u043d\u0430\u0440\u043e\u0434\u043d\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\u0435\u0433\u0438\u043f\u0430\u0442\u0441\u043a\u043e \u0445\u0438\u0458\u0435\u0440\u0430\u0442\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\u0435\u043c\u0431\u0443"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\u0435\u0433\u0438\u043f\u0430\u0442\u0441\u043a\u0438 \u0445\u0438\u0458\u0435\u0440\u043e\u0433\u043b\u0438\u0444\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\u0433\u0440\u0443\u0437\u0438\u0458\u0441\u043a\u043e \u043a\u0445\u0443\u0442\u0441\u0443\u0440\u0438 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u043a\u0438\u043d\u0435\u0441\u043a\u0438 (\u043f\u043e\u0458\u0435\u0434\u043d\u043e\u0441\u0442\u0430\u0432\u0459\u0435\u043d)"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\u0441\u0442\u0430\u0440\u043e\u043c\u0430\u0452\u0430\u0440\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\u043a\u043e\u043d\u043a\u0430\u043d\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\u0422\u0440\u0430\u0434\u0438\u0446\u0438\u043e\u043d\u0430\u043b\u043d\u0430 \u043d\u0435\u043c\u0430\u0447\u043a\u0430 \u043e\u0440\u0442\u043e\u0433\u0440\u0430\u0444\u0438\u0458\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\u043a\u043e\u0441\u0440\u0435\u0430\u043d\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\u043a\u043f\u0435\u043b\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\u043a\u043c\u0435\u0440\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\u0438\u043b\u043e\u043a\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"\u0412\u0430\u043b\u0435\u043d\u0446\u0438\u0458\u0441\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\u043a\u0438\u043f\u0430\u0440\u0441\u043a\u043e \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"\u0423\u0458\u0435\u0434\u0438\u045a\u0435\u043d \u0442\u0443\u0440\u0441\u043a\u0438 \u043b\u0430\u0442\u0438\u043d\u0438\u0447\u043d\u0438 \u0430\u043b\u0444\u0430\u0431\u0435\u0442"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\u043c\u0443\u043d\u0434\u0430\u043d\u0433"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\u0433\u0443\u0440\u043c\u0443\u043a\u0438 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\u0432\u0438\u0448\u0435 \u0458\u0435\u0437\u0438\u043a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u043a\u0430\u0434\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\u0441\u0438\u0441\u0442\u0435\u043c \u043c\u0458\u0435\u0440\u0435\u045a\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\u043a\u0440\u0438\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\u0433\u043b\u0430\u0433\u043e\u0459\u0438\u0446\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\u0433\u0438\u043b\u0431\u0435\u0440\u0442\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\u0427\u0435\u0440\u043e\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\u043a\u0430\u0440\u0438\u043f\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\u0442\u0430\u043c\u0438\u043b\u0441\u043a\u0435 \u0446\u0438\u0444\u0440\u0435"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\u043a\u0430\u0440\u0430\u0447\u0430\u0458-\u0431\u0430\u043b\u043a\u0430\u0440"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\u0438\u043d\u0433\u0432\u0438\u0448\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\u043a\u0430\u0440\u0435\u043b\u0438\u0458\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\u0435\u0444\u0438\u043a\u0441\u043a\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"\u0411\u0440\u043e\u0458\u0435\u0432\u0438"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\u043a\u0443\u0440\u0443\u043a\u0445"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\u0448\u0430\u043c\u0431\u0430\u043b\u0430"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\u0442\u0435\u043b\u0443\u0433\u0443 \u043f\u0438\u0441\u043c\u043e"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\u0431\u0430\u0444\u0438\u0458\u0430"_s)
		})
	}));
	return data;
}

LocaleNames_bs_Cyrl::LocaleNames_bs_Cyrl() {
}

$Class* LocaleNames_bs_Cyrl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bs_Cyrl, name, initialize, &_LocaleNames_bs_Cyrl_ClassInfo_, allocate$LocaleNames_bs_Cyrl);
	return class$;
}

$Class* LocaleNames_bs_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun