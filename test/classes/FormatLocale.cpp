#include <FormatLocale.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef FORMAT
#undef FRANCE
#undef US

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;

class FormatLocale$$Lambda$lambda$main$0 : public $IntConsumer {
	$class(FormatLocale$$Lambda$lambda$main$0, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$() {
	}
	virtual void accept(int32_t i) override {
		FormatLocale::lambda$main$0(i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FormatLocale$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FormatLocale$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatLocale$$Lambda$lambda$main$0::*)()>(&FormatLocale$$Lambda$lambda$main$0::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FormatLocale$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FormatLocale$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	nullptr,
	methodInfos
};
$Class* FormatLocale$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(FormatLocale$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FormatLocale$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _FormatLocale_FieldInfo_[] = {
	{"src", "F", nullptr, $STATIC | $FINAL, $staticField(FormatLocale, src)},
	{"formatLocale", "Ljava/util/List;", "Ljava/util/List<Ljava/util/Locale;>;", $STATIC | $FINAL, $staticField(FormatLocale, formatLocale)},
	{"expected", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(FormatLocale, expected)},
	{}
};

$MethodInfo _FormatLocale_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatLocale::*)()>(&FormatLocale::init$))},
	{"lambda$main$0", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t)>(&FormatLocale::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FormatLocale::main))},
	{}
};

$ClassInfo _FormatLocale_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FormatLocale",
	"java.lang.Object",
	nullptr,
	_FormatLocale_FieldInfo_,
	_FormatLocale_MethodInfo_
};

$Object* allocate$FormatLocale($Class* clazz) {
	return $of($alloc(FormatLocale));
}

float FormatLocale::src = 0.0;
$List* FormatLocale::formatLocale = nullptr;
$List* FormatLocale::expected = nullptr;

void FormatLocale::init$() {
}

void FormatLocale::main($StringArray* args) {
	$init(FormatLocale);
	$nc($($IntStream::range(0, $nc(FormatLocale::formatLocale)->size())))->forEach(static_cast<$IntConsumer*>($$new(FormatLocale$$Lambda$lambda$main$0)));
}

void FormatLocale::lambda$main$0(int32_t i) {
	$init(FormatLocale);
	$init($Locale$Category);
	$Locale::setDefault($Locale$Category::FORMAT, $cast($Locale, $($nc(FormatLocale::formatLocale)->get(i))));
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$$new($PrintStream, static_cast<$OutputStream*>(baos))->format("%.2f"_s, $$new($ObjectArray, {$($of($Float::valueOf(FormatLocale::src)))}));
	if (!$nc($(baos->toString()))->equals($($nc(FormatLocale::expected)->get(i)))) {
		$var($String, var$2, $$str({"Wrong conversion with PrintStream.format() in locale "_s, $($nc(FormatLocale::formatLocale)->get(i)), ". Expected: "_s}));
		$var($String, var$1, $$concat(var$2, $cast($String, $($nc(FormatLocale::expected)->get(i)))));
		$var($String, var$0, $$concat(var$1, " Returned: "));
		$throwNew($RuntimeException, $$concat(var$0, $(baos->toString())));
	}
}

void clinit$FormatLocale($Class* class$) {
	FormatLocale::src = 3.14f;
	$init($Locale);
	$assignStatic(FormatLocale::formatLocale, $List::of($Locale::US, $Locale::FRANCE));
	$assignStatic(FormatLocale::expected, $List::of("3.14"_s, "3,14"_s));
}

FormatLocale::FormatLocale() {
}

$Class* FormatLocale::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FormatLocale$$Lambda$lambda$main$0::classInfo$.name)) {
			return FormatLocale$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(FormatLocale, name, initialize, &_FormatLocale_ClassInfo_, clinit$FormatLocale, allocate$FormatLocale);
	return class$;
}

$Class* FormatLocale::class$ = nullptr;