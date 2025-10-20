#include <sun/util/resources/cldr/ext/CurrencyNames_brx.h>

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

$MethodInfo _CurrencyNames_brx_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_brx::*)()>(&CurrencyNames_brx::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_brx_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_brx",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_brx_MethodInfo_
};

$Object* allocate$CurrencyNames_brx($Class* clazz) {
	return $of($alloc(CurrencyNames_brx));
}

void CurrencyNames_brx::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_brx::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"\u0910\u0928\u094d\u0921\u094b\u0930\u093e \u0915\u093e \u092a\u0947\u0938\u0947\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"\u0938\u0902\u092f\u0941\u0915\u094d\u0924 \u0905\u0930\u092c \u0905\u092e\u0940\u0930\u093e\u0924 \u0915\u093e \u0926\u093f\u0930\u094d\u0939\u093e\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"\u0905\u092b\u093c\u0917\u093c\u093e\u0928\u0940 1927\u20132002"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"\u0905\u092b\u093c\u0917\u093c\u093e\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"\u0906\u0932\u094d\u092c\u0947\u0928\u093f\u092f\u093e \u0915\u093e \u0932\u0947\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"\u0906\u0930\u092e\u093f\u0928\u093f\u092f\u093e\u0908 \u0926\u093f\u0930\u094d\u0939\u093e\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\u0928\u0947\u0926\u0930\u0932\u0948\u0923\u094d\u0921 \u090f\u0928\u094d\u091f\u0940\u0932\u0940\u091c\u093c \u0915\u093e \u0917\u0940\u0932\u094d\u0921\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"\u090f\u0902\u0917\u094b\u0932\u093e \u0915\u094d\u0935\u093e\u0928\u091c\u093c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"\u090f\u0902\u0917\u094b\u0932\u093e \u0915\u094d\u0935\u093e\u0928\u091c\u093c\u093e (1977\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"\u090f\u0902\u0917\u094b\u0932\u093e \u0928\u092f\u093e \u0915\u094d\u0935\u093e\u0928\u091c\u093c\u093e (1990\u201320000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"\u090f\u0902\u0917\u094b\u0932\u093e \u0915\u094d\u0935\u093e\u0928\u091c\u093c\u093e \u0938\u0941\u0927\u093e\u0930\u0940\u0924 (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"\u0905\u0930\u094d\u091c\u0947\u0923\u094d\u091f\u0940\u0928\u0940 \u0913\u0938\u094d\u091f\u094d\u0930\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\u0905\u0930\u094d\u091c\u0947\u0923\u094d\u091f\u0940\u0928\u0940 \u092a\u0947\u0938\u094b (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\u0905\u0930\u094d\u091c\u0947\u0923\u094d\u091f\u0940\u0928\u0940 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"\u0911\u0938\u094d\u091f\u094d\u0930\u093f\u092f\u0928 \u0936\u0940\u0932\u0940\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"\u0905\u0930\u0941\u092c\u093e \u0917\u0940\u0932\u094d\u0921\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"\u0906\u091c\u093c\u0930\u092c\u0948\u091c\u093e\u0928\u0940 \u092e\u0928\u093e\u0924 (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"\u0906\u091c\u093c\u0930\u092c\u0948\u091c\u093e\u0928\u0940 \u092e\u0928\u093e\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"\u092c\u094b\u0938\u0928\u093f\u092f\u093e \u0939\u0947\u0930\u094d\u091c\u093c\u0947\u0917\u094b\u0935\u093f\u0928\u093e \u0915\u093e \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"\u092c\u094b\u0938\u0928\u093f\u092f\u093e \u0939\u0947\u0930\u094d\u091c\u093c\u0947\u0917\u094b\u0935\u093f\u0928\u093e \u0915\u0928\u0935\u0930\u094d\u091f\u0940\u092c\u0932 \u092e\u093e\u0930\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"\u092c\u093e\u0930\u092c\u093e\u0926\u094b\u0938 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"\u092c\u093e\u0902\u0917\u0932\u093e\u0926\u0947\u0936 \u091f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"\u092c\u0947\u0932\u094d\u091c\u093f\u092f\u0928 \u092b\u094d\u0930\u093e\u0901 \u0915\u0928\u0935\u0930\u094d\u091f\u0940\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"\u092c\u0947\u0932\u094d\u091c\u093f\u092f\u0928 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"\u092c\u0947\u0932\u094d\u091c\u093f\u092f\u0928 \u092b\u094d\u0930\u093e\u0901 \u092b\u093f\u0928\u093e\u0928\u0938\u0940\u092f\u0932 (\u0935\u093f\u0924\u094d\u0924\u0940\u092f)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"\u092c\u0932\u094d\u0917\u0947\u0930\u093f\u092f\u093e\u0908 \u0939\u093e\u0930\u094d\u0921 \u0932\u0947\u0935"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\u092c\u0932\u094d\u0917\u0947\u0930\u093f\u092f\u093e\u0908 \u0932\u0947\u0935"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"\u092c\u093e\u0939\u0930\u0948\u0928\u0940 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"\u092c\u0941\u0930\u0941\u0902\u0926\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"\u092c\u0930\u092e\u0941\u0921\u0940 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"\u092c\u094d\u0930\u0941\u0928\u0908 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"\u092c\u094b\u0932\u093f\u0935\u093f\u092f\u093e\u0928\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"\u092c\u094b\u0932\u093f\u0935\u093f\u092f\u093e\u0908 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"\u092c\u094b\u0932\u093f\u0935\u093f\u092f\u093e\u0908 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"\u092c\u094d\u0930\u091c\u093c\u0940\u0932\u0940 \u0928\u092f\u093e \u0915\u094d\u0930\u0941\u091c\u093c\u0947\u0930\u094b (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"\u092c\u094d\u0930\u091c\u093c\u0940\u0932\u0940 \u0915\u094d\u0930\u0941\u091c\u093c\u093e\u0921\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"\u092c\u094d\u0930\u091c\u093c\u0940\u0932\u0940 \u0915\u094d\u0930\u0941\u091c\u093c\u0947\u0930\u094b (190\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"\u092c\u094d\u0930\u091c\u093c\u0940\u0932\u0940 \u0930\u0947\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"\u092c\u094d\u0930\u091c\u093c\u0940\u0932\u0940 \u0928\u092f\u093e \u0915\u094d\u0930\u0941\u091c\u093c\u093e\u0921\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"\u092c\u094d\u0930\u091c\u093c\u0940\u0932\u0940 \u0915\u094d\u0930\u0941\u091c\u093c\u0947\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"\u092c\u0939\u093e\u092e\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"\u092d\u0941\u0924\u093e\u0928 \u0915\u093e \u0928\u0917\u0941\u0932\u0924\u094d\u0930\u0941\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"\u092c\u0930\u094d\u092e\u0940 (\u092e\u094d\u092f\u093e\u0928\u092e\u093e\u0930\u0940) \u0915\u094d\u092f\u093e\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"\u092c\u094b\u091f\u094d\u0938\u0935\u093e\u0928\u093e \u0915\u093e \u092a\u0941\u0932\u093e\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"\u092c\u0947\u0932\u093e\u0930\u0941\u0938\u0940 \u0928\u092f\u093e \u0930\u0942\u092c\u0932 (194\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\u092c\u0947\u0932\u093e\u0930\u0941\u0938\u0940 \u0930\u0942\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"\u092c\u0947\u0932\u093e\u0930\u0941\u0938\u0940 \u0930\u0942\u092c\u0932 (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"\u092c\u0947\u0932\u0940\u091c\u093c \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\u0915\u0928\u0947\u0921\u093f\u092f\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"\u0915\u0949\u0902\u0917\u094b\u0932\u0940\u091c\u093c \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"\u0906\u0908\u0930\u0932\u0948\u0923\u094d\u0921 \u0915\u093e \u092f\u0941\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"\u0938\u094d\u0935\u093f\u0938 \u092b\u093c\u094d\u0930\u0948\u0902\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"\u0906\u0908\u0930\u0932\u0948\u0923\u094d\u0921 \u0915\u093e \u092b\u093c\u094d\u0930\u0948\u0902\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"\u091a\u0940\u0932\u0940 \u0915\u093e \u090a\u0928\u0940\u0926\u093e\u0926\u0947\u0938 \u0926 \u092b\u094b\u092e\u0947\u0902\u091f\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"\u091a\u093f\u0932\u0940 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"\u091a\u0940\u0928\u0940 \u092f\u0941\u0906\u0928 \u0930\u0947\u0928\u092e\u0940\u0928\u092c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\u0915\u094b\u0932\u092e\u094d\u092c\u093f\u092f\u093e\u0908 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"\u092f\u0941\u0928\u0940\u0926\u093e\u0926 \u0926 \u0935\u093e\u0932\u094b\u0930 \u0930\u0947\u0906\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"\u0915\u0949\u0938\u094d\u091f\u093e \u0930\u0940\u0915\u093e \u0915\u093e \u0915\u094b\u0932\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"\u0938\u0930\u094d\u092c\u093f\u092f\u093e \u0915\u093e \u0921\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"\u091a\u0948\u0915\u094b\u0938\u094d\u0932\u094b\u0935\u093e\u0915\u093f\u092f \u0939\u093e\u0930\u094d\u0921 \u0915\u094b\u0930\u0941\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"\u0915\u094d\u092f\u0941\u092c\u093e \u0915\u093e \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"\u0915\u093e\u092a \u0935\u0947\u0930\u094d\u0926\u0947 \u0915\u093e \u090f\u0938\u094d\u0915\u0941\u0926\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"\u0938\u093e\u0908\u092a\u094d\u0930\u0938 \u0915\u093e \u092a\u093e\u090a\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"\u091a\u0947\u0915 \u0917\u0928\u0924\u0902\u0924\u094d\u0930 \u0915\u093e \u0915\u094b\u0930\u0941\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"\u0908\u0938\u094d\u091f \u091c\u0930\u094d\u092e\u0928 \u0913\u0938\u094d\u091f\u092e\u093e\u0930\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"\u0921\u0949\u0908\u091a \u092e\u093e\u0930\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"\u091c\u0940\u092c\u0941\u0924\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"\u0921\u0947\u0928\u092e\u093e\u0930\u094d\u0915 \u0915\u093e \u0915\u094d\u0930\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"\u0921\u0949\u092e\u0940\u0928\u0940\u0915\u0928 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"\u0906\u0932\u094d\u091c\u0940\u0930\u0940 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"\u090f\u0915\u094d\u0935\u093e\u0926\u094b\u0930 \u0938\u0941\u0915\u094d\u0930\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"\u090f\u0915\u094d\u0935\u093e\u0926\u094b\u0930 \u092f\u0941\u0928\u0940\u0926\u093e\u0926 \u0926\u0947 \u0935\u093e\u0932\u094b\u0930 \u0915\u0949\u0928\u0938\u094d\u0924\u093e\u0902\u0924\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"\u090f\u0938\u094d\u091f\u094b\u0928\u093f\u092f\u093e\u0908 \u0915\u094d\u0930\u0942\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"\u092e\u093f\u0938\u094d\u0930\u0940 \u092a\u093e\u0909\u0923\u094d\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"\u0910\u0930\u093f\u0924\u094d\u0930\u0940\u092f\u093e \u0915\u093e \u0928\u093e\u092b\u093c\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"\u0939\u0940\u0938\u094d\u092a\u093e\u0928\u0940 \u092a\u0947\u0938\u0947\u0924\u093e (\u090f \u0905\u0915\u093e\u090a\u0901\u091f)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"\u0939\u0940\u0938\u094d\u092a\u093e\u0928\u0940 \u092a\u0947\u0938\u0947\u0924\u093e (\u0915\u0928\u0935\u0930\u094d\u091f\u0940\u092c\u0932 \u0905\u0915\u093e\u090a\u0901\u091f)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"\u0939\u0940\u0938\u094d\u092a\u093e\u0928\u0940 \u092a\u0947\u0938\u0947\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"\u0908\u0925\u093f\u0913\u092a\u093f\u092f\u093e \u0915\u093e \u092c\u0940\u0930\u094d\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"\u092f\u0941\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"\u092b\u0940\u0928\u0940\u0936 \u092e\u093e\u0930\u094d\u0915\u094d\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"\u092b\u093c\u093f\u091c\u0940 \u0915\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"\u092b\u093e\u0932\u094d\u0915\u0932\u0948\u0923\u094d\u0921 \u0926\u094d\u0935\u0940\u092a \u092a\u094c\u0923\u094d\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"\u092b\u094d\u0930\u093e\u0901\u0938\u0940\u0938\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"\u092c\u094d\u0930\u093f\u0924\u0928 \u0915\u093e \u092a\u094c\u0923\u094d\u0921 \u0938\u094d\u091f\u0930\u094d\u0932\u093f\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"\u091c\u0949\u0930\u094d\u091c\u093f\u092f\u093e \u0915\u093e \u0915\u0941\u092a\u094b\u0928 \u0932\u093e\u0930\u0940\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"\u091c\u0949\u0930\u094d\u091c\u093f\u092f\u093e \u0915\u093e \u0932\u093e\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"\u0918\u093e\u0928\u093e \u091a\u0947\u0926\u0940 (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"\u0918\u093e\u0928\u093e \u091a\u0947\u0926\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"\u091c\u0940\u092c\u094d\u0930\u093e\u0932\u091f\u0930 \u0915\u093e \u092a\u094c\u0923\u094d\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"\u0917\u093e\u0901\u092c\u093f\u092f\u093e \u0915\u093e \u0926\u0932\u093e\u0938\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"\u0917\u0940\u0928\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"\u0917\u0940\u0928\u0940 \u0938\u0940\u0932\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"\u0910\u0915\u094d\u0935\u093e\u091f\u0930\u0940 \u0917\u0940\u0928\u0940 \u090f\u0915\u094d\u0935\u0947\u0932\u0947 \u0917\u0940\u0928\u0940\u0906\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"\u092f\u0941\u0928\u093e\u0928\u0940 \u0926\u094d\u0930\u093e\u0916\u092e\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"\u0917\u094d\u0935\u093e\u0924\u0947\u092e\u093e\u0932\u093e \u0915\u093c\u094d\u0935\u0947\u0924\u094d\u091c\u093c\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"\u092a\u0941\u0930\u0924\u0941\u0917\u0940 \u0917\u0940\u0928\u0940 \u0915\u093e \u090f\u0938\u094d\u0915\u0941\u090f\u0926\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"\u0917\u0940\u0928\u0940 \u092c\u093f\u0938\u094d\u0938\u093e\u090a \u0915\u093e \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"\u0917\u0941\u092f\u093e\u0928\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"\u0939\u093e\u0901\u0917 \u0915\u093e\u0901\u0917 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"\u0939\u0949\u0902\u0921\u0941\u0930\u093e\u0938 \u0932\u0947\u0902\u092a\u0940\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"\u0915\u094d\u0930\u094b\u090f\u0936\u093f\u092f\u093e\u0908 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"\u0915\u094d\u0930\u094b\u090f\u0936\u093f\u092f\u093e\u0908 \u0915\u0941\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"\u0939\u093e\u0908\u0924\u0940 \u0917\u0941\u0930\u094d\u0926"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"\u0939\u0902\u0917\u0947\u0930\u093f\u092f\u093e\u0908 \u092b\u093c\u094b\u0930\u093f\u0923\u094d\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"\u0907\u0923\u094d\u0921\u094b\u0928\u0947\u0936\u093f\u092f\u093e\u0908 \u0930\u0941\u092a\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"\u0906\u0908\u0930\u0940\u0936 \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"\u0907\u0938\u094d\u0930\u093e\u0907\u0932\u0940 \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"\u0907\u0938\u094d\u0930\u093e\u0907\u0932\u0940 \u0936\u0947\u0915\u0947\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"\u0930\u093e\u0902"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"\u0908\u0930\u093e\u0915\u093c\u0940 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"\u0908\u0930\u093e\u0928\u0940 \u0930\u0940\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"\u0906\u0908\u0938\u0932\u0948\u0923\u094d\u0921 \u0915\u094d\u0930\u094b\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"\u0907\u0924\u0932\u0940 \u0915\u093e \u0932\u0940\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"\u091c\u092e\u093e\u0908\u0915\u093e \u0915\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"\u091c\u094b\u0930\u094d\u0921\u0928\u0940 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"\u091c\u093e\u092a\u093e\u0928\u0940 \u092f\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"\u0915\u093f\u0928\u093f\u092f\u093e\u0908 \u0936\u0940\u0932\u0940\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"\u0915\u093c\u0940\u0930\u094d\u0917\u093c\u0940\u091c\u093c\u0938\u094d\u0924\u093e\u0928\u0940 \u0938\u094b\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"\u0915\u0902\u092c\u094b\u0921\u093f\u092f\u093e \u0915\u093e \u0930\u093f\u090f\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"\u0915\u094b\u092e\u094b\u0930\u094b \u0915\u093e \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"\u090a\u0924\u094d\u0924\u0930 \u0915\u094b\u0930\u093f\u092f\u093e\u0908 \u0935\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"\u0926\u0915\u094d\u0937\u093f\u0923 \u0915\u094b\u0930\u093f\u092f\u093e\u0908 \u0935\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"\u0915\u093c\u0941\u0935\u0948\u0924\u0940 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"\u0915\u0948\u092e\u093e\u0928 \u0926\u094d\u0935\u0940\u092a \u0915\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"\u0915\u093c\u093e\u091c\u093c\u093e\u0916\u093c\u0938\u094d\u0924\u093e\u0928 \u0924\u0947\u0902\u0917\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"\u0932\u093e\u0913\u0938 \u0915\u093e \u0915\u0940\u092a"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"\u0932\u0940\u092c\u093e\u0928\u0940 \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"\u0936\u094d\u0930\u0940 \u0932\u0902\u0915\u093e \u0930\u0942\u092a\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"\u0932\u0940\u092c\u0947\u0930\u093f\u092f\u093e\u0908 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"\u0932\u0938\u094b\u0925\u094b \u0915\u093e \u0932\u094b\u091f\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"\u0932\u093f\u0925\u0941\u0906\u0928\u093f\u092f\u093e\u0908 \u0932\u093f\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"\u0932\u093f\u0925\u0941\u0906\u0928\u093f\u092f\u093e\u0908 \u091f\u093e\u0932\u094b\u0928\u093e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"\u0932\u0941\u0915\u094d\u091c\u093c\u092e\u092c\u0941\u0930\u094d\u0917\u0940 \u0915\u0928\u0935\u0930\u094d\u091f\u0940\u092c\u0932 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"\u0932\u0941\u0915\u094d\u091c\u093c\u092e\u092c\u0941\u0930\u094d\u0917\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"\u0932\u0941\u0915\u094d\u091c\u093c\u092e\u092c\u0941\u0930\u094d\u0917\u0940 \u0935\u0940\u0924\u094d\u0924\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"\u0932\u093e\u091f\u0935\u093f\u092f\u093e\u0908 \u0932\u093e\u091f\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"\u0932\u093e\u091f\u0935\u093f\u092f\u093e\u0908 \u0930\u0942\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"\u0932\u093f\u092c\u093f\u092f\u093e\u0908 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\u092e\u094b\u0930\u0915\u094d\u0915\u093f\u092f \u0926\u093f\u0930\u094d\u0939\u093e\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\u092e\u094b\u0930\u0915\u094d\u0915\u093f\u092f \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"\u092e\u094b\u0932\u094d\u0921\u094b\u0935\u093f\u092f\u093e\u0908 \u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\u092e\u093e\u0926\u093e\u0917\u093e\u0938\u094d\u0915\u0930\u0940 \u0906\u0930\u093f\u0906\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"\u092e\u093e\u0926\u093e\u0917\u093e\u0938\u094d\u0915\u0930\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"\u092e\u0938\u0947\u0926\u094b\u0928\u093f\u092f\u093e\u0908 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"\u092e\u093e\u0932\u0940 \u0915\u093e \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"\u092e\u094d\u092f\u093e\u0928\u092e\u093e\u0930\u0940 \u0915\u094d\u092f\u093e\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"\u092e\u094c\u0902\u0917\u094b\u0932\u0940\u092f\u093e\u0908 \u0924\u0941\u0917\u094d\u0930\u0940\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"\u092e\u093e\u0915\u093e\u0935 \u092a\u093e\u0924\u093e\u091a\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"\u092e\u094c\u0930\u093f\u091f\u093e\u0928\u0940 \u090a\u0917\u0941\u092f\u093e (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"\u092e\u094c\u0930\u093f\u091f\u093e\u0928\u0940 \u090a\u0917\u0941\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"\u092e\u093e\u0932\u094d\u091f\u0940 \u0932\u0940\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"\u092e\u093e\u0932\u094d\u091f\u0940 \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"\u092e\u094b\u0930\u093f\u0936\u093f\u092f\u0938 \u0915\u093e \u0930\u0942\u092a\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"\u092e\u093e\u0932\u0926\u0940\u0935 \u0926\u094d\u0935\u0940\u092a \u0915\u093e \u0930\u0942\u092b\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"\u092e\u093e\u0932\u0935\u0940 \u0915\u094d\u0935\u093e\u091a\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u0928 \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u0928 \u0930\u091c\u0924\u0940 \u092a\u0947\u0938\u094b (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u0928 \u092f\u0941\u0928\u0940\u0926\u093e\u0926 \u0926 \u0908\u0928\u0935\u0947\u0930\u0938\u093f\u0913\u0928 (\u092f\u0941\u0921\u0940\u0906\u0908)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"\u092e\u0932\u0947\u0936\u093f\u092f\u0928 \u0930\u093f\u0902\u0917\u093f\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"\u092e\u094b\u091c\u093c\u093e\u0902\u092c\u0940\u0915 \u090f\u0938\u094d\u0915\u0941\u090f\u0926\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"\u092e\u094b\u091c\u093c\u093e\u0902\u092c\u0940\u0915 \u092a\u0941\u0930\u093e\u0928\u093e \u092e\u0947\u0924\u0940\u0915\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\u092e\u094b\u091c\u093c\u093e\u0902\u092c\u0940\u0915 \u092e\u0947\u0924\u0940\u0915\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"\u0928\u092e\u0940\u092c\u093f\u092f\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"\u0928\u093e\u0908\u091c\u0940\u0930\u0940\u092f\u093e\u0908 \u0928\u093e\u0908\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"\u0928\u0940\u0915\u093e\u0930\u093e\u0917\u0941\u0906\u0908 \u0915\u094b\u0930\u094d\u0926\u094b\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"\u0928\u0940\u0915\u093e\u0930\u093e\u0917\u0941\u0906\u0908 \u0938\u0941\u0935\u0930\u094d\u0923 \u0915\u094b\u0930\u094d\u0926\u094b\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"\u0928\u0947\u0926\u0930\u0932\u0948\u0923\u094d\u0921 \u0917\u0940\u0932\u0921\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"\u0928\u0949\u0930\u094d\u0935\u0947 \u0915\u093e \u0915\u094d\u0930\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"\u0928\u0947\u092a\u093e\u0932\u0940 \u0930\u0941\u092a\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"\u0928\u094d\u092f\u0942\u091c\u093c\u0940\u0932\u0948\u0902\u0921 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"\u0913\u092e\u093e\u0928\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"\u092a\u0928\u093e\u092e\u093e \u0915\u093e \u092c\u093e\u0932\u092c\u094b\u0906"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"\u092a\u0947\u0930\u0942\u0935\u093e\u0908 \u0908\u0902\u091f\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"\u092a\u0947\u0930\u0941\u0935\u093e\u0908 \u0938\u094b\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"\u092a\u0947\u0930\u0941\u0935\u093e\u0908 \u0938\u094b\u0932 (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"\u092a\u093e\u092a\u0941\u0906 \u0928\u094d\u092f\u0941 \u0917\u0940\u0928\u0940 \u0915\u093e \u0915\u0940\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"\u092b\u093c\u093f\u0932\u093f\u092a\u0940\u0928 \u0915\u093e \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"\u092a\u093e\u0915\u093f\u0938\u094d\u0924\u093e\u0928\u0940 \u0930\u0941\u092a\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"\u092a\u094b\u0932\u093f\u0936 \u091c\u093c\u094d\u0932\u0949\u091f\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"\u092a\u0941\u0930\u0924\u0941\u0917\u0940 \u090f\u0938\u094d\u0915\u0941\u0926\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"\u092a\u093e\u0930\u093e\u0917\u0941\u0910\u0908 \u0917\u0941\u0906\u0930\u093e\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"\u0915\u093c\u0924\u093e\u0930\u0940 \u0930\u0940\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"\u0930\u094b\u0921\u0947\u0936\u093f\u092f\u093e\u0908 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"\u0930\u094b\u092e\u093e\u0928\u093f\u092f\u093e\u0908 \u092a\u0941\u0930\u093e\u0928\u0940 \u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"\u0930\u094b\u092e\u093e\u0928\u093f\u092f\u093e\u0908 \u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"\u0938\u0930\u094d\u092c\u093f\u092f\u093e\u0908 \u0926\u093f\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"\u0930\u0942\u0938\u0940 \u0930\u0942\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"\u0930\u0941\u0906\u0901\u0926\u093e \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"\u0938\u093e\u0909\u0926\u0940 \u0930\u093f\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"\u0938\u094b\u0932\u094b\u092e\u0928 \u0926\u094d\u0935\u0940\u092a \u0915\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"\u0938\u0947\u0936\u0947\u0932 \u0930\u0942\u092a\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"\u0938\u0941\u0926\u093e\u0928\u0940 \u092a\u0941\u0930\u093e\u0928\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"\u0938\u0941\u0926\u093e\u0928\u0940 \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"\u0938\u0941\u0926\u093e\u0928\u0940 \u092a\u0941\u0930\u093e\u0928\u093e \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"\u0938\u094d\u0935\u0940\u0921\u0928 \u0915\u094d\u0930\u094b\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"\u0938\u093f\u0902\u0917\u093e\u092a\u0941\u0930 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"\u0938\u0947\u0902\u091f \u0939\u0947\u0932\u0940\u0928\u093e \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"\u0938\u094d\u0932\u094b\u0935\u0947\u0928\u093f\u092f\u093e\u0908 \u0924\u094b\u0932\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"\u0938\u094d\u0932\u094b\u0935\u093e\u0915\u0940 \u0915\u094b\u0930\u0941\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"\u0938\u0940\u092f\u0947\u0930\u093e \u0932\u0940\u092f\u094b\u0928\u0947\u0908 \u0932\u0940\u092f\u094b\u0928\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"\u0938\u094b\u092e\u093e\u0932\u0940 \u0936\u0940\u0932\u0940\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"\u0938\u0941\u0930\u0940\u0928\u093e\u092e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"\u0938\u0941\u0930\u0940\u0928\u093e\u092e \u0917\u0940\u0932\u094d\u0921\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"\u0938\u093e\u0901\u0935 \u0924\u094b\u092e\u0947 \u090f\u0935\u0902 \u092a\u094d\u0930\u0940\u0928\u094d\u0938\u0940\u092a\u0947 \u0915\u093e \u0921\u094b\u092c\u094d\u0930\u093e (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"\u0938\u093e\u0901\u0935 \u0924\u094b\u092e\u0947 \u090f\u0935\u0902 \u092a\u094d\u0930\u0940\u0928\u094d\u0938\u0940\u092a\u0947 \u0915\u093e \u0921\u094b\u092c\u094d\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"\u0938\u094b\u0935\u093f\u092f\u0924 \u0930\u0942\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"\u090f\u0932 \u0938\u093e\u0932\u0935\u093e\u0926\u0930 \u0915\u094b\u0932\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"\u0938\u0940\u0930\u093f\u092f\u093e\u0908 \u092a\u094c\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"\u0938\u094d\u0935\u093e\u091c\u093c\u0940\u0932\u0948\u0923\u094d\u0921 \u0932\u0940\u0932\u093e\u0902\u0917\u0947\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"\u0925\u093e\u0908 \u092c\u093e\u0939\u094d\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"\u0924\u093e\u091c\u0940\u0915\u093c\u0940\u0938\u094d\u0924\u093e\u0928\u0940 \u0930\u0942\u092c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"\u0924\u093e\u091c\u0940\u0915\u093c\u0940\u0938\u094d\u0924\u093e\u0928\u0940 \u0938\u094b\u092e\u094b\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"\u0924\u0941\u0930\u094d\u0915\u092e\u0947\u0928\u0940\u0938\u094d\u0924\u093e\u0928\u0940 \u092e\u093e\u0928\u093e\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"\u0924\u094d\u092f\u0941\u0928\u0940\u0938\u0940 \u0926\u0940\u0928\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u091f\u0949\u0902\u0917\u093e \u092a\u093e\u0908\u0902\u0917\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"\u0924\u0940\u092e\u094b\u0930\u0940 \u090f\u0938\u094d\u0915\u0941\u0926\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"\u0924\u0941\u0930\u094d\u0915\u0940 \u0932\u0940\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"\u0924\u0941\u0930\u094d\u0915\u0940 \u0928\u092f\u093e \u0932\u0940\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"\u0924\u094d\u0930\u0940\u0928\u0940\u0926\u093e\u0926 \u090f\u0935\u0902 \u091f\u094b\u092c\u093e\u0917\u094b \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"\u0924\u093e\u0908\u0935\u093e\u0928\u0940 \u0928\u092f\u093e \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"\u0924\u093e\u0928\u094d\u091c\u093c\u0947\u0928\u093f\u092f\u093e\u0908 \u0936\u0940\u0932\u0940\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"\u092f\u0941\u0915\u094d\u0930\u0947\u0928\u0940 \u0939\u094d\u0930\u0940\u0935\u0928\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"\u092f\u0941\u0915\u094d\u0930\u0947\u0928\u0940 \u0915\u093e\u0930\u094d\u092c\u094b\u0935\u093e\u0928\u0947\u0924\u094d\u091c\u093c"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"\u092f\u0941\u0917\u093e\u0901\u0921\u093e\u0908 \u0936\u0940\u0932\u0940\u0902\u0917 (1996\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"\u092f\u0941\u0917\u093e\u0901\u0921\u093e\u0908 \u0936\u0940\u0932\u0940\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"\u0905\u092e\u0930\u093f\u0915\u0940 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"\u0905\u092e\u0930\u093f\u0915\u0940 \u0921\u0949\u0932\u0930 (\u0905\u0917\u0932\u0947 \u0926\u093f\u0928 \u0915\u093e)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"\u0905\u092e\u0930\u093f\u0915\u0940 \u0921\u0949\u0932\u0930 (\u0907\u0938\u0940 \u0926\u093f\u0928 \u0915\u093e)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"\u090a\u0930\u0941\u0917\u0941\u090f \u0915\u093e \u092a\u0947\u0938\u094b \u0906\u0928 \u090a\u0928\u0940\u0926\u093e\u0926\u094b\u0938 \u0908\u0902\u0926\u0947\u0915\u094d\u0938\u093e\u0926\u093e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"\u090a\u0930\u0941\u0917\u0941\u090f \u0915\u093e \u092a\u0947\u0938\u094b (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"\u090a\u0930\u0941\u0917\u0941\u090f \u0915\u093e \u090a\u0930\u0941\u0917\u0941\u0906\u092f\u094b \u092a\u0947\u0938\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"\u090a\u091c\u093c\u092c\u0947\u0915 \u0938\u0941\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"\u0935\u0947\u0928\u0947\u091c\u093c\u0941\u090f\u0932\u093e\u0908 \u092c\u094b\u0932\u093f\u0935\u093e\u0930 (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"\u0935\u0947\u0928\u0947\u091c\u093c\u0941\u090f\u0932\u093e\u0908 \u092c\u094b\u0932\u093f\u0935\u093e\u0930 (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"\u0935\u0947\u0928\u0947\u091c\u093c\u0941\u090f\u0932\u093e\u0908 \u092c\u094b\u0932\u093f\u0935\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"\u0935\u0940\u092f\u0924\u0928\u093e\u092e\u0940 \u0921\u0949\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"\u0935\u0928\u0941\u0906\u091f\u0941 \u0935\u091f\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"\u0935\u0947\u0938\u094d\u091f\u0930\u094d\u0928 \u0938\u092e\u094b\u0906 \u0924\u093e\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"(\u0938\u0940\u090f\u092b\u093c\u090f) \u092b\u094d\u0930\u093e\u0928\u0938\u0940\u0938\u0940 \u092b\u0947\u0926\u0930\u0947\u0936\u0928\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"\u0930\u091c\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"\u0938\u094b\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"\u090f\u0915\u094d\u092f\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"\u090f\u092e\u094d\u092f\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"\u092f\u0942\u0930\u094b\u092a\u0940 \u090f\u0915\u093e\u090a\u0902\u091f \u0915\u093e \u092f\u0941\u0928\u0940\u091f (\u090f\u0915\u094d\u0938 \u092c\u0940 \u0938\u0940)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"\u092f\u0942\u0930\u094b\u092a\u0940 \u090f\u0915\u093e\u090a\u0902\u091f \u0915\u093e \u092f\u0941\u0928\u0940\u091f (\u090f\u0915\u094d\u0938 \u092c\u0940 \u0921\u0940)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"\u0908\u0938\u094d\u091f \u0915\u0930\u093f\u092c\u093f\u092f\u0928 \u0921\u0949\u0932\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"\u0938\u094d\u092a\u0947\u0936\u093f\u092f\u0932 \u0921\u094d\u0930\u093e\u0908\u0902\u0917 \u0930\u093e\u0908\u091f\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"\u092f\u0942\u0930\u094b\u092a\u0940 \u092e\u0941\u0926\u094d\u0930\u093e (\u090f\u0915\u094d\u092f\u0941)"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"\u092b\u094d\u0930\u093e\u0928\u0938\u0940\u0938\u0940 \u0938\u0941\u0935\u0930\u094d\u0923 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"\u092b\u094d\u0930\u093e\u0928\u0938\u0940\u0938\u0940 \u092f\u0941\u0906\u0908\u0938\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"\u092b\u094d\u0930\u093e\u0928\u0938\u0940\u0938\u0940 \u092b\u0947\u0926\u0947\u0930\u0947\u0936\u0928\u0940 \u092c\u0940\u0938\u0940\u090f\u0906\u0913 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"\u092a\u0948\u0932\u0947\u0921\u093f\u092f\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"\u092b\u094d\u0930\u093e\u0928\u0938\u0940\u0938\u0940 \u092b\u0947\u0926\u0947\u0930\u0947\u0936\u0928\u0940 \u092b\u094d\u0930\u093e\u0901"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"\u092a\u094d\u0932\u0948\u091f\u0940\u0928\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"\u0930\u0940\u0928\u0948\u091f \u092b\u0902\u0921\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"\u091f\u0947\u0938\u094d\u091f\u0940\u0902\u0917 \u0915\u0930\u0928\u0938\u0940 \u0915\u094b\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"\u0905\u091c\u094d\u091e\u093e\u0924 \u092f\u093e \u0905\u0935\u0948\u0927 \u092e\u0941\u0926\u094d\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"\u092f\u092e\u0928\u0940 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"\u092f\u092e\u0928\u0940 \u0930\u0940\u092f\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"\u092f\u0941\u0917\u094b\u0938\u094d\u0932\u093e\u0935\u0940 \u0939\u093e\u0930\u094d\u0921 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"\u092f\u0941\u0917\u094b\u0938\u094d\u0932\u093e\u0935\u0940 \u0928\u094b\u0935\u0940\u092f (\u0928\u092f\u0947) \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"\u092f\u0941\u0917\u094b\u0938\u094d\u0932\u093e\u0935\u0940 \u0915\u0928\u0935\u0930\u094d\u091f\u0940\u092c\u0932 \u0926\u0940\u0928\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"\u0926\u0915\u094d\u0937\u093f\u0923 \u0905\u092b\u093c\u094d\u0930\u0940\u0915\u0940 \u0930\u0945\u0923\u094d\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"\u091c\u093c\u093e\u092e\u094d\u092c\u093f\u092f\u093e\u0908 \u0915\u094d\u0935\u093e\u091a\u093e (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"\u091c\u093c\u093e\u092e\u094d\u092c\u093f\u092f\u093e\u0908 \u0915\u094d\u0935\u093e\u091a\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"\u091c\u093c\u093e\u0908\u0930\u0940 \u0928\u092f\u0947 \u091c\u093c\u093e\u0908\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"\u091c\u093c\u093e\u0908\u0930\u0940 \u091c\u093c\u093e\u0908\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"\u091c\u093c\u0940\u092e\u094d\u092c\u093e\u092c\u0935\u0947\u0908 \u0921\u0949\u0932\u0930"_s)
		})
	}));
	return data;
}

CurrencyNames_brx::CurrencyNames_brx() {
}

$Class* CurrencyNames_brx::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_brx, name, initialize, &_CurrencyNames_brx_ClassInfo_, allocate$CurrencyNames_brx);
	return class$;
}

$Class* CurrencyNames_brx::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun