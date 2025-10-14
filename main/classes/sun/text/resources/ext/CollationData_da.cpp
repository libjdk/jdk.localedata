#include <sun/text/resources/ext/CollationData_da.h>

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

$MethodInfo _CollationData_da_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData_da::*)()>(&CollationData_da::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_da_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_da",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_da_MethodInfo_
};

$Object* allocate$CollationData_da($Class* clazz) {
	return $of($alloc(CollationData_da));
}

void CollationData_da::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_da::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& A;\u00c1;\u00c0;\u00c2,a;\u00e1;\u00e0;\u00e2<B,b<C;\u00c7,c;\u00e7<D;\u00d0;\u0110,d;\u00f0;\u0111<E;\u00c9;\u00c8;\u00ca;\u00cb,e;\u00e9;\u00e8;\u00ea;\u00eb<F,f <G,g <H,h<I;\u00cd,i;\u00ed<J,j <K,k <L,l <M,m <N,n<O;\u00d3;\u00d4,o;\u00f3;\u00f4<P,p <Q,q <R,r <S,s <T,t<U,u <V,v <W,w <X,x<Y;\u00dd;U\u0308,y;\u00fd;u\u0308<Z,z<\u00c6,\u00e6;\u00c6\u0301,\u00e6\u0301;A\u0308,a\u0308 <\u00d8,\u00f8 ;\u00d8\u0301,\u00f8\u0301;O\u0308,o\u0308 ;O\u030b,o\u030b< \u00c5 , \u00e5;\u00c5\u0301,\u00e5\u0301, AA , Aa , aA , aa & ss;\u00df& th, \u00fe & th, \u00de & oe, \u0153 & oe, \u0152 "_s)
	})});
}

CollationData_da::CollationData_da() {
}

$Class* CollationData_da::load$($String* name, bool initialize) {
	$loadClass(CollationData_da, name, initialize, &_CollationData_da_ClassInfo_, allocate$CollationData_da);
	return class$;
}

$Class* CollationData_da::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun