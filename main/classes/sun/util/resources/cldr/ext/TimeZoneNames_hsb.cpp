#include <sun/util/resources/cldr/ext/TimeZoneNames_hsb.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE
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

$MethodInfo _TimeZoneNames_hsb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_hsb::*)()>(&TimeZoneNames_hsb::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_hsb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_hsb",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_hsb_MethodInfo_
};

$Object* allocate$TimeZoneNames_hsb($Class* clazz) {
	return $of($alloc(TimeZoneNames_hsb));
}

void TimeZoneNames_hsb::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_hsb::getContents() {
	$var($StringArray, GMT, $new($StringArray, {
		u"Greenwichski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"Apiaski standardny \u010das"_s,
		""_s,
		u"Apiaski l\u011btni \u010das"_s,
		""_s,
		u"Apiaski \u010das"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"standardny \u010das Cookowych kupow"_s,
		""_s,
		u"l\u011btni \u010das Cookowych kupow"_s,
		""_s,
		u"\u010das Cookowych kupow"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"kubaski standardny \u010das"_s,
		""_s,
		u"kubaski l\u011btni \u010das"_s,
		""_s,
		u"kubaski \u010das"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"fid\u017aiski standardny \u010das"_s,
		""_s,
		u"fid\u017aiski l\u011btni \u010das"_s,
		""_s,
		u"fid\u017aiski \u010das"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u010das Persiskeho golfa"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"Chowdski standardny \u010das"_s,
		""_s,
		u"Chowdski l\u011btni \u010das"_s,
		""_s,
		u"Chowdski \u010das"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"iranski standardny \u010das"_s,
		""_s,
		u"iranski l\u011btni \u010das"_s,
		""_s,
		u"iranski \u010das"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"niueski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Omski standardny \u010das"_s,
		""_s,
		u"Omski l\u011btni \u010das"_s,
		""_s,
		u"Omski \u010das"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"peruski standardny \u010das"_s,
		""_s,
		u"peruski l\u011btni \u010das"_s,
		""_s,
		u"peruski \u010das"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"chuukski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"\u010das kupy Wake"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"chilski standardny \u010das"_s,
		""_s,
		u"chilski l\u011btni \u010das"_s,
		""_s,
		u"chilski \u010das"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"chinski standardny \u010das"_s,
		""_s,
		u"chinski l\u011btni \u010das"_s,
		""_s,
		u"chinski \u010das"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"\u010das Kokosowych kupow"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"Daviski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"indiski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"japanski standardny \u010das"_s,
		""_s,
		u"japanski l\u011btni \u010das"_s,
		""_s,
		u"japanski \u010das"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"korejski standardny \u010das"_s,
		""_s,
		u"korejski l\u011btni \u010das"_s,
		""_s,
		u"korejski \u010das"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"nauruski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"nepalski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"palauski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"samoaski standardny \u010das"_s,
		""_s,
		u"samoaski l\u011btni \u010das"_s,
		""_s,
		u"samoaski \u010das"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"Syowaski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"tongaski standardny \u010das"_s,
		""_s,
		u"tongaski l\u011btni \u010das"_s,
		""_s,
		u"tongaski \u010das"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"alaskaski standardny \u010das"_s,
		""_s,
		u"alaskaski l\u011btni \u010das"_s,
		""_s,
		u"alaskaski \u010das"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"Amaconaski standardny \u010das"_s,
		""_s,
		u"Amaconaski l\u011btni \u010das"_s,
		""_s,
		u"Amaconaski \u010das"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"acorski standardny \u010das"_s,
		""_s,
		u"acorski l\u011btni \u010das"_s,
		""_s,
		u"acorski \u010das"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"bhutanski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"bruneiski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"standardny \u010das Jutrowneje kupy"_s,
		""_s,
		u"l\u011btni \u010das Jutrowneje kupy"_s,
		""_s,
		u"\u010das Jutrowneje kupy"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"guyanski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"israelski standardny \u010das"_s,
		""_s,
		u"israelski l\u011btni \u010das"_s,
		""_s,
		u"israelski \u010das"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"kosraeski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"Mawsonski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Moskowski standardny \u010das"_s,
		""_s,
		u"Moskowski l\u011btni \u010das"_s,
		""_s,
		u"Moskowski \u010das"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"ponapeski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"tahitiski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"Taipehski standardny \u010das"_s,
		""_s,
		u"Taipehski l\u011btni \u010das"_s,
		""_s,
		u"Taipehski \u010das"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"tuvaluski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"Wostokski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"\u010das kupow Wallis a Futuna"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"arabski standardny \u010das"_s,
		""_s,
		u"arabski l\u011btni \u010das"_s,
		""_s,
		u"arabski \u010das"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"armenski standardny \u010das"_s,
		""_s,
		u"armenski l\u011btni \u010das"_s,
		""_s,
		u"armenski \u010das"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"boliwiski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"chathamski standardny \u010das"_s,
		""_s,
		u"chathamski l\u011btni \u010das"_s,
		""_s,
		u"chathamski \u010das"_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"ekwadorski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"gambierski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"georgiski standardny \u010das"_s,
		""_s,
		u"georgiski l\u011btni \u010das"_s,
		""_s,
		u"georgiski \u010das"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"Irkutski standardny \u010das"_s,
		""_s,
		u"Irkutski l\u011btni \u010das"_s,
		""_s,
		u"Irkutski \u010das"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Magadanski standardny \u010das"_s,
		""_s,
		u"Magadanski l\u011btni \u010das"_s,
		""_s,
		u"Magadanski \u010das"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"myanmarski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"standardny \u010das kupy Norfolk"_s,
		""_s,
		u"l\u011btni \u010das kupy Norfolk"_s,
		""_s,
		u"\u010das kupy Norfolk"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"standardny \u010das kupow Fernando de Noronha"_s,
		""_s,
		u"l\u011btni \u010das kupow Fernando de Noronha"_s,
		""_s,
		u"\u010das kupow Fernando de Noronha"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"reunionski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"Rotheraski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"\u010das Salomonskich kupow"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"tokelauski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"uruguayski standardny \u010das"_s,
		""_s,
		u"uruguayski l\u011btni \u010das"_s,
		""_s,
		u"uruguayski \u010das"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"vanuatuski standardny \u010das"_s,
		""_s,
		u"vanuatuski l\u011btni \u010das"_s,
		""_s,
		u"vanuatuski \u010das"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Jakutski standardny \u010das"_s,
		""_s,
		u"Jakutski l\u011btni \u010das"_s,
		""_s,
		u"Jakutski \u010das"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"atlantiski standardny \u010das"_s,
		""_s,
		u"atlantiski l\u011btni \u010das"_s,
		""_s,
		u"atlantiski \u010das"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Brasiliski standardny \u010das"_s,
		""_s,
		u"Brasiliski l\u011btni \u010das"_s,
		""_s,
		u"Brasiliski \u010das"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"chamorroski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"kolumbiski standardny \u010das"_s,
		""_s,
		u"kolumbiski l\u011btni \u010das"_s,
		""_s,
		u"kolumbiski \u010das"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"falklandski standardny \u010das"_s,
		""_s,
		u"falklandski l\u011btni \u010das"_s,
		""_s,
		u"falklandski \u010das"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"malajziski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"malediwski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Ulan-Batorski standardny \u010das"_s,
		""_s,
		u"Ulan-Batorski l\u011btni \u010das"_s,
		""_s,
		u"Ulan-Batorski \u010das"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"pakistanski standardny \u010das"_s,
		""_s,
		u"pakistanski l\u011btni \u010das"_s,
		""_s,
		u"pakistanski \u010das"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"Paraguayski standardny \u010das"_s,
		""_s,
		u"Paraguayski l\u011btni \u010das"_s,
		""_s,
		u"Paraguayski \u010das"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"\u010das Pitcairnowych kupow"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"sachalinski standardny \u010das"_s,
		""_s,
		u"sachalinski l\u011btni \u010das"_s,
		""_s,
		u"sachalinski \u010das"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"surinamski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"argentinski standardny \u010das"_s,
		""_s,
		u"argentinski l\u011btni \u010das"_s,
		""_s,
		u"argentinski \u010das"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"\u010das Hodowneje kupy"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"galapagoski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"Hongkongski standardny \u010das"_s,
		""_s,
		u"Hongkongski l\u011btni \u010das"_s,
		""_s,
		u"Hongkongski \u010das"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"indochinski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"kirgiski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"standardny \u010das kupy Lord-Howe"_s,
		""_s,
		u"l\u011btni \u010das kupy Lord-Howe"_s,
		""_s,
		u"\u010das kupy Lord-Howe"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"marquesaski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"mauritiuski standardny \u010das"_s,
		""_s,
		u"mauritiuski l\u011btni \u010das"_s,
		""_s,
		u"mauritiuski \u010das"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"Singapurski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"venezuelski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Wolgogradski standardny \u010das"_s,
		""_s,
		u"Wolgogradski l\u011btni \u010das"_s,
		""_s,
		u"Wolgogradski \u010das"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"azerbajd\u017aanski standardny \u010das"_s,
		""_s,
		u"azerbajd\u017aanski l\u011btni \u010das"_s,
		""_s,
		u"azerbajd\u017aanski \u010das"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"banglade\u0161ski standardny \u010das"_s,
		""_s,
		u"banglade\u0161ski l\u011btni \u010das"_s,
		""_s,
		u"banglade\u0161ski \u010das"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"kapverdski standardny \u010das"_s,
		""_s,
		u"kapverdski l\u011btni \u010das"_s,
		""_s,
		u"kapverdski \u010das"_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"wuchodnotimorski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"seychellski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"tad\u017aikski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"uzbekski standardny \u010das"_s,
		""_s,
		u"uzbekski l\u011btni \u010das"_s,
		""_s,
		u"uzbekski \u010das"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"afghanski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Krasnojarski standardny \u010das"_s,
		""_s,
		u"Krasnojarski l\u011btni \u010das"_s,
		""_s,
		u"Krasnojarski \u010das"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"nowoseelandski standardny \u010das"_s,
		""_s,
		u"nowoseelandski l\u011btni \u010das"_s,
		""_s,
		u"nowoseelandski \u010das"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Nowosibirski standardny \u010das"_s,
		""_s,
		u"Nowosibirski l\u011btni \u010das"_s,
		""_s,
		u"Nowosibirski \u010das"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"filipinski standardny \u010das"_s,
		""_s,
		u"filipinski l\u011btni \u010das"_s,
		""_s,
		u"filipinski \u010das"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Wladiwostokski standardny \u010das"_s,
		""_s,
		u"Wladiwostokski l\u011btni \u010das"_s,
		""_s,
		u"Wladiwostokski \u010das"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"indiskooceanski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"\u010das Linijowych kupow"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"nowofundlandski standardny \u010das"_s,
		""_s,
		u"nowofundlandski l\u011btni \u010das"_s,
		""_s,
		u"nowofundlandski \u010das"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"turkmenski standardny \u010das"_s,
		""_s,
		u"turkmenski l\u011btni \u010das"_s,
		""_s,
		u"turkmenski \u010das"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"francoskoguyanski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"nowokaledonski standardny \u010das"_s,
		""_s,
		u"nowokaledonski l\u011btni \u010das"_s,
		""_s,
		u"nowokaledonski \u010das"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"ju\u017enogeorgiski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Jekaterinburgski standardny \u010das"_s,
		""_s,
		u"Jekaterinburgski l\u011btni \u010das"_s,
		""_s,
		u"Jekaterinburgski \u010das"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"centralnoafriski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"wuchodoafriski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"zapadoafriski standardny \u010das"_s,
		""_s,
		u"zapadoafriski l\u011btni \u010das"_s,
		""_s,
		u"zapadoafriski \u010das"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"Dumont d\u00b4 Urvilleski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"srjed\u017aoeuropski standardny \u010das"_s,
		"MEZ"_s,
		u"srjed\u017aoeuropski l\u011btni \u010das"_s,
		"MESZ"_s,
		u"srjed\u017aoeuropski \u010das"_s,
		"MEZ"_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"wuchodoeuropski standardny \u010das"_s,
		"OEZ"_s,
		u"wuchodoeuropski l\u011btni \u010das"_s,
		"OESZ"_s,
		u"wuchodoeuropski \u010das"_s,
		"OEZ"_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"zapadoeuropski standardny \u010das"_s,
		"WEZ"_s,
		u"zapadoeuropski l\u011btni \u010das"_s,
		"WESZ"_s,
		u"zapadoeuropski \u010das"_s,
		"WEZ"_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"mexiski pacifiski standardny \u010das"_s,
		""_s,
		u"mexiski pacifiski l\u011btni \u010das"_s,
		""_s,
		u"mexiski pacifiski \u010das"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"ju\u017enoafriski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"sewjeroameriski centralny standardny \u010das"_s,
		""_s,
		u"sewjeroameriski centralny l\u011btni \u010das"_s,
		""_s,
		u"sewjeroameriski centralny \u010das"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"sewjeroameriski wuchodny standardny \u010das"_s,
		""_s,
		u"sewjeroameriski wuchodny l\u011btni \u010das"_s,
		""_s,
		u"sewjeroameriski wuchodny \u010das"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"sewjeroameriski pacifiski standardny \u010das"_s,
		""_s,
		u"sewjeroameriski pacifiski l\u011btni \u010das"_s,
		""_s,
		u"sewjeroameriski pacifiski \u010das"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"\u010das Francoskeho ju\u017eneho a antarktiskeho teritorija"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"\u010das Gilbertowych kupow"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"hawaiisko-aleutski standardny \u010das"_s,
		""_s,
		u"hawaiisko-aleutski l\u011btni \u010das"_s,
		""_s,
		u"hawaiisko-aleutski \u010das"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"\u010das Phoenixowych kupow"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"standardny \u010das kupow St. Pierre a Miquelon"_s,
		""_s,
		u"l\u011btni \u010das kupow St. Pierre a Miquelon"_s,
		""_s,
		u"\u010das kupow St. Pierre a Miquelon"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"sewjeroameriski h\u00f3rski standardny \u010das"_s,
		""_s,
		u"sewjeroameriski h\u00f3rski l\u011btni \u010das"_s,
		""_s,
		u"sewjeroameriski h\u00f3rski \u010das"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"\u010das Marshallowych kupow"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"mexiski sewjerozapadny standardny \u010das"_s,
		""_s,
		u"mexiski sewjerozapadny l\u011btni \u010das"_s,
		""_s,
		u"mexiski sewjerozapadny \u010das"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"papua-nowoginejski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"srjed\u017aoawstralski standardny \u010das"_s,
		""_s,
		u"srjed\u017aoawstralski l\u011btni \u010das"_s,
		""_s,
		u"srjed\u017aoawstralski \u010das"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"wuchodoawstralski standardny \u010das"_s,
		""_s,
		u"wuchodoawstralski l\u011btni \u010das"_s,
		""_s,
		u"wuchodoawstralski \u010das"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"zapadoawstralski standardny \u010das"_s,
		""_s,
		u"zapadoawstralski l\u011btni \u010das"_s,
		""_s,
		u"zapadoawstralski \u010das"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"wuchodogr\u00f6nlandski standardny \u010das"_s,
		""_s,
		u"wuchodogr\u00f6nlandski l\u011btni \u010das"_s,
		""_s,
		u"wuchodogr\u00f6nlandski \u010das"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"zapadogr\u00f6nlandski standardny \u010das"_s,
		""_s,
		u"zapadogr\u00f6nlandski l\u011btni \u010das"_s,
		""_s,
		u"zapadogr\u00f6nlandski \u010das"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"srjed\u017aoindoneski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		"wuchodoindoneski"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"zapadoindoneski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"wuchodnokazachski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"zapadnokazachski \u010das"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"srjed\u017aozapadny awstralski standardny \u010das"_s,
		""_s,
		u"sjed\u017aozapadny awstralski l\u011btni \u010das"_s,
		""_s,
		u"srjed\u017aozapadny awstralski \u010das"_s,
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
			$of(EMPTY_ZONE)
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
				u"Greenwichski \u010das"_s,
				""_s,
				u"Irski l\u011btni \u010das"_s,
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
				u"Greenwichski \u010das"_s,
				""_s,
				u"Britiski l\u011btni \u010das"_s,
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
				u"Greenwichski \u010das"_s,
				""_s,
				u"Britiski l\u011btni \u010das"_s,
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
			$of("timezone.excity.Asia/Qatar"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of("Tokio"_s)
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
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"Lom\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of("Aktobe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of("Muskat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of("Riad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"Ho Chi Minhowe m\u011bsto"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of("Taipeh"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of("Teheran"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of("njeznate"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of("Kiew"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of("Rom"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of("Akkra"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of("Kairo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of("Bagdad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"Bi\u0161kek"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of("Nikosia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of("Tbilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of("Jakutsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of("Jerjewan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of(u"Fid\u017ai"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of("Kalkutta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of("Damaskus"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"Du\u0161anbe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of("Port Numbay"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of("Sachalin"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"Ta\u0161kent"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of("Athen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of("Lissabon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of("Moskwa"_s)
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
			$of(u"War\u0161awa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"Z\u00fcrich"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of("Komory"_s)
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
			$of("timezone.excity.Africa/Algiers"_s),
			$of("Algier"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of("Tripolis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"Bogot\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of("Kaimanske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of("Havanna"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of("Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"Kam\u010datka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of(u"Pj\u00f6ngjang"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of("Vilnius"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of("Jutrowna kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"D\u017aibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"El Aai\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of("Khartum"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"S\u00e3o Tom\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of("Acory"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of("Kanariske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"F\u00e4r\u00f6ske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"B\u011b\u0142ohr\u00f3d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"Br\u00fcssel"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of(u"B\u00fcsingen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"Ki\u0161injow"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"U\u017egorod"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of("Malediwy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"Mogadi\u0161u"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"Asunci\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of("Krasnojarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of("Nowosibirsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of("Wladiwostok"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of("Bukarest"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of("Wolgograd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of("Hodowna kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of("Porto Novo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"S\u00e3o Paulo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of("Antarktika/Wostok"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of("Nowokuznjeck"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of("Kopenhagen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of(u"Zapori\u017e\u017eja"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of("Addis Abeba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of("Wagadugu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of("Jekaterinburg"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"Reykjav\u00edk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"Mexiko m\u011bsto"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of("Daressalam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of("Port-of-Spain"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"St.Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"Ju\u017ena Georgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"Dumont D\u2019Urville"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of("Beulah, Sewjerna Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of("Center, Sewjerna Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of("New Salem, Sewjerna Dakota"_s)
		})
	}));
	return data;
}

TimeZoneNames_hsb::TimeZoneNames_hsb() {
}

$Class* TimeZoneNames_hsb::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_hsb, name, initialize, &_TimeZoneNames_hsb_ClassInfo_, allocate$TimeZoneNames_hsb);
	return class$;
}

$Class* TimeZoneNames_hsb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun