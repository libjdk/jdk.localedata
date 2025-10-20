#include <sun/util/resources/cldr/ext/CurrencyNames_sk.h>

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

$MethodInfo _CurrencyNames_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sk::*)()>(&CurrencyNames_sk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sk_MethodInfo_
};

$Object* allocate$CurrencyNames_sk($Class* clazz) {
	return $of($alloc(CurrencyNames_sk));
}

void CurrencyNames_sk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sk::getContents() {
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
			$of("AUD"_s),
			$of("AUD"_s)
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
			$of("BRL"_s),
			$of("BRL"_s)
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
			$of("CAD"_s),
			$of("CAD"_s)
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
			$of("CNY"_s),
			$of("CNY"_s)
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
			$of("GBP"_s),
			$of("GBP"_s)
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
			$of("HKD"_s),
			$of("HKD"_s)
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
			$of("ILS"_s),
			$of("NIS"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of("INR"_s)
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
			$of("JPY"_s),
			$of("JPY"_s)
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
			$of("KRW"_s),
			$of("KRW"_s)
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
			$of("NZD"_s),
			$of("NZD"_s)
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
			$of("THB"_s)
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
			$of("TWD"_s),
			$of("TWD"_s)
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
			$of("USD"_s)
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
			$of("VND"_s),
			$of("VND"_s)
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
			$of(u"andorrsk\u00e1 peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("SAE dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgansk\u00fd afg\u00e1n\u00ed (1927 \u2013 2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afgansk\u00fd afg\u00e1n\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"alb\u00e1nsky lek (1946 \u2013 1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"alb\u00e1nsky lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"arm\u00e9nsky dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"antilsk\u00fd gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"angolsk\u00e1 kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"angolsk\u00e1 kwanza (1977 \u2013 1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"angolsk\u00e1 nov\u00e1 kwanza (1990 \u2013 2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"angolsk\u00e1 upraven\u00e1 kwanza (1995 \u2013 1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"argent\u00ednsky austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"argent\u00ednske peso ley (1970 \u2013 1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"argent\u00ednske peso (1881 \u2013 1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"argent\u00ednske peso (1983 \u2013 1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"argent\u00ednske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"rak\u00fasky \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"austr\u00e1lsky dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"arubsk\u00fd gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"azerbajd\u017eansk\u00fd manat (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"azerbajd\u017eansk\u00fd manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"bosniansko-hercegovinsk\u00fd din\u00e1r (1992 \u2013 1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"bosniansko-hercegovinsk\u00e1 konvertibiln\u00e1 marka"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"bosniansko-hercegovinsk\u00fd nov\u00fd din\u00e1r (1994 \u2013 1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"barbadosk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"banglad\u00e9\u0161ska taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"belgick\u00fd frank (konvertibiln\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"belgick\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"belgick\u00fd frank (finan\u010dn\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"bulharsk\u00fd tvrd\u00fd lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"bulharsk\u00fd socialistick\u00fd lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"bulharsk\u00fd lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"bulharsk\u00fd lev (1879 \u2013 1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"bahrajnsk\u00fd din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"burundsk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"bermudsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"brunejsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"bol\u00edvijsk\u00e9 boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"bol\u00edvijsk\u00e9 boliviano (1863 \u2013 1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"bol\u00edvijsk\u00e9 peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"bol\u00edvijsk\u00e9 MVDOL"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"braz\u00edlske nov\u00e9 cruzeiro (1967 \u2013 1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"braz\u00edlske cruzado (1986 \u2013 1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"braz\u00edlske cruzeiro (1990 \u2013 1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"braz\u00edlsky real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"braz\u00edlske nov\u00e9 cruzado (1989 \u2013 1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Braz\u00edlske cruzeiro"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"braz\u00edlske cruzeiro (1942 \u2013 1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"bahamsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"bhut\u00e1nsky ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"barmsk\u00fd kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"botswansk\u00e1 pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"bielorusk\u00fd rube\u013e (1994 \u2013 1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"bielorusk\u00fd rube\u013e"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"bielorusk\u00fd rube\u013e (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"belizsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"kanadsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"kon\u017esk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u0161vaj\u010diarske WIR euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0161vaj\u010diarsky frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"\u0161vaj\u010diarsky WIR frank"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"\u010dilsk\u00e9 escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u010dilsk\u00e1 \u00fa\u010dtovn\u00e1 jednotka (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u010dilsk\u00e9 peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u010d\u00ednsky j\u00fcan (pobre\u017en\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"\u010d\u00ednsky dol\u00e1r \u010c\u013dB"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u010d\u00ednsky j\u00fcan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"kolumbijsk\u00e9 peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"kolumbijsk\u00e1 jednotka re\u00e1lnej hodnoty"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"kostarick\u00fd col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"srbsk\u00fd din\u00e1r (2002 \u2013 2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u010deskoslovensk\u00e1 koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"kub\u00e1nske konvertibiln\u00e9 peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"kub\u00e1nske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"kapverdsk\u00e9 escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"cypersk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u010desk\u00e1 koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"v\u00fdchodonemeck\u00e1 marka"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"nemeck\u00e1 marka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"d\u017eibutsk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"d\u00e1nska koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"dominik\u00e1nske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"al\u017e\u00edrsky din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"ekv\u00e1dorsk\u00fd sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"ekv\u00e1dorsk\u00e1 jednotka kon\u0161tantnej hodnoty"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"est\u00f3nska koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"egyptsk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"eritrejsk\u00e1 nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0161panielska peseta (\u00fa\u010det A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0161panielska peseta (konvertibiln\u00fd \u00fa\u010det)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0161panielska peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"eti\u00f3psky birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"f\u00ednska marka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"fid\u017eijsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"falklandsk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"franc\u00fazsky frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"britsk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"gruz\u00ednske kup\u00f3nov\u00e9 lari"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"gruz\u00ednske lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ghansk\u00e9 cedi (1979 \u2013 2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ghansk\u00e9 cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"gibralt\u00e1rska libra"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"gambijsk\u00e9 dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"guinejsk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"guinejsk\u00e9 syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"rovn\u00edkovoguinejsk\u00fd ekwele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"gr\u00e9cka drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"guatemalsk\u00fd quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"portugalsko-guinejsk\u00e9 escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"guinejsko-bissausk\u00e9 peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"guyansk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"hongkonsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"hondurask\u00e1 lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"chorv\u00e1tsky din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"chorv\u00e1tska kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"haitsk\u00e9 gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"ma\u010farsk\u00fd forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"indon\u00e9zska rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u00edrska libra"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"izraelsk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"izraelsk\u00fd \u0161ekel (1980 \u2013 1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"izraelsk\u00fd \u0161ekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"indick\u00e1 rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"irack\u00fd din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ir\u00e1nsky rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"islandsk\u00e1 koruna (1918 \u2013 1981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"islandsk\u00e1 koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"talianska l\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"jamajsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"jord\u00e1nsky din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"japonsk\u00fd jen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"kensk\u00fd \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"kirgizsk\u00fd som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"kambod\u017esk\u00fd riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"komorsk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"severok\u00f3rejsk\u00fd won"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"juhok\u00f3rejsk\u00fd hwan (1953 \u2013 1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"juhok\u00f3rejsk\u00fd won (1945 \u2013 1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"juhok\u00f3rejsk\u00fd won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"kuvajtsk\u00fd din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"kajmansk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"kaza\u0161sk\u00e9 tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"laosk\u00fd kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"libanonsk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"sr\u00edlansk\u00e1 rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"lib\u00e9rijsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"lesothsk\u00fd loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"litovsk\u00fd litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"litovsk\u00fd talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"luxembursk\u00fd frank (konvertibiln\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"luxembursk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"luxembursk\u00fd frank (finan\u010dn\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"loty\u0161sk\u00fd lat"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"loty\u0161sk\u00fd rube\u013e"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"l\u00edbyjsk\u00fd din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"marock\u00fd dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"marock\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"monack\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"moldavsk\u00fd kup\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"moldavsk\u00fd lei"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"malga\u0161sk\u00fd ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"madagaskarsk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"maced\u00f3nsky den\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"maced\u00f3nsky den\u00e1r (1992 \u2013 1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"malijsk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"mjanmarsk\u00fd kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"mongolsk\u00fd tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"macajsk\u00e1 pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"maurit\u00e1nska ukija (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"maurit\u00e1nska ukija"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"maltsk\u00e1 l\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"maltsk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"maur\u00edcijsk\u00e1 rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"maldivsk\u00e1 rupia (1947 \u2013 1981)"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"maldivsk\u00e1 rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"malawijsk\u00e1 kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"mexick\u00e9 peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"mexick\u00e9 strieborn\u00e9 peso (1861 \u2013 1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"mexick\u00e1 investi\u010dn\u00e1 jednotka"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"malajzijsk\u00fd ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"mozambick\u00e9 escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"mozambick\u00fd metical (1980 \u2013 2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mozambick\u00fd metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"nam\u00edbijsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"nig\u00e9rijsk\u00e1 naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"nikaragujsk\u00e1 c\u00f3rdoba (1988 \u2013 1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nikaragujsk\u00e1 c\u00f3rdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"holandsk\u00fd gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"n\u00f3rska koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"nep\u00e1lska rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"novoz\u00e9landsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"om\u00e1nsky rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"panamsk\u00e1 balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"peru\u00e1nsky inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"peru\u00e1nsky sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"peru\u00e1nsky sol (1863 \u2013 1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"papu\u00e1nska kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"filip\u00ednske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"pakistansk\u00e1 rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"po\u013esk\u00fd zlot\u00fd"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"po\u013esk\u00fd zlot\u00fd (1950 \u2013 1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"portugalsk\u00e9 escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"paraguajsk\u00e9 guaran\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"katarsk\u00fd rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"rod\u00e9zsky dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"rumunsk\u00fd lei (1952 \u2013 2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rumunsk\u00fd lei"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"srbsk\u00fd din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"rusk\u00fd rube\u013e"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"rusk\u00fd rube\u013e (1991 \u2013 1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"rwandsk\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"saudskoarabsk\u00fd rial"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0161alam\u00fansky dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"seychelsk\u00e1 rupia"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"sud\u00e1nsky din\u00e1r (1992 \u2013 2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"sud\u00e1nska libra"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"sud\u00e1nska libra (1957 \u2013 1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0161v\u00e9dska koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"singapursk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"sv\u00e4tohelensk\u00e1 libra"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"slovinsk\u00fd toliar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"slovensk\u00e1 koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"sierraleonsk\u00fd leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"som\u00e1lsky \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"surinamsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"surinamsk\u00fd zlat\u00fd"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"juhosud\u00e1nska libra"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"sv\u00e4totom\u00e1\u0161ska dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"sv\u00e4totom\u00e1\u0161ska dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"sovietsky rube\u013e"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"salv\u00e1dorsk\u00fd col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"s\u00fdrska libra"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"svazijsk\u00e9 lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"thajsk\u00fd baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"tad\u017eick\u00fd rube\u013e"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"tad\u017eick\u00e9 somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"turkm\u00e9nsky manat (1993 \u2013 2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"turkm\u00e9nsky manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"tunisk\u00fd din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tongsk\u00e1 pa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"timorsk\u00e9 escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"tureck\u00e1 l\u00edra (1922 \u2013 2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"tureck\u00e1 l\u00edra"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"trinidadsko-toba\u017esk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nov\u00fd taiwansk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"tanz\u00e1nsky \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"ukrajinsk\u00e1 hrivna"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"ukrajinsk\u00fd karbovanec"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"ugandsk\u00fd \u0161iling (1966 \u2013 1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ugandsk\u00fd \u0161iling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"americk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"americk\u00fd dol\u00e1r (\u010fal\u0161\u00ed de\u0148)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"americk\u00fd dol\u00e1r (rovnak\u00fd de\u0148)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"uruguajsk\u00e9 peso (v indexovan\u00fdch jednotk\u00e1ch)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"uruguajsk\u00e9 peso (1975 \u2013 1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"uruguajsk\u00e9 peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"uzbeck\u00fd sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"venezuelsk\u00fd bol\u00edvar (1871 \u2013 2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelsk\u00fd bol\u00edvar (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"venezuelsk\u00fd bol\u00edvar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"vietnamsk\u00fd dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"vietnamsk\u00fd dong (1978 \u2013 1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"vanuatsk\u00e9 vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"samojsk\u00e1 tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"stredoafrick\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("striebro"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("zlato"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"eur\u00f3pska zmie\u0161an\u00e1 jednotka"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"eur\u00f3pska pe\u0148a\u017en\u00e1 jednotka"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"eur\u00f3pska jednotka \u00fa\u010dtu 9 (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"eur\u00f3pska jednotka \u00fa\u010dtu 17 (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"v\u00fdchodokaribsk\u00fd dol\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("SDR"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"eur\u00f3pska menov\u00e1 jednotka"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"franc\u00fazsky zlat\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"franc\u00fazsky UIC frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"z\u00e1padoafrick\u00fd frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"pal\u00e1dium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("fondy RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"k\u00f3d testovacej meny"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of(u"jednotka \u00fa\u010dtu ADB"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"nezn\u00e1ma mena"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"jemensk\u00fd din\u00e1r"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"jemensk\u00fd rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Juhosl\u00e1vsky din\u00e1r [YUD]"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"juhoslovansk\u00fd nov\u00fd din\u00e1r (1994 \u2013 2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"juhoslovansk\u00fd konvertibiln\u00fd din\u00e1r (1990 \u2013 1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"juhoslovansk\u00fd reformovan\u00fd din\u00e1r (1992 \u2013 1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"juhoafrick\u00fd rand (finan\u010dn\u00fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"juhoafrick\u00fd rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"zambijsk\u00e1 kwacha (1968 \u2013 2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"zambijsk\u00e1 kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"zairsk\u00fd nov\u00fd zaire (1993 \u2013 1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"zairsk\u00fd zaire (1971 \u2013 1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"zimbabwiansky dol\u00e1r (1980 \u2013 2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"zimbabwiansky dol\u00e1r (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"zimbabwiansky dol\u00e1r (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_sk::CurrencyNames_sk() {
}

$Class* CurrencyNames_sk::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sk, name, initialize, &_CurrencyNames_sk_ClassInfo_, allocate$CurrencyNames_sk);
	return class$;
}

$Class* CurrencyNames_sk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun