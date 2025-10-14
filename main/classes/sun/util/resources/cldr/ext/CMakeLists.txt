#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.resources.c_3_SRCS)
file(GLOB classes.sun.util.resources.c_3_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.resources.c_3_HEADERS}) 
list(LENGTH classes.sun.util.resources.c_3_SRCS classes.sun.util.resources.c_3_SRCS_LENGTH)
if(classes.sun.util.resources.c_3_SRCS_LENGTH)
	add_library(classes.sun.util.resources.c_3 OBJECT "${classes.sun.util.resources.c_3_SRCS}" "${classes.sun.util.resources.c_3_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.resources.c_3)
endif()