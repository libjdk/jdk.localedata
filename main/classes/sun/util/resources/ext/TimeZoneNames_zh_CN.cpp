#include <sun/util/resources/ext/TimeZoneNames_zh_CN.h>

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

$MethodInfo _TimeZoneNames_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_zh_CN::*)()>(&TimeZoneNames_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_zh_CN",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_zh_CN_MethodInfo_
};

$Object* allocate$TimeZoneNames_zh_CN($Class* clazz) {
	return $of($alloc(TimeZoneNames_zh_CN));
}

void TimeZoneNames_zh_CN::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, ACT, $new($StringArray, {
		u"Acre \u65f6\u95f4"_s,
		"ACT"_s,
		u"Acre \u590f\u4ee4\u65f6"_s,
		"ACST"_s,
		u"Acre \u65f6\u95f4"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"\u4e2d\u592e\u6807\u51c6\u65f6\u95f4 (\u5357\u6fb3\u5927\u5229\u4e9a)"_s,
		"ACST"_s,
		u"\u4e2d\u592e\u590f\u4ee4\u65f6 (\u5357\u6fb3\u5927\u5229\u4e9a)"_s,
		"ACDT"_s,
		u"\u4e2d\u90e8\u65f6\u95f4 (\u5357\u6fb3\u5927\u5229\u4e9a)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		u"\u963f\u6839\u5ef7\u65f6\u95f4"_s,
		"ART"_s,
		u"\u963f\u6839\u5ef7\u590f\u4ee4\u65f6"_s,
		"ARST"_s,
		u"\u963f\u6839\u5ef7\u65f6\u95f4"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		u"\u963f\u62c9\u65af\u52a0\u6807\u51c6\u65f6\u95f4"_s,
		"AKST"_s,
		u"\u963f\u62c9\u65af\u52a0\u590f\u4ee4\u65f6"_s,
		"AKDT"_s,
		u"\u963f\u62c9\u65af\u52a0\u65f6\u95f4"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		u"\u4e9a\u9a6c\u900a\u65f6\u95f4"_s,
		"AMT"_s,
		u"\u4e9a\u9a6c\u900a\u590f\u4ee4\u65f6"_s,
		"AMST"_s,
		u"\u4e9a\u9a6c\u900a\u65f6\u95f4"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		u"\u963f\u62c9\u4f2f\u6807\u51c6\u65f6\u95f4"_s,
		"AST"_s,
		u"\u963f\u62c9\u4f2f\u590f\u4ee4\u65f6"_s,
		"ADT"_s,
		u"\u963f\u62c9\u4f2f\u534a\u5c9b\u65f6\u95f4"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		u"\u4e9a\u7f8e\u5c3c\u4e9a\u65f6\u95f4"_s,
		"AMT"_s,
		u"\u4e9a\u7f8e\u5c3c\u4e9a\u590f\u4ee4\u65f6"_s,
		"AMST"_s,
		u"\u4e9a\u7f8e\u5c3c\u4e9a\u65f6\u95f4"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		u"\u5927\u897f\u6d0b\u6807\u51c6\u65f6\u95f4"_s,
		"AST"_s,
		u"\u5927\u897f\u6d0b\u590f\u4ee4\u65f6"_s,
		"ADT"_s,
		u"\u5927\u897f\u6d0b\u65f6\u95f4"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		u"\u5b5f\u52a0\u62c9\u65f6\u95f4"_s,
		"BDT"_s,
		u"\u5b5f\u52a0\u62c9\u590f\u4ee4\u65f6"_s,
		"BDST"_s,
		u"\u5b5f\u52a0\u62c9\u65f6\u95f4"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"\u4e1c\u90e8\u6807\u51c6\u65f6\u95f4 (\u6606\u58eb\u5170)"_s,
		"AEST"_s,
		u"\u4e1c\u90e8\u590f\u4ee4\u65f6 (\u6606\u58eb\u5170)"_s,
		"AEDT"_s,
		u"\u4e1c\u90e8\u65f6\u95f4 (\u6606\u58eb\u5170)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"\u4e2d\u592e\u6807\u51c6\u65f6\u95f4 (\u5357\u6fb3\u5927\u5229\u4e9a/\u65b0\u5357\u5a01\u5c14\u65af)"_s,
		"ACST"_s,
		u"\u4e2d\u592e\u590f\u4ee4\u65f6 (\u5357\u6fb3\u5927\u5229\u4e9a/\u65b0\u5357\u5a01\u5c14\u65af)"_s,
		"ACDT"_s,
		u"\u4e2d\u90e8\u65f6\u95f4 (\u5357\u6fb3\u5927\u5229\u4e9a/\u65b0\u5357\u5a01\u5c14\u65af)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		u"\u5df4\u897f\u5229\u4e9a\u65f6\u95f4"_s,
		"BRT"_s,
		u"\u5df4\u897f\u5229\u4e9a\u590f\u4ee4\u65f6"_s,
		"BRST"_s,
		u"\u5df4\u897f\u5229\u4e9a\u65f6\u95f4"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		u"\u4e0d\u4e39\u65f6\u95f4"_s,
		"BTT"_s,
		u"\u4e0d\u4e39\u590f\u4ee4\u65f6"_s,
		"BTST"_s,
		u"\u4e0d\u4e39\u65f6\u95f4"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		u"\u4e2d\u975e\u65f6\u95f4"_s,
		"CAT"_s,
		u"\u4e2d\u975e\u590f\u4ee4\u65f6"_s,
		"CAST"_s,
		u"\u4e2d\u975e\u65f6\u95f4"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		u"\u4e2d\u6b27\u65f6\u95f4"_s,
		"CET"_s,
		u"\u4e2d\u6b27\u590f\u4ee4\u65f6"_s,
		"CEST"_s,
		u"\u4e2d\u6b27\u65f6\u95f4"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		u"\u67e5\u8428\u59c6\u6807\u51c6\u65f6\u95f4"_s,
		"CHAST"_s,
		u"\u67e5\u8428\u59c6\u590f\u4ee4\u65f6"_s,
		"CHADT"_s,
		u"\u67e5\u5854\u59c6\u65f6\u95f4"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		u"\u4e18\u514b\u65f6\u95f4"_s,
		"CHUT"_s,
		u"\u4e18\u514b\u590f\u4ee4\u65f6"_s,
		"CHUST"_s,
		u"\u4e18\u514b\u65f6\u95f4"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		u"\u4e2d\u90e8\u5370\u5ea6\u5c3c\u897f\u4e9a\u65f6\u95f4"_s,
		"WITA"_s,
		u"\u4e2d\u90e8\u5370\u5ea6\u5c3c\u897f\u4e9a\u590f\u4ee4\u65f6"_s,
		"CIST"_s,
		u"\u4e2d\u90e8\u5370\u5ea6\u5c3c\u897f\u4e9a\u65f6\u95f4"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		u"\u667a\u5229\u65f6\u95f4"_s,
		"CLT"_s,
		u"\u667a\u5229\u590f\u4ee4\u65f6"_s,
		"CLST"_s,
		u"\u667a\u5229\u65f6\u95f4"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		u"\u4e2d\u592e\u6807\u51c6\u65f6\u95f4"_s,
		"CST"_s,
		u"\u4e2d\u592e\u590f\u4ee4\u65f6"_s,
		"CDT"_s,
		u"\u4e2d\u90e8\u65f6\u95f4"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		u"\u4e2d\u56fd\u6807\u51c6\u65f6\u95f4"_s,
		"CST"_s,
		u"\u4e2d\u56fd\u590f\u4ee4\u65f6"_s,
		"CDT"_s,
		u"\u4e2d\u56fd\u65f6\u95f4"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		u"\u53e4\u5df4\u6807\u51c6\u65f6\u95f4"_s,
		"CST"_s,
		u"\u53e4\u5df4\u590f\u4ee4\u65f6"_s,
		"CDT"_s,
		u"\u53e4\u5df4\u65f6\u95f4"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		u"\u4e2d\u592e\u6807\u51c6\u65f6\u95f4 (\u5317\u9886\u5730)"_s,
		"ACST"_s,
		u"\u4e2d\u592e\u590f\u4ee4\u65f6 (\u5317\u9886\u5730)"_s,
		"ACDT"_s,
		u"\u4e2d\u90e8\u65f6\u95f4 (\u5317\u90e8\u5730\u533a)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		u"\u683c\u6797\u5a01\u6cbb\u65f6\u95f4"_s,
		"GMT"_s,
		u"\u7231\u5c14\u5170\u590f\u4ee4\u65f6"_s,
		"IST"_s,
		u"\u7231\u5c14\u5170\u65f6\u95f4"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"\u4e1c\u975e\u65f6\u95f4"_s,
		"EAT"_s,
		u"\u4e1c\u975e\u590f\u4ee4\u65f6"_s,
		"EAST"_s,
		u"\u4e1c\u975e\u65f6\u95f4"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"\u590d\u6d3b\u5c9b\u65f6\u95f4"_s,
		"EAST"_s,
		u"\u590d\u6d3b\u5c9b\u590f\u4ee4\u65f6"_s,
		"EASST"_s,
		u"\u590d\u6d3b\u5c9b\u65f6\u95f4"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"\u4e1c\u6b27\u65f6\u95f4"_s,
		"EET"_s,
		u"\u4e1c\u6b27\u590f\u4ee4\u65f6"_s,
		"EEST"_s,
		u"\u4e1c\u6b27\u65f6\u95f4"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"\u4e1c\u683c\u6797\u5c9b\u65f6\u95f4"_s,
		"EGT"_s,
		u"\u4e1c\u683c\u6797\u5c9b\u590f\u4ee4\u65f6"_s,
		"EGST"_s,
		u"\u4e1c\u683c\u6797\u5c9b\u65f6\u95f4"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"\u4e1c\u90e8\u6807\u51c6\u65f6\u95f4"_s,
		"EST"_s,
		u"\u4e1c\u90e8\u590f\u4ee4\u65f6"_s,
		"EDT"_s,
		u"\u4e1c\u90e8\u65f6\u95f4"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"\u4e1c\u90e8\u6807\u51c6\u65f6\u95f4 (\u65b0\u5357\u5a01\u5c14\u65af)"_s,
		"AEST"_s,
		u"\u4e1c\u90e8\u590f\u4ee4\u65f6 (\u65b0\u5357\u5a01\u5c14\u65af)"_s,
		"AEDT"_s,
		u"\u4e1c\u90e8\u65f6\u95f4 (\u65b0\u5357\u5a01\u5c14\u65af)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"\u8fdc\u4e1c\u6b27\u65f6\u95f4"_s,
		"FET"_s,
		u"\u8fdc\u4e1c\u6b27\u590f\u4ee4\u65f6"_s,
		"FEST"_s,
		u"\u8fdc\u4e1c\u6b27\u65f6\u95f4"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		u"\u52a0\u7eb3\u65f6\u95f4"_s,
		"GMT"_s,
		u"\u52a0\u7eb3\u590f\u4ee4\u65f6"_s,
		"GHST"_s,
		u"\u52a0\u7eb3\u65f6\u95f4"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		u"\u5188\u6bd4\u4e9a\u65f6\u95f4"_s,
		"GAMT"_s,
		u"\u5188\u6bd4\u4e9a\u590f\u4ee4\u65f6"_s,
		"GAMST"_s,
		u"\u5188\u6bd4\u4e9a\u65f6\u95f4"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		u"\u683c\u6797\u5a01\u6cbb\u65f6\u95f4"_s,
		"GMT"_s,
		u"\u683c\u6797\u5a01\u6cbb\u65f6\u95f4"_s,
		"GMT"_s,
		u"\u683c\u6797\u5a01\u6cbb\u65f6\u95f4"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		u"\u683c\u6797\u5a01\u6cbb\u65f6\u95f4"_s,
		"GMT"_s,
		u"\u82f1\u56fd\u590f\u4ee4\u65f6"_s,
		"BST"_s,
		u"\u82f1\u56fd\u65f6\u95f4"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		u"\u6ce2\u65af\u6e7e\u6807\u51c6\u65f6\u95f4"_s,
		"GST"_s,
		u"\u6ce2\u65af\u6e7e\u590f\u4ee4\u65f6"_s,
		"GDT"_s,
		u"\u6d77\u6e7e\u65f6\u95f4"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		u"\u9999\u6e2f\u65f6\u95f4"_s,
		"HKT"_s,
		u"\u9999\u6e2f\u590f\u4ee4\u65f6"_s,
		"HKST"_s,
		u"\u9999\u6e2f\u65f6\u95f4"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"\u590f\u5a01\u5937\u6807\u51c6\u65f6\u95f4"_s,
		"HST"_s,
		u"\u590f\u5a01\u5937\u590f\u4ee4\u65f6"_s,
		"HDT"_s,
		u"\u590f\u5a01\u5937\u65f6\u95f4"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		u"\u5370\u5ea6\u652f\u90a3\u65f6\u95f4"_s,
		"ICT"_s,
		u"\u5370\u5ea6\u652f\u90a3\u590f\u4ee4\u65f6"_s,
		"ICST"_s,
		u"\u5370\u5ea6\u652f\u90a3\u65f6\u95f4"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		u"\u4f0a\u5c14\u5e93\u6b21\u514b\u65f6\u95f4"_s,
		"IRKT"_s,
		u"\u4f0a\u5c14\u5e93\u6b21\u514b\u590f\u4ee4\u65f6"_s,
		"IRKST"_s,
		u"\u4f0a\u5c14\u5e93\u6b21\u514b\u65f6\u95f4"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		u"\u4f0a\u6717\u6807\u51c6\u65f6\u95f4"_s,
		"IRST"_s,
		u"\u4f0a\u6717\u590f\u4ee4\u65f6"_s,
		"IRDT"_s,
		u"\u4f0a\u6717\u65f6\u95f4"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"\u4ee5\u8272\u5217\u6807\u51c6\u65f6\u95f4"_s,
		"IST"_s,
		u"\u4ee5\u8272\u5217\u590f\u4ee4\u65f6"_s,
		"IDT"_s,
		u"\u4ee5\u8272\u5217\u65f6\u95f4"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		u"\u5370\u5ea6\u6807\u51c6\u65f6\u95f4"_s,
		"IST"_s,
		u"\u5370\u5ea6\u590f\u4ee4\u65f6"_s,
		"IDT"_s,
		u"\u5370\u5ea6\u65f6\u95f4"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		u"\u65e5\u672c\u6807\u51c6\u65f6\u95f4"_s,
		"JST"_s,
		u"\u65e5\u672c\u590f\u4ee4\u65f6"_s,
		"JDT"_s,
		u"\u65e5\u672c\u65f6\u95f4"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		u"\u514b\u62c9\u65af\u8bfa\u4e9a\u5c14\u65af\u514b\u65f6\u95f4"_s,
		"KRAT"_s,
		u"\u514b\u62c9\u65af\u8bfa\u4e9a\u5c14\u65af\u514b\u590f\u4ee4\u65f6"_s,
		"KRAST"_s,
		u"\u514b\u62c9\u65af\u8bfa\u4e9a\u5c14\u65af\u514b\u65f6\u95f4"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"\u97e9\u56fd\u6807\u51c6\u65f6\u95f4"_s,
		"KST"_s,
		u"\u97e9\u56fd\u590f\u4ee4\u65f6"_s,
		"KDT"_s,
		u"\u97e9\u56fd\u65f6\u95f4"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		u"\u8c6a\u516c\u6807\u51c6\u65f6\u95f4"_s,
		"LHST"_s,
		u"\u8c6a\u516c\u590f\u4ee4\u65f6"_s,
		"LHDT"_s,
		u"\u8c6a\u516c\u65f6\u95f4"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		u"\u9a6c\u7ecd\u5c14\u7fa4\u5c9b\u65f6\u95f4"_s,
		"MHT"_s,
		u"\u9a6c\u7ecd\u5c14\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
		"MHST"_s,
		u"\u9a6c\u7ecd\u5c14\u7fa4\u5c9b\u65f6\u95f4"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		u"\u7f05\u7538\u65f6\u95f4"_s,
		"MMT"_s,
		u"\u7f05\u7538\u590f\u4ee4\u65f6"_s,
		"MMST"_s,
		u"\u7f05\u7538\u65f6\u95f4"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		u"\u83ab\u65af\u79d1\u6807\u51c6\u65f6\u95f4"_s,
		"MSK"_s,
		u"\u83ab\u65af\u79d1\u590f\u4ee4\u65f6"_s,
		"MSD"_s,
		u"\u83ab\u65af\u79d1\u65f6\u95f4"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		u"Mountain \u6807\u51c6\u65f6\u95f4"_s,
		"MST"_s,
		u"Mountain \u590f\u4ee4\u65f6"_s,
		"MDT"_s,
		u"\u5c71\u5730\u65f6\u95f4"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		u"\u9a6c\u6765\u897f\u4e9a\u65f6\u95f4"_s,
		"MYT"_s,
		u"\u9a6c\u6765\u897f\u4e9a\u590f\u4ee4\u65f6"_s,
		"MYST"_s,
		u"\u9a6c\u6765\u897f\u4e9a\u65f6\u95f4"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		u"\u8d39\u5c14\u5357\u591a\u5fb7\u8bfa\u7f57\u5c3c\u4e9a\u65f6\u95f4"_s,
		"FNT"_s,
		u"\u8d39\u5c14\u5357\u591a\u5fb7\u8bfa\u7f57\u5c3c\u4e9a\u590f\u4ee4\u65f6"_s,
		"FNST"_s,
		u"\u8d39\u5c14\u5357\u591a\u5fb7\u8bfa\u7f57\u5c3c\u4e9a\u65f6\u95f4"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		u"Novosibirsk \u65f6\u95f4"_s,
		"NOVT"_s,
		u"Novosibirsk \u590f\u4ee4\u65f6"_s,
		"NOVST"_s,
		u"Novosibirsk \u65f6\u95f4"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		u"\u5c3c\u6cca\u5c14\u65f6\u95f4"_s,
		"NPT"_s,
		u"\u5c3c\u6cca\u5c14\u590f\u4ee4\u65f6"_s,
		"NPST"_s,
		u"\u5c3c\u6cca\u5c14\u65f6\u95f4"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		u"\u7ebd\u82ac\u5170\u6807\u51c6\u65f6\u95f4"_s,
		"NST"_s,
		u"\u7ebd\u82ac\u5170\u590f\u4ee4\u65f6"_s,
		"NDT"_s,
		u"\u7ebd\u82ac\u5170\u65f6\u95f4"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"\u65b0\u897f\u5170\u6807\u51c6\u65f6\u95f4"_s,
		"NZST"_s,
		u"\u65b0\u897f\u5170\u590f\u4ee4\u65f6"_s,
		"NZDT"_s,
		u"\u65b0\u897f\u5170\u65f6\u95f4"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		u"\u76ae\u7279\u5eb7\u5c9b\u6807\u51c6\u65f6\u95f4"_s,
		"PST"_s,
		u"\u76ae\u7279\u5eb7\u5c9b\u590f\u4ee4\u65f6"_s,
		"PDT"_s,
		u"\u76ae\u7279\u51ef\u6069\u65f6\u95f4"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		u"\u5df4\u57fa\u65af\u5766\u65f6\u95f4"_s,
		"PKT"_s,
		u"\u5df4\u57fa\u65af\u5766\u590f\u4ee4\u65f6"_s,
		"PKST"_s,
		u"\u5df4\u57fa\u65af\u5766\u65f6\u95f4"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		u"\u6ce2\u7eb3\u4f69\u65f6\u95f4"_s,
		"PONT"_s,
		u"\u6ce2\u7eb3\u4f69\u590f\u4ee4\u65f6"_s,
		"PONST"_s,
		u"\u6ce2\u7eb3\u4f69\u65f6\u95f4"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		u"\u592a\u5e73\u6d0b\u6807\u51c6\u65f6\u95f4"_s,
		"PST"_s,
		u"\u592a\u5e73\u6d0b\u590f\u4ee4\u65f6"_s,
		"PDT"_s,
		u"\u592a\u5e73\u6d0b\u65f6\u95f4"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"\u5357\u975e\u6807\u51c6\u65f6\u95f4"_s,
		"SAST"_s,
		u"\u5357\u975e\u590f\u4ee4\u65f6"_s,
		"SAST"_s,
		u"\u5357\u975e\u65f6\u95f4"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"\u6240\u7f57\u95e8\u7fa4\u5c9b\u65f6\u95f4"_s,
		"SBT"_s,
		u"\u6240\u7f57\u95e8\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
		"SBST"_s,
		u"\u6240\u7f57\u95e8\u7fa4\u5c9b\u65f6\u95f4"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		u"\u65b0\u52a0\u5761\u65f6\u95f4"_s,
		"SGT"_s,
		u"\u65b0\u52a0\u5761\u590f\u4ee4\u65f6"_s,
		"SGST"_s,
		u"\u65b0\u52a0\u5761\u65f6\u95f4"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"\u4e1c\u90e8\u6807\u51c6\u65f6\u95f4 (\u5854\u65af\u9a6c\u5c3c\u4e9a)"_s,
		"AEST"_s,
		u"\u4e1c\u90e8\u590f\u4ee4\u65f6 (\u5854\u65af\u9a6c\u5c3c\u4e9a)"_s,
		"AEDT"_s,
		u"\u4e1c\u90e8\u65f6\u95f4 (\u5854\u65af\u9a6c\u5c3c\u4e9a)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"\u571f\u5e93\u66fc\u65f6\u95f4"_s,
		"TMT"_s,
		u"\u571f\u5e93\u66fc\u590f\u4ee4\u65f6"_s,
		"TMST"_s,
		u"\u571f\u5e93\u66fc\u65f6\u95f4"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		u"\u5e93\u4f26\u65f6\u95f4"_s,
		"ULAT"_s,
		u"\u5e93\u4f26\u590f\u4ee4\u65f6"_s,
		"ULAST"_s,
		u"\u5e93\u4f26\u65f6\u95f4"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"\u897f\u975e\u65f6\u95f4"_s,
		"WAT"_s,
		u"\u897f\u975e\u590f\u4ee4\u65f6"_s,
		"WAST"_s,
		u"\u897f\u975e\u65f6\u95f4"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"\u897f\u6b27\u65f6\u95f4"_s,
		"WET"_s,
		u"\u897f\u6b27\u590f\u4ee4\u65f6"_s,
		"WEST"_s,
		u"\u897f\u6b27\u65f6\u95f4"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"\u897f\u683c\u6797\u5170\u5c9b\u65f6\u95f4"_s,
		"WGT"_s,
		u"\u897f\u683c\u6797\u5170\u5c9b\u590f\u4ee4\u65f6"_s,
		"WGST"_s,
		u"\u897f\u683c\u6797\u5170\u5c9b\u65f6\u95f4"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"\u897f\u5370\u5ea6\u5c3c\u897f\u4e9a\u65f6\u95f4"_s,
		"WIB"_s,
		u"\u897f\u5370\u5ea6\u5c3c\u897f\u4e9a\u590f\u4ee4\u65f6"_s,
		"WIST"_s,
		u"\u897f\u5370\u5ea6\u5c3c\u897f\u4e9a\u65f6\u95f4"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		u"\u897f\u90e8\u6807\u51c6\u65f6\u95f4 (\u6fb3\u5927\u5229\u4e9a)"_s,
		"AWST"_s,
		u"\u897f\u90e8\u590f\u4ee4\u65f6 (\u6fb3\u5927\u5229\u4e9a)"_s,
		"AWDT"_s,
		u"\u897f\u90e8\u65f6\u95f4 (\u6fb3\u5927\u5229\u4e9a)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		u"\u8428\u6469\u4e9a\u7fa4\u5c9b\u6807\u51c6\u65f6\u95f4"_s,
		"SST"_s,
		u"\u8428\u6469\u4e9a\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
		"SDT"_s,
		u"\u8428\u6469\u4e9a\u65f6\u95f4"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		u"\u897f\u8428\u6469\u4e9a\u65f6\u95f4"_s,
		"WSST"_s,
		u"\u897f\u8428\u6469\u4e9a\u590f\u4ee4\u65f6"_s,
		"WSDT"_s,
		u"\u897f\u8428\u6469\u4e9a\u65f6\u95f4"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"Chamorro \u6807\u51c6\u65f6\u95f4"_s,
		"ChST"_s,
		u"Chamorro \u590f\u4ee4\u65f6"_s,
		"ChDT"_s,
		u"\u67e5\u6469\u6d1b\u65f6\u95f4"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"\u4e1c\u90e8\u6807\u51c6\u65f6\u95f4 (\u7ef4\u591a\u5229\u4e9a)"_s,
		"AEST"_s,
		u"\u4e1c\u90e8\u590f\u4ee4\u65f6 (\u7ef4\u591a\u5229\u4e9a)"_s,
		"AEDT"_s,
		u"\u4e1c\u90e8\u65f6\u95f4 (\u7ef4\u591a\u5229\u4e9a)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		u"\u534f\u8c03\u4e16\u754c\u65f6\u95f4"_s,
		"UTC"_s,
		u"\u534f\u8c03\u4e16\u754c\u65f6\u95f4"_s,
		"UTC"_s,
		u"\u534f\u8c03\u4e16\u754c\u65f6\u95f4"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"\u4e4c\u5179\u522b\u514b\u65af\u5766\u65f6\u95f4"_s,
		"UZT"_s,
		u"\u4e4c\u5179\u522b\u514b\u65af\u5766\u590f\u4ee4\u65f6"_s,
		"UZST"_s,
		u"\u4e4c\u5179\u522b\u514b\u65af\u5766\u65f6\u95f4"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		u"\u4e2d\u56fd\u6807\u51c6\u65f6\u95f4"_s,
		"XJT"_s,
		u"\u4e2d\u56fd\u590f\u4ee4\u65f6"_s,
		"XJDT"_s,
		u"\u4e2d\u56fd\u65f6\u95f4"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		u"\u4e9a\u5e93\u6b21\u514b\u65f6\u95f4"_s,
		"YAKT"_s,
		u"\u4e9a\u5e93\u6b21\u514b\u590f\u4ee4\u65f6"_s,
		"YAKST"_s,
		u"\u4e9a\u5e93\u6b21\u514b\u65f6\u95f4"_s,
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
				u"\u5df4\u62c9\u572d\u65f6\u95f4"_s,
				"PYT"_s,
				u"\u5df4\u62c9\u572d\u590f\u4ee4\u65f6"_s,
				"PYST"_s,
				u"\u5df4\u62c9\u572d\u65f6\u95f4"_s,
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
				u"\u54e5\u4f26\u6bd4\u4e9a\u65f6\u95f4"_s,
				"COT"_s,
				u"\u54e5\u4f26\u6bd4\u4e9a\u590f\u4ee4\u65f6"_s,
				"COST"_s,
				u"\u54e5\u4f26\u6bd4\u4e9a\u65f6\u95f4"_s,
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
				u"\u59d4\u5185\u745e\u62c9\u65f6\u95f4"_s,
				"VET"_s,
				u"\u59d4\u5185\u745e\u62c9\u590f\u4ee4\u65f6"_s,
				"VEST"_s,
				u"\u59d4\u5185\u745e\u62c9\u65f6\u95f4"_s,
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
				u"\u6cd5\u5c5e\u572d\u4e9a\u90a3\u65f6\u95f4"_s,
				"GFT"_s,
				u"\u6cd5\u5c5e\u572d\u4e9a\u90a3\u590f\u4ee4\u65f6"_s,
				"GFST"_s,
				u"\u6cd5\u5c5e\u572d\u4e9a\u90a3\u65f6\u95f4"_s,
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
				u"\u5384\u74dc\u591a\u5c14\u65f6\u95f4"_s,
				"ECT"_s,
				u"\u5384\u74dc\u591a\u5c14\u590f\u4ee4\u65f6"_s,
				"ECST"_s,
				u"\u5384\u74dc\u591a\u5c14\u65f6\u95f4"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				u"\u572d\u4e9a\u90a3\u65f6\u95f4"_s,
				"GYT"_s,
				u"\u572d\u4e9a\u90a3\u590f\u4ee4\u65f6"_s,
				"GYST"_s,
				u"\u572d\u4e9a\u90a3\u65f6\u95f4"_s,
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
				u"\u73bb\u5229\u7ef4\u4e9a\u65f6\u95f4"_s,
				"BOT"_s,
				u"\u73bb\u5229\u7ef4\u4e9a\u590f\u4ee4\u65f6"_s,
				"BOST"_s,
				u"\u73bb\u5229\u7ef4\u4e9a\u65f6\u95f4"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				u"\u79d8\u9c81\u65f6\u95f4"_s,
				"PET"_s,
				u"\u79d8\u9c81\u590f\u4ee4\u65f6"_s,
				"PEST"_s,
				u"\u79d8\u9c81\u65f6\u95f4"_s,
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
				u"\u76ae\u57c3\u5c14\u5c9b\u53ca\u5bc6\u514b\u9686\u5c9b\u6807\u51c6\u65f6\u95f4"_s,
				"PMST"_s,
				u"\u76ae\u57c3\u5c14\u5c9b\u53ca\u5bc6\u514b\u9686\u5c9b\u590f\u4ee4\u65f6"_s,
				"PMDT"_s,
				u"\u76ae\u57c3\u5c14\u548c\u5bc6\u514b\u9686\u5c9b\u65f6\u95f4"_s,
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
				u"\u4e4c\u62c9\u572d\u65f6\u95f4"_s,
				"UYT"_s,
				u"\u4e4c\u62c9\u572d\u590f\u4ee4\u65f6"_s,
				"UYST"_s,
				u"\u4e4c\u62c9\u572d\u65f6\u95f4"_s,
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
				u"\u82cf\u5229\u5357\u65f6\u95f4"_s,
				"SRT"_s,
				u"\u82cf\u5229\u5357\u590f\u4ee4\u65f6"_s,
				"SRST"_s,
				u"\u82cf\u5229\u5357\u65f6\u95f4"_s,
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
				u"\u6234\u7ef4\u65af\u65f6\u95f4"_s,
				"DAVT"_s,
				u"\u6234\u7ef4\u65af\u590f\u4ee4\u65f6"_s,
				"DAVST"_s,
				u"\u6234\u7ef4\u65af\u65f6\u95f4"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				u"Dumont-d\'Urville \u65f6\u95f4"_s,
				"DDUT"_s,
				u"Dumont-d\'Urville \u590f\u4ee4\u65f6"_s,
				"DDUST"_s,
				u"Dumont-d\'Urville \u65f6\u95f4"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				u"\u9ea6\u5938\u91cc\u5c9b\u65f6\u95f4"_s,
				"MIST"_s,
				u"\u9ea6\u5938\u91cc\u5c9b\u590f\u4ee4\u65f6"_s,
				"MIST"_s,
				u"\u9ea6\u5938\u91cc\u5c9b\u65f6\u95f4"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				u"\u83ab\u68ee\u65f6\u95f4"_s,
				"MAWT"_s,
				u"\u83ab\u68ee\u590f\u4ee4\u65f6"_s,
				"MAWST"_s,
				u"\u83ab\u68ee\u65f6\u95f4"_s,
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
				u"\u7f57\u745f\u62c9\u65f6\u95f4"_s,
				"ROTT"_s,
				u"\u7f57\u745f\u62c9\u590f\u4ee4\u65f6"_s,
				"ROTST"_s,
				u"\u7f57\u745f\u62c9\u65f6\u95f4"_s,
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
				u"Syowa \u65f6\u95f4"_s,
				"SYOT"_s,
				u"Syowa \u590f\u4ee4\u65f6"_s,
				"SYOST"_s,
				u"Syowa \u65f6\u95f4"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				u"\u534f\u8c03\u4e16\u754c\u65f6\u95f4"_s,
				"UTC"_s,
				u"\u4e2d\u6b27\u590f\u4ee4\u65f6"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				u"\u83ab\u65af\u6258\u514b\u65f6\u95f4"_s,
				"VOST"_s,
				u"\u83ab\u65af\u6258\u514b\u590f\u4ee4\u65f6"_s,
				"VOSST"_s,
				u"\u83ab\u65af\u6258\u514b\u65f6\u95f4"_s,
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
				u"Alma-Ata \u65f6\u95f4"_s,
				"ALMT"_s,
				u"Alma-Ata \u590f\u4ee4\u65f6"_s,
				"ALMST"_s,
				u"Alma-Ata \u65f6\u95f4"_s,
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
				u"\u963f\u90a3\u5e95\u6cb3\u65f6\u95f4"_s,
				"ANAT"_s,
				u"\u963f\u90a3\u5e95\u6cb3\u590f\u4ee4\u65f6"_s,
				"ANAST"_s,
				u"\u963f\u90a3\u5e95\u6cb3\u65f6\u95f4"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				u"Aqtau \u65f6\u95f4"_s,
				"AQTT"_s,
				u"Aqtau \u590f\u4ee4\u65f6"_s,
				"AQTST"_s,
				u"Aqtau \u65f6\u95f4"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				u"Aqtobe \u65f6\u95f4"_s,
				"AQTT"_s,
				u"Aqtobe \u590f\u4ee4\u65f6"_s,
				"AQTST"_s,
				u"Aqtobe \u65f6\u95f4"_s,
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
				u"\u4e9a\u585e\u62dc\u7136\u65f6\u95f4"_s,
				"AZT"_s,
				u"\u4e9a\u585e\u62dc\u7136\u590f\u4ee4\u65f6"_s,
				"AZST"_s,
				u"\u4e9a\u585e\u62dc\u7136\u65f6\u95f4"_s,
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
				u"\u5409\u5c14\u5409\u65af\u65af\u5766\u65f6\u95f4"_s,
				"KGT"_s,
				u"\u5409\u5c14\u5409\u65af\u65af\u5766\u590f\u4ee4\u65f6"_s,
				"KGST"_s,
				u"\u5409\u5c14\u5409\u65af\u65af\u5766\u65f6\u95f4"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				u"\u6587\u83b1\u65f6\u95f4"_s,
				"BNT"_s,
				u"\u6587\u83b1\u590f\u4ee4\u65f6"_s,
				"BNST"_s,
				u"\u6587\u83b1\u65f6\u95f4"_s,
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
				u"Choibalsan \u65f6\u95f4"_s,
				"CHOT"_s,
				u"Choibalsan \u590f\u4ee4\u65f6"_s,
				"CHOST"_s,
				u"Choibalsan \u65f6\u95f4"_s,
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
				u"\u4e1c\u5e1d\u6c76\u65f6\u95f4"_s,
				"TLT"_s,
				u"\u4e1c\u5e1d\u6c76\u590f\u4ee4\u65f6"_s,
				"TLST"_s,
				u"\u4e1c\u5e1d\u6c76\u65f6\u95f4"_s,
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
				u"\u5854\u5409\u514b\u65af\u5766\u65f6\u95f4"_s,
				"TJT"_s,
				u"\u5854\u5409\u514b\u65af\u5766\u590f\u4ee4\u65f6"_s,
				"TJST"_s,
				u"\u5854\u5409\u514b\u65af\u5766\u65f6\u95f4"_s,
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
				u"\u79d1\u5e03\u591a\u65f6\u95f4"_s,
				"HOVT"_s,
				u"\u79d1\u5e03\u591a\u590f\u4ee4\u65f6"_s,
				"HOVST"_s,
				u"\u79d1\u5e03\u591a\u65f6\u95f4"_s,
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
				u"\u4e1c\u5370\u5ea6\u5c3c\u897f\u4e9a\u65f6\u95f4"_s,
				"WIT"_s,
				u"\u4e1c\u5370\u5ea6\u5c3c\u897f\u4e9a\u590f\u4ee4\u65f6"_s,
				"EIST"_s,
				u"\u4e1c\u5370\u5ea6\u5c3c\u897f\u4e9a\u65f6\u95f4"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				u"\u963f\u5bcc\u6c57\u65f6\u95f4"_s,
				"AFT"_s,
				u"\u963f\u5bcc\u6c57\u590f\u4ee4\u65f6"_s,
				"AFST"_s,
				u"\u963f\u5bcc\u6c57\u65f6\u95f4"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				u"\u5f7c\u5f97\u7f57\u5df4\u752b\u6d1b\u592b\u65af\u514b\u65f6\u95f4"_s,
				"PETT"_s,
				u"\u5f7c\u5f97\u7f57\u5df4\u752b\u6d1b\u592b\u65af\u514b\u590f\u4ee4\u65f6"_s,
				"PETST"_s,
				u"\u5f7c\u5f97\u7f57\u5df4\u752b\u6d1b\u592b\u65af\u514b\u65f6\u95f4"_s,
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
				u"Magadan \u65f6\u95f4"_s,
				"MAGT"_s,
				u"Magadan \u590f\u4ee4\u65f6"_s,
				"MAGST"_s,
				u"Magadan \u65f6\u95f4"_s,
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
				u"Oral \u65f6\u95f4"_s,
				"ORAT"_s,
				u"Oral \u590f\u4ee4\u65f6"_s,
				"ORAST"_s,
				u"Oral \u65f6\u95f4"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				u"\u9102\u6728\u65af\u514b\u65f6\u95f4"_s,
				"OMST"_s,
				u"\u9102\u6728\u65af\u514b\u590f\u4ee4\u65f6"_s,
				"OMSST"_s,
				u"\u9102\u6728\u65af\u514b\u65f6\u95f4"_s,
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
				u"Qyzylorda \u65f6\u95f4"_s,
				"QYZT"_s,
				u"Qyzylorda \u590f\u4ee4\u65f6"_s,
				"QYZST"_s,
				u"Qyzylorda \u65f6\u95f4"_s,
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
				u"\u5e93\u9875\u5c9b\u65f6\u95f4"_s,
				"SAKT"_s,
				u"\u5e93\u9875\u5c9b\u590f\u4ee4\u65f6"_s,
				"SAKST"_s,
				u"\u5e93\u9875\u5c9b\u65f6\u95f4"_s,
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
				u"\u4e54\u6cbb\u4e9a\u65f6\u95f4"_s,
				"GET"_s,
				u"\u4e54\u6cbb\u4e9a\u590f\u4ee4\u65f6"_s,
				"GEST"_s,
				u"\u4e54\u6cbb\u4e9a\u65f6\u95f4"_s,
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
				u"\u4e4c\u65af\u5b63\u6d85\u62c9\u65f6\u95f4"_s,
				"VLAT"_s,
				u"\u4e4c\u65af\u5b63\u6d85\u62c9\u590f\u4ee4\u65f6"_s,
				"VLAST"_s,
				u"\u4e4c\u65af\u5b63\u6d85\u62c9\u65f6\u95f4"_s,
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
				u"\u6d77\u53c2\u5d34\u65f6\u95f4"_s,
				"VLAT"_s,
				u"\u6d77\u53c2\u5d34\u590f\u4ee4\u65f6"_s,
				"VLAST"_s,
				u"\u6d77\u53c2\u5d34\u65f6\u95f4"_s,
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
				u"Yekaterinburg \u65f6\u95f4"_s,
				"YEKT"_s,
				u"Yekaterinburg \u590f\u4ee4\u65f6"_s,
				"YEKST"_s,
				u"Yekaterinburg \u65f6\u95f4"_s,
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
				u"\u4e9a\u901f\u5c14\u7fa4\u5c9b\u65f6\u95f4"_s,
				"AZOT"_s,
				u"\u4e9a\u901f\u5c14\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"AZOST"_s,
				u"\u4e9a\u901f\u5c14\u7fa4\u5c9b\u65f6\u95f4"_s,
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
				u"\u4f5b\u5fb7\u89d2\u65f6\u95f4"_s,
				"CVT"_s,
				u"\u4f5b\u5fb7\u89d2\u590f\u4ee4\u65f6"_s,
				"CVST"_s,
				u"\u4f5b\u5fb7\u89d2\u65f6\u95f4"_s,
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
				u"\u5357\u4e54\u6cbb\u4e9a\u6807\u51c6\u65f6\u95f4"_s,
				"GST"_s,
				u"\u5357\u4e54\u6cbb\u4e9a\u590f\u4ee4\u65f6"_s,
				"GDT"_s,
				u"\u5357\u4e54\u6cbb\u4e9a\u5c9b\u65f6\u95f4"_s,
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
				u"\u798f\u514b\u5170\u7fa4\u5c9b\u65f6\u95f4"_s,
				"FKT"_s,
				u"\u798f\u514b\u5170\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"FKST"_s,
				u"\u798f\u514b\u5170\u7fa4\u5c9b\u65f6\u95f4"_s,
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
				u"\u4e2d\u897f\u90e8\u6807\u51c6\u65f6\u95f4 (\u6fb3\u5927\u5229\u4e9a)"_s,
				"ACWST"_s,
				u"\u4e2d\u897f\u90e8\u590f\u4ee4\u65f6 (\u6fb3\u5927\u5229\u4e9a)"_s,
				"ACWDT"_s,
				u"\u4e2d\u897f\u90e8\u65f6\u95f4 (\u6fb3\u5927\u5229\u4e9a)"_s,
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
				u"\u6c99\u9a6c\u62c9\u65f6\u95f4"_s,
				"SAMT"_s,
				u"\u6c99\u9a6c\u62c9\u590f\u4ee4\u65f6"_s,
				"SAMST"_s,
				u"\u6c99\u9a6c\u62c9\u65f6\u95f4"_s,
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
				u"\u5370\u5ea6\u6d0b\u5730\u5e26\u65f6\u95f4"_s,
				"IOT"_s,
				u"\u5370\u5ea6\u6d0b\u5730\u5e26\u590f\u4ee4\u65f6"_s,
				"IOST"_s,
				u"\u5370\u5ea6\u6d0b\u5730\u5e26\u65f6\u95f4"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				u"\u5723\u8bde\u5c9b\u65f6\u95f4"_s,
				"CXT"_s,
				u"\u5723\u8bde\u5c9b\u590f\u4ee4\u65f6"_s,
				"CXST"_s,
				u"\u5723\u8bde\u5c9b\u65f6\u95f4"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				u"\u53ef\u53ef\u65af\u7fa4\u5c9b\u65f6\u95f4"_s,
				"CCT"_s,
				u"\u53ef\u53ef\u65af\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"CCST"_s,
				u"\u53ef\u53ef\u65af\u7fa4\u5c9b\u65f6\u95f4"_s,
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
				u"\u6cd5\u5c5e\u5357\u6781\u65f6\u95f4"_s,
				"TFT"_s,
				u"\u6cd5\u5c5e\u5357\u6781\u590f\u4ee4\u65f6"_s,
				"TFST"_s,
				u"\u6cd5\u5c5e\u5357\u6781\u65f6\u95f4"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				u"\u585e\u5e2d\u5c14\u7fa4\u5c9b\u65f6\u95f4"_s,
				"SCT"_s,
				u"\u585e\u5e2d\u5c14\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"SCST"_s,
				u"\u585e\u5e2d\u5c14\u7fa4\u5c9b\u65f6\u95f4"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				u"\u9a6c\u5c14\u4ee3\u592b\u65f6\u95f4"_s,
				"MVT"_s,
				u"\u9a6c\u5c14\u4ee3\u592b\u590f\u4ee4\u65f6"_s,
				"MVST"_s,
				u"\u9a6c\u5c14\u4ee3\u592b\u65f6\u95f4"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				u"\u6469\u91cc\u897f\u65af\u65f6\u95f4"_s,
				"MUT"_s,
				u"\u6469\u91cc\u897f\u65af\u590f\u4ee4\u65f6"_s,
				"MUST"_s,
				u"\u6469\u91cc\u897f\u65af\u65f6\u95f4"_s,
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
				u"\u7559\u5c3c\u65fa\u5c9b\u65f6\u95f4"_s,
				"RET"_s,
				u"\u7559\u5c3c\u65fa\u5c9b\u590f\u4ee4\u65f6"_s,
				"REST"_s,
				u"\u7559\u5c3c\u65fa\u5c9b\u65f6\u95f4"_s,
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
				u"\u4e2d\u6b27\u65f6\u95f4"_s,
				"MET"_s,
				u"\u4e2d\u6b27\u590f\u4ee4\u65f6"_s,
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
				u"\u74e6\u5974\u963f\u56fe\u65f6\u95f4"_s,
				"VUT"_s,
				u"\u74e6\u5974\u963f\u56fe\u590f\u4ee4\u65f6"_s,
				"VUST"_s,
				u"\u74e6\u5974\u963f\u56fe\u65f6\u95f4"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				u"\u83f2\u5c3c\u514b\u65af\u7fa4\u5c9b\u65f6\u95f4"_s,
				"PHOT"_s,
				u"\u83f2\u5c3c\u514b\u65af\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"PHOST"_s,
				u"\u83f2\u5c3c\u514b\u65af\u7fa4\u5c9b\u65f6\u95f4"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				u"\u6258\u514b\u52b3\u7fa4\u5c9b\u65f6\u95f4"_s,
				"TKT"_s,
				u"\u6258\u514b\u52b3\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"TKST"_s,
				u"\u6258\u514b\u52b3\u7fa4\u5c9b\u65f6\u95f4"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				u"\u6590\u6d4e\u65f6\u95f4"_s,
				"FJT"_s,
				u"\u6590\u6d4e\u590f\u4ee4\u65f6"_s,
				"FJST"_s,
				u"\u6590\u6d4e\u65f6\u95f4"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				u"\u5410\u9c81\u74e6\u65f6\u95f4"_s,
				"TVT"_s,
				u"\u5410\u9c81\u74e6\u590f\u4ee4\u65f6"_s,
				"TVST"_s,
				u"\u5410\u9c81\u74e6\u65f6\u95f4"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				u"\u52a0\u62c9\u5df4\u54e5\u65f6\u95f4"_s,
				"GALT"_s,
				u"\u52a0\u62c9\u5df4\u54e5\u590f\u4ee4\u65f6"_s,
				"GALST"_s,
				u"\u52a0\u62c9\u5df4\u54e5\u65f6\u95f4"_s,
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
				u"Line \u5c9b\u65f6\u95f4"_s,
				"LINT"_s,
				u"Line \u5c9b\u590f\u4ee4\u65f6"_s,
				"LINST"_s,
				u"Line \u5c9b\u65f6\u95f4"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				u"Kosrae \u65f6\u95f4"_s,
				"KOST"_s,
				u"Kosrae \u590f\u4ee4\u65f6"_s,
				"KOSST"_s,
				u"Kosrae \u65f6\u95f4"_s,
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
				u"\u9a6c\u514b\u8428\u65af\u65f6\u95f4"_s,
				"MART"_s,
				u"\u9a6c\u514b\u8428\u65af\u590f\u4ee4\u65f6"_s,
				"MARST"_s,
				u"\u9a6c\u514b\u8428\u65af\u65f6\u95f4"_s,
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
				u"\u8bfa\u9c81\u65f6\u95f4"_s,
				"NRT"_s,
				u"\u8bfa\u9c81\u590f\u4ee4\u65f6"_s,
				"NRST"_s,
				u"\u8bfa\u9c81\u65f6\u95f4"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				u"\u7ebd\u5a01\u5c9b\u65f6\u95f4"_s,
				"NUT"_s,
				u"\u7ebd\u5a01\u5c9b\u590f\u4ee4\u65f6"_s,
				"NUST"_s,
				u"\u7ebd\u5a01\u5c9b\u65f6\u95f4"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				u"\u8bfa\u798f\u514b\u65f6\u95f4"_s,
				"NFT"_s,
				u"\u8bfa\u798f\u514b\u590f\u4ee4\u65f6"_s,
				"NFST"_s,
				u"\u8bfa\u798f\u514b\u65f6\u95f4"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				u"\u65b0\u52a0\u52d2\u591a\u5c3c\u4e9a\u65f6\u95f4"_s,
				"NCT"_s,
				u"\u65b0\u52a0\u52d2\u591a\u5c3c\u4e9a\u590f\u4ee4\u65f6"_s,
				"NCST"_s,
				u"\u65b0\u52a0\u52d2\u591a\u5c3c\u4e9a\u65f6\u95f4"_s,
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
				u"\u5e1b\u7409\u65f6\u95f4"_s,
				"PWT"_s,
				u"\u5e1b\u7409\u590f\u4ee4\u65f6"_s,
				"PWST"_s,
				u"\u5e1b\u7409\u65f6\u95f4"_s,
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
				u"\u5df4\u5e03\u4e9a\u65b0\u51e0\u5185\u4e9a\u65f6\u95f4"_s,
				"PGT"_s,
				u"\u5df4\u5e03\u4e9a\u65b0\u51e0\u5185\u4e9a\u590f\u4ee4\u65f6"_s,
				"PGST"_s,
				u"\u5df4\u5e03\u4e9a\u65b0\u51e0\u5185\u4e9a\u65f6\u95f4"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				u"\u5e93\u514b\u7fa4\u5c9b\u65f6\u95f4"_s,
				"CKT"_s,
				u"\u5e93\u514b\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"CKHST"_s,
				u"\u5e93\u514b\u7fa4\u5c9b\u65f6\u95f4"_s,
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
				u"\u5927\u6eaa\u5730\u5c9b\u65f6\u95f4"_s,
				"TAHT"_s,
				u"\u5927\u6eaa\u5730\u5c9b\u590f\u4ee4\u65f6"_s,
				"TAHST"_s,
				u"\u5927\u6eaa\u5730\u5c9b\u65f6\u95f4"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				u"\u5409\u4f2f\u7279\u7fa4\u5c9b\u65f6\u95f4"_s,
				"GILT"_s,
				u"\u5409\u4f2f\u7279\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"GILST"_s,
				u"\u5409\u4f2f\u7279\u7fa4\u5c9b\u65f6\u95f4"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				u"\u4e1c\u52a0\u65f6\u95f4"_s,
				"TOT"_s,
				u"\u4e1c\u52a0\u590f\u4ee4\u65f6"_s,
				"TOST"_s,
				u"\u4e1c\u52a0\u65f6\u95f4"_s,
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
				u"\u5a01\u514b\u65f6\u95f4"_s,
				"WAKT"_s,
				u"\u5a01\u514b\u590f\u4ee4\u65f6"_s,
				"WAKST"_s,
				u"\u5a01\u514b\u65f6\u95f4"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				u"\u74e6\u5229\u65af\u53ca\u798f\u675c\u7eb3\u7fa4\u5c9b\u65f6\u95f4"_s,
				"WFT"_s,
				u"\u74e6\u5229\u65af\u53ca\u798f\u675c\u7eb3\u7fa4\u5c9b\u590f\u4ee4\u65f6"_s,
				"WFST"_s,
				u"\u74e6\u5229\u65af\u53ca\u798f\u675c\u7eb3\u7fa4\u5c9b\u65f6\u95f4"_s,
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

TimeZoneNames_zh_CN::TimeZoneNames_zh_CN() {
}

$Class* TimeZoneNames_zh_CN::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_zh_CN, name, initialize, &_TimeZoneNames_zh_CN_ClassInfo_, allocate$TimeZoneNames_zh_CN);
	return class$;
}

$Class* TimeZoneNames_zh_CN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun