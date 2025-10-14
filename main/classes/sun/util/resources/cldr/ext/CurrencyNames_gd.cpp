#include <sun/util/resources/cldr/ext/CurrencyNames_gd.h>

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

$MethodInfo _CurrencyNames_gd_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_gd::*)()>(&CurrencyNames_gd::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_gd_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_gd",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_gd_MethodInfo_
};

$Object* allocate$CurrencyNames_gd($Class* clazz) {
	return $of($alloc(CurrencyNames_gd));
}

void CurrencyNames_gd::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_gd::getContents() {
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
			$of("ALK"_s),
			$of("ALK"_s)
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
			$of("CNH"_s),
			$of("CNH"_s)
		}),
		$$new($ObjectArray, {
			$of("CNX"_s),
			$of("CNX"_s)
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
			$of("ILR"_s),
			$of("ILR"_s)
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
			$of("ISJ"_s),
			$of("ISJ"_s)
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
			$of("MRU"_s),
			$of("MRU"_s)
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
			$of("MVP"_s),
			$of("MVP"_s)
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
			$of("STN"_s),
			$of("STN"_s)
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
			$of("VES"_s),
			$of("VES"_s)
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
			$of("Peseta Andorrach"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham nan Iomaratan Arabach Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afghani Afghanach (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghani Afghanach"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Lek Alb\u00e0ineach (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Lek Alb\u00e0ineach"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram Airmeineach"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Gulden Eileanan Aintilia nan T\u00ecrean \u00ccsle"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwanza Ang\u00f2lach"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Kwanza Ang\u00f2lach (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Kwanza \u00f9r Ang\u00f2lach (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Kwanza ath-ghleusaichte Ang\u00f2lach (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Austral Argantaineach"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Peso ley Argantaineach (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Peso Argantaineach (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Peso Argantaineach (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso Argantaineach"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("Schilling Ostaireach"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dolar Astr\u00e0ilianach"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Florin Ar\u00f9bach"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Manat Asarbaide\u00e0nach (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Manat Asarbaide\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Dinar Bhosna agus Hearsagobhana (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Mark iompachail Bhosna agus Hearsagobhana"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Dinar \u00f9r Bhosna agus Hearsagobhana (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Dolar Barbadach"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka Bangladaiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Franc Beilgeach (iompachail)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Franc Beilgeach"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Franc Beilgeach (ionmhasail)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Lev cruaidh Bulgarach"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"Lev s\u00f2isealach Bulgarach"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Lev Bulgarach"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Lev Bulgarach (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinar Bachraineach"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franc Burundaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Dolar Bearm\u00f9dach"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Dolar Br\u00f9naigheach"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano Boilibhiach"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Boliviano Boilibhiach (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Peso Boilibhiach"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Mvdol Boilibhiach"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Cruzeiro \u00f9r Braisileach (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Cruzado Braisileach (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Cruzeiro Braisileach (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Braisileach"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Cruzado \u00f9r Braisileach (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Cruzeiro Braisileach (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Cruzeiro Braisileach (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Dolar Bathamach"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Ngultrum But\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Kyat Burmach"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula Botsuanach"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"R\u00f9bal \u00f9r Bealaruiseach (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"R\u00f9bal Bealaruiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"R\u00f9bal Bealaruiseach (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Dolar Beil\u00ecseach"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dolar Canadach"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Franc Congothach"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"E\u00f2ro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Franc Eilbheiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("Franc WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of("Escudo Sileach"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Aonad cunntasachd Sileach (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso Sileach"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Yuan S\u00ecneach (far-th\u00ecreach)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"Dolar an t-sluagh-bhanca Sh\u00ecnich"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuan S\u00ecneach"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso Coloimbeach"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"Aonad f\u00ecor-luach Coloimbeach"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Col\u00f3n Costa R\u00ecceach"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Dinar S\u00e8irbeach (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Koruna cruaidh Seic-Sl\u00f2bhacach"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Peso iompachail C\u00f9bach"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Peso C\u00f9bach"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Escudo a\u2019 Chip Uaine"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Punnd C\u00ecoprasach"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Koruna Seiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("Mark na Gearmailte an Ear"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("Mark Gearmailteach"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Franc Diob\u00f9taidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Krone Danmhairgeach"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso Doiminiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar Aildireach"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Sucre Eacuadorach"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Aonad luach chunbhalaich Eacuadorach"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Kroon Eastoineach"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Punnd \u00c8ipheiteach"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa Eartrach"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Peseta Sp\u00e0innteach (cunntas A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"Peseta Sp\u00e0innteach (cunntas iompachail)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Peseta Sp\u00e0innteach"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birr Itiopach"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"E\u00f2ro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Markka Fionnlannach"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Dolar F\u00ecditheach"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Punnd F\u00e0clannach"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Franc Frangach"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Punnd Sasannach"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Kupon larit Cairtbheileach"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari Cairtbheileach"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Cedi G\u00e0nach (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Cedi G\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Punnd Diobraltarach"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Gaimbitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Franc Ginitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Syli Ginitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("Ekwele Gini Meadhan-Chriosaich"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Drachma Greugach"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal Guatamalach"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Escudo Gini na Portagaile"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Peso Gini-Biosothach"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Dolar Guidhe\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Dolar Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Lempira Hond\u00f9rach"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Dinar Cr\u00f2thaiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Kuna Cr\u00f2thaiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde Haidhteach"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Forint Ungaireach"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rupiah Innd-Innseach"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Punnd \u00c8ireannach"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Punnd Iosraeleach"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"Sheqel Iosraeleach (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Sheqel \u00f9r Iosraeleach"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupee Innseanach"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Dinar Ior\u00e0cach"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Rial Ior\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"Kr\u00f3na Innis T\u00ecleach (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Kr\u00f3na Innis T\u00ecleach"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Lira Eadailteach"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Dolar Diameugach"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"Dinar I\u00f2rdanach"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Seapanach"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shilling Ceineach"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Som C\u00ecorgasach"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel Cambuideach"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franc Comorosach"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Won Choir\u00e8a a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"Hwan Choir\u00e8a a Deas (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"Won Choir\u00e8a a Deas (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Won Choir\u00e8a a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Dinar Cuibh\u00e8iteach"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Dolar Caimeanach"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge Casachach"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Kip L\u00e0thosach"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Punnd Leabanach"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupee Sri Lancach"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dolar Lib\u00e8ireach"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti Leasotach"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litas Liotuaineach"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Talonas Liotuaineach"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("Franc iompachail Lugsamburgach"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Franc Lugsamburgach"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("Franc ionmhasail Lugsamburgach"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lats Laitbheach"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"R\u00f9bal Laitbheach"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinar Libitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham Morocach"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Franc Morocach"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("Franc Monacach"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of("Cupon Moldobhach"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leu Moldobhach"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary Madagasgarach"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Franc Madagasgarach"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Denar Masadonach"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Denar Masadonach (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Franc M\u00e0ilitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Kyat Mi\u00e0nmarach"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik Mongolach"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Pataca Mac\u00e0thuach"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya Morat\u00e0ineach (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ouguiya Morat\u00e0ineach"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Lira Maltach"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Punnd Maltach"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupee Moiriseasach"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of("Rupee Maladaibheach"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa Maladaibheach"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha Malabhaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso Meagsagach"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Peso airgid Meagsagach (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Aonad inbheistidh Meagsagach"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit Malaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Escudo M\u00f2saimbiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metical M\u00f2saimbiceach (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Metical M\u00f2saimbiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dolar Naimibitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Naira Nig\u00e8iriach"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"C\u00f3rdoba Niocaragach (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"C\u00f3rdoba Niocaragach"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Gulden Duitseach"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Krone Nirribheach"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Rupee Neap\u00e0lach"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Dolar Shealainn Nuaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Rial Om\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa Panamach"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"Inti Pear\u00f9thach"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Sol Pear\u00f9thach"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Sol Pear\u00f9thach (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina Ghini Nuaidh Paputhaiche"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Peso Filipineach"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Rupee Pagast\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Z\u0142oty P\u00f2lainneach"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Z\u0142oty P\u00f2lainneach (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Escudo Portagaileach"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Guaran\u00ed Paraguaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Rial Catarach"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("Dolar Rhodesiach"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Leu Rom\u00e0ineach (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Leu Rom\u00e0ineach"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Dinar S\u00e8irbeach"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"R\u00f9bal Ruiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"R\u00f9bal Ruiseach (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Franc Rubhandach"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal Sabhdach"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Dolar Eileanan Sholaimh"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupee Seiseallach"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Dinar Sud\u00e0nach (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Punnd Sud\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Punnd Sud\u00e0nach (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Krona Suaineach"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Dolar Singeap\u00f2rach"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Punnd Eilean Naomh Eilidh"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Tolar Sl\u00f2bhaineach"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Koruna Sl\u00f2bhacach"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Leone Siarra Le\u00f2mhannach"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Shilling Som\u00e0ilitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Dolar Suranamach"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Gulden Suranamach"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Punnd Sud\u00e0in a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra S\u00e3o Tom\u00e9 agus Pr\u00edncipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobra S\u00e3o Tom\u00e9 agus Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"R\u00f9bal Sovietach"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Col\u00f3n Salbhadorach"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Punnd Siridheach"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Suasaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Baht T\u00e0idheach"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"R\u00f9bal Taidigeach"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni Taidigeach"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Manat Turcmanach (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manat Turcmanach"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar Tuiniseach"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Pa\u02bbanga Tongach"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Escudo T\u00ecomorach"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Lira Turcach (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Lira Turcach"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Dolar Thrianaid agus Thobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Dolar \u00f9r Taidh-Bh\u00e0nach"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shilling Tansanaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Hryvnia Ucr\u00e0ineach"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Karbovanets Ucr\u00e0ineach"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Shilling Ugandach (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shilling Ugandach"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dolar nan St\u00e0itean Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"Dolar nan SA (an ath\u2013latha)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("Dolar nan SA (an aon latha)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Peso Uruguaidheach (aonadan inneacsaichte)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Peso Uruguaidheach (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso Uruguaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("uyw"_s),
			$of("Aonad inneacs tuarastail ainmeach Uruguaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Som Usbagach"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Bol\u00edvar Bheinisealach (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bol\u00edvar Bheinisealach (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Bol\u00edvar Bheinisealach"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong Bhiet-Namach"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Dong Bhiet-Namach (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu Vanuatuthach"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala Samothach"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Franc CFA Meadhan-Afragach"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Airgead"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u00d2r"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Aonad co-dh\u00e8anta E\u00f2rpach"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Aonad airgid E\u00f2rpach"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Aonad cunntasachd E\u00f2rpach (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Aonad cunntasachd E\u00f2rpach (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Dolar Caraibeach earach"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"C\u00f2ir tarraing sh\u00f2nraichte"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Aonad airgeadra E\u00f2rpach"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Franc \u00f2ir Frangach"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Franc UIC Frangach"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Franc CFA Afraga an Iar"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Pallaideam"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platanam"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("Aonad maoine RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"C\u00f2d airgeadra fo dheuchainn"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of("Aonad cunntasachd ADB"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Airgeadra neo-aithnichte"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Dinar Eamanach"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Rial Eamanach"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Dinar cruaidh I\u00f9goslabhach (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Dinar \u00f9r I\u00f9goslabhach (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Dinar iompachail I\u00f9goslabhach (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"Dinar ath-leasaichte I\u00f9goslabhach (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("Rand Afraga a Deas (ionmhasail)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand Afraga a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha S\u00e0imbitheach (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwacha S\u00e0imbitheach"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Za\u00efre \u00f9r Za\u00efreach (1993\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Za\u00efre Za\u00efreach (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dolar S\u00ecombabuthach (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Dolar S\u00ecombabuthach (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Dolar S\u00ecombabuthach (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_gd::CurrencyNames_gd() {
}

$Class* CurrencyNames_gd::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_gd, name, initialize, &_CurrencyNames_gd_ClassInfo_, allocate$CurrencyNames_gd);
	return class$;
}

$Class* CurrencyNames_gd::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun