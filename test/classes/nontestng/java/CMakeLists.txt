#machine generated

add_subdirectory("time")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.nontestng.java_SRCS)
file(GLOB test-classes.nontestng.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.nontestng.java_HEADERS}) 
list(LENGTH test-classes.nontestng.java_SRCS test-classes.nontestng.java_SRCS_LENGTH)
if(test-classes.nontestng.java_SRCS_LENGTH)
	add_library(test-classes.nontestng.java OBJECT "${test-classes.nontestng.java_SRCS}" "${test-classes.nontestng.java_HEADERS}")
	jcpp_enable_bigobj(test-classes.nontestng.java)
endif()