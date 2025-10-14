#machine generated

add_subdirectory("java")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.nontestng_SRCS)
file(GLOB test-classes.nontestng_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.nontestng_HEADERS}) 
list(LENGTH test-classes.nontestng_SRCS test-classes.nontestng_SRCS_LENGTH)
if(test-classes.nontestng_SRCS_LENGTH)
	add_library(test-classes.nontestng OBJECT "${test-classes.nontestng_SRCS}" "${test-classes.nontestng_HEADERS}")
	jcpp_enable_bigobj(test-classes.nontestng)
endif()