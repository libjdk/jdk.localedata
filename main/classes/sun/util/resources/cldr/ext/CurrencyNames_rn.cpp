#include <sun/util/resources/cldr/ext/CurrencyNames_rn.h>

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

$MethodInfo _CurrencyNames_rn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_rn::*)()>(&CurrencyNames_rn::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_rn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_rn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_rn_MethodInfo_
};

$Object* allocate$CurrencyNames_rn($Class* clazz) {
	return $of($alloc(CurrencyNames_rn));
}

void CurrencyNames_rn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_rn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BIF"_s),
			$of("FBu"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Idiramu ryo muri Leta Zunze Ubumwe z\u2019Abarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Ikwanza ryo muri Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Idolari ryo muri Ositaraliya"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Idinari ry\u2019iribahireyini"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Ifaranga ry\u2019Uburundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Ipula ryo muri Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Idolari rya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Ifaranga rya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Ifaranga ry\u2019Ubusuwisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Iyuwani ryo mu Bushinwa"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Irikaboveridiyano ryo muri Esikudo"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Ifaranga ryo muri Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Idinari ryo muri Alijeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Ipawundi rya Misiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Irinakufa ryo muri Eritereya"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ibiri ryo muri Etiyopiya"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Iyero"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Ipawundi ryo mu Bwongereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Icedi ryo muri Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Idalasi ryo muri Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Ifaranga ryo muri Gineya"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Irupiya ryo mu Buhindi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Iyeni ry\u2019Ubuyapani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Ishilingi rya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Ifaranga rya Komore"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Idolari rya Liberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Iloti ryo muro Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Idinari rya Libiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Idiramu ryo muri Maroke"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Iriyari ryo muri Madagasikari"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya ryo muri Moritaniya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya ryo muri Moritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Irupiya ryo mu birwa bya Morise"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Ikwaca ryo muri Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Irimetikali ryo muri Mozambike"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Idolari rya Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Inayira ryo muri Nijeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Ifaranga ry\u2019u Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Iriyari ryo muri Arabiya Sawudite"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Irupiya ryo mu birwa bya Sayisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Ipawundi rya Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Ipawundi rya Sente Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Ilewone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Ishilingi ryo muri Somaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Idobura ryo muri Sawotome na Perensipe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Idobura ryo muri Sawotome na Perensipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Ililangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Idinari ryo muri Tuniziya"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Ishilingi rya Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Ishilingi ry\u2019Ubugande"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Idolari ry\u2019abanyamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Irandi ryo muri Afurika y\u2019Epfo"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Ikwaca ryo muri Zambiya (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Ikwaca ryo muri Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Idolari ryo muri Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_rn::CurrencyNames_rn() {
}

$Class* CurrencyNames_rn::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_rn, name, initialize, &_CurrencyNames_rn_ClassInfo_, allocate$CurrencyNames_rn);
	return class$;
}

$Class* CurrencyNames_rn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun