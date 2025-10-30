#include <sun/util/resources/cldr/provider/CLDRLocaleDataMetaInfo.h>

#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <jcpp.h>

#undef CLDR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $LocaleDataMetaInfo = ::sun::util::locale::provider::LocaleDataMetaInfo;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace provider {

$FieldInfo _CLDRLocaleDataMetaInfo_FieldInfo_[] = {
	{"resourceNameToLocales", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CLDRLocaleDataMetaInfo, resourceNameToLocales)},
	{}
};

$MethodInfo _CLDRLocaleDataMetaInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CLDRLocaleDataMetaInfo::*)()>(&CLDRLocaleDataMetaInfo::init$))},
	{"availableLanguageTags", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CLDRLocaleDataMetaInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.provider.CLDRLocaleDataMetaInfo",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleDataMetaInfo",
	_CLDRLocaleDataMetaInfo_FieldInfo_,
	_CLDRLocaleDataMetaInfo_MethodInfo_
};

$Object* allocate$CLDRLocaleDataMetaInfo($Class* clazz) {
	return $of($alloc(CLDRLocaleDataMetaInfo));
}

$Map* CLDRLocaleDataMetaInfo::resourceNameToLocales = nullptr;

void CLDRLocaleDataMetaInfo::init$() {
}

$LocaleProviderAdapter$Type* CLDRLocaleDataMetaInfo::getType() {
	$init($LocaleProviderAdapter$Type);
	return $LocaleProviderAdapter$Type::CLDR;
}

$String* CLDRLocaleDataMetaInfo::availableLanguageTags($String* category) {
	return $cast($String, $nc(CLDRLocaleDataMetaInfo::resourceNameToLocales)->getOrDefault(category, ""_s));
}

void clinit$CLDRLocaleDataMetaInfo($Class* class$) {
	$assignStatic(CLDRLocaleDataMetaInfo::resourceNameToLocales, $new($HashMap));
	{
		$nc(CLDRLocaleDataMetaInfo::resourceNameToLocales)->put("AvailableLocales"_s, " af af-Latn-ZA af-NA af-ZA agq agq-CM agq-Latn-CM ak ak-GH ak-Latn-GH am am-ET am-Ethi-ET ar ar-001 ar-AE ar-Arab-EG ar-BH ar-DJ ar-DZ ar-EG ar-EH ar-ER ar-IL ar-IQ ar-JO ar-KM ar-KW ar-LB ar-LY ar-MA ar-MR ar-OM ar-PS ar-QA ar-SA ar-SD ar-SO ar-SS ar-SY ar-TD ar-TN ar-YE as as-Beng-IN as-IN asa asa-Latn-TZ asa-TZ ast ast-ES ast-Latn-ES az az-AZ az-Cyrl az-Cyrl-AZ az-Latn az-Latn-AZ bas bas-CM bas-Latn-CM be be-BY be-Cyrl-BY bem bem-Latn-ZM bem-ZM bez bez-Latn-TZ bez-TZ bg bg-BG bg-Cyrl-BG bm bm-Latn-ML bm-ML bn bn-BD bn-Beng-BD bn-IN bo bo-CN bo-IN bo-Tibt-CN br br-FR br-Latn-FR brx brx-Deva-IN brx-IN bs bs-BA bs-Cyrl bs-Cyrl-BA bs-Latn bs-Latn-BA ca ca-AD ca-ES ca-ES-VALENCIA ca-FR ca-IT ca-Latn-ES ccp ccp-BD ccp-Cakm-BD ccp-IN ce ce-Cyrl-RU ce-RU ceb ceb-Latn-PH ceb-PH cgg cgg-Latn-UG cgg-UG chr chr-Cher-US chr-US ckb ckb-Arab-IQ ckb-IQ ckb-IR cs cs-CZ cs-Latn-CZ cy cy-GB cy-Latn-GB da da-DK da-GL da-Latn-DK dav dav-KE dav-Latn-KE de de-AT de-BE de-CH de-DE de-IT de-LI de-LU de-Latn-DE dje dje-Latn-NE dje-"
			"NE doi doi-Deva-IN doi-IN dsb dsb-DE dsb-Latn-DE dua dua-CM dua-Latn-CM dyo dyo-Latn-SN dyo-SN dz dz-BT dz-Tibt-BT ebu ebu-KE ebu-Latn-KE ee ee-GH ee-Latn-GH ee-TG el el-CY el-GR el-Grek-GR en-001 en-150 en-AE en-AG en-AI en-AS en-AT en-AU en-BB en-BE en-BI en-BM en-BS en-BW en-BZ en-CA en-CC en-CH en-CK en-CM en-CX en-CY en-DE en-DG en-DK en-DM en-ER en-FI en-FJ en-FK en-FM en-GB en-GD en-GG en-GH en-GI en-GM en-GU en-GY en-HK en-IE en-IL en-IM en-IN en-IO en-JE en-JM en-KE en-KI en-KN en-KY en-LC en-LR en-LS en-MG en-MH en-MO en-MP en-MS en-MT en-MU en-MW en-MY en-NA en-NF en-NG en-NL en-NR en-NU en-NZ en-PG en-PH en-PK en-PN en-PR en-PW en-RW en-SB en-SC en-SD en-SE en-SG en-SH en-SI en-SL en-SS en-SX en-SZ en-TC en-TK en-TO en-TT en-TV en-TZ en-UG en-UM en-VC en-VG en-VI en-VU en-WS en-ZA en-ZM en-ZW eo eo-001 eo-Latn-001 es es-419 es-AR es-BO es-BR es-BZ es-CL es-CO es-CR es-CU es-DO es-EA es-EC es-ES es-GQ es-GT es-HN es-IC es-Latn-ES es-MX es-NI es-PA es-PE es-PH es-PR es-PY es-SV es-US es-UY es-VE et "
			"et-EE et-Latn-EE eu eu-ES eu-Latn-ES ewo ewo-CM ewo-Latn-CM fa fa-AF fa-Arab-IR fa-IR ff ff-Adlm ff-Adlm-BF ff-Adlm-CM ff-Adlm-GH ff-Adlm-GM ff-Adlm-GN ff-Adlm-GW ff-Adlm-LR ff-Adlm-MR ff-Adlm-NE ff-Adlm-NG ff-Adlm-SL ff-Adlm-SN ff-GN ff-Latn ff-Latn-BF ff-Latn-CM ff-Latn-GH ff-Latn-GM ff-Latn-GN ff-Latn-GW ff-Latn-LR ff-Latn-MR ff-Latn-NE ff-Latn-NG ff-Latn-SL ff-Latn-SN ff-SN fi fi-FI fi-Latn-FI fil fil-Latn-PH fil-PH fo fo-DK fo-FO fo-Latn-FO fr fr-BE fr-BF fr-BI fr-BJ fr-BL fr-CA fr-CD fr-CF fr-CG fr-CH fr-CI fr-CM fr-DJ fr-DZ fr-FR fr-GA fr-GF fr-GN fr-GP fr-GQ fr-HT fr-KM fr-LU fr-Latn-FR fr-MA fr-MC fr-MF fr-MG fr-ML fr-MQ fr-MR fr-MU fr-NC fr-NE fr-PF fr-PM fr-RE fr-RW fr-SC fr-SN fr-SY fr-TD fr-TG fr-TN fr-VU fr-WF fr-YT fur fur-IT fur-Latn-IT fy fy-Latn-NL fy-NL ga ga-GB ga-IE ga-Latn-IE gd gd-GB gd-Latn-GB gl gl-ES gl-Latn-ES gsw gsw-CH gsw-FR gsw-LI gsw-Latn-CH gu gu-Gujr-IN gu-IN guz guz-KE guz-Latn-KE gv gv-IM gv-Latn-IM ha ha-GH ha-Latn-NG ha-NE ha-NG haw haw-Latn-US haw-US he he-Hebr-IL he-IL "
			"hi hi-Deva-IN hi-IN hr hr-BA hr-HR hr-Latn-HR hsb hsb-DE hsb-Latn-DE hu hu-HU hu-Latn-HU hy hy-AM hy-Armn-AM ia ia-001 ia-Latn-001 id id-ID id-Latn-ID ig ig-Latn-NG ig-NG ii ii-CN ii-Yiii-CN is is-IS is-Latn-IS it it-CH it-IT it-Latn-IT it-SM it-VA ja ja-JP ja-Jpan-JP jgo jgo-CM jgo-Latn-CM jmc jmc-Latn-TZ jmc-TZ jv jv-ID jv-Latn-ID ka ka-GE ka-Geor-GE kab kab-DZ kab-Latn-DZ kam kam-KE kam-Latn-KE kde kde-Latn-TZ kde-TZ kea kea-CV kea-Latn-CV khq khq-Latn-ML khq-ML ki ki-KE ki-Latn-KE kk kk-Cyrl-KZ kk-KZ kkj kkj-CM kkj-Latn-CM kl kl-GL kl-Latn-GL kln kln-KE kln-Latn-KE km km-KH km-Khmr-KH kn kn-IN kn-Knda-IN ko ko-KP ko-KR ko-Kore-KR kok kok-Deva-IN kok-IN ks ks-Arab ks-Arab-IN ks-IN ksb ksb-Latn-TZ ksb-TZ ksf ksf-CM ksf-Latn-CM ksh ksh-DE ksh-Latn-DE ku ku-Latn-TR ku-TR kw kw-GB kw-Latn-GB ky ky-Cyrl-KG ky-KG lag lag-Latn-TZ lag-TZ lb lb-LU lb-Latn-LU lg lg-Latn-UG lg-UG lkt lkt-Latn-US lkt-US ln ln-AO ln-CD ln-CF ln-CG ln-Latn-CD lo lo-LA lo-Laoo-LA lrc lrc-Arab-IR lrc-IQ lrc-IR lt lt-LT lt-Latn-LT lu lu-CD"
			" lu-Latn-CD luo luo-KE luo-Latn-KE luy luy-KE luy-Latn-KE lv lv-LV lv-Latn-LV mai mai-Deva-IN mai-IN mas mas-KE mas-Latn-KE mas-TZ mer mer-KE mer-Latn-KE mfe mfe-Latn-MU mfe-MU mg mg-Latn-MG mg-MG mgh mgh-Latn-MZ mgh-MZ mgo mgo-CM mgo-Latn-CM mi mi-Latn-NZ mi-NZ mk mk-Cyrl-MK mk-MK ml ml-IN ml-Mlym-IN mn mn-Cyrl-MN mn-MN mni mni-Beng mni-Beng-IN mni-IN mr mr-Deva-IN mr-IN ms ms-BN ms-ID ms-Latn-MY ms-MY ms-SG mt mt-Latn-MT mt-MT mua mua-CM mua-Latn-CM my my-MM my-Mymr-MM mzn mzn-Arab-IR mzn-IR naq naq-Latn-NA naq-NA nb nb-Latn-NO nb-NO nb-SJ nd nd-Latn-ZW nd-ZW nds nds-DE nds-Latn-DE nds-NL ne ne-Deva-NP ne-IN ne-NP nl nl-AW nl-BE nl-BQ nl-CW nl-Latn-NL nl-NL nl-SR nl-SX nmg nmg-CM nmg-Latn-CM nn nn-Latn-NO nn-NO nnh nnh-CM nnh-Latn-CM no no-Latn-NO no-NO nus nus-Latn-SS nus-SS nyn nyn-Latn-UG nyn-UG om om-ET om-KE om-Latn-ET or or-IN or-Orya-IN os os-Cyrl-GE os-GE os-RU pa pa-Arab pa-Arab-PK pa-Guru pa-Guru-IN pa-IN pa-PK pcm pcm-Latn-NG pcm-NG pl pl-Latn-PL pl-PL ps ps-AF ps-Arab-AF ps-PK pt pt-AO pt-BR pt-"
			"CH pt-CV pt-GQ pt-GW pt-LU pt-Latn-BR pt-MO pt-MZ pt-PT pt-ST pt-TL qu qu-BO qu-EC qu-Latn-PE qu-PE rm rm-CH rm-Latn-CH rn rn-BI rn-Latn-BI ro ro-Latn-RO ro-MD ro-RO rof rof-Latn-TZ rof-TZ ru ru-BY ru-Cyrl-RU ru-KG ru-KZ ru-MD ru-RU ru-UA rw rw-Latn-RW rw-RW rwk rwk-Latn-TZ rwk-TZ sa sa-Deva-IN sa-IN sah sah-Cyrl-RU sah-RU saq saq-KE saq-Latn-KE sat sat-IN sat-Olck sat-Olck-IN sbp sbp-Latn-TZ sbp-TZ sd sd-Arab sd-Arab-PK sd-Deva sd-Deva-IN sd-IN sd-PK se se-FI se-Latn-NO se-NO se-SE seh seh-Latn-MZ seh-MZ ses ses-Latn-ML ses-ML sg sg-CF sg-Latn-CF shi shi-Latn shi-Latn-MA shi-MA shi-Tfng shi-Tfng-MA si si-LK si-Sinh-LK sk sk-Latn-SK sk-SK sl sl-Latn-SI sl-SI smn smn-FI smn-Latn-FI sn sn-Latn-ZW sn-ZW so so-DJ so-ET so-KE so-Latn-SO so-SO sq sq-AL sq-Latn-AL sq-MK sq-XK sr sr-Cyrl sr-Cyrl-BA sr-Cyrl-ME sr-Cyrl-RS sr-Cyrl-XK sr-Latn sr-Latn-BA sr-Latn-ME sr-Latn-RS sr-Latn-XK sr-ME sr-RS su su-ID su-Latn su-Latn-ID sv sv-AX sv-FI sv-Latn-SE sv-SE sw sw-CD sw-KE sw-Latn-TZ sw-TZ sw-UG ta ta-IN ta-LK ta-MY ta-SG "
			"ta-Taml-IN te te-IN te-Telu-IN teo teo-KE teo-Latn-UG teo-UG tg tg-Cyrl-TJ tg-TJ th th-TH th-Thai-TH ti ti-ER ti-ET ti-Ethi-ET tk tk-Latn-TM tk-TM to to-Latn-TO to-TO tr tr-CY tr-Latn-TR tr-TR tt tt-Cyrl-RU tt-RU twq twq-Latn-NE twq-NE tzm tzm-Latn-MA tzm-MA ug ug-Arab-CN ug-CN uk uk-Cyrl-UA uk-UA ur ur-Arab-PK ur-IN ur-PK uz uz-AF uz-Arab uz-Arab-AF uz-Cyrl uz-Cyrl-UZ uz-Latn uz-Latn-UZ uz-UZ vai vai-LR vai-Latn vai-Latn-LR vai-Vaii vai-Vaii-LR vi vi-Latn-VN vi-VN vun vun-Latn-TZ vun-TZ wae wae-CH wae-Latn-CH wo wo-Latn-SN wo-SN xh xh-Latn-ZA xh-ZA xog xog-Latn-UG xog-UG yav yav-CM yav-Latn-CM yi yi-001 yi-Hebr-001 yo yo-BJ yo-Latn-NG yo-NG yue yue-CN yue-HK yue-Hans yue-Hans-CN yue-Hant yue-Hant-HK zgh zgh-MA zgh-Tfng-MA zh zh-CN zh-HK zh-Hans zh-Hans-CN zh-Hans-HK zh-Hans-MO zh-Hans-SG zh-Hant zh-Hant-HK zh-Hant-MO zh-Hant-TW zh-MO zh-TW zu zu-Latn-ZA zu-ZA"_s);
	}
}

CLDRLocaleDataMetaInfo::CLDRLocaleDataMetaInfo() {
}

$Class* CLDRLocaleDataMetaInfo::load$($String* name, bool initialize) {
	$loadClass(CLDRLocaleDataMetaInfo, name, initialize, &_CLDRLocaleDataMetaInfo_ClassInfo_, clinit$CLDRLocaleDataMetaInfo, allocate$CLDRLocaleDataMetaInfo);
	return class$;
}

$Class* CLDRLocaleDataMetaInfo::class$ = nullptr;

				} // provider
			} // cldr
		} // resources
	} // util
} // sun