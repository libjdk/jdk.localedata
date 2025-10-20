#include <sun/util/resources/cldr/ext/CurrencyNames_ast.h>

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

$MethodInfo _CurrencyNames_ast_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ast::*)()>(&CurrencyNames_ast::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ast_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ast",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ast_MethodInfo_
};

$Object* allocate$CurrencyNames_ast($Class* clazz) {
	return $of($alloc(CurrencyNames_ast));
}

void CurrencyNames_ast::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ast::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ADP"_s),
			$of("ADP"_s)
		}),
		$$new($ObjectArray, {
			$of("AED"_s),
			$of("AED"_s)
		}),
		$$new($ObjectArray, {
			$of("AFA"_s),
			$of("AFA"_s)
		}),
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of("AFN"_s)
		}),
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("AMD"_s),
			$of("AMD"_s)
		}),
		$$new($ObjectArray, {
			$of("ANG"_s),
			$of("ANG"_s)
		}),
		$$new($ObjectArray, {
			$of("AOA"_s),
			$of("AOA"_s)
		}),
		$$new($ObjectArray, {
			$of("AOK"_s),
			$of("AOK"_s)
		}),
		$$new($ObjectArray, {
			$of("AON"_s),
			$of("AON"_s)
		}),
		$$new($ObjectArray, {
			$of("AOR"_s),
			$of("AOR"_s)
		}),
		$$new($ObjectArray, {
			$of("ARA"_s),
			$of("ARA"_s)
		}),
		$$new($ObjectArray, {
			$of("ARL"_s),
			$of("ARL"_s)
		}),
		$$new($ObjectArray, {
			$of("ARM"_s),
			$of("ARM"_s)
		}),
		$$new($ObjectArray, {
			$of("ARP"_s),
			$of("ARP"_s)
		}),
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
		}),
		$$new($ObjectArray, {
			$of("ATS"_s),
			$of("ATS"_s)
		}),
		$$new($ObjectArray, {
			$of("AWG"_s),
			$of("AWG"_s)
		}),
		$$new($ObjectArray, {
			$of("AZM"_s),
			$of("AZM"_s)
		}),
		$$new($ObjectArray, {
			$of("AZN"_s),
			$of("AZN"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD"_s),
			$of("BAD"_s)
		}),
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of("BAM"_s)
		}),
		$$new($ObjectArray, {
			$of("BAN"_s),
			$of("BAN"_s)
		}),
		$$new($ObjectArray, {
			$of("BBD"_s),
			$of("BBD"_s)
		}),
		$$new($ObjectArray, {
			$of("BDT"_s),
			$of("BDT"_s)
		}),
		$$new($ObjectArray, {
			$of("BEC"_s),
			$of("BEC"_s)
		}),
		$$new($ObjectArray, {
			$of("BEF"_s),
			$of("BEF"_s)
		}),
		$$new($ObjectArray, {
			$of("BEL"_s),
			$of("BEL"_s)
		}),
		$$new($ObjectArray, {
			$of("BGL"_s),
			$of("BGL"_s)
		}),
		$$new($ObjectArray, {
			$of("BGM"_s),
			$of("BGM"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("BGO"_s),
			$of("BGO"_s)
		}),
		$$new($ObjectArray, {
			$of("BHD"_s),
			$of("BHD"_s)
		}),
		$$new($ObjectArray, {
			$of("BIF"_s),
			$of("BIF"_s)
		}),
		$$new($ObjectArray, {
			$of("BMD"_s),
			$of("BMD"_s)
		}),
		$$new($ObjectArray, {
			$of("BND"_s),
			$of("BND"_s)
		}),
		$$new($ObjectArray, {
			$of("BOB"_s),
			$of("BOB"_s)
		}),
		$$new($ObjectArray, {
			$of("BOL"_s),
			$of("BOL"_s)
		}),
		$$new($ObjectArray, {
			$of("BOP"_s),
			$of("BOP"_s)
		}),
		$$new($ObjectArray, {
			$of("BOV"_s),
			$of("BOV"_s)
		}),
		$$new($ObjectArray, {
			$of("BRB"_s),
			$of("BRB"_s)
		}),
		$$new($ObjectArray, {
			$of("BRC"_s),
			$of("BRC"_s)
		}),
		$$new($ObjectArray, {
			$of("BRE"_s),
			$of("BRE"_s)
		}),
		$$new($ObjectArray, {
			$of("BRN"_s),
			$of("BRN"_s)
		}),
		$$new($ObjectArray, {
			$of("BRR"_s),
			$of("BRR"_s)
		}),
		$$new($ObjectArray, {
			$of("BRZ"_s),
			$of("BRZ"_s)
		}),
		$$new($ObjectArray, {
			$of("BSD"_s),
			$of("BSD"_s)
		}),
		$$new($ObjectArray, {
			$of("BTN"_s),
			$of("BTN"_s)
		}),
		$$new($ObjectArray, {
			$of("BUK"_s),
			$of("BUK"_s)
		}),
		$$new($ObjectArray, {
			$of("BWP"_s),
			$of("BWP"_s)
		}),
		$$new($ObjectArray, {
			$of("BYB"_s),
			$of("BYB"_s)
		}),
		$$new($ObjectArray, {
			$of("BYN"_s),
			$of("BYN"_s)
		}),
		$$new($ObjectArray, {
			$of("BYR"_s),
			$of("BYR"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZD"_s)
		}),
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("CDF"_s)
		}),
		$$new($ObjectArray, {
			$of("CHE"_s),
			$of("CHE"_s)
		}),
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("CHW"_s),
			$of("CHW"_s)
		}),
		$$new($ObjectArray, {
			$of("CLE"_s),
			$of("CLE"_s)
		}),
		$$new($ObjectArray, {
			$of("CLF"_s),
			$of("CLF"_s)
		}),
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("COP"_s)
		}),
		$$new($ObjectArray, {
			$of("COU"_s),
			$of("COU"_s)
		}),
		$$new($ObjectArray, {
			$of("CRC"_s),
			$of("CRC"_s)
		}),
		$$new($ObjectArray, {
			$of("CSD"_s),
			$of("CSD"_s)
		}),
		$$new($ObjectArray, {
			$of("CSK"_s),
			$of("CSK"_s)
		}),
		$$new($ObjectArray, {
			$of("CUC"_s),
			$of("CUC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUP"_s),
			$of("CUP"_s)
		}),
		$$new($ObjectArray, {
			$of("CVE"_s),
			$of("CVE"_s)
		}),
		$$new($ObjectArray, {
			$of("CYP"_s),
			$of("CYP"_s)
		}),
		$$new($ObjectArray, {
			$of("CZK"_s),
			$of("CZK"_s)
		}),
		$$new($ObjectArray, {
			$of("DDM"_s),
			$of("DDM"_s)
		}),
		$$new($ObjectArray, {
			$of("DEM"_s),
			$of("DEM"_s)
		}),
		$$new($ObjectArray, {
			$of("DJF"_s),
			$of("DJF"_s)
		}),
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("DKK"_s)
		}),
		$$new($ObjectArray, {
			$of("DOP"_s),
			$of("DOP"_s)
		}),
		$$new($ObjectArray, {
			$of("DZD"_s),
			$of("DZD"_s)
		}),
		$$new($ObjectArray, {
			$of("ECS"_s),
			$of("ECS"_s)
		}),
		$$new($ObjectArray, {
			$of("ECV"_s),
			$of("ECV"_s)
		}),
		$$new($ObjectArray, {
			$of("EEK"_s),
			$of("EEK"_s)
		}),
		$$new($ObjectArray, {
			$of("EGP"_s),
			$of("EGP"_s)
		}),
		$$new($ObjectArray, {
			$of("ERN"_s),
			$of("ERN"_s)
		}),
		$$new($ObjectArray, {
			$of("ESA"_s),
			$of("ESA"_s)
		}),
		$$new($ObjectArray, {
			$of("ESB"_s),
			$of("ESB"_s)
		}),
		$$new($ObjectArray, {
			$of("ESP"_s),
			$of("ESP"_s)
		}),
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("ETB"_s)
		}),
		$$new($ObjectArray, {
			$of("FIM"_s),
			$of("FIM"_s)
		}),
		$$new($ObjectArray, {
			$of("FJD"_s),
			$of("FJD"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
		}),
		$$new($ObjectArray, {
			$of("FRF"_s),
			$of("FRF"_s)
		}),
		$$new($ObjectArray, {
			$of("GEK"_s),
			$of("GEK"_s)
		}),
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of("GEL"_s)
		}),
		$$new($ObjectArray, {
			$of("GHC"_s),
			$of("GHC"_s)
		}),
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of("GHS"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of("GIP"_s)
		}),
		$$new($ObjectArray, {
			$of("GMD"_s),
			$of("GMD"_s)
		}),
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		}),
		$$new($ObjectArray, {
			$of("GNS"_s),
			$of("GNS"_s)
		}),
		$$new($ObjectArray, {
			$of("GQE"_s),
			$of("GQE"_s)
		}),
		$$new($ObjectArray, {
			$of("GRD"_s),
			$of("GRD"_s)
		}),
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("GTQ"_s)
		}),
		$$new($ObjectArray, {
			$of("GWE"_s),
			$of("GWE"_s)
		}),
		$$new($ObjectArray, {
			$of("GWP"_s),
			$of("GWP"_s)
		}),
		$$new($ObjectArray, {
			$of("GYD"_s),
			$of("GYD"_s)
		}),
		$$new($ObjectArray, {
			$of("HNL"_s),
			$of("HNL"_s)
		}),
		$$new($ObjectArray, {
			$of("HRD"_s),
			$of("HRD"_s)
		}),
		$$new($ObjectArray, {
			$of("HRK"_s),
			$of("HRK"_s)
		}),
		$$new($ObjectArray, {
			$of("HTG"_s),
			$of("HTG"_s)
		}),
		$$new($ObjectArray, {
			$of("HUF"_s),
			$of("HUF"_s)
		}),
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("IDR"_s)
		}),
		$$new($ObjectArray, {
			$of("IEP"_s),
			$of("IEP"_s)
		}),
		$$new($ObjectArray, {
			$of("ILP"_s),
			$of("ILP"_s)
		}),
		$$new($ObjectArray, {
			$of("IQD"_s),
			$of("IQD"_s)
		}),
		$$new($ObjectArray, {
			$of("IRR"_s),
			$of("IRR"_s)
		}),
		$$new($ObjectArray, {
			$of("ISK"_s),
			$of("ISK"_s)
		}),
		$$new($ObjectArray, {
			$of("ITL"_s),
			$of("ITL"_s)
		}),
		$$new($ObjectArray, {
			$of("JMD"_s),
			$of("JMD"_s)
		}),
		$$new($ObjectArray, {
			$of("JOD"_s),
			$of("JOD"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("KES"_s)
		}),
		$$new($ObjectArray, {
			$of("KGS"_s),
			$of("KGS"_s)
		}),
		$$new($ObjectArray, {
			$of("KHR"_s),
			$of("KHR"_s)
		}),
		$$new($ObjectArray, {
			$of("KMF"_s),
			$of("KMF"_s)
		}),
		$$new($ObjectArray, {
			$of("KPW"_s),
			$of("KPW"_s)
		}),
		$$new($ObjectArray, {
			$of("KRH"_s),
			$of("KRH"_s)
		}),
		$$new($ObjectArray, {
			$of("KRO"_s),
			$of("KRO"_s)
		}),
		$$new($ObjectArray, {
			$of("KWD"_s),
			$of("KWD"_s)
		}),
		$$new($ObjectArray, {
			$of("KYD"_s),
			$of("KYD"_s)
		}),
		$$new($ObjectArray, {
			$of("KZT"_s),
			$of("KZT"_s)
		}),
		$$new($ObjectArray, {
			$of("LAK"_s),
			$of("LAK"_s)
		}),
		$$new($ObjectArray, {
			$of("LBP"_s),
			$of("LBP"_s)
		}),
		$$new($ObjectArray, {
			$of("LKR"_s),
			$of("LKR"_s)
		}),
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("LRD"_s)
		}),
		$$new($ObjectArray, {
			$of("LSL"_s),
			$of("LSL"_s)
		}),
		$$new($ObjectArray, {
			$of("LTL"_s),
			$of("LTL"_s)
		}),
		$$new($ObjectArray, {
			$of("LTT"_s),
			$of("LTT"_s)
		}),
		$$new($ObjectArray, {
			$of("LUC"_s),
			$of("LUC"_s)
		}),
		$$new($ObjectArray, {
			$of("LUF"_s),
			$of("LUF"_s)
		}),
		$$new($ObjectArray, {
			$of("LUL"_s),
			$of("LUL"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("LVL"_s)
		}),
		$$new($ObjectArray, {
			$of("LVR"_s),
			$of("LVR"_s)
		}),
		$$new($ObjectArray, {
			$of("LYD"_s),
			$of("LYD"_s)
		}),
		$$new($ObjectArray, {
			$of("MAD"_s),
			$of("MAD"_s)
		}),
		$$new($ObjectArray, {
			$of("MAF"_s),
			$of("MAF"_s)
		}),
		$$new($ObjectArray, {
			$of("MCF"_s),
			$of("MCF"_s)
		}),
		$$new($ObjectArray, {
			$of("MDC"_s),
			$of("MDC"_s)
		}),
		$$new($ObjectArray, {
			$of("MDL"_s),
			$of("MDL"_s)
		}),
		$$new($ObjectArray, {
			$of("MGA"_s),
			$of("MGA"_s)
		}),
		$$new($ObjectArray, {
			$of("MGF"_s),
			$of("MGF"_s)
		}),
		$$new($ObjectArray, {
			$of("MKD"_s),
			$of("MKD"_s)
		}),
		$$new($ObjectArray, {
			$of("MKN"_s),
			$of("MKN"_s)
		}),
		$$new($ObjectArray, {
			$of("MLF"_s),
			$of("MLF"_s)
		}),
		$$new($ObjectArray, {
			$of("MMK"_s),
			$of("MMK"_s)
		}),
		$$new($ObjectArray, {
			$of("MNT"_s),
			$of("MNT"_s)
		}),
		$$new($ObjectArray, {
			$of("MOP"_s),
			$of("MOP"_s)
		}),
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRO"_s)
		}),
		$$new($ObjectArray, {
			$of("MTL"_s),
			$of("MTL"_s)
		}),
		$$new($ObjectArray, {
			$of("MTP"_s),
			$of("MTP"_s)
		}),
		$$new($ObjectArray, {
			$of("MUR"_s),
			$of("MUR"_s)
		}),
		$$new($ObjectArray, {
			$of("MVR"_s),
			$of("MVR"_s)
		}),
		$$new($ObjectArray, {
			$of("MWK"_s),
			$of("MWK"_s)
		}),
		$$new($ObjectArray, {
			$of("MXP"_s),
			$of("MXP"_s)
		}),
		$$new($ObjectArray, {
			$of("MXV"_s),
			$of("MXV"_s)
		}),
		$$new($ObjectArray, {
			$of("MYR"_s),
			$of("MYR"_s)
		}),
		$$new($ObjectArray, {
			$of("MZE"_s),
			$of("MZE"_s)
		}),
		$$new($ObjectArray, {
			$of("MZM"_s),
			$of("MZM"_s)
		}),
		$$new($ObjectArray, {
			$of("MZN"_s),
			$of("MZN"_s)
		}),
		$$new($ObjectArray, {
			$of("NAD"_s),
			$of("NAD"_s)
		}),
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of("NGN"_s)
		}),
		$$new($ObjectArray, {
			$of("NIC"_s),
			$of("NIC"_s)
		}),
		$$new($ObjectArray, {
			$of("NIO"_s),
			$of("NIO"_s)
		}),
		$$new($ObjectArray, {
			$of("NLG"_s),
			$of("NLG"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("NOK"_s)
		}),
		$$new($ObjectArray, {
			$of("NPR"_s),
			$of("NPR"_s)
		}),
		$$new($ObjectArray, {
			$of("OMR"_s),
			$of("OMR"_s)
		}),
		$$new($ObjectArray, {
			$of("PAB"_s),
			$of("PAB"_s)
		}),
		$$new($ObjectArray, {
			$of("PEI"_s),
			$of("PEI"_s)
		}),
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		}),
		$$new($ObjectArray, {
			$of("PES"_s),
			$of("PES"_s)
		}),
		$$new($ObjectArray, {
			$of("PGK"_s),
			$of("PGK"_s)
		}),
		$$new($ObjectArray, {
			$of("PHP"_s),
			$of("PHP"_s)
		}),
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("PKR"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("PLZ"_s),
			$of("PLZ"_s)
		}),
		$$new($ObjectArray, {
			$of("PTE"_s),
			$of("PTE"_s)
		}),
		$$new($ObjectArray, {
			$of("PYG"_s),
			$of("PYG"_s)
		}),
		$$new($ObjectArray, {
			$of("QAR"_s),
			$of("QAR"_s)
		}),
		$$new($ObjectArray, {
			$of("RHD"_s),
			$of("RHD"_s)
		}),
		$$new($ObjectArray, {
			$of("ROL"_s),
			$of("ROL"_s)
		}),
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of("RSD"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("RUR"_s),
			$of("RUR"_s)
		}),
		$$new($ObjectArray, {
			$of("RWF"_s),
			$of("RWF"_s)
		}),
		$$new($ObjectArray, {
			$of("SAR"_s),
			$of("SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("SBD"_s),
			$of("SBD"_s)
		}),
		$$new($ObjectArray, {
			$of("SCR"_s),
			$of("SCR"_s)
		}),
		$$new($ObjectArray, {
			$of("SDD"_s),
			$of("SDD"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of("SDG"_s)
		}),
		$$new($ObjectArray, {
			$of("SDP"_s),
			$of("SDP"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("SEK"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("SGD"_s)
		}),
		$$new($ObjectArray, {
			$of("SHP"_s),
			$of("SHP"_s)
		}),
		$$new($ObjectArray, {
			$of("SIT"_s),
			$of("SIT"_s)
		}),
		$$new($ObjectArray, {
			$of("SKK"_s),
			$of("SKK"_s)
		}),
		$$new($ObjectArray, {
			$of("SLL"_s),
			$of("SLL"_s)
		}),
		$$new($ObjectArray, {
			$of("SOS"_s),
			$of("SOS"_s)
		}),
		$$new($ObjectArray, {
			$of("SRD"_s),
			$of("SRD"_s)
		}),
		$$new($ObjectArray, {
			$of("SRG"_s),
			$of("SRG"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of("SSP"_s)
		}),
		$$new($ObjectArray, {
			$of("STD"_s),
			$of("STD"_s)
		}),
		$$new($ObjectArray, {
			$of("SUR"_s),
			$of("SUR"_s)
		}),
		$$new($ObjectArray, {
			$of("SVC"_s),
			$of("SVC"_s)
		}),
		$$new($ObjectArray, {
			$of("SYP"_s),
			$of("SYP"_s)
		}),
		$$new($ObjectArray, {
			$of("SZL"_s),
			$of("SZL"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"\u0e3f"_s)
		}),
		$$new($ObjectArray, {
			$of("TJR"_s),
			$of("TJR"_s)
		}),
		$$new($ObjectArray, {
			$of("TJS"_s),
			$of("TJS"_s)
		}),
		$$new($ObjectArray, {
			$of("TMM"_s),
			$of("TMM"_s)
		}),
		$$new($ObjectArray, {
			$of("TMT"_s),
			$of("TMT"_s)
		}),
		$$new($ObjectArray, {
			$of("TND"_s),
			$of("TND"_s)
		}),
		$$new($ObjectArray, {
			$of("TOP"_s),
			$of("TOP"_s)
		}),
		$$new($ObjectArray, {
			$of("TPE"_s),
			$of("TPE"_s)
		}),
		$$new($ObjectArray, {
			$of("TRL"_s),
			$of("TRL"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TRY"_s)
		}),
		$$new($ObjectArray, {
			$of("TTD"_s),
			$of("TTD"_s)
		}),
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TZS"_s)
		}),
		$$new($ObjectArray, {
			$of("UAH"_s),
			$of("UAH"_s)
		}),
		$$new($ObjectArray, {
			$of("UAK"_s),
			$of("UAK"_s)
		}),
		$$new($ObjectArray, {
			$of("UGS"_s),
			$of("UGS"_s)
		}),
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("UGX"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("USN"_s),
			$of("USN"_s)
		}),
		$$new($ObjectArray, {
			$of("USS"_s),
			$of("USS"_s)
		}),
		$$new($ObjectArray, {
			$of("UYI"_s),
			$of("UYI"_s)
		}),
		$$new($ObjectArray, {
			$of("UYP"_s),
			$of("UYP"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("UYU"_s)
		}),
		$$new($ObjectArray, {
			$of("UZS"_s),
			$of("UZS"_s)
		}),
		$$new($ObjectArray, {
			$of("VEB"_s),
			$of("VEB"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("VNN"_s),
			$of("VNN"_s)
		}),
		$$new($ObjectArray, {
			$of("VUV"_s),
			$of("VUV"_s)
		}),
		$$new($ObjectArray, {
			$of("WST"_s),
			$of("WST"_s)
		}),
		$$new($ObjectArray, {
			$of("XAG"_s),
			$of("XAG"_s)
		}),
		$$new($ObjectArray, {
			$of("XAU"_s),
			$of("XAU"_s)
		}),
		$$new($ObjectArray, {
			$of("XBA"_s),
			$of("XBA"_s)
		}),
		$$new($ObjectArray, {
			$of("XBB"_s),
			$of("XBB"_s)
		}),
		$$new($ObjectArray, {
			$of("XBC"_s),
			$of("XBC"_s)
		}),
		$$new($ObjectArray, {
			$of("XBD"_s),
			$of("XBD"_s)
		}),
		$$new($ObjectArray, {
			$of("XDR"_s),
			$of("XDR"_s)
		}),
		$$new($ObjectArray, {
			$of("XEU"_s),
			$of("XEU"_s)
		}),
		$$new($ObjectArray, {
			$of("XFO"_s),
			$of("XFO"_s)
		}),
		$$new($ObjectArray, {
			$of("XFU"_s),
			$of("XFU"_s)
		}),
		$$new($ObjectArray, {
			$of("XPD"_s),
			$of("XPD"_s)
		}),
		$$new($ObjectArray, {
			$of("XPT"_s),
			$of("XPT"_s)
		}),
		$$new($ObjectArray, {
			$of("XRE"_s),
			$of("XRE"_s)
		}),
		$$new($ObjectArray, {
			$of("XSU"_s),
			$of("XSU"_s)
		}),
		$$new($ObjectArray, {
			$of("XTS"_s),
			$of("XTS"_s)
		}),
		$$new($ObjectArray, {
			$of("XUA"_s),
			$of("XUA"_s)
		}),
		$$new($ObjectArray, {
			$of("XXX"_s),
			$of("XXX"_s)
		}),
		$$new($ObjectArray, {
			$of("YDD"_s),
			$of("YDD"_s)
		}),
		$$new($ObjectArray, {
			$of("YER"_s),
			$of("YER"_s)
		}),
		$$new($ObjectArray, {
			$of("YUD"_s),
			$of("YUD"_s)
		}),
		$$new($ObjectArray, {
			$of("YUM"_s),
			$of("YUM"_s)
		}),
		$$new($ObjectArray, {
			$of("YUN"_s),
			$of("YUN"_s)
		}),
		$$new($ObjectArray, {
			$of("YUR"_s),
			$of("YUR"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAL"_s),
			$of("ZAL"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("ZAR"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMK"_s),
			$of("ZMK"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("ZRN"_s),
			$of("ZRN"_s)
		}),
		$$new($ObjectArray, {
			$of("ZRZ"_s),
			$of("ZRZ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZWD"_s),
			$of("ZWD"_s)
		}),
		$$new($ObjectArray, {
			$of("ZWL"_s),
			$of("ZWL"_s)
		}),
		$$new($ObjectArray, {
			$of("ZWR"_s),
			$of("ZWR"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Peseta andorrana"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dir\u1e25am de los Emiratos \u00c1rabes Xun\u00edos"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afgan\u00ed afganistanu (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Afgan\u00ed afganistanu"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Lek alban\u00e9s (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Lek alban\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram armeniu"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Gu\u00edlder de les Antilles Neerlandeses"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza angolanu"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Kwanza angolanu (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Kwanza nuevu angolanu (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Kwanza angolanu reaxust\u00e1u (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Austral arxent\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Pesu Ley arxent\u00edn (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Pesu arxent\u00edn (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Pesu arxent\u00edn (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"pesu arxent\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Chel\u00edn austriacu"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"D\u00f3lar australianu"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Flor\u00edn arubanu"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Manat azerbaixanu (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manat azerbaixanu"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Dinar de Bosnia-Herzegovina (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("marcu convertible de Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Dinar nuevu de Bosnia-Herzegovina (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"D\u00f3lar barbadianu"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Taka bangladex\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Francu belga (convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Francu belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Francu belga (financieru)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Lev fuerte b\u00falgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"Lev socialista b\u00falgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Lev b\u00falgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Lev b\u00falgaru (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dinar ba\u1e25rein\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Francu burundianu"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"D\u00f3lar bermudianu"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"d\u00f3lar bruneyanu"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolivianu de Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Boliviano de Bolivia (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Pesu bolivianu"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivianos mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Cruzeiro nuevu brasilanu (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Cruzado brasilanu (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Cruzeiro brasilanu (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasilanu"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Cruzado nuevu brasilanu (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Cruzeiro brasilanu (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Cruzeiru brasilanu (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"D\u00f3lar baham\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Ngultrum butan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Kyat birmanu"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula botsuaniana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Rublu nuevu bielorrusu (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Rublu bielorrusu"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Rublu bielorrusu (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"D\u00f3lar belizianu"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"D\u00f3lar canadiense"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"francu congol\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("Euru WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("francu suizu"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("Francu WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of("Escudu chilenu"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"Unid\u00e1 de cuenta chilena (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("pesu chilenu"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"D\u00f3lar del Bancu Popular Chinu"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan chinu"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("pesu colombianu"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"Unid\u00e1 de valor real colombiana"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Col\u00f3n costarricanu"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Dinar serbiu (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("Corona fuerte checoslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Pesu cubanu convertible"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Pesu cubanu"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudu cabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Llibra xipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Corona checa"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Marcu d\u2019Alema\u00f1a Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Marcu alem\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Francu xibutianu"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("corona danesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Pesu dominicanu"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"dinar arxel\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Sucre ecuatorianu"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"Unid\u00e1 ecuatoriana de valor constante"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Corona estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("llibra exipciana"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakfa eritr\u00e9u"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Peseta espa\u00f1ola (cuenta A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"Peseta espa\u00f1ola (cuenta convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Peseta espa\u00f1ola"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Birr et\u00edope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Marcu finland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"d\u00f3lar fixanu"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("llibra malviniana"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Francu franc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("llibra esterlina"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Kupon larit xeorxanu"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari xeorxanu"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Cedi ghanianu (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("cedi ghanianu"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("llibra de Xibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambianu"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("francu guineanu"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("syli guineanu"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("Ekwele de Guinea Ecuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Dracma griegu"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal guatemalianu"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Escudo de Guinea portuguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Pesu de Guinea-Bis\u00e1u"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"d\u00f3lar guyan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"D\u00f3lar hongkon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira hondurana"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Dinar croata"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde haitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Forint h\u00fangaru"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupiah indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Llibra irlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Llibra israelina"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"Xequel israel\u00edn (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Xequel nuevu israel\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupia india"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Dinar iraqu\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Rial iran\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"Corona islandesa (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("corona islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Llira italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"D\u00f3lar xamaicanu"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinar xordanu"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yen xapon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shilling kenianu"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Som kirguistan\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel camboyanu"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Francu comoranu"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Won norcoreanu"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"Hwan surcoreanu (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"Won surcoreanu (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Won surcoreanu"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinar kuwaitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"d\u00f3lar caiman\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Tenge kazaquistan\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laosianu"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Llibra libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupia de Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"d\u00f3lar liberianu"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti de Lesothu"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litas lituanu"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Talonas lituanu"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Francu convertible luxemburgu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Francu luxemburgu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Francu financieru luxemburgu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Lats let\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"Rublu let\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libiu"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dir\u1e25am marroqu\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"francu marroqu\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("Francu monegascu"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"Cup\u00f3n moldavu"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leu moldavu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Francu malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Denar macedoniu"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Denar macedoniu (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Francu malianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Pataca de Mac\u00e1u"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya mauritanu (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya mauritanu"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Llira maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Llibra maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupia mauriciana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"Rupia maldiviana (1947\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa maldiviana"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha malauianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Pesu mexicanu"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Pesu de plata mexicanu (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"Unid\u00e1 d\u2019inversi\u00f3n mexicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malasiu"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Escudu mozambicanu"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metical mozambicanu (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Metical mozambicanu"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"D\u00f3lar namibianu"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nixeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"C\u00f3rdoba nicaraguanu (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"C\u00f3rdoba nicaraguanu"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Flor\u00edn neerland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("corona noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupia nepalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"d\u00f3lar neozeland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Rial omanianu"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa panamiegu"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Inti peruanu"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol peruanu"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Sol peruanu (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina papuana"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"pesu filip\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupia paquistanina"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloty polacu"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Zloty polacu (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Escudu portugu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"guaran\u00ed paraguayu"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Rial qatar\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"D\u00f3lar rodesianu"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Leu rumanu (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Leu rumanu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbiu"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rublu rusu"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Rublu rusu (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Francu ruand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"d\u00f3lar salomon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia seixelesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"dinar sudan\u00e9s (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("llibra sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"llibra sudanesa (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("corona sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"d\u00f3lar singapuranu"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("llibra de Santa Lena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Tolar eslovenu"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Corona eslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"leone sierralleon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Shilling somal\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"d\u00f3lar surinam\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"Flor\u00edn surinam\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("llibra sursudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra de Santu Tom\u00e9 y Pr\u00edncipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra de Santu Tom\u00e9 y Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Rublu sovi\u00e9ticu"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Col\u00f3n salvadorianu"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Llibra siria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Lilangeni suaziland\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tailand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Rublu taxiquistan\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Somoni taxiquistan\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Manat turcomanu (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manat turcomanu"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"dinar tunec\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa\u02bbanga tonganu"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Escudu timor\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Llira turca (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Llira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"d\u00f3lar de Trinid\u00e1 y Tobagu"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"D\u00f3lar nuevu taiwan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shilling tanzanianu"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Grivna ucra\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Karbovanets ucra\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Shilling ugand\u00e9s (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Shilling ugand\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"D\u00f3lar estaunidense"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"D\u00f3lar d\u2019EE.XX. (d\u00eda siguiente)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"D\u00f3lar d\u2019EE.XX. (mesmu d\u00eda)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Pesu uruguayu (Unidaes indexaes)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Pesu uruguayu (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("pesu uruguayu"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Som uzbequistan\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Bol\u00edvar venezolanu (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bol\u00edvar venezolanu (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bol\u00edvar venezolanu"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"dong vietnam\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Dong vietnam\u00edn (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu vanuatuanu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoanu"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Francu CFA centroafricanu"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Plata"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Oru"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Unid\u00e1 Compuesta Europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Unid\u00e1 monetaria europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Unid\u00e1 de cuenta europea (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Unid\u00e1 de cuenta europea (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"d\u00f3lar del Caribe Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Drechos especiales de xiru"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Unid\u00e1 de divisa europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Francu oru franc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Francu UIC franc\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("francu CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Paladiu"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("francu CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"Plat\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("Fondos RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"C\u00f3digu monetariu de prueba"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of(u"unid\u00e1 de cuenta ADB"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Divisa desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Dinar yemen\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Rial yemen\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Dinar fuerte yugoslavu (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Dinar nuevu yugoslavu (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Dinar convertible yugoslavu (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"Dinar reform\u00e1u yugoslavu (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("Rand sudafricanu (financieru)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand sudafricanu"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha zambianu (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha zambianu"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zaire nuevu zairiegu (1993\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Zaire zairiegu (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"D\u00f3lar zimbabuanu (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"D\u00f3lar zimbabuanu (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"D\u00f3lar zimbabuanu (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ast::CurrencyNames_ast() {
}

$Class* CurrencyNames_ast::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ast, name, initialize, &_CurrencyNames_ast_ClassInfo_, allocate$CurrencyNames_ast);
	return class$;
}

$Class* CurrencyNames_ast::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun