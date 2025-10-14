#include <sun/text/resources/ext/CollationData_hi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _CollationData_hi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_hi::*)()>(&CollationData_hi::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_hi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_hi",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_hi_MethodInfo_
};

$Object* allocate$CollationData_hi($Class* clazz) {
	return $of($alloc(CollationData_hi));
}

void CollationData_hi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_hi::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"< \u0901 < \u0902 < \u0903 < \u0905< \u0906 < \u0907 < \u0908 < \u0909< \u090a < \u090b < \u0960 < \u090e< \u090f < \u090c < \u0961 < \u0910< \u090d < \u0912 < \u0913 < \u0914< \u0911 < \u0915 < \u0958 < \u0916< \u0959 < \u0917 < \u095a < \u0918< \u0919 < \u091a < \u091b < \u091c< \u095b < \u091d < \u091e < \u091f< \u0920 < \u0921 < \u095c < \u0922< \u095d < \u0923 < \u0924 < \u0925< \u0926 < \u0927 < \u0928 < \u0929< \u092a < \u092b < \u095e < \u092c< \u092d < \u092e < \u092f < \u095f< \u0930 < \u0931 < \u0932 < \u0933< \u0934 < \u0935 < \u0936 < \u0937< \u0938 < \u0939 < \u093e < \u093f< \u0940 < \u0941 < \u0942 < \u0943< \u0944 < \u0946 < \u0947 < \u0948< \u0945 < \u094a < \u094b < \u094c< \u0949 < \u094d < \u093c < \u093d< \u0950 < \u0951 < \u0952 < \u0953< \u0954 < \u0962 < \u0963 < \u0964< \u0965 < \u0966 < \u0967 < \u0968< \u0969 < \u096a < \u096b < \u096c< \u096d < \u096e < \u096f < \u0970"_s)
	})});
}

CollationData_hi::CollationData_hi() {
}

$Class* CollationData_hi::load$($String* name, bool initialize) {
	$loadClass(CollationData_hi, name, initialize, &_CollationData_hi_ClassInfo_, allocate$CollationData_hi);
	return class$;
}

$Class* CollationData_hi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun