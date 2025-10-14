#machine generated

add_subdirectory("chrono")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.nontestng.java._0_SRCS)
file(GLOB test-classes.nontestng.java._0_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.nontestng.java._0_HEADERS}) 
list(LENGTH test-classes.nontestng.java._0_SRCS test-classes.nontestng.java._0_SRCS_LENGTH)
if(test-classes.nontestng.java._0_SRCS_LENGTH)
	add_library(test-classes.nontestng.java._0 OBJECT "${test-classes.nontestng.java._0_SRCS}" "${test-classes.nontestng.java._0_HEADERS}")
	jcpp_enable_bigobj(test-classes.nontestng.java._0)
endif()