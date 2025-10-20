#include <sun/util/resources/cldr/ext/CurrencyNames_sg.h>

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

$MethodInfo _CurrencyNames_sg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_sg::*)()>(&CurrencyNames_sg::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_sg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sg_MethodInfo_
};

$Object* allocate$CurrencyNames_sg($Class* clazz) {
	return $of($alloc(CurrencyNames_sg));
}

void CurrencyNames_sg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dir\u00e2m t\u00ee \u00e2Emir\u00e2ti t\u00ee Ar\u00e2bo \u00d4ko"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kw\u00e2nza t\u00ee Angol\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"dol\u00e4ra t\u00ee Ostral\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dol\u00f9ara t\u00ee Bahr\u00e2ina"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"far\u00e2nga t\u00ee Burund\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"p\u00fbla t\u00ee Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"dol\u00e4ra t\u00ee kanad\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"far\u00e2nga t\u00ee Kong\u00f6o"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"far\u00e2nga t\u00ee S\u00fb\u00eesi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"yuan renminbi t\u00ee Sh\u00eeni"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"esk\u00fb\u00eado t\u00ee K\u00e2po-V\u00eare"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"far\u00e2nga t\u00ee Dibut\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"din\u00e4ri t\u00ee Alzer\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"p\u00f4ndo t\u00ee K\u00e2mit\u00e2"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"nakafa t\u00ee Eritr\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"bir t\u00ee Etiop\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"zor\u00f6o"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"p\u00f4ndo t\u00ee Angl\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"s\u00eadi t\u00ee Gan\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"dalasi t\u00ee gamb\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"sili t\u00ee Gin\u00ebe"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"rup\u00efi t\u00ee \u00cannde"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"y\u00eani t\u00ee Zap\u00f6n"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"shil\u00eengi t\u00ee Keny\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"far\u00e2nga t\u00ee K\u00f6m\u00f4ro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"dol\u00e4ra t\u00ee Liber\u00efa"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"loti t\u00ee Les\u00f4tho"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"din\u00e4ar t\u00ee Lib\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dir\u00e2m t\u00ee Mar\u00f4ko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ari\u00e2ri t\u00ee Madagasik\u00e4ra"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ug\u00eeya t\u00ee Moritan\u00efi (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ug\u00eeya t\u00ee Moritan\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"rup\u00efi t\u00ee M\u00f6r\u00eesi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"kw\u00e2tia t\u00ee Malaw\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"metikala t\u00ee Mozamb\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"dol\u00e4ra t\u00ee Namib\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"n\u00e2\u00eera t\u00ee Nizer\u00efa"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"far\u00e2nga t\u00ee Ruand\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"ri\u00e2li t\u00ee Sa\u00fbdi Arab\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"rup\u00efi t\u00ee S\u00ebysh\u00eale"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"p\u00f4ndo t\u00ee Sud\u00e4an"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"p\u00f4ndo t\u00ee Z\u00fb\u00e2 S\u00eant-Hel\u00eana"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"le\u00f4ne t\u00ee Sier\u00e2-Le\u00f4ne"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"shil\u00eengi t\u00ee Somal\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"d\u00f4bra t\u00ee S\u00e2\u00f4 Tom\u00eb na Prins\u00eepe (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"d\u00f4bra t\u00ee S\u00e2\u00f4 Tom\u00eb na Prins\u00eepe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"lilang\u00f9eni t\u00ee Swaz\u00efl\u00e2nde"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"din\u00e4ra t\u00ee Tuniz\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"shil\u00eengi t\u00ee Tanzan\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"shil\u00eengi t\u00ee Ugand\u00e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dol$ara tt\u00ee \u00e4Let\u00e4a-\u00d4ko t\u00ee Amer\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"far\u00e2nga CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"far\u00e2nga CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"r\u00e2nde t\u00ee Mbongo-Afr\u00eeka"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kw\u00e2tia t\u00ee Zamb\u00efi (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"kw\u00e2tia t\u00ee Zamb\u00efi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dol\u00e4ra t\u00ee Zimb\u00e4bwe"_s)
		})
	}));
	return data;
}

CurrencyNames_sg::CurrencyNames_sg() {
}

$Class* CurrencyNames_sg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sg, name, initialize, &_CurrencyNames_sg_ClassInfo_, allocate$CurrencyNames_sg);
	return class$;
}

$Class* CurrencyNames_sg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun