#include <sun/util/resources/ext/TimeZoneNames_ko.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ACT
#undef ADELAIDE
#undef AGT
#undef AKST
#undef AMT
#undef ARAST
#undef ARMT
#undef AST
#undef BDT
#undef BRISBANE
#undef BROKEN_HILL
#undef BRT
#undef BTT
#undef CAT
#undef CET
#undef CHAST
#undef CHUT
#undef CIT
#undef CLT
#undef CST
#undef CTT
#undef CUBA
#undef DARWIN
#undef DUBLIN
#undef EASTER
#undef EAT
#undef EET
#undef EGT
#undef EST
#undef EST_NSW
#undef FET
#undef GAMBIER
#undef GHMT
#undef GMT
#undef GMTBST
#undef GST
#undef HKT
#undef HST
#undef ICT
#undef IRKT
#undef IRT
#undef ISRAEL
#undef IST
#undef JST
#undef KRAT
#undef KST
#undef LORD_HOWE
#undef MHT
#undef MMT
#undef MSK
#undef MST
#undef MYT
#undef NORONHA
#undef NOVT
#undef NPT
#undef NST
#undef NZST
#undef PITCAIRN
#undef PKT
#undef PONT
#undef PST
#undef SAMOA
#undef SAST
#undef SBT
#undef SGT
#undef TASMANIA
#undef TMT
#undef ULAT
#undef UTC
#undef UZT
#undef VICTORIA
#undef WAT
#undef WET
#undef WGT
#undef WIT
#undef WST_AUS
#undef WST_SAMOA
#undef XJT
#undef YAKT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _TimeZoneNames_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_ko::*)()>(&TimeZoneNames_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_ko",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ko_MethodInfo_
};

$Object* allocate$TimeZoneNames_ko($Class* clazz) {
	return $of($alloc(TimeZoneNames_ko));
}

void TimeZoneNames_ko::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ko::getContents() {
	$var($StringArray, ACT, $new($StringArray, {
		u"\uc5d0\uc774\ucee4 \uc2dc\uac04"_s,
		"ACT"_s,
		u"\uc5d0\uc774\ucee4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"ACST"_s,
		u"\uc5d0\uc774\ucee4 \uc2dc\uac04"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"\uc911\ubd80 \ud45c\uc900\uc2dc(\ub0a8\ubd80 \uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
		"ACST"_s,
		u"\uc911\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\ub0a8\ubd80 \uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
		"ACDT"_s,
		u"\uc911\ubd80 \ud45c\uc900\uc2dc(\ub0a8\ubd80 \uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		u"\uc544\ub974\ud5e8\ud2f0\ub098 \uc2dc\uac04"_s,
		"ART"_s,
		u"\uc544\ub974\ud5e8\ud2f0\ub098 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"ARST"_s,
		u"\uc544\ub974\ud5e8\ud2f0\ub098 \ud45c\uc900\uc2dc"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		u"\uc54c\ub798\uc2a4\uce74 \ud45c\uc900\uc2dc"_s,
		"AKST"_s,
		u"\uc54c\ub798\uc2a4\uce74 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"AKDT"_s,
		u"\uc54c\ub798\uc2a4\uce74 \ud45c\uc900\uc2dc"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		u"\uc544\ub9c8\uc874 \uc2dc\uac04"_s,
		"AMT"_s,
		u"\uc544\ub9c8\uc874 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"AMST"_s,
		u"\uc544\ub9c8\uc874 \ud45c\uc900\uc2dc"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		u"\uc544\ub78d \ud45c\uc900\uc2dc"_s,
		"AST"_s,
		u"\uc544\ub78d \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"ADT"_s,
		u"\uc544\ub77c\ube44\uc544 \ud45c\uc900\uc2dc"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		u"\uc544\ub974\uba54\ub2c8\uc544 \uc2dc\uac04"_s,
		"AMT"_s,
		u"\uc544\ub974\uba54\ub2c8\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"AMST"_s,
		u"\uc544\ub974\uba54\ub2c8\uc544 \ud45c\uc900\uc2dc"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		u"\ub300\uc11c\uc591 \ud45c\uc900\uc2dc"_s,
		"AST"_s,
		u"\ub300\uc11c\uc591 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"ADT"_s,
		u"\ub300\uc11c\uc591 \ud45c\uc900\uc2dc"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		u"\ubc29\uae00\ub77c\ub370\uc2dc \uc2dc\uac04"_s,
		"BDT"_s,
		u"\ubc29\uae00\ub77c\ub370\uc2dc \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"BDST"_s,
		u"\ubc29\uae00\ub77c\ub370\uc2dc \ud45c\uc900\uc2dc"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ud038\uc990\ub79c\ub4dc)"_s,
		"AEST"_s,
		u"\ub3d9\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\ud038\uc990\ub79c\ub4dc)"_s,
		"AEDT"_s,
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ud038\uc990\ub79c\ub4dc)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"\uc911\ubd80 \ud45c\uc900\uc2dc(\ub0a8\ubd80 \uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544/\ub274\uc0ac\uc6b0\uc2a4\uc6e8\uc77c\uc988)"_s,
		"ACST"_s,
		u"\uc911\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\ub0a8\ubd80 \uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544/\ub274\uc0ac\uc6b0\uc2a4\uc6e8\uc77c\uc988)"_s,
		"ACDT"_s,
		u"\uc911\ubd80 \ud45c\uc900\uc2dc(\ub0a8\ubd80 \uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544/\ub274\uc0ac\uc6b0\uc2a4\uc6e8\uc77c\uc988)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		u"\ube0c\ub77c\uc9c8\ub9ac\uc544 \uc2dc\uac04"_s,
		"BRT"_s,
		u"\ube0c\ub77c\uc9c8\ub9ac\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"BRST"_s,
		u"\ube0c\ub77c\uc9c8\ub9ac\uc544 \ud45c\uc900\uc2dc"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		u"\ubd80\ud0c4 \uc2dc\uac04"_s,
		"BTT"_s,
		u"\ubd80\ud0c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"BTST"_s,
		u"\ubd80\ud0c4 \ud45c\uc900\uc2dc"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		u"\uc911\uc559 \uc544\ud504\ub9ac\uce74 \uc2dc\uac04"_s,
		"CAT"_s,
		u"\uc911\uc559 \uc544\ud504\ub9ac\uce74 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CAST"_s,
		u"\uc911\uc559 \uc544\ud504\ub9ac\uce74 \ud45c\uc900\uc2dc"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		u"\uc911\uc559 \uc720\ub7fd \uc2dc\uac04"_s,
		"CET"_s,
		u"\uc911\uc559 \uc720\ub7fd \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CEST"_s,
		u"\uc911\uc559 \uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		u"Chatham \ud45c\uc900\uc2dc"_s,
		"CHAST"_s,
		u"Chatham \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CHADT"_s,
		u"\ucc44\ud140 \ud45c\uc900\uc2dc"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		u"\ucd94\ud06c \ud45c\uc900\uc2dc"_s,
		"CHUT"_s,
		u"\ucd94\ud06c \uc77c\uad11 \uc808\uc57d \uc2dc\uac04"_s,
		"CHUST"_s,
		u"\ucd94\ud06c \ud45c\uc900\uc2dc"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		u"\uc911\uc559 \uc778\ub3c4\ub124\uc2dc\uc544 \uc2dc\uac04"_s,
		"WITA"_s,
		u"\uc911\uc559 \uc778\ub3c4\ub124\uc2dc\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CIST"_s,
		u"\uc911\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \ud45c\uc900\uc2dc"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		u"\uce60\ub808 \uc2dc\uac04"_s,
		"CLT"_s,
		u"\uce60\ub808 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CLST"_s,
		u"\uce60\ub808 \ud45c\uc900\uc2dc"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		u"\uc911\ubd80 \ud45c\uc900\uc2dc"_s,
		"CST"_s,
		u"\uc911\ubd80 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CDT"_s,
		u"\uc911\ubd80 \ud45c\uc900\uc2dc"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		u"\uc911\uad6d \ud45c\uc900\uc2dc"_s,
		"CST"_s,
		u"\uc911\uad6d \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CDT"_s,
		u"\uc911\uad6d \ud45c\uc900\uc2dc"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		u"\ucfe0\ubc14 \ud45c\uc900\uc2dc"_s,
		"CST"_s,
		u"\ucfe0\ubc14 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"CDT"_s,
		u"\ucfe0\ubc14 \ud45c\uc900\uc2dc"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		u"\uc911\ubd80 \ud45c\uc900\uc2dc(\ubd81\ubd80 \uc9c0\uc5ed)"_s,
		"ACST"_s,
		u"\uc911\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\ubd81\ubd80 \uc9c0\uc5ed)"_s,
		"ACDT"_s,
		u"\uc911\ubd80 \ud45c\uc900\uc2dc(\ubd81\ubd80 \uc9c0\uc5ed)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
		"GMT"_s,
		u"\uc544\uc77c\ub79c\ub4dc \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"IST"_s,
		u"\uc544\uc77c\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"\ub3d9\ubd80 \uc544\ud504\ub9ac\uce74 \uc2dc\uac04"_s,
		"EAT"_s,
		u"\ub3d9\ubd80 \uc544\ud504\ub9ac\uce74 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"EAST"_s,
		u"\ub3d9\ubd80 \uc544\ud504\ub9ac\uce74 \ud45c\uc900\uc2dc"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"Easter Is. \uc2dc\uac04"_s,
		"EAST"_s,
		u"Easter Is. \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"EASST"_s,
		u"\uc774\uc2a4\ud130 \uc12c \ud45c\uc900\uc2dc"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"\ub3d9\uc720\ub7fd \uc2dc\uac04"_s,
		"EET"_s,
		u"\ub3d9\uc720\ub7fd \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"EEST"_s,
		u"\ub3d9\ubd80 \uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"\ub3d9\ubd80 \uadf8\ub9b0\ub79c\ub4dc \uc2dc\uac04"_s,
		"EGT"_s,
		u"\ub3d9\ubd80 \uadf8\ub9b0\ub79c\ub4dc \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"EGST"_s,
		u"\ub3d9\ubd80 \uadf8\ub9b0\ub780\ub4dc \ud45c\uc900\uc2dc"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc"_s,
		"EST"_s,
		u"\ub3d9\ubd80 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"EDT"_s,
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ub274\uc0ac\uc6b0\uc2a4\uc6e8\uc77c\uc988)"_s,
		"AEST"_s,
		u"\ub3d9\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\ub274\uc0ac\uc6b0\uc2a4\uc6e8\uc77c\uc988)"_s,
		"AEDT"_s,
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ub274\uc0ac\uc6b0\uc2a4\uc6e8\uc77c\uc988)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"\uadf9\ub3d9 \uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		"FET"_s,
		u"\uadf9\ub3d9 \uc720\ub7fd \uc77c\uad11 \uc808\uc57d \uc2dc\uac04"_s,
		"FEST"_s,
		u"\uadf9\ub3d9 \uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		u"\uac00\ub098 \ud45c\uc900\uc2dc"_s,
		"GMT"_s,
		u"\uac00\ub098 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"GHST"_s,
		u"\uac00\ub098 \ud45c\uc900\uc2dc"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		u"\uac10\ube44\uc544 \uc2dc\uac04"_s,
		"GAMT"_s,
		u"\uac10\ube44\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"GAMST"_s,
		u"\uc7a0\ube44\uc544 \ud45c\uc900\uc2dc"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
		"GMT"_s,
		u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
		"GMT"_s,
		u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		u"\uadf8\ub9ac\ub2c8\uce58 \ud45c\uc900\uc2dc"_s,
		"GMT"_s,
		u"\uc601\uad6d \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"BST"_s,
		u"\uc601\uad6d \ud45c\uc900\uc2dc"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		u"\uac78\ud504\ub9cc \ud45c\uc900\uc2dc"_s,
		"GST"_s,
		u"\uac78\ud504\ub9cc \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"GDT"_s,
		u"\uac78\ud504\ub9cc \ud45c\uc900\uc2dc"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		u"\ud64d\ucf69 \uc2dc\uac04"_s,
		"HKT"_s,
		u"\ud64d\ucf69 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"HKST"_s,
		u"\ud64d\ucf69 \ud45c\uc900\uc2dc"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"\ud558\uc640\uc774 \ud45c\uc900\uc2dc"_s,
		"HST"_s,
		u"\ud558\uc640\uc774 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"HDT"_s,
		u"\ud558\uc640\uc774 \ud45c\uc900\uc2dc"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		u"\uc778\ub3c4\ucc28\uc774\ub098 \ubc18\ub3c4 \uc2dc\uac04"_s,
		"ICT"_s,
		u"\uc778\ub3c4\ucc28\uc774\ub098 \ubc18\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"ICST"_s,
		u"\uc778\ub3c4\ucc28\uc774\ub098 \ubc18\ub3c4 \ud45c\uc900\uc2dc"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		u"\uc774\ub974\ucfe0\uce20\ud06c \uc2dc\uac04"_s,
		"IRKT"_s,
		u"\uc774\ub974\ucfe0\uce20\ud06c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"IRKST"_s,
		u"\uc774\ub974\ucfe0\uce20\ud06c \ud45c\uc900\uc2dc"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		u"\uc774\ub780 \ud45c\uc900\uc2dc"_s,
		"IRST"_s,
		u"\uc774\ub780 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"IRDT"_s,
		u"\uc774\ub780 \ud45c\uc900\uc2dc"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"\uc774\uc2a4\ub77c\uc5d8 \ud45c\uc900\uc2dc"_s,
		"IST"_s,
		u"\uc774\uc2a4\ub77c\uc5d8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"IDT"_s,
		u"\uc544\uc2a4\ub77c\uc5d8 \ud45c\uc900\uc2dc"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		u"\uc778\ub3c4 \ud45c\uc900\uc2dc"_s,
		"IST"_s,
		u"\uc778\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"IDT"_s,
		u"\uc778\ub3c4 \ud45c\uc900\uc2dc"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		u"\uc77c\ubcf8 \ud45c\uc900\uc2dc"_s,
		"JST"_s,
		u"\uc77c\ubcf8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"JDT"_s,
		u"\uc77c\ubcf8 \ud45c\uc900\uc2dc"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		u"\ud06c\ub77c\uc2a4\ub178\uc57c\ub974\uc2a4\ud06c \uc2dc\uac04"_s,
		"KRAT"_s,
		u"\ud06c\ub77c\uc2a4\ub178\uc57c\ub974\uc2a4\ud06c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"KRAST"_s,
		u"\ud06c\ub77c\uc2a4\ub178\uc57c\ub974\uc2a4\ud06c \ud45c\uc900\uc2dc"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"\ud55c\uad6d \ud45c\uc900\uc2dc"_s,
		"KST"_s,
		u"\ud55c\uad6d \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"KDT"_s,
		u"\ub300\ud55c\ubbfc\uad6d \ud45c\uc900\uc2dc"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		u"\ub85c\ub4dc \ud558\uc6b0 \ud45c\uc900\uc2dc"_s,
		"LHST"_s,
		u"\ub85c\ub4dc \ud558\uc6b0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"LHDT"_s,
		u"\ub85c\ub4dc\ud558\uc6b0 \ud45c\uc900\uc2dc"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		u"\ub9c8\uc15c\uc81c\ub3c4 \uc2dc\uac04"_s,
		"MHT"_s,
		u"\ub9c8\uc15c\uc81c\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"MHST"_s,
		u"\ub9c8\uc15c \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		u"\ubbf8\uc580\ub9c8 \uc2dc\uac04"_s,
		"MMT"_s,
		u"\ubbf8\uc580\ub9c8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"MMST"_s,
		u"\ubbf8\uc580\ub9c8 \ud45c\uc900\uc2dc"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		u"\ubaa8\uc2a4\ud06c\ubc14 \ud45c\uc900\uc2dc"_s,
		"MSK"_s,
		u"\ubaa8\uc2a4\ud06c\ubc14 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"MSD"_s,
		u"\ubaa8\uc2a4\ud06c\ubc14 \ud45c\uc900\uc2dc"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		u"\uc0b0\uc9c0 \ud45c\uc900\uc2dc"_s,
		"MST"_s,
		u"\uc0b0\uc9c0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"MDT"_s,
		u"\uc0b0\uc9c0 \ud45c\uc900\uc2dc"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		u"\ub9d0\ub808\uc774\uc2dc\uc544 \uc2dc\uac04"_s,
		"MYT"_s,
		u"\ub9d0\ub808\uc774\uc2dc\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"MYST"_s,
		u"\ub9d0\ub808\uc774\uc2dc\uc544 \ud45c\uc900\uc2dc"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		u"Fernando de Noronha \uc2dc\uac04"_s,
		"FNT"_s,
		u"Fernando de Noronha \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"FNST"_s,
		u"\ud398\ub974\ub09c\ub3c4 \ub4dc \ub178\ub85c\ud558 \ud45c\uc900\uc2dc"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		u"\ub178\ube0c\uc2dc\ube4c\uc2a4\ud06c \uc2dc\uac04"_s,
		"NOVT"_s,
		u"\ub178\ube0c\uc2dc\ube4c\uc2a4\ud06c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"NOVST"_s,
		u"\ub178\ubcf4\uc2dc\ube44\ub974\uc2a4\ud06c \ud45c\uc900\uc2dc"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		u"\ub124\ud314 \uc2dc\uac04"_s,
		"NPT"_s,
		u"\ub124\ud314 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"NPST"_s,
		u"\ub124\ud314 \ud45c\uc900\uc2dc"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		u"\ub274\ud380\ub4e4\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
		"NST"_s,
		u"\ub274\ud380\ub4e4\ub79c\ub4dc \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"NDT"_s,
		u"\ub274\ud380\ub4e4\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"\ub274\uc9c8\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
		"NZST"_s,
		u"\ub274\uc9c8\ub79c\ub4dc \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"NZDT"_s,
		u"\ub274\uc9c8\ub79c\ub4dc \ud45c\uc900\uc2dc"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		u"Pitcairn \ud45c\uc900\uc2dc"_s,
		"PST"_s,
		u"Pitcairn \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"PDT"_s,
		u"\ud54f\ucf00\uc5b8 \ud45c\uc900\uc2dc"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		u"\ud30c\ud0a4\uc2a4\ud0c4 \uc2dc\uac04"_s,
		"PKT"_s,
		u"\ud30c\ud0a4\uc2a4\ud0c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"PKST"_s,
		u"\ud30c\ud0a4\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		u"\ud3f0\ud398\uc774 \ud45c\uc900\uc2dc"_s,
		"PONT"_s,
		u"\ud3f0\ud398\uc774 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04"_s,
		"PONST"_s,
		u"\ud3ec\ub098\ud398 \ud45c\uc900\uc2dc"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		u"\ud0dc\ud3c9\uc591 \ud45c\uc900\uc2dc"_s,
		"PST"_s,
		u"\ud0dc\ud3c9\uc591 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"PDT"_s,
		u"\ud0dc\ud3c9\uc591 \ud45c\uc900\uc2dc"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"\ub0a8\uc544\ud504\ub9ac\uce74 \ud45c\uc900\uc2dc"_s,
		"SAST"_s,
		u"\ub0a8\uc544\ud504\ub9ac\uce74 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"SAST"_s,
		u"\ub0a8\uc544\ud504\ub9ac\uce74 \ud45c\uc900\uc2dc"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"\uc194\ub85c\ubaac \uad70\ub3c4 \uc2dc\uac04"_s,
		"SBT"_s,
		u"\uc194\ub85c\ubaac \uad70\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"SBST"_s,
		u"\uc194\ub85c\ubaac \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		u"\uc2f1\uac00\ud3ec\ub974 \uc2dc\uac04"_s,
		"SGT"_s,
		u"\uc2f1\uac00\ud3ec\ub974 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"SGST"_s,
		u"\uc2f1\uac00\ud3ec\ub974 \ud45c\uc900\uc2dc"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ud0dc\uc988\uba54\uc774\ub2c8\uc544)"_s,
		"AEST"_s,
		u"\ub3d9\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\ud0dc\uc988\uba54\uc774\ub2c8\uc544)"_s,
		"AEDT"_s,
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ud0dc\uc988\uba54\uc774\ub2c8\uc544)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \uc2dc\uac04"_s,
		"TMT"_s,
		u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"TMST"_s,
		u"\ud22c\ub974\ud06c\uba54\ub2c8\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		u"\uc6b8\ub780\ubc14\ud0c0\ub974 \uc2dc\uac04"_s,
		"ULAT"_s,
		u"\uc6b8\ub780\ubc14\ud0c0\ub974 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"ULAST"_s,
		u"\uc6b8\ub780\ubc14\ud1a0\ub974 \ud45c\uc900\uc2dc"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"\uc11c\ubd80 \uc544\ud504\ub9ac\uce74 \uc2dc\uac04"_s,
		"WAT"_s,
		u"\uc11c\ubd80 \uc544\ud504\ub9ac\uce74 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"WAST"_s,
		u"\uc11c\ubd80 \uc544\ud504\ub9ac\uce74 \ud45c\uc900\uc2dc"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"\uc11c\uc720\ub7fd \uc2dc\uac04"_s,
		"WET"_s,
		u"\uc11c\uc720\ub7fd \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"WEST"_s,
		u"\uc11c\ubd80 \uc720\ub7fd \ud45c\uc900\uc2dc"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"\uc11c\ubd80 \uadf8\ub9b0\ub79c\ub4dc \uc2dc\uac04"_s,
		"WGT"_s,
		u"\uc11c\ubd80 \uadf8\ub9b0\ub79c\ub4dc \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"WGST"_s,
		u"\uc11c\ubd80 \uadf8\ub9b0\ub780\ub4dc \ud45c\uc900\uc2dc"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"\uc11c\uc778\ub3c4\ub124\uc2dc\uc544 \uc2dc\uac04"_s,
		"WIB"_s,
		u"\uc11c\uc778\ub3c4\ub124\uc2dc\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"WIST"_s,
		u"\uc11c\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \ud45c\uc900\uc2dc"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		u"\uc11c\ubd80 \ud45c\uc900\uc2dc(\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
		"AWST"_s,
		u"\uc11c\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
		"AWDT"_s,
		u"\uc11c\ubd80 \ud45c\uc900\uc2dc(\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		u"\uc0ac\ubaa8\uc544 \ud45c\uc900\uc2dc"_s,
		"SST"_s,
		u"\uc0ac\ubaa8\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"SDT"_s,
		u"\uc0ac\ubaa8\uc544 \ud45c\uc900\uc2dc"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		u"\uc11c\uc0ac\ubaa8\uc544 \uc2dc\uac04"_s,
		"WSST"_s,
		u"\uc11c\uc0ac\ubaa8\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"WSDT"_s,
		u"\uc11c\uc0ac\ubaa8\uc544 \ud45c\uc900\uc2dc"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"\ucc28\ubaa8\ub85c \ud45c\uc900\uc2dc"_s,
		"ChST"_s,
		u"\ucc28\ubaa8\ub85c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"ChDT"_s,
		u"\ucc28\ubaa8\ub974 \ud45c\uc900\uc2dc"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ube45\ud1a0\ub9ac\uc544)"_s,
		"AEST"_s,
		u"\ub3d9\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\ube45\ud1a0\ub9ac\uc544)"_s,
		"AEDT"_s,
		u"\ub3d9\ubd80 \ud45c\uc900\uc2dc(\ube45\ud1a0\ub9ac\uc544)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		u"\uc138\uacc4 \ud45c\uc900\uc2dc"_s,
		"UTC"_s,
		u"\uc138\uacc4 \ud45c\uc900\uc2dc"_s,
		"UTC"_s,
		u"\uc9c0\uc5ed \ud45c\uc900\uc2dc"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4 \uc2dc\uac04"_s,
		"UZT"_s,
		u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"UZST"_s,
		u"\uc6b0\uc988\ubca0\ud0a4\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		u"\uc911\uad6d \ud45c\uc900\uc2dc"_s,
		"XJT"_s,
		u"\uc911\uad6d \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"XJDT"_s,
		u"\uc911\uad6d \ud45c\uc900\uc2dc"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		u"\uc57c\uce20\ud06c \uc2dc\uac04"_s,
		"YAKT"_s,
		u"\uc57c\uce20\ud06c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
		"YAKST"_s,
		u"\uc57c\ucfe0\uce20\ud06c \ud45c\uc900\uc2dc"_s,
		"YAKT"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("MST"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("EST"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("IET"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("HST"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Casablanca"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("AGT"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GHMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmara"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Banjul"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bissau"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Blantyre"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Douala"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/El_Aaiun"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Sao_Tome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Timbuktu"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Windhoek"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Buenos_Aires"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Catamarca"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/ComodRivadavia"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Cordoba"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Jujuy"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Mendoza"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of($$new($StringArray, {
				u"\ud30c\ub77c\uacfc\uc774 \uc2dc\uac04"_s,
				"PYT"_s,
				u"\ud30c\ub77c\uacfc\uc774 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"PYST"_s,
				u"\ud30c\ub77c\uacfc\uc774 \ud45c\uc900\uc2dc"_s,
				"PYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Atikokan"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Atka"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of($$new($StringArray, {
				u"\ucf5c\ub86c\ube44\uc544 \uc2dc\uac04"_s,
				"COT"_s,
				u"\ucf5c\ub86c\ube44\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"COST"_s,
				u"\ucf5c\ub86c\ube44\uc544 \ud45c\uc900\uc2dc"_s,
				"COT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Caracas"_s),
			$of($$new($StringArray, {
				u"\ubca0\ub124\uc218\uc5d8\ub77c \uc2dc\uac04"_s,
				"VET"_s,
				u"\ubca0\ub124\uc218\uc5d8\ub77c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"VEST"_s,
				u"\ubca0\ub124\uc218\uc5d8\ub77c \ud45c\uc900\uc2dc"_s,
				"VET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of($$new($StringArray, {
				u"\ud504\ub791\uc2a4\ub839 \uae30\uc544\ub098 \uc2dc\uac04"_s,
				"GFT"_s,
				u"\ud504\ub791\uc2a4\ub839 \uae30\uc544\ub098 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"GFST"_s,
				u"\ud504\ub791\uc2a4\ub839 \uae30\uc544\ub098 \ud45c\uc900\uc2dc"_s,
				"GFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Eirunepe"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Ensenada"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Wayne"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(WGT)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of($$new($StringArray, {
				u"\uc5d0\ucfe0\uc544\ub3c4\ub974 \uc2dc\uac04"_s,
				"ECT"_s,
				u"\uc5d0\ucfe0\uc544\ub3c4\ub974 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"ECST"_s,
				u"\uc5d0\ucf70\ub3c4\ub974 \ud45c\uc900\uc2dc"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				u"\uac00\uc774\uc544\ub098 \uc2dc\uac04"_s,
				"GYT"_s,
				u"\uac00\uc774\uc544\ub098 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"GYST"_s,
				u"\uac00\uc774\uc544\ub098 \ud45c\uc900\uc2dc"_s,
				"GYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(CUBA)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Indianapolis"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Louisville"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Knox_IN"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of($$new($StringArray, {
				u"\ubcfc\ub9ac\ube44\uc544 \uc2dc\uac04"_s,
				"BOT"_s,
				u"\ubcfc\ub9ac\ube44\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"BOST"_s,
				u"\ubcfc\ub9ac\ube44\uc544 \ud45c\uc900\uc2dc"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				u"\ud398\ub8e8 \uc2dc\uac04"_s,
				"PET"_s,
				u"\ud398\ub8e8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"PEST"_s,
				u"\ud398\ub8e8 \ud45c\uc900\uc2dc"_s,
				"PET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of($$new($StringArray, {
				u"\ud53c\uc5d0\ub974 \ubbf8\ud06c\ub860 \ud45c\uc900\uc2dc"_s,
				"PMST"_s,
				u"\ud53c\uc5d0\ub974 \ubbf8\ud06c\ub860 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"PMDT"_s,
				u"\ud53c\uc5d0\ub974 \ubbf8\ud074\ub871 \ud45c\uc900\uc2dc"_s,
				"PMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of($$new($StringArray, {
				u"\uc6b0\ub8e8\uacfc\uc774 \uc2dc\uac04"_s,
				"UYT"_s,
				u"\uc6b0\ub8e8\uacfc\uc774 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"UYST"_s,
				u"\uc6b0\ub8e8\uacfc\uc774 \ud45c\uc900\uc2dc"_s,
				"UYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(NORONHA)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Nuuk"_s),
			$of(WGT)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of($$new($StringArray, {
				u"\uc218\ub9ac\ub0a8 \uc2dc\uac04"_s,
				"SRT"_s,
				u"\uc218\ub9ac\ub0a8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"SRST"_s,
				u"\uc218\ub9ac\ub0a8 \ud45c\uc900\uc2dc"_s,
				"SRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Acre"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Rio_Branco"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/Rosario"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(EGT)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Virgin"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Casey"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Davis"_s),
			$of($$new($StringArray, {
				u"Davis \uc2dc\uac04"_s,
				"DAVT"_s,
				u"Davis \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"DAVST"_s,
				u"\ub370\uc774\ube44\uc2a4 \ud45c\uc900\uc2dc"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				u"\ub4a4\ubabd \ub4a4\ub974\ube4c \uc2dc\uac04"_s,
				"DDUT"_s,
				u"\ub4a4\ubabd \ub4a4\ub974\ube4c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"DDUST"_s,
				u"\ub450\ubaac\ud2b8\uc6b0\ub974\ube4c \ud45c\uc900\uc2dc"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				u"\ub9e4\ucf70\ub9ac \uc12c \ud45c\uc900\uc2dc"_s,
				"MIST"_s,
				u"\ub9e4\ucf70\ub9ac \uc12c \uc77c\uad11 \uc808\uc57d \uc2dc\uac04"_s,
				"MIST"_s,
				u"\ub9e4\ucf70\ub9ac \uc12c \ud45c\uc900\uc2dc"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				u"\ubaa8\uc2a8 \uc2dc\uac04"_s,
				"MAWT"_s,
				u"\ubaa8\uc2a8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"MAWST"_s,
				u"\ub9c8\uc2a8 \ud45c\uc900\uc2dc"_s,
				"MAWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Palmer"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Rothera"_s),
			$of($$new($StringArray, {
				u"\ub85c\uc81c\ub77c \ud45c\uc900\uc2dc"_s,
				"ROTT"_s,
				u"\ub85c\uc81c\ub77c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"ROTST"_s,
				u"\ub85c\ub354\ub77c \ud45c\uc900\uc2dc"_s,
				"ROTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Syowa"_s),
			$of($$new($StringArray, {
				u"Syowa \uc2dc\uac04"_s,
				"SYOT"_s,
				u"Syowa \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"SYOST"_s,
				u"\uc1fc\uc640 \ud45c\uc900\uc2dc"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				u"\uc138\uacc4 \ud45c\uc900\uc2dc"_s,
				"UTC"_s,
				u"\uc911\uc559 \uc720\ub7fd \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				u"Vostok \uc2dc\uac04"_s,
				"VOST"_s,
				u"Vostok \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"VOSST"_s,
				u"\ubcf4\uc2a4\ud1a1 \ud45c\uc900\uc2dc"_s,
				"VOST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Almaty"_s),
			$of($$new($StringArray, {
				u"\uc54c\ub9c8\uc544\ud0c0 \uc2dc\uac04"_s,
				"ALMT"_s,
				u"\uc54c\ub9c8\uc544\ud0c0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"ALMST"_s,
				u"\uc54c\ub9c8\uc544\ud0c0 \ud45c\uc900\uc2dc"_s,
				"ALMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Anadyr"_s),
			$of($$new($StringArray, {
				u"\uc544\ub098\ub514\ub974 \uc2dc\uac04"_s,
				"ANAT"_s,
				u"\uc544\ub098\ub514\ub974 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"ANAST"_s,
				u"\uc544\ub098\ub514\ub9ac \ud45c\uc900\uc2dc"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				u"\uc545\ud0c0\uc6b0 \uc2dc\uac04"_s,
				"AQTT"_s,
				u"\uc545\ud0c0\uc6b0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"AQTST"_s,
				u"\uc544\ud06c\ud0c0\uc6b0 \ud45c\uc900\uc2dc"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				u"\uc545\ud1a0\ube0c \uc2dc\uac04"_s,
				"AQTT"_s,
				u"\uc545\ud1a0\ube0c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"AQTST"_s,
				u"\uc544\ud06c\ud1a0\ubca0 \ud45c\uc900\uc2dc"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(TMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashkhabad"_s),
			$of(TMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of($$new($StringArray, {
				u"\uc544\uc81c\ub974\ubc14\uc774\uc794 \uc2dc\uac04"_s,
				"AZT"_s,
				u"\uc544\uc81c\ub974\ubc14\uc774\uc794 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"AZST"_s,
				u"\uc544\uc81c\ub974\ubc14\uc774\uc794 \ud45c\uc900\uc2dc"_s,
				"AZT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Bangkok"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of($$new($StringArray, {
				u"\ud0a4\ub974\ud0a4\uc988\uc2a4\ud0c4 \uc2dc\uac04"_s,
				"KGT"_s,
				u"\ud0a4\ub974\uae30\uc988\uc2a4\ud0c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"KGST"_s,
				u"\ud0a4\ub974\uae30\uc2a4\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				u"\ube0c\ub8e8\ub098\uc774 \uc2dc\uac04"_s,
				"BNT"_s,
				u"\ube0c\ub8e8\ub098\uc774 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"BNST"_s,
				u"\ube0c\ub8e8\ub098\uc774 \ud45c\uc900\uc2dc"_s,
				"BNT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of($$new($StringArray, {
				u"Choibalsan \uc2dc\uac04"_s,
				"CHOT"_s,
				u"Choibalsan \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"CHOST"_s,
				u"\ucd08\uc774\ubc1c\uc0b0 \ud45c\uc900\uc2dc"_s,
				"CHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chungking"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dacca"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dili"_s),
			$of($$new($StringArray, {
				u"\ud2f0\ubaa8\ub974-\ub808\uc2a4\ud14c \uc2dc\uac04"_s,
				"TLT"_s,
				u"\ud2f0\ubaa8\ub974-\ub808\uc2a4\ud14c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"TLST"_s,
				u"\ub3d9\ud2f0\ubaa8\ub974 \ud45c\uc900\uc2dc"_s,
				"TLT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(GST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dushanbe"_s),
			$of($$new($StringArray, {
				u"\ud0c0\uc9c0\ud0a4\uc2a4\ud0c4 \uc2dc\uac04"_s,
				"TJT"_s,
				u"\ud0c0\uc9c0\ud0a4\uc2a4\ud0c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"TJST"_s,
				u"\ud0c0\uc9c0\ud0a4\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
				"TJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ho_Chi_Minh"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(HKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of($$new($StringArray, {
				u"Hovd \uc2dc\uac04"_s,
				"HOVT"_s,
				u"Hovd \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"HOVST"_s,
				u"\ud638\ube0c\ub4dc \ud45c\uc900\uc2dc"_s,
				"HOVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(IRKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Istanbul"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jakarta"_s),
			$of(WIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jayapura"_s),
			$of($$new($StringArray, {
				u"\ub3d9\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \uc2dc\uac04"_s,
				"WIT"_s,
				u"\ub3d9\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"EIST"_s,
				u"\ub3d9\ubd80 \uc778\ub3c4\ub124\uc2dc\uc544 \ud45c\uc900\uc2dc"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				u"\uc544\ud504\uac00\ub2c8\uc2a4\ud0c4 \uc2dc\uac04"_s,
				"AFT"_s,
				u"\uc544\ud504\uac00\ub2c8\uc2a4\ud0c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"AFST"_s,
				u"\uc544\ud504\uac00\ub2c8\uc2a4\ud0c4 \ud45c\uc900\uc2dc"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				u"\ud398\ud2b8\ub85c\ud30c\ube14\ub85c\ud504\uc2a4\ud06c-\uce84\ucc28\uce20\ud0a4 \uc2dc\uac04"_s,
				"PETT"_s,
				u"\ud398\ud2b8\ub85c\ud30c\ube14\ub85c\ud504\uc2a4\ud06c-\uce84\ucc28\uce20\ud0a4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"PETST"_s,
				u"\ud398\ud2b8\ub85c\ud30c\ube0c\ub85c\ud504\uc2a4\ud06c-\uce84\ucc28\uce20\ud0a4 \ud45c\uc900\uc2dc"_s,
				"PETT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(PKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kashgar"_s),
			$of(XJT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kathmandu"_s),
			$of(NPT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(NPT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kolkata"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(KRAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(MYT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(MYT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macao"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of($$new($StringArray, {
				u"\ub9c8\uac00\ub2e8 \uc2dc\uac04"_s,
				"MAGT"_s,
				u"\ub9c8\uac00\ub2e8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"MAGST"_s,
				u"\ub9c8\uac00\ub2e8 \ud45c\uc900\uc2dc"_s,
				"MAGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Makassar"_s),
			$of(CIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of($$new($StringArray, {
				"Philippines Standard Time"_s,
				"PST"_s,
				"Philippines Daylight Time"_s,
				"PDT"_s,
				"Philippines Time"_s,
				"PT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(GST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(KRAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(NOVT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of($$new($StringArray, {
				u"Oral \ud45c\uc900\uc2dc"_s,
				"ORAT"_s,
				u"Oral \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"ORAST"_s,
				u"\uc624\ub7f4 \ud45c\uc900\uc2dc"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				u"Omsk \uc2dc\uac04"_s,
				"OMST"_s,
				u"Omsk \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"OMSST"_s,
				u"\uc634\uc2a4\ud06c \ud45c\uc900\uc2dc"_s,
				"OMST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Phnom_Penh"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pontianak"_s),
			$of(WIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of($$new($StringArray, {
				u"Qyzylorda \ud45c\uc900\uc2dc"_s,
				"QYZT"_s,
				u"Qyzylorda \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"QYZST"_s,
				u"\ud0a4\uc9c8\ub85c\ub974\ub2e4 \ud45c\uc900\uc2dc"_s,
				"QYZT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Rangoon"_s),
			$of(MMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Saigon"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of($$new($StringArray, {
				u"\uc0ac\ud560\ub9b0 \uc2dc\uac04"_s,
				"SAKT"_s,
				u"\uc0ac\ud560\ub9b0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"SAKST"_s,
				u"\uc0ac\ud560\ub9b0 \ud45c\uc900\uc2dc"_s,
				"SAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(UZT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(SGT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Srednekolymsk"_s),
			$of($$new($StringArray, {
				"Srednekolymsk Time"_s,
				"SRET"_s,
				"Srednekolymsk Daylight Time"_s,
				"SREDT"_s,
				"Srednekolymsk Time"_s,
				"SRET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tel_Aviv"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(UZT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of($$new($StringArray, {
				u"\uadf8\ub8e8\uc9c0\uc57c \uc2dc\uac04"_s,
				"GET"_s,
				u"\uadf8\ub8e8\uc9c0\uc57c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"GEST"_s,
				u"\uadf8\ub8e8\uc9c0\uc57c \ud45c\uc900\uc2dc"_s,
				"GET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(IRT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimbu"_s),
			$of(BTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimphu"_s),
			$of(BTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ujung_Pandang"_s),
			$of(CIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(ULAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulan_Bator"_s),
			$of(ULAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Urumqi"_s),
			$of(XJT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of($$new($StringArray, {
				u"\uc6b0\uc2a4\ud2f0\ub124\ub77c \ud45c\uc900\uc2dc"_s,
				"VLAT"_s,
				u"\uc6b0\uc2a4\ud2f0\ub124\ub77c \uc77c\uad11 \uc808\uc57d \uc2dc\uac04"_s,
				"VLAST"_s,
				u"\uc6b0\uc2a4\ud2f0\ub124\ub77c \ud45c\uc900\uc2dc"_s,
				"VLAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Vientiane"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of($$new($StringArray, {
				u"\ube14\ub77c\ub514\ubcf4\uc2a4\ud1a1 \uc2dc\uac04"_s,
				"VLAT"_s,
				u"\ube14\ub77c\ub514\ubcf4\uc2a4\ud1a1 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"VLAST"_s,
				u"\ube14\ub77c\ub514\ubcf4\uc2a4\ud1a1 \ud45c\uc900\uc2dc"_s,
				"VLAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yangon"_s),
			$of(MMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of($$new($StringArray, {
				u"\uc608\uce74\ud14c\ub9b0\ubc84\uadf8 \uc2dc\uac04"_s,
				"YEKT"_s,
				u"\uc608\uce74\ud14c\ub9b0\ubc84\uadf8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"YEKST"_s,
				u"\uc608\uce74\ud14c\ub9b0\ubd80\ub974\ud06c \ud45c\uc900\uc2dc"_s,
				"YEKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(ARMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of($$new($StringArray, {
				u"\uc544\uc870\ub808\uc2a4 \uc2dc\uac04"_s,
				"AZOT"_s,
				u"\uc544\uc870\ub808\uc2a4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"AZOST"_s,
				u"\uc544\uc870\ub808\uc2a4 \ud45c\uc900\uc2dc"_s,
				"AZOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of($$new($StringArray, {
				u"\uae4c\ubf40\ubca0\ub974\ub370 \uc2dc\uac04"_s,
				"CVT"_s,
				u"\uae4c\ubf40\ubca0\ub974\ub370 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"CVST"_s,
				u"\ucf00\uc774\ud504\ubca0\ub974\ub370 \ud45c\uc900\uc2dc"_s,
				"CVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faroe"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/South_Georgia"_s),
			$of($$new($StringArray, {
				u"\uc0ac\uc6b0\uc2a4 \uc870\uc9c0\uc544 \ud45c\uc900\uc2dc"_s,
				"GST"_s,
				u"\uc0ac\uc6b0\uc2a4 \uc870\uc9c0\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"GDT"_s,
				u"\uc0ac\uc6b0\uc2a4\uc870\uc9c0\uc544 \ud45c\uc900\uc2dc"_s,
				"GT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of($$new($StringArray, {
				u"\ud3ec\ud074\ub79c\ub4dc \uad70\ub3c4 \uc2dc\uac04"_s,
				"FKT"_s,
				u"\ud3ec\ud074\ub79c\ub4dc \uad70\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"FKST"_s,
				u"\ud3ec\ud074\ub79c\ub4dc \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
				"FKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Australia/ACT"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(ADELAIDE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(BROKEN_HILL)
		}),
		$$new($ObjectArray, {
			$of("Australia/Canberra"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of($$new($StringArray, {
				u"\uc911\uc559 \uc11c\ubd80 \ud45c\uc900\uc2dc(\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
				"ACWST"_s,
				u"\uc911\uc559 \uc11c\ubd80 \uc77c\uad11 \uc808\uc57d \uc2dc\uac04(\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
				"ACWDT"_s,
				u"\uc911\uc559 \uc11c\ubd80 \ud45c\uc900\uc2dc(\uc624\uc2a4\ud2b8\ub808\uc77c\ub9ac\uc544)"_s,
				"ACWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(TASMANIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/LHI"_s),
			$of(LORD_HOWE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(LORD_HOWE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(VICTORIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/North"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("Australia/NSW"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Australia/Queensland"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/South"_s),
			$of(ADELAIDE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Tasmania"_s),
			$of(TASMANIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/Victoria"_s),
			$of(VICTORIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/West"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Australia/Yancowinna"_s),
			$of(BROKEN_HILL)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/Acre"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/DeNoronha"_s),
			$of(NORONHA)
		}),
		$$new($ObjectArray, {
			$of("Brazil/East"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/West"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("Canada/Atlantic"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Central"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Eastern"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Mountain"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Newfoundland"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Pacific"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Yukon"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Saskatchewan"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("CET"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Chile/Continental"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("Chile/EasterIsland"_s),
			$of(EASTER)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("Cuba"_s),
			$of(CUBA)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("EET"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Egypt"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Eire"_s),
			$of(DUBLIN)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Etc/Greenwich"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UCT"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/Universal"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/Zulu"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of(DUBLIN)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Istanbul"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Nicosia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Samara"_s),
			$of($$new($StringArray, {
				u"\uc0ac\ub9c8\ub77c \uc2dc\uac04"_s,
				"SAMT"_s,
				u"\uc0ac\ub9c8\ub77c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"SAMST"_s,
				u"\uc0ac\ub9c8\ub77c \ud45c\uc900\uc2dc"_s,
				"SAMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tiraspol"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("GB-Eire"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Greenwich"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Hongkong"_s),
			$of(HKT)
		}),
		$$new($ObjectArray, {
			$of("Iceland"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Iran"_s),
			$of(IRT)
		}),
		$$new($ObjectArray, {
			$of("IST"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Chagos"_s),
			$of($$new($StringArray, {
				u"\uc601\uc778\ub3c4 \uc81c\ub3c4 \uc2dc\uac04"_s,
				"IOT"_s,
				u"\uc601\uc778\ub3c4 \uc81c\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"IOST"_s,
				u"\uc778\ub3c4\uc591 \uc2dd\ubbfc\uc9c0 \ud45c\uc900\uc2dc"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				u"\ud06c\ub9ac\uc2a4\ub9c8\uc2a4\uc12c \uc2dc\uac04"_s,
				"CXT"_s,
				u"\ud06c\ub9ac\uc2a4\ub9c8\uc2a4\uc12c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"CXST"_s,
				u"\ud06c\ub9ac\uc2a4\ub9c8\uc2a4 \uc12c \ud45c\uc900\uc2dc"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				u"\ucf54\ucf54\uc2a4 \uad70\ub3c4 \uc2dc\uac04"_s,
				"CCT"_s,
				u"\ucf54\ucf54\uc2a4 \uad70\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"CCST"_s,
				u"\ucf54\ucf54\uc2a4 \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
				"CCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of($$new($StringArray, {
				u"\ud504\ub791\uc2a4 \ub0a8\ubd80 \uc9c0\ubc29 \ubc0f \ub0a8\uadf9 \uc9c0\uc5ed \uc2dc\uac04"_s,
				"TFT"_s,
				u"\ud504\ub791\uc2a4 \ub0a8\ubd80 \uc9c0\ubc29 \ubc0f \ub0a8\uadf9 \uc9c0\uc5ed \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"TFST"_s,
				u"\ud504\ub791\uc2a4\ub839 \ub0a8\ubd80 \ubc0f \ub0a8\uadf9 \ub300\ub959 \ud45c\uc900\uc2dc"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				u"\uc138\uc774\uc140 \uc2dc\uac04"_s,
				"SCT"_s,
				u"\uc138\uc774\uc258 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"SCST"_s,
				u"\uc138\uc774\uc178 \ud45c\uc900\uc2dc"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				u"\ubab0\ub514\ube0c \uc2dc\uac04"_s,
				"MVT"_s,
				u"\ubab0\ub514\ube0c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"MVST"_s,
				u"\ubab0\ub514\ube0c \ud45c\uc900\uc2dc"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				u"\ubaa8\ub9ac\uc154\uc2a4 \uc2dc\uac04"_s,
				"MUT"_s,
				u"\ubaa8\ub9ac\uc154\uc2a4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"MUST"_s,
				u"\ubaa8\ub9ac\uc154\uc2a4 \ud45c\uc900\uc2dc"_s,
				"MUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of($$new($StringArray, {
				u"\ub9ac\uc720\ub2c8\uc5b8 \uc2dc\uac04"_s,
				"RET"_s,
				u"\ub9ac\uc720\ub2c8\uc5b8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"REST"_s,
				u"\ub808\uc704\ub2c8\uc639 \ud45c\uc900\uc2dc"_s,
				"RET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Israel"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Jamaica"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Japan"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("Kwajalein"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Libya"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("MET"_s),
			$of($$new($StringArray, {
				u"\uc911\ubd80 \uc720\ub7fd \uc2dc\uac04"_s,
				"MET"_s,
				u"\uc911\ubd80 \uc720\ub7fd \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"MEST"_s,
				"MET"_s,
				"MET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Mexico/BajaNorte"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("Mexico/BajaSur"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Mexico/General"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(WST_SAMOA)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Navajo"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(ARMT)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("NZ-CHAT"_s),
			$of(CHAST)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(PKT)
		}),
		$$new($ObjectArray, {
			$of("Portugal"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(WST_SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Bougainville"_s),
			$of($$new($StringArray, {
				"Bougainville Standard Time"_s,
				"BST"_s,
				"Bougainville Daylight Time"_s,
				"BST"_s,
				"Bougainville Time"_s,
				"BT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(CHAST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chuuk"_s),
			$of(CHUT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(EASTER)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of($$new($StringArray, {
				u"\ube44\ub204\uc544\ud22c \uc2dc\uac04"_s,
				"VUT"_s,
				u"\ubc14\ub204\uc544\ud22c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"VUST"_s,
				u"\ubc14\ub204\uc544\ud22c \ud45c\uc900\uc2dc"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				u"\ud53c\ub2c9\uc2a4 \uad70\ub3c4 \uc2dc\uac04"_s,
				"PHOT"_s,
				u"\ud53c\ub2c9\uc2a4 \uad70\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"PHOST"_s,
				u"\ud53c\ub2c9\uc2a4 \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				u"\ud1a0\ucf08\ub77c\uc6b0 \uc2dc\uac04"_s,
				"TKT"_s,
				u"\ud1a0\ucf08\ub77c\uc6b0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"TKST"_s,
				u"\ud1a0\ucf08\ub77c\uc6b0 \ud45c\uc900\uc2dc"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				u"\ud53c\uc9c0 \uc2dc\uac04"_s,
				"FJT"_s,
				u"\ud53c\uc9c0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"FJST"_s,
				u"\ud53c\uc9c0 \ud45c\uc900\uc2dc"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				u"\ud22c\ubc1c\ub8e8 \uc2dc\uac04"_s,
				"TVT"_s,
				u"\ud22c\ubc1c\ub8e8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"TVST"_s,
				u"\ud22c\ubc1c\ub8e8 \ud45c\uc900\uc2dc"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				u"\uac08\ub77c\ud30c\uace0\uc2a4 \uc2dc\uac04"_s,
				"GALT"_s,
				u"\uac08\ub77c\ud30c\uace0\uc2a4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"GALST"_s,
				u"\uac08\ub77c\ud30c\uace0\uc2a4 \ud45c\uc900\uc2dc"_s,
				"GALT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Gambier"_s),
			$of(GAMBIER)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(SBT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guam"_s),
			$of(ChST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of($$new($StringArray, {
				u"\ub77c\uc778 \uad70\ub3c4 \uc2dc\uac04"_s,
				"LINT"_s,
				u"\ub77c\uc778 \uad70\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"LINST"_s,
				u"\ub77c\uc778 \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				u"\ucf54\uc2a4\ub798 \uc2dc\uac04"_s,
				"KOST"_s,
				u"\ucf54\uc2a4\ub798 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"KOSST"_s,
				u"\ucf54\uc2a4\ub808 \ud45c\uc900\uc2dc"_s,
				"KOST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kwajalein"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Majuro"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of($$new($StringArray, {
				u"\ub9c8\ub974\ucf00\uc0ac\uc2a4 \uc2dc\uac04"_s,
				"MART"_s,
				u"\ub9c8\ub974\ucf00\uc0ac\uc2a4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"MARST"_s,
				u"\ub9c8\ud0a4\uc800\uc2a4 \ud45c\uc900\uc2dc"_s,
				"MART"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of($$new($StringArray, {
				u"\ub098\uc6b0\ub8e8 \uc2dc\uac04"_s,
				"NRT"_s,
				u"\ub098\uc6b0\ub8e8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"NRST"_s,
				u"\ub098\uc6b0\ub8e8 \ud45c\uc900\uc2dc"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				u"\ub2c8\uc6b0\uc5d0 \uc2dc\uac04"_s,
				"NUT"_s,
				u"\ub2c8\uc6b0\uc5d0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"NUST"_s,
				u"\ub2c8\uc6b0\uc5d0 \ud45c\uc900\uc2dc"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				u"\ub178\ud37d \uc2dc\uac04"_s,
				"NFT"_s,
				u"\ub178\ud37d \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"NFST"_s,
				u"\ub178\ud37d \ud45c\uc900\uc2dc"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				u"\ub274 \uce7c\ub808\ub3c4\ub2c8\uc544 \uc2dc\uac04"_s,
				"NCT"_s,
				u"\ub274 \uce7c\ub808\ub3c4\ub2c8\uc544 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"NCST"_s,
				u"\ub274 \uce7c\ub808\ub3c4\ub2c8\uc544 \ud45c\uc900\uc2dc"_s,
				"NCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Palau"_s),
			$of($$new($StringArray, {
				u"\ud314\ub77c\uc6b0 \uc2dc\uac04"_s,
				"PWT"_s,
				u"\ud314\ub77c\uc6b0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"PWST"_s,
				u"\ud314\ub77c\uc6b0 \ud45c\uc900\uc2dc"_s,
				"PWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(PITCAIRN)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pohnpei"_s),
			$of(PONT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Ponape"_s),
			$of(PONT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Port_Moresby"_s),
			$of($$new($StringArray, {
				u"\ud30c\ud478\uc544\ub274\uae30\ub2c8 \uc2dc\uac04"_s,
				"PGT"_s,
				u"\ud30c\ud478\uc544\ub274\uae30\ub2c8 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"PGST"_s,
				u"\ud30c\ud478\uc544 \ub274\uae30\ub2c8\uc544 \ud45c\uc900\uc2dc"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				u"\ucfe0\ud06c \uad70\ub3c4 \uc2dc\uac04"_s,
				"CKT"_s,
				u"\ucfe0\ud06c \uad70\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"CKHST"_s,
				u"\ucfe1 \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
				"CKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(ChST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Samoa"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tahiti"_s),
			$of($$new($StringArray, {
				u"\ud0c0\ud788\ud2f0 \uc2dc\uac04"_s,
				"TAHT"_s,
				u"\ud0c0\ud788\ud2f0 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"TAHST"_s,
				u"\ud0c0\ud788\ud2f0 \ud45c\uc900\uc2dc"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				u"\uae38\ubc84\ud2b8 \uad70\ub3c4 \uc2dc\uac04"_s,
				"GILT"_s,
				u"\uae38\ubc84\ud2b8 \uad70\ub3c4 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"GILST"_s,
				u"\uae38\ubc84\ud2b8 \uc81c\ub3c4 \ud45c\uc900\uc2dc"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				u"\ud1b5\uac00 \uc2dc\uac04"_s,
				"TOT"_s,
				u"\ud1b5\uac00 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"TOST"_s,
				u"\ud1b5\uac00 \ud45c\uc900\uc2dc"_s,
				"TOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Truk"_s),
			$of(CHUT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wake"_s),
			$of($$new($StringArray, {
				u"\uc6e8\uc774\ud06c \uc2dc\uac04"_s,
				"WAKT"_s,
				u"\uc6e8\uc774\ud06c \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"WAKST"_s,
				u"\uc6e8\uc774\ud06c \ud45c\uc900\uc2dc"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				u"\uc6d4\ub9ac\uc2a4 \ud6c4\ud22c\ub098 \uc2dc\uac04"_s,
				"WFT"_s,
				u"\uc6d4\ub9ac\uc2a4 \ud6c4\ud2b8\ub098 \uc77c\uad11\uc808\uc57d\uc2dc\uac04"_s,
				"WFST"_s,
				u"\uc6d4\ub9ac\uc2a4 \ud478\ud22c\ub098 \ud45c\uc900\uc2dc"_s,
				"WFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Yap"_s),
			$of(CHUT)
		}),
		$$new($ObjectArray, {
			$of("Poland"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("PRC"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("ROK"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Singapore"_s),
			$of(SGT)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(SBT)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("Turkey"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("UCT"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Universal"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("US/Alaska"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("US/Aleutian"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("US/Arizona"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("US/Central"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("US/Eastern"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Hawaii"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("US/Indiana-Starke"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("US/East-Indiana"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Michigan"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Mountain"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("US/Pacific"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("US/Samoa"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("VST"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("W-SU"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("WET"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Zulu"_s),
			$of(UTC)
		})
	});
}

TimeZoneNames_ko::TimeZoneNames_ko() {
}

$Class* TimeZoneNames_ko::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ko, name, initialize, &_TimeZoneNames_ko_ClassInfo_, allocate$TimeZoneNames_ko);
	return class$;
}

$Class* TimeZoneNames_ko::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun