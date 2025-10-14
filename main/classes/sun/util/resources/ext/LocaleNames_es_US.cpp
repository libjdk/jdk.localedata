#include <sun/util/resources/ext/LocaleNames_es_US.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_es_US_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_es_US::*)()>(&LocaleNames_es_US::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_es_US_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_es_US",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_US_MethodInfo_
};

$Object* allocate$LocaleNames_es_US($Class* clazz) {
	return $of($alloc(LocaleNames_es_US));
}

void LocaleNames_es_US::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_es_US::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AN"_s),
			$of("Antillas Neerlandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Islas \u00c5land"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bahr\u00e9in"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Islas Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Isla Navidad"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Rep\u00fablica Checa"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"S\u00e1hara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Islas Falkland (Malvinas)"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hong-Kong, Regi\u00f3n administrativa especial de China"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirguist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoras"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macao, Regi\u00f3n administrativa especial de China"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Pa\u00edses Bajos"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Isla Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pap\u00faa Nueva Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakist\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Territorios Palestinos"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Ruman\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Arabia Saud\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territorios Australes Franceses"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Islas Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad y Tabago"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Islas V\u00edrgenes de los Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abjaso"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"av\u00e9stico"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragon\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azer\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bengal\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosnio"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("checheno"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslavo eclesi\u00e1stico"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("vasco"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidjiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fero\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fris\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"ga\u00e9lico man\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazajo"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("jemer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"canar\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("cachemiro"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdo"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"c\u00f3rnico"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirghiz"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburgu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshal\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("bokmal noruego"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("nynorsk noruego"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occitano (despu\u00e9s del 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"os\u00e9tico"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("reto-romance"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kiroundi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundan\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tayiko"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigri\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setchwana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonga (Islas Tonga)"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeko"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"val\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		})
	});
}

LocaleNames_es_US::LocaleNames_es_US() {
}

$Class* LocaleNames_es_US::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es_US, name, initialize, &_LocaleNames_es_US_ClassInfo_, allocate$LocaleNames_es_US);
	return class$;
}

$Class* LocaleNames_es_US::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun