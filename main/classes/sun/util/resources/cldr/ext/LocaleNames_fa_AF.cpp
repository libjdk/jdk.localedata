#include <sun/util/resources/cldr/ext/LocaleNames_fa_AF.h>

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

$MethodInfo _LocaleNames_fa_AF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_fa_AF::*)()>(&LocaleNames_fa_AF::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_fa_AF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fa_AF",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fa_AF_MethodInfo_
};

$Object* allocate$LocaleNames_fa_AF($Class* clazz) {
	return $of($alloc(LocaleNames_fa_AF));
}

void LocaleNames_fa_AF::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fa_AF::getContents() {
	$var($String, metaValue_mn, u"\u0645\u063a\u0644\u06cc"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\u06a9\u0644\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\u0647\u0627\u0646\u06af \u06a9\u0627\u0646\u06af\u060c \u0646\u0627\u062d\u06cc\u0647\u0654 \u0648\u06cc\u0698\u0647\u0654 \u062d\u06a9\u0648\u0645\u062a\u06cc \u0686\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\u067e\u0631\u062a\u06af\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\u067e\u0631\u062a\u06af\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\u0647\u0627\u0646\u062f\u0648\u0631\u0627\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\u067e\u0627\u0631\u0627\u06af\u0648\u0627\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\u06a9\u0631\u0648\u0634\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\u06a9\u0631\u0648\u0634\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\u0645\u06cc\u0632\u0648\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\u0647\u0627\u06cc\u062a\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\u0627\u0646\u062f\u0648\u0646\u06cc\u0632\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\u0627\u0646\u062f\u0648\u0646\u06cc\u0632\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\u0622\u06cc\u0631\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\u0632\u0627\u0632\u0627\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\u0627\u0641\u0631\u06cc\u06a9\u0627\u0646\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\u0627\u0646\u062f\u0648\u0631\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\u0641\u0644\u0645\u06cc\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\u0627\u0646\u062a\u06cc\u06af\u0648\u0627 \u0648 \u0628\u0627\u0631\u0628\u0648\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\u0622\u06cc\u0633\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\u0622\u06cc\u0633\u0644\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\u0627\u0644\u0628\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\u0627\u06cc\u062a\u0627\u0644\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\u0627\u0646\u06af\u0648\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\u0627\u0646\u062a\u0631\u06a9\u062a\u06cc\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\u0627\u0631\u062c\u0646\u062a\u0627\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\u0627\u0633\u0627\u0645\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\u062c\u0627\u067e\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\u0622\u0630\u0631\u0628\u0627\u06cc\u062c\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\u0631\u0648\u0645\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\u0632\u06cc\u0645\u0628\u0627\u0628\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\u0628\u0648\u0633\u0646\u06cc\u0627 \u0648 \u0647\u0631\u0632\u0647\u200c\u06af\u0648\u06cc\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\u0628\u0646\u06af\u0644\u0647\u200c\u062f\u06cc\u0634"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\u0628\u0644\u062c\u06cc\u0645"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\u0628\u0644\u063a\u0627\u0631\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\u062c\u0627\u067e\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\u0628\u0631\u0648\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\u0628\u0648\u0644\u06cc\u0648\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\u0628\u0631\u0627\u0632\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\u0628\u0647\u0627\u0645\u0627\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\u0633\u0648\u06cc\u062f\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\u0633\u06cc\u0646\u06af\u0627\u067e\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\u0645\u0627\u06cc\u062a\u06cc\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\u0633\u0644\u0648\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\u0627\u0633\u0648\u0627\u0644\u0628\u0627\u0631\u062f \u0648 \u062c\u0627\u0646 \u0645\u0627\u06cc\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\u0633\u0644\u0648\u0627\u06a9\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\u0633\u06cc\u0631\u0627\u0644\u06cc\u0648\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\u06a9\u06cc\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\u0633\u06cc\u0646\u06cc\u06af\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\u0633\u0648\u0645\u0627\u0644\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\u06a9\u0645\u067e\u0648\u0686\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\u0627\u0644\u0628\u0627\u0646\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\u06a9\u0627\u0646\u06af\u0648 - \u06a9\u06cc\u0646\u0634\u0627\u0633\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\u0627\u0644\u0633\u0644\u0648\u0627\u062f\u0648\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\u0633\u0648\u06cc\u062f\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\u06a9\u0627\u0646\u06af\u0648 - \u0628\u0631\u0627\u0632\u0648\u06cc\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\u06a9\u0648\u0631\u06cc\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\u0633\u0648\u0627\u062d\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\u0633\u0648\u06cc\u0633"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\u06a9\u0648\u0631\u06cc\u0627\u06cc \u0634\u0645\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\u06a9\u0648\u0631\u06cc\u0627\u06cc \u062c\u0646\u0648\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\u0686\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\u06a9\u0648\u0644\u0645\u0628\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\u0642\u0631\u063a\u0632\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\u06a9\u0627\u0633\u062a\u0631\u06cc\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\u06a9\u06cc\u0648\u0628\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\u062a\u0627\u062c\u06a9\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\u062a\u0627\u062c\u06a9\u0633\u062a\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\u0633\u0631\u06cc\u0644\u0627\u0646\u06a9\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u0686\u06cc\u0646\u06cc \u0633\u0627\u062f\u0647 \u0634\u062f\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\u0627\u062a\u0631\u06cc\u0634\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\u062f\u0646\u0645\u0627\u0631\u06a9"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\u0644\u06cc\u0633\u0648\u062a\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\u0644\u062a\u0648\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\u0644\u0627\u062a\u0648\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\u0644\u06cc\u0628\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\u06cc\u0648\u06af\u0627\u0646\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\u0645\u0627\u0644\u062f\u06cc\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\u0645\u0627\u062f\u063a\u0627\u0633\u06a9\u0631"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\u0633\u0626\u0648\u062a\u0627 \u0648 \u0645\u0644\u06cc\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\u0627\u0633\u062a\u0648\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\u0645\u0646\u06af\u0648\u0644\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\u06cc\u0648\u0631\u0648\u06af\u0648\u0627\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\u0645\u0648\u0631\u06cc\u062a\u0627\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\u0645\u0627\u0644\u062a\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\u0645\u06a9\u0633\u06cc\u06a9\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\u0645\u0627\u0644\u06cc\u0632\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\u0627\u0631\u06cc\u062a\u0631\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\u0645\u0648\u0632\u0645\u0628\u06cc\u0642"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\u0633\u0646\u062a \u0648\u06cc\u0646\u0633\u0646\u062a \u0648 \u06af\u0631\u0646\u0627\u062f\u06cc\u0646\u200c\u0647\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\u0647\u0633\u067e\u0627\u0646\u06cc\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\u0647\u0633\u067e\u0627\u0646\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\u0627\u06cc\u062a\u0648\u067e\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\u0648\u0646\u0632\u0648\u06cc\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\u0646\u0631\u0648\u0698\u06cc \u06a9\u062a\u0627\u0628\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\u0646\u06cc\u067e\u0627\u0644\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\u0646\u06cc\u062c\u0631\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\u0646\u06cc\u06a9\u0627\u0631\u0627\u06af\u0648\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\u0647\u0627\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\u0647\u0627\u0644\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\u0646\u0631\u0648\u0698\u06cc \u0646\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\u0646\u0627\u0631\u0648\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\u0646\u0627\u0631\u0648\u06cc\u0698\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\u0646\u06cc\u067e\u0627\u0644"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\u0641\u0646\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\u0641\u0646\u0644\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\u0645\u06cc\u06a9\u0631\u0648\u0646\u0632\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\u0632\u06cc\u0644\u0627\u0646\u062f \u062c\u062f\u06cc\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\u0622\u06cc\u0631\u0644\u0646\u062f\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\u0639\u0631\u0628\u06cc \u0641\u0635\u06cc\u062d"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\u06af\u0631\u06cc\u0646\u0627\u062f\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\u06af\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\u06af\u06cc\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\u06af\u06cc\u0646\u06cc\u0627 \u0627\u0633\u062a\u0648\u0627\u06cc\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\u06af\u0648\u0627\u062a\u06cc\u0645\u0627\u0644\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\u0632\u0628\u0627\u0646 \u0633\u0631\u0627\u0646\u0627\u0646"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\u06af\u06cc\u0646\u06cc\u0627 \u0628\u06cc\u0633\u0627\u0626\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\u067e\u0627\u0646\u0627\u0645\u0647"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\u06af\u06cc\u0627\u0646\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\u06a9\u0648\u0633\u0648\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\u067e\u06cc\u0631\u0648"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\u067e\u0627\u067e\u0648\u0627 \u0646\u06cc\u0648 \u06af\u06cc\u0646\u06cc\u0627"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\u06a9\u0631\u062f\u06cc \u0633\u0648\u0631\u0627\u0646\u06cc"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\u067e\u0648\u0644\u0646\u062f"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\u067e\u0648\u0644\u0646\u062f\u06cc"_s)
		})
	}));
	return data;
}

LocaleNames_fa_AF::LocaleNames_fa_AF() {
}

$Class* LocaleNames_fa_AF::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fa_AF, name, initialize, &_LocaleNames_fa_AF_ClassInfo_, allocate$LocaleNames_fa_AF);
	return class$;
}

$Class* LocaleNames_fa_AF::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun