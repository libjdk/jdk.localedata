#include <sun/util/resources/cldr/ext/LocaleNames_se_FI.h>

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

$MethodInfo _LocaleNames_se_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_se_FI::*)()>(&LocaleNames_se_FI::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_se_FI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_se_FI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_se_FI_MethodInfo_
};

$Object* allocate$LocaleNames_se_FI($Class* clazz) {
	return $of($alloc(LocaleNames_se_FI));
}

void LocaleNames_se_FI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_se_FI::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"M\u00e1ilbmi"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrihka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Davvi-Amerihk\u00e1 ja Gaska-Amerihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Lulli-Amerihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Oarje-Afrihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Gaska-Amerihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Nuorta-Afrihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Davvi-Afrihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Gaska-Afrihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Lulli-Afrihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerihka"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Davvi-Amerihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesia guovlu"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latiinnala\u0161 Amerihk\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia ja Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Euroav\u00e1dat"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambo\u017ea"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Ovttastuvvan Na\u0161uvnnat"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"vilgesruo\u0161\u0161agiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fi\u017eigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakhgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"kambo\u017eagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thaigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"a\u010dehgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoragiella"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ar\u00e1bala\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"kiinn\u00e1la\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\u00e1lkes kiinn\u00e1la\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\u00e1rbevirola\u0161 kiinn\u00e1la\u0161"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"orrut \u010d\u00e1llojuvvot"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"dovdameahttun \u010d\u00e1llin"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"nuortariikkala\u0161 duiskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\u0161veicala\u0161 duiskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"austr\u00e1liala\u0161 ea\u014bgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"kan\u00e1dala\u0161 ea\u014bgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"brihttala\u0161 ea\u014bgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"amerihk\u00e1la\u0161 ea\u014bgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"esp\u00e1njala\u0161 sp\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"meksikola\u0161 sp\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"kan\u00e1dala\u0161 fr\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"\u0161veicala\u0161 fr\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"belgiala\u0161 holl\u00e1nddagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"brasiliala\u0161 portug\u00e1lagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portug\u00e1lala\u0161 portug\u00e1lagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"mold\u00e1viala\u0161 rom\u00e1niagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"stand\u00e1rda ar\u00e1bagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"latiinna-amerihkala\u0161 sp\u00e1nskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"\u00e1lkes kiinn\u00e1giella"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"koptala\u0161 kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"kiinn\u00e1 kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhista kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"etiohpala\u0161 kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"gregoriala\u0161 kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"etiohpala\u0161-amete-alem kaleandar"_s)
		})
	}));
	return data;
}

LocaleNames_se_FI::LocaleNames_se_FI() {
}

$Class* LocaleNames_se_FI::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_se_FI, name, initialize, &_LocaleNames_se_FI_ClassInfo_, allocate$LocaleNames_se_FI);
	return class$;
}

$Class* LocaleNames_se_FI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun