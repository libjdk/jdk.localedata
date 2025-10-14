#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.nontestng.java._1_SRCS)
file(GLOB test-classes.nontestng.java._1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.nontestng.java._1_HEADERS}) 
list(LENGTH test-classes.nontestng.java._1_SRCS test-classes.nontestng.java._1_SRCS_LENGTH)
if(test-classes.nontestng.java._1_SRCS_LENGTH)
	add_library(test-classes.nontestng.java._1 OBJECT "${test-classes.nontestng.java._1_SRCS}" "${test-classes.nontestng.java._1_HEADERS}")
	jcpp_enable_bigobj(test-classes.nontestng.java._1)
endif()