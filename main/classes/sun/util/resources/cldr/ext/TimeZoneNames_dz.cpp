#include <sun/util/resources/cldr/ext/TimeZoneNames_dz.h>

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

$MethodInfo _TimeZoneNames_dz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_dz::*)()>(&TimeZoneNames_dz::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_dz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_dz",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_dz_MethodInfo_
};

$Object* allocate$TimeZoneNames_dz($Class* clazz) {
	return $of($alloc(TimeZoneNames_dz));
}

void TimeZoneNames_dz::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_dz::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f5d\u0f72\u0f46\u0f0b\u0f63\u0f74\u0f0b\u0f61\u0f7c\u0f51\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"\u0f40\u0f72\u0f60\u0f74\u0f0b\u0f56\u0fb7\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f72\u0f60\u0f74\u0f0b\u0f56\u0fb7\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f72\u0f60\u0f74\u0f0b\u0f56\u0fb7\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"\u0f42\u0f71\u0f63\u0f55\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"\u0f68\u0f72\u0f0b\u0f62\u0f71\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f72\u0f0b\u0f62\u0f71\u0f53\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f72\u0f0b\u0f62\u0f71\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"\u0f68\u0f7c\u0f58\u0f66\u0f40\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7c\u0f58\u0f66\u0f40\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7c\u0f58\u0f66\u0f40\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"\u0f54\u0f0b\u0f62\u0f74\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f0b\u0f62\u0f74\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f0b\u0f62\u0f74\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"\u0f45\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f45\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f45\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"\u0f62\u0f92\u0fb1\u0f0b\u0f53\u0f42\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f62\u0f92\u0fb1\u0f0b\u0f53\u0f42\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f62\u0f92\u0fb1\u0f0b\u0f53\u0f42\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"\u0f62\u0f92\u0fb1\u0f0b\u0f42\u0f62\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"\u0f47\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f47\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f47\u0f0b\u0f54\u0f71\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"\u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"\u0f53\u0f7a\u0f0b\u0f54\u0f71\u0f63\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"\u0f68\u0f0b\u0f63\u0f66\u0f72\u0f0b\u0f40\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f0b\u0f63\u0f66\u0f72\u0f0b\u0f40\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f0b\u0f63\u0f66\u0f72\u0f0b\u0f40\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"\u0f68\u0f7a\u0f0b\u0f58\u0f0b\u0f5b\u0f71\u0f7c\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7a\u0f0b\u0f58\u0f0b\u0f5b\u0f71\u0f7c\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7a\u0f0b\u0f58\u0f0b\u0f5b\u0f71\u0f7c\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"\u0f68\u0f7a\u0f0b\u0f5b\u0f7c\u0f62\u0f66\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7a\u0f0b\u0f5b\u0f7c\u0f62\u0f66\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7a\u0f0b\u0f5b\u0f7c\u0f62\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"\u0f60\u0f56\u0fb2\u0f74\u0f42\u0f0b\u0f61\u0f74\u0f63\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"\u0f68\u0f72\u0f66\u0f72\u0f0b\u0f4a\u0f62\u0f0b\u0f68\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f72\u0f66\u0f72\u0f0b\u0f4a\u0f62\u0f0b\u0f68\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f72\u0f66\u0f72\u0f0b\u0f4a\u0f62\u0f0b\u0f68\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"\u0f42\u0f74\u0f0b\u0f61\u0f0b\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"\u0f68\u0f72\u0f66\u0f0b\u0f62\u0f7a\u0f63\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f72\u0f66\u0f0b\u0f62\u0f7a\u0f63\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f72\u0f66\u0f0b\u0f62\u0f7a\u0f63\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"\u0f58\u0f7d\u0f66\u0f0b\u0f40\u0f7c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f58\u0f7d\u0f66\u0f0b\u0f40\u0f7c\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f58\u0f7d\u0f66\u0f0b\u0f40\u0f7c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"\u0f68\u0f0b\u0f62\u0f7a\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f0b\u0f62\u0f7a\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f0b\u0f62\u0f7a\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f62\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"\u0f56\u0fb7\u0f7c\u0f0b\u0f63\u0f72\u0f0b\u0f56\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"\u0f68\u0f7a\u0f0b\u0f40\u0f74\u0f0b\u0f4c\u0f7d\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"\u0f47\u0f7d\u0f0b\u0f47\u0f71\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f47\u0f7d\u0f0b\u0f47\u0f71\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f47\u0f7d\u0f0b\u0f47\u0f71\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"\u0f68\u0f62\u0f0b\u0f40\u0f74\u0f59\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f62\u0f0b\u0f40\u0f74\u0f59\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f62\u0f0b\u0f40\u0f74\u0f59\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"\u0f58\u0f0b\u0f42\u0fb7\u0f0b\u0f51\u0f71\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f58\u0f0b\u0f42\u0fb7\u0f0b\u0f51\u0f71\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f58\u0f0b\u0f42\u0fb7\u0f0b\u0f51\u0f71\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"\u0f55\u0f62\u0f0b\u0f53\u0f7a\u0f53\u0f0b\u0f4c\u0f7c\u0f0b \u0f4c\u0f72\u0f0b \u0f53\u0f7c\u0f0b\u0f62\u0f71\u0f7c\u0f53\u0f0b\u0f67\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f55\u0f62\u0f0b\u0f53\u0f7a\u0f53\u0f0b\u0f4c\u0f7c\u0f0b \u0f4c\u0f72\u0f0b \u0f53\u0f7c\u0f0b\u0f62\u0f71\u0f7c\u0f53\u0f0b\u0f67\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f55\u0f62\u0f0b\u0f53\u0f7a\u0f53\u0f0b\u0f4c\u0f7c\u0f0b \u0f4c\u0f72\u0f0b \u0f53\u0f7c\u0f0b\u0f62\u0f71\u0f7c\u0f53\u0f0b\u0f67\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"\u0f62\u0f72\u0f0b\u0f61\u0f74\u0f0b\u0f53\u0f72\u0f0b\u0f61\u0f71\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"\u0f61\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f71\u0f60\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f61\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f71\u0f60\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f61\u0f74\u0f0b\u0f62\u0f74\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f71\u0f60\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"\u0f61\u0f0b\u0f40\u0f74\u0f59\u0f72\u0f40\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f61\u0f0b\u0f40\u0f74\u0f59\u0f72\u0f40\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f61\u0f0b\u0f40\u0f74\u0f59\u0f72\u0f40\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"\u0f68\u0f7a\u0f4a\u0f0b\u0f63\u0f7a\u0f53\u0f0b\u0f4a\u0f72\u0f40\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7a\u0f4a\u0f0b\u0f63\u0f7a\u0f53\u0f0b\u0f4a\u0f72\u0f40\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f7a\u0f4a\u0f0b\u0f63\u0f7a\u0f53\u0f0b\u0f4a\u0f72\u0f40\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"\u0f56\u0fb2\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb2\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb2\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"\u0f40\u0f7c\u0f0b\u0f63\u0f7c\u0f58\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f7c\u0f0b\u0f63\u0f7c\u0f58\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f7c\u0f0b\u0f63\u0f7c\u0f58\u0f0b\u0f56\u0fb7\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"\u0f55\u0f63\u0f40\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f68\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f66\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f55\u0f63\u0f40\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f68\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f66\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f55\u0f63\u0f40\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f68\u0f71\u0f60\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"\u0f58\u0f71\u0f63\u0f0b\u0f51\u0f72\u0f56\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"\u0f54\u0f0b\u0f40\u0f72\u0f0b\u0f66\u0f84\u0f4f\u0f71\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f0b\u0f40\u0f72\u0f0b\u0f66\u0f84\u0f4f\u0f71\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f0b\u0f40\u0f72\u0f0b\u0f66\u0f84\u0f4f\u0f71\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"\u0f54\u0f0b\u0f62\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f60\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f0b\u0f62\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f60\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f0b\u0f62\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f60\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"\u0f66\u0f0b\u0f41\u0f0b\u0f63\u0f72\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f66\u0f0b\u0f41\u0f0b\u0f63\u0f72\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f66\u0f0b\u0f41\u0f0b\u0f63\u0f72\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"\u0f66\u0f74\u0f0b\u0f62\u0f72\u0f0b\u0f53\u0f71\u0f58\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"\u0f68\u0f62\u0f0b\u0f47\u0f7a\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f62\u0f0b\u0f47\u0f7a\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f62\u0f0b\u0f47\u0f7a\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"\u0f41\u0f72\u0f0b\u0f62\u0f72\u0f66\u0f9f\u0f0b\u0f58\u0f7a\u0f66\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f42\u0fb3\u0f72\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"\u0f42\u0f0b\u0f63\u0f0b\u0f54\u0f0b\u0f42\u0f7c\u0f66\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f7c\u0f0b\u0f45\u0f71\u0f60\u0f72\u0f0b\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"\u0f58\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f64\u0f71\u0f66\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f58\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f64\u0f71\u0f66\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f58\u0f7c\u0f0b\u0f62\u0f72\u0f0b\u0f64\u0f71\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"\u0f56\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f5b\u0f74\u0f0b\u0f5d\u0f7a\u0f0b\u0f63\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"\u0f56\u0f71\u0f7c\u0f63\u0f0b\u0f42\u0f7c\u0f0b\u0f42\u0f72\u0f62\u0f7a\u0f4c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0f71\u0f7c\u0f63\u0f0b\u0f42\u0f7c\u0f0b\u0f42\u0f72\u0f62\u0f7a\u0f4c\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0f71\u0f7c\u0f63\u0f0b\u0f42\u0f7c\u0f0b\u0f42\u0f72\u0f62\u0f7a\u0f4c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"\u0f68\u0f0b\u0f5b\u0f62\u0f0b\u0f56\u0fb7\u0f60\u0f72\u0f0b\u0f47\u0f71\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f0b\u0f5b\u0f62\u0f0b\u0f56\u0fb7\u0f60\u0f72\u0f0b\u0f47\u0f71\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f68\u0f0b\u0f5b\u0f62\u0f0b\u0f56\u0fb7\u0f60\u0f72\u0f0b\u0f47\u0f71\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"\u0f56\u0f44\u0f92\u0f0b\u0f63\u0f0b\u0f51\u0f7a\u0f64\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0f44\u0f92\u0f0b\u0f63\u0f0b\u0f51\u0f7a\u0f64\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0f44\u0f92\u0f0b\u0f63\u0f0b\u0f51\u0f7a\u0f64\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"\u0f40\u0f7a\u0f54\u0f0b\u0f56\u0f71\u0f4c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f7a\u0f54\u0f0b\u0f56\u0f71\u0f4c\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f7a\u0f54\u0f0b\u0f56\u0f71\u0f4c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
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
	$var($StringArray, Seychelles, $new($StringArray, {
		u"\u0f66\u0f7a\u0f0b\u0f64\u0f71\u0f63\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"\u0f68\u0f55\u0f0b\u0f42\u0f0b\u0f53\u0f72\u0f0b\u0f66\u0f84\u0f4f\u0f71\u0f53\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"\u0f40\u0f62\u0f66\u0f72\u0f0b\u0f53\u0f7c\u0f0b\u0f61\u0f62\u0f66\u0f40\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f62\u0f66\u0f72\u0f0b\u0f53\u0f7c\u0f0b\u0f61\u0f62\u0f66\u0f40\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f40\u0f62\u0f66\u0f72\u0f0b\u0f53\u0f7c\u0f0b\u0f61\u0f62\u0f66\u0f40\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f5b\u0f72\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"\u0f53\u0f7c\u0f0b\u0f56\u0f7c\u0f0b\u0f66\u0f72\u0f0b\u0f56\u0f72\u0f62\u0f66\u0f40\u0f72\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f7c\u0f0b\u0f56\u0f7c\u0f0b\u0f66\u0f72\u0f0b\u0f56\u0f72\u0f62\u0f66\u0f40\u0f72\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f7c\u0f0b\u0f56\u0f7c\u0f0b\u0f66\u0f72\u0f0b\u0f56\u0f72\u0f62\u0f66\u0f40\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"\u0f56\u0f0b\u0f63\u0f0b\u0f4c\u0f72\u0f0b\u0f56\u0f7c\u0f66\u0f72\u0f0b\u0f4f\u0f7c\u0f40\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0f0b\u0f63\u0f0b\u0f4c\u0f72\u0f0b\u0f56\u0f7c\u0f66\u0f72\u0f0b\u0f4f\u0f7c\u0f40\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0f0b\u0f63\u0f0b\u0f4c\u0f72\u0f0b\u0f56\u0f7c\u0f66\u0f72\u0f0b\u0f4f\u0f7c\u0f40\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"\u0f62\u0f92\u0fb1\u0f0b\u0f42\u0f62\u0f0b\u0f42\u0fb1\u0f72\u0f0b\u0f62\u0f92\u0fb1\u0f0b\u0f58\u0f5a\u0f7c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f55\u0f60\u0f74\u0f53\u0f4c\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f55\u0f60\u0f74\u0f53\u0f4c\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f72\u0f60\u0f74\u0f0b\u0f55\u0f60\u0f74\u0f53\u0f4c\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"\u0f55\u0f72\u0f62\u0f7a\u0f53\u0f45\u0f0b\u0f42\u0f72\u0f0b\u0f61\u0f0b\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"\u0f61\u0f7a\u0f0b\u0f40\u0f0b\u0f4f\u0f7a\u0f0b\u0f62\u0f72\u0f53\u0f0b\u0f56\u0f62\u0f42\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f61\u0f7a\u0f0b\u0f40\u0f0b\u0f4f\u0f7a\u0f0b\u0f62\u0f72\u0f53\u0f0b\u0f56\u0f62\u0f42\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f61\u0f7a\u0f0b\u0f40\u0f0b\u0f4f\u0f7a\u0f0b\u0f62\u0f72\u0f53\u0f0b\u0f56\u0f62\u0f42\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f61\u0f74\u0f0b\u0f62\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"\u0f63\u0fb7\u0f7c\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f55\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f71\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f54\u0f7a\u0f0b\u0f66\u0f72\u0f0b\u0f55\u0f72\u0f42\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f54\u0f7a\u0f0b\u0f66\u0f72\u0f0b\u0f55\u0f72\u0f42\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f54\u0f7a\u0f0b\u0f66\u0f72\u0f0b\u0f55\u0f72\u0f42\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"\u0f67\u0f0b\u0f5d\u0f60\u0f72\u0f0b-\u0f68\u0f7a\u0f0b\u0f63\u0f72\u0f60\u0f74\u0f0b\u0f64\u0f7a\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f67\u0f0b\u0f5d\u0f60\u0f72\u0f0b-\u0f68\u0f7a\u0f0b\u0f63\u0f72\u0f60\u0f74\u0f0b\u0f64\u0f7a\u0f53\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f67\u0f0b\u0f5d\u0f60\u0f72\u0f0b-\u0f68\u0f7a\u0f0b\u0f63\u0f72\u0f60\u0f74\u0f0b\u0f64\u0f7a\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"\u0f54\u0f60\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f51\u0f44\u0f0b\u0f58\u0f72\u0f0b\u0f40\u0f72\u0f0b\u0f63\u0f71\u0f7c\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f60\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f51\u0f44\u0f0b\u0f58\u0f72\u0f0b\u0f40\u0f72\u0f0b\u0f63\u0f71\u0f7c\u0f53\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f54\u0f60\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f51\u0f44\u0f0b\u0f58\u0f72\u0f0b\u0f40\u0f72\u0f0b\u0f63\u0f71\u0f7c\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f58\u0f60\u0f74\u0f0b\u0f4a\u0f7a\u0f53\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f58\u0f60\u0f74\u0f0b\u0f4a\u0f7a\u0f53\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0fb1\u0f44\u0f0b\u0f68\u0f0b\u0f58\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f40\u0f0b\u0f58\u0f60\u0f74\u0f0b\u0f4a\u0f7a\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f53\u0f4c\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"\u0f64\u0f62\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f72\u0f53\u0f0b\u0f4c\u0f7c\u0f0b\u0f53\u0f7a\u0f0b\u0f64\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f5a\u0f51\u0f0b\u0f63\u0fa1\u0f53\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f51\u0f56\u0f74\u0f66\u0f0b\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f49\u0f72\u0f53\u0f0b\u0f66\u0fb2\u0f74\u0f44\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
		""_s,
		u"\u0f56\u0f74\u0f66\u0f0b\u0f53\u0f74\u0f56\u0f0b\u0f55\u0fb1\u0f7c\u0f42\u0f66\u0f0b\u0f68\u0f71\u0f7c\u0f66\u0f0b\u0f4a\u0fb2\u0f7a\u0f63\u0f0b\u0f63\u0f72\u0f0b\u0f61\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
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
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Magadan"_s),
			$of(Magadan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
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
				u"\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f5d\u0f72\u0f46\u0f0b\u0f63\u0f74\u0f0b\u0f61\u0f7c\u0f51\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
				""_s,
				u"\u0f68\u0f71\u0f0b\u0f61\u0f62\u0f72\u0f64\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
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
				u"\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f5d\u0f72\u0f46\u0f0b\u0f63\u0f74\u0f0b\u0f61\u0f7c\u0f51\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
				""_s,
				u"\u0f56\u0fb2\u0f71\u0f72\u0f0b\u0f4a\u0f72\u0f64\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
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
			$of("Asia/Pontianak"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
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
				u"\u0f42\u0f72\u0f62\u0f72\u0f53\u0f0b\u0f5d\u0f72\u0f46\u0f0b\u0f63\u0f74\u0f0b\u0f61\u0f7c\u0f51\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
				""_s,
				u"\u0f56\u0fb2\u0f71\u0f72\u0f0b\u0f4a\u0f72\u0f64\u0f0b\u0f56\u0fb1\u0f71\u0f62\u0f0b\u0f51\u0f74\u0f66\u0f0b\u0f46\u0f74\u0f0b\u0f5a\u0f7c\u0f51"_s,
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
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
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
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
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
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
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
			$of("America/Scoresbysund"_s),
			$of(Greenland_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
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
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"\u0f63\u0f7c\u0f0b\u0f58\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"\u0f58\u0f0b\u0f64\u0f7a\u0f66\u0f0b\u0f54\u0f60\u0f72\u0f0b\u0f41\u0fb2\u0f7c\u0f58\u0f0b\u0f66\u0fa1\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"\u0f40\u0f71\u0f60\u0f72\u0f0b\u0f62\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"\u0f4c\u0f71\u0f0b\u0f40\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"\u0f4a\u0f74\u0f0b\u0f53\u0f72\u0f66\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"\u0f56\u0fb7\u0f0b\u0f62\u0f7a\u0f53\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"\u0f50\u0f72\u0f58\u0f0b\u0f55\u0f74\u0f42"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"\u0f68\u0f0b\u0f54\u0f72\u0f0b\u0f61"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"\u0f68\u0f7a\u0f0b\u0f50\u0f7a\u0f53\u0f66\u0f0b"_s)
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
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"\u0f4f\u0fb2\u0f72\u0f0b\u0f54\u0f7c\u0f0b\u0f63\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"\u0f56\u0fb7\u0f7a\u0f0b\u0f63\u0f72\u0f5b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"\u0f56\u0fb7\u0f7c\u0f0b\u0f42\u0f0b\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"\u0f51\u0f60\u0f74\u0f0b\u0f66\u0f71\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"\u0f68\u0f72\u0f0b\u0f53\u0f74\u0f0b\u0f5d\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"\u0f63\u0f0b\u0f54\u0f71\u0f5b\u0f84"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"\u0f54\u0f0b\u0f53\u0f0b\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"\u0f62\u0f72\u0f0b\u0f47\u0f72\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"\u0f4a\u0f71\u0f0b\u0f63\u0f71\u0f72\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"\u0f41\u0f71\u0f62\u0f0b\u0f4a\u0f74\u0f58"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"\u0f68\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f42\u0f74\u0f0b\u0f5d\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"\u0f45\u0f72\u0f0b\u0f40\u0f71\u0f0b\u0f42\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"\u0f67\u0f0b\u0f63\u0f72\u0f0b\u0f55\u0f7a\u0f42\u0f66\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"\u0f58\u0f71\u0f7c\u0f44\u0f40\u0f0b\u0f4a\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"\u0f53\u0f72\u0f0b\u0f54\u0f72\u0f0b\u0f42\u0f71\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"\u0f4f\u0f72\u0f60\u0f74\u0f0b\u0f5d\u0f0b\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"\u0f4a\u0f7c\u0f0b\u0f62\u0f7c\u0f53\u0f0b\u0f4a\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"\u0f61\u0f0b\u0f40\u0f74\u0f0b\u0f4f\u0f4f"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"\u0f55\u0f71\u0f60\u0f7a\u0f0b\u0f62\u0f7c\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"\u0f67\u0f7a\u0f63\u0f0b\u0f66\u0f72\u0f44\u0f0b\u0f40\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"\u0f56\u0fb7\u0f62\u0f0b\u0f56\u0f7a\u0f0b\u0f4c\u0f7c\u0f66"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"\u0f4c\u0f7c\u0f0b\u0f58\u0f72\u0f0b\u0f53\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"\u0f68\u0f7a\u0f4c\u0f0b\u0f58\u0f71\u0f7c\u0f53\u0f0b\u0f4a\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"\u0f62\u0f72\u0f0b\u0f66\u0f7c\u0f0b\u0f63\u0f72\u0f60\u0f74\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"\u0f66\u0f71\u0f53\u0f0b\u0f4a\u0f72\u0f0b\u0f61\u0f0b\u0f42\u0fb7\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"\u0f68\u0f72\u0f66\u0f72\u0f0b\u0f4a\u0f7a\u0f4a\u0f0b \u0f47\u0f71\u0f7c\u0f53\u0f66\u0f72\u0f0b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"\u0f4c\u0f7a\u0f0b\u0f5d\u0f72\u0f66\u0f0d"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"\u0f56\u0f62\u0f0b\u0f58\u0f74\u0f0b\u0f51"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"\u0f42\u0f71\u0f74\u0f66\u0f72\u0f0b \u0f56\u0f60\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"\u0f42\u0fb7\u0f7c\u0f0b\u0f4a\u0f0b\u0f58\u0f0b\u0f63"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"\u0f58\u0f60\u0f74\u0f0b\u0f66\u0f71\u0f7c\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"\u0f40\u0f7c\u0f0b\u0f54\u0f7a\u0f53\u0f0b\u0f67\u0f7a\u0f0b\u0f42\u0f7a\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"\u0f40\u0f7c\u0f66\u0f0b\u0f4a\u0f0b\u0f62\u0f72\u0f0b\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"\u0f68\u0f7a\u0f63\u0f0b \u0f66\u0f71\u0f63\u0f0b\u0f56\u0f0b\u0f4c\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"\u0f58\u0f7a\u0f40\u0f0b\u0f66\u0f72\u0f0b\u0f40\u0f7c\u0f0b \u0f66\u0f72\u0f0b\u0f4a\u0f72"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"\u0f54\u0f7a\u0f44\u0f0b\u0f53\u0f72\u0f62\u0f0b\u0f4f\u0f74\u0f44"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"\u0f62\u0f71\u0f7a\u0f0b\u0f53\u0f72\u0f0b\u0f62\u0f72\u0f0b\u0f5d\u0f62"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"\u0f4a\u0f7a\u0f0b\u0f42\u0f74\u0f0b\u0f66\u0f72\u0f0b\u0f42\u0f71\u0f63\u0f0b\u0f54"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"\u0f50\u0f53\u0f0b\u0f4c\u0f62\u0f0b \u0f56\u0f60\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"\u0f51\u0f60\u0f74\u0f0b\u0f66\u0f71\u0f7c\u0f53\u0f0b \u0f40\u0f72\u0f62\u0f72\u0f40"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"\u0f62\u0f7a\u0f53\u0f0b\u0f40\u0f72\u0f53\u0f0b \u0f68\u0f72\u0f53\u0f0b\u0f63\u0f7a\u0f4a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"\u0f40\u0f7a\u0f58\u0f0b\u0f56\u0f72\u0f62\u0f72\u0f51\u0f46\u0f0b \u0f56\u0f60\u0f7a"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"\u0f68\u0f0b\u0f4f\u0f72\u0f0b\u0f40\u0f7c\u0f0b\u0f40\u0f71\u0f53"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"\u0f66\u0f71\u0f53\u0f0b\u0f4a\u0f7c\u0f0b \u0f4c\u0f7c\u0f0b\u0f58\u0f72\u0f44\u0f0b\u0f42\u0fb7\u0f7c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"\u0f66\u0f74\u0f0b\u0f68\u0f72\u0f55\u0f4a\u0f0b\u0f40\u0f0b\u0f62\u0f7a\u0f53\u0f4a"_s)
		})
	}));
	return data;
}

TimeZoneNames_dz::TimeZoneNames_dz() {
}

$Class* TimeZoneNames_dz::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_dz, name, initialize, &_TimeZoneNames_dz_ClassInfo_, allocate$TimeZoneNames_dz);
	return class$;
}

$Class* TimeZoneNames_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun