#include <sun/util/resources/cldr/ext/TimeZoneNames_mr.h>

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

$MethodInfo _TimeZoneNames_mr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_mr::*)()>(&TimeZoneNames_mr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_mr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_mr",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_mr_MethodInfo_
};

$Object* allocate$TimeZoneNames_mr($Class* clazz) {
	return $of($alloc(TimeZoneNames_mr));
}

void TimeZoneNames_mr::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_mr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\u0917\u094d\u0930\u0940\u0928\u093f\u091a \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"\u090f\u0915\u0930 \u092a\u094d\u0930\u092e\u093e\u0923\u0935\u0947\u0933"_s,
		""_s,
		u"\u0910\u0915\u0930 \u0917\u094d\u0930\u0940\u0937\u094d\u092e \u0935\u0947\u0933"_s,
		""_s,
		u"\u090f\u0915\u0930 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"\u090f\u092a\u093f\u092f\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u090f\u092a\u093f\u092f\u093e \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u090f\u092a\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"\u0915\u0941\u0915 \u092c\u0947\u091f\u0947 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u0941\u0915 \u092c\u0947\u091f\u0947 \u0905\u0930\u094d\u0927 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u0941\u0915 \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"\u0915\u094d\u092f\u0942\u092c\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094d\u092f\u0942\u092c\u093e \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094d\u092f\u0942\u092c\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"\u092b\u093f\u091c\u0940 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u093f\u091c\u0940 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u093f\u091c\u0940 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u0916\u093e\u0921\u0940 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"\u0939\u094b\u0935\u094d\u0939\u094d\u0921 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0939\u094b\u0935\u094d\u0939\u094d\u0921 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0939\u094b\u0935\u094d\u0939\u094d\u0921 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u0907\u0930\u093e\u0923 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0930\u093e\u0923 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0930\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"\u0928\u094d\u092f\u0941\u090f \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"\u0913\u092e\u094d\u0938\u094d\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0913\u092e\u094d\u0938\u094d\u0915 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0913\u092e\u094d\u0938\u094d\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"\u092a\u0947\u0930\u0941 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0947\u0930\u0941 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0947\u0930\u0941 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"\u091a\u0942\u0915 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"\u0935\u0947\u0915 \u092c\u0947\u091f \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\u091a\u093f\u0932\u0940 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091a\u093f\u0932\u0940 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091a\u093f\u0932\u0940 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u091a\u0940\u0928\u0940 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091a\u0940\u0928\u0940 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091a\u0940\u0928\u0940 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"\u0915\u0949\u0915\u094b\u0938 \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"\u0921\u0947\u0935\u094d\u0939\u093f\u0938 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u092d\u093e\u0930\u0924\u0940\u092f \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		"IST"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\u091c\u092a\u093e\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091c\u092a\u093e\u0928 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091c\u092a\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\u0915\u094b\u0930\u093f\u092f\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094b\u0930\u093f\u092f\u0928 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094b\u0930\u093f\u092f\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"\u0928\u0909\u0930\u0941 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"\u0928\u0947\u092a\u093e\u0933 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"\u092a\u0932\u093e\u090a \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"\u0938\u093e\u092e\u094b\u0906 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u093e\u092e\u094b\u0906 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u093e\u092e\u094b\u0906 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"\u0938\u094d\u092f\u094b\u0935\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"\u091f\u094b\u0902\u0917\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091f\u094b\u0902\u0917\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091f\u094b\u0902\u0917\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"\u0905\u0932\u093e\u0938\u094d\u0915\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u0932\u093e\u0938\u094d\u0915\u093e \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u0932\u093e\u0938\u094d\u0915\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"\u0905\u200d\u0945\u092e\u0947\u091d\u0949\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u200d\u0945\u092e\u0947\u091d\u0949\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u200d\u0945\u092e\u0947\u091d\u0949\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"\u0905\u0928\u093e\u0926\u0940\u0930 \u092a\u094d\u0930\u092e\u093e\u0923\u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u0928\u093e\u0926\u0940\u0930 \u0917\u094d\u0930\u0940\u0937\u094d\u092e\u0915\u093e\u0932\u0940\u0928 \u0935\u0947\u0933"_s,
		""_s,
		u"\u090f\u0928\u093e\u0921\u0940\u092f\u0930 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"\u0905\u200d\u0945\u091d\u094b\u0930\u0947\u0938 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u200d\u0945\u091d\u094b\u0930\u0947\u0938 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u200d\u0945\u091d\u094b\u0930\u0947\u0938 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"\u092d\u0942\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"\u092c\u094d\u0930\u0941\u0928\u0947\u0908 \u0926\u093e\u0930\u0942\u0938\u0932\u093e\u092e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"\u0907\u0938\u094d\u091f\u0930 \u092c\u0947\u091f \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0938\u094d\u091f\u0930 \u092c\u0947\u091f \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0938\u094d\u091f\u0930 \u092c\u0947\u091f \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\u0917\u092f\u093e\u0928\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u0907\u0938\u094d\u0930\u093e\u092f\u0932 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0938\u094d\u0930\u093e\u092f\u0932 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0938\u094d\u0930\u093e\u092f\u0932"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"\u0915\u094b\u0938\u094d\u0930\u093e\u0908 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"\u092e\u0949\u0938\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\u092e\u0949\u0938\u094d\u0915\u094b \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0949\u0938\u094d\u0915\u094b \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0949\u0938\u094d\u0915\u094b \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"\u092a\u094b\u0928\u0945\u092a\u0947 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"\u0938\u093e\u092e\u0930\u093e \u092a\u094d\u0930\u092e\u093e\u0923\u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u093e\u092e\u0930\u093e \u0917\u094d\u0930\u0940\u0937\u094d\u092e\u0915\u093e\u0932\u0940\u0928 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u092e\u093e\u0930\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"\u0924\u093e\u0939\u093f\u0924\u0940 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"\u0924\u0948\u092a\u0947\u0908 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0924\u0948\u092a\u0947\u0908 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0924\u0948\u092a\u0947\u0908 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"\u0924\u0941\u0935\u093e\u0932\u0942 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"\u0935\u094d\u0939\u094b\u0938\u094d\u091f\u0949\u0915 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"\u0935\u0949\u0932\u093f\u0938 \u0906\u0923\u093f \u092b\u0941\u091f\u0941\u0928\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u0905\u0930\u0947\u092c\u093f\u092f\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u0930\u0947\u092c\u093f\u092f\u0928 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u0930\u0947\u092c\u093f\u092f\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\u0906\u0930\u094d\u092e\u0947\u0928\u093f\u092f\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0906\u0930\u094d\u092e\u0947\u0928\u093f\u092f\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0906\u0930\u094d\u092e\u0947\u0928\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"\u092c\u094b\u0932\u093f\u0935\u094d\u0939\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"\u091a\u0945\u0925\u092e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091a\u0945\u0925\u092e \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091a\u0945\u0925\u092e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"\u0938\u092e\u0928\u094d\u0935\u093f\u0924 \u0935\u0948\u0936\u094d\u0935\u093f\u0915 \u0935\u0947\u0933"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\u0907\u0915\u094d\u0935\u0947\u0921\u094b\u0930 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"\u0917\u0945\u092e\u094d\u092c\u093f\u092f\u0930 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u091c\u0949\u0930\u094d\u091c\u093f\u092f\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091c\u0949\u0930\u094d\u091c\u093f\u092f\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u091c\u0949\u0930\u094d\u091c\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\u0907\u0930\u094d\u0915\u0941\u0924\u094d\u0938\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0930\u094d\u0915\u0941\u0924\u094d\u0938\u0915 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0907\u0930\u094d\u0915\u0941\u0924\u094d\u0938\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"\u092e\u0945\u0917\u093e\u0921\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0945\u0917\u093e\u0921\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0945\u0917\u093e\u0921\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"\u092e\u094d\u092f\u093e\u0928\u092e\u093e\u0930 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"\u0928\u0949\u0930\u092b\u094b\u0915 \u092c\u0947\u091f \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u0949\u0930\u092b\u094b\u0915 \u092c\u0947\u091f \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u0949\u0930\u092b\u094b\u0915 \u092c\u0947\u091f \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\u092b\u0930\u094d\u0928\u093e\u0902\u0921\u094b \u0926\u0940 \u0928\u094b\u0930\u094b\u0928\u094d\u0939\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u0930\u094d\u0928\u093e\u0902\u0921\u094b \u0926\u0940 \u0928\u094b\u0930\u094b\u0928\u094d\u0939\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u0930\u094d\u0928\u093e\u0902\u0921\u094b \u0926\u0940 \u0928\u094b\u0930\u094b\u0928\u094d\u0939\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"\u0930\u093f\u092f\u0941\u0928\u093f\u092f\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"\u0930\u094b\u0925\u0947\u0930\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"\u0938\u094b\u0932\u094b\u092e\u0949\u0928 \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"\u091f\u094b\u0915\u0947\u0932\u093e\u090a \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"\u0909\u0930\u0941\u0917\u094d\u0935\u0947 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0909\u0930\u0941\u0917\u094d\u0935\u0947 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0909\u0930\u0941\u0917\u094d\u0935\u0947 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"\u0935\u093e\u0928\u0941\u0906\u0924\u0941 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u093e\u0928\u0941\u0906\u0924\u0941 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u093e\u0928\u0941\u0906\u0924\u0941 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\u092f\u093e\u0915\u0941\u0924\u094d\u0938\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092f\u093e\u0915\u0941\u0924\u094d\u0938\u0915 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092f\u093e\u0915\u0941\u0924\u094d\u0938\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\u0905\u091f\u0932\u093e\u0902\u091f\u093f\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u091f\u0932\u093e\u0902\u091f\u093f\u0915 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u091f\u0932\u093e\u0902\u091f\u093f\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"\u092c\u094d\u0930\u093e\u091d\u093f\u0932\u093f\u092f\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092c\u094d\u0930\u093e\u091d\u093f\u0932\u093f\u092f\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092c\u094d\u0930\u093e\u091d\u093f\u0932\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"\u091a\u093e\u092e\u094b\u0930\u094b \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"\u0915\u094b\u0932\u0902\u092c\u093f\u092f\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094b\u0932\u0902\u092c\u093f\u092f\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094b\u0932\u0902\u092c\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"\u092b\u0949\u0915\u0932\u0902\u0921 \u092c\u0947\u091f\u0947 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u0949\u0915\u0932\u0902\u0921 \u092c\u0947\u091f\u0947 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u0949\u0915\u0932\u0902\u0921 \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"\u092e\u0932\u0947\u0936\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\u092e\u093e\u0932\u0926\u093f\u0935 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"\u0909\u0932\u093e\u0928 \u092c\u093e\u091f\u094b\u0930 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0909\u0932\u093e\u0928 \u092c\u093e\u091f\u094b\u0930 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0909\u0932\u093e\u0928 \u092c\u093e\u091f\u094b\u0930 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\u092a\u093e\u0915\u093f\u0938\u094d\u0924\u093e\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u093e\u0915\u093f\u0938\u094d\u0924\u093e\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u093e\u0915\u093f\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"\u092a\u0945\u0930\u093e\u0917\u094d\u0935\u0947 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0945\u0930\u093e\u0917\u094d\u0935\u0947 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0945\u0930\u093e\u0917\u094d\u0935\u0947 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"\u092a\u093f\u091f\u0915\u0948\u0930\u094d\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"\u0938\u0916\u0932\u093f\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u0916\u0932\u093f\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u0916\u0932\u093f\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\u0938\u0941\u0930\u093f\u0928\u093e\u092e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"\u0905\u0930\u094d\u091c\u0947\u0902\u091f\u093f\u0928\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u0930\u094d\u091c\u0947\u0902\u091f\u093f\u0928\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u0930\u094d\u091c\u0947\u0902\u091f\u093f\u0928\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"\u0916\u094d\u0930\u093f\u0938\u092e\u0938 \u092c\u0947\u091f \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\u0917\u0945\u0932\u093e\u092a\u093e\u0917\u094b\u0938 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"\u0939\u093e\u0901\u0917 \u0915\u093e\u0901\u0917 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0939\u093e\u0901\u0917 \u0915\u093e\u0901\u0917 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0939\u093e\u0901\u0917 \u0915\u093e\u0901\u0917 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"\u0907\u0902\u0921\u094b\u091a\u093e\u092f\u0928\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"\u092a\u0947\u091f\u094d\u0930\u094b\u092a\u093e\u0935\u094d\u0939\u0932\u094b\u0938\u094d\u0915- \u0915\u093e\u092e\u091a\u093e\u091f\u094d\u0938\u094d\u0915\u0940 \u092a\u094d\u0930\u092e\u093e\u0923\u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0947\u091f\u094d\u0930\u094b\u092a\u093e\u0935\u094d\u0939\u0932\u094b\u0938\u094d\u0915- \u0915\u093e\u092e\u091a\u093e\u091f\u094d\u0938\u094d\u0915\u0940 \u0917\u094d\u0930\u0940\u0937\u094d\u092e\u0915\u093e\u0932\u0940\u0928 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0947\u091f\u094d\u0930\u094b\u092a\u093e\u0935\u094d\u0939\u0932\u094b\u0938\u094d\u0915- \u0915\u093e\u092e\u091a\u093e\u091f\u094d\u0938\u094d\u0915\u0940 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"\u0915\u093f\u0930\u0917\u093f\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"\u0932\u0949\u0930\u094d\u0921 \u0939\u094b\u0935\u0947 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0932\u0949\u0930\u094d\u0921 \u0939\u094b\u0935\u0947 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0932\u0949\u0930\u094d\u0921 \u0939\u094b\u0935\u0947 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"\u092e\u093e\u0930\u094d\u0915\u094d\u0935\u0947\u0938\u093e\u0938 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"\u092e\u0949\u0930\u0940\u0936\u0938 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0949\u0930\u0940\u0936\u0938 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0949\u0930\u0940\u0936\u0938 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"\u0938\u093f\u0902\u0917\u093e\u092a\u0942\u0930 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"\u0935\u094d\u0939\u0947\u0928\u0947\u091d\u0941\u090f\u0932\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"\u0935\u094d\u0939\u094b\u0932\u094d\u0917\u094b\u0917\u094d\u0930\u093e\u0921 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u094d\u0939\u094b\u0932\u094d\u0917\u094b\u0917\u094d\u0930\u093e\u0921 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u094d\u0939\u094b\u0932\u094d\u0917\u094b\u0917\u094d\u0930\u093e\u0921 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\u0905\u091d\u0930\u092c\u0948\u091c\u093e\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u091d\u0930\u092c\u0948\u091c\u093e\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0905\u091d\u0930\u092c\u0948\u091c\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"\u092c\u093e\u0902\u0917\u0932\u093e\u0926\u0947\u0936 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092c\u093e\u0902\u0917\u0932\u093e\u0926\u0947\u0936 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092c\u093e\u0902\u0917\u0932\u093e\u0926\u0947\u0936 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"\u0915\u0947\u092a \u0935\u094d\u0939\u0930\u094d\u0921\u0947 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u0947\u092a \u0935\u094d\u0939\u0930\u094d\u0921\u0947 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u0947\u092a \u0935\u094d\u0939\u0930\u094d\u0921\u0947 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935 \u0924\u093f\u092e\u094b\u0930 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"\u0938\u0947\u0936\u0947\u0932\u094d\u0938 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"\u0924\u093e\u091c\u093f\u0915\u093f\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"\u0909\u091d\u092c\u0947\u0915\u093f\u0938\u094d\u0924\u093e\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0909\u091d\u092c\u0947\u0915\u093f\u0938\u094d\u0924\u093e\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0909\u091d\u092c\u0947\u0915\u093f\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\u0905\u092b\u0917\u093e\u0923\u093f\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"\u0915\u094d\u0930\u093e\u0938\u094d\u0928\u094b\u092f\u093e\u0930\u094d\u0938\u094d\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094d\u0930\u093e\u0938\u094d\u0928\u094b\u092f\u093e\u0930\u094d\u0915\u094d\u0938 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u094d\u0930\u093e\u0938\u094d\u0928\u094b\u092f\u093e\u0930\u094d\u0938\u094d\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u0928\u094d\u092f\u0942\u091d\u0940\u0932\u0902\u0921 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094d\u092f\u0942\u091d\u0940\u0932\u0902\u0921 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094d\u092f\u0942\u091d\u0940\u0932\u0902\u0921 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"\u0928\u094b\u0935\u094b\u0938\u093f\u092c\u093f\u0930\u094d\u0938\u094d\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094b\u0935\u094b\u0938\u093f\u092c\u093f\u0930\u094d\u0938\u094d\u0915 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094b\u0935\u094b\u0938\u093f\u092c\u093f\u0930\u094d\u0938\u094d\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"\u092b\u093f\u0932\u093f\u092a\u093e\u0907\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u093f\u0932\u093f\u092a\u093e\u0907\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092b\u093f\u0932\u093f\u092a\u093e\u0907\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"\u0935\u094d\u0932\u093e\u0926\u093f\u0935\u094b\u0938\u094d\u0924\u094b\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u094d\u0932\u093e\u0926\u093f\u0935\u094b\u0938\u094d\u0924\u094b\u0915 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u094d\u0932\u093e\u0926\u093f\u0935\u094b\u0938\u094d\u0924\u094b\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"\u0939\u093f\u0902\u0926\u092e\u0939\u093e\u0938\u093e\u0917\u0930 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"\u0932\u093e\u0907\u0928 \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"\u0928\u094d\u092f\u0942 \u092b\u093e\u0909\u0902\u0921\u0932\u0902\u0921 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094d\u092f\u0942 \u092b\u093e\u0909\u0902\u0921\u0932\u0902\u0921 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094d\u092f\u0942 \u092b\u093e\u0909\u0902\u0921\u0932\u0902\u0921 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"\u0924\u0941\u0930\u094d\u0915\u092e\u0947\u0928\u093f\u0938\u094d\u0924\u093e\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0924\u0941\u0930\u094d\u0915\u092e\u0947\u0928\u093f\u0938\u094d\u0924\u093e\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0924\u0941\u0930\u094d\u0915\u092e\u0947\u0928\u093f\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"\u092b\u094d\u0930\u0947\u0902\u091a \u0917\u092f\u093e\u0928\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"\u0928\u094d\u092f\u0942 \u0915\u0945\u0932\u0947\u0921\u094b\u0928\u093f\u092f\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094d\u092f\u0942 \u0915\u0945\u0932\u0947\u0921\u094b\u0928\u093f\u092f\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0928\u094d\u092f\u0942 \u0915\u0945\u0932\u0947\u0921\u094b\u0928\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"\u0926\u0915\u094d\u0937\u093f\u0923 \u091c\u0949\u0930\u094d\u091c\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"\u092f\u0947\u0915\u0924\u0930\u093f\u0928\u092c\u0930\u094d\u0917 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092f\u0947\u0915\u0924\u0930\u093f\u0928\u092c\u0930\u094d\u0917 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092f\u0947\u0915\u0924\u0930\u093f\u0928\u092c\u0930\u094d\u0917 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"\u092e\u0927\u094d\u200d\u092f \u0906\u092b\u094d\u0930\u093f\u0915\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935 \u0906\u092b\u094d\u0930\u093f\u0915\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0906\u092b\u094d\u0930\u093f\u0915\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0906\u092b\u094d\u0930\u093f\u0915\u093e \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0906\u092b\u094d\u0930\u093f\u0915\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"\u0921\u094d\u092f\u0941\u092e\u0949\u0928\u094d\u091f-\u0921\u094d\u092f\u0941\u0930\u094d\u0935\u093f\u0932 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u092e\u0927\u094d\u200d\u092f \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0927\u094d\u200d\u092f \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0927\u094d\u200d\u092f \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935 \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0942\u0930\u094d\u0935 \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0942\u0930\u094d\u0935 \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u092f\u0941\u0930\u094b\u092a\u093f\u092f\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u094b \u092a\u0945\u0938\u093f\u092b\u093f\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u094b \u092a\u0945\u0938\u093f\u092b\u093f\u0915 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u094b \u092a\u0945\u0938\u093f\u092b\u093f\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"\u0926\u0915\u094d\u0937\u093f\u0923 \u0906\u092b\u094d\u0930\u093f\u0915\u093e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u0915\u0947\u0902\u0926\u094d\u0930\u0940\u092f \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u0947\u0902\u0926\u094d\u0930\u0940\u092f \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0915\u0947\u0902\u0926\u094d\u0930\u0940\u092f \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u092a\u094c\u0930\u094d\u0935\u093e\u0924\u094d\u092f \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u094c\u0930\u094d\u0935\u093e\u0924\u094d\u092f \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u094c\u0930\u094d\u0935\u093e\u0924\u094d\u092f \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u092a\u0945\u0938\u093f\u092b\u093f\u0915 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0945\u0938\u093f\u092b\u093f\u0915 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0945\u0938\u093f\u092b\u093f\u0915 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"\u092b\u094d\u0930\u0947\u0902\u091a \u0926\u0915\u094d\u0937\u093f\u0923 \u0906\u0923\u093f \u0905\u0902\u091f\u093e\u0930\u094d\u0915\u094d\u091f\u093f\u0915 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"\u0917\u093f\u0932\u094d\u092c\u0930\u094d\u091f \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"\u0939\u0935\u093e\u0908-\u0905\u0932\u0942\u0936\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0939\u0935\u093e\u0908-\u0905\u0932\u0942\u0936\u0928 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0939\u0935\u093e\u0908-\u0905\u0932\u0942\u0936\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"\u200d\u092b\u094b\u0928\u093f\u0915\u094d\u0938 \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"\u0938\u0947\u0902\u091f \u092a\u093f\u092f\u0930\u0947 \u0906\u0923\u093f \u092e\u093f\u0915\u094d\u0935\u0947\u0932\u094b\u0928 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u0947\u0902\u091f \u092a\u093f\u092f\u0930\u0947 \u0906\u0923\u093f \u092e\u093f\u0915\u094d\u0935\u0947\u0932\u094b\u0928 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0938\u0947\u0902\u091f \u092a\u093f\u092f\u0930 \u0906\u0923\u093f \u092e\u093f\u0915\u094d\u0935\u0947\u0932\u094b\u0928 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u092a\u0930\u094d\u0935\u0924\u0940\u092f \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0930\u094d\u0935\u0924\u0940\u092f \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0930\u094d\u0935\u0924\u0940\u092f \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"\u092e\u093e\u0930\u094d\u0936\u0932 \u092c\u0947\u091f\u0947 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"\u0935\u093e\u092f\u0935\u094d\u092f \u092e\u0947\u0915\u094d\u0938\u093f\u0915\u094b \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u093e\u092f\u0935\u094d\u092f \u092e\u0947\u0915\u094d\u0938\u093f\u0915\u094b \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0935\u093e\u092f\u0935\u094d\u092f \u092e\u0947\u0915\u094d\u0938\u093f\u0915\u094b \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"\u092a\u093e\u092a\u0941\u0906 \u0928\u094d\u092f\u0942 \u0917\u093f\u0928\u0940 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092e\u0927\u094d\u092f \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092e\u0927\u094d\u092f \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092e\u0927\u094d\u092f \u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092a\u0942\u0930\u094d\u0935 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092a\u0942\u0930\u094d\u0935 \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0942\u0930\u094d\u0935 \u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092a\u0936\u094d\u091a\u093f\u092e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092a\u0936\u094d\u091a\u093f\u092e \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935 \u0917\u094d\u0930\u0940\u0928\u0932\u0901\u0921 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0942\u0930\u094d\u0935 \u0917\u094d\u0930\u0940\u0928\u0932\u0901\u0921 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0942\u0930\u094d\u0935 \u0917\u094d\u0930\u0940\u0928\u0932\u0901\u0921 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0917\u094d\u0930\u0940\u0928\u0932\u0901\u0921 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0917\u094d\u0930\u0940\u0928\u0932\u0901\u0921 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
		""_s,
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0917\u094d\u0930\u0940\u0928\u0932\u0901\u0921 \u0935\u0947\u0933"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"\u092e\u0927\u094d\u200d\u092f \u0907\u0902\u0921\u094b\u0928\u0947\u0936\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"\u092a\u094c\u0930\u094d\u0935\u093e\u0924\u094d\u092f \u0907\u0902\u0921\u094b\u0928\u0947\u0936\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"\u092a\u0936\u094d\u091a\u093f\u092e\u0940 \u0907\u0902\u0921\u094b\u0928\u0947\u0936\u093f\u092f\u093e \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"\u092a\u0942\u0930\u094d\u0935 \u0915\u091d\u093e\u0915\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"\u092a\u0936\u094d\u091a\u093f\u092e \u0915\u091d\u093e\u0915\u0938\u094d\u0924\u093e\u0928 \u0935\u0947\u0933"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092e\u0927\u094d\u092f-\u092a\u0936\u094d\u091a\u093f\u092e \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092e\u0927\u094d\u092f-\u092a\u0936\u094d\u091a\u093f\u092e \u0938\u0942\u0930\u094d\u092f\u092a\u094d\u0930\u0915\u093e\u0936 \u0935\u0947\u0933"_s,
		""_s,
		u"\u0911\u0938\u094d\u091f\u094d\u0930\u0947\u0932\u093f\u092f\u0928 \u092e\u0927\u094d\u092f-\u092a\u0936\u094d\u091a\u093f\u092e \u0935\u0947\u0933"_s,
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
				u"\u0917\u094d\u0930\u0940\u0928\u093f\u091a \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
				""_s,
				u"\u0906\u092f\u0930\u093f\u0936 \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
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
				u"\u0917\u094d\u0930\u0940\u0928\u093f\u091a \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
				""_s,
				u"\u092c\u094d\u0930\u093f\u091f\u093f\u0936 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
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
				u"\u0917\u094d\u0930\u0940\u0928\u093f\u091a \u092a\u094d\u0930\u092e\u093e\u0923 \u0935\u0947\u0933"_s,
				""_s,
				u"\u092c\u094d\u0930\u093f\u091f\u093f\u0936 \u0909\u0928\u094d\u0939\u093e\u0933\u0940 \u0935\u0947\u0933"_s,
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
			$of("America/Eirunepe"_s),
			$of(Acre)
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
			$of("America/Rio_Branco"_s),
			$of(Acre)
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
			$of(u"\u090f\u0921\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"\u092c\u093e\u0915\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of(u"\u0921\u093f\u0932\u093f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"\u0917\u093e\u091d\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hovd"_s),
			$of(u"\u0939\u094b\u0935\u094d\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"\u0913\u092e\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Oral"_s),
			$of(u"\u0913\u0930\u0932"_s)
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
			$of(u"\u0905\u092e\u094d\u092e\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of(u"\u0905\u200d\u0945\u0915\u094d\u091f\u094c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"\u091a\u093f\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of(u"\u0922\u093e\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"\u0926\u0941\u092c\u0908"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"\u0915\u093e\u092c\u0942\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of(u"\u092e\u0915\u093e\u090a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of(u"\u0915\u0924\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of(u"\u0938\u0947\u0909\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of(u"\u091f\u094b\u0915\u093f\u092f\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tomsk"_s),
			$of(u"\u0924\u094b\u092e\u0938\u0915"_s)
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
			$of(u"\u091c\u0941\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"\u0932\u094b\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"\u0905\u0932\u094d\u092e\u093e\u091f\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"\u090f\u0928\u093e\u0921\u0940\u092f\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of(u"\u0905\u200d\u0945\u0915\u094d\u091f\u094b\u092c\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of(u"\u0905\u0924\u093f\u0930\u0949"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of(u"\u092c\u0948\u0930\u0941\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of(u"\u092c\u094d\u0930\u0941\u0928\u0947\u0908"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"\u0939\u0947\u092c\u094d\u0930\u0949\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of(u"\u0915\u0941\u0935\u0947\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of(u"\u092e\u0928\u093f\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of(u"\u092e\u0938\u094d\u0915\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of(u"\u0930\u093f\u092f\u093e\u0927"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"\u0939\u094b \u091a\u093f \u092e\u093f\u0928\u094d\u0939 \u0936\u0939\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of(u"\u0924\u0948\u092a\u0947\u0908"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of(u"\u0924\u0947\u0939\u0930\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"\u0909\u0930\u0941\u092e\u094d\u0915\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u0905\u091c\u094d\u091e\u093e\u0924 \u0936\u0939\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of(u"\u0915\u0940\u0935"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of(u"\u0911\u0938\u094d\u0932\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of(u"\u0930\u093f\u0917\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of(u"\u0930\u094b\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of(u"\u092e\u093e\u0939\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of(u"\u0905\u200d\u0945\u0915\u094d\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"\u0915\u0948\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of(u"\u0938\u0947\u0909\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"\u0921\u0915\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of(u"\u0932\u093e\u0917\u094b\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"\u091f\u092f\u0942\u0928\u093f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of(u"\u0905\u0921\u0945\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lima"_s),
			$of(u"\u0932\u0940\u092e\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nome"_s),
			$of(u"\u0928\u094b\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"\u092c\u0917\u0926\u093e\u0926"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"\u092c\u0947\u0939\u0930\u0940\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of(u"\u092c\u0901\u0915\u0949\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"\u092c\u0930\u094d\u0928\u094c\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"\u092c\u093f\u0936\u094d\u0915\u0947\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"\u0915\u094b\u0932\u0902\u092c\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"\u0908\u0930\u094d\u0915\u0941\u0924\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of(u"\u091c\u0915\u093e\u0930\u094d\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"\u0915\u0930\u093e\u091a\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of(u"\u0915\u0941\u091a\u093f\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"\u092e\u0947\u0917\u093e\u0921\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of(u"\u0928\u093f\u0915\u094b\u0938\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of(u"\u0930\u0902\u0917\u0942\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of(u"\u092c\u093f\u0932\u093f\u0938\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"\u0925\u093f\u0902\u092b\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"\u092f\u0915\u0941\u0924\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"\u092f\u0947\u0930\u0947\u0935\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kirov"_s),
			$of(u"\u0915\u093f\u0930\u094b\u0935"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of(u"\u092e\u093e\u0932\u094d\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of(u"\u092e\u093f\u0928\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Paris"_s),
			$of(u"\u092a\u0945\u0930\u093f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of(u"\u0938\u094b\u092b\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of(u"\u0935\u0921\u0942\u091d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of(u"\u0915\u094b\u0915\u094b\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"\u0905\u092a\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of(u"\u092b\u093f\u091c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of(u"\u0917\u0941\u0906\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of(u"\u0928\u094d\u092f\u0941\u090f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of(u"\u091a\u0942\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of(u"\u0935\u0947\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"\u090f\u0938\u094d\u092e\u093e\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of(u"\u092c\u093e\u092e\u0915\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of(u"\u092c\u093e\u0902\u0917\u0941\u0908"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of(u"\u092c\u0902\u091c\u0941\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of(u"\u092c\u093f\u0938\u093e\u0909"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of(u"\u0926\u094b\u0909\u0906\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of(u"\u0939\u0930\u093e\u0930\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of(u"\u0915\u0940\u0917\u093e\u0932\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of(u"\u0932\u0941\u0906\u0902\u0921\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of(u"\u0932\u0941\u0938\u093e\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Malabo"_s),
			$of(u"\u092e\u0932\u093e\u092c\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maputo"_s),
			$of(u"\u092e\u093e\u092a\u0941\u091f\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of(u"\u092e\u0938\u0947\u0930\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Niamey"_s),
			$of(u"\u0928\u093f\u092f\u093e\u092e\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of(u"\u0905\u0930\u0941\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of(u"\u092c\u0939\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of(u"\u092c\u0947\u0932\u0947\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of(u"\u092c\u094b\u0907\u0938\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jujuy"_s),
			$of(u"\u091c\u0941\u091c\u0941\u092f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sitka"_s),
			$of(u"\u0938\u093f\u091f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"\u0925\u0941\u0932\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"\u0905\u0936\u094d\u0917\u093e\u092c\u093e\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of(u"\u0915\u094b\u0932\u0915\u093e\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"\u0926\u092e\u093e\u0938\u094d\u0915\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"\u0926\u0941\u0936\u093e\u0928\u094d\u092c\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of(u"\u091c\u092f\u093e\u092a\u0941\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of(u"\u0915\u093e\u0920\u092e\u093e\u0902\u0921\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"\u0916\u0902\u0926\u093f\u0917\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of(u"\u092e\u0915\u0938\u094d\u0938\u093e\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qostanay"_s),
			$of(u"\u0915\u094b\u0938\u094d\u091f\u093e\u0928\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"\u0938\u093e\u0916\u093e\u0932\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of(u"\u0936\u093e\u0902\u0918\u093e\u092f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"\u0924\u093e\u0936\u094d\u0915\u0902\u0926"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"\u0909\u0938\u094d\u0924-\u0928\u0947\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"\u0905\u0925\u0947\u0928\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of(u"\u092c\u0930\u094d\u0932\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of(u"\u0921\u092c\u094d\u0932\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of(u"\u091c\u0930\u094d\u0938\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of(u"\u0932\u093f\u0938\u094d\u092c\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of(u"\u0932\u0902\u0921\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of(u"\u092e\u093e\u0926\u094d\u0930\u093f\u0926"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of(u"\u092e\u094b\u0928\u0945\u0915\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"\u092e\u0949\u0938\u094d\u0915\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of(u"\u092a\u094d\u0930\u093e\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"\u0938\u092e\u093e\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of(u"\u0938\u094d\u0915\u0949\u092a\u094d\u091c\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of(u"\u091f\u093f\u0930\u093e\u0928\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of(u"\u0935\u094d\u0939\u093f\u090f\u0928\u094d\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of(u"\u0935\u0949\u0930\u094d\u0938\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of(u"\u091d\u0945\u0917\u094d\u0930\u0947\u092c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"\u091d\u0941\u0930\u093f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"\u091a\u093e\u0917\u094b\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of(u"\u0915\u094b\u092e\u094b\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Efate"_s),
			$of(u"\u0907\u092b\u0947\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of(u"\u0928\u0909\u0930\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Palau"_s),
			$of(u"\u092a\u0932\u093e\u090a"_s)
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
			$of(u"\u0905\u092c\u093f\u0926\u094d\u091c\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of(u"\u0905\u0932\u094d\u091c\u093f\u0905\u0930\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of(u"\u0915\u094b\u0928\u093e\u0915\u094d\u0930\u093f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kampala"_s),
			$of(u"\u0915\u0902\u092a\u093e\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mbabane"_s),
			$of(u"\u0905\u0902\u092c\u093e\u092c\u093e\u0928\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of(u"\u0928\u0948\u0930\u094b\u092c\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"\u0924\u094d\u0930\u093f\u092a\u094b\u0932\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"\u092c\u0947\u0932\u093f\u091d\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"\u092c\u094b\u0917\u094b\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of(u"\u0915\u093e\u0928\u0915\u0941\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"\u0915\u0947\u092e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"\u0915\u0941\u092f\u093e\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"\u0921\u0949\u0938\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of(u"\u0921\u0947\u0928\u094d\u0935\u094d\u0939\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"\u0917\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of(u"\u0939\u0935\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"\u0907\u0928\u0941\u0935\u093f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of(u"\u091c\u094d\u092f\u0942\u0928\u094c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"\u0932\u093e \u092a\u093e\u091d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"\u092e\u0947\u0938\u0947\u0907\u0913"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of(u"\u092e\u0928\u094c\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of(u"\u092e\u0947\u0930\u093f\u0921\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of(u"\u0928\u0938\u093e\u090a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"\u092a\u0928\u093e\u092e\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of(u"\u0930\u0947\u0938\u093f\u092b\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"\u0930\u0947\u091c\u093f\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of(u"\u092b\u0945\u092e\u0917\u0941\u0938\u094d\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of(u"\u0939\u093e\u0901\u0917\u0915\u093e\u0901\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"\u091c\u0947\u0930\u0941\u0938\u0932\u0947\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"\u0915\u0945\u092e\u091a\u093e\u091f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of(u"\u092a\u093e\u0901\u091f\u093f\u092f\u093e\u0928\u093e\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of(u"\u092a\u094d\u092f\u094b\u0902\u0917\u092f\u093e\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of(u"\u0915\u093f\u091d\u0940\u0932\u094b\u0930\u094d\u0921\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"\u0938\u092e\u0930\u0915\u0902\u0926"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of(u"\u0938\u093f\u0902\u0917\u093e\u092a\u0942\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of(u"\u0935\u094d\u0939\u093f\u090f\u0928\u094d\u091f\u093e\u0907\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Andorra"_s),
			$of(u"\u0905\u0901\u0921\u094b\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of(u"\u0938\u093e\u0930\u093e\u0924\u094b\u0935"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"\u0924\u093e\u0932\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of(u"\u0935\u094d\u0939\u0945\u091f\u093f\u0915\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of(u"\u0935\u093f\u0932\u0928\u093f\u092f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of(u"\u092e\u093e\u092f\u094b\u091f\u094d\u091f\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"\u0930\u093f\u092f\u0941\u0928\u093f\u092f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of(u"\u0908\u0938\u094d\u091f\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of(u"\u0915\u094b\u0936\u093e\u092f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of(u"\u092e\u091c\u0941\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of(u"\u092e\u093f\u0921\u0935\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of(u"\u0928\u094c\u092e\u093f\u0906"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Ponape"_s),
			$of(u"\u092a\u094b\u0928\u092a\u0947\u0908"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of(u"\u0938\u0948\u092a\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of(u"\u0924\u093e\u0939\u093f\u0924\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of(u"\u0924\u093e\u0930\u093e\u0935\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of(u"\u0935\u093e\u0932\u093f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of(u"\u092c\u094d\u0932\u0901\u091f\u093e\u092f\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"\u091c\u093f\u092c\u094c\u091f\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"\u090f\u0932 \u0910\u0909\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of(u"\u092b\u094d\u0930\u0940\u091f\u093e\u0909\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of(u"\u0917\u093e\u092c\u094b\u0930\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"\u0916\u093e\u0930\u094d\u091f\u0941\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"\u0915\u093f\u0928\u094d\u0936\u093e\u0938\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of(u"\u092e\u094b\u0928\u0930\u094b\u0935\u094d\u0939\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of(u"\u0907\u0902\u091c\u093e\u092e\u0947\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"\u0938\u093e\u0913 \u0924\u094b\u092e\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"\u0935\u093f\u0902\u0921\u0939\u094b\u090f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"\u0905\u0901\u091f\u093f\u0917\u094d\u0935\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of(u"\u0915\u0930\u093e\u0915\u093e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of(u"\u0915\u093e\u092f\u0947\u0928\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"\u0936\u093f\u0915\u093e\u0917\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"\u0915\u0949\u0930\u094d\u0921\u094b\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of(u"\u0915\u094d\u0930\u0947\u0938\u094d\u091f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"\u0915\u094d\u092f\u0941\u0930\u093e\u0938\u093e\u0913"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of(u"\u0921\u0947\u091f\u094d\u0930\u0949\u0907\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Godthab"_s),
			$of(u"\u0928\u0942\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of(u"\u0917\u094d\u0930\u0947\u0928\u0947\u0921\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"\u0939\u0945\u0932\u093f\u092b\u0945\u0915\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of(u"\u0907\u0915\u093e\u0932\u0941\u0907\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of(u"\u091c\u092e\u0948\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of(u"\u092e\u093e\u0928\u093e\u0917\u0941\u0906"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of(u"\u092e\u0947\u0930\u0940\u0917\u094b\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of(u"\u092e\u0947\u0902\u0926\u094b\u091d\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"\u092e\u093e\u0901\u0915\u091f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"\u0928\u093f\u092a\u093f\u0917\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of(u"\u0928\u094b\u0930\u094b\u0928\u094d\u0939\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of(u"\u0913\u091c\u093f\u0928\u093e\u0917\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of(u"\u092b\u0949\u0928\u093f\u0915\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"\u0924\u093f\u091c\u0941\u0906\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"\u091f\u094b\u0930\u094b\u0902\u091f\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of(u"\u091f\u094b\u0930\u094d\u091f\u094b\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"\u092f\u0915\u0941\u0924\u093e\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"\u091a\u094b\u0908\u092c\u093e\u0932\u094d\u0938\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of(u"\u092a\u094d\u0928\u094b\u092e \u092a\u0947\u0928\u094d\u0939"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of(u"\u0905\u091d\u094b\u0930\u0947\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"\u0915\u0945\u0928\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"\u092b\u0945\u0930\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of(u"\u0909\u0915\u094d\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of(u"\u092a\u0930\u094d\u0925"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"\u092c\u0947\u0932\u0917\u094d\u0930\u0947\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"\u092c\u094d\u0930\u0941\u0938\u0947\u0932\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"\u092c\u0941\u0921\u093e\u092a\u0947\u0938\u094d\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of(u"\u092c\u0941\u0938\u093f\u0902\u091c\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"\u091a\u093f\u0938\u093f\u0928\u094c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of(u"\u0917\u094d\u0935\u0947\u0930\u094d\u0928\u0938\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"\u0939\u0947\u0932\u0938\u093f\u0902\u0915\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"\u0907\u0938\u094d\u0924\u0902\u092c\u0942\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of(u"\u0938\u093e\u0930\u093e\u091c\u0947\u0935\u094d\u0939\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"\u0909\u091d\u0939\u094b\u0930\u094b\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of(u"\u092e\u093e\u0932\u0926\u0940\u0935"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"\u091a\u0945\u091f\u0939\u0945\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of(u"\u092b\u093e\u0915\u093e\u0913\u092b\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of(u"\u0917\u0945\u092e\u094d\u092c\u093f\u092f\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Norfolk"_s),
			$of(u"\u0928\u0949\u0930\u092b\u094b\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bujumbura"_s),
			$of(u"\u092c\u0941\u091c\u0941\u0902\u092c\u0941\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"\u092e\u094b\u0917\u093e\u0926\u093f\u0936\u0941"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of(u"\u0905\u0901\u0917\u094d\u0935\u093f\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"\u0906\u0938\u0941\u0928\u094d\u0938\u093f\u092f\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"\u092c\u093e\u0930\u094d\u092c\u093e\u0921\u094b\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"\u0921\u094b\u092e\u093f\u0928\u093f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"\u090f\u0921\u092e\u093e\u0901\u091f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"\u092f\u0942\u0930\u0941\u0928\u0940\u092a\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of(u"\u092e\u093e\u091d\u093e\u0924\u0932\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of(u"\u092e\u093f\u0915\u094d\u0935\u0947\u0932\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of(u"\u0928\u094d\u092f\u0942\u092f\u0949\u0930\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"\u0930\u0947\u091c\u094b\u0932\u094d\u092f\u0942\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of(u"\u0938\u0901\u091f\u093e\u0930\u0947\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"\u0938\u0945\u0928\u094d\u091f\u093f\u090f\u0917\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"\u0938\u0947\u0902\u091f \u091c\u0949\u0928\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of(u"\u0938\u0947\u0902\u091f \u0915\u093f\u091f\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"\u0938\u0947\u0902\u091f \u0932\u0941\u0938\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of(u"\u0935\u093f\u0928\u0940\u092a\u0947\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of(u"\u0915\u0945\u0938\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"\u0921\u0947\u0935\u094d\u0939\u093f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of(u"\u0938\u094d\u092f\u094b\u0935\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of(u"\u091f\u094d\u0930\u094b\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"\u0915\u094d\u0930\u093e\u0938\u094d\u0928\u094b\u092f\u093e\u0930\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"\u0928\u094b\u0935\u094b\u0938\u093f\u092c\u093f\u0930\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"\u0909\u0932\u093e\u0928\u092c\u093e\u0924\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of(u"\u0935\u094d\u0932\u093e\u0926\u093f\u0935\u094b\u0938\u094d\u091f\u094b\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"\u092c\u0930\u094d\u092e\u0941\u0921\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of(u"\u092e\u0921\u0940\u092f\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of(u"\u0938\u094d\u091f\u0945\u0928\u0932\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of(u"\u0915\u0941\u0939\u094d\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of(u"\u0921\u093e\u0930\u094d\u0935\u093f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of(u"\u0939\u094b\u092c\u093e\u0930\u094d\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of(u"\u0938\u093f\u0921\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Amsterdam"_s),
			$of(u"\u0905\u200d\u0945\u092e\u0938\u094d\u091f\u0930\u0921\u0945\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"\u0906\u0938\u094d\u0924\u094d\u0930\u093e\u0916\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of(u"\u092c\u0941\u0916\u093e\u0930\u0947\u0938\u094d\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of(u"\u091c\u093f\u092c\u094d\u0930\u093e\u0932\u094d\u091f\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of(u"\u0932\u0941\u092c\u094d\u0932\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of(u"\u092e\u0930\u093f\u092f\u0947\u0939\u093e\u092e\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of(u"\u092a\u0949\u0921\u0917\u094b\u0930\u093f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of(u"\u0938\u094d\u091f\u0949\u0915\u0939\u094b\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"\u0909\u0932\u094d\u092f\u093e\u0928\u094b\u0935\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of(u"\u0935\u094d\u0939\u094b\u0932\u094d\u0917\u094b\u0917\u094d\u0930\u093e\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of(u"\u0916\u094d\u0930\u093f\u0938\u092e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of(u"\u0915\u0930\u0917\u094d\u092f\u0942\u0932\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of(u"\u092e\u0949\u0930\u093f\u0936\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of(u"\u0911\u0915\u0932\u0902\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of(u"\u092b\u0941\u0928\u093e\u092b\u0941\u0924\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of(u"\u0939\u094b\u0928\u094b\u0932\u0941\u0932\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of(u"\u091c\u094b\u0939\u093e\u0928\u094d\u0938\u094d\u091f\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of(u"\u092a\u093f\u091f\u0915\u0947\u0930\u094d\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of(u"\u0915\u0945\u0938\u093e\u092c\u094d\u0932\u093e\u0928\u094d\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of(u"\u0932\u093f\u092c\u0930\u0935\u094d\u0939\u093f\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of(u"\u0932\u0941\u092c\u0902\u092c\u093e\u0936\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"\u0928\u0941\u0935\u093e\u0915\u0938\u0941\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of(u"\u092a\u094b\u0930\u094d\u091f\u094b-\u0928\u094b\u0935\u094d\u0939\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of(u"\u0905\u0901\u0915\u0930\u0947\u091c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"\u0905\u0930\u093e\u0917\u093e\u092f\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of(u"\u092c\u094b\u0906 \u0935\u094d\u0939\u093f\u0938\u094d\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of(u"\u0915\u0945\u091f\u093e\u092e\u093e\u0930\u094d\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"\u091a\u093f\u0939\u0941\u0906\u0939\u0941\u0906"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of(u"\u092b\u094b\u0930\u094d\u091f\u093e\u0932\u0947\u091d\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"\u0917\u094d\u0932\u0947\u0938 \u0909\u092a\u0938\u093e\u0917\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"\u0917\u0942\u0938 \u0909\u092a\u0938\u093e\u0917\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"\u0917\u094d\u0935\u093e\u091f\u0947\u092e\u093e\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of(u"\u0917\u092f\u093e\u0915\u094d\u0935\u093f\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of(u"\u092e\u093e\u091f\u093e\u092e\u094b\u0930\u094b\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of(u"\u092e\u0947\u0928\u094b\u092e\u093f\u0928\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of(u"\u092e\u0949\u0928\u094d\u091f\u0947\u0930\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"\u0938\u093e\u0913 \u092a\u093e\u0935\u0932\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of(u"\u0938\u0947\u0902\u091f \u0925\u0949\u092e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of(u"\u0935\u094d\u0939\u0945\u0928\u0915\u0941\u0935\u094d\u0939\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"\u092e\u0949\u0938\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of(u"\u092a\u093e\u092e\u0947\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of(u"\u0935\u094b\u0938\u094d\u091f\u094b\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuala_Lumpur"_s),
			$of(u"\u0915\u094d\u0935\u093e\u0932\u093e\u0932\u0902\u092a\u0942\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of(u"\u0928\u094b\u0935\u094b\u0915\u0941\u091d\u094d\u0928\u0947\u0924\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of(u"\u092c\u094d\u0930\u093e\u0924\u093f\u0938\u094d\u0932\u093e\u0935\u094d\u0939\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"\u0915\u094b\u092a\u0947\u0928\u0939\u0947\u0917\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of(u"\u0932\u0915\u094d\u091d\u0947\u0902\u092c\u0930\u094d\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of(u"\u0938\u0945\u0928 \u092e\u0930\u093f\u0928\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"\u0938\u093f\u092e\u094d\u092b\u0930\u094b\u092a\u094b\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of(u"\u091d\u093e\u092a\u094b\u0930\u094b\u091d\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"\u090f\u0902\u0921\u0930\u092c\u0930\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of(u"\u0917\u0945\u0932\u093e\u092a\u093e\u0917\u094b\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of(u"\u0915\u094d\u0935\u093e\u091c\u093e\u0932\u0947\u0908\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of(u"\u092e\u093e\u0930\u0915\u094d\u0935\u093f\u0938\u093e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of(u"\u092a\u0945\u0917\u094b \u092a\u0945\u0917\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of(u"\u0930\u093e\u0930\u094b\u091f\u094b\u0902\u0917\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of(u"\u091f\u094b\u0902\u0917\u093e\u091f\u093e\u092a\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"\u0906\u0926\u093f\u0938 \u0905\u092c\u093e\u092c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of(u"\u092c\u094d\u0930\u093e\u091d\u093e\u0935\u094d\u0939\u093f\u0932\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of(u"\u0935\u093e\u0917\u0921\u0942\u0917\u0942"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"\u0915\u094b\u0938\u094d\u091f\u093e \u0930\u093f\u0915\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of(u"\u0917\u094d\u0930\u0901\u0921 \u091f\u0930\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of(u"\u0917\u094d\u0935\u093e\u0921\u0947\u0932\u094b\u0909\u092a\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of(u"\u0939\u0930\u094d\u092e\u094b\u0938\u093f\u0932\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of(u"\u0915\u094d\u0930\u093e\u0932\u0947\u0902\u0926\u093f\u091c\u093f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of(u"\u0932\u094d\u092f\u0941\u0907\u0938\u0935\u094d\u0939\u093f\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of(u"\u092e\u093e\u0930\u094d\u091f\u093f\u0928\u093f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Metlakatla"_s),
			$of(u"\u092e\u0947\u0924\u0932\u093e\u0915\u0924\u0932\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of(u"\u092e\u094b\u0928\u094d\u091f\u0947\u0935\u094d\u0939\u093f\u0921\u093f\u092f\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of(u"\u092e\u093e\u0901\u0928\u094d\u091f\u0938\u0947\u0930\u093e\u0924"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of(u"\u092a\u093e\u0930\u092e\u0930\u0940\u092c\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"\u0930\u093f\u092f\u094b \u092c\u094d\u0930\u093e\u0902\u0915\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of(u"\u0938\u0947\u0902\u091f \u0935\u093f\u0928\u094d\u0938\u0947\u0902\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of(u"\u0935\u094d\u0939\u093e\u0907\u091f\u0939\u0949\u0930\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of(u"\u092e\u0945\u0915\u094d\u092e\u0941\u0930\u0921\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of(u"\u0930\u094b\u0925\u0947\u0930\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"\u0938\u094d\u0930\u0947\u0926\u0928\u0947\u0915\u094b\u0932\u0940\u092e\u094d\u0938\u094d\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"\u092f\u0947\u0915\u094d\u0924\u0947\u0930\u093f\u0928\u092c\u0930\u094d\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"\u0930\u0947\u092f\u0915\u094d\u091c\u093e\u0935\u093f\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of(u"\u0938\u0947\u0902\u091f. \u0939\u0947\u0932\u0947\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of(u"\u090f\u0921\u0932\u0947\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of(u"\u092c\u094d\u0930\u093f\u0938\u094d\u092c\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of(u"\u0932\u093f\u0902\u0921\u0947\u092e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"\u0906\u092f\u0932 \u0911\u092b \u092e\u0945\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"\u0915\u0932\u093f\u0928\u093f\u0928\u0917\u094d\u0930\u093e\u0921"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of(u"\u0915\u093f\u0930\u093f\u0924\u093f\u092e\u093e\u0924\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of(u"\u091c\u094b\u0939\u093e\u0928\u094d\u0938\u092c\u0930\u094d\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"\u090f\u0932 \u0938\u093e\u0932\u094d\u0935\u093e\u0921\u094b\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of(u"\u092b\u094b\u0930\u094d\u091f \u0928\u0947\u0932\u094d\u0938\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of(u"\u0932\u0949\u0938 \u090f\u0902\u091c\u0947\u0932\u093f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"\u092e\u0947\u0915\u094d\u0938\u093f\u0915\u094b \u0938\u093f\u091f\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"\u092a\u0901\u0917\u0928\u093f\u0930\u0924\u0941\u0902\u0917"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of(u"\u092a\u094b\u0930\u094d\u091f\u094b \u0935\u0947\u0932\u094d\u0939\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of(u"\u092a\u094d\u092f\u0941\u090f\u0930\u094d\u0924\u094b \u0930\u093f\u0915\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"\u0930\u0947\u0928\u0940 \u0928\u0926\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"\u091f\u0947\u0917\u0941\u0938\u093f\u0917\u093e\u0932\u094d\u092a\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"\u0925\u0902\u0921\u0930 \u0909\u092a\u0938\u093e\u0917\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of(u"\u092f\u0932\u094b\u0928\u093e\u0907\u092b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of(u"\u0932\u093e\u0901\u0917\u0907\u092f\u0930\u092c\u0940\u092f\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of(u"\u0915\u0947\u092a \u0935\u094d\u0939\u0930\u094d\u0921\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of(u"\u0932\u0949\u0930\u094d\u0921 \u0939\u094b\u0935\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of(u"\u092e\u0947\u0932\u092c\u094b\u0930\u094d\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of(u"\u0905\u0902\u091f\u093e\u0928\u093e\u0928\u093e\u0930\u093f\u0935\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of(u"\u0917\u094d\u0935\u093e\u0921\u0932\u0915\u0928\u093e\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of(u"\u0926\u093e\u0930 \u090f \u0938\u0932\u093e\u092e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of(u"\u092c\u094d\u0932\u093e\u0902\u0915 \u0938\u0945\u092c\u0932\u094b\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of(u"\u092c\u094d\u092f\u0941\u0928\u094b\u0938 \u0906\u092f\u0930\u094d\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of(u"\u0915\u0945\u092e\u094d\u092a\u094b \u0917\u094d\u0930\u0901\u0921\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"\u0921\u0947\u0928\u094d\u092e\u093e\u0930\u094d\u0915\u0936\u0949\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"\u0921\u0949\u0938\u0928 \u0915\u094d\u0930\u0940\u0915"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of(u"\u0928\u0949\u0915\u094d\u0938, \u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"\u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e\u092a\u094b\u0932\u093f\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of(u"\u092a\u0941\u0902\u0924\u093e \u0905\u0930\u0940\u0928\u093e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"\u0930\u0945\u0928\u0915\u093f\u0928 \u0907\u0928\u0932\u0947\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of(u"\u0938\u093e\u0902\u0924\u093e \u0907\u0938\u093e\u092c\u0947\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"\u0907\u091f\u094b\u0915\u0949\u0930\u091f\u0949\u0930\u094d\u092e\u0940\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of(u"\u092e\u0945\u0915\u094d\u0935\u093e\u092f\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of(u"\u092c\u0949\u0917\u0945\u0928\u0935\u094d\u0939\u093f\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of(u"\u092a\u094b\u0930\u094d\u091f \u092e\u094b\u0930\u0947\u0938\u094d\u092c\u0947"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"\u0915\u0947\u0902\u092c\u094d\u0930\u093f\u091c \u0909\u092a\u0938\u093e\u0917\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"\u0905\u0945\u091f\u093f\u0915\u094b\u0915\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of(u"\u0935\u0947\u0935\u093e\u092f-\u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"\u0932\u094b\u0905\u0930 \u092a\u094d\u0930\u093f\u0928\u094d\u0938\u0938 \u0915\u094d\u0935\u093e\u0930\u094d\u091f\u0930"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"\u092a\u094b\u0930\u094d\u091f \u0911\u092b \u0938\u094d\u092a\u0947\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"\u0938\u0945\u0928\u094d\u091f\u094b \u0921\u094b\u092e\u093f\u0902\u0917\u094b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"\u0938\u0947\u0902\u091f \u092c\u093e\u0930\u094d\u0925\u0947\u0932\u0947\u092e\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"\u0938\u094d\u0935\u093f\u092b\u094d\u091f \u0915\u0930\u0902\u091f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of(u"\u092c\u094d\u0930\u094b\u0915\u0928 \u0939\u093f\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"\u092c\u093e\u0939\u093f\u092f\u093e \u092c\u093e\u0902\u0926\u0947\u0930\u093e\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of(u"\u092a\u094b\u0930\u094d\u091f-\u0914-\u092a\u094d\u0930\u093f\u0902\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"\u0926\u0915\u094d\u0937\u093f\u0923 \u091c\u0949\u0930\u094d\u091c\u093f\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of(u"\u0938\u0949\u0932\u094d\u0924\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of(u"\u092e\u093e\u0930\u0947\u0902\u0917\u094b, \u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of(u"\u0935\u093f\u0928\u092e\u0945\u0915, \u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of(u"\u091f\u0941\u0915\u0941\u092e\u093e\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of(u"\u0909\u0938\u094d\u0935\u093e\u0907\u092f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of(u"\u091f\u0947\u0932 \u0938\u093f\u091f\u0940, \u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of(u"\u0935\u093f\u0902\u0938\u0947\u0928\u0938, \u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"\u0921\u094d\u092f\u0941\u092e\u0949\u0928\u094d\u091f \u0921\u094d\u092f\u0941\u0930\u094d\u0935\u093f\u0932"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of(u"\u0932\u093e \u0930\u093f\u092f\u094b\u091c\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of(u"\u0938\u093e\u0928 \u091c\u0941\u0906\u0928"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of(u"\u0938\u093e\u0928 \u0932\u094d\u092f\u0941\u0907\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of(u"\u092a\u0940\u091f\u0930\u094d\u0938\u092c\u0930\u094d\u0917, \u0907\u0902\u0921\u093f\u092f\u093e\u0928\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of(u"\u092e\u093e\u0901\u091f\u093f\u0938\u0947\u0932\u094b, \u0915\u0947\u0902\u091f\u0941\u0915\u0940"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"\u092c\u094d\u092f\u0941\u0932\u093e\u0939, \u0909\u0924\u094d\u0924\u0930 \u0921\u0915\u094b\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"\u092e\u0927\u094d\u092f, \u0909\u0924\u094d\u0924\u0930 \u0921\u0915\u094b\u091f\u093e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of(u"\u0930\u093f\u092f\u094b \u0917\u0945\u0932\u0947\u0917\u0949\u0938"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of(u"\u0928\u094d\u092f\u0942 \u0938\u093e\u0932\u0947\u092e, \u0909\u0924\u094d\u0924\u0930 \u0921\u0915\u094b\u091f\u093e"_s)
		})
	}));
	return data;
}

TimeZoneNames_mr::TimeZoneNames_mr() {
}

$Class* TimeZoneNames_mr::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_mr, name, initialize, &_TimeZoneNames_mr_ClassInfo_, allocate$TimeZoneNames_mr);
	return class$;
}

$Class* TimeZoneNames_mr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun