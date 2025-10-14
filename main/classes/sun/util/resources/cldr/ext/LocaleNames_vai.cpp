#include <sun/util/resources/cldr/ext/LocaleNames_vai.h>

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

$MethodInfo _LocaleNames_vai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_vai::*)()>(&LocaleNames_vai::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_vai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_vai",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_vai_MethodInfo_
};

$Object* allocate$LocaleNames_vai($Class* clazz) {
	return $of($alloc(LocaleNames_vai));
}

void LocaleNames_vai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_vai::getContents() {
	$var($String, metaValue_DE, u"\ua567\ua56e\ua527"_s);
	$var($String, metaValue_ES, u"\ua550\ua60a\ua527"_s);
	$var($String, metaValue_GR, u"\ua5e5\ua5f7\ua60b"_s);
	$var($String, metaValue_NP, u"\ua547\ua550\ua537"_s);
	$var($String, metaValue_RW, u"\ua55f\ua599\ua561"_s);
	$var($String, metaValue_SE, u"\ua5ac\ua528\ua5f5\ua60b"_s);
	$var($String, metaValue_US, u"\ua576\ua571"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\ua52a\ua5b3\ua57f \ua538\ua58f"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\ua550\ua512\ua53b\ua533\ua56f \ua50e\ua512 \ua540\ua524 \ua5db\ua524 \ua55e \ua5f1 \ua5ea \ua56d\ua54c\ua564"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\ua576\ua57f\ua543\ua524 \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\ua576\ua57f\ua543\ua524"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\ua550\ua583"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\ua550\ua55f\ua5dd\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\ua56a\ua55a\ua54c"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\ua5fb\ua5e1 \ua552\ua561\ua54c \ua5cf \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\ua549\ua586\ua55f"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\ua5b3\ua56f\ua524\ua5f3 \ua549\ua55f\ua52c \ua5e1\ua546\ua513\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\ua549\ua531\ua56d\ua515\ua53b\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\ua549\ua60b\ua533\ua5b6\ua54e \ua5ea \ua551\ua59c\ua55c"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\ua549\ua544\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\ua549\ua56a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\ua549\ua537\ua551\ua547\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\ua549\ua546\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\ua549\ua546\ua54c\ua538"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\ua549\ua590\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\ua549\ua60b\ua55a\ua533\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\ua549\ua600\ua60b\ua533\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\ua55e\ua54c\ua59d"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\ua576\ua571 \ua562\ua579\ua54e"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\ua5ba\ua53b\ua5a4\ua54e"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\ua513\ua5e0\ua5bb"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\ua5ba\ua5ac\ua5a4\ua503\ua537\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\ua549\ua5a9\ua551"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\ua549\ua55e\ua53a"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\ua549\ua564\ua551\ua524\ua567\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\ua584\ua546\ua547\ua570"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\ua584\ua546\ua547\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\ua577\ua53b\ua547\ua570 \ua5ea \ua5e5\ua564\ua591\ua532\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\ua551\ua506\ua581\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\ua5fb\ua5e1\ua52c\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\ua551\ua545\ua55e\ua5f5\ua53c"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\ua5e9\ua540\ua5da\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\ua5d0\ua5ba\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\ua506\ua55e\ua5a9\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\ua5d0\ua5ba\ua53b\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\ua577\ua543\ua56f \ua558\ua587"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\ua5c2\ua520\ua538\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\ua5c2\ua520\ua5f8\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\ua551\ua5f8\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\ua59c\ua5a9\ua53a"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\ua5e9\ua547\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\ua56a\ua60b\ua553 \ua5de\ua5e2 \ua552\ua55a\ua55e\ua546"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\ua5e9\ua5b7\ua55c"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\ua59c\ua5a9\ua609\ua527"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\ua5e9\ua56d\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\ua577\ua537\ua532\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\ua55e\ua54c\ua59d \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\ua56a\ua513\ua52c\ua602\ua60b \ua5a8\ua56e \ua5e8\ua5f3\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\ua5ac\ua55e\ua524\ua56e\ua54a\ua56f \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\ua59c\ua55f\ua518\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\ua516\ua5fc\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\ua551\ua54c\ua56e\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\ua5ac\ua5f5\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\ua59c\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\ua59c\ua50d\ua533 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\ua53b\ua56c\ua576\ua571"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\ua577\ua5ac\ua54e\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\ua53b\ua60b \ua5e5\ua537\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\ua53b\ua583\ua50d\ua547\ua570"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\ua5e9\ua55e\ua5a9\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\ua53b\ua559\ua552\ua535 \ua5ea \ua567\ua60b \ua56e\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\ua506\ua537\ua518"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\ua53b\ua583\ua559\ua543\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\ua50b\ua569 \ua552\ua54c\ua5ba \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\ua56e\ua538\ua586 \ua562\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\ua53b\ua547\ua56d\ua54c"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\ua587\ua56e\ua537\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\ua587\ua56e\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\ua56a\ua56f\ua55c"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\ua5ac\ua538\ua56f\ua508"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\ua58f\ua58f\ua53b (\ua51e\ua500\ua537\ua60b) \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\ua5ac\ua55c\ua60b \ua5db\ua524 \ua512\ua60b\ua5e3 \ua5cf"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\ua58f\ua590 \ua5f5\ua5de\ua5b4\ua55f\ua50e \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\ua562\ua574 \ua57f\ua508 \ua5ea \ua549 \ua56e\ua527 \ua557\ua574\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\ua549\ua531\ua538\ua56a \ua5f3 \ua5f3 \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\ua5e1\ua5f7 \ua562\ua50d\ua5cd\ua5ba"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\ua58f\ua590"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\ua5ac\ua503\ua564 \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\ua53b\ua60b\ua533 \ua56e\ua54a\ua5f3\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\ua58f\ua533 \ua57e\ua54e"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\ua53b\ua569\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\ua5ac\ua54e\ua53d \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\ua58f\ua543 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\ua51a\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\ua56a\ua508\ua5a9\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\ua566\ua524\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\ua5db\ua5cf\ua52d\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\ua543\ua512\ua550\ua5cb\ua60b \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\ua533\ua53b\ua55a\ua60b \ua55c \ua5b4\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\ua55a\ua546\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\ua58f\ua53b\ua55a \ua538\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\ua5cb\ua5ba\ua543\ua53b \ua5ea \ua56a\ua524\ua58f\ua53b \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\ua566\ua535"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\ua5ff\ua5e1"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\ua543\ua5b3\ua551"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\ua531\ua5f7\ua60b\ua53b \ua5db\ua524 \ua512\ua60b\ua5e3 \ua5cf \ua578\ua583\ua500 \ua5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\ua51e\ua52a \ua5f2\ua535 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\ua57f\ua591"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\ua5b4\ua55f\ua587\ua571"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\ua55a\ua524 \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\ua55a\ua524"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\ua51e\ua53b\ua56e\ua53b \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\ua562\ua5e1\ua59b\ua5d0\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\ua55a\ua540\ua543\ua53b\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\ua5ff\ua543 \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\ua57f\ua51e\ua583"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\ua50e\ua512 \ua5c3 \ua533\ua5de\ua5bb"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\ua5cb\ua5ba\ua543\ua56e\ua547\ua53b\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\ua5a4\ua547\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\ua5cb\ua56c"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\ua5cb\ua5ba\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\ua5cb\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\ua5a4\ua538\ua515\ua55c \ua5ea \ua57f\ua506\ua591"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\ua55a\ua5a3\ua5a8"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\ua535\ua500\ua591 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\ua55a\ua524\ua54e\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\ua540\ua59c\ua533"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\ua55a\ua60b\ua564\ua547\ua570"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\ua55c\ua547\ua56e\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\ua581\ua546\ua547\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\ua581\ua546\ua547\ua56a\ua60b \ua578\ua571\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\ua5b3\ua5b4\ua513\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\ua5b3\ua56d\ua561"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\ua549\ua537\ua520\ua538\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\ua5b3\ua5b4\ua513\ua547\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\ua576\ua571 \ua56a\ua60b \ua5c5\ua60b \ua533\ua60b\ua5e3 \ua5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\ua5fb\ua55a \ua5ea \ua521\ua537\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\ua5ba\ua5a6"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(metaValue_US)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\ua5e1\ua5b4\ua503\ua5cd"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\ua5e1\ua53b\ua57f\ua547\ua570"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\ua546\ua516\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\ua562\ua54c\ua55f \ua50e\ua512 \ua540\ua524"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\ua5b3\ua513\ua5dd\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\ua5b3\ua5e9\ua543\ua53b\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(metaValue_US)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\ua559\ua533\ua56a\ua60b \ua562\ua568\ua54c"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\ua500\ua538\ua533\ua55f"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\ua53b\ua60b \ua532\ua60b\ua53b\ua60b \ua5ea \ua5b6\ua513\ua56f\ua535\ua60b \ua5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\ua524\ua533\ua58e\ua52a\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\ua559\ua533\ua56a\ua60b \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\ua51b\ua51f\ua53b \ua5e9\ua5e1 \ua5cf \ua5b7\ua5ac \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\ua576\ua571 \ua5e9\ua5e1 \ua5cf \ua5b7\ua5ac \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\ua532\ua569\ua56f\ua546\ua527"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\ua5f2\ua547\ua5ae\ua503\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\ua5e8\ua5e1\ua53b\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\ua559\ua5b8\ua54e\ua5a4"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\ua531\ua60b \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\ua531\ua524\ua540"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\ua558\ua537\ua543 \ua5a8\ua56e \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\ua546\ua58f\ua547\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\ua558\ua584 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\ua5a2\ua55f\ua60b\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\ua5f1\ua60b\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\ua54e\ua537\ua53b \ua5ea \ua5a2\ua5a4\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\ua56d\ua577\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\ua595\ua56f\ua524\ua5f3"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\ua562\ua579\ua599\ua549"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\ua5b6\ua55f\ua56f\ua55c"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\ua5d8\ua5ba\ua540\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\ua5f1\ua60b\ua53b \ua5b6\ua54e\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\ua5b6\ua5e6\ua60b\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"\ua56d\ua54c\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\ua540\ua59c\ua55f\ua55a"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\ua567\ua553 \ua5b4\ua54e \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\ua56d\ua52d\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\ua545\ua524\ua547"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\ua5b6\ua54e\ua510\ua5a8\ua505"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\ua5a6\ua570\ua54a \ua5f3 \ua545\ua524\ua547"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\ua5d8\ua5ba\ua540\ua569 \ua5db\ua524 \ua512\ua60b\ua5e3 \ua5cf \ua5ea \ua5c7\ua5a2 \ua533\ua60b\ua5e3 \ua5db\ua524 \ua512\ua60b\ua5e3 \ua5cf"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\ua5b6\ua54e\ua50e\ua56e\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\ua5b6\ua54e\ua546"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\ua545\ua524\ua547 \ua52b\ua562\ua574"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\ua5b6\ua569\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\ua58f\ua587\ua57e"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\ua54c\ua599\ua562"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\ua526\ua53a"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\ua5e5\ua5e1\ua535 \ua5ea \ua56e\ua581\ua56f"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\ua5bd\ua5ab\ua55f"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\ua58f\ua513\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\ua54c\ua524\ua533"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\ua51d\ua608\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\ua5bd\ua60b\ua56d\ua513"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\ua5bd\ua51f\ua5f8\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\ua58e\ua584\ua551"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\ua5db\ua5ba\ua53b\ua569 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\ua524\ua586\ua547\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\ua56e\ua5da\ua50e"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\ua524\ua586\ua547\ua53b\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\ua549\ua513 \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\ua524\ua57c"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\ua559\ua524"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\ua551\ua547\ua53b\ua55e\ua524\ua55e"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\ua56e\ua60b \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\ua524\ua53a\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\ua51b\ua51f\ua53b \ua524\ua53a\ua569 \ua5db\ua524\ua602 \ua557\ua574\ua500 \ua56e"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\ua549\ua531\ua538\ua56a \ua5db\ua524 \ua512\ua60b\ua5e3 \ua5cf \ua578\ua583\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\ua524\ua55f\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\ua524\ua55f\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\ua549\ua524\ua53b \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\ua524\ua55a\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\ua524\ua55a\ua537\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\ua566\ua547\ua527"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\ua564\ua52d\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\ua567\ua550\ua547\ua527"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\ua600\ua5e1\ua518"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\ua5ae\ua5a8"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\ua53d\ua553\ua59c\ua503"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\ua567\ua56e\ua527\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\ua5d8\ua5ba\ua5f5\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\ua51b\ua5e8\ua5e2"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\ua567\ua559\ua547\ua527"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\ua51e\ua570"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\ua543\ua545\ua53b\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\ua56a\ua579\ua535\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\ua543\ua538\ua551\ua533"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\ua58f\ua579\ua584\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\ua543\ua608\ua5e2"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\ua53b\ua60b \ua543\ua533\ua53b \ua5ea \ua515\ua532\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\ua58f\ua538\ua602\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\ua58f\ua538\ua569 \ua5db\ua524 \ua56a\ua60b\ua5d2"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\ua58f\ua538\ua569 \ua5db\ua524 \ua512\ua60b\ua5e3 \ua5cf"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\ua5b4\ua503\ua533"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\ua51e\ua500\ua56e\ua60b \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\ua56a\ua564\ua53b\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\ua55e\ua574\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\ua512\ua551\ua5df\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\ua53b\ua60b \ua5a8\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\ua537\ua5ff\ua60b\ua53b\ua5f3\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\ua5ac\ua538 \ua55e\ua60b\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\ua55e\ua524\ua52b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\ua537\ua587\ua57f"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\ua537\ua5a4\ua503\ua547\ua570"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\ua5cf\ua53b\ua60b\ua5c2\ua5ba"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\ua55e\ua533\ua532\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\ua512\ua52b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\ua5de\ua55f\ua58f"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\ua5de\ua56f\ua58f"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\ua592\ua537\ua581\ua559"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\ua5de\ua533\ua547\ua5b6\ua584"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\ua56a\ua60b\ua553 \ua5de\ua5e2 \ua56e\ua54a\ua533\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\ua56e\ua55c\ua56d\ua53b\ua56a"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\ua56e\ua54a\ua563 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\ua56e\ua537"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\ua546\ua569\ua60b\ua56e"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\ua5de\ua590\ua537\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\ua5db\ua524 \ua56a\ua60b\ua5d2 \ua56e\ua538\ua569\ua56f \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\ua56e\ua533\ua547\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\ua5de\ua513\ua50e\ua547\ua570"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\ua5de\ua60b\ua516\ua55f\ua533"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\ua56e\ua512\ua500"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\ua56e\ua54a\ua55a"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\ua5de\ua513\ua5d4"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\ua56e\ua537\ua55c\ua50d"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\ua56e\ua55e\ua54c\ua528"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\ua608\ua53b\ua58f"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\ua56e\ua512\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\ua5e9\ua546\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\ua579\ua564\ua52d\ua543"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\ua56f\ua546\ua52b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\ua56a\ua537\ua581\ua547\ua570 \ua56f\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\ua56f\ua524\ua567"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\ua5df\ua5ba\ua5c9 \ua533\ua60b\ua5e3"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\ua56f\ua524\ua540\ua538\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\ua547\ua56a\ua55f\ua5b6\ua54e"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\ua609\ua55c \ua5a8\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\ua5cd\ua53f"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\ua5df\ua5ba\ua503"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\ua586\ua5a9"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\ua5b8\ua503\ua524"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\ua53d\ua524 \ua5a8\ua56e \ua56f\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\ua571\ua56e\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\ua550\ua56f\ua56e"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\ua59b\ua568\ua52c"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\ua5e8\ua5e1\ua5a9"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\ua5f1\ua60b\ua53b \ua576\ua537\ua547\ua53b\ua569"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\ua550\ua59b\ua54e \ua545\ua524\ua547 \ua56f\ua56e\ua54a"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\ua531\ua512\ua52a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\ua550\ua543\ua53b\ua55a\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\ua576\ua5f7\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\ua5c1\ua512\ua53b"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\ua53b\ua60b \ua52a\ua602 \ua5ea \ua546\ua51e\ua5cf\ua60b"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\ua52a\ua533\ua56a\ua546"_s)
		})
	}));
	return data;
}

LocaleNames_vai::LocaleNames_vai() {
}

$Class* LocaleNames_vai::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_vai, name, initialize, &_LocaleNames_vai_ClassInfo_, allocate$LocaleNames_vai);
	return class$;
}

$Class* LocaleNames_vai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun