#include <sun/util/resources/cldr/ext/TimeZoneNames_gl.h>

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

$MethodInfo _TimeZoneNames_gl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_gl::*)()>(&TimeZoneNames_gl::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_gl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_gl",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_gl_MethodInfo_
};

$Object* allocate$TimeZoneNames_gl($Class* clazz) {
	return $of($alloc(TimeZoneNames_gl));
}

void TimeZoneNames_gl::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_gl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		"Horario do meridiano de Greenwich"_s,
		"GMT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"Horario est\u00e1ndar de Apia"_s,
		""_s,
		u"Horario de ver\u00e1n de Apia"_s,
		""_s,
		"Horario de Apia"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"Horario est\u00e1ndar das Illas Cook"_s,
		""_s,
		u"Horario de ver\u00e1n medio das Illas Cook"_s,
		""_s,
		"Horario das Illas Cook"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"Horario est\u00e1ndar de Cuba"_s,
		""_s,
		u"Horario de ver\u00e1n de Cuba"_s,
		""_s,
		"Horario de Cuba"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"Horario est\u00e1ndar de Fixi"_s,
		""_s,
		u"Horario de ver\u00e1n de Fixi"_s,
		""_s,
		"Horario de Fixi"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		"Horario do Golfo"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"Horario est\u00e1ndar de Hovd"_s,
		""_s,
		u"Horario de ver\u00e1n de Hovd"_s,
		""_s,
		"Horario de Hovd"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"Horario est\u00e1ndar de Ir\u00e1n"_s,
		""_s,
		u"Horario de ver\u00e1n de Ir\u00e1n"_s,
		""_s,
		u"Horario de Ir\u00e1n"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		"Horario de Niue"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Horario est\u00e1ndar de Omsk"_s,
		""_s,
		u"Horario de ver\u00e1n de Omsk"_s,
		""_s,
		"Horario de Omsk"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"Horario est\u00e1ndar do Per\u00fa"_s,
		""_s,
		u"Horario de ver\u00e1n do Per\u00fa"_s,
		""_s,
		u"Horario do Per\u00fa"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		"Horario de Chuuk"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		"Horario da Illa Wake"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"Horario est\u00e1ndar de Chile"_s,
		""_s,
		u"Horario de ver\u00e1n de Chile"_s,
		""_s,
		"Horario de Chile"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"Horario est\u00e1ndar da China"_s,
		""_s,
		u"Horario de ver\u00e1n da China"_s,
		""_s,
		"Horario da China"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		"Horario das Illas Cocos"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		"Horario de Davis"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		"Horario da India"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Horario est\u00e1ndar do Xap\u00f3n"_s,
		""_s,
		u"Horario de ver\u00e1n do Xap\u00f3n"_s,
		""_s,
		u"Horario do Xap\u00f3n"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"Horario est\u00e1ndar de Corea"_s,
		""_s,
		u"Horario de ver\u00e1n de Corea"_s,
		""_s,
		"Horario de Corea"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		"Horario de Nauru"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		"Horario de Nepal"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		"Horario de Palau"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"Horario est\u00e1ndar de Samoa"_s,
		""_s,
		u"Horario de ver\u00e1n de Samoa"_s,
		""_s,
		"Horario de Samoa"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		"Horario de Syowa"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"Horario est\u00e1ndar de Tonga"_s,
		""_s,
		u"Horario de ver\u00e1n de Tonga"_s,
		""_s,
		"Horario de Tonga"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"Horario est\u00e1ndar de Alasca"_s,
		""_s,
		u"Horario de ver\u00e1n de Alasca"_s,
		""_s,
		"Horario de Alasca"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"Horario est\u00e1ndar do Amazonas"_s,
		""_s,
		u"Horario de ver\u00e1n do Amazonas"_s,
		""_s,
		"Horario do Amazonas"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"Horario est\u00e1ndar de Anadir"_s,
		""_s,
		u"Horario de ver\u00e1n de Anadir"_s,
		""_s,
		"Horario de Anadir"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"Horario est\u00e1ndar dos Azores"_s,
		""_s,
		u"Horario de ver\u00e1n dos Azores"_s,
		""_s,
		"Horario dos Azores"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"Horario de But\u00e1n"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		"Horario de Brunei Darussalam"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"Horario est\u00e1ndar da Illa de Pascua"_s,
		""_s,
		u"Horario de ver\u00e1n da Illa de Pascua"_s,
		""_s,
		"Horario da Illa de Pascua"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"Horario da G\u00fciana"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"Horario est\u00e1ndar de Israel"_s,
		""_s,
		u"Horario de ver\u00e1n de Israel"_s,
		""_s,
		"Horario de Israel"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		"Horario de Kosrae"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		"Horario de Mawson"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Horario est\u00e1ndar de Moscova"_s,
		""_s,
		u"Horario de ver\u00e1n de Moscova"_s,
		""_s,
		"Horario de Moscova"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		"Horario de Pohnpei"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"Horario est\u00e1ndar de Samara"_s,
		""_s,
		u"Horario de ver\u00e1n de Samara"_s,
		""_s,
		"Horario de Samara"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"Horario de Tahit\u00ed"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"Horario est\u00e1ndar de Taipei"_s,
		""_s,
		u"Horario de ver\u00e1n de Taipei"_s,
		""_s,
		"Horario de Taipei"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		"Horario de Tuvalu"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		"Horario de Vostok"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		"Horario de Wallis e Futuna"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"Horario est\u00e1ndar \u00e1rabe"_s,
		""_s,
		u"Horario de ver\u00e1n \u00e1rabe"_s,
		""_s,
		u"Horario \u00e1rabe"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Horario est\u00e1ndar de Armenia"_s,
		""_s,
		u"Horario de ver\u00e1n de Armenia"_s,
		""_s,
		"Horario de Armenia"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		"Horario de Bolivia"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"Horario est\u00e1ndar de Chatham"_s,
		""_s,
		u"Horario de ver\u00e1n de Chatham"_s,
		""_s,
		"Horario de Chatham"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		"Horario universal coordinado"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		"Horario de Ecuador"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		"Horario de Gambier"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"Horario est\u00e1ndar de Xeorxia"_s,
		""_s,
		u"Horario de ver\u00e1n de Xeorxia"_s,
		""_s,
		"Horario de Xeorxia"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"Horario est\u00e1ndar de Irkutsk"_s,
		""_s,
		u"Horario de ver\u00e1n de Irkutsk"_s,
		""_s,
		"Horario de Irkutsk"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Horario est\u00e1ndar de Magadan"_s,
		""_s,
		u"Horario de ver\u00e1n de Magadan"_s,
		""_s,
		"Horario de Magadan"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		"Horario de Myanmar"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"Horario est\u00e1ndar da Illa Norfolk"_s,
		""_s,
		u"Horario de ver\u00e1n da Illa Norfolk"_s,
		""_s,
		"Horario da Illa Norfolk"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"Horario est\u00e1ndar de Fernando de Noronha"_s,
		""_s,
		u"Horario de ver\u00e1n de Fernando de Noronha"_s,
		""_s,
		"Horario de Fernando de Noronha"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"Horario de Reuni\u00f3n"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		"Horario de Rothera"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"Horario das Illas Salom\u00f3n"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		"Horario de Tokelau"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"Horario est\u00e1ndar do Uruguai"_s,
		""_s,
		u"Horario de ver\u00e1n do Uruguai"_s,
		""_s,
		"Horario do Uruguai"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"Horario est\u00e1ndar de Vanuatu"_s,
		""_s,
		u"Horario de ver\u00e1n de Vanuatu"_s,
		""_s,
		"Horario de Vanuatu"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Horario est\u00e1ndar de Iakutsk"_s,
		""_s,
		u"Horario de ver\u00e1n de Iakutsk"_s,
		""_s,
		"Horario de Iakutsk"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"Horario est\u00e1ndar do Atl\u00e1ntico"_s,
		""_s,
		u"Horario de ver\u00e1n do Atl\u00e1ntico"_s,
		""_s,
		u"Horario do Atl\u00e1ntico"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Horario est\u00e1ndar de Brasilia"_s,
		""_s,
		u"Horario de ver\u00e1n de Brasilia"_s,
		""_s,
		"Horario de Brasilia"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"Horario est\u00e1ndar chamorro"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"Horario est\u00e1ndar de Colombia"_s,
		""_s,
		u"Horario de ver\u00e1n de Colombia"_s,
		""_s,
		"Horario de Colombia"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"Horario est\u00e1ndar das Illas Malvinas"_s,
		""_s,
		u"Horario de ver\u00e1n das Illas Malvinas"_s,
		""_s,
		"Horario das Illas Malvinas"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		"Horario de Malaisia"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		"Horario das Maldivas"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Horario est\u00e1ndar de Ulaanbaatar"_s,
		""_s,
		u"Horario de ver\u00e1n de Ulaanbaatar"_s,
		""_s,
		"Horario de Ulaanbaatar"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Horario est\u00e1ndar de Paquist\u00e1n"_s,
		""_s,
		u"Horario de ver\u00e1n de Paquist\u00e1n"_s,
		""_s,
		u"Horario de Paquist\u00e1n"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"Horario est\u00e1ndar do Paraguai"_s,
		""_s,
		u"Horario de ver\u00e1n do Paraguai"_s,
		""_s,
		"Horario do Paraguai"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		"Horario de Pitcairn"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Horario est\u00e1ndar de Sakhal\u00edn"_s,
		""_s,
		u"Horario de ver\u00e1n de Sakhal\u00edn"_s,
		""_s,
		u"Horario de Sakhal\u00edn"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		"Horario de Suriname"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"Horario est\u00e1ndar da Arxentina"_s,
		""_s,
		u"Horario de ver\u00e1n da Arxentina"_s,
		""_s,
		"Horario da Arxentina"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		"Horario da Illa Christmas"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"Horario das Gal\u00e1pagos"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"Horario est\u00e1ndar de Hong Kong"_s,
		""_s,
		u"Horario de ver\u00e1n de Hong Kong"_s,
		""_s,
		"Horario de Hong Kong"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		"Horario de Indochina"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"Horario est\u00e1ndar de Petrop\u00e1vlovsk-Kamchatski"_s,
		""_s,
		u"Horario de ver\u00e1n de Petrop\u00e1vlovsk-Kamchatski"_s,
		""_s,
		u"Horario de Petrop\u00e1vlovsk-Kamchatski"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Horario de Kirguizist\u00e1n"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"Horario est\u00e1ndar de Lord Howe"_s,
		""_s,
		u"Horario de ver\u00e1n de Lord Howe"_s,
		""_s,
		"Horario de Lord Howe"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		"Horario das Marquesas"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"Horario est\u00e1ndar de Mauricio"_s,
		""_s,
		u"Horario de ver\u00e1n de Mauricio"_s,
		""_s,
		"Horario de Mauricio"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		"Horario de Singapur"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		"Horario de Venezuela"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Horario est\u00e1ndar de Volgogrado"_s,
		""_s,
		u"Horario de ver\u00e1n de Volgogrado"_s,
		""_s,
		"Horario de Volgogrado"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"Horario est\u00e1ndar de Acerbaix\u00e1n"_s,
		""_s,
		u"Horario de ver\u00e1n de Acerbaix\u00e1n"_s,
		""_s,
		u"Horario de Acerbaix\u00e1n"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"Horario est\u00e1ndar de Bangladesh"_s,
		""_s,
		u"Horario de ver\u00e1n de Bangladesh"_s,
		""_s,
		"Horario de Bangladesh"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"Horario est\u00e1ndar de Cabo Verde"_s,
		""_s,
		u"Horario de ver\u00e1n de Cabo Verde"_s,
		""_s,
		"Horario de Cabo Verde"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		"Horario de Timor Leste"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		"Horario das Seychelles"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"Horario de Taxiquist\u00e1n"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"Horario est\u00e1ndar de Uzbekist\u00e1n"_s,
		""_s,
		u"Horario de ver\u00e1n de Uzbekist\u00e1n"_s,
		""_s,
		u"Horario de Uzbekist\u00e1n"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"Horario de Afganist\u00e1n"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Horario est\u00e1ndar de Krasnoiarsk"_s,
		""_s,
		u"Horario de ver\u00e1n de Krasnoiarsk"_s,
		""_s,
		"Horario de Krasnoiarsk"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"Horario est\u00e1ndar de Nova Zelandia"_s,
		""_s,
		u"Horario de ver\u00e1n de Nova Zelandia"_s,
		""_s,
		"Horario de Nova Zelandia"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Horario est\u00e1ndar de Novosibirsk"_s,
		""_s,
		u"Horario de ver\u00e1n de Novosibirsk"_s,
		""_s,
		"Horario de Novosibirsk"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"Horario est\u00e1ndar de Filipinas"_s,
		""_s,
		u"Horario de ver\u00e1n de Filipinas"_s,
		""_s,
		"Horario de Filipinas"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Horario est\u00e1ndar de Vladivostok"_s,
		""_s,
		u"Horario de ver\u00e1n de Vladivostok"_s,
		""_s,
		"Horario de Vladivostok"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"Horario do Oc\u00e9ano \u00cdndico"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"Horario das Illas da Li\u00f1a"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"Horario est\u00e1ndar de Terra Nova"_s,
		""_s,
		u"Horario de ver\u00e1n de Terra Nova"_s,
		""_s,
		"Horario de Terra Nova"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"Horario est\u00e1ndar de Turkmenist\u00e1n"_s,
		""_s,
		u"Horario de ver\u00e1n de Turkmenist\u00e1n"_s,
		""_s,
		u"Horario de Turkmenist\u00e1n"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"Horario da G\u00fciana Francesa"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"Horario est\u00e1ndar de Nova Caledonia"_s,
		""_s,
		u"Horario de ver\u00e1n de Nova Caledonia"_s,
		""_s,
		"Horario de Nova Caledonia"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		"Horario de Xeorxia do Sur"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Horario est\u00e1ndar de Ekaterimburgo"_s,
		""_s,
		u"Horario de ver\u00e1n de Ekaterimburgo"_s,
		""_s,
		"Horario de Ekaterimburgo"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"Horario de \u00c1frica Central"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"Horario de \u00c1frica Oriental"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"Horario est\u00e1ndar de \u00c1frica Occidental"_s,
		""_s,
		u"Horario de ver\u00e1n de \u00c1frica Occidental"_s,
		""_s,
		u"Horario de \u00c1frica Occidental"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"Horario de Dumont-d\u2019Urville"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"Horario est\u00e1ndar de Europa Central"_s,
		"CET"_s,
		u"Horario de ver\u00e1n de Europa Central"_s,
		"CEST"_s,
		"Horario de Europa Central"_s,
		"CET"_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"Horario est\u00e1ndar de Europa Oriental"_s,
		"EET"_s,
		u"Horario de ver\u00e1n de Europa Oriental"_s,
		"EEST"_s,
		"Horario de Europa Oriental"_s,
		"EET"_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"Horario est\u00e1ndar de Europa Occidental"_s,
		"WET"_s,
		u"Horario de ver\u00e1n de Europa Occidental"_s,
		"WEST"_s,
		"Horario de Europa Occidental"_s,
		"WET"_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"Horario est\u00e1ndar do Pac\u00edfico mexicano"_s,
		""_s,
		u"Horario de ver\u00e1n do Pac\u00edfico mexicano"_s,
		""_s,
		u"Horario do Pac\u00edfico mexicano"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"Horario de \u00c1frica Meridional"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"Horario est\u00e1ndar central, Norteam\u00e9rica"_s,
		""_s,
		u"Horario de ver\u00e1n central, Norteam\u00e9rica"_s,
		""_s,
		u"Horario central, Norteam\u00e9rica"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"Horario est\u00e1ndar do leste, Am\u00e9rica do Norte"_s,
		""_s,
		u"Horario de ver\u00e1n do leste, Am\u00e9rica do Norte"_s,
		""_s,
		u"Horario do leste, Am\u00e9rica do Norte"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"Horario est\u00e1ndar do Pac\u00edfico, Am\u00e9rica do Norte"_s,
		""_s,
		u"Horario de ver\u00e1n do Pac\u00edfico, Am\u00e9rica do Norte"_s,
		""_s,
		u"Horario do Pac\u00edfico, Am\u00e9rica do Norte"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"Horario das Terras Austrais e Ant\u00e1rticas Francesas"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		"Horario das Illas Gilbert"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"Horario est\u00e1ndar de Hawai-illas Aleutianas"_s,
		""_s,
		u"Horario de ver\u00e1n de Hawai-illas Aleutianas"_s,
		""_s,
		"Horario de Hawai-illas Aleutianas"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"Horario das Illas F\u00e9nix"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"Horario est\u00e1ndar de Saint Pierre et Miquelon"_s,
		""_s,
		u"Horario de ver\u00e1n de Saint Pierre et Miquelon"_s,
		""_s,
		"Horario de Saint Pierre et Miquelon"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"Horario est\u00e1ndar da monta\u00f1a, Am\u00e9rica do Norte"_s,
		""_s,
		u"Horario de ver\u00e1n da monta\u00f1a, Am\u00e9rica do Norte"_s,
		""_s,
		u"Horario da monta\u00f1a, Am\u00e9rica do Norte"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		"Horario das Illas Marshall"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"Horario est\u00e1ndar do noroeste de M\u00e9xico"_s,
		""_s,
		u"Horario de ver\u00e1n do noroeste de M\u00e9xico"_s,
		""_s,
		u"Horario do noroeste de M\u00e9xico"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"Horario de Pap\u00faa-Nova Guinea"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"Horario est\u00e1ndar de Australia Central"_s,
		""_s,
		u"Horario de ver\u00e1n de Australia Central"_s,
		""_s,
		"Horario de Australia Central"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"Horario est\u00e1ndar de Australia Oriental"_s,
		""_s,
		u"Horario de ver\u00e1n de Australia Oriental"_s,
		""_s,
		"Horario de Australia Oriental"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Horario est\u00e1ndar de Australia Occidental"_s,
		""_s,
		u"Horario de ver\u00e1n de Australia Occidental"_s,
		""_s,
		"Horario de Australia Occidental"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"Horario est\u00e1ndar de Groenlandia Oriental"_s,
		""_s,
		u"Horario de ver\u00e1n de Groenlandia Oriental"_s,
		""_s,
		"Horario de Groenlandia Oriental"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"Horario est\u00e1ndar de Groenlandia Occidental"_s,
		""_s,
		u"Horario de ver\u00e1n de Groenlandia Occidental"_s,
		""_s,
		"Horario de Groenlandia Occidental"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		"Horario de Indonesia Central"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		"Horario de Indonesia Oriental"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		"Horario de Indonesia Occidental"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"Horario de Kazakist\u00e1n Oriental"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Horario de Kazakist\u00e1n Occidental"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"Horario est\u00e1ndar de Australia Occidental Central"_s,
		""_s,
		u"Horario de ver\u00e1n de Australia Occidental Central"_s,
		""_s,
		"Horario de Australia Occidental Central"_s,
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
			$of("Asia/Anadyr"_s),
			$of(Anadyr)
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
				"Horario do meridiano de Greenwich"_s,
				"GMT"_s,
				u"Horario est\u00e1ndar irland\u00e9s"_s,
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
				"Horario do meridiano de Greenwich"_s,
				"GMT"_s,
				u"Horario de ver\u00e1n brit\u00e1nico"_s,
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
			$of("Asia/Kamchatka"_s),
			$of(Kamchatka)
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
				"Horario do meridiano de Greenwich"_s,
				"GMT"_s,
				u"Horario de ver\u00e1n brit\u00e1nico"_s,
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
			$of(u"Ad\u00e9n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"Bac\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of("Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of("Gaza"_s)
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
			$of(u"Am\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of("Aktau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"Chit\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of("Dhaka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of("Dubai"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of("Cabul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of("Macau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of(u"Se\u00fal"_s)
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
			$of(u"Lom\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of("Almati"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of("Anadyr"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of("Aktobe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of("Atyrau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of("Beirut"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"Hebr\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of("Manila"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of("Mascate"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of("Riad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of("Taipei"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of(u"Teher\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"\u00dcr\u00fcmqi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"Cidade desco\u00f1ecida"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of("Kiev"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of("Oslo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of("Riga"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of("Roma"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of(u"Mah\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of("Acra"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of("O Cairo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of("Ceuta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of("Dakar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of("Lagos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of("Tunes"_s)
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
			$of("Nome"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of("Bagdad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of("Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of("Bangkok"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of("Barnaul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of("Bishkek"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of("Colombo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of("Irkutsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of("Iacarta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of("Karachi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of("Kuching"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of("Magadan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of("Nicosia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of("Tbilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of("Iakutsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"Ierev\u00e1n"_s)
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
			$of(u"Par\u00eds"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of(u"Sof\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of("Vaduz"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of("Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of("Apia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of("Fixi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of("Wake"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of("Bamaco"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of("Bangui"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of("Banjul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of("Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of("Douala"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of("Harare"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of("Kigali"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of("Luanda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of("Lusaca"_s)
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
			$of(u"Ba\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of(u"Bel\u00e9m"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of("Boise"_s)
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
			$of("Thule"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of("Achkhabad"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of("Calcuta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of("Damasco"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of("Dushanbe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of("Jayapura"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of(u"Katmand\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of("Chandyga"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of("Makassar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qostanay"_s),
			$of("Qostanai"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"Sakhal\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of("Shanghai"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of("Tashkent"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of("Ust-Nera"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of("Atenas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of(u"Berl\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of(u"Dubl\u00edn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of("Lisboa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of("Londres"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of("Madrid"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of(u"M\u00f3naco"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of("Moscova"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of("Praga"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of("Samara"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of("Skopje"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of("Tirana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of("Viena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of("Varsovia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of("Zagreb"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"Z\u00fcrich"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of("Chagos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of("Comores"_s)
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
			$of("Abidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of("Alxer"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of("Conakry"_s)
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
			$of(u"Tr\u00edpoli"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"Bogot\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of(u"Canc\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"Illas Caim\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"Cuiab\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of("Dawson"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of("Denver"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"G\u00fciana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of("A Habana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of("Inuvik"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of("Juneau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of("A Paz"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"Macei\u00f3"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of("Manaus"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of(u"M\u00e9rida"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of("Nassau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"Panam\u00e1"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of("Recife"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of("Regina"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of("Famagusta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of("Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"Xerusal\u00e9n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of("Kamchatka"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of("Pontianak"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of("Pyongyang"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of("Kyzylorda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of("Samarcanda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of("Vientiane"_s)
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
			$of("Tallinn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of("Vaticano"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of("Vilnius"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"Reuni\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of("Illa de Pascua"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of("Kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of("Majuro"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of("Midway"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of("Noumea"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of("Saipan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of(u"Tahit\u00ed"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of("Tarawa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of("Wallis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of("Blantyre"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"O Ai\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of("Freetown"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of("Gaborone"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"Khart\u00fan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of("Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of("Monrovia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of(u"N\u2019Djamena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"San Tom\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of("Windhoek"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of("Caracas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of("Caiena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of("Chicago"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"C\u00f3rdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of("Creston"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of("Detroit"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of("Halifax"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of("Iqaluit"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of("Xamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of("Managua"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of("Marigot"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of("Mendoza"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of("Moncton"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of("Nipigon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of("Noronha"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of("Ojinaga"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of("Phoenix"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of("Tijuana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of("Toronto"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of(u"T\u00f3rtola"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of("Yakutat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of("Choibalsan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of("Phnom Penh"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of("Azores"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of("Illas Canarias"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of("Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of("Eucla"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of("Perth"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of("Belgrado"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of("Bruxelas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of("Budapest"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of("Busingen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of("Chisinau"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of("Helsinqui"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of("Istanbul"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of("Saraievo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of("Uzghorod"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of("Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of("Chatham"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of("Fakaofo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of("Gambier"_s)
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
			$of("Mogadixo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of("Anguila"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"Asunci\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of("Edmonton"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"Eirunep\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of(u"Mazatl\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of("Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of("Nova York"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of("Resolute"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of(u"Santar\u00e9m"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of("Santiago"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"Saint John\u2019s"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of("Saint Kitts"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"Santa Luc\u00eda"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of("Winnipeg"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of("Casey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of("Davis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of("Showa"_s)
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
			$of("Ulaanbaatar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of("Vladivostok"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of("Illas Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of("Madeira"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of("Stanley"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of("Currie"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of("Darwin"_s)
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
			$of(u"\u00c1msterdam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"Astrak\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of("Bucarest"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of("Xibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of("Liubliana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of("Mariehamn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of("Podgorica"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of("Estocolmo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of("Ulianovsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of("Volgogrado"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of("Illa Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of("Kerguelen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of("Mauricio"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of("Auckland"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of("Funafuti"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of(u"Honolul\u00fa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of("Johnston"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of("Casablanca"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of("Libreville"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of("Lubumbashi"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of("Nouakchott"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of("Porto-Novo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of("Anchorage"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"Aragua\u00edna"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of("Boa Vista"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of("Catamarca"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of("Chihuahua"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of("Fortaleza"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of("Glace Bay"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of("Goose Bay"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of("Guayaquil"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of("Matamoros"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of("Menominee"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of("Monterrey"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"S\u00e3o Paulo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of("Saint Thomas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of("Vancouver"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of("Mawson"_s)
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
			$of("Copenhague"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of("Luxemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"Simfer\u00f3pol"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of("Zaporizhia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of("Enderbury"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of(u"Illas Gal\u00e1pagos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of("Kwajalein"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of("Marquesas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of("Pago Pago"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of("Rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of("Tongatapu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"Ad\u00eds Abeba"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of("Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of("Uagadugu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of("Grand Turk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of("Hermosillo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of("Kralendijk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of("Louisville"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of("Martinica"_s)
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
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of("Paramaribo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"R\u00edo Branco"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of("San Vicente"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of("Whitehorse"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of("McMurdo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of("Rothera"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of("Srednekolimsk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of("Ekaterinburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of("Reiquiavik"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of("Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of("Adelaida"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of("Brisbane"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of("Lindeman"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of("Illa de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of("Kaliningrado"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of("Kiritimati"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of("Xohanesburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of("O Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of("Fort Nelson"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of(u"Os \u00c1nxeles"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"Cidade de M\u00e9xico"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of("Pangnirtung"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of("Porto Velho"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of("Rainy River"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of("Tegucigalpa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of("Thunder Bay"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of("Yellowknife"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of("Longyearbyen"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of("Lord Howe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of("Melbourne"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of("Antananarivo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of("Guadalcanal"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of("Dar es Salaam"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of("Blanc-Sablon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of("Buenos Aires"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of("Campo Grande"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of("Danmarkshavn"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of("Dawson Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"Indian\u00e1polis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of("Punta Arenas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of("Rankin Inlet"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of("Santa Isabel"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of("Macquarie"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of("Bougainville"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of("Port Moresby"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of("Cambridge Bay"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"Porto Espa\u00f1a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of("Santo Domingo"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"Saint Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of("Swift Current"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of("Broken Hill"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"Bah\u00eda de Banderas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of(u"Porto Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of("Xeorxia do Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of("Salta"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of(u"Tucum\u00e1n"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of("Ushuaia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"Dumont-d\u2019Urville"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of("A Rioxa"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of("San Juan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of("San Luis"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of("Beulah, Dacota do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of("Center, Dacota do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of(u"R\u00edo Gallegos"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of("New Salem, Dacota do Norte"_s)
		})
	}));
	return data;
}

TimeZoneNames_gl::TimeZoneNames_gl() {
}

$Class* TimeZoneNames_gl::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_gl, name, initialize, &_TimeZoneNames_gl_ClassInfo_, allocate$TimeZoneNames_gl);
	return class$;
}

$Class* TimeZoneNames_gl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun