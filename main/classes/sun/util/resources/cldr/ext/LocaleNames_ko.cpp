#include <sun/util/resources/cldr/ext/LocaleNames_ko.h>

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

$MethodInfo _LocaleNames_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_ko::*)()>(&LocaleNames_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ko",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ko_MethodInfo_
};

$Object* allocate$LocaleNames_ko($Class* clazz) {
	return $of($alloc(LocaleNames_ko));
}

void LocaleNames_ko::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_GH, u"\uac00\ub098"_s);
	$var($String, metaValue_key_nu, u"\uc22b\uc790"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"\ucf5c\ub85c\uadf8\ub2c8\uc548\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"\uc624\uac80 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"\ubbf8\ub780\ub370\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"\uae30\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"\uc557\uc0bc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"\ub9c8\ub974\uc640\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"\ud0c0\uc774 \ud0d0\ud0d0 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"\ud0c0\uadf8\ubc18\uc640 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"\uc774\ubaa8\ud2f0\ucf58"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"\ucc28\ud06c\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"\uace0\ub300 \uc774\uc9d1\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"\ub77c\uc790\uc2a4\ud0c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"\ud30c\uc2a4\ud30c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"\ud300\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"\ud14c\uc870\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"\ub77c\ud30c\ub274\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"\ud14c\ub808\ub178\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"\uc5b4\uc13c\uc158 \uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"\ub77c\ub85c\ud1b5\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"\ud14c\ud23c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"\uc548\ub3c4\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"\uc544\ub78d\uc5d0\ubbf8\ub9ac\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"\ud50c\ub77c\ub9dd\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"\uc544\ud504\uac00\ub2c8\uc2a4\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"\uc564\ud2f0\uac00 \ubc14\ubd80\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"\uc5d0\ud2f0\uc624\ud53c\uc544\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"\uae38\ub77c\ud0a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"\uc575\uadc8\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"\uc2dc\uac04\ub300"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"\uc54c\ubc14\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"\uc544\ub974\uba54\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"\ud161\uacfc\ub974 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"\uc559\uace8\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"\ub0a8\uadf9 \ub300\ub959"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"\uc544\ub974\ud5e8\ud2f0\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"\uba85\ubb38 \ud30c\ub77c\ud2f0\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"\uc544\uba54\ub9ac\uce78 \uc0ac\ubaa8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"\uc624\uc2a4\ud2b8\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"\uc544\ub8e8\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\uc62c\ub780\ub4dc \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"\ubbf8\uc608\ub124\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"\uc544\uc81c\ub974\ubc14\uc774\uc794"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"\ubcf4\uc2a4\ub2c8\uc544 \ud5e4\ub974\uccb4\uace0\ube44\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"\ubc14\ubca0\uc774\ub3c4\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"\uc138\ubd80\uc544\ub178\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"\ubc29\uae00\ub77c\ub370\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"\ucfe0\ubbf9\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"\ubca8\uae30\uc5d0"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"\uc911\uc138 \uace0\uc9c0 \ub3c5\uc77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"\ubd80\ub974\ud0a4\ub098\ud30c\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"\ubd88\uac00\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"\ubc14\ub808\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"\ubd80\ub8ec\ub514"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"\ubca0\ub0c9"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"\uc0dd\ubc14\ub974\ud154\ub808\ubbf8"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"\ubc84\ubba4\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"\ucfe0\ud14c\ub124\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"\uc5d8\uc988\uc57c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"\ube0c\ub8e8\ub098\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"\ubcfc\ub9ac\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"\ub124\ub35c\ub780\ub4dc\ub839 \uce74\ub9ac\ube0c"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"\ube0c\ub77c\uc9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"\ubc14\ud558\ub9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"\uc18c\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"\ubd80\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"\ubd80\ubca0\uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"\ubcf4\uce20\uc640\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"\ubca8\ub77c\ub8e8\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"\ubca8\ub9ac\uc988"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"\uc2dc\ud654\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"\ud398\ub974\uc2dc\uc548\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"\ud788\ube0c\ub9ac \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"\uce90\ub098\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"\ucf54\ucf54\uc2a4 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"\ub9c8\uc794\ub370\ub77c\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"\ucf69\uace0-\ud0a8\uc0e4\uc0ac"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"\uc911\uc559 \uc544\ud504\ub9ac\uce74 \uacf5\ud654\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"\ucf69\uace0-\ube0c\ub77c\uc790\ube4c"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"\uc2a4\uc704\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"\ucf54\ud2b8\ub514\ubd80\uc544\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"\ucfe1 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"\uce60\ub808"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"\uce74\uc774\uc2dc \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"\uce74\uba54\ub8ec"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"\uc911\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"\ucf5c\ub86c\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"\ud074\ub9ac\ud37c\ud134\uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"\ucf54\uc2a4\ud0c0\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"\ucfe0\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"\uce74\ubcf4\ubca0\ub974\ub370"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"\ud034\ub77c\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"\ud06c\ub9ac\uc2a4\ub9c8\uc2a4\uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"\ud0a4\ud504\ub85c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"\ubc1c\ub9ac \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"\uccb4\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"\uc774\uce74\uc8fd\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"\ub3c5\uc77c"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"\uace0\ub300 \uace0\uc9c0 \ub3c5\uc77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"\uc544\uccb4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"\uce58\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"\ub514\uc5d0\uace0 \uac00\ub974\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"\uace0\uc544 \ucf58\uce78\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"\ub370\ubc14\ub098\uac00\ub9ac \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"\uc9c0\ubd80\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"\ub374\ub9c8\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"\uc544\ucf5c\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"\uace4\ub514\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"\ube0c\ub77c\uc720 \uc810\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"\ube0c\ub77c\ubbf8"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"\ub3c4\ubbf8\ub2c8\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"\uc544\ub974\uba54\ub2c8\uc544 \uc18c\ubb38\uc790 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"\ub3c4\ubbf8\ub2c8\uce74 \uacf5\ud654\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"\uace0\ub860\ud0c8\ub85c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"\uace0\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"\uba54\uc774\ud14c\uc774 \ub9c8\uc609 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"\uc8fc\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"\ud2f0\uadf8\ub808\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"\ud0c0\ud06c\ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"\uc54c\uc81c\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"\ud310\uac00\uc2dc\ub09c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"\ubc18\uac01"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"\ud314\ub808\ube44\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"\uc138\uc6b0\ud0c0 \ubc0f \uba5c\ub9ac\uc57c"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"\uce58\ube0c\ucc28\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"\ud31c\ud321\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"\uc5d0\ucf70\ub3c4\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"\ud30c\ud53c\uc544\uba3c\ud1a0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"\uc544\ub2f9\uba54\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"\uc5d0\uc2a4\ud1a0\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"\ud2f0\ube0c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"\uc774\uc9d1\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"\uc11c\uc0ac\ud558\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"\ucc28\uac00\ud0c0\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"\ud314\ub77c\uc6b0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"\ucd94\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"\uce58\ub204\ud06c \uc790\uace4"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"\ub9c8\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"\uce58\ud398\uc6b0\uc580"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"\ucd09\ud1a0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"\uccb4\ub85c\ud0a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"\uc5d0\ub9ac\ud2b8\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"\uc2a4\ud398\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"\uc5d0\ud2f0\uc624\ud53c\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"\uc720\ub7fd \uc5f0\ud569"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"\uc5d8\ub78c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"\uc591\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"\uc720\ub85c\uc874"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"\uc0e4\uc774\uc5d4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"\uad6c\uc790\ub77c\ud2b8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"\uc778\ub354\uc2a4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"\uc544\ub514\uac8c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"\ud280\ub2c8\uc9c0 \uc544\ub78d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"\ud540\ub780\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"\ud53c\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"\ud3ec\ud074\ub79c\ub4dc \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"\ubbf8\ud06c\ub85c\ub124\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"\ubc29\uc5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"\ud398\ub85c \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"\ud0c0\ubc00 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"\ud504\ub791\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"\ud06c\ud3a0\ub808 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"\ud1a0\ucf08\ub77c\uc6b0\uc81c\ub3c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"\uac8c\ub974\ubcf4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"\uc778\ub3c4\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"\uace0\ub300 \uadf8\ub9ac\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"\uac00\ubd09"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"\ucc28\ud6c4\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"\ubcf4\ud2f1\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"\uc601\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"\ub098\uc774\uc9c0\ub9ac\uc544 \ud53c\uc9c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"\uadf8\ub808\ub098\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"\uc870\uc9c0\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"\ud504\ub791\uc2a4\ub839 \uae30\uc544\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"\uac74\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(metaValue_GH)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"\ud0c0\uc774 \ub808 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"\uc9c0\ube0c\ub864\ud130"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"\uc544\ud504\ub9ac\ud790\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"\uadf8\ub9b0\ub780\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"\uc911\uc138 \uc601\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"\uac10\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"\uae30\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"\uacfc\ub4e4\ub8e8\ud504"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"\uc801\ub3c4 \uae30\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"\uadf8\ub9ac\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"\uc0ac\uc6b0\uc2a4\uc870\uc9c0\uc544 \uc0ac\uc6b0\uc2a4\uc0cc\ub4dc\uc704\uce58 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"\uacfc\ud14c\ub9d0\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"\uad0c"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"\uae30\ub2c8\ube44\uc0ac\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"\ud2c0\ub9c1\uae43\uc871\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"\ud074\ub9c1\uc628\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"\uc2e0 \ud0c0\uc774 \ub8e8\uc5d0"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"\uac00\uc774\uc544\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"\uc18c\ub77c\ub2c8 \ucfe0\ub974\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"\uc5b8\uc5b4 \uad00\ub828 \ub0b4\uc6a9 \uc5c6\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"\uc904\uccb8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"\ud0c8\ub9ac\uc26c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"\ud64d\ucf69(\uc911\uad6d \ud2b9\ubcc4\ud589\uc815\uad6c)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"\ubc14\uc774 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"\ud5c8\ub4dc \ub9e5\ub3c4\ub110\ub4dc \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"\uc628\ub450\ub77c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"\ud06c\ub85c\uc544\ud2f0\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"\uc544\uadf8\ud584\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"\ub3c5\uc77c\uc5b4(\uc2a4\uc704\uc2a4)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"\uc774\uc2ac\ub78c\ub825(\uc6c0 \uc54c \ucfe0\ub77c)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"\uc544\uc774\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"\ud5dd\uac00\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"\ud0c0\ub9c8\uc139\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"\uce74\ub098\ub9ac\uc544 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"\ubbfc\ub09c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"\uc778\ub3c4\ub124\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"\uace0\ub300 \ud398\ub974\uc2dc\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"\uce74\uc57c \ub9ac\uc2dd \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"\uc544\uc77c\ub79c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"\ub098\ud3f4\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"\ub290\ub4c0\uce74 \ubc29\uc5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"\ub098\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"\uc790\uc790\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"\ud0d5\uad6c\ud2b8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"\uc774\uc2a4\ub77c\uc5d8"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"\ub098\ubc14\ud14c\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"\ub9e8\uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"\uc778\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"\uc720\ub7fd \uc815\ub82c \uaddc\uce59"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"\uc601\uad6d\ub839 \uc778\ub3c4\uc591 \uc2dd\ubbfc\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"\uc774\ub77c\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"\uc774\ub780"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"\uc544\uc774\uc2ac\ub780\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"\uc774\ud0c8\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"\uc218\ud559 \uae30\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"\ud0dc\uad6d \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Computer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"\ubc45\uace8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"\uc800\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"\uc774\uc2ac\ub78c\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"\uc790\uba54\uc774\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"\ubcb5\uace8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"\uc694\ub974\ub2e8"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"\uc77c\ubcf8"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"\uc911\uc138 \ud6c4\uae30 \ud504\ub791\uc2a4\uc5b4(1606\ub144\uae4c\uc9c0)"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"\uc544\uc774\ub204\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"\uba58\ub370 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"\uad6c\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"\ub2c8\uc544\uc0ac \ud1b5\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"\uce78\ub098\ub2e4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"\uce74\uc57c \ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"\uc2e4\ub2f4\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"\uace0\uc9c0 \ub3c5\uc77c\uc5b4(\uc2a4\uc704\uc2a4)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"\uc18c\ub9ac\ub098\ub294 \ub300\ub85c \uc815\ub82c \uc21c\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"\ubd88\uad50\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"\ucf00\ub0d0"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"\ub77c\ud2f4 \uc544\uba54\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"\ud0a4\ub974\uae30\uc2a4\uc2a4\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"\uce84\ubcf4\ub514\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"\ud0a4\ub9ac\ubc14\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"\ucf54\ubaa8\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"\uc138\uc778\ud2b8\ud0a4\uce20 \ub124\ube44\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"\uce78\ub098\ub2e4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"\uad6c\uc804 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"\ubd81\ud55c"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"\ub300\ud55c\ubbfc\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"\ud3f4\ub77c\ub4dc \ud45c\uc74c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"\ucfe0\uc6e8\uc774\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"\ud1a0\ud06c \ud53c\uc2e0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"\ucf00\uc774\ub9e8 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"\uce74\uc790\ud750\uc2a4\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"\ud0a4\ub9b4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"\ub77c\uc624\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"\ub808\ubc14\ub17c"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"\uc138\uc778\ud2b8\ub8e8\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"\ud398\ub2c8\ud0a4\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"\uace0\ub300\uad50\ud68c\uc2ac\ub77c\ube0c\uc5b4 \ud0a4\ub9b4\ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"\uadf8\uc704\uce5c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"\ub8e8\ub0981918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"\uc800\uc9c0 \ub3c5\uc77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"\ub9ac\ud788\ud150\uc288\ud0c0\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"\uc2a4\ub9ac\ub791\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"\uc544\uce74\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"\ucf65\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"\ub77c\uc774\ubca0\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"\ub808\uc18c\ud1a0"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"\ubd81 \ud314\ub77c\ube44 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"\ub9ac\ud22c\uc544\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"\ub8e9\uc148\ubd80\ub974\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"\ub77c\ud2b8\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"\uac00\ud0c0\uce74\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"\uc18c\ub77c \uc19c\ud3ad \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"\ub9ac\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"\ub77c\ub514\ub178\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"\ubd84\uc870\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"\ub77c\uc6b0\ud0a4\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"\ub77c\ud55c\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"\ub9c8\ud558\uc790\ub2c8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"\ub791\uae30\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"\ud0c0\ub098 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"\ubaa8\ub85c\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"\ubaa8\ub098\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"\ubab0\ub3c4\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"\ub204\uc288 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"\ubaac\ud14c\ub124\uadf8\ub85c"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"\uc0dd\ub9c8\ub974\ud0f1"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"\ub78c\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"\ub9c8\ub2e4\uac00\uc2a4\uce74\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"\ub9c8\uc15c \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"\uc54c\ub958\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"\ud0c0\uc774 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"\ubc14\uc774 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"\ubd81\ub9c8\ucf00\ub3c4\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"\ub9d0\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"\ubbf8\uc580\ub9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"\ubabd\uace8"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"\ub124\uc640\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"\ub9c8\uce74\uc624(\uc911\uad6d \ud2b9\ubcc4\ud589\uc815\uad6c)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"\ubd81\ub9c8\ub9ac\uc544\ub098\uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"\ub9c8\ub974\ud2f0\ub2c8\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"\ubaa8\ub9ac\ud0c0\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"\ubaac\ud2b8\uc138\ub77c\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"\ubab0\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"\uc720\uc5d4 \uc9c0\uba85\uc804\ubb38\uac00 \uadf8\ub8f9(UNGEGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"\ubaa8\ub9ac\uc154\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"\ub0a8\ubd80 \uc54c\ud0c0\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"\ubab0\ub514\ube0c"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"\ub9d0\ub77c\uc704"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"\uba55\uc2dc\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"\uc77c\ubcf8\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"\ub9d0\ub808\uc774\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"\ubaa8\uc7a0\ube44\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"\uba85\ubb38 \ud314\ub77c\ube44 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"\ub098\ubbf8\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"\uc0ac\ud558\ub77c \uc0ac\ub9c9 \uc774\ub0a8 \uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"\ud788\ube0c\ub9ac\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"\uc0ac\uc804 \uc815\ub82c\uc21c"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"\ub274\uce7c\ub808\ub3c4\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"\ud1b5\ud569 \uac1c\uc815 \ud45c\uae30\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"\ub2c8\uc81c\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"\ub178\ud37d\uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"\ub098\uc774\uc9c0\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"\ud0c0\ub85c\ucf54\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"\uc194\ud130 \ud314\ub77c\ube44 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"\ub2c8\uce74\ub77c\uacfc"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"\ud30c\ud558\uc6b0 \ubabd \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"\ub124\ub35c\ub780\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"\ub178\ub974\uc6e8\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"\ub124\ud314"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"\ub098\uc6b0\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"\ub2c8\uc6b0\uc5d0"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"\ud398\ub2c8\ud0a4\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"\ub86c\ubcf4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"\ud2b8\uc2ec\uc2dc\uc548\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"\ub274\uc9c8\ub79c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"\uba54\ub85c\uc5d0 \ud544\uae30\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"\uc9d1\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"\uba54\ub85c\uc5d0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"\ud06c\ub9ac\ubbfc \ud130\ud0a4\uc5b4; \ud06c\ub9ac\ubbfc \ud0c0\ud0c0\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"\uace0\ub300 \uc601\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"\uc624\ub9cc"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"\uc559\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"\uc138\uc774\uc178 \ud06c\ub9ac\uc62c \ud504\ub791\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"\uace0\ub300 \ud398\ub974\uc2dc\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"\ud30c\ub098\ub9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"\uc774\uc2ac\ub78c \uc0c1\uc6a9\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"\uce74\uc288\ube44\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"\ud398\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"\ud504\ub791\uc2a4\ub839 \ud3f4\ub9ac\ub124\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"\ud30c\ud478\uc544\ub274\uae30\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"\ud544\ub9ac\ud540"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"\ud30c\ud0a4\uc2a4\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"\ud3f4\ub780\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"\uc774\uc6d0\ub3c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"\uc0dd\ud53c\uc5d0\ub974 \ubbf8\ud074\ub871"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"\ud54f\ucf00\uc5b8 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"\ud478\uc5d0\ub974\ud1a0\ub9ac\ucf54"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"\ud314\ub808\uc2a4\ud0c0\uc778 \uc9c0\uad6c"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"\ubc1c\ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"\ud3ec\ub974\ud22c\uac08"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"\ud314\ub77c\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"\ub2c8\uc544\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"\uadf8\ub9ac\uc2a4\uc5b4 \uc18c\ubb38\uc790 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"\ud30c\ub77c\uacfc\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"\ud23c\ubd80\uce74\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"\ud788\ube0c\ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"\uce74\ud0c0\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"\uc2a4\ucf54\ud2c0\ub79c\ub4dc \ud45c\uc900 \uc601\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"\ub2c8\uc6e8\uc5b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"\uc624\uc138\uc544\ub2c8\uc544 \uc678\uacfd"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"\ub808\uc988\uae30\uc548\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"\ud22c\ubc1c\ub8e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"\ud0dc\uad6d \ubca0\ud2b8\ub0a8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"\uc138\uacc4"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"\uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"\ubd81\uc544\uba54\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"\ub808\uc704\ub2c8\uc639"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"\ub0a8\uc544\uba54\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"\ub9c1\uad6c\uc544 \ud504\ub791\uce74 \ub178\ubc14"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"\ub85c\ubc18\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"\ud3f0\ud2f1\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"\ub808\uc7a5 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"\uc624\uc138\uc544\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"\ub8e8\ub9c8\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"\uc138\ub974\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"\ubbc0\ub85c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"\ub7ec\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"\ub974\uc644\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"\ub9c8\ub2c8\uad50 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"\uc6b0\uac00\ub9ac\ud2b8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"\uce74\ub85c\uc288\ud2f0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"\uc0ac\uc6b0\ub514\uc544\ub77c\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"\ud3fc\ud398\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"\ub9cc\ub2e4\uc774\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"\uc194\ub85c\ubaac \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"\ud0c0\uc0ac\uc640\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"\uc11c\ubd80 \uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"\uc138\uc774\uc178"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"\uc218\ub2e8"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"\uc911\uc559 \uc544\uba54\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"\uc2a4\uc6e8\ub374"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"\ub3d9\ubd80 \uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"\uc544\ub78c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"\ub85c\ub9c8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"\ubd81\ubd80 \uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"\uc2f1\uac00\ud3ec\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"\uc138\uc778\ud2b8\ud5ec\ub808\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"\uc904\ubc14\uafc8 - \uc881\uac8c"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"\uc911\ubd80 \uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"\uc2ac\ub85c\ubca0\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"\ub0a8\ubd80 \uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"\uc2a4\ubc1c\ubc14\ub974\uc81c\ub3c4-\uc580\ub9c8\uc6ec\uc12c"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"\uc544\uba54\ub9ac\uce74 \ub300\ub959"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"\uc2ac\ub85c\ubc14\ud0a4\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"\ubc14\ubb44 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"\uc6b8\ub808\uc544\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"\uc2dc\uc5d0\ub77c\ub9ac\uc628"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"\uc0b0\ub9c8\ub9ac\ub178"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"\uc138\ub124\uac08"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"\uc18c\ub9d0\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"\ub9c8\ud478\ub465\uad70\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"\uc544\ub77c\ud30c\ud638\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"\uace0\ub300 \ud0c0\ubc00 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"\uc218\ub9ac\ub0a8"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"\ub0a8\uc218\ub2e8"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"\uc0c1\ud22c\uba54 \ud504\ub9b0\uc2dc\ud398"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"\uc54c\uc81c\ub9ac \uc544\ub78d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"\uc5d8\uc0b4\ubc14\ub3c4\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"\uc544\ub78d\uc5b4(\ub098\uc988\ub514)"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"\uc2e0\ud2b8\ub9c8\ub974\ud134"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"\uc2dc\ub9ac\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"\uc57c\uc624\uc871\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"\uc5d0\uc2a4\uc640\ud2f0\ub2c8"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"\uc544\ub77c\uc640\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"\uc774\uc9d1\ud2b8 \uc544\ub78d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"\ubaa8\ub85c\ucf54 \uc544\ub78d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"\uc58d\ud398\uc138\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"\ud2b8\ub9ac\uc2a4\ud0c4\ub2e4\ucfe0\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"\uc544\uc218\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"\ubbf8\uad6d \uacc4\ub7c9\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"\ubd81\ubd80 \uc544\uba54\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"\ud130\ud06c\uc2a4 \ucf00\uc774\ucee4\uc2a4 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"\uc591\ubcf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"\ucc28\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"\uc800\uc9c0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"\ud504\ub791\uc2a4 \ub0a8\ubd80 \uc9c0\ubc29"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"\ud1a0\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"\ud0dc\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"\ud0c0\uc9c0\ud0a4\uc2a4\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"\uce74\ub9ac\ube0c \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"\ud1a0\ucf08\ub77c\uc6b0"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"\ub3d9\ud2f0\ubaa8\ub974"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"\uc618\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"\ud55c\uae00 \uc790\uc74c\uc73c\ub85c \uac80\uc0c9"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"\ud280\ub2c8\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"\ud1b5\uac00"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"\ud130\ud0a4"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"\ud2b8\ub9ac\ub2c8\ub2e4\ub4dc \ud1a0\ubc14\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"\ud22c\ubc1c\ub8e8"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"\ub300\ub9cc"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"\uc544\uc2a4\ud22c\ub9ac\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"\ub8e8\uc2e0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"\uc624\ub974\ud63c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"\ud0c4\uc790\ub2c8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"\ud06c\uc640\uc2dc\uc624\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"\ucfe0\ub2e4\uc640\ub514 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"\uc6b0\ud06c\ub77c\uc774\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"\uc544\ub85c\ub9c8\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"\ub3d9\uc544\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"\ud22c\ube44\ub2c8\uc548\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"\ucf69\uace0 \uc2a4\uc640\ud790\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"\ub0a8\uc544\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"\ud558\uc774\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"\ub3d9\ub0a8\uc544\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"\uc6b0\uac04\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"\ud558\uce74\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"\ubcd1\uc74c\uc21c"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"\ub0a8\uc720\ub7fd"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"\uc2e0\ud560\ub77c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"\ubbf8\uad6d\ub839 \ud574\uc678 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"\uad6d\uc81c\uc5f0\ud569"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"\ubbf8\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"\ud558\uc640\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"\uc911\uad6d\uc5b4 \uac04\uccb4 \uc815\ub82c \uc21c\uc11c (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"\uc6b0\ub8e8\uacfc\uc774"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"\ud504\ub7ec\uc2dc\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"\uc911\uc559 \ubaa8\ub85c\ucf54 \ud0c0\ub9c8\uc9c0\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"\uc790\ud68d\uc21c"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"\ub290\uae30\uc5e0\ubcf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"\ubc14\ud2f0\uce78 \uc2dc\uad6d"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"\uace0\ub300 \ud504\ub85c\ubc29\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"\uc138\uc778\ud2b8\ube48\uc13c\ud2b8\uadf8\ub808\ub098\ub518"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"\ubca0\ub124\uc218\uc5d8\ub77c"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"\uc601\uad6d\ub839 \ubc84\uc9c4\uc544\uc77c\ub79c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"\ubbf8\uad6d\ub839 \ubc84\uc9c4\uc544\uc77c\ub79c\ub4dc"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"\ubca0\ud2b8\ub0a8"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"\ubc14\ub204\uc544\ud22c"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"\ub178\uac00\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"\ub974\uc640\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\uace0\ub300 \ub178\ub974\uc6e8\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"\uc624\uc2a4\ud2b8\ub784\ub77c\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"\uba5c\ub77c\ub124\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"\uc648\ub9ac\uc2a4-\ud478\ud22c\ub098 \uc81c\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"\uc804\ud1b5 \uc5ed\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"\ubbf8\ud06c\ub85c\ub124\uc2dc\uc544 \uc9c0\uc5ed"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"\uc751\uacf0\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"\ub77c\ucf54\ud0c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"\uc7ac\ubb34 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"\ud5f5\ubc88\uc2dd \ub85c\ub9c8\uc790 \ud45c\uae30\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"\ud638\ud658\uc131\uc744 \uc704\ud574 \uc774\uc804 \uc815\ub82c \uc21c\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"\uc6d4\uc800\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"\uc0ac\ubaa8\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"\ubc14\uc0ac\ubc14\ud750 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"\uba54\uc774\ud14c\uc774 \ub9c8\uc609 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"\uc6d4\ub77c\uc774\ud0c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"\uc640\uc1fc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"\uc720\uc0ac \uc5b5\uc591"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"\uc640\ub77c\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"\uc720\uc0ac \uc591\ubc29\ud5a5"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"\uc544\uc640\ud788\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"\ud3f4\ub9ac\ub124\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"\ucf54\uc18c\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"\ube0c\ub77c\ubbf8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"\uad6c\uc790\ub77c\ud2b8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"\uad6c\uc804"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"\uc62c \uce58\ud0a4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"\uc648\ud53c\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"\ubc14\ud0c0\ud06c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"\ube14\ub9ac\uc2a4\uae30\ud638 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"\uc608\uba58"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"\uc751\ucf54\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"\ud45c\uc900 \uc815\ub82c \uc21c\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"\ud321\uadf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"\ud310\ud2f0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"\uc218\ud654 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"\ub9c8\uc694\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"\ucc38 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"\ub0a8\uc544\ud504\ub9ac\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"\uc21c\ub2e4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"\uc904\ubc14\uafc8 - \ub113\uac8c"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"\ub370\ubc14\ub098\uac00\ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"\uc870\uc9c0\uc544 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"\uc8fc\uc74c\uc21c"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"\ud788\ub77c\uac00\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"\uc7a0\ube44\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"\uc9d0\ubc14\ube0c\uc6e8"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"\uc54c\ub824\uc9c0\uc9c0 \uc54a\uc740 \uc9c0\uc5ed"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"\ub8ec \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"\ubbf8\ud130\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 \ub2ec\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"\ubabd\uace0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"\ubd81\ubd80 \uc18c\ud1a0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"\ud154\ub8e8\uad6c \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"\ub8e8\uc774\uc9c0\uc560\ub098 \ud06c\ub9ac\uc62c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"\ub85c\uc9c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"\ub098\uc2dc \uac8c\ubc14 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"\ub9c8\ucc28\uba54\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"\ud53c\uc9c0 \ud78c\ub514\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"\uc911\uad6d\uc5b4 \uac04\uccb4 \uc7ac\ubb34 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"\ud5e4\ub9ac\uac00\ub1ec\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"\ud655\uc7a5\ud615 \uc544\ub77c\ube44\uc544-\uc778\ub3c4\uc2dd \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"\ub204\uc5d0\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"\ub2e4\ucf54\ud0c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"\uc804\uc790 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"\ud558\ud0c0\uc774\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"\ub2e4\ub974\uadf8\uc640\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"\ud0c0\uc774\ud0c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"\ub9c8\uc57c \uc0c1\ud615 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"\ubd81\ubd80 \ub8e8\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"\ucf65\ud2b8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"\uace0\uc804 \ub124\uc640\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"\uc6b0\ub4dc\ub9d0\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"\ud06c\uba54\ub974 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"\ub9bc\ubd80 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"\uc0b0\ub2e4\uc6e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"\ub85c\ub9c8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"\uc57c\ucfe0\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"\uc0e4\ub77c\ub2e4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"\uc0ac\ub9c8\ub9ac\uc544 \uc544\ub78d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"\ucf54\uce74\uc2dc\uc548 \uc54c\ubc14\ub2c8\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"\uc0bc\ubd80\ub8e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"\uc0ac\uc0ac\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"\uc0b0\ud0c8\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"\ud2f0\ud53c\ub098\uadf8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"\uc720\ub300-\ud398\ub974\uc2dc\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"\uae30\ubcf8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"\ub290\uac10\ubc14\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"\uad6c\ub974\ubb34\ud0a4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"\uc54c\ub8e8\uafb8 \ubc29\uc5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"\ub8e8\ubc14-\ub8f0\ub8e8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"\ube44\uc2a4\uce74\uc580"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"\uc804\uac01"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"\uc0c1\uad6c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"\ub8e8\uc774\uc138\ub178\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"\ub2c8\uc548\ucf5c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"\ub2c8\uc554\uc6e8\uc9c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"\ub8ec\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"\ub274\ub85c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"\ub8e8\uc624\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"\ud544\ub9ac\ud540\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"\ud788\ubab8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"\ub378\ub77c\uc6e8\uc5b4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"\ub8e8\uc0e4\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"\ubc1c\ub8e8\uce58\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"\uc2ac\ub77c\ube0c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"\ubc1c\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"\uc720\uac00\ub9ac\ud2f1\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"\ub8e8\uc57c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"\ubc14\uc0ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"\ubc14\ubb38\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"\uc720\ub300-\uc544\ub77c\ube44\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"\uc2a4\ud398\uc778\uc5b4(\uc720\ub7fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"\ub290\uc9c0\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"\uc2a4\ucf54\ud2c0\ub79c\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"\uc2dc\uce60\ub9ac\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"\uc544\ud30c\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"\uc555\uce74\uc988\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"\ub098\uc2a4\ud0c8\ub9ac\ud06c\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"\uc544\ubca0\uc2a4\ud0c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"\uc544\ud504\ub9ac\uce78\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"\uc544\uce78\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"\ucc60\ud06c\ub9c8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"\uace0\ub9d0\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"\uc554\ud558\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"\uc544\ub77c\uace4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"\uc544\ub78d \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"\uc77c\ubcf8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(metaValue_GH)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"\uc544\ub78d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"\uc544\uc0bc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"\uc120\ud615 \ubb38\uc790(A)"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"\uc544\ubc14\ub9ad\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"\uc120\ud615 \ubb38\uc790(B)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"\ub0a8\ubd80 \ucfe0\ub974\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"\uc544\uc774\ub9c8\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"\uc544\uc81c\ub974\ubc14\uc774\uc794\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"\ucf54\uc988\ud0a4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"\ubc14\uc288\ud0a4\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"\ubd80\uc218\uc21c"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"\ubca8\ub77c\ub8e8\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"\ubd88\uac00\ub9ac\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"\ube44\uc2ac\ub77c\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"\uc790\ubc14 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"\ubc24\ubc14\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"\ubcb5\uace8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"\ud2f0\ubca0\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"\ub3c4\uadf8\ub9ac\ube0c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"\ube0c\ub974\ud0c0\ub274\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"\ubcf4\uc2a4\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"\uc138\ub124\uce74\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"\ubbf8\uc580\ub9c8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"\ub77c\uc624 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"\uc138\ub098\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"\uc751\ucf54 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"\uc140\ucfe0\ud504\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"\uce74\ud0c8\ub85c\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"\ucf54\uc774\uc57c\ubcf4\ub85c \uc138\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"\uccb4\uccb8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"\ucc28\ubaa8\ub85c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"\uac1c\uc815"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"\ucf54\ub974\uc2dc\uce74\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"\uc624\ub9ac\uc57c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"\ud06c\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"\uccb4\ucf54\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"\uad50\ud68c \uc2ac\ub77c\ube0c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"\ucd94\ubc14\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"\uc6e8\uc77c\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"\uc5d0\ud2f0\uc624\ud53c\uc544 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"\uc774 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"\ub374\ub9c8\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"\ud3ec\ub974\ud22c\uac08\uc5b4(\uc720\ub7fd)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"\ub3c5\uc77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"\ud45c\uc900 \ud1b5\ud654 \ud615\uc2dd"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"\ubca0\uc790\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"\ub529\uce74\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"\ubd80\uae30 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"\ubcb0\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"\uace0\ub300 \uc544\uc77c\ub79c\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"\ubabd\uace8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"\ub514\ubca0\ud788\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"\uc885\uce74\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"\ubca0\ub098\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"\uc74c\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"\ud504\ub808\uc774\uc800 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"\uc790\ub974\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"\uadf8\ub9ac\uc2a4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"\uc5d0\uc6e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"\ubc14\ud478\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"\uc904\ubc14\uafc8 - \ubcf4\ud1b5"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"\ubab0\ub3c4\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"\uadf8\ub9ac\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"\uc601\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"\uc5d0\uc2a4\ud398\ub780\ud1a0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"\uc911\uad6d\uc5b4 \ubc88\uccb4 \uc815\ub82c \uc21c\uc11c (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"\uc2a4\ud398\uc778\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"\uc5d0\uc2a4\ud1a0\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"\uc8fc\uc74c \uc790\ubaa8"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"\ubc14\uc2a4\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"\ubd80\ud788\ub4dc \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"\ud55c\uae00"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"\uc0ac\ub9c8\ub9ac\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"\ud0c0\uc178\ud788\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"\uace0\uc9c0 \uc18c\ub974\ube44\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"\ud55c\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"\uc5bc\uc2a4\ud130"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"\uc0e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"\ud558\ub204\ub204 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"\ud398\ub974\uc2dc\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"\uac04\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"\uc11c\uc591 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"\ubc88\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"\ud480\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"\ucc28\ub514\uc5b8 \uc544\ub77c\ube44\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"\uc0f9\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"\ud540\ub780\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"\ud53c\uc9c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"\ud3f0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"\uc11c\ubd80 \ubc1c\ub85c\uce58\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"\uad11\ub465\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"\ud398\ub85c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"\ubbf8\uad6d \uc9c0\uba85\uc704\uc6d0\ud68c(BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"\uc6c0\ubd84\ub450\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"\ud504\ub791\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"\uc2dc\ub2e4\ubaa8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"\uc11c\ubd80 \ud504\ub9ac\uc9c0\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"\uc544\uc77c\ub79c\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"\uc2a4\ucf54\ud2c0\ub79c\ub4dc \uac8c\uc77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"\uac08\ub9ac\uc2dc\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"\uacfc\ub77c\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"\ud638\uc988\ud478\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \uc5b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"\uc5d0\ud2f0\uc624\ud53c\uc544 \uc544\uba54\ud14c \uc54c\ub818\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"\uad6c\uc790\ub77c\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"\ub9f9\ud06c\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"\uc624\uc2a4\ub9c8\ub0d0 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"\ud558\uc6b0\uc0ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"\ud788\ube0c\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"\ud78c\ub514\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"\ud6c4\ud30c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"\ube44\ucf5c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"\ube44\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"\ud788\ub9ac \ubaa8\ud22c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"\ud06c\ub85c\uc544\ud2f0\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"\uc544\uc774\ud2f0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"\ud5dd\uac00\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"\uc544\ub974\uba54\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"\ud5e4\ub808\ub85c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"\ucf00\uc774\uc900 \ud504\ub791\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\uc778\ud130\ub9c1\uad6c\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"\uc790\ubaa8"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"\uc778\ub3c4\ub124\uc2dc\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"\ud2f0\ubcb3 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"\uc778\ud14c\ub974\ub9c1\uad6c\uc5d0"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"\uc774\uadf8\ubcf4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"\uc4f0\ucd28 \uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"\uc911\uc138 \ud504\ub791\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"\uc774\ub204\ud53c\uc544\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"\uace0\ub300 \ud504\ub791\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"\uc774\ub3c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"\ub3d9\ubd80 \ud504\ub9ac\uc2ac\ub780\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"\ubd81\ubd80 \ud504\ub9ac\uc9c0\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"\uc544\uc774\uc2ac\ub780\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"\uc774\ud0c8\ub9ac\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"\uc774\ub205\ud2f0\ud22c\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"\ud638\uadf8\ub178\ub974\uc2a4\ud06c"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"\uc77c\ubcf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"\ub9d0\ub77c\uc584\ub78c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"\uc61b \ub0a8\ubd80 \uc544\ub77c\ube44\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"\uc0ac\ub77c\ud2f0"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"\ub3c4\uadf8\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"\ub819\ucc28 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"\ucf64\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"\ub0a8\ubd80 \uc0ac\ubbf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"\uc790\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"\uc0e4\ube44\uc548 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"\ubc14\uc6b0\ub2e4"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"\ub9c8\ub450\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"\ub8f0\ub808 \uc0ac\ubbf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"\ub9c8\uac00\ud788\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"\ub9c8\ud30c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"\ub9c8\uc774\ud2f8\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"\uc774\ub098\ub9ac \uc0ac\ubbf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"\uc870\uc9c0\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"\uc2dd\uc2dc\uce74\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"\ub9c8\uce74\uc0ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"\uc6b0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"\uc2a4\ucf5c\ud2b8 \uc0ac\ubbf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"\ub9cc\ub529\uace0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"\ucf69\uace0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"\uace0\ud2b8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"\ud0a4\ucfe0\uc720\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"\ub9c8\uc0ac\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"\ucfe0\uc548\uc57c\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"\uce74\uc790\ud750\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"\uadf8\ub9b0\ub780\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"\ud06c\uba54\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"\uce78\ub098\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"\ud55c\uad6d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"\uce78\ub204\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"\uce74\uc288\ubbf8\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"\ud0a4\ub974\uc4f0"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"\ub819\ucc28 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"\uc544\ubca0\uc2a4\ud0c0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"\ucfe0\ub974\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"\ucf54\ubbf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"\ucf58\uc6d4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"\ud0a4\ub974\uae30\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"\uc18c\ub2cc\ucf00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"\ub77c\ud2f4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"\ub8e9\uc148\ubd80\ub974\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"\ub9d0\ub77c\uc584\ub78c \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"\uac04\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"\ub871\uace0\ub871\uace0"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"\ub9bc\ubc84\uac70\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"\ud2f0\ubca0\ud2b8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"\ub9c1\uac08\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"\ud504\ub9ac\uc6b8\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"\ub77c\uc624\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"\uc57c\ub4dc\ud30c\uc6b4\ub4dc\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"\ud0c0\uc774 \ud0d0 \ud638\ub77c \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"\ub9ac\ud22c\uc544\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"\ub8e8\ubc14-\uce74\ud0c4\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"\ub77c\ud2b8\ube44\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"\uc18c\uadf8\ub514\uc5d4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"\ub9d0\ub77c\uac00\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"\ub9c8\uc15c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"\uae30\ubcf8 \uc720\ub2c8\ucf54\ub4dc \uc815\ub82c \uc21c\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"\ub9c8\uc624\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"\ub9c8\ucf00\ub3c4\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"\ub9d0\ub77c\uc584\ub78c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"\ubabd\uace8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"\ub9c8\ub77c\ud2f0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"\ub9d0\ub808\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"\ubab0\ud0c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"\ubc84\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"\uc0ac\uc6b0\ub77c\uc288\ud2b8\ub77c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"\uc544\ub974\uba54\ub2c8\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"\ubaa8\ud06c\uc0e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"\ub9c8\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"\uc800\uc9c0 \uc18c\ub974\ube44\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"\uc544\ub78d\uc81c\uad6d \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"\ub098\uc6b0\ub8e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"\ubc94\uc6a9 \uac80\uc0c9"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"\ub178\ub974\uc6e8\uc774\uc5b4(\ubcf4\ud06c\ub9d0)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"\ubd81\ubd80 \uc740\ub370\ubca8\ub808\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"\ub124\ud314\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"\ub290\ub3d9\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"\ub9cc\ub2e4\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"\ub124\ub35c\ub780\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"\ub178\ub974\uc6e8\uc774\uc5b4(\ub2c8\ub178\ub974\uc2a4\ud06c)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"\ub178\ub974\uc6e8\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"\ub0a8\ubd80 \uc740\ub370\ubca8\ub808\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"\ub098\ubc14\ud638\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"\uce74\ub77c\uce7c\ud30c\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"\ub0d4\uc790\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"\uce74\uce5c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"\ucee4\ubc14\uc77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"\uc624\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"\uae4c\uaf2c\ud1a0\ub044\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"\uce84\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"\uba58\ub370\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"\uc624\uc9c0\ube0c\uc640\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"\uba54\ub8e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"\uc544\ub974\uba54\ub2c8\uc544 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"\uc624\ub85c\ubaa8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"\uce74\uc704\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\uc624\ub9ac\uc57c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"\uc624\uc138\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC \ub85c\ub9c8\uc790 \ud45c\uae30\ubc95(1997\ub144 \uac1c\uc815)"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"\uce74\ubc14\ub974\ub514\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"\ubaa8\ub9ac\uc2a4\uc580\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"\uc2a4\ub77c\ub09c \ud1b5\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"\ud380\uc7a1\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"\ub450\uc54c\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"\uc138\ub808\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"\uce74\ub134\ubd80\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"\ud314\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"\ud3f4\ub780\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"\uc911\uc138 \ub124\ub35c\ub780\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"\uc0ac\uc6b0\ub77c\uc288\ud2b8\ub77c \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"\ub2e8\uae30\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"\ubc1c\ub77c\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"\ud30c\uc288\ud1a0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"\ud3ec\ub974\ud22c\uac08\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"\uc911\uc138 \uc544\uc77c\ub79c\ub4dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"\uc815\ub82c \uc21c\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"\ud2f0\uc58d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"\ub9c8\ud06c\ud6c4\uc640-\uba54\ud1a0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"\ud1b5\ud654 \ud615\uc2dd"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"\ube0c\ub77c\uc9c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"\ub2ec\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"\uc57c\uc6b0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"\ub77c\uc624 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"\uc11c\ubbf8\uc548"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"\uba54\ud0c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24\uc2dc\uac04\uc81c(0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24\uc2dc\uac04\uc81c(1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"\uc0ac\ud638\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"\ube0c\ub77c\ud6c4\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"\ubbf8\uc580\ub9c8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"\ucf00\ucd94\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"\uc0ac\ud3ec\ud14c\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"\ubcf4\ub3c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"\ub780\ub098 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"\ub9c8\ucf58\ub370\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"\ubc14\uc774\ub514\uce74"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"\uc5d0\ud2f0\uc624\ud53c\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12\uc2dc\uac04\uc81c(1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12\uc2dc\uac04\uc81c(0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"\ub85c\ub9cc\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"\ub8ec\ub514\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"\ud1b5\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"\ub8e8\ub9c8\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"\uc624\ub9ac\uc57c \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"\uc911\uad6d\uc5b4 \uc2ed\uc9c4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"\ub7ec\uc2dc\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"\uc544\ucfe0\uc988\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"\ub974\uc644\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"\ube14\ub9ac\uc2a4 \uc2ec\ubcfc"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"\ud06c\ub9ac\uc62c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"\ubbf8\ud06c\ub9e5\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"\uc218\ucfe0\ub9c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"\ub4c0\ud50c\ub85c\uc774\uc548 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"\uc0b0\uc2a4\ud06c\ub9ac\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"\uc0ac\ub974\ub514\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"\uc218\uc218\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"\uc2e0\ub514\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"\ubd81\ubd80 \uc0ac\ubbf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"\ubbf8\ub0ad\uce74\ubc14\uc6b0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"\uc0b0\uace0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"\uc138\ub974\ube44\uc544-\ud06c\ub85c\uc544\ud2f0\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"\uc2f1\ud560\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"\uc218\uba54\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"\uc2ac\ub85c\ubc14\ud0a4\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"\uc2ac\ub85c\ubca0\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"\uadf8\ub780\ud0c0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"\uc0ac\ubaa8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"\uc1fc\ub098\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"\uc18c\ub9d0\ub9ac\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"\uc544\ub77c\ube44\uc544-\uc778\ub3c4\uc2dd \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"\uc54c\ubc14\ub2c8\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"\uc138\ub974\ube44\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"\uc2dc\uc2a4\uc640\ud2f0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"\ud68c\uacc4 \ud1b5\ud654 \ud615\uc2dd"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"\ub0a8\ubd80 \uc18c\ud1a0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"\uc790\ubc14 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"\uc21c\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"\uc2a4\uc6e8\ub374\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"\uc2a4\uc640\ud790\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"\uc911\uad6d\uc5b4 \ubc88\uccb4 \uc7ac\ubb34 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"\uc774\ube44\ube44\uc624\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"\uc774\ubc18\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"\ud0c0\ubc00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"\uc544\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"\ubd80\ub9ac\uc544\ud0c0"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"\uc911\uc559 \uc544\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"\ud154\ub8e8\uad6c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"\uc11c\uc544\uc2dc\uc544"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"\ud0c0\uc9c0\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"\ud0dc\uad6d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"\ud2f0\uadf8\ub9ac\ub0d0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"\ubd80\uae30\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"\ucf54\ub85c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"\ud22c\ub974\ud06c\uba58\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"\ud0c0\uac08\ub85c\uadf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"\uce20\uc640\ub098\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"\ud1b5\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"\ubd88\ub8e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"\uc878\ub77c \ud3ec\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"\uc77c\ubcf8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"\ud130\ud0a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"\ucd1d\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"\ucf54\ubaa8\ub85c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"\ucc28\ud06c\ub9c8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"\ud0c0\ud0c0\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"\ub4dc\uc728\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"\ud2b8\uc704\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"\ud0c0\ud788\ud2f0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"\uc720\ub7fd"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"\ub3d9\uc720\ub7fd"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"\ubd81\uc720\ub7fd"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"\ub2e4\uc7a5\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"\uc11c\uc720\ub7fd"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"\uc704\uad6c\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"\uace0\ub300 \uc774\ud0c8\ub9ac\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"\ud55c\uad6d \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"\uc77c\ubc18 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"\uc6b0\ud06c\ub77c\uc774\ub098\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"\ucf65\ud2b8\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"\uc6b0\ub974\ub450\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"\uce7c\ubbf8\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"\uc81c\ub098\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"\uc6b0\uc988\ubca0\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"\uce74\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"\uc800\uc9c0 \uc0c9\uc2a8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"\uc2e4\ud5e4\ud2f0 \ub098\uac00\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"\ubca4\ub2e4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"\ubc14\ub791 \ud06c\uc2dc\ud2f0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"\ub300\ub9cc\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"\ubca0\ud2b8\ub0a8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"\ud638\ud0c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"\ucf54\uc774\ub77c \uce5c\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"\uc2dc\uac04\ud45c\uc2dc\ubc95(12\uc2dc, 24\uc2dc)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\ubcfc\ub77c\ud4cc\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"\ucf54\uc640\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"\uace0\uc804 \uc2dc\ub9ac\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"\uc624\uc2a4\ub9c8\ub2c8\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"\ud0a4\uccb4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"\uc648\ub860\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"\uac00\uac00\uc6b0\uc2a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"\uc2dc\ub9ac\uc544\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"\uadf8\ub9ac\uc2a4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"\uac04\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"\ub9ac\ub514\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"\uc218\uba54\ub974-\uc544\uce74\ub4dc\uc5b4 \uc124\ud615\ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"\uc6d4\ub85c\ud504\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"\ud45c\uc900 \ubaa8\ub85c\ucf54 \ud0c0\ub9c8\uc9c0\ud2b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"\ud604\ub300 \ud45c\uc900 \uc544\ub78d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"\ud1b5\ud569 \uce90\ub098\ub2e4 \ud1a0\ucc29\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"\uac00\uc694\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"\ubabd\uace8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"\ub9cc\uc8fc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"\ub3c5\uc77c\uc2dd \ub85c\ub9c8\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"\uc544\ub098\ud1a8\ub9ac\uc544 \uc0c1\ud615\ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"\uadf8\ubc14\uc57c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"\ub9c8\ub2c8\ud478\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"\ub85c\ub9c8\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"\uc544\uc77c\ub79c\ub4dc\uc2dd \ub85c\ub9c8\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"\uc911\uad6d\uc5b4 \uac04\uccb4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"\uc911\uad6d\uc5b4 \ubc88\uccb4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"\ucf54\uc0ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"\ub85c\ub9c8 \uc18c\ubb38\uc790 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"\ube0c\ub9b0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"\ud30c\ub9c8\uce74 \ubc29\uc5b8"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"\ub9ac\ud0a4\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"\uc624\uc138\uc774\uc9c0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"\uba54\ub460\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"\uc870\ub85c\uc544\uc2a4\ud130 \ub2e4\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"\ubb38 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"\ubaa8\ud638\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"\uce74\ucf54\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"\uc774\ub514\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"\ubaa8\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"\uc2dc\ub9ac\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"\ub514\uc800\ub81b \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"\uc694\ub8e8\ubc14\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"\uc804\ud1b5\uc801\uc778 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"\uc11c\ubd80 \uc2dc\ub9ac\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"\uc624\uc2a4\ub9cc \ud130\ud0a4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"\uc5d0\uc2a4\ud2b8\ub791\uac94\ub85c\uc2dd \uc2dc\ub9ac\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"\ubc14\uc774\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"\uc8fc\uc559\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"\uce74\ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"\uce7c\ub80c\uc9c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"\uc911\uad6d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"\uc544\ud30c\uce74 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"\uc8fc\uc74c\ubd80\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"\uace0\ub300 \ud398\ub984 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"\uc904\ubc14\uafc8 \uc2a4\ud0c0\uc77c"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"\uc904\ub8e8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"\uc804\ud654\ubc88\ud638\ubd80\uc21c"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"\uc870\uc9c0\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"\uc0ac\ub77c\ub2e4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"\ud0b4\ubd84\ub450\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"\uc77c\ubcf8 \uc7ac\ubb34 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"\uce78 \uace0\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"\uac8c\uc774\uc988\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"\uc11c\ubd80 \ub9c8\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"\ub3d9\ubd80 \uc2dc\ub9ac\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"\ubbf8\uc580\ub9c8 \uc0e8 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"\uc5d8\ubc14\uc0b0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"\uc61b \ubd81\ubd80 \uc544\ub77c\ube44\uc544 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"\uc62c\uce58\ud0a4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"\uac1c\uc815 \uc815\ub82c\uc21c"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"\ud0c0\uac08\ub85c\uadf8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"\uace0\ub300 \uc774\uc9d1\ud2b8 \ubbfc\uc911\ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"\uace0\ub300 \uc774\uc9d1\ud2b8 \uc2e0\uad00\ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"\uc774\ub760\uc544\uc0ac"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"\ud314\ubbf8\ub77c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"\uc5e0\ubd80\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"\uace0\ub300 \uc774\uc9d1\ud2b8 \uc2e0\uc131\ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"\uadf8\ub8e8\uc9c0\uc57c \ucfe0\uce20\ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"\ucf54\ubbf8\ud398\ub974\uba00\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"\uace0\ub300 \ud5dd\uac00\ub9ac \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"\ucf54\uce74\ub2c8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"\uc804\ud1b5 \ub3c5\uc77c\uc5b4 \ud45c\uae30\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"\ucf54\uc2a4\ub77c\uc774\uc5d4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"\ub9bc\ubd80 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"\uc21c\ub2e4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"\ud06c\ud3a0\ub808\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"\ud06c\uba54\ub974 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"\ud2f0\ub974\ud6c4\ud0c0 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"\uc774\ub85c\ucf54\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"\ud0a4\ud504\ub85c\uc2a4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"\ubb38\ub2f9\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"\uad74\ubb35\ud0a4 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"\ub2e4\uc911 \uc5b8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"\ud4e8\ud130"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"\uce74\ub3c4\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"\uacc4\ub7c9\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"\ud06c\ub9ac\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"\uae00\ub77c\uace8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"\ud0a4\ub9ac\ubc14\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"\uccb4\ub85c\ud0a4 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"\uce74\ub9ac\ube0c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"\uce74\uc720\uac00\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"\ud0c0\ubc00 \uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"\uce74\ub77c\ucc60\uc774-\ubc1c\uce74\ub974\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"\uc778\uadc0\uc2dc\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"\ub2e4\ub9ac\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"\uce74\ub810\ub9ac\uc57c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"\uc774\ud53d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"\ucfe0\ub974\ud06c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"\uc0f4\ubc1c\ub77c\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"\ud154\ub8e8\uad6c \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"\ubc14\ud53c\uc544\uc5b4"_s)
		})
	}));
	return data;
}

LocaleNames_ko::LocaleNames_ko() {
}

$Class* LocaleNames_ko::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ko, name, initialize, &_LocaleNames_ko_ClassInfo_, allocate$LocaleNames_ko);
	return class$;
}

$Class* LocaleNames_ko::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun