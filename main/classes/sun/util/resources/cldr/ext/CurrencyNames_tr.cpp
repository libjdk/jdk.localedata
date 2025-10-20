#include <sun/util/resources/cldr/ext/CurrencyNames_tr.h>

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

$MethodInfo _CurrencyNames_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_tr::*)()>(&CurrencyNames_tr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_tr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tr_MethodInfo_
};

$Object* allocate$CurrencyNames_tr($Class* clazz) {
	return $of($alloc(CurrencyNames_tr));
}

void CurrencyNames_tr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tr::getContents() {
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
			$of("AU$"_s)
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
			$of("GRD"_s),
			$of("GRD"_s)
		}),
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("GTQ"_s)
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
			$of("MKD"_s),
			$of("MKD"_s)
		}),
		$$new($ObjectArray, {
			$of("MKN"_s),
			$of("MKN"_s)
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
			$of("SDG"_s),
			$of("SDG"_s)
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
			$of(u"\u20ba"_s)
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
			$of("XEU"_s),
			$of("XEU"_s)
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
			$of("ZWR"_s),
			$of("ZWR"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"Andorra Pezetas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Birle\u015fik Arap Emirlikleri Dirhemi"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afganistan Afganisi (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afganistan Afganisi"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Arnavutluk Leki (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Arnavutluk Leki"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Ermenistan Dram\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Hollanda Antilleri Guldeni"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Angola Kvanzas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angola Kvanzas\u0131 (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Yeni Angola Kvanzas\u0131 (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angola Kvanzas\u0131 Reajustado (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Arjantin Australi"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Arjantin Peso Leyi (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Arjantin Pesosu (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Arjantin Pezosu (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Arjantin Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Avusturya \u015eilini"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Avustralya Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruba Florini"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Azerbaycan Manat\u0131 (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Azerbaycan Manat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Bosna Hersek Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Konvertibl Bosna Hersek Mark\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Yeni Bosna Hersek Dinar\u0131 (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Barbados Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Banglade\u015f Takas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Bel\u00e7ika Frang\u0131 (konvertibl)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Bel\u00e7ika Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Bel\u00e7ika Frang\u0131 (finansal)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Bulgar Levas\u0131 (Hard)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"Sosyalist Bulgaristan Levas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Bulgar Levas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Bulgar Levas\u0131 (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Bahreyn Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Burundi Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Bermuda Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Brunei Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolivya Bolivyanosu"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Bolivya Bolivyanosu (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Bolivya Pezosu"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivya Mvdolu"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Yeni Brezilya Kruzeirosu (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("Brezilya Kruzadosu"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brezilya Kruzeirosu (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brezilya Reali"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("Yeni Brezilya Kruzadosu"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("Brezilya Kruzeirosu"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Brezilya Kruzeirosu (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Bahama Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Butan Ngultrumu"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Burma Kyat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Botsvana Pulas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Yeni Beyaz Rusya Rublesi (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarus Rublesi"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Beyaz Rusya Rublesi (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Belize Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Kanada Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Kongo Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR Avrosu"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0130svi\u00e7re Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"\u015eili Esk\u00fcdosu"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u015eili Unidades de Fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u015eili Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u00c7in Yuan\u0131 (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"\u00c7in Halk Cumhuriyeti Merkez Bankas\u0131 Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u00c7in Yuan\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Kolombiya Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Unidad de Valor Real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Kosta Rika Kolonu"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Eski S\u0131rbistan Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u00c7ekoslavak Korunas\u0131 (Hard)"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Konvertibl K\u00fcba Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"K\u00fcba Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Cape Verde Esk\u00fcdosu"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"G\u00fcney K\u0131br\u0131s Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u00c7ek Korunas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Do\u011fu Alman Mark\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Alman Mark\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Cibuti Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Danimarka Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominik Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Cezayir Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ekvador Sukresi"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Ekvador Unidad de Valor Constante (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Estonya Krunu"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"M\u0131s\u0131r Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Eritre Nakfas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0130spanyol Pezetas\u0131 (A hesab\u0131)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0130spanyol Pezetas\u0131 (konvertibl hesap)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0130spanyol Pezetas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Etiyopya Birri"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Fin Markkas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Fiji Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Falkland Adalar\u0131 Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Frans\u0131z Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u0130ngiliz Sterlini"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"G\u00fcrcistan Kupon Larisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"G\u00fcrcistan Larisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Gana Sedisi (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Gana Sedisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Cebelitar\u0131k Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambiya Dalasisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Gine Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Gine Sylisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("Ekvator Ginesi Ekuelesi"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Yunan Drahmisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Guatemala Quetzal\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Portekiz Ginesi Esk\u00fcdosu"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Gine-Bissau Pezosu"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Guyana Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Hong Kong Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Honduras Lempiras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"H\u0131rvatistan Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"H\u0131rvatistan Kunas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Haiti Gurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Macar Forinti"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Endonezya Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0130rlanda Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0130srail Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"\u0130srail \u015eekeli (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Yeni \u0130srail \u015eekeli"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Hindistan Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Irak Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0130ran Riyali"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"\u0130zlanda Kronu (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0130zlanda Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0130talyan Lireti"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Jamaika Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u00dcrd\u00fcn Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japon Yeni"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Kenya \u015eilini"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"K\u0131rg\u0131zistan Somu"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Kambo\u00e7ya Rieli"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Komorlar Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Kuzey Kore Wonu"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"G\u00fcney Kore Hwan\u0131 (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"G\u00fcney Kore Wonu (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"G\u00fcney Kore Wonu"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Kuveyt Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Cayman Adalar\u0131 Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Kazakistan Tengesi"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laos Kipi"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"L\u00fcbnan Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Sri Lanka Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Liberya Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesotho Lotisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Litvanya Litas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Litvanya Talonu"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Konvertibl L\u00fcksemburg Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"L\u00fcksemburg Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Finansal L\u00fcksemburg Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Letonya Lat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Letonya Rublesi"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Libya Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Fas Dirhemi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Fas Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"Monako Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of("Moldova Kuponu"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldova Leyi"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Madagaskar Ariarisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Madagaskar Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Makedonya Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Makedonya Dinar\u0131 (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Mali Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Myanmar Kyat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"Mo\u011folistan Tugriki"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Makao Patakas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Moritanya Ugiyas\u0131 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Moritanya Ugiyas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Malta Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Malta Sterlini"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauritius Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of("Maldiv Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Maldiv Rufiyaas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Malavi Kva\u00e7as\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Meksika Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"G\u00fcm\u00fc\u015f Meksika Pezosu (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Meksika Unidad de Inversion (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malezya Ringgiti"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Mozambik Esk\u00fcdosu"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Eski Mozambik Metikali"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambik Metikali"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Namibya Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nijerya Nairas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Nikaragua Kordobas\u0131 (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Nikaragua Kordobas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Hollanda Florini"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Norve\u00e7 Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepal Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Yeni Zelanda Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Umman Riyali"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Panama Balboas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"Peru \u0130nti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Peru Sol\u00fc"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Peru Sol\u00fc (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Papua Yeni Gine Kinas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Filipinler Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistan Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Polonya Zlotisi"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Polonya Zlotisi (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Portekiz Esk\u00fcdosu"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paraguay Guaranisi"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Katar Riyali"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"Rodezya Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("Eski Romen Leyi"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Romen Leyi"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"S\u0131rp Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rus Rublesi"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Rus Rublesi (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Ruanda Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Suudi Arabistan Riyali"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Solomon Adalar\u0131 Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Sey\u015feller Rupisi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Eski Sudan Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Sudan Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Eski Sudan Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0130sve\u00e7 Kronu"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Singapur Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Saint Helena Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Slovenya Tolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Slovak Korunas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierra Leone Leonesi"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Somali \u015eilini"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Surinam Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinam Guldeni"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"G\u00fcney Sudan Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"S\u00e3o Tom\u00e9 ve Pr\u00edncipe Dobras\u0131 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Sao Tome ve Principe Dobras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Sovyet Rublesi"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("El Salvador Kolonu"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Suriye Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Svaziland Lilangenisi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Tayland Baht\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("Tacikistan Rublesi"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Tacikistan Somonisi"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"T\u00fcrkmenistan Manat\u0131 (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"T\u00fcrkmenistan Manat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Tunus Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Tonga Pa\u02bbangas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Timor Esk\u00fcdosu"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Eski T\u00fcrk Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"T\u00fcrk Liras\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Trinidad ve Tobago Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Yeni Tayvan Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanzanya \u015eilini"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Ukrayna Grivnas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Ukrayna Karbovanetz"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Uganda \u015eilini (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Uganda \u015eilini"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ABD Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"ABD Dolar\u0131 (Ertesi g\u00fcn)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"ABD Dolar\u0131 (Ayn\u0131 g\u00fcn)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Uruguay Peso en Unidades Indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruguay Pezosu (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Uruguay Pesosu"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u00d6zbekistan Somu"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venezuela Bolivar\u0131 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Venezuela Bolivar\u0131 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Venezuela Bolivar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vietnam Dongu"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Vietnam Dongu (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatu Vatusu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Samoa Talas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Orta Afrika CFA Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"G\u00fcm\u00fc\u015f"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"Alt\u0131n"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Birle\u015fik Avrupa Birimi"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("Avrupa Para Birimi (EMU)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("Avrupa Hesap Birimi (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("Avrupa Hesap Birimi (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Do\u011fu Karayip Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u00d6zel \u00c7ekme Hakk\u0131 (SDR)"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("Avrupa Para Birimi"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Frans\u0131z Alt\u0131n Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Frans\u0131z UIC-Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Bat\u0131 Afrika CFA Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Paladyum"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP Frang\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platin"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET Fonlar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("Test Para Birimi Kodu"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of("ADB Hesap Birimi"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Bilinmeyen Para Birimi"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Yemen Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Yemen Riyali"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Yugoslav Dinar\u0131 (Hard)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Yeni Yugoslav Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Konvertibl Yugoslav Dinar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"\u0130yile\u015ftirilmi\u015f Yugoslav Dinar\u0131 (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"G\u00fcney Afrika Rand\u0131 (finansal)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"G\u00fcney Afrika Rand\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambiya Kva\u00e7as\u0131 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Zambiya Kva\u00e7as\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("Yeni Zaire Zairesi"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("Zaire Zairesi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabve Dolar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Zimbabve Dolar\u0131 (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Zimbabve Dolar\u0131 (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_tr::CurrencyNames_tr() {
}

$Class* CurrencyNames_tr::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tr, name, initialize, &_CurrencyNames_tr_ClassInfo_, allocate$CurrencyNames_tr);
	return class$;
}

$Class* CurrencyNames_tr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun