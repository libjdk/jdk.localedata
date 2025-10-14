#include <sun/util/resources/cldr/ext/CurrencyNames_ja.h>

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

$MethodInfo _CurrencyNames_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_ja::*)()>(&CurrencyNames_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ja",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ja_MethodInfo_
};

$Object* allocate$CurrencyNames_ja($Class* clazz) {
	return $of($alloc(CurrencyNames_ja));
}

void CurrencyNames_ja::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ja::getContents() {
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
			$of("CNY"_s),
			$of(u"\u5143"_s)
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
			$of("JPY"_s),
			$of(u"\uffe5"_s)
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
			$of(u"\u30a2\u30f3\u30c9\u30e9 \u30da\u30bb\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u30a2\u30e9\u30d6\u9996\u9577\u56fd\u9023\u90a6\u30c7\u30a3\u30eb\u30cf\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u30a2\u30d5\u30ac\u30cb\u30b9\u30bf\u30f3 \u30a2\u30d5\u30ac\u30cb\u30fc (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u30a2\u30d5\u30ac\u30cb\u30b9\u30bf\u30f3 \u30a2\u30d5\u30ac\u30cb\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2 \u30ec\u30af (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u30a2\u30eb\u30d0\u30cb\u30a2 \u30ec\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u30a2\u30eb\u30e1\u30cb\u30a2 \u30c9\u30e9\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0\u9818\u30a2\u30f3\u30c6\u30a3\u30eb \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u30a2\u30f3\u30b4\u30e9 \u30af\u30ef\u30f3\u30b6"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\u30a2\u30f3\u30b4\u30e9 \u30af\u30ef\u30f3\u30b6 (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\u30a2\u30f3\u30b4\u30e9 \u65b0\u30af\u30ef\u30f3\u30b6 (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\u30a2\u30f3\u30b4\u30e9 \u65e7\u30af\u30ef\u30f3\u30b6 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3 \u30a2\u30a5\u30b9\u30c8\u30e9\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3\u30fb\u30da\u30bd\u30fb\u30ec\u30a4\uff081970\u20131983\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3\u30fb\u30da\u30bd\uff081881\u20131970\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3 \u30da\u30bd (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u30a2\u30eb\u30bc\u30f3\u30c1\u30f3 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30ea\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u30a2\u30eb\u30d0 \u30d5\u30ed\u30ea\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3 \u30de\u30ca\u30c8 (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u30a2\u30bc\u30eb\u30d0\u30a4\u30b8\u30e3\u30f3 \u30de\u30ca\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u30fb\u30d8\u30eb\u30c4\u30a7\u30b4\u30d3\u30ca \u30c7\u30a3\u30ca\u30fc\u30eb (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u30fb\u30d8\u30eb\u30c4\u30a7\u30b4\u30d3\u30ca \u514c\u63db\u30de\u30eb\u30af (BAM)"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\u30dc\u30b9\u30cb\u30a2\u30fb\u30d8\u30eb\u30c4\u30a7\u30b4\u30d3\u30ca \u65b0\u30c7\u30a3\u30ca\u30fc\u30eb\uff081994\u20131997\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u30d0\u30eb\u30d0\u30c9\u30b9 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u30d0\u30f3\u30b0\u30e9\u30c7\u30b7\u30e5 \u30bf\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u30d9\u30eb\u30ae\u30fc \u30d5\u30e9\u30f3 (BEC)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u30d9\u30eb\u30ae\u30fc \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u30d9\u30eb\u30ae\u30fc \u30d5\u30e9\u30f3 (BEL)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2 \u30ec\u30d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2\u793e\u4f1a\u4e3b\u7fa9 \u30ec\u30d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2 \u65b0\u30ec\u30d5"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"\u30d6\u30eb\u30ac\u30ea\u30a2 \u30ec\u30d5\uff081879\u20131952\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u30d0\u30fc\u30ec\u30fc\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u30d6\u30eb\u30f3\u30b8 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u30d0\u30df\u30e5\u30fc\u30c0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u30d6\u30eb\u30cd\u30a4 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2 \u30dc\u30ea\u30d3\u30a2\u30fc\u30ce"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2 \u30dc\u30ea\u30d3\u30a2\u30fc\u30ce (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u30dc\u30ea\u30d3\u30a2 (Mvdol)"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u65b0\u30af\u30eb\u30bc\u30a4\u30ed (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u30af\u30eb\u30b6\u30fc\u30c9 (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u30af\u30eb\u30bc\u30a4\u30ed (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u30ec\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u65b0\u30af\u30eb\u30b6\u30fc\u30c9 (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u30af\u30eb\u30bc\u30a4\u30ed (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"\u30d6\u30e9\u30b8\u30eb \u30af\u30eb\u30bc\u30a4\u30ed\uff081942\u20131967\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u30d0\u30cf\u30de \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u30d6\u30fc\u30bf\u30f3 \u30cb\u30e5\u30eb\u30bf\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u30d3\u30eb\u30de \u30c1\u30e3\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u30dc\u30c4\u30ef\u30ca \u30d7\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7 \u65b0\u30eb\u30fc\u30d6\u30eb (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7 \u30eb\u30fc\u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u30d9\u30e9\u30eb\u30fc\u30b7 \u30eb\u30fc\u30d6\u30eb (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u30d9\u30ea\u30fc\u30ba \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u30ab\u30ca\u30c0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u30b3\u30f3\u30b4 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u30e6\u30fc\u30ed (WIR)"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u30b9\u30a4\u30b9 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"\u30d5\u30e9\u30f3 (WIR)"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"\u30c1\u30ea \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u30c1\u30ea \u30a6\u30cb\u30c0\u30fb\u30c7\u30fb\u30d5\u30a9\u30e1\u30f3\u30c8 (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u30c1\u30ea \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"\u4e2d\u56fd\u4eba\u6c11\u5143(\u30aa\u30d5\u30b7\u30e7\u30a2)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"\u4e2d\u56fd\u4eba\u6c11\u9280\u884c\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u4e2d\u56fd\u4eba\u6c11\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u30b3\u30ed\u30f3\u30d3\u30a2 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\u30b3\u30ed\u30f3\u30d3\u30a2 \u30ec\u30a2\u30eb \uff08UVR)"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u30b3\u30b9\u30bf\u30ea\u30ab \u30b3\u30ed\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u30bb\u30eb\u30d3\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u30c1\u30a7\u30b3\u30b9\u30ed\u30d0\u30ad\u30a2 \u30b3\u30eb\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"\u30ad\u30e5\u30fc\u30d0 \u514c\u63db\u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u30ad\u30e5\u30fc\u30d0 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u30ab\u30fc\u30dc\u30d9\u30eb\u30c7 \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u30ad\u30d7\u30ed\u30b9 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u30c1\u30a7\u30b3 \u30b3\u30eb\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u6771\u30c9\u30a4\u30c4 \u30de\u30eb\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u30c9\u30a4\u30c4 \u30de\u30eb\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u30b8\u30d6\u30c1 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u30c7\u30f3\u30de\u30fc\u30af \u30af\u30ed\u30fc\u30cd"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u30c9\u30df\u30cb\u30ab \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u30a2\u30eb\u30b8\u30a7\u30ea\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"\u30a8\u30af\u30a2\u30c9\u30eb \u30b9\u30af\u30ec"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"\u30a8\u30af\u30a2\u30c9\u30eb (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u30a8\u30b9\u30c8\u30cb\u30a2 \u30af\u30eb\u30fc\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u30a8\u30b8\u30d7\u30c8 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u30a8\u30ea\u30c8\u30ea\u30a2 \u30ca\u30af\u30d5\u30a1"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3\u30da\u30bb\u30bf\uff08\u52d8\u5b9aA\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3 \u514c\u63db\u30da\u30bb\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u30b9\u30da\u30a4\u30f3 \u30da\u30bb\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u30a8\u30c1\u30aa\u30d4\u30a2 \u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u30e6\u30fc\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u30d5\u30a3\u30f3\u30e9\u30f3\u30c9 \u30de\u30eb\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u30d5\u30a3\u30b8\u30fc \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u30d5\u30a9\u30fc\u30af\u30e9\u30f3\u30c9\uff08\u30de\u30eb\u30d3\u30ca\u30b9\uff09\u8af8\u5cf6 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u82f1\u56fd\u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\u30b8\u30e7\u30fc\u30b8\u30a2 \u30af\u30fc\u30dd\u30f3 \u30e9\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u30b8\u30e7\u30fc\u30b8\u30a2 \u30e9\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u30ac\u30fc\u30ca \u30bb\u30c7\u30a3 (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u30ac\u30fc\u30ca \u30bb\u30c7\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u30b8\u30d6\u30e9\u30eb\u30bf\u30eb \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u30ac\u30f3\u30d3\u30a2 \u30c0\u30e9\u30b7"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u30ae\u30cb\u30a2 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\u30ae\u30cb\u30a2 \u30b7\u30ea\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\u8d64\u9053\u30ae\u30cb\u30a2 \u30a8\u30af\u30a6\u30a7\u30ec"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u30ae\u30ea\u30b7\u30e3 \u30c9\u30e9\u30af\u30de"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u30b0\u30a2\u30c6\u30de\u30e9 \u30b1\u30c4\u30a1\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb\u9818\u30ae\u30cb\u30a2 \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u30ae\u30cb\u30a2\u30d3\u30b5\u30a6 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u30ac\u30a4\u30a2\u30ca \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u9999\u6e2f\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u30db\u30f3\u30b8\u30e5\u30e9\u30b9 \u30ec\u30f3\u30d4\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u30af\u30ed\u30a2\u30c1\u30a2 \u30af\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u30cf\u30a4\u30c1 \u30b0\u30fc\u30eb\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u30cf\u30f3\u30ac\u30ea\u30fc \u30d5\u30a9\u30ea\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u30a4\u30f3\u30c9\u30cd\u30b7\u30a2 \u30eb\u30d4\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u30a2\u30a4\u30ea\u30c3\u30b7\u30e5 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u30a4\u30b9\u30e9\u30a8\u30eb \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"\u30a4\u30b9\u30e9\u30a8\u30eb \u30b7\u30a7\u30b1\u30eb (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u30a4\u30b9\u30e9\u30a8\u30eb\u65b0\u30b7\u30a7\u30b1\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u30a4\u30f3\u30c9 \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u30a4\u30e9\u30af \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u30a4\u30e9\u30f3 \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9 \u30af\u30ed\u30fc\u30ca (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u30a2\u30a4\u30b9\u30e9\u30f3\u30c9 \u30af\u30ed\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2 \u30ea\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u30b8\u30e3\u30de\u30a4\u30ab \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u30e8\u30eb\u30c0\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u65e5\u672c\u5186"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u30b1\u30cb\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u30ad\u30eb\u30ae\u30b9 \u30bd\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u30ab\u30f3\u30dc\u30b8\u30a2 \u30ea\u30a8\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u30b3\u30e2\u30ed \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u5317\u671d\u9bae\u30a6\u30a9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"\u97d3\u56fd \u30d5\u30a1\u30f3\uff081953\u20131962\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"\u97d3\u56fd \u30a6\u30a9\u30f3\uff081945\u20131953\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u97d3\u56fd\u30a6\u30a9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u30af\u30a6\u30a7\u30fc\u30c8 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u30b1\u30a4\u30de\u30f3\u8af8\u5cf6 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u30ab\u30b6\u30d5\u30b9\u30bf\u30f3 \u30c6\u30f3\u30b2"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u30e9\u30aa\u30b9 \u30ad\u30fc\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u30ec\u30d0\u30ce\u30f3 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u30b9\u30ea\u30e9\u30f3\u30ab \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u30ea\u30d9\u30ea\u30a2 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u30ec\u30bd\u30c8 \u30ed\u30c6\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2 \u30ea\u30bf\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u30ea\u30c8\u30a2\u30cb\u30a2 \u30bf\u30ed\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30af \u514c\u63db\u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30b0 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u30eb\u30af\u30bb\u30f3\u30d6\u30eb\u30af \u91d1\u878d\u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2 \u30e9\u30c3\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u30e9\u30c8\u30d3\u30a2 \u30eb\u30fc\u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u30ea\u30d3\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u30e2\u30ed\u30c3\u30b3 \u30c7\u30a3\u30eb\u30cf\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u30e2\u30ed\u30c3\u30b3 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"\u30e2\u30cd\u30ac\u30b9\u30af \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"\u30e2\u30eb\u30c9\u30d0 \u30af\u30fc\u30dd\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u30e2\u30eb\u30c9\u30d0 \u30ec\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u30de\u30c0\u30ac\u30b9\u30ab\u30eb \u30a2\u30ea\u30a2\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u30de\u30e9\u30ac\u30b7 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u30de\u30b1\u30c9\u30cb\u30a2 \u30c7\u30ca\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"\u30de\u30b1\u30c9\u30cb\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb\uff081992\u20131993\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u30de\u30ea \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u30df\u30e3\u30f3\u30de\u30fc \u30c1\u30e3\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u30e2\u30f3\u30b4\u30eb \u30c8\u30b0\u30ed\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u30de\u30ab\u30aa \u30d1\u30bf\u30ab"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u30e2\u30fc\u30ea\u30bf\u30cb\u30a2 \u30a6\u30ae\u30a2 (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u30e2\u30fc\u30ea\u30bf\u30cb\u30a2 \u30a6\u30ae\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u30de\u30eb\u30bf \u30ea\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u30de\u30eb\u30bf \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u30e2\u30fc\u30ea\u30b7\u30e3\u30b9 \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"\u30e2\u30eb\u30c7\u30a3\u30d6\u8af8\u5cf6 \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u30e2\u30eb\u30c7\u30a3\u30d6 \u30eb\u30d5\u30a3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u30de\u30e9\u30a6\u30a3 \u30af\u30ef\u30c1\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u30e1\u30ad\u30b7\u30b3 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u30e1\u30ad\u30b7\u30b3 \u30da\u30bd (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u30e1\u30ad\u30b7\u30b3 (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u30de\u30ec\u30fc\u30b7\u30a2 \u30ea\u30f3\u30ae\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u30e2\u30b6\u30f3\u30d4\u30fc\u30af \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u30e2\u30b6\u30f3\u30d3\u30fc\u30af \u30e1\u30c6\u30a3\u30ab\u30eb (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u30e2\u30b6\u30f3\u30d3\u30fc\u30af \u30e1\u30c6\u30a3\u30ab\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u30ca\u30df\u30d3\u30a2 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u30ca\u30a4\u30b8\u30a7\u30ea\u30a2 \u30ca\u30a4\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u30cb\u30ab\u30e9\u30b0\u30a2 \u30b3\u30eb\u30c9\u30d0 (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u30cb\u30ab\u30e9\u30b0\u30a2 \u30b3\u30eb\u30c9\u30d0 \u30aa\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u30aa\u30e9\u30f3\u30c0 \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u30ce\u30eb\u30a6\u30a7\u30fc \u30af\u30ed\u30fc\u30cd"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u30cd\u30d1\u30fc\u30eb \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u30cb\u30e5\u30fc\u30b8\u30fc\u30e9\u30f3\u30c9 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u30aa\u30de\u30fc\u30f3 \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u30d1\u30ca\u30de \u30d0\u30eb\u30dc\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u30da\u30eb\u30fc \u30a4\u30f3\u30c6\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u30da\u30eb\u30fc \u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u30da\u30eb\u30fc \u30bd\u30eb (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u30d1\u30d7\u30a2\u30cb\u30e5\u30fc\u30ae\u30cb\u30a2 \u30ad\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u30d5\u30a3\u30ea\u30d4\u30f3 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u30d1\u30ad\u30b9\u30bf\u30f3 \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9 \u30ba\u30a6\u30a9\u30c6\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"\u30dd\u30fc\u30e9\u30f3\u30c9 \u30ba\u30a6\u30a9\u30c6\u30a3 (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u30dd\u30eb\u30c8\u30ac\u30eb \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u30d1\u30e9\u30b0\u30a2\u30a4 \u30b0\u30a2\u30e9\u30cb"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u30ab\u30bf\u30fc\u30eb \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u30ed\u30fc\u30c7\u30b7\u30a2 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2 \u30ec\u30a4 (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u30eb\u30fc\u30de\u30cb\u30a2 \u30ec\u30a4"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u30c7\u30a3\u30ca\u30fc\u30eb (\u30bb\u30eb\u30d3\u30a2)"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u30ed\u30b7\u30a2 \u30eb\u30fc\u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"\u30ed\u30b7\u30a2 \u30eb\u30fc\u30d6\u30eb (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u30eb\u30ef\u30f3\u30c0 \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u30b5\u30a6\u30b8 \u30ea\u30e4\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u30bd\u30ed\u30e2\u30f3\u8af8\u5cf6 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u30bb\u30fc\u30b7\u30a7\u30eb \u30eb\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u30b9\u30fc\u30c0\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u30b9\u30fc\u30c0\u30f3 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u30b9\u30fc\u30c0\u30f3 \u30dd\u30f3\u30c9 (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u30b9\u30a6\u30a7\u30fc\u30c7\u30f3 \u30af\u30ed\u30fc\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u30b7\u30f3\u30ac\u30dd\u30fc\u30eb \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u30bb\u30f3\u30c8\u30d8\u30ec\u30ca \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u30b9\u30ed\u30d9\u30cb\u30a2 \u30c8\u30e9\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u30b9\u30ed\u30d0\u30ad\u30a2 \u30b3\u30eb\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u30b7\u30a8\u30e9\u30ec\u30aa\u30cd \u30ec\u30aa\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u30bd\u30de\u30ea\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u30b9\u30ea\u30ca\u30e0 \u30ae\u30eb\u30c0\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"\u5357\u30b9\u30fc\u30c0\u30f3 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u30b5\u30f3\u30c8\u30e1\u30fb\u30d7\u30ea\u30f3\u30b7\u30da \u30c9\u30d6\u30e9 (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u30b5\u30f3\u30c8\u30e1\u30fb\u30d7\u30ea\u30f3\u30b7\u30da \u30c9\u30d6\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u30bd\u9023 \u30eb\u30fc\u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u30a8\u30eb\u30b5\u30eb\u30d0\u30c9\u30eb \u30b3\u30ed\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u30b7\u30ea\u30a2 \u30dd\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u30b9\u30ef\u30b8\u30e9\u30f3\u30c9 \u30ea\u30e9\u30f3\u30b2\u30cb"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u30bf\u30a4 \u30d0\u30fc\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u30bf\u30b8\u30ad\u30b9\u30bf\u30f3 \u30eb\u30fc\u30d6\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u30bf\u30b8\u30ad\u30b9\u30bf\u30f3 \u30bd\u30e2\u30cb"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30cb\u30b9\u30bf\u30f3 \u30de\u30ca\u30c8 (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"\u30c8\u30eb\u30af\u30e1\u30cb\u30b9\u30bf\u30f3 \u30de\u30ca\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u30c1\u30e5\u30cb\u30b8\u30a2 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u30c8\u30f3\u30ac \u30d1\u30fb\u30a2\u30f3\u30ac"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u30c6\u30a3\u30e2\u30fc\u30eb \u30a8\u30b9\u30af\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u30c8\u30eb\u30b3 \u30ea\u30e9 (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u65b0\u30c8\u30eb\u30b3\u30ea\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u30c8\u30ea\u30cb\u30c0\u30fc\u30c9\u30fb\u30c8\u30d0\u30b4 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u65b0\u53f0\u6e7e\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u30bf\u30f3\u30b6\u30cb\u30a2 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca \u30b0\u30ea\u30d6\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\u30a6\u30af\u30e9\u30a4\u30ca \u30ab\u30eb\u30dc\u30d0\u30cd\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u30a6\u30ac\u30f3\u30c0 \u30b7\u30ea\u30f3\u30b0 (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u30a6\u30ac\u30f3\u30c0 \u30b7\u30ea\u30f3\u30b0"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u7c73\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u7c73\u30c9\u30eb (\u7fcc\u65e5)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u7c73\u30c9\u30eb (\u5f53\u65e5)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\u30a6\u30eb\u30b0\u30a2\u30a4 \u30da\u30bd\u30a8\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u30a6\u30eb\u30b0\u30a2\u30a4 \u30da\u30bd (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u30a6\u30eb\u30b0\u30a2\u30a4 \u30da\u30bd"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u30a6\u30ba\u30d9\u30ad\u30b9\u30bf\u30f3 \u30b9\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u30d9\u30cd\u30ba\u30a8\u30e9 \u30dc\u30ea\u30d0\u30eb (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u30d9\u30cd\u30ba\u30a8\u30e9 \u30dc\u30ea\u30d0\u30eb (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u30d9\u30cd\u30ba\u30a8\u30e9 \u30dc\u30ea\u30d0\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0 \u30c9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"\u30d9\u30c8\u30ca\u30e0 \u30c9\u30f3\uff081978\u20131985\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u30d0\u30cc\u30a2\u30c4 \u30d0\u30c4"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u30b5\u30e2\u30a2 \u30bf\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"\u4e2d\u592e\u30a2\u30d5\u30ea\u30ab CFA \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u9280"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u91d1"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u6df7\u5408\u5358\u4f4d (EURCO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u901a\u8ca8\u5358\u4f4d (EMU\u20136)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u52d8\u5b9a\u5358\u4f4d (EUA\u20139)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u52d8\u5b9a\u5358\u4f4d (EUA\u201317)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u6771\u30ab\u30ea\u30d6 \u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u7279\u5225\u5f15\u304d\u51fa\u3057\u6a29"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\u30e8\u30fc\u30ed\u30c3\u30d1\u901a\u8ca8\u5358\u4f4d"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9\u91d1\u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u30d5\u30e9\u30f3\u30b9 \u30d5\u30e9\u30f3 (UIC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u897f\u30a2\u30d5\u30ea\u30ab CFA \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u30d1\u30e9\u30b8\u30a6\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP \u30d5\u30e9\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u30d7\u30e9\u30c1\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET\u57fa\u91d1"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of(u"\u30b9\u30af\u30ec"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u30c6\u30b9\u30c8\u7528\u901a\u8ca8\u30b3\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of(u"UA (\u30a2\u30d5\u30ea\u30ab\u958b\u767a\u9280\u884c)"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u4e0d\u660e\u307e\u305f\u306f\u7121\u52b9\u306a\u901a\u8ca8"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u30a4\u30a8\u30e1\u30f3 \u30c7\u30a3\u30ca\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u30a4\u30a8\u30e1\u30f3 \u30ea\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u30e6\u30fc\u30b4\u30b9\u30e9\u30d3\u30a2 \u30cf\u30fc\u30c9\u30fb\u30c7\u30a3\u30ca\u30fc\u30eb (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u30e6\u30fc\u30b4\u30b9\u30e9\u30d3\u30a2 \u30ce\u30d3\u30fb\u30c7\u30a3\u30ca\u30fc\u30eb (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u30e6\u30fc\u30b4\u30b9\u30e9\u30d3\u30a2 \u514c\u63db\u30c7\u30a3\u30ca\u30fc\u30eb (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"\u30e6\u30fc\u30b4\u30b9\u30e9\u30d3\u30a2 \u6539\u9769\u30c7\u30a3\u30ca\u30fc\u30eb\uff081992\u20131993\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"\u5357\u30a2\u30d5\u30ea\u30ab \u30e9\u30f3\u30c9 (ZAL)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u5357\u30a2\u30d5\u30ea\u30ab \u30e9\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u30b6\u30f3\u30d3\u30a2 \u30af\u30ef\u30c1\u30e3 (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u30b6\u30f3\u30d3\u30a2 \u30af\u30ef\u30c1\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u30b6\u30a4\u30fc\u30eb \u65b0\u30b6\u30a4\u30fc\u30eb (1993\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u30b6\u30a4\u30fc\u30eb \u30b6\u30a4\u30fc\u30eb (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u30b8\u30f3\u30d0\u30d6\u30a8 \u30c9\u30eb (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"\u30b8\u30f3\u30d0\u30d6\u30a8 \u30c9\u30eb (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"\u30b7\u30f3\u30d0\u30d6\u30a8 \u30c9\u30eb\uff082008\uff09"_s)
		})
	}));
	return data;
}

CurrencyNames_ja::CurrencyNames_ja() {
}

$Class* CurrencyNames_ja::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ja, name, initialize, &_CurrencyNames_ja_ClassInfo_, allocate$CurrencyNames_ja);
	return class$;
}

$Class* CurrencyNames_ja::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun