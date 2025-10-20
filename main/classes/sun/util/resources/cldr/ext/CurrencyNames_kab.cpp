#include <sun/util/resources/cldr/ext/CurrencyNames_kab.h>

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

$MethodInfo _CurrencyNames_kab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_kab::*)()>(&CurrencyNames_kab::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_kab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_kab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_kab_MethodInfo_
};

$Object* allocate$CurrencyNames_kab($Class* clazz) {
	return $of($alloc(CurrencyNames_kab));
}

void CurrencyNames_kab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_kab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DZD"_s),
			$of("DA"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Adirham n Tgeldunin Ta\u025brabin Yedduklen"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Akwanza n Ungula"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Adular n Lus\u1e6drali"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Adinar Aba\u1e25rini"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Afrank Aburandi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Apula Abus\u1e6dwanan"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Adular Akanadi"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Afrank Akunguli"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Afrank Aswis"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Ayuwan Renminbi Acinwa"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Akabuviradinu Askudi"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Afrank Ajibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Adinar Azzayri"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Apund Ama\u1e63ri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Anakfa Iritiri"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Abir Utyupi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Uru"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Apund Aglizi"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Asidi A\u0263ani"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Adalasi Agambi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Afrank A\u0263ini"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Arupi Ahendi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Ayen Ajappuni"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Aciling Akini"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Afrank Akamiruni"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Adular Alibiri"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Alu\u1e6di Alizu\u1e6di"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Adinar Alibi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Adirham Amerruki"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Aryari Amalgac"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Agiya Amuri\u1e6dani (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Agiya Amuri\u1e6dani"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Arupi Amurisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Akwaca Amalawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Amitikal Amuzembiqi"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Adular Anamibi"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Anayra Anijiri"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Afrank Aruwandi"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Aryal Asu\u025budi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Arupi Aseycili"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Apund Asudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Apund Asant Ilini"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Alyun"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Aciling A\u1e63umali"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Asw \u1e6cum d Udubra Amenzay (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Asw \u1e6cum d Udubra Amenzay"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Alilangini"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Adinar Atunsi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Aciling A\u1e6dan\u1e93ani"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Aciling Awgandi"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Adular WD"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Afrank BCEA CFA"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Afrank BCEAO CFA"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Arand Afriqi n Wadda"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Akwaca Azambi (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Akwaca Azambi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Adular Azimbabwi"_s)
		})
	}));
	return data;
}

CurrencyNames_kab::CurrencyNames_kab() {
}

$Class* CurrencyNames_kab::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_kab, name, initialize, &_CurrencyNames_kab_ClassInfo_, allocate$CurrencyNames_kab);
	return class$;
}

$Class* CurrencyNames_kab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun