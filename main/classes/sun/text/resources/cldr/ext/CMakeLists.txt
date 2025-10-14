#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.text.resources.c_1_SRCS)
file(GLOB classes.sun.text.resources.c_1_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.text.resources.c_1_HEADERS}) 
list(LENGTH classes.sun.text.resources.c_1_SRCS classes.sun.text.resources.c_1_SRCS_LENGTH)
if(classes.sun.text.resources.c_1_SRCS_LENGTH)
	add_library(classes.sun.text.resources.c_1 OBJECT "${classes.sun.text.resources.c_1_SRCS}" "${classes.sun.text.resources.c_1_HEADERS}")
	jcpp_enable_bigobj(classes.sun.text.resources.c_1)
endif()