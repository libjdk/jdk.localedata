#include <sun/util/resources/cldr/ext/TimeZoneNames_az.h>

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

$MethodInfo _TimeZoneNames_az_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_az::*)()>(&TimeZoneNames_az::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_az_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_az",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_az_MethodInfo_
};

$Object* allocate$TimeZoneNames_az($Class* clazz) {
	return $of($alloc(TimeZoneNames_az));
}

void TimeZoneNames_az::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_az::getContents() {
	$var($StringArray, GMT, $new($StringArray, {
		u"Qrinvi\u00e7 Orta Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"Apia Standart Vaxt\u0131"_s,
		""_s,
		u"Apia Yay Vaxt\u0131"_s,
		""_s,
		u"Apia Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"Kuk Adalar\u0131 Standart Vaxt\u0131"_s,
		""_s,
		u"Kuk Adalar\u0131 Yar\u0131m Yay Vaxt\u0131"_s,
		""_s,
		u"Kuk Adalar\u0131 Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"Kuba Standart Vaxt\u0131"_s,
		""_s,
		u"Kuba Yay Vaxt\u0131"_s,
		""_s,
		u"Kuba Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"Fici Standart Vaxt\u0131"_s,
		""_s,
		u"Fici Yay Vaxt\u0131"_s,
		""_s,
		u"Fici Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"K\u00f6rf\u0259z Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"Hovd Standart Vaxt\u0131"_s,
		""_s,
		u"Hovd Yay Vaxt\u0131"_s,
		""_s,
		u"Hovd Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u0130ran Standart Vaxt\u0131"_s,
		""_s,
		u"\u0130ran Yay Vaxt\u0131"_s,
		""_s,
		u"\u0130ran Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"Niue Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Omsk Standart Vaxt\u0131"_s,
		""_s,
		u"Omsk Yay Vaxt\u0131"_s,
		""_s,
		u"Omsk Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"Peru Standart Vaxt\u0131"_s,
		""_s,
		u"Peru Yay Vaxt\u0131"_s,
		""_s,
		u"Peru Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"\u00c7uuk Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"Ueyk Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\u00c7ili Standart Vaxt\u0131"_s,
		""_s,
		u"\u00c7ili Yay Vaxt\u0131"_s,
		""_s,
		u"\u00c7ili Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u00c7in Standart Vaxt\u0131"_s,
		""_s,
		u"\u00c7in Yay Vaxt\u0131"_s,
		""_s,
		u"\u00c7in Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"Kokos Adalar\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"Devis Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"Hindistan Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Yaponiya Standart Vaxt\u0131"_s,
		""_s,
		u"Yaponiya Yay Vaxt\u0131"_s,
		""_s,
		u"Yaponiya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"Koreya Standart Vaxt\u0131"_s,
		""_s,
		u"Koreya Yay Vaxt\u0131"_s,
		""_s,
		u"Koreya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"Nauru Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"Nepal vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"Palau Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"Samoa Standart Vaxt\u0131"_s,
		""_s,
		u"Samoa Yay Vaxt\u0131"_s,
		""_s,
		u"Samoa Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"Syova Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"Tonqa Standart Vaxt\u0131"_s,
		""_s,
		u"Tonqa Yay Vaxt\u0131"_s,
		""_s,
		u"Tonqa Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"Alyaska Standart Vaxt\u0131"_s,
		""_s,
		u"Alyaska Yay Vaxt\u0131"_s,
		""_s,
		u"Alyaska Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"Amazon Standart Vaxt\u0131"_s,
		""_s,
		u"Amazon Yay Vaxt\u0131"_s,
		""_s,
		u"Amazon Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"Azor Standart Vaxt\u0131"_s,
		""_s,
		u"Azor Yay Vaxt\u0131"_s,
		""_s,
		u"Azor Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"Butan Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"Brunei Darussalam vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"Pasxa Adas\u0131 Standart Vaxt\u0131"_s,
		""_s,
		u"Pasxa Adas\u0131 Yay Vaxt\u0131"_s,
		""_s,
		u"Pasxa Adas\u0131 Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"Qayana Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u0130srail Standart Vaxt\u0131"_s,
		""_s,
		u"\u0130srail Yay Vaxt\u0131"_s,
		""_s,
		u"\u0130srail Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"Korse Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"Mouson Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Moskva Standart Vaxt\u0131"_s,
		""_s,
		u"Moskva Yay vaxt\u0131"_s,
		""_s,
		u"Moskva Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"Ponape Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"Samara standart vaxt\u0131"_s,
		""_s,
		u"Samara yay vaxt\u0131"_s,
		""_s,
		u"Samara vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"Tahiti Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"Taybey Standart Vaxt\u0131"_s,
		""_s,
		u"Taybey Yay Vaxt\u0131"_s,
		""_s,
		u"Taybey Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"Tuvalu Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"Vostok Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"Uollis v\u0259 Futuna Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u018fr\u0259bistan Standart Vaxt\u0131"_s,
		""_s,
		u"\u018fr\u0259bistan Yay Vaxt\u0131"_s,
		""_s,
		u"\u018fr\u0259bistan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Erm\u0259nistan Standart Vaxt\u0131"_s,
		""_s,
		u"Erm\u0259nistan Yay Vaxt\u0131"_s,
		""_s,
		u"Erm\u0259nistan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"Boliviya Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"\u00c7atham Standart Vaxt\u0131"_s,
		""_s,
		u"\u00c7atham Yay Vaxt\u0131"_s,
		""_s,
		u"\u00c7atham Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"Koordinasiya edilmi\u015f \u00fcmumd\u00fcnya vaxt\u0131"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"Ekvador Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"Qambier Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"Gurc\u00fcstan Standart Vaxt\u0131"_s,
		""_s,
		u"Gurc\u00fcstan Yay Vaxt\u0131"_s,
		""_s,
		u"Gurc\u00fcstan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\u0130rkutsk Standart Vaxt\u0131"_s,
		""_s,
		u"\u0130rkutsk Yay Vaxt\u0131"_s,
		""_s,
		u"\u0130rkutsk Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Maqadan Standart Vaxt\u0131"_s,
		""_s,
		u"Maqadan Yay Vaxt\u0131"_s,
		""_s,
		u"Maqadan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"Myanma Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"Norfolk Adas\u0131 Standart Vaxt\u0131"_s,
		""_s,
		u"Norfolk Adas\u0131 Yay Vaxt\u0131"_s,
		""_s,
		u"Norfolk Adas\u0131 Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"Fernando de Noronya Standart Vaxt\u0131"_s,
		""_s,
		u"Fernando de Noronya Yay Vaxt\u0131"_s,
		""_s,
		u"Fernando de Noronya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		"Reyunyon"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"Rotera Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"Solomon Adalar\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"Tokelau Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"Uruqvay Standart Vaxt\u0131"_s,
		""_s,
		u"Uruqvay Yay Vaxt\u0131"_s,
		""_s,
		u"Uruqvay Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"Vanuatu Standart Vaxt\u0131"_s,
		""_s,
		u"Vaunatu Yay Vaxt\u0131"_s,
		""_s,
		u"Vanuatu Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Yakutsk Standart Vaxt\u0131"_s,
		""_s,
		u"Yakutsk Yay Vaxt\u0131"_s,
		""_s,
		u"Yakutsk Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		"Atlantik Standart Vaxt"_s,
		""_s,
		u"Atlantik Yay Vaxt\u0131"_s,
		""_s,
		"Atlantik Vaxt"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Braziliya Standart Vaxt\u0131"_s,
		""_s,
		u"Braziliya Yay Vaxt\u0131"_s,
		""_s,
		u"Braziliya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"\u00c7amorro Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"Kolumbiya Standart Vaxt\u0131"_s,
		""_s,
		u"Kolumbiya Yay Vaxt\u0131"_s,
		""_s,
		u"Kolumbiya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"Folklend Adalar\u0131 Standart Vaxt\u0131"_s,
		""_s,
		u"Folklend Adalar\u0131 Yay Vaxt\u0131"_s,
		""_s,
		u"Folklend Adalar\u0131 Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"Malayziya Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"Maldiv Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Ulanbator Standart Vaxt\u0131"_s,
		""_s,
		u"Ulanbator Yay Vaxt\u0131"_s,
		""_s,
		u"Ulanbator Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Pakistan Standart vaxt\u0131"_s,
		""_s,
		u"Pakistan Yay Vaxt\u0131"_s,
		""_s,
		u"Pakistan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"Paraqvay Standart Vaxt\u0131"_s,
		""_s,
		u"Paraqvay Yay Vaxt\u0131"_s,
		""_s,
		u"Paraqvay Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"Pitkern Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Saxalin Standart Vaxt\u0131"_s,
		""_s,
		u"Saxalin Yay Vaxt\u0131"_s,
		""_s,
		u"Saxalin Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"Surinam Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"Argentina Standart Vaxt\u0131"_s,
		""_s,
		u"Argentina Yay Vaxt\u0131"_s,
		""_s,
		u"Argentina Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"Milad Adas\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"Qalapaqos Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"Honq Konq Standart Vaxt\u0131"_s,
		""_s,
		u"Honq Konq Yay Vaxt\u0131"_s,
		""_s,
		u"Honq Konq Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"Hind\u00e7in Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Q\u0131r\u011f\u0131z\u0131stan Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"Lord Hau Standart Vaxt\u0131"_s,
		""_s,
		u"Lord Hau Yay vaxt\u0131"_s,
		""_s,
		u"Lord Hau Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"Markesas Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"Mavriki Standart Vaxt\u0131"_s,
		""_s,
		u"Mavriki Yay Vaxt\u0131"_s,
		""_s,
		u"Mavriki Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"Sinqapur Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"Venesuela Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Volqoqrad Standart Vaxt\u0131"_s,
		""_s,
		u"Volqoqrad Yay Vaxt\u0131"_s,
		""_s,
		u"Volqoqrad Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"Az\u0259rbaycan Standart Vaxt\u0131"_s,
		""_s,
		u"Az\u0259rbaycan Yay Vaxt\u0131"_s,
		""_s,
		u"Az\u0259rbaycan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"Banqlade\u015f Standart Vaxt\u0131"_s,
		""_s,
		u"Banqlade\u015f Yay Vaxt\u0131"_s,
		""_s,
		u"Banqlade\u015f Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"Kape Verde Standart Vaxt\u0131"_s,
		""_s,
		u"Kape Verde Yay Vaxt\u0131"_s,
		""_s,
		u"Kape Verde Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"\u015e\u0259rqi Timor Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"Sey\u015fel Adalar\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"Tacikistan Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"\u00d6zb\u0259kistan Standart Vaxt\u0131"_s,
		""_s,
		u"\u00d6zb\u0259kistan Yay Vaxt\u0131"_s,
		""_s,
		u"\u00d6zb\u0259kistan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\u018ffqan\u0131stan Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Krasnoyarsk Standart Vaxt\u0131"_s,
		""_s,
		u"Krasnoyarsk Yay Vaxt\u0131"_s,
		""_s,
		u"Krasnoyarsk Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"Yeni Zelandiya Standart Vaxt\u0131"_s,
		""_s,
		u"Yeni Zelandiya Yay Vaxt\u0131"_s,
		""_s,
		u"Yeni Zelandiya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Novosibirsk Standart Vaxt\u0131"_s,
		""_s,
		u"Novosibirsk Yay Vaxt\u0131"_s,
		""_s,
		u"Novosibirsk Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"Filippin Standart Vaxt\u0131"_s,
		""_s,
		u"Filippin Yay Vaxt\u0131"_s,
		""_s,
		u"Filippin Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Vladivostok Standart Vaxt\u0131"_s,
		""_s,
		u"Vladivostok Yay Vaxt\u0131"_s,
		""_s,
		u"Vladivostok Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"Hind Okean\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"Layn Adalar\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"Nyufaundlend Standart Vaxt\u0131"_s,
		""_s,
		u"Nyufaundlend Yay Vaxt\u0131"_s,
		""_s,
		u"Nyufaundlend Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"T\u00fcrkm\u0259nistan Standart Vaxt\u0131"_s,
		""_s,
		u"T\u00fcrkm\u0259nistan Yay Vaxt\u0131"_s,
		""_s,
		u"T\u00fcrkm\u0259nistan Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"Frans\u0131z Qvianas\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"Yeni Kaledoniya Standart Vaxt\u0131"_s,
		""_s,
		u"Yeni Kaledoniya Yay Vaxt\u0131"_s,
		""_s,
		u"Yeni Kaledoniya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"C\u0259nubi Corciya Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Yekaterinburq Standart Vaxt\u0131"_s,
		""_s,
		u"Yekaterinburq Yay Vaxt\u0131"_s,
		""_s,
		u"Yekaterinburq Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"M\u0259rk\u0259zi Afrika Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"\u015e\u0259rqi Afrika Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"Q\u0259rbi Afrika Standart Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Afrika Yay Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Afrika Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"D\u00fcmon-d\u2019\u00dcrvil Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"M\u0259rk\u0259zi Avropa Standart Vaxt\u0131"_s,
		""_s,
		u"M\u0259rk\u0259zi Avropa Yay Vaxt\u0131"_s,
		""_s,
		u"M\u0259rk\u0259zi Avropa Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u015e\u0259rqi Avropa Standart Vaxt\u0131"_s,
		""_s,
		u"\u015e\u0259rqi Avropa Yay Vaxt\u0131"_s,
		""_s,
		u"\u015e\u0259rqi Avropa Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"Q\u0259rbi Avropa Standart Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Avropa Yay Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Avropa Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"Meksika Sakit Okean Standart Vaxt\u0131"_s,
		""_s,
		u"Meksika Sakit Okean Yay Vaxt\u0131"_s,
		""_s,
		u"Meksika Sakit Okean Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"C\u0259nubi Afrika Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u015eimali M\u0259rk\u0259zi Amerika Standart Vaxt\u0131"_s,
		""_s,
		u"\u015eimali M\u0259rk\u0259zi Amerika Yay Vaxt\u0131"_s,
		""_s,
		u"\u015eimali M\u0259rk\u0259zi Amerika Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u015eimali \u015e\u0259rqi Amerika Standart Vaxt\u0131"_s,
		""_s,
		u"\u015eimali \u015e\u0259rqi Amerika Yay Vaxt\u0131"_s,
		""_s,
		u"\u015eimali \u015e\u0259rqi Amerika Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u015eimali Amerika Sakit Okean Standart Vaxt\u0131"_s,
		""_s,
		u"\u015eimali Amerika Sakit Okean Yay Vaxt\u0131"_s,
		""_s,
		u"\u015eimali Amerika Sakit Okean Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"Frans\u0131z C\u0259nubi v\u0259 Antarktik Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"Gilbert Adalar\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"Havay-Aleut Standart Vaxt\u0131"_s,
		""_s,
		u"Havay-Aleut Yay Vaxt\u0131"_s,
		""_s,
		u"Havay-Aleut Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"Feniks Adalar\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"M\u00fcq\u0259dd\u0259s Pyer v\u0259 Mikelon Standart Vaxt\u0131"_s,
		""_s,
		u"M\u00fcq\u0259dd\u0259s Pyer v\u0259 Mikelon Yay Vaxt\u0131"_s,
		""_s,
		u"M\u00fcq\u0259dd\u0259s Pyer v\u0259 Mikelon Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u015eimali Da\u011fl\u0131q Amerika Standart Vaxt\u0131"_s,
		""_s,
		u"\u015eimali Da\u011fl\u0131q Amerika Yay Vaxt\u0131"_s,
		""_s,
		u"\u015eimali Da\u011fl\u0131q Amerika Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"Mar\u015fal Adalar\u0131 Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"\u015eimal-Q\u0259rbi Meksika Standart Vaxt\u0131"_s,
		""_s,
		u"\u015eimal-Q\u0259rbi Meksika Yay Vaxt\u0131"_s,
		""_s,
		u"\u015eimal-Q\u0259rbi Meksika Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"Papua Yeni Qvineya Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"M\u0259rk\u0259zi Avstraliya Standart Vaxt\u0131"_s,
		""_s,
		u"M\u0259rk\u0259zi Avstraliya Yay Vaxt\u0131"_s,
		""_s,
		u"M\u0259rk\u0259zi Avstraliya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\u015e\u0259rqi Avstraliya Standart Vaxt\u0131"_s,
		""_s,
		u"\u015e\u0259rqi Avstraliya Yay Vaxt\u0131"_s,
		""_s,
		u"\u015e\u0259rqi Avstraliya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Q\u0259rbi Avstraliya Standart Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Avstraliya Yay Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Avstraliya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"\u015e\u0259rqi Qrenlandiya Standart Vaxt\u0131"_s,
		""_s,
		u"\u015e\u0259rqi Qrenlandiya Yay Vaxt\u0131"_s,
		""_s,
		u"\u015e\u0259rqi Qrenlandiya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"Q\u0259rbi Qrenlandiya Standart Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Qrenlandiya Yay Vaxt\u0131"_s,
		""_s,
		u"Q\u0259rbi Qrenlandiya Vaxt\u0131"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"M\u0259rk\u0259zi \u0130ndoneziya Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"\u015e\u0259rqi \u0130ndoneziya Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"Q\u0259rbi \u0130ndoneziya Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\u015e\u0259rqi Qazax\u0131stan Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Q\u0259rbi Qazax\u0131stan Vaxt\u0131"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"M\u0259rk\u0259zi Q\u0259rbi Avstraliya Standart Vaxt\u0131"_s,
		""_s,
		u"M\u0259rk\u0259zi Q\u0259rbi Avstraliya Yay Vaxt\u0131"_s,
		""_s,
		u"M\u0259rk\u0259zi Q\u0259rbi Avstraliya Vaxt\u0131"_s,
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
				u"Qrinvi\u00e7 Orta Vaxt\u0131"_s,
				""_s,
				u"\u0130rlandiya Yay Vaxt\u0131"_s,
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
				u"Qrinvi\u00e7 Orta Vaxt\u0131"_s,
				""_s,
				u"Britaniya Yay Vaxt\u0131"_s,
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
			$of("Europe/Samara"_s),
			$of(Samara)
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
				u"Qrinvi\u00e7 Orta Vaxt\u0131"_s,
				""_s,
				u"Britaniya Yay Vaxt\u0131"_s,
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
			$of("timezone.excity.Asia/Aden"_s),
			$of("Aden"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"Bak\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of("Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"Q\u0259za"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hovd"_s),
			$of("Hovd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of("Omsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Oral"_s),
			$of("Oral"_s)
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
			$of("timezone.excity.Asia/Amman"_s),
			$of("Amman"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of("Aktau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"\u00c7ita"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of(u"D\u0259kk\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of("Dubay"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of("Kabil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of("Makao"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of("Seul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of("Tokyo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tomsk"_s),
			$of("Tomsk"_s)
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
			$of("timezone.excity.Africa/Juba"_s),
			$of("Juba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lome"_s),
			$of("Lome"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"Almat\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"Anad\u0131r"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of("Aqtobe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of(u"At\u0131rau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of("Beyrut"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of("Bruney"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of("Hebron"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of(u"K\u00fcveyt"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of("Manila"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of("Muskat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of("Riyad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"Ho \u015ei Min"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of("Taybey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of("Tehran"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"Urum\u00e7i"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"Nam\u0259lum \u015e\u0259h\u0259r"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of("Kiyev"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of("Oslo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of("Riqa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of("Roma"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of("Mahe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of("Akkra"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"Qahir\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of("Seuta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of("Dakar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of("Laqos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of("Tunis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of("Adak"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lima"_s),
			$of("Lima"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nome"_s),
			$of("Nom"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"Ba\u011fdad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"B\u0259hreyn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of("Banqkok"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of("Barnaul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"Bi\u015fkek"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of("Kolombo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"\u0130rkutsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of("Cakarta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"Kara\u00e7i"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of(u"Ku\u00e7inq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of("Maqadan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of("Nikosiya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of("Ranqun"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of("Tbilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of("Thimphu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of("Yakutsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of("Yerevan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kirov"_s),
			$of("Kirov"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of("Minsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Paris"_s),
			$of("Paris"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of("Sofiya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of("Vaduts"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of("Kokos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of("Apia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of("Fici"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of("Quam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of(u"\u00c7uuk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of("Veyk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"\u018fsm\u0259r\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of("Bamako"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of("Banqui"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of("Bancul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of("Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of("Harare"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of("Kiqali"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of("Luanda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of("Lusaka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Malabo"_s),
			$of("Malabo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maputo"_s),
			$of("Maputo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of("Maseru"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Niamey"_s),
			$of("Niamey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of("Bahiya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of("Belem"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of("Boyse"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jujuy"_s),
			$of("Jujuy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sitka"_s),
			$of("Sitka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of("Tul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"A\u015fqabat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of(u"K\u0259lk\u0259t\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"D\u0259m\u0259\u015fq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"D\u00fc\u015f\u0259nb\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of("Cayapura"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of("Katmandu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"Xand\u0131qa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of("Saxalin"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of(u"\u015eanxay"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"Da\u015fk\u0259nd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of("Ust-Nera"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of("Afina"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of("Berlin"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of("Dublin"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of("Cersi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of("Lissabon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of("London"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of("Madrid"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of("Moskva"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of("Praqa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of("Samara"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of("Skopye"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of("Tirana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of("Vyana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of(u"Var\u015fava"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of("Zaqreb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"S\u00fcrix"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"\u00c7aqos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of("Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Efate"_s),
			$of("Efate"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Palau"_s),
			$of("Palau"_s)
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
			$of("timezone.excity.Africa/Abidjan"_s),
			$of("Abican"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of(u"\u018flc\u0259zair"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of("Konakri"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kampala"_s),
			$of("Kampala"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mbabane"_s),
			$of("Mbabane"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of("Nairobi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of("Tripoli"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of("Beliz"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of("Boqota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of("Kankun"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of("Kayman"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of("Kuyaba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of("Douson"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of("Denver"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of("Qayana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of("Havana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"\u0130nuvik"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of("Cuno"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of("La Pas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of("Maseyo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of("Manaus"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of("Merida"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of("Nassau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of("Resif"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of("Recina"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of("Famaqusta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of("Honq Konq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"Yerus\u0259lim"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"Kam\u00e7atka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of("Pontianak"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of("Pxenyan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of(u"Q\u0131z\u0131lorda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"S\u0259m\u0259rq\u0259nd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of("Sinqapur"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of("Vyentyan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Andorra"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of("Saratov"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of("Tallin"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of(u"Viln\u00fcs"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of("Mayot"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of("Pasxa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of("Kosraye"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of("Macuro"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of("Midvey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of("Noumea"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of("Saypan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of("Tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of("Tarava"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of("Uollis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of("Blantir"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of("Cibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"\u018fl \u018fyun"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of("Fritaun"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of("Qaboron"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of("Xartum"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"Kin\u015fasa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of("Monrovia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of("Ncamena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of("San Tom"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of("Vindhuk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of("Antiqua"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of("Karakas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of("Kayen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"\u00c7ikaqo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of("Kordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of("Kreston"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of("Kurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of("Detroyt"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of("Qrenada"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of("Halifaks"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of(u"\u0130qaluit"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of("Yamayka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of("Manaqua"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of("Mariqot"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of("Mendoza"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of("Monkton"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of("Nipiqon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of("Noronya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of("Ocinaqa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of("Feniks"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of("Tixuana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of("Toronto"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of("Tortola"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of("Yakutat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"\u00c7oybalsan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of("Pnom Pen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of("Azor"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of("Kanar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of("Farer"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of("Yukla"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of("Pert"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of("Belqrad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"Br\u00fcssel"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"Budape\u015ft"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of("Busingen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"Ki\u015finyov"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of("Gernzey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of("Helsinki"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"\u0130stanbul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of("Sarayevo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of("Ujqorod"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of("Maldiv"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"\u00c7atam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of("Fakaofo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of("Qambiyer"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Norfolk"_s),
			$of("Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bujumbura"_s),
			$of("Bujumbura"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"Moqadi\u015fu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of("Angilya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of("Asunsion"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of("Edmondton"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"\u0130runepe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of("Mazaltan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of("Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of("Nyu York"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of("Rezolyut"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of("Santarem"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of("Santyaqo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of("Sent Cons"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of("San Kits"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"San L\u00fcsiya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of("Vinnipeq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of("Keysi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of("Deyvis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of("Syova"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of("Troll"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of("Krasnoyarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of("Novosibirsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of("Ulanbator"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of("Vladivostok"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"Bermud adalar\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of("Madeyra"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of("Stenli"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of("Kuriye"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of("Darvin"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of("Hobart"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of("Sidney"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Amsterdam"_s),
			$of("Amsterdam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"H\u0259\u015ft\u0259rxan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of("Buxarest"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of(u"C\u0259b\u0259li-Tariq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of("Lyublyana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of("Mariham"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of("Podqoritsa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of("Stokholm"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of("Ulyanovsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of("Volqoqrad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of("Milad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of("Kergelen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of("Mavriki"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of(u"Okl\u0259nd"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of("Funafuti"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of("Honolulu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of("Conston"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of("Pitkern"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of("Kasablanka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of("Librevil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of(u"Lubumba\u015fi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"Nouak\u015fot"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of("Porto-Novo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of("Ankorac"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of("Araguayna"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of("Boa Vista"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of("Katamarka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"\u00c7ihuahua"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of("Fortaleza"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"Qleys K\u00f6rf\u0259zi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"Quz K\u00f6rf\u0259zi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of("Qvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of("Quayakil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of("Matamoros"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of("Menomini"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of("Monterey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of("San Paulo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of("San Tomas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of("Vankuver"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of("Mouson"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of("Palmer"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of("Vostok"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuala_Lumpur"_s),
			$of("Kuala Lumpur"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of("Novokuznetsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of("Bratislava"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of("Kopenhagen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of(u"L\u00fcksemburq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of("Simferopol"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of("Zaporojye"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"Enderb\u00f6ri"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of("Qalapaqos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of("Kvajaleyn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of("Markesas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of("Paqo Paqo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of("Rarotonqa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of("Tonqapatu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"\u018fddis \u018fb\u0259b\u0259"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of("Brazzavil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of("Uqaduqu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of("Qrand Turk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of("Qvadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of("Hermosilo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of("Kralendik"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of("Luisvil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Metlakatla"_s),
			$of("Metlakatla"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of("Montevideo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of("Monserat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of("Paramaribo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of("Rio Branko"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of("San Vinsent"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of("Uaythors"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of("Mak Murdo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of("Rothera"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"Srednekol\u0131msk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of("Yekaterinburq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of("Reykyavik"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of(u"M\u00fcq\u0259dd\u0259s Yelena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of("Adelaida"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of("Brisbeyn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of("Lindeman"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"Men Adas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of("Kalininqrad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of("Kirimati"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of("Yohanesburq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of("Fort Nelson"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of("Los Anceles"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of("Panqnirtanq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of("Porto Velyo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of("Puerto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"Reyni \u00c7ay\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of("Tequsiqalpa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"\u0130ld\u0131r\u0131m K\u00f6rf\u0259zi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of("Yellounayf"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of("Lonqyir"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of("Kape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of("Lord Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of("Melburn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of("Antananarivo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of("Quadalkanal"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of("Dar es Salam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of("Blank-Sablon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of("Buenos Ayres"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of("Kampo Qrande"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"Danmark\u015favn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of("Douson Krik"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of("Noks"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"\u0130ndianapolis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of("Punta Arenas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"Rankin Giri\u015fi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of(u"Santa \u0130zabel"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of("Skoresbisund"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of("Makuari"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of("Buqanvil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of("Port Moresbi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"Kembric K\u00f6rf\u0259zi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of("Vivey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"A\u015fa\u011f\u0131 Prins Kvartal\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"\u0130span Liman\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of("Santo Dominqo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of("Sent-Bartelemi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of("Svift Kurent"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of("Broken Hill"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of("Bahia Banderas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of("Port-o-Prins"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"C\u0259nubi Corciya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of("Salta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of("Marenqo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of("Vinamak"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of("Tukuman"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of(u"U\u015fuaya"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of("Tell"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of("Vinsen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"Dumont d\u2019Urvil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of("Rioxa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of("San Xuan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of("San Luis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of("Pitersburq"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of(u"Monti\u00e7ello"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"Beulah, \u015eimali Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"M\u0259rk\u0259z, \u015eimal Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of("Rio Qalyeqos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of("Nyu Salem"_s)
		})
	}));
	return data;
}

TimeZoneNames_az::TimeZoneNames_az() {
}

$Class* TimeZoneNames_az::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_az, name, initialize, &_TimeZoneNames_az_ClassInfo_, allocate$TimeZoneNames_az);
	return class$;
}

$Class* TimeZoneNames_az::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun