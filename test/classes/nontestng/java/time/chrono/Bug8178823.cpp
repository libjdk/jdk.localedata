#include <nontestng/java/time/chrono/Bug8178823.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/chrono/HijrahChronology.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HijrahChronology = ::java::time::chrono::HijrahChronology;

namespace nontestng {
	namespace java {
		namespace time {
			namespace chrono {

$MethodInfo _Bug8178823_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8178823::*)()>(&Bug8178823::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug8178823::main))},
	{}
};

$ClassInfo _Bug8178823_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"nontestng.java.time.chrono.Bug8178823",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug8178823_MethodInfo_
};

$Object* allocate$Bug8178823($Class* clazz) {
	return $of($alloc(Bug8178823));
}

void Bug8178823::init$() {
}

void Bug8178823::main($StringArray* args) {
	$init($HijrahChronology);
	$nc($HijrahChronology::INSTANCE)->isLeapYear(2017);
}

Bug8178823::Bug8178823() {
}

$Class* Bug8178823::load$($String* name, bool initialize) {
	$loadClass(Bug8178823, name, initialize, &_Bug8178823_ClassInfo_, allocate$Bug8178823);
	return class$;
}

$Class* Bug8178823::class$ = nullptr;

			} // chrono
		} // time
	} // java
} // nontestng