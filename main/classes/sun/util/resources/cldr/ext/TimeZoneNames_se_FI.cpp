#include <sun/util/resources/cldr/ext/TimeZoneNames_se_FI.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_se_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_se_FI::*)()>(&TimeZoneNames_se_FI::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_se_FI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_se_FI",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_se_FI_MethodInfo_
};

$Object* allocate$TimeZoneNames_se_FI($Class* clazz) {
	return $of($alloc(TimeZoneNames_se_FI));
}

void TimeZoneNames_se_FI::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_se_FI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"Greenwicha \u00e1igi"_s,
		"GMT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"Apia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Apia geasse\u00e1igi"_s,
		""_s,
		u"Apia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"Cooksulloid d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Cooksulloid geasi beallemuttu \u00e1igi"_s,
		""_s,
		u"Cooksulloid \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"Cuba d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Cuba geasse\u00e1igi"_s,
		""_s,
		u"Cuba \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"Fiji d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Fiji geasse\u00e1igi"_s,
		""_s,
		u"Fiji \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"Golfa d\u00e1lve\u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"Hovda d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Hovda geasse\u00e1igi"_s,
		""_s,
		u"Hovda \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"Irana d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Irana geasse\u00e1igi"_s,
		""_s,
		u"Irana \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"Niuea \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Omska d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Omska geasse\u00e1igi"_s,
		""_s,
		u"Omska \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"Peru d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Peru geasse\u00e1igi"_s,
		""_s,
		u"Peru \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"Chuuka \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"Wakesullo \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"Chile d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Chile geasse\u00e1igi"_s,
		""_s,
		u"Chile \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"Kiinn\u00e1 d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Kiinn\u00e1 geasse\u00e1igi"_s,
		""_s,
		u"Kiinn\u00e1 \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"Kokossulloid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"Davisa \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"India d\u00e1lve\u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Jap\u00e1na d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Jap\u00e1na geasse\u00e1igi"_s,
		""_s,
		u"Jap\u00e1na \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"Korea d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Korea geasse\u00e1igi"_s,
		""_s,
		u"Korea \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"Nauru \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"Nepala \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"Palaua \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"Samoa d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Samoa geasse\u00e1igi"_s,
		""_s,
		u"Samoa \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"Syowa \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"Tonga d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Tonga geasse\u00e1igi"_s,
		""_s,
		u"Tonga \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"Alaska d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Alaska geasse\u00e1igi"_s,
		""_s,
		u"Alaska \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"Amazona d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Amazona geasse\u00e1igi"_s,
		""_s,
		u"Amazona \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"Azoraid d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Azoraid geasse\u00e1igi"_s,
		""_s,
		u"Azoraid \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"Bhutana \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"Brunei Darussalama \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"Beass\u00e1\u0161sullo d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Beass\u00e1\u0161sullo geasse\u00e1igi"_s,
		""_s,
		u"Beass\u00e1\u0161sullo \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"Guyana \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"Israela d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Israela geasse\u00e1igi"_s,
		""_s,
		u"Israela \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"Kosraea \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"Mawsona \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Moskva d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Moskva geasse\u00e1igi"_s,
		""_s,
		u"Moskva \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"Ponape \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"Tahiti \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"Taipeia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Taipeia geasse\u00e1igi"_s,
		""_s,
		u"Taipeia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"Tuvalu \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"Vostoka \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"Wallis- ja Futuna \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"Ar\u00e1bia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Ar\u00e1bia geasse\u00e1igi"_s,
		""_s,
		u"Ar\u00e1bia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Armenia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Armenia geasse\u00e1igi"_s,
		""_s,
		u"Armenia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"Bolivia \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"Chathama d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Chathama geasse\u00e1igi"_s,
		""_s,
		u"Chathama \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"koordinerejuvvon oktasa\u0161 \u00e1igi"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"Ecuadora \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"Gambiera \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"Georgia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Georgia geasse\u00e1igi"_s,
		""_s,
		u"Georgia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"Irkucka d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Irkucka geasse\u00e1igi"_s,
		""_s,
		u"Irkucka \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Magadana d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Magadana geasse\u00e1igi"_s,
		""_s,
		u"Magadana \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"Myanmara \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"Norfolksullo \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"Fernando de Noronha d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Fernando de Noronha geasse\u00e1igi"_s,
		""_s,
		u"Fernando de Noronha \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"Reuniona \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"Rothera \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"Salomonsulloid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"Tokelaua \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"Uruguaya d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Uruguaya geasse\u00e1igi"_s,
		""_s,
		u"Uruguaya \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"Vanuatu d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Vanuatu geasse\u00e1igi"_s,
		""_s,
		u"Vanuatu \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Jakucka d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Jakucka geasse\u00e1igi"_s,
		""_s,
		u"Jakucka \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"atl\u00e1ntala\u0161 d\u00e1lve\u00e1igi"_s,
		""_s,
		u"atl\u00e1ntala\u0161 geasse\u00e1igi"_s,
		""_s,
		u"atl\u00e1ntala\u0161 \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Brasilia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Brasilia geasse\u00e1igi"_s,
		""_s,
		u"Brasilia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"\u010camorro d\u00e1lve\u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"Colombia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Colombia geasse\u00e1igi"_s,
		""_s,
		u"Colombia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"Falklandsulluid d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Falklandsulluid geasse\u00e1igi"_s,
		""_s,
		u"Falklandsulluid \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"Malesia \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"Malediivvaid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Ulan-Batora d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Ulan-Batora geasse\u00e1igi"_s,
		""_s,
		u"Ulan-Batora \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Pakistana d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Pakistana geasse\u00e1igi"_s,
		""_s,
		u"Pakistana \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"Paraguaya d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Paraguaya geasse\u00e1igi"_s,
		""_s,
		u"Paraguaya \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"Pitcairnsulloid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Sahalina d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Sahalina geasse\u00e1igi"_s,
		""_s,
		u"Sahalina \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"Suriname \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"Argentina d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Argentina geasse\u00e1igi"_s,
		""_s,
		u"Argentina \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"Juovlasullo \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"Galapagosa \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"Hong Konga d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Hong Konga geasse\u00e1igi"_s,
		""_s,
		u"Hong Konga \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"Indokiinn\u00e1 \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Kirgisia \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"Lord Howe d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Lord Howe geasse\u00e1igi"_s,
		""_s,
		u"Lord Howe \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"Marquesasiid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"Mauritiusa d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Mauritiusa geasse\u00e1igi"_s,
		""_s,
		u"Mauritiusa \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"Singapore d\u00e1lve\u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"Venezuela \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Volgograda d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Volgograda geasse\u00e1igi"_s,
		""_s,
		u"Volgograda \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"Aserbai\u017eana d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Aserbai\u017eana geasse\u00e1igi"_s,
		""_s,
		u"Aserbai\u017eana \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"Bangladesha d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Bangladesha geasse\u00e1igi"_s,
		""_s,
		u"Bangladesha \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"Kap Verde d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Kap Verde geasse\u00e1igi"_s,
		""_s,
		u"Kap Verde \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"Nuorta-Timora \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"Seychellaid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"Ta\u017eikistana \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"Usbekistana d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Usbekistana geasse\u00e1igi"_s,
		""_s,
		u"Usbekistana \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"Afganisthana \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Krasnojarska d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Krasnojarska geasse\u00e1igi"_s,
		""_s,
		u"Krasnojarska \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"O\u0111\u0111a-Sel\u00e1nda d\u00e1lve\u00e1igi"_s,
		""_s,
		u"O\u0111\u0111a-Sel\u00e1nda geasse\u00e1igi"_s,
		""_s,
		u"O\u0111\u0111a-Sel\u00e1nda \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Novosibirska d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Novosibirska geasse\u00e1igi"_s,
		""_s,
		u"Novosibirska \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"Filippiinnaid d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Filippiinnaid geasse\u00e1igi"_s,
		""_s,
		u"Filippiinnaid \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Vladivostoka d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Vladivostoka geasse\u00e1igi"_s,
		""_s,
		u"Vladivostoka \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"India\u00e1bi \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"Linesulloid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"Newfoundlanda d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Newfoundlanda geasse\u00e1igi"_s,
		""_s,
		u"Newfoundlanda \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"Turkmenistana d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Turkmenistana geasse\u00e1igi"_s,
		""_s,
		u"Turkmenistana \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"Frankriikka Guyana \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"O\u0111\u0111a-Kaledonia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"O\u0111\u0111a-Kaledonia geasse\u00e1igi"_s,
		""_s,
		u"O\u0111\u0111a-Kaledonia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"Lulli-Georgia \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Jekaterinburga d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Jekaterinburga geasse\u00e1igi"_s,
		""_s,
		u"Jekaterinburga \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"Gaska-Afrihk\u00e1 \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"Nuorta-Afrihk\u00e1 \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"Oarje-Afrihk\u00e1 d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Oarje-Afrihk\u00e1 geasse\u00e1igi"_s,
		""_s,
		u"Oarje-Afrihk\u00e1 \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"Dumont-d\u2019Urville \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"Gaska-Eurohp\u00e1 d\u00e1lve\u00e1igi"_s,
		"CET"_s,
		u"Gaska-Eurohp\u00e1 geasse\u00e1igi"_s,
		"CEST"_s,
		u"Gaska-Eurohp\u00e1 \u00e1igi"_s,
		"CET"_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"Nuorta-Eurohpa d\u00e1lve\u00e1igi"_s,
		"EET"_s,
		u"Nuorta-Eurohpa geasse\u00e1igi"_s,
		"EEST"_s,
		u"Nuorta-Eurohpa \u00e1igi"_s,
		"EET"_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"Oarje-Eurohp\u00e1 d\u00e1lve\u00e1igi"_s,
		"WET"_s,
		u"Oarje-Eurohp\u00e1 geasse\u00e1igi"_s,
		"WEST"_s,
		u"Oarje-Eurohp\u00e1 \u00e1igi"_s,
		"WET"_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"Meksiko J\u00e1skes\u00e1bi d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Meksiko J\u00e1skes\u00e1bi geasse\u00e1igi"_s,
		""_s,
		u"Meksiko J\u00e1skes\u00e1bi \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"Lulli-Afrihk\u00e1 d\u00e1lve\u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"d\u00e1b\u00e1la\u0161 d\u00e1lve\u00e1igi"_s,
		""_s,
		u"d\u00e1b\u00e1la\u0161 geasse\u00e1igi"_s,
		""_s,
		u"d\u00e1b\u00e1la\u0161\u00e1igi"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"d\u00e1lve\u00e1igi nuortan"_s,
		""_s,
		u"geasse\u00e1igi nuortan"_s,
		""_s,
		u"\u00e1igi nuortan"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"Jaskes\u00e1bi d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Jaskes\u00e1bi geasse\u00e1igi"_s,
		""_s,
		u"Jaskes\u00e1bi \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"Frankriikka lulli & ant\u00e1rktisa \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"Gilbertsulloid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"Hawaii-aleuhtala\u0161 d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Hawaii-aleuhtala\u0161 geasse\u00e1igi"_s,
		""_s,
		u"Hawaii-aleuhtala\u0161 \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"Phoenixsulloid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"St. Pierre & Miquelo d\u00e1lve\u00e1igi"_s,
		""_s,
		u"St. Pierre & Miquelo geasse\u00e1igi"_s,
		""_s,
		u"St. Pierre & Miquelo \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"d\u00e1lveduottar\u00e1igi"_s,
		""_s,
		u"geasseduottar\u00e1igi"_s,
		""_s,
		u"duottar\u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"Marshallsulloid \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"Oarjedavvi-Meksiko d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Oarjedavvi-Meksiko geasse\u00e1igi"_s,
		""_s,
		u"Oarjedavvi-Meksiko \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"Papua O\u0111\u0111a-Guinea \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"Gaska-Austr\u00e1lia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Gaska-Austr\u00e1lia geasse\u00e1igi"_s,
		""_s,
		u"Gaska-Austr\u00e1lia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"Nuorta-Austr\u00e1lia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Nuorta-Austr\u00e1lia geasse\u00e1igi"_s,
		""_s,
		u"Nuorta-Austr\u00e1lia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Oarje-Austr\u00e1lia d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Oarje-Austr\u00e1lia geasse\u00e1igi"_s,
		""_s,
		u"Oarje-Austr\u00e1lia \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"Nuorta-Ruon\u00e1eatnama d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Nuorta-Ruon\u00e1eatnama geasse\u00e1igi"_s,
		""_s,
		u"Nuorta-Ruon\u00e1eatnama \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"Oarje-Ruon\u00e1eatnama d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Oarje-Ruon\u00e1eatnama geasse\u00e1igi"_s,
		""_s,
		u"Oarje-Ruon\u00e1eatnama \u00e1igi"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"Gaska-Indonesia \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"Nuorta-Indonesia \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"Oarje-Indonesia \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"Nuorta-Kasakstana \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Oarje-Kasakstana \u00e1igi"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"Gaska-Austr\u00e1lia oarjjabeali d\u00e1lve\u00e1igi"_s,
		""_s,
		u"Gaska-Austr\u00e1lia oarjjabeali geasse\u00e1igi"_s,
		""_s,
		u"Gaska-Austr\u00e1lia oarjjabeali \u00e1igi"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(Israel)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Etc/GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of(Azerbaijan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dili"_s),
			$of(East_Timor)
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of(Hovd)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of(Afghanistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Almaty"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Atyrau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of(Brunei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of(Philippines)
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Saigon"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(Taipei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(Iran)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of(Seychelles)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Yap"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bangkok"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of(Kyrgystan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(Irkutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jakarta"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of(Magadan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Rangoon"_s),
			$of(Myanmar)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of(Georgia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimphu"_s),
			$of(Bhutan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of(Cocos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of(Fiji)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guam"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of(Niue)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Truk"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wake"_s),
			$of(Wake)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(Africa_Western)
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
			$of("Africa/Douala"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(Turkmenistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dushanbe"_s),
			$of(Tajikistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jayapura"_s),
			$of(Indonesia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(Nepal)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Makassar"_s),
			$of(Indonesia_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qostanay"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of($$new($StringArray, {
				u"Greenwicha \u00e1igi"_s,
				"GMT"_s,
				u"Irl\u00e1nddala\u0161 d\u00e1lve\u00e1igi"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of($$new($StringArray, {
				u"Greenwicha \u00e1igi"_s,
				"GMT"_s,
				u"Brihtala\u0161 geasse\u00e1igi"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Chagos"_s),
			$of(Indian_Ocean)
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of(Vanuatu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of(Nauru)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Palau"_s),
			$of(Palau)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of(Colombia)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of(Guyana)
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(Cuba)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of(Bolivia)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(Hong_Kong)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pontianak"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vientiane"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of($$new($StringArray, {
				u"Greenwicha \u00e1igi"_s,
				"GMT"_s,
				u"Brihtala\u0161 geasse\u00e1igi"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of(Reunion)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(Easter)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of(Kosrae)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Majuro"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of(New_Caledonia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Ponape"_s),
			$of(Ponape)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tahiti"_s),
			$of(Tahiti)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of(Gilbert_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of(Wallis)
		}),
		$$new($ObjectArray, {
			$of("Africa/Blantyre"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(Africa_Western)
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
			$of("Africa/Windhoek"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Caracas"_s),
			$of(Venezuela)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of(French_Guiana)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(Greenland_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(Noronha)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Phnom_Penh"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of(Azores)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of(Australia_CentralWestern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of(Maldives)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(Chatham)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of(Tokelau)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Gambier"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of(Norfolk)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of(Paraguay)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of(Pierre_Miquelon)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(Chile)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Davis"_s),
			$of(Davis)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Syowa"_s),
			$of(Syowa)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(Novosibirsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of(Falkland)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(Volgograd)
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of(Christmas)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of(French_Southern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of(Tuvalu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of(Mawson)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of(Vostok)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of(Phoenix_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kwajalein"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of(Marquesas)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of(Cook)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of(Tonga)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of(Uruguay)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of(Suriname)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Rothera"_s),
			$of(Rothera)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of(Yekaterinburg)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of(Line_Islands)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of(Cape_Verde)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(Lord_Howe)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(Mexico_Northwest)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(Greenland_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Port_Moresby"_s),
			$of(Papua_New_Guinea)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/South_Georgia"_s),
			$of(South_Georgia)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of(DumontDUrville)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of("Teheran"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"Dovdameahttun g\u00e1vpot"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of("Roma"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of("Kairo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of("Irkuck"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of("Rangoon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of("Jakuck"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of("Jerevan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of("Kokos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of("Damaskos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of("Sahalin"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of("Athena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of("Lisboa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of("Moskva"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of("Praha"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of("Tirana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of("Wien"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of("Warsawa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"Z\u00fcrich"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"Kam\u010datka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of("Azorat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"Kan\u00e1ria"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of("Belgrad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"Br\u00fcssel"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of("Helsset"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of("Malediivvat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of("Krasnojarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of("Ulan-Bator"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of("Bukarest"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of("Uljanovsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of("Juovlasuolu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of("Novokusneck"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"K\u00f8benhavn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of("Luxenburg"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of("Marquesasat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of("Jekaterinburg"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of("Mansuolu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"D\u00e1nm\u00e1rkkuh\u00e1mman"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of("Lulli-Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of("Beulah, Davvi-Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"Guovdd\u00e1\u0161, Davvi-Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of("New Salem, Davvi-Dakota"_s)
		})
	}));
	return data;
}

TimeZoneNames_se_FI::TimeZoneNames_se_FI() {
}

$Class* TimeZoneNames_se_FI::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_se_FI, name, initialize, &_TimeZoneNames_se_FI_ClassInfo_, allocate$TimeZoneNames_se_FI);
	return class$;
}

$Class* TimeZoneNames_se_FI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun